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
 * $Filename__:adc_1797.h$ 
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
 * $Name______:adc_1797$ 
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
 *      File name: adc_1797.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ADC_1797_H
#define _ADC_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _ADC_UL(x) x
#else
    #define _ADC_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module ADC on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0101000] : ADC Clock Control Register
    volatile uint32 RESERVED0[2];        // [0xF0101004...0xF010100B] : reserved space
    volatile uint32 KSCFG;               // [0xF010100C] : Kernel State Configuration Register
    volatile uint32 RSIR[5];             // [0xF0101010...0xF0101023] : Request Source 0 Input Register
    volatile uint32 RESERVED1[3];        // [0xF0101024...0xF010102F] : reserved space
    volatile uint32 GLOBCTR;             // [0xF0101030] : Global Control Register
    volatile uint32 GLOBCFG;             // [0xF0101034] : Global Configuration Register
    volatile uint32 GLOBSTR;             // [0xF0101038] : Global Status Register
    volatile uint32 ASENR;               // [0xF010103C] : Arbitration Slot Enable Register
    volatile uint32 RSPR0;               // [0xF0101040] : Request Source Priority Register 0
    volatile uint32 RSPR4;               // [0xF0101044] : Request Source Priority Register 4
    volatile uint32 SYNCTR;              // [0xF0101048] : Synchronization Control Register
    volatile uint32 RESERVED2[1];        // [0xF010104C...0xF010104F] : reserved space
    volatile uint32 INPCR[4];            // [0xF0101050...0xF010105F] : Input Class Register 
    volatile uint32 CHFR;                // [0xF0101060] : Channel Flag Register
    volatile uint32 CHFCR;               // [0xF0101064] : Channel Flag Clear Register
    volatile uint32 CHENPR0;             // [0xF0101068] : Channel Event Node Pointer Register 0
    volatile uint32 CHENPR8;             // [0xF010106C] : Channel Event Node Pointer Register 8
    volatile uint32 EVFR;                // [0xF0101070] : Event Flag Register
    volatile uint32 EVFCR;               // [0xF0101074] : Event Flag Clear Register
    volatile uint32 EVNPR;               // [0xF0101078] : Event Node Pointer Register
    volatile uint32 RESERVED3[1];        // [0xF010107C...0xF010107F] : reserved space
    volatile uint32 QMR0;                // [0xF0101080] : Queue 0 Mode Register
    volatile uint32 QSR0;                // [0xF0101084] : Queue 0 Status Register
    volatile uint32 Q0R0;                // [0xF0101088] : Queue 0 Register 0
    volatile uint32 QBUR0;               // [0xF010108C] : Queue 0 Backup Register
    volatile uint32 CRCR1;               // [0xF0101090] : Conversion Request 1 Control Register
    volatile uint32 CRPR1;               // [0xF0101094] : Conversion Request 1 Pending Register
    volatile uint32 CRMR1;               // [0xF0101098] : Conversion Request 1 Mode Register
    volatile uint32 RESERVED4[1];        // [0xF010109C...0xF010109F] : reserved space
    volatile uint32 QMR2;                // [0xF01010A0] : Queue 2 Mode Register
    volatile uint32 QSR2;                // [0xF01010A4] : Queue 2 Status Register
    volatile uint32 Q0R2;                // [0xF01010A8] : Queue 2 Register 0
    volatile uint32 QBUR2;               // [0xF01010AC] : Queue 2 Backup Register
    volatile uint32 CRCR3;               // [0xF01010B0] : Conversion Request 3 Control Register
    volatile uint32 CRPR3;               // [0xF01010B4] : Conversion Request 3 Pending Register
    volatile uint32 CRMR3;               // [0xF01010B8] : Conversion Request 3 Mode Register
    volatile uint32 RESERVED5[1];        // [0xF01010BC...0xF01010BF] : reserved space
    volatile uint32 QMR4;                // [0xF01010C0] : Queue 4 Mode Register
    volatile uint32 QSR4;                // [0xF01010C4] : Queue 4 Status Register
    volatile uint32 Q0R4;                // [0xF01010C8] : Queue 4 Register 0
    volatile uint32 QBUR4;               // [0xF01010CC] : Queue 4 Backup Register
    volatile uint32 RESERVED6[8];        // [0xF01010D0...0xF01010EF] : reserved space
    volatile uint32 LCBR[4];             // [0xF01010F0...0xF01010FF] : Limit Check Boundary Register 
    volatile uint32 CHCTR[16];           // [0xF0101100...0xF010113F] : Channel 0 Control Register
    volatile uint32 RCR[16];             // [0xF0101140...0xF010117F] : Result Control Register 
    volatile uint32 RESR[16];            // [0xF0101180...0xF01011BF] : Result Register 
    volatile uint32 RESRD[16];           // [0xF01011C0...0xF01011FF] : Result Register 0 for Debugging
    volatile uint32 VFR;                 // [0xF0101200] : Valid Flag Register
    volatile uint32 INTR;                // [0xF0101204] : Interrupt Activation Register
    volatile uint32 RNPR0;               // [0xF0101208] : Result Node Pointer Register 0
    volatile uint32 RNPR8;               // [0xF010120C] : Result Node Pointer Register 8
    volatile uint32 ALR0;                // [0xF0101210] : Alias Register 0
    volatile uint32 RESERVED7[1];        // [0xF0101214...0xF0101217] : reserved space
    volatile uint32 APR;                 // [0xF0101218] : Access Protection Register
    volatile uint32 RESERVED8[1];        // [0xF010121C...0xF010121F] : reserved space
    volatile uint32 EMCTR;               // [0xF0101220] : External Multiplexer Control Register
    volatile uint32 RESERVED9[110];      // [0xF0101224...0xF01013DB] : reserved space
    volatile uint32 SRC8;                // [0xF01013DC] : ADC Service Request Control Register 8
    volatile uint32 SRC7;                // [0xF01013E0] : ADC Service Request Control Register 7
    volatile uint32 SRC6;                // [0xF01013E4] : ADC Service Request Control Register 6
    volatile uint32 SRC5;                // [0xF01013E8] : ADC Service Request Control Register 5
    volatile uint32 SRC4;                // [0xF01013EC] : ADC Service Request Control Register 4
    volatile uint32 SRC3;                // [0xF01013F0] : ADC Service Request Control Register 3
    volatile uint32 SRC2;                // [0xF01013F4] : ADC Service Request Control Register 2
    volatile uint32 SRC1;                // [0xF01013F8] : ADC Service Request Control Register 1
    volatile uint32 SRC0;                // [0xF01013FC] : ADC Service Request Control Register 0
} ADC_RegMap_t;

#define QINR0 QBUR0 /* QINR0 has same address as QBUR0 */
#define QINR2 QBUR2 /* QINR2 has same address as QBUR2 */
#define QINR4 QBUR4 /* QINR4 has same address as QBUR4 */

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern ADC_RegMap_t ADC0 __attribute__ ((asection (".bss.label_only")));
extern ADC_RegMap_t ADC1 __attribute__ ((asection (".bss.label_only")));
extern ADC_RegMap_t ADC2 __attribute__ ((asection (".bss.label_only")));
extern ADC_RegMap_t ADC[3] __attribute__ ((asection (".bss.label_only")));


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

/* ADC_ID_MOD_NUMBER (r) */
#define ADC_ID_MOD_NUMBER_POS                _ADC_UL(16)
#define ADC_ID_MOD_NUMBER_LEN                _ADC_UL(16)

/* ADC_ID_MOD_REV (r) */
#define ADC_ID_MOD_REV_POS                   _ADC_UL(0)
#define ADC_ID_MOD_REV_LEN                   _ADC_UL(8)

/* ADC_ID_MOD_TYPE (r) */
#define ADC_ID_MOD_TYPE_POS                  _ADC_UL(8)
#define ADC_ID_MOD_TYPE_LEN                  _ADC_UL(8)

/* ADC0_ID_MOD_NUMBER (r) */
#define ADC0_ID_MOD_NUMBER_POS               _ADC_UL(16)
#define ADC0_ID_MOD_NUMBER_LEN               _ADC_UL(16)

/* ADC0_ID_MOD_REV (r) */
#define ADC0_ID_MOD_REV_POS                  _ADC_UL(0)
#define ADC0_ID_MOD_REV_LEN                  _ADC_UL(8)

/* ADC0_ID_MOD_TYPE (r) */
#define ADC0_ID_MOD_TYPE_POS                 _ADC_UL(8)
#define ADC0_ID_MOD_TYPE_LEN                 _ADC_UL(8)

/* ADC1_ID_MOD_NUMBER (r) */
#define ADC1_ID_MOD_NUMBER_POS               _ADC_UL(16)
#define ADC1_ID_MOD_NUMBER_LEN               _ADC_UL(16)

/* ADC1_ID_MOD_REV (r) */
#define ADC1_ID_MOD_REV_POS                  _ADC_UL(0)
#define ADC1_ID_MOD_REV_LEN                  _ADC_UL(8)

/* ADC1_ID_MOD_TYPE (r) */
#define ADC1_ID_MOD_TYPE_POS                 _ADC_UL(8)
#define ADC1_ID_MOD_TYPE_LEN                 _ADC_UL(8)

/* ADC2_ID_MOD_NUMBER (r) */
#define ADC2_ID_MOD_NUMBER_POS               _ADC_UL(16)
#define ADC2_ID_MOD_NUMBER_LEN               _ADC_UL(16)

/* ADC2_ID_MOD_REV (r) */
#define ADC2_ID_MOD_REV_POS                  _ADC_UL(0)
#define ADC2_ID_MOD_REV_LEN                  _ADC_UL(8)

/* ADC2_ID_MOD_TYPE (r) */
#define ADC2_ID_MOD_TYPE_POS                 _ADC_UL(8)
#define ADC2_ID_MOD_TYPE_LEN                 _ADC_UL(8)

/* ADC_CLC_DISR (rw) */
#define ADC_CLC_DISR_POS                     _ADC_UL(0)
#define ADC_CLC_DISR_LEN                     _ADC_UL(1)

/* ADC_CLC_DISS (r) */
#define ADC_CLC_DISS_POS                     _ADC_UL(1)
#define ADC_CLC_DISS_LEN                     _ADC_UL(1)

/* ADC_CLC_SPEN (rw) */
#define ADC_CLC_SPEN_POS                     _ADC_UL(2)
#define ADC_CLC_SPEN_LEN                     _ADC_UL(1)

/* ADC_CLC_EDIS (rw) */
#define ADC_CLC_EDIS_POS                     _ADC_UL(3)
#define ADC_CLC_EDIS_LEN                     _ADC_UL(1)

/* ADC_CLC_SBWE (w) */
#define ADC_CLC_SBWE_POS                     _ADC_UL(4)
#define ADC_CLC_SBWE_LEN                     _ADC_UL(1)

/* ADC_CLC_FSOE (rw) */
#define ADC_CLC_FSOE_POS                     _ADC_UL(5)
#define ADC_CLC_FSOE_LEN                     _ADC_UL(1)

/* ADC_KSCFG_ACK (rh) */
#define ADC_KSCFG_ACK_POS                    _ADC_UL(2)
#define ADC_KSCFG_ACK_LEN                    _ADC_UL(1)

/* ADC_KSCFG_SUSREQ (rh) */
#define ADC_KSCFG_SUSREQ_POS                 _ADC_UL(3)
#define ADC_KSCFG_SUSREQ_LEN                 _ADC_UL(1)

/* ADC_KSCFG_NOMCFG (rw) */
#define ADC_KSCFG_NOMCFG_POS                 _ADC_UL(4)
#define ADC_KSCFG_NOMCFG_LEN                 _ADC_UL(2)

/* ADC_KSCFG_BPNOM (w) */
#define ADC_KSCFG_BPNOM_POS                  _ADC_UL(7)
#define ADC_KSCFG_BPNOM_LEN                  _ADC_UL(1)

/* ADC_KSCFG_SUMCFG (rw) */
#define ADC_KSCFG_SUMCFG_POS                 _ADC_UL(8)
#define ADC_KSCFG_SUMCFG_LEN                 _ADC_UL(2)

/* ADC_KSCFG_BPSUM (w) */
#define ADC_KSCFG_BPSUM_POS                  _ADC_UL(11)
#define ADC_KSCFG_BPSUM_LEN                  _ADC_UL(1)

/* ADC_RSIR_GTSEL (rw) */
#define ADC_RSIR_GTSEL_POS                   _ADC_UL(0)
#define ADC_RSIR_GTSEL_LEN                   _ADC_UL(3)

/* ADC_RSIR_TMEN (rw) */
#define ADC_RSIR_TMEN_POS                    _ADC_UL(4)
#define ADC_RSIR_TMEN_LEN                    _ADC_UL(1)

/* ADC_RSIR_GTI (rh) */
#define ADC_RSIR_GTI_POS                     _ADC_UL(7)
#define ADC_RSIR_GTI_LEN                     _ADC_UL(1)

/* ADC_RSIR_TRSEL (rw) */
#define ADC_RSIR_TRSEL_POS                   _ADC_UL(8)
#define ADC_RSIR_TRSEL_LEN                   _ADC_UL(3)

/* ADC_RSIR_FEN (rw) */
#define ADC_RSIR_FEN_POS                     _ADC_UL(12)
#define ADC_RSIR_FEN_LEN                     _ADC_UL(1)

/* ADC_RSIR_REN (rw) */
#define ADC_RSIR_REN_POS                     _ADC_UL(13)
#define ADC_RSIR_REN_LEN                     _ADC_UL(1)

/* ADC_RSIR_TRI (rh) */
#define ADC_RSIR_TRI_POS                     _ADC_UL(15)
#define ADC_RSIR_TRI_LEN                     _ADC_UL(1)

/* ADC_GLOBCTR_DIVA (rw) */
#define ADC_GLOBCTR_DIVA_POS                 _ADC_UL(0)
#define ADC_GLOBCTR_DIVA_LEN                 _ADC_UL(6)

/* ADC_GLOBCTR_DIVD (rw) */
#define ADC_GLOBCTR_DIVD_POS                 _ADC_UL(6)
#define ADC_GLOBCTR_DIVD_LEN                 _ADC_UL(2)

/* ADC_GLOBCTR_ANON (rw) */
#define ADC_GLOBCTR_ANON_POS                 _ADC_UL(8)
#define ADC_GLOBCTR_ANON_LEN                 _ADC_UL(2)

/* ADC_GLOBCTR_ARBRND (rw) */
#define ADC_GLOBCTR_ARBRND_POS               _ADC_UL(10)
#define ADC_GLOBCTR_ARBRND_LEN               _ADC_UL(2)

/* ADC_GLOBCTR_ARBM (rw) */
#define ADC_GLOBCTR_ARBM_POS                 _ADC_UL(15)
#define ADC_GLOBCTR_ARBM_LEN                 _ADC_UL(1)

/* ADC_GLOBCFG_MTM7 (rw) */
#define ADC_GLOBCFG_MTM7_POS                 _ADC_UL(4)
#define ADC_GLOBCFG_MTM7_LEN                 _ADC_UL(1)

/* ADC_GLOBCFG_SUCAL (rw) */
#define ADC_GLOBCFG_SUCAL_POS                _ADC_UL(5)
#define ADC_GLOBCFG_SUCAL_LEN                _ADC_UL(1)

/* ADC_GLOBCFG_DPCAL (rw) */
#define ADC_GLOBCFG_DPCAL_POS                _ADC_UL(6)
#define ADC_GLOBCFG_DPCAL_LEN                _ADC_UL(1)

/* ADC_GLOBSTR_BUSY (rh) */
#define ADC_GLOBSTR_BUSY_POS                 _ADC_UL(0)
#define ADC_GLOBSTR_BUSY_LEN                 _ADC_UL(1)

/* ADC_GLOBSTR_SAMPLE (rh) */
#define ADC_GLOBSTR_SAMPLE_POS               _ADC_UL(1)
#define ADC_GLOBSTR_SAMPLE_LEN               _ADC_UL(1)

/* ADC_GLOBSTR_CAL (rh) */
#define ADC_GLOBSTR_CAL_POS                  _ADC_UL(2)
#define ADC_GLOBSTR_CAL_LEN                  _ADC_UL(1)

/* ADC_GLOBSTR_CHNR (rh) */
#define ADC_GLOBSTR_CHNR_POS                 _ADC_UL(3)
#define ADC_GLOBSTR_CHNR_LEN                 _ADC_UL(4)

/* ADC_GLOBSTR_ANON (rh) */
#define ADC_GLOBSTR_ANON_POS                 _ADC_UL(8)
#define ADC_GLOBSTR_ANON_LEN                 _ADC_UL(2)

/* ADC_GLOBSTR_SYNRUN (rh) */
#define ADC_GLOBSTR_SYNRUN_POS               _ADC_UL(10)
#define ADC_GLOBSTR_SYNRUN_LEN               _ADC_UL(1)

/* ADC_GLOBSTR_CSRC (rh) */
#define ADC_GLOBSTR_CSRC_POS                 _ADC_UL(11)
#define ADC_GLOBSTR_CSRC_LEN                 _ADC_UL(3)

/* ADC_ASENR_ASEN0 (rw) */
#define ADC_ASENR_ASEN0_POS                  _ADC_UL(0)
#define ADC_ASENR_ASEN0_LEN                  _ADC_UL(1)

/* ADC_ASENR_ASEN1 (rw) */
#define ADC_ASENR_ASEN1_POS                  _ADC_UL(1)
#define ADC_ASENR_ASEN1_LEN                  _ADC_UL(1)

/* ADC_ASENR_ASEN2 (rw) */
#define ADC_ASENR_ASEN2_POS                  _ADC_UL(2)
#define ADC_ASENR_ASEN2_LEN                  _ADC_UL(1)

/* ADC_ASENR_ASEN3 (rw) */
#define ADC_ASENR_ASEN3_POS                  _ADC_UL(3)
#define ADC_ASENR_ASEN3_LEN                  _ADC_UL(1)

/* ADC_ASENR_ASEN4 (rw) */
#define ADC_ASENR_ASEN4_POS                  _ADC_UL(4)
#define ADC_ASENR_ASEN4_LEN                  _ADC_UL(1)

/* ADC_RSPR0_PRIO0 (rw) */
#define ADC_RSPR0_PRIO0_POS                  _ADC_UL(0)
#define ADC_RSPR0_PRIO0_LEN                  _ADC_UL(2)

/* ADC_RSPR0_PRIO1 (rw) */
#define ADC_RSPR0_PRIO1_POS                  _ADC_UL(4)
#define ADC_RSPR0_PRIO1_LEN                  _ADC_UL(2)

/* ADC_RSPR0_PRIO2 (rw) */
#define ADC_RSPR0_PRIO2_POS                  _ADC_UL(8)
#define ADC_RSPR0_PRIO2_LEN                  _ADC_UL(2)

/* ADC_RSPR0_PRIO3 (rw) */
#define ADC_RSPR0_PRIO3_POS                  _ADC_UL(12)
#define ADC_RSPR0_PRIO3_LEN                  _ADC_UL(2)

/* ADC_RSPR0_CSM0 (rw) */
#define ADC_RSPR0_CSM0_POS                   _ADC_UL(3)
#define ADC_RSPR0_CSM0_LEN                   _ADC_UL(1)

/* ADC_RSPR0_CSM1 (rw) */
#define ADC_RSPR0_CSM1_POS                   _ADC_UL(7)
#define ADC_RSPR0_CSM1_LEN                   _ADC_UL(1)

/* ADC_RSPR0_CSM2 (rw) */
#define ADC_RSPR0_CSM2_POS                   _ADC_UL(11)
#define ADC_RSPR0_CSM2_LEN                   _ADC_UL(1)

/* ADC_RSPR0_CSM3 (rw) */
#define ADC_RSPR0_CSM3_POS                   _ADC_UL(15)
#define ADC_RSPR0_CSM3_LEN                   _ADC_UL(1)

/* ADC_RSPR4_PRIO4 (rw) */
#define ADC_RSPR4_PRIO4_POS                  _ADC_UL(0)
#define ADC_RSPR4_PRIO4_LEN                  _ADC_UL(2)

/* ADC_RSPR4_CSM4 (rw) */
#define ADC_RSPR4_CSM4_POS                   _ADC_UL(3)
#define ADC_RSPR4_CSM4_LEN                   _ADC_UL(1)

/* ADC_SYNCTR_STSEL (rw) */
#define ADC_SYNCTR_STSEL_POS                 _ADC_UL(0)
#define ADC_SYNCTR_STSEL_LEN                 _ADC_UL(2)

/* ADC_SYNCTR_EVALR1 (rw) */
#define ADC_SYNCTR_EVALR1_POS                _ADC_UL(4)
#define ADC_SYNCTR_EVALR1_LEN                _ADC_UL(1)

/* ADC_SYNCTR_EVALR2 (rw) */
#define ADC_SYNCTR_EVALR2_POS                _ADC_UL(5)
#define ADC_SYNCTR_EVALR2_LEN                _ADC_UL(1)

/* ADC_SYNCTR_EVALR3 (rw) */
#define ADC_SYNCTR_EVALR3_POS                _ADC_UL(6)
#define ADC_SYNCTR_EVALR3_LEN                _ADC_UL(1)

/* ADC_INPCR_STC (rw) */
#define ADC_INPCR_STC_POS                    _ADC_UL(0)
#define ADC_INPCR_STC_LEN                    _ADC_UL(8)

/* ADC_INPCR_DW (rw) */
#define ADC_INPCR_DW_POS                     _ADC_UL(8)
#define ADC_INPCR_DW_LEN                     _ADC_UL(2)

/* ADC_CHFR_FC0 (rwh) */
#define ADC_CHFR_FC0_POS                     _ADC_UL(0)
#define ADC_CHFR_FC0_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC1 (rwh) */
#define ADC_CHFR_FC1_POS                     _ADC_UL(1)
#define ADC_CHFR_FC1_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC2 (rwh) */
#define ADC_CHFR_FC2_POS                     _ADC_UL(2)
#define ADC_CHFR_FC2_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC3 (rwh) */
#define ADC_CHFR_FC3_POS                     _ADC_UL(3)
#define ADC_CHFR_FC3_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC4 (rwh) */
#define ADC_CHFR_FC4_POS                     _ADC_UL(4)
#define ADC_CHFR_FC4_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC5 (rwh) */
#define ADC_CHFR_FC5_POS                     _ADC_UL(5)
#define ADC_CHFR_FC5_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC6 (rwh) */
#define ADC_CHFR_FC6_POS                     _ADC_UL(6)
#define ADC_CHFR_FC6_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC7 (rwh) */
#define ADC_CHFR_FC7_POS                     _ADC_UL(7)
#define ADC_CHFR_FC7_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC8 (rwh) */
#define ADC_CHFR_FC8_POS                     _ADC_UL(8)
#define ADC_CHFR_FC8_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC9 (rwh) */
#define ADC_CHFR_FC9_POS                     _ADC_UL(9)
#define ADC_CHFR_FC9_LEN                     _ADC_UL(1)

/* ADC_CHFR_FC10 (rwh) */
#define ADC_CHFR_FC10_POS                    _ADC_UL(10)
#define ADC_CHFR_FC10_LEN                    _ADC_UL(1)

/* ADC_CHFR_FC11 (rwh) */
#define ADC_CHFR_FC11_POS                    _ADC_UL(11)
#define ADC_CHFR_FC11_LEN                    _ADC_UL(1)

/* ADC_CHFR_FC12 (rwh) */
#define ADC_CHFR_FC12_POS                    _ADC_UL(12)
#define ADC_CHFR_FC12_LEN                    _ADC_UL(1)

/* ADC_CHFR_FC13 (rwh) */
#define ADC_CHFR_FC13_POS                    _ADC_UL(13)
#define ADC_CHFR_FC13_LEN                    _ADC_UL(1)

/* ADC_CHFR_FC14 (rwh) */
#define ADC_CHFR_FC14_POS                    _ADC_UL(14)
#define ADC_CHFR_FC14_LEN                    _ADC_UL(1)

/* ADC_CHFR_FC15 (rwh) */
#define ADC_CHFR_FC15_POS                    _ADC_UL(15)
#define ADC_CHFR_FC15_LEN                    _ADC_UL(1)

/* ADC_CHFCR_CFC0 (w) */
#define ADC_CHFCR_CFC0_POS                   _ADC_UL(0)
#define ADC_CHFCR_CFC0_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC1 (w) */
#define ADC_CHFCR_CFC1_POS                   _ADC_UL(1)
#define ADC_CHFCR_CFC1_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC2 (w) */
#define ADC_CHFCR_CFC2_POS                   _ADC_UL(2)
#define ADC_CHFCR_CFC2_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC3 (w) */
#define ADC_CHFCR_CFC3_POS                   _ADC_UL(3)
#define ADC_CHFCR_CFC3_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC4 (w) */
#define ADC_CHFCR_CFC4_POS                   _ADC_UL(4)
#define ADC_CHFCR_CFC4_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC5 (w) */
#define ADC_CHFCR_CFC5_POS                   _ADC_UL(5)
#define ADC_CHFCR_CFC5_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC6 (w) */
#define ADC_CHFCR_CFC6_POS                   _ADC_UL(6)
#define ADC_CHFCR_CFC6_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC7 (w) */
#define ADC_CHFCR_CFC7_POS                   _ADC_UL(7)
#define ADC_CHFCR_CFC7_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC8 (w) */
#define ADC_CHFCR_CFC8_POS                   _ADC_UL(8)
#define ADC_CHFCR_CFC8_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC9 (w) */
#define ADC_CHFCR_CFC9_POS                   _ADC_UL(9)
#define ADC_CHFCR_CFC9_LEN                   _ADC_UL(1)

/* ADC_CHFCR_CFC10 (w) */
#define ADC_CHFCR_CFC10_POS                  _ADC_UL(10)
#define ADC_CHFCR_CFC10_LEN                  _ADC_UL(1)

/* ADC_CHFCR_CFC11 (w) */
#define ADC_CHFCR_CFC11_POS                  _ADC_UL(11)
#define ADC_CHFCR_CFC11_LEN                  _ADC_UL(1)

/* ADC_CHFCR_CFC12 (w) */
#define ADC_CHFCR_CFC12_POS                  _ADC_UL(12)
#define ADC_CHFCR_CFC12_LEN                  _ADC_UL(1)

/* ADC_CHFCR_CFC13 (w) */
#define ADC_CHFCR_CFC13_POS                  _ADC_UL(13)
#define ADC_CHFCR_CFC13_LEN                  _ADC_UL(1)

/* ADC_CHFCR_CFC14 (w) */
#define ADC_CHFCR_CFC14_POS                  _ADC_UL(14)
#define ADC_CHFCR_CFC14_LEN                  _ADC_UL(1)

/* ADC_CHFCR_CFC15 (w) */
#define ADC_CHFCR_CFC15_POS                  _ADC_UL(15)
#define ADC_CHFCR_CFC15_LEN                  _ADC_UL(1)

/* ADC_CHENPR0_CHENP0 (rw) */
#define ADC_CHENPR0_CHENP0_POS               _ADC_UL(0)
#define ADC_CHENPR0_CHENP0_LEN               _ADC_UL(3)

/* ADC_CHENPR0_CHENP1 (rw) */
#define ADC_CHENPR0_CHENP1_POS               _ADC_UL(4)
#define ADC_CHENPR0_CHENP1_LEN               _ADC_UL(3)

/* ADC_CHENPR0_CHENP2 (rw) */
#define ADC_CHENPR0_CHENP2_POS               _ADC_UL(8)
#define ADC_CHENPR0_CHENP2_LEN               _ADC_UL(3)

/* ADC_CHENPR0_CHENP3 (rw) */
#define ADC_CHENPR0_CHENP3_POS               _ADC_UL(12)
#define ADC_CHENPR0_CHENP3_LEN               _ADC_UL(3)

/* ADC_CHENPR0_CHENP4 (rw) */
#define ADC_CHENPR0_CHENP4_POS               _ADC_UL(16)
#define ADC_CHENPR0_CHENP4_LEN               _ADC_UL(3)

/* ADC_CHENPR0_CHENP5 (rw) */
#define ADC_CHENPR0_CHENP5_POS               _ADC_UL(20)
#define ADC_CHENPR0_CHENP5_LEN               _ADC_UL(3)

/* ADC_CHENPR0_CHENP6 (rw) */
#define ADC_CHENPR0_CHENP6_POS               _ADC_UL(24)
#define ADC_CHENPR0_CHENP6_LEN               _ADC_UL(3)

/* ADC_CHENPR0_CHENP7 (rw) */
#define ADC_CHENPR0_CHENP7_POS               _ADC_UL(28)
#define ADC_CHENPR0_CHENP7_LEN               _ADC_UL(3)

/* ADC_CHENPR8_CHENP8 (rw) */
#define ADC_CHENPR8_CHENP8_POS               _ADC_UL(0)
#define ADC_CHENPR8_CHENP8_LEN               _ADC_UL(3)

/* ADC_CHENPR8_CHENP9 (rw) */
#define ADC_CHENPR8_CHENP9_POS               _ADC_UL(4)
#define ADC_CHENPR8_CHENP9_LEN               _ADC_UL(3)

/* ADC_CHENPR8_CHENP10 (rw) */
#define ADC_CHENPR8_CHENP10_POS              _ADC_UL(8)
#define ADC_CHENPR8_CHENP10_LEN              _ADC_UL(3)

/* ADC_CHENPR8_CHENP11 (rw) */
#define ADC_CHENPR8_CHENP11_POS              _ADC_UL(12)
#define ADC_CHENPR8_CHENP11_LEN              _ADC_UL(3)

/* ADC_CHENPR8_CHENP12 (rw) */
#define ADC_CHENPR8_CHENP12_POS              _ADC_UL(16)
#define ADC_CHENPR8_CHENP12_LEN              _ADC_UL(3)

/* ADC_CHENPR8_CHENP13 (rw) */
#define ADC_CHENPR8_CHENP13_POS              _ADC_UL(20)
#define ADC_CHENPR8_CHENP13_LEN              _ADC_UL(3)

/* ADC_CHENPR8_CHENP14 (rw) */
#define ADC_CHENPR8_CHENP14_POS              _ADC_UL(24)
#define ADC_CHENPR8_CHENP14_LEN              _ADC_UL(3)

/* ADC_CHENPR8_CHENP15 (rw) */
#define ADC_CHENPR8_CHENP15_POS              _ADC_UL(28)
#define ADC_CHENPR8_CHENP15_LEN              _ADC_UL(3)

/* ADC_EVFR_FR0 (rwh) */
#define ADC_EVFR_FR0_POS                     _ADC_UL(0)
#define ADC_EVFR_FR0_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR1 (rwh) */
#define ADC_EVFR_FR1_POS                     _ADC_UL(1)
#define ADC_EVFR_FR1_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR2 (rwh) */
#define ADC_EVFR_FR2_POS                     _ADC_UL(2)
#define ADC_EVFR_FR2_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR3 (rwh) */
#define ADC_EVFR_FR3_POS                     _ADC_UL(3)
#define ADC_EVFR_FR3_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR4 (rwh) */
#define ADC_EVFR_FR4_POS                     _ADC_UL(4)
#define ADC_EVFR_FR4_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR5 (rwh) */
#define ADC_EVFR_FR5_POS                     _ADC_UL(5)
#define ADC_EVFR_FR5_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR6 (rwh) */
#define ADC_EVFR_FR6_POS                     _ADC_UL(6)
#define ADC_EVFR_FR6_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR7 (rwh) */
#define ADC_EVFR_FR7_POS                     _ADC_UL(7)
#define ADC_EVFR_FR7_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR8 (rwh) */
#define ADC_EVFR_FR8_POS                     _ADC_UL(8)
#define ADC_EVFR_FR8_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR9 (rwh) */
#define ADC_EVFR_FR9_POS                     _ADC_UL(9)
#define ADC_EVFR_FR9_LEN                     _ADC_UL(1)

/* ADC_EVFR_FR10 (rwh) */
#define ADC_EVFR_FR10_POS                    _ADC_UL(10)
#define ADC_EVFR_FR10_LEN                    _ADC_UL(1)

/* ADC_EVFR_FR11 (rwh) */
#define ADC_EVFR_FR11_POS                    _ADC_UL(11)
#define ADC_EVFR_FR11_LEN                    _ADC_UL(1)

/* ADC_EVFR_FR12 (rwh) */
#define ADC_EVFR_FR12_POS                    _ADC_UL(12)
#define ADC_EVFR_FR12_LEN                    _ADC_UL(1)

/* ADC_EVFR_FR13 (rwh) */
#define ADC_EVFR_FR13_POS                    _ADC_UL(13)
#define ADC_EVFR_FR13_LEN                    _ADC_UL(1)

/* ADC_EVFR_FR14 (rwh) */
#define ADC_EVFR_FR14_POS                    _ADC_UL(14)
#define ADC_EVFR_FR14_LEN                    _ADC_UL(1)

/* ADC_EVFR_FR15 (rwh) */
#define ADC_EVFR_FR15_POS                    _ADC_UL(15)
#define ADC_EVFR_FR15_LEN                    _ADC_UL(1)

/* ADC_EVFR_FS0 (rwh) */
#define ADC_EVFR_FS0_POS                     _ADC_UL(16)
#define ADC_EVFR_FS0_LEN                     _ADC_UL(1)

/* ADC_EVFR_FS1 (rwh) */
#define ADC_EVFR_FS1_POS                     _ADC_UL(17)
#define ADC_EVFR_FS1_LEN                     _ADC_UL(1)

/* ADC_EVFR_FS2 (rwh) */
#define ADC_EVFR_FS2_POS                     _ADC_UL(18)
#define ADC_EVFR_FS2_LEN                     _ADC_UL(1)

/* ADC_EVFR_FS3 (rwh) */
#define ADC_EVFR_FS3_POS                     _ADC_UL(19)
#define ADC_EVFR_FS3_LEN                     _ADC_UL(1)

/* ADC_EVFR_FS4 (rwh) */
#define ADC_EVFR_FS4_POS                     _ADC_UL(20)
#define ADC_EVFR_FS4_LEN                     _ADC_UL(1)

/* ADC_EVFR_GFS0 (rh) */
#define ADC_EVFR_GFS0_POS                    _ADC_UL(24)
#define ADC_EVFR_GFS0_LEN                    _ADC_UL(1)

/* ADC_EVFR_GFS1 (rh) */
#define ADC_EVFR_GFS1_POS                    _ADC_UL(25)
#define ADC_EVFR_GFS1_LEN                    _ADC_UL(1)

/* ADC_EVFR_GFS2 (rh) */
#define ADC_EVFR_GFS2_POS                    _ADC_UL(26)
#define ADC_EVFR_GFS2_LEN                    _ADC_UL(1)

/* ADC_EVFR_GFS3 (rh) */
#define ADC_EVFR_GFS3_POS                    _ADC_UL(27)
#define ADC_EVFR_GFS3_LEN                    _ADC_UL(1)

/* ADC_EVFR_GFS4 (rh) */
#define ADC_EVFR_GFS4_POS                    _ADC_UL(28)
#define ADC_EVFR_GFS4_LEN                    _ADC_UL(1)

/* ADC_EVFCR_CFR0 (w) */
#define ADC_EVFCR_CFR0_POS                   _ADC_UL(0)
#define ADC_EVFCR_CFR0_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR1 (w) */
#define ADC_EVFCR_CFR1_POS                   _ADC_UL(1)
#define ADC_EVFCR_CFR1_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR2 (w) */
#define ADC_EVFCR_CFR2_POS                   _ADC_UL(2)
#define ADC_EVFCR_CFR2_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR3 (w) */
#define ADC_EVFCR_CFR3_POS                   _ADC_UL(3)
#define ADC_EVFCR_CFR3_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR4 (w) */
#define ADC_EVFCR_CFR4_POS                   _ADC_UL(4)
#define ADC_EVFCR_CFR4_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR5 (w) */
#define ADC_EVFCR_CFR5_POS                   _ADC_UL(5)
#define ADC_EVFCR_CFR5_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR6 (w) */
#define ADC_EVFCR_CFR6_POS                   _ADC_UL(6)
#define ADC_EVFCR_CFR6_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR7 (w) */
#define ADC_EVFCR_CFR7_POS                   _ADC_UL(7)
#define ADC_EVFCR_CFR7_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR8 (w) */
#define ADC_EVFCR_CFR8_POS                   _ADC_UL(8)
#define ADC_EVFCR_CFR8_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR9 (w) */
#define ADC_EVFCR_CFR9_POS                   _ADC_UL(9)
#define ADC_EVFCR_CFR9_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFR10 (w) */
#define ADC_EVFCR_CFR10_POS                  _ADC_UL(10)
#define ADC_EVFCR_CFR10_LEN                  _ADC_UL(1)

/* ADC_EVFCR_CFR11 (w) */
#define ADC_EVFCR_CFR11_POS                  _ADC_UL(11)
#define ADC_EVFCR_CFR11_LEN                  _ADC_UL(1)

/* ADC_EVFCR_CFR12 (w) */
#define ADC_EVFCR_CFR12_POS                  _ADC_UL(12)
#define ADC_EVFCR_CFR12_LEN                  _ADC_UL(1)

/* ADC_EVFCR_CFR13 (w) */
#define ADC_EVFCR_CFR13_POS                  _ADC_UL(13)
#define ADC_EVFCR_CFR13_LEN                  _ADC_UL(1)

/* ADC_EVFCR_CFR14 (w) */
#define ADC_EVFCR_CFR14_POS                  _ADC_UL(14)
#define ADC_EVFCR_CFR14_LEN                  _ADC_UL(1)

/* ADC_EVFCR_CFR15 (w) */
#define ADC_EVFCR_CFR15_POS                  _ADC_UL(15)
#define ADC_EVFCR_CFR15_LEN                  _ADC_UL(1)

/* ADC_EVFCR_CFS0 (w) */
#define ADC_EVFCR_CFS0_POS                   _ADC_UL(16)
#define ADC_EVFCR_CFS0_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFS1 (w) */
#define ADC_EVFCR_CFS1_POS                   _ADC_UL(17)
#define ADC_EVFCR_CFS1_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFS2 (w) */
#define ADC_EVFCR_CFS2_POS                   _ADC_UL(18)
#define ADC_EVFCR_CFS2_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFS3 (w) */
#define ADC_EVFCR_CFS3_POS                   _ADC_UL(19)
#define ADC_EVFCR_CFS3_LEN                   _ADC_UL(1)

/* ADC_EVFCR_CFS4 (w) */
#define ADC_EVFCR_CFS4_POS                   _ADC_UL(20)
#define ADC_EVFCR_CFS4_LEN                   _ADC_UL(1)

/* ADC_EVNPR_SENP0 (rw) */
#define ADC_EVNPR_SENP0_POS                  _ADC_UL(0)
#define ADC_EVNPR_SENP0_LEN                  _ADC_UL(3)

/* ADC_EVNPR_SENP1 (rw) */
#define ADC_EVNPR_SENP1_POS                  _ADC_UL(4)
#define ADC_EVNPR_SENP1_LEN                  _ADC_UL(3)

/* ADC_EVNPR_SENP2 (rw) */
#define ADC_EVNPR_SENP2_POS                  _ADC_UL(8)
#define ADC_EVNPR_SENP2_LEN                  _ADC_UL(3)

/* ADC_EVNPR_SENP3 (rw) */
#define ADC_EVNPR_SENP3_POS                  _ADC_UL(12)
#define ADC_EVNPR_SENP3_LEN                  _ADC_UL(3)

/* ADC_EVNPR_SENP4 (rw) */
#define ADC_EVNPR_SENP4_POS                  _ADC_UL(16)
#define ADC_EVNPR_SENP4_LEN                  _ADC_UL(3)

/* ADC_QMR0_ENGT (rw) */
#define ADC_QMR0_ENGT_POS                    _ADC_UL(0)
#define ADC_QMR0_ENGT_LEN                    _ADC_UL(2)

/* ADC_QMR0_ENTR (rw) */
#define ADC_QMR0_ENTR_POS                    _ADC_UL(2)
#define ADC_QMR0_ENTR_LEN                    _ADC_UL(1)

/* ADC_QMR0_CLRV (w) */
#define ADC_QMR0_CLRV_POS                    _ADC_UL(8)
#define ADC_QMR0_CLRV_LEN                    _ADC_UL(1)

/* ADC_QMR0_TREV (w) */
#define ADC_QMR0_TREV_POS                    _ADC_UL(9)
#define ADC_QMR0_TREV_LEN                    _ADC_UL(1)

/* ADC_QMR0_FLUSH (w) */
#define ADC_QMR0_FLUSH_POS                   _ADC_UL(10)
#define ADC_QMR0_FLUSH_LEN                   _ADC_UL(1)

/* ADC_QMR0_CEV (w) */
#define ADC_QMR0_CEV_POS                     _ADC_UL(11)
#define ADC_QMR0_CEV_LEN                     _ADC_UL(1)

/* ADC_QSR0_FILL (rh) */
#define ADC_QSR0_FILL_POS                    _ADC_UL(0)
#define ADC_QSR0_FILL_LEN                    _ADC_UL(4)

/* ADC_QSR0_EMPTY (rh) */
#define ADC_QSR0_EMPTY_POS                   _ADC_UL(5)
#define ADC_QSR0_EMPTY_LEN                   _ADC_UL(1)

/* ADC_QSR0_REQGT (rh) */
#define ADC_QSR0_REQGT_POS                   _ADC_UL(7)
#define ADC_QSR0_REQGT_LEN                   _ADC_UL(1)

/* ADC_QSR0_EV (rh) */
#define ADC_QSR0_EV_POS                      _ADC_UL(8)
#define ADC_QSR0_EV_LEN                      _ADC_UL(1)

/* ADC_Q0R0_REQCHNR (rh) */
#define ADC_Q0R0_REQCHNR_POS                 _ADC_UL(0)
#define ADC_Q0R0_REQCHNR_LEN                 _ADC_UL(4)

/* ADC_Q0R0_RF (rh) */
#define ADC_Q0R0_RF_POS                      _ADC_UL(5)
#define ADC_Q0R0_RF_LEN                      _ADC_UL(1)

/* ADC_Q0R0_ENSI (rh) */
#define ADC_Q0R0_ENSI_POS                    _ADC_UL(6)
#define ADC_Q0R0_ENSI_LEN                    _ADC_UL(1)

/* ADC_Q0R0_EXTR (rh) */
#define ADC_Q0R0_EXTR_POS                    _ADC_UL(7)
#define ADC_Q0R0_EXTR_LEN                    _ADC_UL(1)

/* ADC_Q0R0_V (rh) */
#define ADC_Q0R0_V_POS                       _ADC_UL(8)
#define ADC_Q0R0_V_LEN                       _ADC_UL(1)

/* ADC_QBUR0_REQCHNR (rh) */
#define ADC_QBUR0_REQCHNR_POS                _ADC_UL(0)
#define ADC_QBUR0_REQCHNR_LEN                _ADC_UL(4)

/* ADC_QBUR0_RF (rh) */
#define ADC_QBUR0_RF_POS                     _ADC_UL(5)
#define ADC_QBUR0_RF_LEN                     _ADC_UL(1)

/* ADC_QBUR0_ENSI (rh) */
#define ADC_QBUR0_ENSI_POS                   _ADC_UL(6)
#define ADC_QBUR0_ENSI_LEN                   _ADC_UL(1)

/* ADC_QBUR0_EXTR (rh) */
#define ADC_QBUR0_EXTR_POS                   _ADC_UL(7)
#define ADC_QBUR0_EXTR_LEN                   _ADC_UL(1)

/* ADC_QBUR0_V (rh) */
#define ADC_QBUR0_V_POS                      _ADC_UL(8)
#define ADC_QBUR0_V_LEN                      _ADC_UL(1)

/* ADC_QINR0_REQCHNR (w) */
#define ADC_QINR0_REQCHNR_POS                _ADC_UL(0)
#define ADC_QINR0_REQCHNR_LEN                _ADC_UL(4)

/* ADC_QINR0_RF (w) */
#define ADC_QINR0_RF_POS                     _ADC_UL(5)
#define ADC_QINR0_RF_LEN                     _ADC_UL(1)

/* ADC_QINR0_ENSI (w) */
#define ADC_QINR0_ENSI_POS                   _ADC_UL(6)
#define ADC_QINR0_ENSI_LEN                   _ADC_UL(1)

/* ADC_QINR0_EXTR (w) */
#define ADC_QINR0_EXTR_POS                   _ADC_UL(7)
#define ADC_QINR0_EXTR_LEN                   _ADC_UL(1)

/* ADC_CRCR1_CH0 (rwh) */
#define ADC_CRCR1_CH0_POS                    _ADC_UL(0)
#define ADC_CRCR1_CH0_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH1 (rwh) */
#define ADC_CRCR1_CH1_POS                    _ADC_UL(1)
#define ADC_CRCR1_CH1_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH2 (rwh) */
#define ADC_CRCR1_CH2_POS                    _ADC_UL(2)
#define ADC_CRCR1_CH2_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH3 (rwh) */
#define ADC_CRCR1_CH3_POS                    _ADC_UL(3)
#define ADC_CRCR1_CH3_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH4 (rwh) */
#define ADC_CRCR1_CH4_POS                    _ADC_UL(4)
#define ADC_CRCR1_CH4_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH5 (rwh) */
#define ADC_CRCR1_CH5_POS                    _ADC_UL(5)
#define ADC_CRCR1_CH5_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH6 (rwh) */
#define ADC_CRCR1_CH6_POS                    _ADC_UL(6)
#define ADC_CRCR1_CH6_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH7 (rwh) */
#define ADC_CRCR1_CH7_POS                    _ADC_UL(7)
#define ADC_CRCR1_CH7_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH8 (rwh) */
#define ADC_CRCR1_CH8_POS                    _ADC_UL(8)
#define ADC_CRCR1_CH8_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH9 (rwh) */
#define ADC_CRCR1_CH9_POS                    _ADC_UL(9)
#define ADC_CRCR1_CH9_LEN                    _ADC_UL(1)

/* ADC_CRCR1_CH10 (rwh) */
#define ADC_CRCR1_CH10_POS                   _ADC_UL(10)
#define ADC_CRCR1_CH10_LEN                   _ADC_UL(1)

/* ADC_CRCR1_CH11 (rwh) */
#define ADC_CRCR1_CH11_POS                   _ADC_UL(11)
#define ADC_CRCR1_CH11_LEN                   _ADC_UL(1)

/* ADC_CRCR1_CH12 (rwh) */
#define ADC_CRCR1_CH12_POS                   _ADC_UL(12)
#define ADC_CRCR1_CH12_LEN                   _ADC_UL(1)

/* ADC_CRCR1_CH13 (rwh) */
#define ADC_CRCR1_CH13_POS                   _ADC_UL(13)
#define ADC_CRCR1_CH13_LEN                   _ADC_UL(1)

/* ADC_CRCR1_CH14 (rwh) */
#define ADC_CRCR1_CH14_POS                   _ADC_UL(14)
#define ADC_CRCR1_CH14_LEN                   _ADC_UL(1)

/* ADC_CRCR1_CH15 (rwh) */
#define ADC_CRCR1_CH15_POS                   _ADC_UL(15)
#define ADC_CRCR1_CH15_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP0 (rwh) */
#define ADC_CRPR1_CHP0_POS                   _ADC_UL(0)
#define ADC_CRPR1_CHP0_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP1 (rwh) */
#define ADC_CRPR1_CHP1_POS                   _ADC_UL(1)
#define ADC_CRPR1_CHP1_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP2 (rwh) */
#define ADC_CRPR1_CHP2_POS                   _ADC_UL(2)
#define ADC_CRPR1_CHP2_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP3 (rwh) */
#define ADC_CRPR1_CHP3_POS                   _ADC_UL(3)
#define ADC_CRPR1_CHP3_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP4 (rwh) */
#define ADC_CRPR1_CHP4_POS                   _ADC_UL(4)
#define ADC_CRPR1_CHP4_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP5 (rwh) */
#define ADC_CRPR1_CHP5_POS                   _ADC_UL(5)
#define ADC_CRPR1_CHP5_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP6 (rwh) */
#define ADC_CRPR1_CHP6_POS                   _ADC_UL(6)
#define ADC_CRPR1_CHP6_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP7 (rwh) */
#define ADC_CRPR1_CHP7_POS                   _ADC_UL(7)
#define ADC_CRPR1_CHP7_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP8 (rwh) */
#define ADC_CRPR1_CHP8_POS                   _ADC_UL(8)
#define ADC_CRPR1_CHP8_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP9 (rwh) */
#define ADC_CRPR1_CHP9_POS                   _ADC_UL(9)
#define ADC_CRPR1_CHP9_LEN                   _ADC_UL(1)

/* ADC_CRPR1_CHP10 (rwh) */
#define ADC_CRPR1_CHP10_POS                  _ADC_UL(10)
#define ADC_CRPR1_CHP10_LEN                  _ADC_UL(1)

/* ADC_CRPR1_CHP11 (rwh) */
#define ADC_CRPR1_CHP11_POS                  _ADC_UL(11)
#define ADC_CRPR1_CHP11_LEN                  _ADC_UL(1)

/* ADC_CRPR1_CHP12 (rwh) */
#define ADC_CRPR1_CHP12_POS                  _ADC_UL(12)
#define ADC_CRPR1_CHP12_LEN                  _ADC_UL(1)

/* ADC_CRPR1_CHP13 (rwh) */
#define ADC_CRPR1_CHP13_POS                  _ADC_UL(13)
#define ADC_CRPR1_CHP13_LEN                  _ADC_UL(1)

/* ADC_CRPR1_CHP14 (rwh) */
#define ADC_CRPR1_CHP14_POS                  _ADC_UL(14)
#define ADC_CRPR1_CHP14_LEN                  _ADC_UL(1)

/* ADC_CRPR1_CHP15 (rwh) */
#define ADC_CRPR1_CHP15_POS                  _ADC_UL(15)
#define ADC_CRPR1_CHP15_LEN                  _ADC_UL(1)

/* ADC_CRMR1_ENGT (rw) */
#define ADC_CRMR1_ENGT_POS                   _ADC_UL(0)
#define ADC_CRMR1_ENGT_LEN                   _ADC_UL(2)

/* ADC_CRMR1_ENTR (rw) */
#define ADC_CRMR1_ENTR_POS                   _ADC_UL(2)
#define ADC_CRMR1_ENTR_LEN                   _ADC_UL(1)

/* ADC_CRMR1_ENSI (rw) */
#define ADC_CRMR1_ENSI_POS                   _ADC_UL(3)
#define ADC_CRMR1_ENSI_LEN                   _ADC_UL(1)

/* ADC_CRMR1_SCAN (rw) */
#define ADC_CRMR1_SCAN_POS                   _ADC_UL(4)
#define ADC_CRMR1_SCAN_LEN                   _ADC_UL(1)

/* ADC_CRMR1_LDM (rw) */
#define ADC_CRMR1_LDM_POS                    _ADC_UL(5)
#define ADC_CRMR1_LDM_LEN                    _ADC_UL(1)

/* ADC_CRMR1_REQGT (rh) */
#define ADC_CRMR1_REQGT_POS                  _ADC_UL(7)
#define ADC_CRMR1_REQGT_LEN                  _ADC_UL(1)

/* ADC_CRMR1_CLRPND (w) */
#define ADC_CRMR1_CLRPND_POS                 _ADC_UL(8)
#define ADC_CRMR1_CLRPND_LEN                 _ADC_UL(1)

/* ADC_CRMR1_LDEV (w) */
#define ADC_CRMR1_LDEV_POS                   _ADC_UL(9)
#define ADC_CRMR1_LDEV_LEN                   _ADC_UL(1)

/* ADC_QMR2_ENGT (rw) */
#define ADC_QMR2_ENGT_POS                    _ADC_UL(0)
#define ADC_QMR2_ENGT_LEN                    _ADC_UL(2)

/* ADC_QMR2_ENTR (rw) */
#define ADC_QMR2_ENTR_POS                    _ADC_UL(2)
#define ADC_QMR2_ENTR_LEN                    _ADC_UL(1)

/* ADC_QMR2_CLRV (w) */
#define ADC_QMR2_CLRV_POS                    _ADC_UL(8)
#define ADC_QMR2_CLRV_LEN                    _ADC_UL(1)

/* ADC_QMR2_TREV (w) */
#define ADC_QMR2_TREV_POS                    _ADC_UL(9)
#define ADC_QMR2_TREV_LEN                    _ADC_UL(1)

/* ADC_QMR2_FLUSH (w) */
#define ADC_QMR2_FLUSH_POS                   _ADC_UL(10)
#define ADC_QMR2_FLUSH_LEN                   _ADC_UL(1)

/* ADC_QMR2_CEV (w) */
#define ADC_QMR2_CEV_POS                     _ADC_UL(11)
#define ADC_QMR2_CEV_LEN                     _ADC_UL(1)

/* ADC_QSR2_FILL (rh) */
#define ADC_QSR2_FILL_POS                    _ADC_UL(0)
#define ADC_QSR2_FILL_LEN                    _ADC_UL(4)

/* ADC_QSR2_EMPTY (rh) */
#define ADC_QSR2_EMPTY_POS                   _ADC_UL(5)
#define ADC_QSR2_EMPTY_LEN                   _ADC_UL(1)

/* ADC_QSR2_REQGT (rh) */
#define ADC_QSR2_REQGT_POS                   _ADC_UL(7)
#define ADC_QSR2_REQGT_LEN                   _ADC_UL(1)

/* ADC_QSR2_EV (rh) */
#define ADC_QSR2_EV_POS                      _ADC_UL(8)
#define ADC_QSR2_EV_LEN                      _ADC_UL(1)

/* ADC_Q0R2_REQCHNR (rh) */
#define ADC_Q0R2_REQCHNR_POS                 _ADC_UL(0)
#define ADC_Q0R2_REQCHNR_LEN                 _ADC_UL(4)

/* ADC_Q0R2_RF (rh) */
#define ADC_Q0R2_RF_POS                      _ADC_UL(5)
#define ADC_Q0R2_RF_LEN                      _ADC_UL(1)

/* ADC_Q0R2_ENSI (rh) */
#define ADC_Q0R2_ENSI_POS                    _ADC_UL(6)
#define ADC_Q0R2_ENSI_LEN                    _ADC_UL(1)

/* ADC_Q0R2_EXTR (rh) */
#define ADC_Q0R2_EXTR_POS                    _ADC_UL(7)
#define ADC_Q0R2_EXTR_LEN                    _ADC_UL(1)

/* ADC_Q0R2_V (rh) */
#define ADC_Q0R2_V_POS                       _ADC_UL(8)
#define ADC_Q0R2_V_LEN                       _ADC_UL(1)

/* ADC_QBUR2_REQCHNR (rh) */
#define ADC_QBUR2_REQCHNR_POS                _ADC_UL(0)
#define ADC_QBUR2_REQCHNR_LEN                _ADC_UL(4)

/* ADC_QBUR2_RF (rh) */
#define ADC_QBUR2_RF_POS                     _ADC_UL(5)
#define ADC_QBUR2_RF_LEN                     _ADC_UL(1)

/* ADC_QBUR2_ENSI (rh) */
#define ADC_QBUR2_ENSI_POS                   _ADC_UL(6)
#define ADC_QBUR2_ENSI_LEN                   _ADC_UL(1)

/* ADC_QBUR2_EXTR (rh) */
#define ADC_QBUR2_EXTR_POS                   _ADC_UL(7)
#define ADC_QBUR2_EXTR_LEN                   _ADC_UL(1)

/* ADC_QBUR2_V (rh) */
#define ADC_QBUR2_V_POS                      _ADC_UL(8)
#define ADC_QBUR2_V_LEN                      _ADC_UL(1)

/* ADC_QINR2_REQCHNR (w) */
#define ADC_QINR2_REQCHNR_POS                _ADC_UL(0)
#define ADC_QINR2_REQCHNR_LEN                _ADC_UL(4)

/* ADC_QINR2_RF (w) */
#define ADC_QINR2_RF_POS                     _ADC_UL(5)
#define ADC_QINR2_RF_LEN                     _ADC_UL(1)

/* ADC_QINR2_ENSI (w) */
#define ADC_QINR2_ENSI_POS                   _ADC_UL(6)
#define ADC_QINR2_ENSI_LEN                   _ADC_UL(1)

/* ADC_QINR2_EXTR (w) */
#define ADC_QINR2_EXTR_POS                   _ADC_UL(7)
#define ADC_QINR2_EXTR_LEN                   _ADC_UL(1)

/* ADC_CRCR3_CH0 (rwh) */
#define ADC_CRCR3_CH0_POS                    _ADC_UL(0)
#define ADC_CRCR3_CH0_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH1 (rwh) */
#define ADC_CRCR3_CH1_POS                    _ADC_UL(1)
#define ADC_CRCR3_CH1_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH2 (rwh) */
#define ADC_CRCR3_CH2_POS                    _ADC_UL(2)
#define ADC_CRCR3_CH2_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH3 (rwh) */
#define ADC_CRCR3_CH3_POS                    _ADC_UL(3)
#define ADC_CRCR3_CH3_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH4 (rwh) */
#define ADC_CRCR3_CH4_POS                    _ADC_UL(4)
#define ADC_CRCR3_CH4_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH5 (rwh) */
#define ADC_CRCR3_CH5_POS                    _ADC_UL(5)
#define ADC_CRCR3_CH5_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH6 (rwh) */
#define ADC_CRCR3_CH6_POS                    _ADC_UL(6)
#define ADC_CRCR3_CH6_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH7 (rwh) */
#define ADC_CRCR3_CH7_POS                    _ADC_UL(7)
#define ADC_CRCR3_CH7_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH8 (rwh) */
#define ADC_CRCR3_CH8_POS                    _ADC_UL(8)
#define ADC_CRCR3_CH8_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH9 (rwh) */
#define ADC_CRCR3_CH9_POS                    _ADC_UL(9)
#define ADC_CRCR3_CH9_LEN                    _ADC_UL(1)

/* ADC_CRCR3_CH10 (rwh) */
#define ADC_CRCR3_CH10_POS                   _ADC_UL(10)
#define ADC_CRCR3_CH10_LEN                   _ADC_UL(1)

/* ADC_CRCR3_CH11 (rwh) */
#define ADC_CRCR3_CH11_POS                   _ADC_UL(11)
#define ADC_CRCR3_CH11_LEN                   _ADC_UL(1)

/* ADC_CRCR3_CH12 (rwh) */
#define ADC_CRCR3_CH12_POS                   _ADC_UL(12)
#define ADC_CRCR3_CH12_LEN                   _ADC_UL(1)

/* ADC_CRCR3_CH13 (rwh) */
#define ADC_CRCR3_CH13_POS                   _ADC_UL(13)
#define ADC_CRCR3_CH13_LEN                   _ADC_UL(1)

/* ADC_CRCR3_CH14 (rwh) */
#define ADC_CRCR3_CH14_POS                   _ADC_UL(14)
#define ADC_CRCR3_CH14_LEN                   _ADC_UL(1)

/* ADC_CRCR3_CH15 (rwh) */
#define ADC_CRCR3_CH15_POS                   _ADC_UL(15)
#define ADC_CRCR3_CH15_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP0 (rwh) */
#define ADC_CRPR3_CHP0_POS                   _ADC_UL(0)
#define ADC_CRPR3_CHP0_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP1 (rwh) */
#define ADC_CRPR3_CHP1_POS                   _ADC_UL(1)
#define ADC_CRPR3_CHP1_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP2 (rwh) */
#define ADC_CRPR3_CHP2_POS                   _ADC_UL(2)
#define ADC_CRPR3_CHP2_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP3 (rwh) */
#define ADC_CRPR3_CHP3_POS                   _ADC_UL(3)
#define ADC_CRPR3_CHP3_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP4 (rwh) */
#define ADC_CRPR3_CHP4_POS                   _ADC_UL(4)
#define ADC_CRPR3_CHP4_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP5 (rwh) */
#define ADC_CRPR3_CHP5_POS                   _ADC_UL(5)
#define ADC_CRPR3_CHP5_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP6 (rwh) */
#define ADC_CRPR3_CHP6_POS                   _ADC_UL(6)
#define ADC_CRPR3_CHP6_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP7 (rwh) */
#define ADC_CRPR3_CHP7_POS                   _ADC_UL(7)
#define ADC_CRPR3_CHP7_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP8 (rwh) */
#define ADC_CRPR3_CHP8_POS                   _ADC_UL(8)
#define ADC_CRPR3_CHP8_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP9 (rwh) */
#define ADC_CRPR3_CHP9_POS                   _ADC_UL(9)
#define ADC_CRPR3_CHP9_LEN                   _ADC_UL(1)

/* ADC_CRPR3_CHP10 (rwh) */
#define ADC_CRPR3_CHP10_POS                  _ADC_UL(10)
#define ADC_CRPR3_CHP10_LEN                  _ADC_UL(1)

/* ADC_CRPR3_CHP11 (rwh) */
#define ADC_CRPR3_CHP11_POS                  _ADC_UL(11)
#define ADC_CRPR3_CHP11_LEN                  _ADC_UL(1)

/* ADC_CRPR3_CHP12 (rwh) */
#define ADC_CRPR3_CHP12_POS                  _ADC_UL(12)
#define ADC_CRPR3_CHP12_LEN                  _ADC_UL(1)

/* ADC_CRPR3_CHP13 (rwh) */
#define ADC_CRPR3_CHP13_POS                  _ADC_UL(13)
#define ADC_CRPR3_CHP13_LEN                  _ADC_UL(1)

/* ADC_CRPR3_CHP14 (rwh) */
#define ADC_CRPR3_CHP14_POS                  _ADC_UL(14)
#define ADC_CRPR3_CHP14_LEN                  _ADC_UL(1)

/* ADC_CRPR3_CHP15 (rwh) */
#define ADC_CRPR3_CHP15_POS                  _ADC_UL(15)
#define ADC_CRPR3_CHP15_LEN                  _ADC_UL(1)

/* ADC_CRMR3_ENGT (rw) */
#define ADC_CRMR3_ENGT_POS                   _ADC_UL(0)
#define ADC_CRMR3_ENGT_LEN                   _ADC_UL(2)

/* ADC_CRMR3_ENTR (rw) */
#define ADC_CRMR3_ENTR_POS                   _ADC_UL(2)
#define ADC_CRMR3_ENTR_LEN                   _ADC_UL(1)

/* ADC_CRMR3_ENSI (rw) */
#define ADC_CRMR3_ENSI_POS                   _ADC_UL(3)
#define ADC_CRMR3_ENSI_LEN                   _ADC_UL(1)

/* ADC_CRMR3_SCAN (rw) */
#define ADC_CRMR3_SCAN_POS                   _ADC_UL(4)
#define ADC_CRMR3_SCAN_LEN                   _ADC_UL(1)

/* ADC_CRMR3_LDM (rw) */
#define ADC_CRMR3_LDM_POS                    _ADC_UL(5)
#define ADC_CRMR3_LDM_LEN                    _ADC_UL(1)

/* ADC_CRMR3_REQGT (rh) */
#define ADC_CRMR3_REQGT_POS                  _ADC_UL(7)
#define ADC_CRMR3_REQGT_LEN                  _ADC_UL(1)

/* ADC_CRMR3_CLRPND (w) */
#define ADC_CRMR3_CLRPND_POS                 _ADC_UL(8)
#define ADC_CRMR3_CLRPND_LEN                 _ADC_UL(1)

/* ADC_CRMR3_LDEV (w) */
#define ADC_CRMR3_LDEV_POS                   _ADC_UL(9)
#define ADC_CRMR3_LDEV_LEN                   _ADC_UL(1)

/* ADC_QMR4_ENGT (rw) */
#define ADC_QMR4_ENGT_POS                    _ADC_UL(0)
#define ADC_QMR4_ENGT_LEN                    _ADC_UL(2)

/* ADC_QMR4_ENTR (rw) */
#define ADC_QMR4_ENTR_POS                    _ADC_UL(2)
#define ADC_QMR4_ENTR_LEN                    _ADC_UL(1)

/* ADC_QMR4_CLRV (w) */
#define ADC_QMR4_CLRV_POS                    _ADC_UL(8)
#define ADC_QMR4_CLRV_LEN                    _ADC_UL(1)

/* ADC_QMR4_TREV (w) */
#define ADC_QMR4_TREV_POS                    _ADC_UL(9)
#define ADC_QMR4_TREV_LEN                    _ADC_UL(1)

/* ADC_QMR4_FLUSH (w) */
#define ADC_QMR4_FLUSH_POS                   _ADC_UL(10)
#define ADC_QMR4_FLUSH_LEN                   _ADC_UL(1)

/* ADC_QMR4_CEV (w) */
#define ADC_QMR4_CEV_POS                     _ADC_UL(11)
#define ADC_QMR4_CEV_LEN                     _ADC_UL(1)

/* ADC_QSR4_FILL (rh) */
#define ADC_QSR4_FILL_POS                    _ADC_UL(0)
#define ADC_QSR4_FILL_LEN                    _ADC_UL(4)

/* ADC_QSR4_EMPTY (rh) */
#define ADC_QSR4_EMPTY_POS                   _ADC_UL(5)
#define ADC_QSR4_EMPTY_LEN                   _ADC_UL(1)

/* ADC_QSR4_REQGT (rh) */
#define ADC_QSR4_REQGT_POS                   _ADC_UL(7)
#define ADC_QSR4_REQGT_LEN                   _ADC_UL(1)

/* ADC_QSR4_EV (rh) */
#define ADC_QSR4_EV_POS                      _ADC_UL(8)
#define ADC_QSR4_EV_LEN                      _ADC_UL(1)

/* ADC_Q0R4_REQCHNR (rh) */
#define ADC_Q0R4_REQCHNR_POS                 _ADC_UL(0)
#define ADC_Q0R4_REQCHNR_LEN                 _ADC_UL(4)

/* ADC_Q0R4_RF (rh) */
#define ADC_Q0R4_RF_POS                      _ADC_UL(5)
#define ADC_Q0R4_RF_LEN                      _ADC_UL(1)

/* ADC_Q0R4_ENSI (rh) */
#define ADC_Q0R4_ENSI_POS                    _ADC_UL(6)
#define ADC_Q0R4_ENSI_LEN                    _ADC_UL(1)

/* ADC_Q0R4_EXTR (rh) */
#define ADC_Q0R4_EXTR_POS                    _ADC_UL(7)
#define ADC_Q0R4_EXTR_LEN                    _ADC_UL(1)

/* ADC_Q0R4_V (rh) */
#define ADC_Q0R4_V_POS                       _ADC_UL(8)
#define ADC_Q0R4_V_LEN                       _ADC_UL(1)

/* ADC_QBUR4_REQCHNR (rh) */
#define ADC_QBUR4_REQCHNR_POS                _ADC_UL(0)
#define ADC_QBUR4_REQCHNR_LEN                _ADC_UL(4)

/* ADC_QBUR4_RF (rh) */
#define ADC_QBUR4_RF_POS                     _ADC_UL(5)
#define ADC_QBUR4_RF_LEN                     _ADC_UL(1)

/* ADC_QBUR4_ENSI (rh) */
#define ADC_QBUR4_ENSI_POS                   _ADC_UL(6)
#define ADC_QBUR4_ENSI_LEN                   _ADC_UL(1)

/* ADC_QBUR4_EXTR (rh) */
#define ADC_QBUR4_EXTR_POS                   _ADC_UL(7)
#define ADC_QBUR4_EXTR_LEN                   _ADC_UL(1)

/* ADC_QBUR4_V (rh) */
#define ADC_QBUR4_V_POS                      _ADC_UL(8)
#define ADC_QBUR4_V_LEN                      _ADC_UL(1)

/* ADC_QINR4_REQCHNR (w) */
#define ADC_QINR4_REQCHNR_POS                _ADC_UL(0)
#define ADC_QINR4_REQCHNR_LEN                _ADC_UL(4)

/* ADC_QINR4_RF (w) */
#define ADC_QINR4_RF_POS                     _ADC_UL(5)
#define ADC_QINR4_RF_LEN                     _ADC_UL(1)

/* ADC_QINR4_ENSI (w) */
#define ADC_QINR4_ENSI_POS                   _ADC_UL(6)
#define ADC_QINR4_ENSI_LEN                   _ADC_UL(1)

/* ADC_QINR4_EXTR (w) */
#define ADC_QINR4_EXTR_POS                   _ADC_UL(7)
#define ADC_QINR4_EXTR_LEN                   _ADC_UL(1)

/* ADC_LCBR_BOUNDARY () */
#define ADC_LCBR_BOUNDARY_POS                _ADC_UL(2)
#define ADC_LCBR_BOUNDARY_LEN                _ADC_UL(10)

/* ADC_CHCTR_BNDASEL (rw) */
#define ADC_CHCTR_BNDASEL_POS                _ADC_UL(0)
#define ADC_CHCTR_BNDASEL_LEN                _ADC_UL(2)

/* ADC_CHCTR_BNDBSEL (rw) */
#define ADC_CHCTR_BNDBSEL_POS                _ADC_UL(2)
#define ADC_CHCTR_BNDBSEL_LEN                _ADC_UL(2)

/* ADC_CHCTR_LCC (rw) */
#define ADC_CHCTR_LCC_POS                    _ADC_UL(4)
#define ADC_CHCTR_LCC_LEN                    _ADC_UL(3)

/* ADC_CHCTR_SYNC (rw) */
#define ADC_CHCTR_SYNC_POS                   _ADC_UL(7)
#define ADC_CHCTR_SYNC_LEN                   _ADC_UL(1)

/* ADC_CHCTR_REFSEL (rw) */
#define ADC_CHCTR_REFSEL_POS                 _ADC_UL(8)
#define ADC_CHCTR_REFSEL_LEN                 _ADC_UL(2)

/* ADC_CHCTR_ICLSEL (rw) */
#define ADC_CHCTR_ICLSEL_POS                 _ADC_UL(10)
#define ADC_CHCTR_ICLSEL_LEN                 _ADC_UL(2)

/* ADC_CHCTR_RESRSEL (rw) */
#define ADC_CHCTR_RESRSEL_POS                _ADC_UL(12)
#define ADC_CHCTR_RESRSEL_LEN                _ADC_UL(4)

/* ADC_RCR_DRCTR (rw) */
#define ADC_RCR_DRCTR_POS                    _ADC_UL(0)
#define ADC_RCR_DRCTR_LEN                    _ADC_UL(2)

/* ADC_RCR_ENRI (rw) */
#define ADC_RCR_ENRI_POS                     _ADC_UL(4)
#define ADC_RCR_ENRI_LEN                     _ADC_UL(1)

/* ADC_RCR_FEN (rw) */
#define ADC_RCR_FEN_POS                      _ADC_UL(5)
#define ADC_RCR_FEN_LEN                      _ADC_UL(1)

/* ADC_RCR_WFR (rw) */
#define ADC_RCR_WFR_POS                      _ADC_UL(6)
#define ADC_RCR_WFR_LEN                      _ADC_UL(1)

/* ADC_RESR_RESULT (rh) */
#define ADC_RESR_RESULT_POS                  _ADC_UL(0)
#define ADC_RESR_RESULT_LEN                  _ADC_UL(14)

/* ADC_RESR_EMUX (rh) */
#define ADC_RESR_EMUX_POS                    _ADC_UL(16)
#define ADC_RESR_EMUX_LEN                    _ADC_UL(3)

/* ADC_RESR_CRS (rh) */
#define ADC_RESR_CRS_POS                     _ADC_UL(20)
#define ADC_RESR_CRS_LEN                     _ADC_UL(3)

/* ADC_RESR_CHNR (rh) */
#define ADC_RESR_CHNR_POS                    _ADC_UL(24)
#define ADC_RESR_CHNR_LEN                    _ADC_UL(4)

/* ADC_RESR_DRC (rh) */
#define ADC_RESR_DRC_POS                     _ADC_UL(29)
#define ADC_RESR_DRC_LEN                     _ADC_UL(2)

/* ADC_RESR_VF (rh) */
#define ADC_RESR_VF_POS                      _ADC_UL(31)
#define ADC_RESR_VF_LEN                      _ADC_UL(1)

/* ADC_RESRD_RESULT (rh) */
#define ADC_RESRD_RESULT_POS                 _ADC_UL(0)
#define ADC_RESRD_RESULT_LEN                 _ADC_UL(14)

/* ADC_RESRD_EMUX (rh) */
#define ADC_RESRD_EMUX_POS                   _ADC_UL(16)
#define ADC_RESRD_EMUX_LEN                   _ADC_UL(3)

/* ADC_RESRD_CRS (rh) */
#define ADC_RESRD_CRS_POS                    _ADC_UL(20)
#define ADC_RESRD_CRS_LEN                    _ADC_UL(3)

/* ADC_RESRD_CHNR (rh) */
#define ADC_RESRD_CHNR_POS                   _ADC_UL(24)
#define ADC_RESRD_CHNR_LEN                   _ADC_UL(4)

/* ADC_RESRD_DRC (rh) */
#define ADC_RESRD_DRC_POS                    _ADC_UL(29)
#define ADC_RESRD_DRC_LEN                    _ADC_UL(2)

/* ADC_RESRD_VF (rh) */
#define ADC_RESRD_VF_POS                     _ADC_UL(31)
#define ADC_RESRD_VF_LEN                     _ADC_UL(1)

/* ADC_VFR_VF0 (rwh) */
#define ADC_VFR_VF0_POS                      _ADC_UL(0)
#define ADC_VFR_VF0_LEN                      _ADC_UL(1)

/* ADC_VFR_VF1 (rwh) */
#define ADC_VFR_VF1_POS                      _ADC_UL(1)
#define ADC_VFR_VF1_LEN                      _ADC_UL(1)

/* ADC_VFR_VF2 (rwh) */
#define ADC_VFR_VF2_POS                      _ADC_UL(2)
#define ADC_VFR_VF2_LEN                      _ADC_UL(1)

/* ADC_VFR_VF3 (rwh) */
#define ADC_VFR_VF3_POS                      _ADC_UL(3)
#define ADC_VFR_VF3_LEN                      _ADC_UL(1)

/* ADC_VFR_VF4 (rwh) */
#define ADC_VFR_VF4_POS                      _ADC_UL(4)
#define ADC_VFR_VF4_LEN                      _ADC_UL(1)

/* ADC_VFR_VF5 (rwh) */
#define ADC_VFR_VF5_POS                      _ADC_UL(5)
#define ADC_VFR_VF5_LEN                      _ADC_UL(1)

/* ADC_VFR_VF6 (rwh) */
#define ADC_VFR_VF6_POS                      _ADC_UL(6)
#define ADC_VFR_VF6_LEN                      _ADC_UL(1)

/* ADC_VFR_VF7 (rwh) */
#define ADC_VFR_VF7_POS                      _ADC_UL(7)
#define ADC_VFR_VF7_LEN                      _ADC_UL(1)

/* ADC_VFR_VF8 (rwh) */
#define ADC_VFR_VF8_POS                      _ADC_UL(8)
#define ADC_VFR_VF8_LEN                      _ADC_UL(1)

/* ADC_VFR_VF9 (rwh) */
#define ADC_VFR_VF9_POS                      _ADC_UL(9)
#define ADC_VFR_VF9_LEN                      _ADC_UL(1)

/* ADC_VFR_VF10 (rwh) */
#define ADC_VFR_VF10_POS                     _ADC_UL(10)
#define ADC_VFR_VF10_LEN                     _ADC_UL(1)

/* ADC_VFR_VF11 (rwh) */
#define ADC_VFR_VF11_POS                     _ADC_UL(11)
#define ADC_VFR_VF11_LEN                     _ADC_UL(1)

/* ADC_VFR_VF12 (rwh) */
#define ADC_VFR_VF12_POS                     _ADC_UL(12)
#define ADC_VFR_VF12_LEN                     _ADC_UL(1)

/* ADC_VFR_VF13 (rwh) */
#define ADC_VFR_VF13_POS                     _ADC_UL(13)
#define ADC_VFR_VF13_LEN                     _ADC_UL(1)

/* ADC_VFR_VF14 (rwh) */
#define ADC_VFR_VF14_POS                     _ADC_UL(14)
#define ADC_VFR_VF14_LEN                     _ADC_UL(1)

/* ADC_VFR_VF15 (rwh) */
#define ADC_VFR_VF15_POS                     _ADC_UL(15)
#define ADC_VFR_VF15_LEN                     _ADC_UL(1)

/* ADC_INTR_SISR0 (w) */
#define ADC_INTR_SISR0_POS                   _ADC_UL(0)
#define ADC_INTR_SISR0_LEN                   _ADC_UL(1)

/* ADC_INTR_SISR1 (w) */
#define ADC_INTR_SISR1_POS                   _ADC_UL(1)
#define ADC_INTR_SISR1_LEN                   _ADC_UL(1)

/* ADC_INTR_SISR2 (w) */
#define ADC_INTR_SISR2_POS                   _ADC_UL(2)
#define ADC_INTR_SISR2_LEN                   _ADC_UL(1)

/* ADC_INTR_SISR3 (w) */
#define ADC_INTR_SISR3_POS                   _ADC_UL(3)
#define ADC_INTR_SISR3_LEN                   _ADC_UL(1)

/* ADC_INTR_SISR4 (w) */
#define ADC_INTR_SISR4_POS                   _ADC_UL(4)
#define ADC_INTR_SISR4_LEN                   _ADC_UL(1)

/* ADC_INTR_SISR5 (w) */
#define ADC_INTR_SISR5_POS                   _ADC_UL(5)
#define ADC_INTR_SISR5_LEN                   _ADC_UL(1)

/* ADC_INTR_SISR6 (w) */
#define ADC_INTR_SISR6_POS                   _ADC_UL(6)
#define ADC_INTR_SISR6_LEN                   _ADC_UL(1)

/* ADC_INTR_SISR7 (w) */
#define ADC_INTR_SISR7_POS                   _ADC_UL(7)
#define ADC_INTR_SISR7_LEN                   _ADC_UL(1)

/* ADC_RNPR0_RENP0 (rw) */
#define ADC_RNPR0_RENP0_POS                  _ADC_UL(0)
#define ADC_RNPR0_RENP0_LEN                  _ADC_UL(3)

/* ADC_RNPR0_RENP1 (rw) */
#define ADC_RNPR0_RENP1_POS                  _ADC_UL(4)
#define ADC_RNPR0_RENP1_LEN                  _ADC_UL(3)

/* ADC_RNPR0_RENP2 (rw) */
#define ADC_RNPR0_RENP2_POS                  _ADC_UL(8)
#define ADC_RNPR0_RENP2_LEN                  _ADC_UL(3)

/* ADC_RNPR0_RENP3 (rw) */
#define ADC_RNPR0_RENP3_POS                  _ADC_UL(12)
#define ADC_RNPR0_RENP3_LEN                  _ADC_UL(3)

/* ADC_RNPR0_RENP4 (rw) */
#define ADC_RNPR0_RENP4_POS                  _ADC_UL(16)
#define ADC_RNPR0_RENP4_LEN                  _ADC_UL(3)

/* ADC_RNPR0_RENP5 (rw) */
#define ADC_RNPR0_RENP5_POS                  _ADC_UL(20)
#define ADC_RNPR0_RENP5_LEN                  _ADC_UL(3)

/* ADC_RNPR0_RENP6 (rw) */
#define ADC_RNPR0_RENP6_POS                  _ADC_UL(24)
#define ADC_RNPR0_RENP6_LEN                  _ADC_UL(3)

/* ADC_RNPR0_RENP7 (rw) */
#define ADC_RNPR0_RENP7_POS                  _ADC_UL(28)
#define ADC_RNPR0_RENP7_LEN                  _ADC_UL(3)

/* ADC_RNPR8_RENP8 (rw) */
#define ADC_RNPR8_RENP8_POS                  _ADC_UL(0)
#define ADC_RNPR8_RENP8_LEN                  _ADC_UL(3)

/* ADC_RNPR8_RENP9 (rw) */
#define ADC_RNPR8_RENP9_POS                  _ADC_UL(4)
#define ADC_RNPR8_RENP9_LEN                  _ADC_UL(3)

/* ADC_RNPR8_RENP10 (rw) */
#define ADC_RNPR8_RENP10_POS                 _ADC_UL(8)
#define ADC_RNPR8_RENP10_LEN                 _ADC_UL(3)

/* ADC_RNPR8_RENP11 (rw) */
#define ADC_RNPR8_RENP11_POS                 _ADC_UL(12)
#define ADC_RNPR8_RENP11_LEN                 _ADC_UL(3)

/* ADC_RNPR8_RENP12 (rw) */
#define ADC_RNPR8_RENP12_POS                 _ADC_UL(16)
#define ADC_RNPR8_RENP12_LEN                 _ADC_UL(3)

/* ADC_RNPR8_RENP13 (rw) */
#define ADC_RNPR8_RENP13_POS                 _ADC_UL(20)
#define ADC_RNPR8_RENP13_LEN                 _ADC_UL(3)

/* ADC_RNPR8_RENP14 (rw) */
#define ADC_RNPR8_RENP14_POS                 _ADC_UL(24)
#define ADC_RNPR8_RENP14_LEN                 _ADC_UL(3)

/* ADC_RNPR8_RENP15 (rw) */
#define ADC_RNPR8_RENP15_POS                 _ADC_UL(28)
#define ADC_RNPR8_RENP15_LEN                 _ADC_UL(3)

/* ADC_ALR0_ALIAS0 (rw) */
#define ADC_ALR0_ALIAS0_POS                  _ADC_UL(0)
#define ADC_ALR0_ALIAS0_LEN                  _ADC_UL(4)

/* ADC_ALR0_ALIAS1 (rw) */
#define ADC_ALR0_ALIAS1_POS                  _ADC_UL(8)
#define ADC_ALR0_ALIAS1_LEN                  _ADC_UL(4)

/* ADC_APR_RG0 (rw) */
#define ADC_APR_RG0_POS                      _ADC_UL(0)
#define ADC_APR_RG0_LEN                      _ADC_UL(1)

/* ADC_APR_RG1 (rw) */
#define ADC_APR_RG1_POS                      _ADC_UL(1)
#define ADC_APR_RG1_LEN                      _ADC_UL(1)

/* ADC_APR_RG2 (rw) */
#define ADC_APR_RG2_POS                      _ADC_UL(2)
#define ADC_APR_RG2_LEN                      _ADC_UL(1)

/* ADC_APR_RG3 (rw) */
#define ADC_APR_RG3_POS                      _ADC_UL(3)
#define ADC_APR_RG3_LEN                      _ADC_UL(1)

/* ADC_APR_RG4 (rw) */
#define ADC_APR_RG4_POS                      _ADC_UL(4)
#define ADC_APR_RG4_LEN                      _ADC_UL(1)

/* ADC_APR_RG5 (rw) */
#define ADC_APR_RG5_POS                      _ADC_UL(5)
#define ADC_APR_RG5_LEN                      _ADC_UL(1)

/* ADC_APR_ACCERR (rwh) */
#define ADC_APR_ACCERR_POS                   _ADC_UL(15)
#define ADC_APR_ACCERR_LEN                   _ADC_UL(1)

/* ADC_EMCTR_SETEMUX (rw) */
#define ADC_EMCTR_SETEMUX_POS                _ADC_UL(0)
#define ADC_EMCTR_SETEMUX_LEN                _ADC_UL(3)

/* ADC_EMCTR_EMUX (rh) */
#define ADC_EMCTR_EMUX_POS                   _ADC_UL(4)
#define ADC_EMCTR_EMUX_LEN                   _ADC_UL(3)

/* ADC_EMCTR_EMSAMPLE (rw) */
#define ADC_EMCTR_EMSAMPLE_POS               _ADC_UL(8)
#define ADC_EMCTR_EMSAMPLE_LEN               _ADC_UL(8)

/* ADC_EMCTR_EMUXCHNR (rw) */
#define ADC_EMCTR_EMUXCHNR_POS               _ADC_UL(16)
#define ADC_EMCTR_EMUXCHNR_LEN               _ADC_UL(4)

/* ADC_EMCTR_TROEN (rw) */
#define ADC_EMCTR_TROEN_POS                  _ADC_UL(21)
#define ADC_EMCTR_TROEN_LEN                  _ADC_UL(1)

/* ADC_EMCTR_SCANEN (rw) */
#define ADC_EMCTR_SCANEN_POS                 _ADC_UL(22)
#define ADC_EMCTR_SCANEN_LEN                 _ADC_UL(1)

/* ADC_EMCTR_EMUXEN (rw) */
#define ADC_EMCTR_EMUXEN_POS                 _ADC_UL(23)
#define ADC_EMCTR_EMUXEN_LEN                 _ADC_UL(1)

/* ADC_SRC8_SRPN (rw) */
#define ADC_SRC8_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC8_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC8_TOS (rw) */
#define ADC_SRC8_TOS_POS                     _ADC_UL(10)
#define ADC_SRC8_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC8_SRE (rw) */
#define ADC_SRC8_SRE_POS                     _ADC_UL(12)
#define ADC_SRC8_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC8_SRR (rh) */
#define ADC_SRC8_SRR_POS                     _ADC_UL(13)
#define ADC_SRC8_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC8_CLRR (w) */
#define ADC_SRC8_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC8_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC8_SETR (w) */
#define ADC_SRC8_SETR_POS                    _ADC_UL(15)
#define ADC_SRC8_SETR_LEN                    _ADC_UL(1)

/* ADC_SRC7_SRPN (rw) */
#define ADC_SRC7_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC7_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC7_TOS (rw) */
#define ADC_SRC7_TOS_POS                     _ADC_UL(10)
#define ADC_SRC7_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC7_SRE (rw) */
#define ADC_SRC7_SRE_POS                     _ADC_UL(12)
#define ADC_SRC7_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC7_SRR (rh) */
#define ADC_SRC7_SRR_POS                     _ADC_UL(13)
#define ADC_SRC7_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC7_CLRR (w) */
#define ADC_SRC7_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC7_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC7_SETR (w) */
#define ADC_SRC7_SETR_POS                    _ADC_UL(15)
#define ADC_SRC7_SETR_LEN                    _ADC_UL(1)

/* ADC_SRC6_SRPN (rw) */
#define ADC_SRC6_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC6_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC6_TOS (rw) */
#define ADC_SRC6_TOS_POS                     _ADC_UL(10)
#define ADC_SRC6_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC6_SRE (rw) */
#define ADC_SRC6_SRE_POS                     _ADC_UL(12)
#define ADC_SRC6_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC6_SRR (rh) */
#define ADC_SRC6_SRR_POS                     _ADC_UL(13)
#define ADC_SRC6_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC6_CLRR (w) */
#define ADC_SRC6_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC6_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC6_SETR (w) */
#define ADC_SRC6_SETR_POS                    _ADC_UL(15)
#define ADC_SRC6_SETR_LEN                    _ADC_UL(1)

/* ADC_SRC5_SRPN (rw) */
#define ADC_SRC5_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC5_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC5_TOS (rw) */
#define ADC_SRC5_TOS_POS                     _ADC_UL(10)
#define ADC_SRC5_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC5_SRE (rw) */
#define ADC_SRC5_SRE_POS                     _ADC_UL(12)
#define ADC_SRC5_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC5_SRR (rh) */
#define ADC_SRC5_SRR_POS                     _ADC_UL(13)
#define ADC_SRC5_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC5_CLRR (w) */
#define ADC_SRC5_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC5_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC5_SETR (w) */
#define ADC_SRC5_SETR_POS                    _ADC_UL(15)
#define ADC_SRC5_SETR_LEN                    _ADC_UL(1)

/* ADC_SRC4_SRPN (rw) */
#define ADC_SRC4_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC4_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC4_TOS (rw) */
#define ADC_SRC4_TOS_POS                     _ADC_UL(10)
#define ADC_SRC4_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC4_SRE (rw) */
#define ADC_SRC4_SRE_POS                     _ADC_UL(12)
#define ADC_SRC4_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC4_SRR (rh) */
#define ADC_SRC4_SRR_POS                     _ADC_UL(13)
#define ADC_SRC4_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC4_CLRR (w) */
#define ADC_SRC4_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC4_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC4_SETR (w) */
#define ADC_SRC4_SETR_POS                    _ADC_UL(15)
#define ADC_SRC4_SETR_LEN                    _ADC_UL(1)

/* ADC_SRC3_SRPN (rw) */
#define ADC_SRC3_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC3_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC3_TOS (rw) */
#define ADC_SRC3_TOS_POS                     _ADC_UL(10)
#define ADC_SRC3_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC3_SRE (rw) */
#define ADC_SRC3_SRE_POS                     _ADC_UL(12)
#define ADC_SRC3_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC3_SRR (rh) */
#define ADC_SRC3_SRR_POS                     _ADC_UL(13)
#define ADC_SRC3_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC3_CLRR (w) */
#define ADC_SRC3_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC3_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC3_SETR (w) */
#define ADC_SRC3_SETR_POS                    _ADC_UL(15)
#define ADC_SRC3_SETR_LEN                    _ADC_UL(1)

/* ADC_SRC2_SRPN (rw) */
#define ADC_SRC2_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC2_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC2_TOS (rw) */
#define ADC_SRC2_TOS_POS                     _ADC_UL(10)
#define ADC_SRC2_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC2_SRE (rw) */
#define ADC_SRC2_SRE_POS                     _ADC_UL(12)
#define ADC_SRC2_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC2_SRR (rh) */
#define ADC_SRC2_SRR_POS                     _ADC_UL(13)
#define ADC_SRC2_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC2_CLRR (w) */
#define ADC_SRC2_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC2_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC2_SETR (w) */
#define ADC_SRC2_SETR_POS                    _ADC_UL(15)
#define ADC_SRC2_SETR_LEN                    _ADC_UL(1)

/* ADC_SRC1_SRPN (rw) */
#define ADC_SRC1_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC1_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC1_TOS (rw) */
#define ADC_SRC1_TOS_POS                     _ADC_UL(10)
#define ADC_SRC1_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC1_SRE (rw) */
#define ADC_SRC1_SRE_POS                     _ADC_UL(12)
#define ADC_SRC1_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC1_SRR (rh) */
#define ADC_SRC1_SRR_POS                     _ADC_UL(13)
#define ADC_SRC1_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC1_CLRR (w) */
#define ADC_SRC1_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC1_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC1_SETR (w) */
#define ADC_SRC1_SETR_POS                    _ADC_UL(15)
#define ADC_SRC1_SETR_LEN                    _ADC_UL(1)

/* ADC_SRC0_SRPN (rw) */
#define ADC_SRC0_SRPN_POS                    _ADC_UL(0)
#define ADC_SRC0_SRPN_LEN                    _ADC_UL(8)

/* ADC_SRC0_TOS (rw) */
#define ADC_SRC0_TOS_POS                     _ADC_UL(10)
#define ADC_SRC0_TOS_LEN                     _ADC_UL(1)

/* ADC_SRC0_SRE (rw) */
#define ADC_SRC0_SRE_POS                     _ADC_UL(12)
#define ADC_SRC0_SRE_LEN                     _ADC_UL(1)

/* ADC_SRC0_SRR (rh) */
#define ADC_SRC0_SRR_POS                     _ADC_UL(13)
#define ADC_SRC0_SRR_LEN                     _ADC_UL(1)

/* ADC_SRC0_CLRR (w) */
#define ADC_SRC0_CLRR_POS                    _ADC_UL(14)
#define ADC_SRC0_CLRR_LEN                    _ADC_UL(1)

/* ADC_SRC0_SETR (w) */
#define ADC_SRC0_SETR_POS                    _ADC_UL(15)
#define ADC_SRC0_SETR_LEN                    _ADC_UL(1)

/* ADC0_CLC_DISR (rw) */
#define ADC0_CLC_DISR_POS                    _ADC_UL(0)
#define ADC0_CLC_DISR_LEN                    _ADC_UL(1)

/* ADC0_CLC_DISS (r) */
#define ADC0_CLC_DISS_POS                    _ADC_UL(1)
#define ADC0_CLC_DISS_LEN                    _ADC_UL(1)

/* ADC0_CLC_SPEN (rw) */
#define ADC0_CLC_SPEN_POS                    _ADC_UL(2)
#define ADC0_CLC_SPEN_LEN                    _ADC_UL(1)

/* ADC0_CLC_EDIS (rw) */
#define ADC0_CLC_EDIS_POS                    _ADC_UL(3)
#define ADC0_CLC_EDIS_LEN                    _ADC_UL(1)

/* ADC0_CLC_SBWE (w) */
#define ADC0_CLC_SBWE_POS                    _ADC_UL(4)
#define ADC0_CLC_SBWE_LEN                    _ADC_UL(1)

/* ADC0_CLC_FSOE (rw) */
#define ADC0_CLC_FSOE_POS                    _ADC_UL(5)
#define ADC0_CLC_FSOE_LEN                    _ADC_UL(1)

/* ADC0_KSCFG_ACK (rh) */
#define ADC0_KSCFG_ACK_POS                   _ADC_UL(2)
#define ADC0_KSCFG_ACK_LEN                   _ADC_UL(1)

/* ADC0_KSCFG_SUSREQ (rh) */
#define ADC0_KSCFG_SUSREQ_POS                _ADC_UL(3)
#define ADC0_KSCFG_SUSREQ_LEN                _ADC_UL(1)

/* ADC0_KSCFG_NOMCFG (rw) */
#define ADC0_KSCFG_NOMCFG_POS                _ADC_UL(4)
#define ADC0_KSCFG_NOMCFG_LEN                _ADC_UL(2)

/* ADC0_KSCFG_BPNOM (w) */
#define ADC0_KSCFG_BPNOM_POS                 _ADC_UL(7)
#define ADC0_KSCFG_BPNOM_LEN                 _ADC_UL(1)

/* ADC0_KSCFG_SUMCFG (rw) */
#define ADC0_KSCFG_SUMCFG_POS                _ADC_UL(8)
#define ADC0_KSCFG_SUMCFG_LEN                _ADC_UL(2)

/* ADC0_KSCFG_BPSUM (w) */
#define ADC0_KSCFG_BPSUM_POS                 _ADC_UL(11)
#define ADC0_KSCFG_BPSUM_LEN                 _ADC_UL(1)

/* ADC0_RSIR_GTSEL (rw) */
#define ADC0_RSIR_GTSEL_POS                  _ADC_UL(0)
#define ADC0_RSIR_GTSEL_LEN                  _ADC_UL(3)

/* ADC0_RSIR_TMEN (rw) */
#define ADC0_RSIR_TMEN_POS                   _ADC_UL(4)
#define ADC0_RSIR_TMEN_LEN                   _ADC_UL(1)

/* ADC0_RSIR_GTI (rh) */
#define ADC0_RSIR_GTI_POS                    _ADC_UL(7)
#define ADC0_RSIR_GTI_LEN                    _ADC_UL(1)

/* ADC0_RSIR_TRSEL (rw) */
#define ADC0_RSIR_TRSEL_POS                  _ADC_UL(8)
#define ADC0_RSIR_TRSEL_LEN                  _ADC_UL(3)

/* ADC0_RSIR_FEN (rw) */
#define ADC0_RSIR_FEN_POS                    _ADC_UL(12)
#define ADC0_RSIR_FEN_LEN                    _ADC_UL(1)

/* ADC0_RSIR_REN (rw) */
#define ADC0_RSIR_REN_POS                    _ADC_UL(13)
#define ADC0_RSIR_REN_LEN                    _ADC_UL(1)

/* ADC0_RSIR_TRI (rh) */
#define ADC0_RSIR_TRI_POS                    _ADC_UL(15)
#define ADC0_RSIR_TRI_LEN                    _ADC_UL(1)

/* ADC0_GLOBCTR_DIVA (rw) */
#define ADC0_GLOBCTR_DIVA_POS                _ADC_UL(0)
#define ADC0_GLOBCTR_DIVA_LEN                _ADC_UL(6)

/* ADC0_GLOBCTR_DIVD (rw) */
#define ADC0_GLOBCTR_DIVD_POS                _ADC_UL(6)
#define ADC0_GLOBCTR_DIVD_LEN                _ADC_UL(2)

/* ADC0_GLOBCTR_ANON (rw) */
#define ADC0_GLOBCTR_ANON_POS                _ADC_UL(8)
#define ADC0_GLOBCTR_ANON_LEN                _ADC_UL(2)

/* ADC0_GLOBCTR_ARBRND (rw) */
#define ADC0_GLOBCTR_ARBRND_POS              _ADC_UL(10)
#define ADC0_GLOBCTR_ARBRND_LEN              _ADC_UL(2)

/* ADC0_GLOBCTR_ARBM (rw) */
#define ADC0_GLOBCTR_ARBM_POS                _ADC_UL(15)
#define ADC0_GLOBCTR_ARBM_LEN                _ADC_UL(1)

/* ADC0_GLOBCFG_MTM7 (rw) */
#define ADC0_GLOBCFG_MTM7_POS                _ADC_UL(4)
#define ADC0_GLOBCFG_MTM7_LEN                _ADC_UL(1)

/* ADC0_GLOBCFG_SUCAL (rw) */
#define ADC0_GLOBCFG_SUCAL_POS               _ADC_UL(5)
#define ADC0_GLOBCFG_SUCAL_LEN               _ADC_UL(1)

/* ADC0_GLOBCFG_DPCAL (rw) */
#define ADC0_GLOBCFG_DPCAL_POS               _ADC_UL(6)
#define ADC0_GLOBCFG_DPCAL_LEN               _ADC_UL(1)

/* ADC0_GLOBSTR_BUSY (rh) */
#define ADC0_GLOBSTR_BUSY_POS                _ADC_UL(0)
#define ADC0_GLOBSTR_BUSY_LEN                _ADC_UL(1)

/* ADC0_GLOBSTR_SAMPLE (rh) */
#define ADC0_GLOBSTR_SAMPLE_POS              _ADC_UL(1)
#define ADC0_GLOBSTR_SAMPLE_LEN              _ADC_UL(1)

/* ADC0_GLOBSTR_CAL (rh) */
#define ADC0_GLOBSTR_CAL_POS                 _ADC_UL(2)
#define ADC0_GLOBSTR_CAL_LEN                 _ADC_UL(1)

/* ADC0_GLOBSTR_CHNR (rh) */
#define ADC0_GLOBSTR_CHNR_POS                _ADC_UL(3)
#define ADC0_GLOBSTR_CHNR_LEN                _ADC_UL(4)

/* ADC0_GLOBSTR_ANON (rh) */
#define ADC0_GLOBSTR_ANON_POS                _ADC_UL(8)
#define ADC0_GLOBSTR_ANON_LEN                _ADC_UL(2)

/* ADC0_GLOBSTR_SYNRUN (rh) */
#define ADC0_GLOBSTR_SYNRUN_POS              _ADC_UL(10)
#define ADC0_GLOBSTR_SYNRUN_LEN              _ADC_UL(1)

/* ADC0_GLOBSTR_CSRC (rh) */
#define ADC0_GLOBSTR_CSRC_POS                _ADC_UL(11)
#define ADC0_GLOBSTR_CSRC_LEN                _ADC_UL(3)

/* ADC0_ASENR_ASEN0 (rw) */
#define ADC0_ASENR_ASEN0_POS                 _ADC_UL(0)
#define ADC0_ASENR_ASEN0_LEN                 _ADC_UL(1)

/* ADC0_ASENR_ASEN1 (rw) */
#define ADC0_ASENR_ASEN1_POS                 _ADC_UL(1)
#define ADC0_ASENR_ASEN1_LEN                 _ADC_UL(1)

/* ADC0_ASENR_ASEN2 (rw) */
#define ADC0_ASENR_ASEN2_POS                 _ADC_UL(2)
#define ADC0_ASENR_ASEN2_LEN                 _ADC_UL(1)

/* ADC0_ASENR_ASEN3 (rw) */
#define ADC0_ASENR_ASEN3_POS                 _ADC_UL(3)
#define ADC0_ASENR_ASEN3_LEN                 _ADC_UL(1)

/* ADC0_ASENR_ASEN4 (rw) */
#define ADC0_ASENR_ASEN4_POS                 _ADC_UL(4)
#define ADC0_ASENR_ASEN4_LEN                 _ADC_UL(1)

/* ADC0_RSPR0_PRIO0 (rw) */
#define ADC0_RSPR0_PRIO0_POS                 _ADC_UL(0)
#define ADC0_RSPR0_PRIO0_LEN                 _ADC_UL(2)

/* ADC0_RSPR0_PRIO1 (rw) */
#define ADC0_RSPR0_PRIO1_POS                 _ADC_UL(4)
#define ADC0_RSPR0_PRIO1_LEN                 _ADC_UL(2)

/* ADC0_RSPR0_PRIO2 (rw) */
#define ADC0_RSPR0_PRIO2_POS                 _ADC_UL(8)
#define ADC0_RSPR0_PRIO2_LEN                 _ADC_UL(2)

/* ADC0_RSPR0_PRIO3 (rw) */
#define ADC0_RSPR0_PRIO3_POS                 _ADC_UL(12)
#define ADC0_RSPR0_PRIO3_LEN                 _ADC_UL(2)

/* ADC0_RSPR0_CSM0 (rw) */
#define ADC0_RSPR0_CSM0_POS                  _ADC_UL(3)
#define ADC0_RSPR0_CSM0_LEN                  _ADC_UL(1)

/* ADC0_RSPR0_CSM1 (rw) */
#define ADC0_RSPR0_CSM1_POS                  _ADC_UL(7)
#define ADC0_RSPR0_CSM1_LEN                  _ADC_UL(1)

/* ADC0_RSPR0_CSM2 (rw) */
#define ADC0_RSPR0_CSM2_POS                  _ADC_UL(11)
#define ADC0_RSPR0_CSM2_LEN                  _ADC_UL(1)

/* ADC0_RSPR0_CSM3 (rw) */
#define ADC0_RSPR0_CSM3_POS                  _ADC_UL(15)
#define ADC0_RSPR0_CSM3_LEN                  _ADC_UL(1)

/* ADC0_RSPR4_PRIO4 (rw) */
#define ADC0_RSPR4_PRIO4_POS                 _ADC_UL(0)
#define ADC0_RSPR4_PRIO4_LEN                 _ADC_UL(2)

/* ADC0_RSPR4_CSM4 (rw) */
#define ADC0_RSPR4_CSM4_POS                  _ADC_UL(3)
#define ADC0_RSPR4_CSM4_LEN                  _ADC_UL(1)

/* ADC0_SYNCTR_STSEL (rw) */
#define ADC0_SYNCTR_STSEL_POS                _ADC_UL(0)
#define ADC0_SYNCTR_STSEL_LEN                _ADC_UL(2)

/* ADC0_SYNCTR_EVALR1 (rw) */
#define ADC0_SYNCTR_EVALR1_POS               _ADC_UL(4)
#define ADC0_SYNCTR_EVALR1_LEN               _ADC_UL(1)

/* ADC0_SYNCTR_EVALR2 (rw) */
#define ADC0_SYNCTR_EVALR2_POS               _ADC_UL(5)
#define ADC0_SYNCTR_EVALR2_LEN               _ADC_UL(1)

/* ADC0_SYNCTR_EVALR3 (rw) */
#define ADC0_SYNCTR_EVALR3_POS               _ADC_UL(6)
#define ADC0_SYNCTR_EVALR3_LEN               _ADC_UL(1)

/* ADC0_INPCR_STC (rw) */
#define ADC0_INPCR_STC_POS                   _ADC_UL(0)
#define ADC0_INPCR_STC_LEN                   _ADC_UL(8)

/* ADC0_INPCR_DW (rw) */
#define ADC0_INPCR_DW_POS                    _ADC_UL(8)
#define ADC0_INPCR_DW_LEN                    _ADC_UL(2)

/* ADC0_CHFR_FC0 (rwh) */
#define ADC0_CHFR_FC0_POS                    _ADC_UL(0)
#define ADC0_CHFR_FC0_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC1 (rwh) */
#define ADC0_CHFR_FC1_POS                    _ADC_UL(1)
#define ADC0_CHFR_FC1_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC2 (rwh) */
#define ADC0_CHFR_FC2_POS                    _ADC_UL(2)
#define ADC0_CHFR_FC2_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC3 (rwh) */
#define ADC0_CHFR_FC3_POS                    _ADC_UL(3)
#define ADC0_CHFR_FC3_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC4 (rwh) */
#define ADC0_CHFR_FC4_POS                    _ADC_UL(4)
#define ADC0_CHFR_FC4_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC5 (rwh) */
#define ADC0_CHFR_FC5_POS                    _ADC_UL(5)
#define ADC0_CHFR_FC5_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC6 (rwh) */
#define ADC0_CHFR_FC6_POS                    _ADC_UL(6)
#define ADC0_CHFR_FC6_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC7 (rwh) */
#define ADC0_CHFR_FC7_POS                    _ADC_UL(7)
#define ADC0_CHFR_FC7_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC8 (rwh) */
#define ADC0_CHFR_FC8_POS                    _ADC_UL(8)
#define ADC0_CHFR_FC8_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC9 (rwh) */
#define ADC0_CHFR_FC9_POS                    _ADC_UL(9)
#define ADC0_CHFR_FC9_LEN                    _ADC_UL(1)

/* ADC0_CHFR_FC10 (rwh) */
#define ADC0_CHFR_FC10_POS                   _ADC_UL(10)
#define ADC0_CHFR_FC10_LEN                   _ADC_UL(1)

/* ADC0_CHFR_FC11 (rwh) */
#define ADC0_CHFR_FC11_POS                   _ADC_UL(11)
#define ADC0_CHFR_FC11_LEN                   _ADC_UL(1)

/* ADC0_CHFR_FC12 (rwh) */
#define ADC0_CHFR_FC12_POS                   _ADC_UL(12)
#define ADC0_CHFR_FC12_LEN                   _ADC_UL(1)

/* ADC0_CHFR_FC13 (rwh) */
#define ADC0_CHFR_FC13_POS                   _ADC_UL(13)
#define ADC0_CHFR_FC13_LEN                   _ADC_UL(1)

/* ADC0_CHFR_FC14 (rwh) */
#define ADC0_CHFR_FC14_POS                   _ADC_UL(14)
#define ADC0_CHFR_FC14_LEN                   _ADC_UL(1)

/* ADC0_CHFR_FC15 (rwh) */
#define ADC0_CHFR_FC15_POS                   _ADC_UL(15)
#define ADC0_CHFR_FC15_LEN                   _ADC_UL(1)

/* ADC0_CHFCR_CFC0 (w) */
#define ADC0_CHFCR_CFC0_POS                  _ADC_UL(0)
#define ADC0_CHFCR_CFC0_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC1 (w) */
#define ADC0_CHFCR_CFC1_POS                  _ADC_UL(1)
#define ADC0_CHFCR_CFC1_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC2 (w) */
#define ADC0_CHFCR_CFC2_POS                  _ADC_UL(2)
#define ADC0_CHFCR_CFC2_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC3 (w) */
#define ADC0_CHFCR_CFC3_POS                  _ADC_UL(3)
#define ADC0_CHFCR_CFC3_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC4 (w) */
#define ADC0_CHFCR_CFC4_POS                  _ADC_UL(4)
#define ADC0_CHFCR_CFC4_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC5 (w) */
#define ADC0_CHFCR_CFC5_POS                  _ADC_UL(5)
#define ADC0_CHFCR_CFC5_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC6 (w) */
#define ADC0_CHFCR_CFC6_POS                  _ADC_UL(6)
#define ADC0_CHFCR_CFC6_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC7 (w) */
#define ADC0_CHFCR_CFC7_POS                  _ADC_UL(7)
#define ADC0_CHFCR_CFC7_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC8 (w) */
#define ADC0_CHFCR_CFC8_POS                  _ADC_UL(8)
#define ADC0_CHFCR_CFC8_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC9 (w) */
#define ADC0_CHFCR_CFC9_POS                  _ADC_UL(9)
#define ADC0_CHFCR_CFC9_LEN                  _ADC_UL(1)

/* ADC0_CHFCR_CFC10 (w) */
#define ADC0_CHFCR_CFC10_POS                 _ADC_UL(10)
#define ADC0_CHFCR_CFC10_LEN                 _ADC_UL(1)

/* ADC0_CHFCR_CFC11 (w) */
#define ADC0_CHFCR_CFC11_POS                 _ADC_UL(11)
#define ADC0_CHFCR_CFC11_LEN                 _ADC_UL(1)

/* ADC0_CHFCR_CFC12 (w) */
#define ADC0_CHFCR_CFC12_POS                 _ADC_UL(12)
#define ADC0_CHFCR_CFC12_LEN                 _ADC_UL(1)

/* ADC0_CHFCR_CFC13 (w) */
#define ADC0_CHFCR_CFC13_POS                 _ADC_UL(13)
#define ADC0_CHFCR_CFC13_LEN                 _ADC_UL(1)

/* ADC0_CHFCR_CFC14 (w) */
#define ADC0_CHFCR_CFC14_POS                 _ADC_UL(14)
#define ADC0_CHFCR_CFC14_LEN                 _ADC_UL(1)

/* ADC0_CHFCR_CFC15 (w) */
#define ADC0_CHFCR_CFC15_POS                 _ADC_UL(15)
#define ADC0_CHFCR_CFC15_LEN                 _ADC_UL(1)

/* ADC0_CHENPR0_CHENP0 (rw) */
#define ADC0_CHENPR0_CHENP0_POS              _ADC_UL(0)
#define ADC0_CHENPR0_CHENP0_LEN              _ADC_UL(3)

/* ADC0_CHENPR0_CHENP1 (rw) */
#define ADC0_CHENPR0_CHENP1_POS              _ADC_UL(4)
#define ADC0_CHENPR0_CHENP1_LEN              _ADC_UL(3)

/* ADC0_CHENPR0_CHENP2 (rw) */
#define ADC0_CHENPR0_CHENP2_POS              _ADC_UL(8)
#define ADC0_CHENPR0_CHENP2_LEN              _ADC_UL(3)

/* ADC0_CHENPR0_CHENP3 (rw) */
#define ADC0_CHENPR0_CHENP3_POS              _ADC_UL(12)
#define ADC0_CHENPR0_CHENP3_LEN              _ADC_UL(3)

/* ADC0_CHENPR0_CHENP4 (rw) */
#define ADC0_CHENPR0_CHENP4_POS              _ADC_UL(16)
#define ADC0_CHENPR0_CHENP4_LEN              _ADC_UL(3)

/* ADC0_CHENPR0_CHENP5 (rw) */
#define ADC0_CHENPR0_CHENP5_POS              _ADC_UL(20)
#define ADC0_CHENPR0_CHENP5_LEN              _ADC_UL(3)

/* ADC0_CHENPR0_CHENP6 (rw) */
#define ADC0_CHENPR0_CHENP6_POS              _ADC_UL(24)
#define ADC0_CHENPR0_CHENP6_LEN              _ADC_UL(3)

/* ADC0_CHENPR0_CHENP7 (rw) */
#define ADC0_CHENPR0_CHENP7_POS              _ADC_UL(28)
#define ADC0_CHENPR0_CHENP7_LEN              _ADC_UL(3)

/* ADC0_CHENPR8_CHENP8 (rw) */
#define ADC0_CHENPR8_CHENP8_POS              _ADC_UL(0)
#define ADC0_CHENPR8_CHENP8_LEN              _ADC_UL(3)

/* ADC0_CHENPR8_CHENP9 (rw) */
#define ADC0_CHENPR8_CHENP9_POS              _ADC_UL(4)
#define ADC0_CHENPR8_CHENP9_LEN              _ADC_UL(3)

/* ADC0_CHENPR8_CHENP10 (rw) */
#define ADC0_CHENPR8_CHENP10_POS             _ADC_UL(8)
#define ADC0_CHENPR8_CHENP10_LEN             _ADC_UL(3)

/* ADC0_CHENPR8_CHENP11 (rw) */
#define ADC0_CHENPR8_CHENP11_POS             _ADC_UL(12)
#define ADC0_CHENPR8_CHENP11_LEN             _ADC_UL(3)

/* ADC0_CHENPR8_CHENP12 (rw) */
#define ADC0_CHENPR8_CHENP12_POS             _ADC_UL(16)
#define ADC0_CHENPR8_CHENP12_LEN             _ADC_UL(3)

/* ADC0_CHENPR8_CHENP13 (rw) */
#define ADC0_CHENPR8_CHENP13_POS             _ADC_UL(20)
#define ADC0_CHENPR8_CHENP13_LEN             _ADC_UL(3)

/* ADC0_CHENPR8_CHENP14 (rw) */
#define ADC0_CHENPR8_CHENP14_POS             _ADC_UL(24)
#define ADC0_CHENPR8_CHENP14_LEN             _ADC_UL(3)

/* ADC0_CHENPR8_CHENP15 (rw) */
#define ADC0_CHENPR8_CHENP15_POS             _ADC_UL(28)
#define ADC0_CHENPR8_CHENP15_LEN             _ADC_UL(3)

/* ADC0_EVFR_FR0 (rwh) */
#define ADC0_EVFR_FR0_POS                    _ADC_UL(0)
#define ADC0_EVFR_FR0_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR1 (rwh) */
#define ADC0_EVFR_FR1_POS                    _ADC_UL(1)
#define ADC0_EVFR_FR1_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR2 (rwh) */
#define ADC0_EVFR_FR2_POS                    _ADC_UL(2)
#define ADC0_EVFR_FR2_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR3 (rwh) */
#define ADC0_EVFR_FR3_POS                    _ADC_UL(3)
#define ADC0_EVFR_FR3_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR4 (rwh) */
#define ADC0_EVFR_FR4_POS                    _ADC_UL(4)
#define ADC0_EVFR_FR4_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR5 (rwh) */
#define ADC0_EVFR_FR5_POS                    _ADC_UL(5)
#define ADC0_EVFR_FR5_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR6 (rwh) */
#define ADC0_EVFR_FR6_POS                    _ADC_UL(6)
#define ADC0_EVFR_FR6_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR7 (rwh) */
#define ADC0_EVFR_FR7_POS                    _ADC_UL(7)
#define ADC0_EVFR_FR7_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR8 (rwh) */
#define ADC0_EVFR_FR8_POS                    _ADC_UL(8)
#define ADC0_EVFR_FR8_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR9 (rwh) */
#define ADC0_EVFR_FR9_POS                    _ADC_UL(9)
#define ADC0_EVFR_FR9_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FR10 (rwh) */
#define ADC0_EVFR_FR10_POS                   _ADC_UL(10)
#define ADC0_EVFR_FR10_LEN                   _ADC_UL(1)

/* ADC0_EVFR_FR11 (rwh) */
#define ADC0_EVFR_FR11_POS                   _ADC_UL(11)
#define ADC0_EVFR_FR11_LEN                   _ADC_UL(1)

/* ADC0_EVFR_FR12 (rwh) */
#define ADC0_EVFR_FR12_POS                   _ADC_UL(12)
#define ADC0_EVFR_FR12_LEN                   _ADC_UL(1)

/* ADC0_EVFR_FR13 (rwh) */
#define ADC0_EVFR_FR13_POS                   _ADC_UL(13)
#define ADC0_EVFR_FR13_LEN                   _ADC_UL(1)

/* ADC0_EVFR_FR14 (rwh) */
#define ADC0_EVFR_FR14_POS                   _ADC_UL(14)
#define ADC0_EVFR_FR14_LEN                   _ADC_UL(1)

/* ADC0_EVFR_FR15 (rwh) */
#define ADC0_EVFR_FR15_POS                   _ADC_UL(15)
#define ADC0_EVFR_FR15_LEN                   _ADC_UL(1)

/* ADC0_EVFR_FS0 (rwh) */
#define ADC0_EVFR_FS0_POS                    _ADC_UL(16)
#define ADC0_EVFR_FS0_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FS1 (rwh) */
#define ADC0_EVFR_FS1_POS                    _ADC_UL(17)
#define ADC0_EVFR_FS1_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FS2 (rwh) */
#define ADC0_EVFR_FS2_POS                    _ADC_UL(18)
#define ADC0_EVFR_FS2_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FS3 (rwh) */
#define ADC0_EVFR_FS3_POS                    _ADC_UL(19)
#define ADC0_EVFR_FS3_LEN                    _ADC_UL(1)

/* ADC0_EVFR_FS4 (rwh) */
#define ADC0_EVFR_FS4_POS                    _ADC_UL(20)
#define ADC0_EVFR_FS4_LEN                    _ADC_UL(1)

/* ADC0_EVFR_GFS0 (rh) */
#define ADC0_EVFR_GFS0_POS                   _ADC_UL(24)
#define ADC0_EVFR_GFS0_LEN                   _ADC_UL(1)

/* ADC0_EVFR_GFS1 (rh) */
#define ADC0_EVFR_GFS1_POS                   _ADC_UL(25)
#define ADC0_EVFR_GFS1_LEN                   _ADC_UL(1)

/* ADC0_EVFR_GFS2 (rh) */
#define ADC0_EVFR_GFS2_POS                   _ADC_UL(26)
#define ADC0_EVFR_GFS2_LEN                   _ADC_UL(1)

/* ADC0_EVFR_GFS3 (rh) */
#define ADC0_EVFR_GFS3_POS                   _ADC_UL(27)
#define ADC0_EVFR_GFS3_LEN                   _ADC_UL(1)

/* ADC0_EVFR_GFS4 (rh) */
#define ADC0_EVFR_GFS4_POS                   _ADC_UL(28)
#define ADC0_EVFR_GFS4_LEN                   _ADC_UL(1)

/* ADC0_EVFCR_CFR0 (w) */
#define ADC0_EVFCR_CFR0_POS                  _ADC_UL(0)
#define ADC0_EVFCR_CFR0_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR1 (w) */
#define ADC0_EVFCR_CFR1_POS                  _ADC_UL(1)
#define ADC0_EVFCR_CFR1_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR2 (w) */
#define ADC0_EVFCR_CFR2_POS                  _ADC_UL(2)
#define ADC0_EVFCR_CFR2_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR3 (w) */
#define ADC0_EVFCR_CFR3_POS                  _ADC_UL(3)
#define ADC0_EVFCR_CFR3_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR4 (w) */
#define ADC0_EVFCR_CFR4_POS                  _ADC_UL(4)
#define ADC0_EVFCR_CFR4_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR5 (w) */
#define ADC0_EVFCR_CFR5_POS                  _ADC_UL(5)
#define ADC0_EVFCR_CFR5_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR6 (w) */
#define ADC0_EVFCR_CFR6_POS                  _ADC_UL(6)
#define ADC0_EVFCR_CFR6_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR7 (w) */
#define ADC0_EVFCR_CFR7_POS                  _ADC_UL(7)
#define ADC0_EVFCR_CFR7_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR8 (w) */
#define ADC0_EVFCR_CFR8_POS                  _ADC_UL(8)
#define ADC0_EVFCR_CFR8_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR9 (w) */
#define ADC0_EVFCR_CFR9_POS                  _ADC_UL(9)
#define ADC0_EVFCR_CFR9_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFR10 (w) */
#define ADC0_EVFCR_CFR10_POS                 _ADC_UL(10)
#define ADC0_EVFCR_CFR10_LEN                 _ADC_UL(1)

/* ADC0_EVFCR_CFR11 (w) */
#define ADC0_EVFCR_CFR11_POS                 _ADC_UL(11)
#define ADC0_EVFCR_CFR11_LEN                 _ADC_UL(1)

/* ADC0_EVFCR_CFR12 (w) */
#define ADC0_EVFCR_CFR12_POS                 _ADC_UL(12)
#define ADC0_EVFCR_CFR12_LEN                 _ADC_UL(1)

/* ADC0_EVFCR_CFR13 (w) */
#define ADC0_EVFCR_CFR13_POS                 _ADC_UL(13)
#define ADC0_EVFCR_CFR13_LEN                 _ADC_UL(1)

/* ADC0_EVFCR_CFR14 (w) */
#define ADC0_EVFCR_CFR14_POS                 _ADC_UL(14)
#define ADC0_EVFCR_CFR14_LEN                 _ADC_UL(1)

/* ADC0_EVFCR_CFR15 (w) */
#define ADC0_EVFCR_CFR15_POS                 _ADC_UL(15)
#define ADC0_EVFCR_CFR15_LEN                 _ADC_UL(1)

/* ADC0_EVFCR_CFS0 (w) */
#define ADC0_EVFCR_CFS0_POS                  _ADC_UL(16)
#define ADC0_EVFCR_CFS0_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFS1 (w) */
#define ADC0_EVFCR_CFS1_POS                  _ADC_UL(17)
#define ADC0_EVFCR_CFS1_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFS2 (w) */
#define ADC0_EVFCR_CFS2_POS                  _ADC_UL(18)
#define ADC0_EVFCR_CFS2_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFS3 (w) */
#define ADC0_EVFCR_CFS3_POS                  _ADC_UL(19)
#define ADC0_EVFCR_CFS3_LEN                  _ADC_UL(1)

/* ADC0_EVFCR_CFS4 (w) */
#define ADC0_EVFCR_CFS4_POS                  _ADC_UL(20)
#define ADC0_EVFCR_CFS4_LEN                  _ADC_UL(1)

/* ADC0_EVNPR_SENP0 (rw) */
#define ADC0_EVNPR_SENP0_POS                 _ADC_UL(0)
#define ADC0_EVNPR_SENP0_LEN                 _ADC_UL(3)

/* ADC0_EVNPR_SENP1 (rw) */
#define ADC0_EVNPR_SENP1_POS                 _ADC_UL(4)
#define ADC0_EVNPR_SENP1_LEN                 _ADC_UL(3)

/* ADC0_EVNPR_SENP2 (rw) */
#define ADC0_EVNPR_SENP2_POS                 _ADC_UL(8)
#define ADC0_EVNPR_SENP2_LEN                 _ADC_UL(3)

/* ADC0_EVNPR_SENP3 (rw) */
#define ADC0_EVNPR_SENP3_POS                 _ADC_UL(12)
#define ADC0_EVNPR_SENP3_LEN                 _ADC_UL(3)

/* ADC0_EVNPR_SENP4 (rw) */
#define ADC0_EVNPR_SENP4_POS                 _ADC_UL(16)
#define ADC0_EVNPR_SENP4_LEN                 _ADC_UL(3)

/* ADC0_QMR0_ENGT (rw) */
#define ADC0_QMR0_ENGT_POS                   _ADC_UL(0)
#define ADC0_QMR0_ENGT_LEN                   _ADC_UL(2)

/* ADC0_QMR0_ENTR (rw) */
#define ADC0_QMR0_ENTR_POS                   _ADC_UL(2)
#define ADC0_QMR0_ENTR_LEN                   _ADC_UL(1)

/* ADC0_QMR0_CLRV (w) */
#define ADC0_QMR0_CLRV_POS                   _ADC_UL(8)
#define ADC0_QMR0_CLRV_LEN                   _ADC_UL(1)

/* ADC0_QMR0_TREV (w) */
#define ADC0_QMR0_TREV_POS                   _ADC_UL(9)
#define ADC0_QMR0_TREV_LEN                   _ADC_UL(1)

/* ADC0_QMR0_FLUSH (w) */
#define ADC0_QMR0_FLUSH_POS                  _ADC_UL(10)
#define ADC0_QMR0_FLUSH_LEN                  _ADC_UL(1)

/* ADC0_QMR0_CEV (w) */
#define ADC0_QMR0_CEV_POS                    _ADC_UL(11)
#define ADC0_QMR0_CEV_LEN                    _ADC_UL(1)

/* ADC0_QSR0_FILL (rh) */
#define ADC0_QSR0_FILL_POS                   _ADC_UL(0)
#define ADC0_QSR0_FILL_LEN                   _ADC_UL(4)

/* ADC0_QSR0_EMPTY (rh) */
#define ADC0_QSR0_EMPTY_POS                  _ADC_UL(5)
#define ADC0_QSR0_EMPTY_LEN                  _ADC_UL(1)

/* ADC0_QSR0_REQGT (rh) */
#define ADC0_QSR0_REQGT_POS                  _ADC_UL(7)
#define ADC0_QSR0_REQGT_LEN                  _ADC_UL(1)

/* ADC0_QSR0_EV (rh) */
#define ADC0_QSR0_EV_POS                     _ADC_UL(8)
#define ADC0_QSR0_EV_LEN                     _ADC_UL(1)

/* ADC0_Q0R0_REQCHNR (rh) */
#define ADC0_Q0R0_REQCHNR_POS                _ADC_UL(0)
#define ADC0_Q0R0_REQCHNR_LEN                _ADC_UL(4)

/* ADC0_Q0R0_RF (rh) */
#define ADC0_Q0R0_RF_POS                     _ADC_UL(5)
#define ADC0_Q0R0_RF_LEN                     _ADC_UL(1)

/* ADC0_Q0R0_ENSI (rh) */
#define ADC0_Q0R0_ENSI_POS                   _ADC_UL(6)
#define ADC0_Q0R0_ENSI_LEN                   _ADC_UL(1)

/* ADC0_Q0R0_EXTR (rh) */
#define ADC0_Q0R0_EXTR_POS                   _ADC_UL(7)
#define ADC0_Q0R0_EXTR_LEN                   _ADC_UL(1)

/* ADC0_Q0R0_V (rh) */
#define ADC0_Q0R0_V_POS                      _ADC_UL(8)
#define ADC0_Q0R0_V_LEN                      _ADC_UL(1)

/* ADC0_QBUR0_REQCHNR (rh) */
#define ADC0_QBUR0_REQCHNR_POS               _ADC_UL(0)
#define ADC0_QBUR0_REQCHNR_LEN               _ADC_UL(4)

/* ADC0_QBUR0_RF (rh) */
#define ADC0_QBUR0_RF_POS                    _ADC_UL(5)
#define ADC0_QBUR0_RF_LEN                    _ADC_UL(1)

/* ADC0_QBUR0_ENSI (rh) */
#define ADC0_QBUR0_ENSI_POS                  _ADC_UL(6)
#define ADC0_QBUR0_ENSI_LEN                  _ADC_UL(1)

/* ADC0_QBUR0_EXTR (rh) */
#define ADC0_QBUR0_EXTR_POS                  _ADC_UL(7)
#define ADC0_QBUR0_EXTR_LEN                  _ADC_UL(1)

/* ADC0_QBUR0_V (rh) */
#define ADC0_QBUR0_V_POS                     _ADC_UL(8)
#define ADC0_QBUR0_V_LEN                     _ADC_UL(1)

/* ADC0_QINR0_REQCHNR (w) */
#define ADC0_QINR0_REQCHNR_POS               _ADC_UL(0)
#define ADC0_QINR0_REQCHNR_LEN               _ADC_UL(4)

/* ADC0_QINR0_RF (w) */
#define ADC0_QINR0_RF_POS                    _ADC_UL(5)
#define ADC0_QINR0_RF_LEN                    _ADC_UL(1)

/* ADC0_QINR0_ENSI (w) */
#define ADC0_QINR0_ENSI_POS                  _ADC_UL(6)
#define ADC0_QINR0_ENSI_LEN                  _ADC_UL(1)

/* ADC0_QINR0_EXTR (w) */
#define ADC0_QINR0_EXTR_POS                  _ADC_UL(7)
#define ADC0_QINR0_EXTR_LEN                  _ADC_UL(1)

/* ADC0_CRCR1_CH0 (rwh) */
#define ADC0_CRCR1_CH0_POS                   _ADC_UL(0)
#define ADC0_CRCR1_CH0_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH1 (rwh) */
#define ADC0_CRCR1_CH1_POS                   _ADC_UL(1)
#define ADC0_CRCR1_CH1_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH2 (rwh) */
#define ADC0_CRCR1_CH2_POS                   _ADC_UL(2)
#define ADC0_CRCR1_CH2_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH3 (rwh) */
#define ADC0_CRCR1_CH3_POS                   _ADC_UL(3)
#define ADC0_CRCR1_CH3_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH4 (rwh) */
#define ADC0_CRCR1_CH4_POS                   _ADC_UL(4)
#define ADC0_CRCR1_CH4_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH5 (rwh) */
#define ADC0_CRCR1_CH5_POS                   _ADC_UL(5)
#define ADC0_CRCR1_CH5_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH6 (rwh) */
#define ADC0_CRCR1_CH6_POS                   _ADC_UL(6)
#define ADC0_CRCR1_CH6_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH7 (rwh) */
#define ADC0_CRCR1_CH7_POS                   _ADC_UL(7)
#define ADC0_CRCR1_CH7_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH8 (rwh) */
#define ADC0_CRCR1_CH8_POS                   _ADC_UL(8)
#define ADC0_CRCR1_CH8_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH9 (rwh) */
#define ADC0_CRCR1_CH9_POS                   _ADC_UL(9)
#define ADC0_CRCR1_CH9_LEN                   _ADC_UL(1)

/* ADC0_CRCR1_CH10 (rwh) */
#define ADC0_CRCR1_CH10_POS                  _ADC_UL(10)
#define ADC0_CRCR1_CH10_LEN                  _ADC_UL(1)

/* ADC0_CRCR1_CH11 (rwh) */
#define ADC0_CRCR1_CH11_POS                  _ADC_UL(11)
#define ADC0_CRCR1_CH11_LEN                  _ADC_UL(1)

/* ADC0_CRCR1_CH12 (rwh) */
#define ADC0_CRCR1_CH12_POS                  _ADC_UL(12)
#define ADC0_CRCR1_CH12_LEN                  _ADC_UL(1)

/* ADC0_CRCR1_CH13 (rwh) */
#define ADC0_CRCR1_CH13_POS                  _ADC_UL(13)
#define ADC0_CRCR1_CH13_LEN                  _ADC_UL(1)

/* ADC0_CRCR1_CH14 (rwh) */
#define ADC0_CRCR1_CH14_POS                  _ADC_UL(14)
#define ADC0_CRCR1_CH14_LEN                  _ADC_UL(1)

/* ADC0_CRCR1_CH15 (rwh) */
#define ADC0_CRCR1_CH15_POS                  _ADC_UL(15)
#define ADC0_CRCR1_CH15_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP0 (rwh) */
#define ADC0_CRPR1_CHP0_POS                  _ADC_UL(0)
#define ADC0_CRPR1_CHP0_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP1 (rwh) */
#define ADC0_CRPR1_CHP1_POS                  _ADC_UL(1)
#define ADC0_CRPR1_CHP1_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP2 (rwh) */
#define ADC0_CRPR1_CHP2_POS                  _ADC_UL(2)
#define ADC0_CRPR1_CHP2_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP3 (rwh) */
#define ADC0_CRPR1_CHP3_POS                  _ADC_UL(3)
#define ADC0_CRPR1_CHP3_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP4 (rwh) */
#define ADC0_CRPR1_CHP4_POS                  _ADC_UL(4)
#define ADC0_CRPR1_CHP4_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP5 (rwh) */
#define ADC0_CRPR1_CHP5_POS                  _ADC_UL(5)
#define ADC0_CRPR1_CHP5_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP6 (rwh) */
#define ADC0_CRPR1_CHP6_POS                  _ADC_UL(6)
#define ADC0_CRPR1_CHP6_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP7 (rwh) */
#define ADC0_CRPR1_CHP7_POS                  _ADC_UL(7)
#define ADC0_CRPR1_CHP7_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP8 (rwh) */
#define ADC0_CRPR1_CHP8_POS                  _ADC_UL(8)
#define ADC0_CRPR1_CHP8_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP9 (rwh) */
#define ADC0_CRPR1_CHP9_POS                  _ADC_UL(9)
#define ADC0_CRPR1_CHP9_LEN                  _ADC_UL(1)

/* ADC0_CRPR1_CHP10 (rwh) */
#define ADC0_CRPR1_CHP10_POS                 _ADC_UL(10)
#define ADC0_CRPR1_CHP10_LEN                 _ADC_UL(1)

/* ADC0_CRPR1_CHP11 (rwh) */
#define ADC0_CRPR1_CHP11_POS                 _ADC_UL(11)
#define ADC0_CRPR1_CHP11_LEN                 _ADC_UL(1)

/* ADC0_CRPR1_CHP12 (rwh) */
#define ADC0_CRPR1_CHP12_POS                 _ADC_UL(12)
#define ADC0_CRPR1_CHP12_LEN                 _ADC_UL(1)

/* ADC0_CRPR1_CHP13 (rwh) */
#define ADC0_CRPR1_CHP13_POS                 _ADC_UL(13)
#define ADC0_CRPR1_CHP13_LEN                 _ADC_UL(1)

/* ADC0_CRPR1_CHP14 (rwh) */
#define ADC0_CRPR1_CHP14_POS                 _ADC_UL(14)
#define ADC0_CRPR1_CHP14_LEN                 _ADC_UL(1)

/* ADC0_CRPR1_CHP15 (rwh) */
#define ADC0_CRPR1_CHP15_POS                 _ADC_UL(15)
#define ADC0_CRPR1_CHP15_LEN                 _ADC_UL(1)

/* ADC0_CRMR1_ENGT (rw) */
#define ADC0_CRMR1_ENGT_POS                  _ADC_UL(0)
#define ADC0_CRMR1_ENGT_LEN                  _ADC_UL(2)

/* ADC0_CRMR1_ENTR (rw) */
#define ADC0_CRMR1_ENTR_POS                  _ADC_UL(2)
#define ADC0_CRMR1_ENTR_LEN                  _ADC_UL(1)

/* ADC0_CRMR1_ENSI (rw) */
#define ADC0_CRMR1_ENSI_POS                  _ADC_UL(3)
#define ADC0_CRMR1_ENSI_LEN                  _ADC_UL(1)

/* ADC0_CRMR1_SCAN (rw) */
#define ADC0_CRMR1_SCAN_POS                  _ADC_UL(4)
#define ADC0_CRMR1_SCAN_LEN                  _ADC_UL(1)

/* ADC0_CRMR1_LDM (rw) */
#define ADC0_CRMR1_LDM_POS                   _ADC_UL(5)
#define ADC0_CRMR1_LDM_LEN                   _ADC_UL(1)

/* ADC0_CRMR1_REQGT (rh) */
#define ADC0_CRMR1_REQGT_POS                 _ADC_UL(7)
#define ADC0_CRMR1_REQGT_LEN                 _ADC_UL(1)

/* ADC0_CRMR1_CLRPND (w) */
#define ADC0_CRMR1_CLRPND_POS                _ADC_UL(8)
#define ADC0_CRMR1_CLRPND_LEN                _ADC_UL(1)

/* ADC0_CRMR1_LDEV (w) */
#define ADC0_CRMR1_LDEV_POS                  _ADC_UL(9)
#define ADC0_CRMR1_LDEV_LEN                  _ADC_UL(1)

/* ADC0_QMR2_ENGT (rw) */
#define ADC0_QMR2_ENGT_POS                   _ADC_UL(0)
#define ADC0_QMR2_ENGT_LEN                   _ADC_UL(2)

/* ADC0_QMR2_ENTR (rw) */
#define ADC0_QMR2_ENTR_POS                   _ADC_UL(2)
#define ADC0_QMR2_ENTR_LEN                   _ADC_UL(1)

/* ADC0_QMR2_CLRV (w) */
#define ADC0_QMR2_CLRV_POS                   _ADC_UL(8)
#define ADC0_QMR2_CLRV_LEN                   _ADC_UL(1)

/* ADC0_QMR2_TREV (w) */
#define ADC0_QMR2_TREV_POS                   _ADC_UL(9)
#define ADC0_QMR2_TREV_LEN                   _ADC_UL(1)

/* ADC0_QMR2_FLUSH (w) */
#define ADC0_QMR2_FLUSH_POS                  _ADC_UL(10)
#define ADC0_QMR2_FLUSH_LEN                  _ADC_UL(1)

/* ADC0_QMR2_CEV (w) */
#define ADC0_QMR2_CEV_POS                    _ADC_UL(11)
#define ADC0_QMR2_CEV_LEN                    _ADC_UL(1)

/* ADC0_QSR2_FILL (rh) */
#define ADC0_QSR2_FILL_POS                   _ADC_UL(0)
#define ADC0_QSR2_FILL_LEN                   _ADC_UL(4)

/* ADC0_QSR2_EMPTY (rh) */
#define ADC0_QSR2_EMPTY_POS                  _ADC_UL(5)
#define ADC0_QSR2_EMPTY_LEN                  _ADC_UL(1)

/* ADC0_QSR2_REQGT (rh) */
#define ADC0_QSR2_REQGT_POS                  _ADC_UL(7)
#define ADC0_QSR2_REQGT_LEN                  _ADC_UL(1)

/* ADC0_QSR2_EV (rh) */
#define ADC0_QSR2_EV_POS                     _ADC_UL(8)
#define ADC0_QSR2_EV_LEN                     _ADC_UL(1)

/* ADC0_Q0R2_REQCHNR (rh) */
#define ADC0_Q0R2_REQCHNR_POS                _ADC_UL(0)
#define ADC0_Q0R2_REQCHNR_LEN                _ADC_UL(4)

/* ADC0_Q0R2_RF (rh) */
#define ADC0_Q0R2_RF_POS                     _ADC_UL(5)
#define ADC0_Q0R2_RF_LEN                     _ADC_UL(1)

/* ADC0_Q0R2_ENSI (rh) */
#define ADC0_Q0R2_ENSI_POS                   _ADC_UL(6)
#define ADC0_Q0R2_ENSI_LEN                   _ADC_UL(1)

/* ADC0_Q0R2_EXTR (rh) */
#define ADC0_Q0R2_EXTR_POS                   _ADC_UL(7)
#define ADC0_Q0R2_EXTR_LEN                   _ADC_UL(1)

/* ADC0_Q0R2_V (rh) */
#define ADC0_Q0R2_V_POS                      _ADC_UL(8)
#define ADC0_Q0R2_V_LEN                      _ADC_UL(1)

/* ADC0_QBUR2_REQCHNR (rh) */
#define ADC0_QBUR2_REQCHNR_POS               _ADC_UL(0)
#define ADC0_QBUR2_REQCHNR_LEN               _ADC_UL(4)

/* ADC0_QBUR2_RF (rh) */
#define ADC0_QBUR2_RF_POS                    _ADC_UL(5)
#define ADC0_QBUR2_RF_LEN                    _ADC_UL(1)

/* ADC0_QBUR2_ENSI (rh) */
#define ADC0_QBUR2_ENSI_POS                  _ADC_UL(6)
#define ADC0_QBUR2_ENSI_LEN                  _ADC_UL(1)

/* ADC0_QBUR2_EXTR (rh) */
#define ADC0_QBUR2_EXTR_POS                  _ADC_UL(7)
#define ADC0_QBUR2_EXTR_LEN                  _ADC_UL(1)

/* ADC0_QBUR2_V (rh) */
#define ADC0_QBUR2_V_POS                     _ADC_UL(8)
#define ADC0_QBUR2_V_LEN                     _ADC_UL(1)

/* ADC0_QINR2_REQCHNR (w) */
#define ADC0_QINR2_REQCHNR_POS               _ADC_UL(0)
#define ADC0_QINR2_REQCHNR_LEN               _ADC_UL(4)

/* ADC0_QINR2_RF (w) */
#define ADC0_QINR2_RF_POS                    _ADC_UL(5)
#define ADC0_QINR2_RF_LEN                    _ADC_UL(1)

/* ADC0_QINR2_ENSI (w) */
#define ADC0_QINR2_ENSI_POS                  _ADC_UL(6)
#define ADC0_QINR2_ENSI_LEN                  _ADC_UL(1)

/* ADC0_QINR2_EXTR (w) */
#define ADC0_QINR2_EXTR_POS                  _ADC_UL(7)
#define ADC0_QINR2_EXTR_LEN                  _ADC_UL(1)

/* ADC0_CRCR3_CH0 (rwh) */
#define ADC0_CRCR3_CH0_POS                   _ADC_UL(0)
#define ADC0_CRCR3_CH0_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH1 (rwh) */
#define ADC0_CRCR3_CH1_POS                   _ADC_UL(1)
#define ADC0_CRCR3_CH1_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH2 (rwh) */
#define ADC0_CRCR3_CH2_POS                   _ADC_UL(2)
#define ADC0_CRCR3_CH2_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH3 (rwh) */
#define ADC0_CRCR3_CH3_POS                   _ADC_UL(3)
#define ADC0_CRCR3_CH3_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH4 (rwh) */
#define ADC0_CRCR3_CH4_POS                   _ADC_UL(4)
#define ADC0_CRCR3_CH4_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH5 (rwh) */
#define ADC0_CRCR3_CH5_POS                   _ADC_UL(5)
#define ADC0_CRCR3_CH5_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH6 (rwh) */
#define ADC0_CRCR3_CH6_POS                   _ADC_UL(6)
#define ADC0_CRCR3_CH6_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH7 (rwh) */
#define ADC0_CRCR3_CH7_POS                   _ADC_UL(7)
#define ADC0_CRCR3_CH7_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH8 (rwh) */
#define ADC0_CRCR3_CH8_POS                   _ADC_UL(8)
#define ADC0_CRCR3_CH8_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH9 (rwh) */
#define ADC0_CRCR3_CH9_POS                   _ADC_UL(9)
#define ADC0_CRCR3_CH9_LEN                   _ADC_UL(1)

/* ADC0_CRCR3_CH10 (rwh) */
#define ADC0_CRCR3_CH10_POS                  _ADC_UL(10)
#define ADC0_CRCR3_CH10_LEN                  _ADC_UL(1)

/* ADC0_CRCR3_CH11 (rwh) */
#define ADC0_CRCR3_CH11_POS                  _ADC_UL(11)
#define ADC0_CRCR3_CH11_LEN                  _ADC_UL(1)

/* ADC0_CRCR3_CH12 (rwh) */
#define ADC0_CRCR3_CH12_POS                  _ADC_UL(12)
#define ADC0_CRCR3_CH12_LEN                  _ADC_UL(1)

/* ADC0_CRCR3_CH13 (rwh) */
#define ADC0_CRCR3_CH13_POS                  _ADC_UL(13)
#define ADC0_CRCR3_CH13_LEN                  _ADC_UL(1)

/* ADC0_CRCR3_CH14 (rwh) */
#define ADC0_CRCR3_CH14_POS                  _ADC_UL(14)
#define ADC0_CRCR3_CH14_LEN                  _ADC_UL(1)

/* ADC0_CRCR3_CH15 (rwh) */
#define ADC0_CRCR3_CH15_POS                  _ADC_UL(15)
#define ADC0_CRCR3_CH15_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP0 (rwh) */
#define ADC0_CRPR3_CHP0_POS                  _ADC_UL(0)
#define ADC0_CRPR3_CHP0_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP1 (rwh) */
#define ADC0_CRPR3_CHP1_POS                  _ADC_UL(1)
#define ADC0_CRPR3_CHP1_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP2 (rwh) */
#define ADC0_CRPR3_CHP2_POS                  _ADC_UL(2)
#define ADC0_CRPR3_CHP2_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP3 (rwh) */
#define ADC0_CRPR3_CHP3_POS                  _ADC_UL(3)
#define ADC0_CRPR3_CHP3_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP4 (rwh) */
#define ADC0_CRPR3_CHP4_POS                  _ADC_UL(4)
#define ADC0_CRPR3_CHP4_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP5 (rwh) */
#define ADC0_CRPR3_CHP5_POS                  _ADC_UL(5)
#define ADC0_CRPR3_CHP5_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP6 (rwh) */
#define ADC0_CRPR3_CHP6_POS                  _ADC_UL(6)
#define ADC0_CRPR3_CHP6_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP7 (rwh) */
#define ADC0_CRPR3_CHP7_POS                  _ADC_UL(7)
#define ADC0_CRPR3_CHP7_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP8 (rwh) */
#define ADC0_CRPR3_CHP8_POS                  _ADC_UL(8)
#define ADC0_CRPR3_CHP8_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP9 (rwh) */
#define ADC0_CRPR3_CHP9_POS                  _ADC_UL(9)
#define ADC0_CRPR3_CHP9_LEN                  _ADC_UL(1)

/* ADC0_CRPR3_CHP10 (rwh) */
#define ADC0_CRPR3_CHP10_POS                 _ADC_UL(10)
#define ADC0_CRPR3_CHP10_LEN                 _ADC_UL(1)

/* ADC0_CRPR3_CHP11 (rwh) */
#define ADC0_CRPR3_CHP11_POS                 _ADC_UL(11)
#define ADC0_CRPR3_CHP11_LEN                 _ADC_UL(1)

/* ADC0_CRPR3_CHP12 (rwh) */
#define ADC0_CRPR3_CHP12_POS                 _ADC_UL(12)
#define ADC0_CRPR3_CHP12_LEN                 _ADC_UL(1)

/* ADC0_CRPR3_CHP13 (rwh) */
#define ADC0_CRPR3_CHP13_POS                 _ADC_UL(13)
#define ADC0_CRPR3_CHP13_LEN                 _ADC_UL(1)

/* ADC0_CRPR3_CHP14 (rwh) */
#define ADC0_CRPR3_CHP14_POS                 _ADC_UL(14)
#define ADC0_CRPR3_CHP14_LEN                 _ADC_UL(1)

/* ADC0_CRPR3_CHP15 (rwh) */
#define ADC0_CRPR3_CHP15_POS                 _ADC_UL(15)
#define ADC0_CRPR3_CHP15_LEN                 _ADC_UL(1)

/* ADC0_CRMR3_ENGT (rw) */
#define ADC0_CRMR3_ENGT_POS                  _ADC_UL(0)
#define ADC0_CRMR3_ENGT_LEN                  _ADC_UL(2)

/* ADC0_CRMR3_ENTR (rw) */
#define ADC0_CRMR3_ENTR_POS                  _ADC_UL(2)
#define ADC0_CRMR3_ENTR_LEN                  _ADC_UL(1)

/* ADC0_CRMR3_ENSI (rw) */
#define ADC0_CRMR3_ENSI_POS                  _ADC_UL(3)
#define ADC0_CRMR3_ENSI_LEN                  _ADC_UL(1)

/* ADC0_CRMR3_SCAN (rw) */
#define ADC0_CRMR3_SCAN_POS                  _ADC_UL(4)
#define ADC0_CRMR3_SCAN_LEN                  _ADC_UL(1)

/* ADC0_CRMR3_LDM (rw) */
#define ADC0_CRMR3_LDM_POS                   _ADC_UL(5)
#define ADC0_CRMR3_LDM_LEN                   _ADC_UL(1)

/* ADC0_CRMR3_REQGT (rh) */
#define ADC0_CRMR3_REQGT_POS                 _ADC_UL(7)
#define ADC0_CRMR3_REQGT_LEN                 _ADC_UL(1)

/* ADC0_CRMR3_CLRPND (w) */
#define ADC0_CRMR3_CLRPND_POS                _ADC_UL(8)
#define ADC0_CRMR3_CLRPND_LEN                _ADC_UL(1)

/* ADC0_CRMR3_LDEV (w) */
#define ADC0_CRMR3_LDEV_POS                  _ADC_UL(9)
#define ADC0_CRMR3_LDEV_LEN                  _ADC_UL(1)

/* ADC0_QMR4_ENGT (rw) */
#define ADC0_QMR4_ENGT_POS                   _ADC_UL(0)
#define ADC0_QMR4_ENGT_LEN                   _ADC_UL(2)

/* ADC0_QMR4_ENTR (rw) */
#define ADC0_QMR4_ENTR_POS                   _ADC_UL(2)
#define ADC0_QMR4_ENTR_LEN                   _ADC_UL(1)

/* ADC0_QMR4_CLRV (w) */
#define ADC0_QMR4_CLRV_POS                   _ADC_UL(8)
#define ADC0_QMR4_CLRV_LEN                   _ADC_UL(1)

/* ADC0_QMR4_TREV (w) */
#define ADC0_QMR4_TREV_POS                   _ADC_UL(9)
#define ADC0_QMR4_TREV_LEN                   _ADC_UL(1)

/* ADC0_QMR4_FLUSH (w) */
#define ADC0_QMR4_FLUSH_POS                  _ADC_UL(10)
#define ADC0_QMR4_FLUSH_LEN                  _ADC_UL(1)

/* ADC0_QMR4_CEV (w) */
#define ADC0_QMR4_CEV_POS                    _ADC_UL(11)
#define ADC0_QMR4_CEV_LEN                    _ADC_UL(1)

/* ADC0_QSR4_FILL (rh) */
#define ADC0_QSR4_FILL_POS                   _ADC_UL(0)
#define ADC0_QSR4_FILL_LEN                   _ADC_UL(4)

/* ADC0_QSR4_EMPTY (rh) */
#define ADC0_QSR4_EMPTY_POS                  _ADC_UL(5)
#define ADC0_QSR4_EMPTY_LEN                  _ADC_UL(1)

/* ADC0_QSR4_REQGT (rh) */
#define ADC0_QSR4_REQGT_POS                  _ADC_UL(7)
#define ADC0_QSR4_REQGT_LEN                  _ADC_UL(1)

/* ADC0_QSR4_EV (rh) */
#define ADC0_QSR4_EV_POS                     _ADC_UL(8)
#define ADC0_QSR4_EV_LEN                     _ADC_UL(1)

/* ADC0_Q0R4_REQCHNR (rh) */
#define ADC0_Q0R4_REQCHNR_POS                _ADC_UL(0)
#define ADC0_Q0R4_REQCHNR_LEN                _ADC_UL(4)

/* ADC0_Q0R4_RF (rh) */
#define ADC0_Q0R4_RF_POS                     _ADC_UL(5)
#define ADC0_Q0R4_RF_LEN                     _ADC_UL(1)

/* ADC0_Q0R4_ENSI (rh) */
#define ADC0_Q0R4_ENSI_POS                   _ADC_UL(6)
#define ADC0_Q0R4_ENSI_LEN                   _ADC_UL(1)

/* ADC0_Q0R4_EXTR (rh) */
#define ADC0_Q0R4_EXTR_POS                   _ADC_UL(7)
#define ADC0_Q0R4_EXTR_LEN                   _ADC_UL(1)

/* ADC0_Q0R4_V (rh) */
#define ADC0_Q0R4_V_POS                      _ADC_UL(8)
#define ADC0_Q0R4_V_LEN                      _ADC_UL(1)

/* ADC0_QBUR4_REQCHNR (rh) */
#define ADC0_QBUR4_REQCHNR_POS               _ADC_UL(0)
#define ADC0_QBUR4_REQCHNR_LEN               _ADC_UL(4)

/* ADC0_QBUR4_RF (rh) */
#define ADC0_QBUR4_RF_POS                    _ADC_UL(5)
#define ADC0_QBUR4_RF_LEN                    _ADC_UL(1)

/* ADC0_QBUR4_ENSI (rh) */
#define ADC0_QBUR4_ENSI_POS                  _ADC_UL(6)
#define ADC0_QBUR4_ENSI_LEN                  _ADC_UL(1)

/* ADC0_QBUR4_EXTR (rh) */
#define ADC0_QBUR4_EXTR_POS                  _ADC_UL(7)
#define ADC0_QBUR4_EXTR_LEN                  _ADC_UL(1)

/* ADC0_QBUR4_V (rh) */
#define ADC0_QBUR4_V_POS                     _ADC_UL(8)
#define ADC0_QBUR4_V_LEN                     _ADC_UL(1)

/* ADC0_QINR4_REQCHNR (w) */
#define ADC0_QINR4_REQCHNR_POS               _ADC_UL(0)
#define ADC0_QINR4_REQCHNR_LEN               _ADC_UL(4)

/* ADC0_QINR4_RF (w) */
#define ADC0_QINR4_RF_POS                    _ADC_UL(5)
#define ADC0_QINR4_RF_LEN                    _ADC_UL(1)

/* ADC0_QINR4_ENSI (w) */
#define ADC0_QINR4_ENSI_POS                  _ADC_UL(6)
#define ADC0_QINR4_ENSI_LEN                  _ADC_UL(1)

/* ADC0_QINR4_EXTR (w) */
#define ADC0_QINR4_EXTR_POS                  _ADC_UL(7)
#define ADC0_QINR4_EXTR_LEN                  _ADC_UL(1)

/* ADC0_LCBR_BOUNDARY (rw) */
#define ADC0_LCBR_BOUNDARY_POS               _ADC_UL(2)
#define ADC0_LCBR_BOUNDARY_LEN               _ADC_UL(10)

/* ADC0_CHCTR_BNDASEL (rw) */
#define ADC0_CHCTR_BNDASEL_POS               _ADC_UL(0)
#define ADC0_CHCTR_BNDASEL_LEN               _ADC_UL(2)

/* ADC0_CHCTR_BNDBSEL (rw) */
#define ADC0_CHCTR_BNDBSEL_POS               _ADC_UL(2)
#define ADC0_CHCTR_BNDBSEL_LEN               _ADC_UL(2)

/* ADC0_CHCTR_LCC (rw) */
#define ADC0_CHCTR_LCC_POS                   _ADC_UL(4)
#define ADC0_CHCTR_LCC_LEN                   _ADC_UL(3)

/* ADC0_CHCTR_SYNC (rw) */
#define ADC0_CHCTR_SYNC_POS                  _ADC_UL(7)
#define ADC0_CHCTR_SYNC_LEN                  _ADC_UL(1)

/* ADC0_CHCTR_REFSEL (rw) */
#define ADC0_CHCTR_REFSEL_POS                _ADC_UL(8)
#define ADC0_CHCTR_REFSEL_LEN                _ADC_UL(2)

/* ADC0_CHCTR_ICLSEL (rw) */
#define ADC0_CHCTR_ICLSEL_POS                _ADC_UL(10)
#define ADC0_CHCTR_ICLSEL_LEN                _ADC_UL(2)

/* ADC0_CHCTR_RESRSEL (rw) */
#define ADC0_CHCTR_RESRSEL_POS               _ADC_UL(12)
#define ADC0_CHCTR_RESRSEL_LEN               _ADC_UL(4)

/* ADC0_RCR_DRCTR (rw) */
#define ADC0_RCR_DRCTR_POS                   _ADC_UL(0)
#define ADC0_RCR_DRCTR_LEN                   _ADC_UL(2)

/* ADC0_RCR_ENRI (rw) */
#define ADC0_RCR_ENRI_POS                    _ADC_UL(4)
#define ADC0_RCR_ENRI_LEN                    _ADC_UL(1)

/* ADC0_RCR_FEN (rw) */
#define ADC0_RCR_FEN_POS                     _ADC_UL(5)
#define ADC0_RCR_FEN_LEN                     _ADC_UL(1)

/* ADC0_RCR_WFR (rw) */
#define ADC0_RCR_WFR_POS                     _ADC_UL(6)
#define ADC0_RCR_WFR_LEN                     _ADC_UL(1)

/* ADC0_RESR_RESULT (rh) */
#define ADC0_RESR_RESULT_POS                 _ADC_UL(0)
#define ADC0_RESR_RESULT_LEN                 _ADC_UL(14)

/* ADC0_RESR_EMUX (rh) */
#define ADC0_RESR_EMUX_POS                   _ADC_UL(16)
#define ADC0_RESR_EMUX_LEN                   _ADC_UL(3)

/* ADC0_RESR_CRS (rh) */
#define ADC0_RESR_CRS_POS                    _ADC_UL(20)
#define ADC0_RESR_CRS_LEN                    _ADC_UL(3)

/* ADC0_RESR_CHNR (rh) */
#define ADC0_RESR_CHNR_POS                   _ADC_UL(24)
#define ADC0_RESR_CHNR_LEN                   _ADC_UL(4)

/* ADC0_RESR_DRC (rh) */
#define ADC0_RESR_DRC_POS                    _ADC_UL(29)
#define ADC0_RESR_DRC_LEN                    _ADC_UL(2)

/* ADC0_RESR_VF (rh) */
#define ADC0_RESR_VF_POS                     _ADC_UL(31)
#define ADC0_RESR_VF_LEN                     _ADC_UL(1)

/* ADC0_RESRD_RESULT (rh) */
#define ADC0_RESRD_RESULT_POS                _ADC_UL(0)
#define ADC0_RESRD_RESULT_LEN                _ADC_UL(14)

/* ADC0_RESRD_EMUX (rh) */
#define ADC0_RESRD_EMUX_POS                  _ADC_UL(16)
#define ADC0_RESRD_EMUX_LEN                  _ADC_UL(3)

/* ADC0_RESRD_CRS (rh) */
#define ADC0_RESRD_CRS_POS                   _ADC_UL(20)
#define ADC0_RESRD_CRS_LEN                   _ADC_UL(3)

/* ADC0_RESRD_CHNR (rh) */
#define ADC0_RESRD_CHNR_POS                  _ADC_UL(24)
#define ADC0_RESRD_CHNR_LEN                  _ADC_UL(4)

/* ADC0_RESRD_DRC (rh) */
#define ADC0_RESRD_DRC_POS                   _ADC_UL(29)
#define ADC0_RESRD_DRC_LEN                   _ADC_UL(2)

/* ADC0_RESRD_VF (rh) */
#define ADC0_RESRD_VF_POS                    _ADC_UL(31)
#define ADC0_RESRD_VF_LEN                    _ADC_UL(1)

/* ADC0_VFR_VF0 (rwh) */
#define ADC0_VFR_VF0_POS                     _ADC_UL(0)
#define ADC0_VFR_VF0_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF1 (rwh) */
#define ADC0_VFR_VF1_POS                     _ADC_UL(1)
#define ADC0_VFR_VF1_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF2 (rwh) */
#define ADC0_VFR_VF2_POS                     _ADC_UL(2)
#define ADC0_VFR_VF2_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF3 (rwh) */
#define ADC0_VFR_VF3_POS                     _ADC_UL(3)
#define ADC0_VFR_VF3_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF4 (rwh) */
#define ADC0_VFR_VF4_POS                     _ADC_UL(4)
#define ADC0_VFR_VF4_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF5 (rwh) */
#define ADC0_VFR_VF5_POS                     _ADC_UL(5)
#define ADC0_VFR_VF5_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF6 (rwh) */
#define ADC0_VFR_VF6_POS                     _ADC_UL(6)
#define ADC0_VFR_VF6_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF7 (rwh) */
#define ADC0_VFR_VF7_POS                     _ADC_UL(7)
#define ADC0_VFR_VF7_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF8 (rwh) */
#define ADC0_VFR_VF8_POS                     _ADC_UL(8)
#define ADC0_VFR_VF8_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF9 (rwh) */
#define ADC0_VFR_VF9_POS                     _ADC_UL(9)
#define ADC0_VFR_VF9_LEN                     _ADC_UL(1)

/* ADC0_VFR_VF10 (rwh) */
#define ADC0_VFR_VF10_POS                    _ADC_UL(10)
#define ADC0_VFR_VF10_LEN                    _ADC_UL(1)

/* ADC0_VFR_VF11 (rwh) */
#define ADC0_VFR_VF11_POS                    _ADC_UL(11)
#define ADC0_VFR_VF11_LEN                    _ADC_UL(1)

/* ADC0_VFR_VF12 (rwh) */
#define ADC0_VFR_VF12_POS                    _ADC_UL(12)
#define ADC0_VFR_VF12_LEN                    _ADC_UL(1)

/* ADC0_VFR_VF13 (rwh) */
#define ADC0_VFR_VF13_POS                    _ADC_UL(13)
#define ADC0_VFR_VF13_LEN                    _ADC_UL(1)

/* ADC0_VFR_VF14 (rwh) */
#define ADC0_VFR_VF14_POS                    _ADC_UL(14)
#define ADC0_VFR_VF14_LEN                    _ADC_UL(1)

/* ADC0_VFR_VF15 (rwh) */
#define ADC0_VFR_VF15_POS                    _ADC_UL(15)
#define ADC0_VFR_VF15_LEN                    _ADC_UL(1)

/* ADC0_INTR_SISR0 (w) */
#define ADC0_INTR_SISR0_POS                  _ADC_UL(0)
#define ADC0_INTR_SISR0_LEN                  _ADC_UL(1)

/* ADC0_INTR_SISR1 (w) */
#define ADC0_INTR_SISR1_POS                  _ADC_UL(1)
#define ADC0_INTR_SISR1_LEN                  _ADC_UL(1)

/* ADC0_INTR_SISR2 (w) */
#define ADC0_INTR_SISR2_POS                  _ADC_UL(2)
#define ADC0_INTR_SISR2_LEN                  _ADC_UL(1)

/* ADC0_INTR_SISR3 (w) */
#define ADC0_INTR_SISR3_POS                  _ADC_UL(3)
#define ADC0_INTR_SISR3_LEN                  _ADC_UL(1)

/* ADC0_INTR_SISR4 (w) */
#define ADC0_INTR_SISR4_POS                  _ADC_UL(4)
#define ADC0_INTR_SISR4_LEN                  _ADC_UL(1)

/* ADC0_INTR_SISR5 (w) */
#define ADC0_INTR_SISR5_POS                  _ADC_UL(5)
#define ADC0_INTR_SISR5_LEN                  _ADC_UL(1)

/* ADC0_INTR_SISR6 (w) */
#define ADC0_INTR_SISR6_POS                  _ADC_UL(6)
#define ADC0_INTR_SISR6_LEN                  _ADC_UL(1)

/* ADC0_INTR_SISR7 (w) */
#define ADC0_INTR_SISR7_POS                  _ADC_UL(7)
#define ADC0_INTR_SISR7_LEN                  _ADC_UL(1)

/* ADC0_RNPR0_RENP0 (rw) */
#define ADC0_RNPR0_RENP0_POS                 _ADC_UL(0)
#define ADC0_RNPR0_RENP0_LEN                 _ADC_UL(3)

/* ADC0_RNPR0_RENP1 (rw) */
#define ADC0_RNPR0_RENP1_POS                 _ADC_UL(4)
#define ADC0_RNPR0_RENP1_LEN                 _ADC_UL(3)

/* ADC0_RNPR0_RENP2 (rw) */
#define ADC0_RNPR0_RENP2_POS                 _ADC_UL(8)
#define ADC0_RNPR0_RENP2_LEN                 _ADC_UL(3)

/* ADC0_RNPR0_RENP3 (rw) */
#define ADC0_RNPR0_RENP3_POS                 _ADC_UL(12)
#define ADC0_RNPR0_RENP3_LEN                 _ADC_UL(3)

/* ADC0_RNPR0_RENP4 (rw) */
#define ADC0_RNPR0_RENP4_POS                 _ADC_UL(16)
#define ADC0_RNPR0_RENP4_LEN                 _ADC_UL(3)

/* ADC0_RNPR0_RENP5 (rw) */
#define ADC0_RNPR0_RENP5_POS                 _ADC_UL(20)
#define ADC0_RNPR0_RENP5_LEN                 _ADC_UL(3)

/* ADC0_RNPR0_RENP6 (rw) */
#define ADC0_RNPR0_RENP6_POS                 _ADC_UL(24)
#define ADC0_RNPR0_RENP6_LEN                 _ADC_UL(3)

/* ADC0_RNPR0_RENP7 (rw) */
#define ADC0_RNPR0_RENP7_POS                 _ADC_UL(28)
#define ADC0_RNPR0_RENP7_LEN                 _ADC_UL(3)

/* ADC0_RNPR8_RENP8 (rw) */
#define ADC0_RNPR8_RENP8_POS                 _ADC_UL(0)
#define ADC0_RNPR8_RENP8_LEN                 _ADC_UL(3)

/* ADC0_RNPR8_RENP9 (rw) */
#define ADC0_RNPR8_RENP9_POS                 _ADC_UL(4)
#define ADC0_RNPR8_RENP9_LEN                 _ADC_UL(3)

/* ADC0_RNPR8_RENP10 (rw) */
#define ADC0_RNPR8_RENP10_POS                _ADC_UL(8)
#define ADC0_RNPR8_RENP10_LEN                _ADC_UL(3)

/* ADC0_RNPR8_RENP11 (rw) */
#define ADC0_RNPR8_RENP11_POS                _ADC_UL(12)
#define ADC0_RNPR8_RENP11_LEN                _ADC_UL(3)

/* ADC0_RNPR8_RENP12 (rw) */
#define ADC0_RNPR8_RENP12_POS                _ADC_UL(16)
#define ADC0_RNPR8_RENP12_LEN                _ADC_UL(3)

/* ADC0_RNPR8_RENP13 (rw) */
#define ADC0_RNPR8_RENP13_POS                _ADC_UL(20)
#define ADC0_RNPR8_RENP13_LEN                _ADC_UL(3)

/* ADC0_RNPR8_RENP14 (rw) */
#define ADC0_RNPR8_RENP14_POS                _ADC_UL(24)
#define ADC0_RNPR8_RENP14_LEN                _ADC_UL(3)

/* ADC0_RNPR8_RENP15 (rw) */
#define ADC0_RNPR8_RENP15_POS                _ADC_UL(28)
#define ADC0_RNPR8_RENP15_LEN                _ADC_UL(3)

/* ADC0_ALR0_ALIAS0 (rw) */
#define ADC0_ALR0_ALIAS0_POS                 _ADC_UL(0)
#define ADC0_ALR0_ALIAS0_LEN                 _ADC_UL(4)

/* ADC0_ALR0_ALIAS1 (rw) */
#define ADC0_ALR0_ALIAS1_POS                 _ADC_UL(8)
#define ADC0_ALR0_ALIAS1_LEN                 _ADC_UL(4)

/* ADC0_APR_RG0 (rw) */
#define ADC0_APR_RG0_POS                     _ADC_UL(0)
#define ADC0_APR_RG0_LEN                     _ADC_UL(1)

/* ADC0_APR_RG1 (rw) */
#define ADC0_APR_RG1_POS                     _ADC_UL(1)
#define ADC0_APR_RG1_LEN                     _ADC_UL(1)

/* ADC0_APR_RG2 (rw) */
#define ADC0_APR_RG2_POS                     _ADC_UL(2)
#define ADC0_APR_RG2_LEN                     _ADC_UL(1)

/* ADC0_APR_RG3 (rw) */
#define ADC0_APR_RG3_POS                     _ADC_UL(3)
#define ADC0_APR_RG3_LEN                     _ADC_UL(1)

/* ADC0_APR_RG4 (rw) */
#define ADC0_APR_RG4_POS                     _ADC_UL(4)
#define ADC0_APR_RG4_LEN                     _ADC_UL(1)

/* ADC0_APR_RG5 (rw) */
#define ADC0_APR_RG5_POS                     _ADC_UL(5)
#define ADC0_APR_RG5_LEN                     _ADC_UL(1)

/* ADC0_APR_ACCERR (rwh) */
#define ADC0_APR_ACCERR_POS                  _ADC_UL(15)
#define ADC0_APR_ACCERR_LEN                  _ADC_UL(1)

/* ADC0_EMCTR_SETEMUX (rw) */
#define ADC0_EMCTR_SETEMUX_POS               _ADC_UL(0)
#define ADC0_EMCTR_SETEMUX_LEN               _ADC_UL(3)

/* ADC0_EMCTR_EMUX (rh) */
#define ADC0_EMCTR_EMUX_POS                  _ADC_UL(4)
#define ADC0_EMCTR_EMUX_LEN                  _ADC_UL(3)

/* ADC0_EMCTR_EMSAMPLE (rw) */
#define ADC0_EMCTR_EMSAMPLE_POS              _ADC_UL(8)
#define ADC0_EMCTR_EMSAMPLE_LEN              _ADC_UL(8)

/* ADC0_EMCTR_EMUXCHNR (rw) */
#define ADC0_EMCTR_EMUXCHNR_POS              _ADC_UL(16)
#define ADC0_EMCTR_EMUXCHNR_LEN              _ADC_UL(4)

/* ADC0_EMCTR_TROEN (rw) */
#define ADC0_EMCTR_TROEN_POS                 _ADC_UL(21)
#define ADC0_EMCTR_TROEN_LEN                 _ADC_UL(1)

/* ADC0_EMCTR_SCANEN (rw) */
#define ADC0_EMCTR_SCANEN_POS                _ADC_UL(22)
#define ADC0_EMCTR_SCANEN_LEN                _ADC_UL(1)

/* ADC0_EMCTR_EMUXEN (rw) */
#define ADC0_EMCTR_EMUXEN_POS                _ADC_UL(23)
#define ADC0_EMCTR_EMUXEN_LEN                _ADC_UL(1)

/* ADC0_SRC8_SRPN (rw) */
#define ADC0_SRC8_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC8_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC8_TOS (rw) */
#define ADC0_SRC8_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC8_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC8_SRE (rw) */
#define ADC0_SRC8_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC8_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC8_SRR (rh) */
#define ADC0_SRC8_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC8_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC8_CLRR (w) */
#define ADC0_SRC8_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC8_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC8_SETR (w) */
#define ADC0_SRC8_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC8_SETR_LEN                   _ADC_UL(1)

/* ADC0_SRC7_SRPN (rw) */
#define ADC0_SRC7_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC7_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC7_TOS (rw) */
#define ADC0_SRC7_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC7_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC7_SRE (rw) */
#define ADC0_SRC7_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC7_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC7_SRR (rh) */
#define ADC0_SRC7_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC7_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC7_CLRR (w) */
#define ADC0_SRC7_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC7_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC7_SETR (w) */
#define ADC0_SRC7_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC7_SETR_LEN                   _ADC_UL(1)

/* ADC0_SRC6_SRPN (rw) */
#define ADC0_SRC6_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC6_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC6_TOS (rw) */
#define ADC0_SRC6_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC6_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC6_SRE (rw) */
#define ADC0_SRC6_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC6_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC6_SRR (rh) */
#define ADC0_SRC6_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC6_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC6_CLRR (w) */
#define ADC0_SRC6_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC6_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC6_SETR (w) */
#define ADC0_SRC6_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC6_SETR_LEN                   _ADC_UL(1)

/* ADC0_SRC5_SRPN (rw) */
#define ADC0_SRC5_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC5_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC5_TOS (rw) */
#define ADC0_SRC5_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC5_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC5_SRE (rw) */
#define ADC0_SRC5_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC5_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC5_SRR (rh) */
#define ADC0_SRC5_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC5_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC5_CLRR (w) */
#define ADC0_SRC5_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC5_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC5_SETR (w) */
#define ADC0_SRC5_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC5_SETR_LEN                   _ADC_UL(1)

/* ADC0_SRC4_SRPN (rw) */
#define ADC0_SRC4_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC4_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC4_TOS (rw) */
#define ADC0_SRC4_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC4_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC4_SRE (rw) */
#define ADC0_SRC4_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC4_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC4_SRR (rh) */
#define ADC0_SRC4_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC4_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC4_CLRR (w) */
#define ADC0_SRC4_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC4_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC4_SETR (w) */
#define ADC0_SRC4_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC4_SETR_LEN                   _ADC_UL(1)

/* ADC0_SRC3_SRPN (rw) */
#define ADC0_SRC3_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC3_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC3_TOS (rw) */
#define ADC0_SRC3_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC3_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC3_SRE (rw) */
#define ADC0_SRC3_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC3_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC3_SRR (rh) */
#define ADC0_SRC3_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC3_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC3_CLRR (w) */
#define ADC0_SRC3_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC3_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC3_SETR (w) */
#define ADC0_SRC3_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC3_SETR_LEN                   _ADC_UL(1)

/* ADC0_SRC2_SRPN (rw) */
#define ADC0_SRC2_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC2_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC2_TOS (rw) */
#define ADC0_SRC2_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC2_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC2_SRE (rw) */
#define ADC0_SRC2_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC2_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC2_SRR (rh) */
#define ADC0_SRC2_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC2_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC2_CLRR (w) */
#define ADC0_SRC2_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC2_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC2_SETR (w) */
#define ADC0_SRC2_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC2_SETR_LEN                   _ADC_UL(1)

/* ADC0_SRC1_SRPN (rw) */
#define ADC0_SRC1_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC1_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC1_TOS (rw) */
#define ADC0_SRC1_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC1_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC1_SRE (rw) */
#define ADC0_SRC1_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC1_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC1_SRR (rh) */
#define ADC0_SRC1_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC1_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC1_CLRR (w) */
#define ADC0_SRC1_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC1_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC1_SETR (w) */
#define ADC0_SRC1_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC1_SETR_LEN                   _ADC_UL(1)

/* ADC0_SRC0_SRPN (rw) */
#define ADC0_SRC0_SRPN_POS                   _ADC_UL(0)
#define ADC0_SRC0_SRPN_LEN                   _ADC_UL(8)

/* ADC0_SRC0_TOS (rw) */
#define ADC0_SRC0_TOS_POS                    _ADC_UL(10)
#define ADC0_SRC0_TOS_LEN                    _ADC_UL(1)

/* ADC0_SRC0_SRE (rw) */
#define ADC0_SRC0_SRE_POS                    _ADC_UL(12)
#define ADC0_SRC0_SRE_LEN                    _ADC_UL(1)

/* ADC0_SRC0_SRR (rh) */
#define ADC0_SRC0_SRR_POS                    _ADC_UL(13)
#define ADC0_SRC0_SRR_LEN                    _ADC_UL(1)

/* ADC0_SRC0_CLRR (w) */
#define ADC0_SRC0_CLRR_POS                   _ADC_UL(14)
#define ADC0_SRC0_CLRR_LEN                   _ADC_UL(1)

/* ADC0_SRC0_SETR (w) */
#define ADC0_SRC0_SETR_POS                   _ADC_UL(15)
#define ADC0_SRC0_SETR_LEN                   _ADC_UL(1)

/* ADC1_RSIR_GTSEL (rw) */
#define ADC1_RSIR_GTSEL_POS                  _ADC_UL(0)
#define ADC1_RSIR_GTSEL_LEN                  _ADC_UL(3)

/* ADC1_RSIR_TMEN (rw) */
#define ADC1_RSIR_TMEN_POS                   _ADC_UL(4)
#define ADC1_RSIR_TMEN_LEN                   _ADC_UL(1)

/* ADC1_RSIR_GTI (rh) */
#define ADC1_RSIR_GTI_POS                    _ADC_UL(7)
#define ADC1_RSIR_GTI_LEN                    _ADC_UL(1)

/* ADC1_RSIR_TRSEL (rw) */
#define ADC1_RSIR_TRSEL_POS                  _ADC_UL(8)
#define ADC1_RSIR_TRSEL_LEN                  _ADC_UL(3)

/* ADC1_RSIR_FEN (rw) */
#define ADC1_RSIR_FEN_POS                    _ADC_UL(12)
#define ADC1_RSIR_FEN_LEN                    _ADC_UL(1)

/* ADC1_RSIR_REN (rw) */
#define ADC1_RSIR_REN_POS                    _ADC_UL(13)
#define ADC1_RSIR_REN_LEN                    _ADC_UL(1)

/* ADC1_RSIR_TRI (rh) */
#define ADC1_RSIR_TRI_POS                    _ADC_UL(15)
#define ADC1_RSIR_TRI_LEN                    _ADC_UL(1)

/* ADC1_GLOBCTR_DIVA (rw) */
#define ADC1_GLOBCTR_DIVA_POS                _ADC_UL(0)
#define ADC1_GLOBCTR_DIVA_LEN                _ADC_UL(6)

/* ADC1_GLOBCTR_DIVD (rw) */
#define ADC1_GLOBCTR_DIVD_POS                _ADC_UL(6)
#define ADC1_GLOBCTR_DIVD_LEN                _ADC_UL(2)

/* ADC1_GLOBCTR_ANON (rw) */
#define ADC1_GLOBCTR_ANON_POS                _ADC_UL(8)
#define ADC1_GLOBCTR_ANON_LEN                _ADC_UL(2)

/* ADC1_GLOBCTR_ARBRND (rw) */
#define ADC1_GLOBCTR_ARBRND_POS              _ADC_UL(10)
#define ADC1_GLOBCTR_ARBRND_LEN              _ADC_UL(2)

/* ADC1_GLOBCTR_ARBM (rw) */
#define ADC1_GLOBCTR_ARBM_POS                _ADC_UL(15)
#define ADC1_GLOBCTR_ARBM_LEN                _ADC_UL(1)

/* ADC1_GLOBCFG_MTM7 (rw) */
#define ADC1_GLOBCFG_MTM7_POS                _ADC_UL(4)
#define ADC1_GLOBCFG_MTM7_LEN                _ADC_UL(1)

/* ADC1_GLOBCFG_SUCAL (rw) */
#define ADC1_GLOBCFG_SUCAL_POS               _ADC_UL(5)
#define ADC1_GLOBCFG_SUCAL_LEN               _ADC_UL(1)

/* ADC1_GLOBCFG_DPCAL (rw) */
#define ADC1_GLOBCFG_DPCAL_POS               _ADC_UL(6)
#define ADC1_GLOBCFG_DPCAL_LEN               _ADC_UL(1)

/* ADC1_GLOBSTR_BUSY (rh) */
#define ADC1_GLOBSTR_BUSY_POS                _ADC_UL(0)
#define ADC1_GLOBSTR_BUSY_LEN                _ADC_UL(1)

/* ADC1_GLOBSTR_SAMPLE (rh) */
#define ADC1_GLOBSTR_SAMPLE_POS              _ADC_UL(1)
#define ADC1_GLOBSTR_SAMPLE_LEN              _ADC_UL(1)

/* ADC1_GLOBSTR_CAL (rh) */
#define ADC1_GLOBSTR_CAL_POS                 _ADC_UL(2)
#define ADC1_GLOBSTR_CAL_LEN                 _ADC_UL(1)

/* ADC1_GLOBSTR_CHNR (rh) */
#define ADC1_GLOBSTR_CHNR_POS                _ADC_UL(3)
#define ADC1_GLOBSTR_CHNR_LEN                _ADC_UL(4)

/* ADC1_GLOBSTR_ANON (rh) */
#define ADC1_GLOBSTR_ANON_POS                _ADC_UL(8)
#define ADC1_GLOBSTR_ANON_LEN                _ADC_UL(2)

/* ADC1_GLOBSTR_SYNRUN (rh) */
#define ADC1_GLOBSTR_SYNRUN_POS              _ADC_UL(10)
#define ADC1_GLOBSTR_SYNRUN_LEN              _ADC_UL(1)

/* ADC1_GLOBSTR_CSRC (rh) */
#define ADC1_GLOBSTR_CSRC_POS                _ADC_UL(11)
#define ADC1_GLOBSTR_CSRC_LEN                _ADC_UL(3)

/* ADC1_ASENR_ASEN0 (rw) */
#define ADC1_ASENR_ASEN0_POS                 _ADC_UL(0)
#define ADC1_ASENR_ASEN0_LEN                 _ADC_UL(1)

/* ADC1_ASENR_ASEN1 (rw) */
#define ADC1_ASENR_ASEN1_POS                 _ADC_UL(1)
#define ADC1_ASENR_ASEN1_LEN                 _ADC_UL(1)

/* ADC1_ASENR_ASEN2 (rw) */
#define ADC1_ASENR_ASEN2_POS                 _ADC_UL(2)
#define ADC1_ASENR_ASEN2_LEN                 _ADC_UL(1)

/* ADC1_ASENR_ASEN3 (rw) */
#define ADC1_ASENR_ASEN3_POS                 _ADC_UL(3)
#define ADC1_ASENR_ASEN3_LEN                 _ADC_UL(1)

/* ADC1_ASENR_ASEN4 (rw) */
#define ADC1_ASENR_ASEN4_POS                 _ADC_UL(4)
#define ADC1_ASENR_ASEN4_LEN                 _ADC_UL(1)

/* ADC1_RSPR0_PRIO0 (rw) */
#define ADC1_RSPR0_PRIO0_POS                 _ADC_UL(0)
#define ADC1_RSPR0_PRIO0_LEN                 _ADC_UL(2)

/* ADC1_RSPR0_PRIO1 (rw) */
#define ADC1_RSPR0_PRIO1_POS                 _ADC_UL(4)
#define ADC1_RSPR0_PRIO1_LEN                 _ADC_UL(2)

/* ADC1_RSPR0_PRIO2 (rw) */
#define ADC1_RSPR0_PRIO2_POS                 _ADC_UL(8)
#define ADC1_RSPR0_PRIO2_LEN                 _ADC_UL(2)

/* ADC1_RSPR0_PRIO3 (rw) */
#define ADC1_RSPR0_PRIO3_POS                 _ADC_UL(12)
#define ADC1_RSPR0_PRIO3_LEN                 _ADC_UL(2)

/* ADC1_RSPR0_CSM0 (rw) */
#define ADC1_RSPR0_CSM0_POS                  _ADC_UL(3)
#define ADC1_RSPR0_CSM0_LEN                  _ADC_UL(1)

/* ADC1_RSPR0_CSM1 (rw) */
#define ADC1_RSPR0_CSM1_POS                  _ADC_UL(7)
#define ADC1_RSPR0_CSM1_LEN                  _ADC_UL(1)

/* ADC1_RSPR0_CSM2 (rw) */
#define ADC1_RSPR0_CSM2_POS                  _ADC_UL(11)
#define ADC1_RSPR0_CSM2_LEN                  _ADC_UL(1)

/* ADC1_RSPR0_CSM3 (rw) */
#define ADC1_RSPR0_CSM3_POS                  _ADC_UL(15)
#define ADC1_RSPR0_CSM3_LEN                  _ADC_UL(1)

/* ADC1_RSPR4_PRIO4 (rw) */
#define ADC1_RSPR4_PRIO4_POS                 _ADC_UL(0)
#define ADC1_RSPR4_PRIO4_LEN                 _ADC_UL(2)

/* ADC1_RSPR4_CSM4 (rw) */
#define ADC1_RSPR4_CSM4_POS                  _ADC_UL(3)
#define ADC1_RSPR4_CSM4_LEN                  _ADC_UL(1)

/* ADC1_SYNCTR_STSEL (rw) */
#define ADC1_SYNCTR_STSEL_POS                _ADC_UL(0)
#define ADC1_SYNCTR_STSEL_LEN                _ADC_UL(2)

/* ADC1_SYNCTR_EVALR1 (rw) */
#define ADC1_SYNCTR_EVALR1_POS               _ADC_UL(4)
#define ADC1_SYNCTR_EVALR1_LEN               _ADC_UL(1)

/* ADC1_SYNCTR_EVALR2 (rw) */
#define ADC1_SYNCTR_EVALR2_POS               _ADC_UL(5)
#define ADC1_SYNCTR_EVALR2_LEN               _ADC_UL(1)

/* ADC1_SYNCTR_EVALR3 (rw) */
#define ADC1_SYNCTR_EVALR3_POS               _ADC_UL(6)
#define ADC1_SYNCTR_EVALR3_LEN               _ADC_UL(1)

/* ADC1_INPCR_STC (rw) */
#define ADC1_INPCR_STC_POS                   _ADC_UL(0)
#define ADC1_INPCR_STC_LEN                   _ADC_UL(8)

/* ADC1_INPCR_DW (rw) */
#define ADC1_INPCR_DW_POS                    _ADC_UL(8)
#define ADC1_INPCR_DW_LEN                    _ADC_UL(2)

/* ADC1_CHFR_FC0 (rwh) */
#define ADC1_CHFR_FC0_POS                    _ADC_UL(0)
#define ADC1_CHFR_FC0_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC1 (rwh) */
#define ADC1_CHFR_FC1_POS                    _ADC_UL(1)
#define ADC1_CHFR_FC1_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC2 (rwh) */
#define ADC1_CHFR_FC2_POS                    _ADC_UL(2)
#define ADC1_CHFR_FC2_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC3 (rwh) */
#define ADC1_CHFR_FC3_POS                    _ADC_UL(3)
#define ADC1_CHFR_FC3_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC4 (rwh) */
#define ADC1_CHFR_FC4_POS                    _ADC_UL(4)
#define ADC1_CHFR_FC4_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC5 (rwh) */
#define ADC1_CHFR_FC5_POS                    _ADC_UL(5)
#define ADC1_CHFR_FC5_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC6 (rwh) */
#define ADC1_CHFR_FC6_POS                    _ADC_UL(6)
#define ADC1_CHFR_FC6_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC7 (rwh) */
#define ADC1_CHFR_FC7_POS                    _ADC_UL(7)
#define ADC1_CHFR_FC7_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC8 (rwh) */
#define ADC1_CHFR_FC8_POS                    _ADC_UL(8)
#define ADC1_CHFR_FC8_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC9 (rwh) */
#define ADC1_CHFR_FC9_POS                    _ADC_UL(9)
#define ADC1_CHFR_FC9_LEN                    _ADC_UL(1)

/* ADC1_CHFR_FC10 (rwh) */
#define ADC1_CHFR_FC10_POS                   _ADC_UL(10)
#define ADC1_CHFR_FC10_LEN                   _ADC_UL(1)

/* ADC1_CHFR_FC11 (rwh) */
#define ADC1_CHFR_FC11_POS                   _ADC_UL(11)
#define ADC1_CHFR_FC11_LEN                   _ADC_UL(1)

/* ADC1_CHFR_FC12 (rwh) */
#define ADC1_CHFR_FC12_POS                   _ADC_UL(12)
#define ADC1_CHFR_FC12_LEN                   _ADC_UL(1)

/* ADC1_CHFR_FC13 (rwh) */
#define ADC1_CHFR_FC13_POS                   _ADC_UL(13)
#define ADC1_CHFR_FC13_LEN                   _ADC_UL(1)

/* ADC1_CHFR_FC14 (rwh) */
#define ADC1_CHFR_FC14_POS                   _ADC_UL(14)
#define ADC1_CHFR_FC14_LEN                   _ADC_UL(1)

/* ADC1_CHFR_FC15 (rwh) */
#define ADC1_CHFR_FC15_POS                   _ADC_UL(15)
#define ADC1_CHFR_FC15_LEN                   _ADC_UL(1)

/* ADC1_CHFCR_CFC0 (w) */
#define ADC1_CHFCR_CFC0_POS                  _ADC_UL(0)
#define ADC1_CHFCR_CFC0_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC1 (w) */
#define ADC1_CHFCR_CFC1_POS                  _ADC_UL(1)
#define ADC1_CHFCR_CFC1_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC2 (w) */
#define ADC1_CHFCR_CFC2_POS                  _ADC_UL(2)
#define ADC1_CHFCR_CFC2_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC3 (w) */
#define ADC1_CHFCR_CFC3_POS                  _ADC_UL(3)
#define ADC1_CHFCR_CFC3_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC4 (w) */
#define ADC1_CHFCR_CFC4_POS                  _ADC_UL(4)
#define ADC1_CHFCR_CFC4_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC5 (w) */
#define ADC1_CHFCR_CFC5_POS                  _ADC_UL(5)
#define ADC1_CHFCR_CFC5_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC6 (w) */
#define ADC1_CHFCR_CFC6_POS                  _ADC_UL(6)
#define ADC1_CHFCR_CFC6_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC7 (w) */
#define ADC1_CHFCR_CFC7_POS                  _ADC_UL(7)
#define ADC1_CHFCR_CFC7_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC8 (w) */
#define ADC1_CHFCR_CFC8_POS                  _ADC_UL(8)
#define ADC1_CHFCR_CFC8_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC9 (w) */
#define ADC1_CHFCR_CFC9_POS                  _ADC_UL(9)
#define ADC1_CHFCR_CFC9_LEN                  _ADC_UL(1)

/* ADC1_CHFCR_CFC10 (w) */
#define ADC1_CHFCR_CFC10_POS                 _ADC_UL(10)
#define ADC1_CHFCR_CFC10_LEN                 _ADC_UL(1)

/* ADC1_CHFCR_CFC11 (w) */
#define ADC1_CHFCR_CFC11_POS                 _ADC_UL(11)
#define ADC1_CHFCR_CFC11_LEN                 _ADC_UL(1)

/* ADC1_CHFCR_CFC12 (w) */
#define ADC1_CHFCR_CFC12_POS                 _ADC_UL(12)
#define ADC1_CHFCR_CFC12_LEN                 _ADC_UL(1)

/* ADC1_CHFCR_CFC13 (w) */
#define ADC1_CHFCR_CFC13_POS                 _ADC_UL(13)
#define ADC1_CHFCR_CFC13_LEN                 _ADC_UL(1)

/* ADC1_CHFCR_CFC14 (w) */
#define ADC1_CHFCR_CFC14_POS                 _ADC_UL(14)
#define ADC1_CHFCR_CFC14_LEN                 _ADC_UL(1)

/* ADC1_CHFCR_CFC15 (w) */
#define ADC1_CHFCR_CFC15_POS                 _ADC_UL(15)
#define ADC1_CHFCR_CFC15_LEN                 _ADC_UL(1)

/* ADC1_CHENPR0_CHENP0 (rw) */
#define ADC1_CHENPR0_CHENP0_POS              _ADC_UL(0)
#define ADC1_CHENPR0_CHENP0_LEN              _ADC_UL(3)

/* ADC1_CHENPR0_CHENP1 (rw) */
#define ADC1_CHENPR0_CHENP1_POS              _ADC_UL(4)
#define ADC1_CHENPR0_CHENP1_LEN              _ADC_UL(3)

/* ADC1_CHENPR0_CHENP2 (rw) */
#define ADC1_CHENPR0_CHENP2_POS              _ADC_UL(8)
#define ADC1_CHENPR0_CHENP2_LEN              _ADC_UL(3)

/* ADC1_CHENPR0_CHENP3 (rw) */
#define ADC1_CHENPR0_CHENP3_POS              _ADC_UL(12)
#define ADC1_CHENPR0_CHENP3_LEN              _ADC_UL(3)

/* ADC1_CHENPR0_CHENP4 (rw) */
#define ADC1_CHENPR0_CHENP4_POS              _ADC_UL(16)
#define ADC1_CHENPR0_CHENP4_LEN              _ADC_UL(3)

/* ADC1_CHENPR0_CHENP5 (rw) */
#define ADC1_CHENPR0_CHENP5_POS              _ADC_UL(20)
#define ADC1_CHENPR0_CHENP5_LEN              _ADC_UL(3)

/* ADC1_CHENPR0_CHENP6 (rw) */
#define ADC1_CHENPR0_CHENP6_POS              _ADC_UL(24)
#define ADC1_CHENPR0_CHENP6_LEN              _ADC_UL(3)

/* ADC1_CHENPR0_CHENP7 (rw) */
#define ADC1_CHENPR0_CHENP7_POS              _ADC_UL(28)
#define ADC1_CHENPR0_CHENP7_LEN              _ADC_UL(3)

/* ADC1_CHENPR8_CHENP8 (rw) */
#define ADC1_CHENPR8_CHENP8_POS              _ADC_UL(0)
#define ADC1_CHENPR8_CHENP8_LEN              _ADC_UL(3)

/* ADC1_CHENPR8_CHENP9 (rw) */
#define ADC1_CHENPR8_CHENP9_POS              _ADC_UL(4)
#define ADC1_CHENPR8_CHENP9_LEN              _ADC_UL(3)

/* ADC1_CHENPR8_CHENP10 (rw) */
#define ADC1_CHENPR8_CHENP10_POS             _ADC_UL(8)
#define ADC1_CHENPR8_CHENP10_LEN             _ADC_UL(3)

/* ADC1_CHENPR8_CHENP11 (rw) */
#define ADC1_CHENPR8_CHENP11_POS             _ADC_UL(12)
#define ADC1_CHENPR8_CHENP11_LEN             _ADC_UL(3)

/* ADC1_CHENPR8_CHENP12 (rw) */
#define ADC1_CHENPR8_CHENP12_POS             _ADC_UL(16)
#define ADC1_CHENPR8_CHENP12_LEN             _ADC_UL(3)

/* ADC1_CHENPR8_CHENP13 (rw) */
#define ADC1_CHENPR8_CHENP13_POS             _ADC_UL(20)
#define ADC1_CHENPR8_CHENP13_LEN             _ADC_UL(3)

/* ADC1_CHENPR8_CHENP14 (rw) */
#define ADC1_CHENPR8_CHENP14_POS             _ADC_UL(24)
#define ADC1_CHENPR8_CHENP14_LEN             _ADC_UL(3)

/* ADC1_CHENPR8_CHENP15 (rw) */
#define ADC1_CHENPR8_CHENP15_POS             _ADC_UL(28)
#define ADC1_CHENPR8_CHENP15_LEN             _ADC_UL(3)

/* ADC1_EVFR_FR0 (rwh) */
#define ADC1_EVFR_FR0_POS                    _ADC_UL(0)
#define ADC1_EVFR_FR0_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR1 (rwh) */
#define ADC1_EVFR_FR1_POS                    _ADC_UL(1)
#define ADC1_EVFR_FR1_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR2 (rwh) */
#define ADC1_EVFR_FR2_POS                    _ADC_UL(2)
#define ADC1_EVFR_FR2_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR3 (rwh) */
#define ADC1_EVFR_FR3_POS                    _ADC_UL(3)
#define ADC1_EVFR_FR3_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR4 (rwh) */
#define ADC1_EVFR_FR4_POS                    _ADC_UL(4)
#define ADC1_EVFR_FR4_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR5 (rwh) */
#define ADC1_EVFR_FR5_POS                    _ADC_UL(5)
#define ADC1_EVFR_FR5_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR6 (rwh) */
#define ADC1_EVFR_FR6_POS                    _ADC_UL(6)
#define ADC1_EVFR_FR6_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR7 (rwh) */
#define ADC1_EVFR_FR7_POS                    _ADC_UL(7)
#define ADC1_EVFR_FR7_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR8 (rwh) */
#define ADC1_EVFR_FR8_POS                    _ADC_UL(8)
#define ADC1_EVFR_FR8_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR9 (rwh) */
#define ADC1_EVFR_FR9_POS                    _ADC_UL(9)
#define ADC1_EVFR_FR9_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FR10 (rwh) */
#define ADC1_EVFR_FR10_POS                   _ADC_UL(10)
#define ADC1_EVFR_FR10_LEN                   _ADC_UL(1)

/* ADC1_EVFR_FR11 (rwh) */
#define ADC1_EVFR_FR11_POS                   _ADC_UL(11)
#define ADC1_EVFR_FR11_LEN                   _ADC_UL(1)

/* ADC1_EVFR_FR12 (rwh) */
#define ADC1_EVFR_FR12_POS                   _ADC_UL(12)
#define ADC1_EVFR_FR12_LEN                   _ADC_UL(1)

/* ADC1_EVFR_FR13 (rwh) */
#define ADC1_EVFR_FR13_POS                   _ADC_UL(13)
#define ADC1_EVFR_FR13_LEN                   _ADC_UL(1)

/* ADC1_EVFR_FR14 (rwh) */
#define ADC1_EVFR_FR14_POS                   _ADC_UL(14)
#define ADC1_EVFR_FR14_LEN                   _ADC_UL(1)

/* ADC1_EVFR_FR15 (rwh) */
#define ADC1_EVFR_FR15_POS                   _ADC_UL(15)
#define ADC1_EVFR_FR15_LEN                   _ADC_UL(1)

/* ADC1_EVFR_FS0 (rwh) */
#define ADC1_EVFR_FS0_POS                    _ADC_UL(16)
#define ADC1_EVFR_FS0_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FS1 (rwh) */
#define ADC1_EVFR_FS1_POS                    _ADC_UL(17)
#define ADC1_EVFR_FS1_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FS2 (rwh) */
#define ADC1_EVFR_FS2_POS                    _ADC_UL(18)
#define ADC1_EVFR_FS2_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FS3 (rwh) */
#define ADC1_EVFR_FS3_POS                    _ADC_UL(19)
#define ADC1_EVFR_FS3_LEN                    _ADC_UL(1)

/* ADC1_EVFR_FS4 (rwh) */
#define ADC1_EVFR_FS4_POS                    _ADC_UL(20)
#define ADC1_EVFR_FS4_LEN                    _ADC_UL(1)

/* ADC1_EVFR_GFS0 (rh) */
#define ADC1_EVFR_GFS0_POS                   _ADC_UL(24)
#define ADC1_EVFR_GFS0_LEN                   _ADC_UL(1)

/* ADC1_EVFR_GFS1 (rh) */
#define ADC1_EVFR_GFS1_POS                   _ADC_UL(25)
#define ADC1_EVFR_GFS1_LEN                   _ADC_UL(1)

/* ADC1_EVFR_GFS2 (rh) */
#define ADC1_EVFR_GFS2_POS                   _ADC_UL(26)
#define ADC1_EVFR_GFS2_LEN                   _ADC_UL(1)

/* ADC1_EVFR_GFS3 (rh) */
#define ADC1_EVFR_GFS3_POS                   _ADC_UL(27)
#define ADC1_EVFR_GFS3_LEN                   _ADC_UL(1)

/* ADC1_EVFR_GFS4 (rh) */
#define ADC1_EVFR_GFS4_POS                   _ADC_UL(28)
#define ADC1_EVFR_GFS4_LEN                   _ADC_UL(1)

/* ADC1_EVFCR_CFR0 (w) */
#define ADC1_EVFCR_CFR0_POS                  _ADC_UL(0)
#define ADC1_EVFCR_CFR0_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR1 (w) */
#define ADC1_EVFCR_CFR1_POS                  _ADC_UL(1)
#define ADC1_EVFCR_CFR1_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR2 (w) */
#define ADC1_EVFCR_CFR2_POS                  _ADC_UL(2)
#define ADC1_EVFCR_CFR2_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR3 (w) */
#define ADC1_EVFCR_CFR3_POS                  _ADC_UL(3)
#define ADC1_EVFCR_CFR3_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR4 (w) */
#define ADC1_EVFCR_CFR4_POS                  _ADC_UL(4)
#define ADC1_EVFCR_CFR4_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR5 (w) */
#define ADC1_EVFCR_CFR5_POS                  _ADC_UL(5)
#define ADC1_EVFCR_CFR5_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR6 (w) */
#define ADC1_EVFCR_CFR6_POS                  _ADC_UL(6)
#define ADC1_EVFCR_CFR6_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR7 (w) */
#define ADC1_EVFCR_CFR7_POS                  _ADC_UL(7)
#define ADC1_EVFCR_CFR7_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR8 (w) */
#define ADC1_EVFCR_CFR8_POS                  _ADC_UL(8)
#define ADC1_EVFCR_CFR8_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR9 (w) */
#define ADC1_EVFCR_CFR9_POS                  _ADC_UL(9)
#define ADC1_EVFCR_CFR9_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFR10 (w) */
#define ADC1_EVFCR_CFR10_POS                 _ADC_UL(10)
#define ADC1_EVFCR_CFR10_LEN                 _ADC_UL(1)

/* ADC1_EVFCR_CFR11 (w) */
#define ADC1_EVFCR_CFR11_POS                 _ADC_UL(11)
#define ADC1_EVFCR_CFR11_LEN                 _ADC_UL(1)

/* ADC1_EVFCR_CFR12 (w) */
#define ADC1_EVFCR_CFR12_POS                 _ADC_UL(12)
#define ADC1_EVFCR_CFR12_LEN                 _ADC_UL(1)

/* ADC1_EVFCR_CFR13 (w) */
#define ADC1_EVFCR_CFR13_POS                 _ADC_UL(13)
#define ADC1_EVFCR_CFR13_LEN                 _ADC_UL(1)

/* ADC1_EVFCR_CFR14 (w) */
#define ADC1_EVFCR_CFR14_POS                 _ADC_UL(14)
#define ADC1_EVFCR_CFR14_LEN                 _ADC_UL(1)

/* ADC1_EVFCR_CFR15 (w) */
#define ADC1_EVFCR_CFR15_POS                 _ADC_UL(15)
#define ADC1_EVFCR_CFR15_LEN                 _ADC_UL(1)

/* ADC1_EVFCR_CFS0 (w) */
#define ADC1_EVFCR_CFS0_POS                  _ADC_UL(16)
#define ADC1_EVFCR_CFS0_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFS1 (w) */
#define ADC1_EVFCR_CFS1_POS                  _ADC_UL(17)
#define ADC1_EVFCR_CFS1_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFS2 (w) */
#define ADC1_EVFCR_CFS2_POS                  _ADC_UL(18)
#define ADC1_EVFCR_CFS2_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFS3 (w) */
#define ADC1_EVFCR_CFS3_POS                  _ADC_UL(19)
#define ADC1_EVFCR_CFS3_LEN                  _ADC_UL(1)

/* ADC1_EVFCR_CFS4 (w) */
#define ADC1_EVFCR_CFS4_POS                  _ADC_UL(20)
#define ADC1_EVFCR_CFS4_LEN                  _ADC_UL(1)

/* ADC1_EVNPR_SENP0 (rw) */
#define ADC1_EVNPR_SENP0_POS                 _ADC_UL(0)
#define ADC1_EVNPR_SENP0_LEN                 _ADC_UL(3)

/* ADC1_EVNPR_SENP1 (rw) */
#define ADC1_EVNPR_SENP1_POS                 _ADC_UL(4)
#define ADC1_EVNPR_SENP1_LEN                 _ADC_UL(3)

/* ADC1_EVNPR_SENP2 (rw) */
#define ADC1_EVNPR_SENP2_POS                 _ADC_UL(8)
#define ADC1_EVNPR_SENP2_LEN                 _ADC_UL(3)

/* ADC1_EVNPR_SENP3 (rw) */
#define ADC1_EVNPR_SENP3_POS                 _ADC_UL(12)
#define ADC1_EVNPR_SENP3_LEN                 _ADC_UL(3)

/* ADC1_EVNPR_SENP4 (rw) */
#define ADC1_EVNPR_SENP4_POS                 _ADC_UL(16)
#define ADC1_EVNPR_SENP4_LEN                 _ADC_UL(3)

/* ADC1_QMR0_ENGT (rw) */
#define ADC1_QMR0_ENGT_POS                   _ADC_UL(0)
#define ADC1_QMR0_ENGT_LEN                   _ADC_UL(2)

/* ADC1_QMR0_ENTR (rw) */
#define ADC1_QMR0_ENTR_POS                   _ADC_UL(2)
#define ADC1_QMR0_ENTR_LEN                   _ADC_UL(1)

/* ADC1_QMR0_CLRV (w) */
#define ADC1_QMR0_CLRV_POS                   _ADC_UL(8)
#define ADC1_QMR0_CLRV_LEN                   _ADC_UL(1)

/* ADC1_QMR0_TREV (w) */
#define ADC1_QMR0_TREV_POS                   _ADC_UL(9)
#define ADC1_QMR0_TREV_LEN                   _ADC_UL(1)

/* ADC1_QMR0_FLUSH (w) */
#define ADC1_QMR0_FLUSH_POS                  _ADC_UL(10)
#define ADC1_QMR0_FLUSH_LEN                  _ADC_UL(1)

/* ADC1_QMR0_CEV (w) */
#define ADC1_QMR0_CEV_POS                    _ADC_UL(11)
#define ADC1_QMR0_CEV_LEN                    _ADC_UL(1)

/* ADC1_QSR0_FILL (rh) */
#define ADC1_QSR0_FILL_POS                   _ADC_UL(0)
#define ADC1_QSR0_FILL_LEN                   _ADC_UL(4)

/* ADC1_QSR0_EMPTY (rh) */
#define ADC1_QSR0_EMPTY_POS                  _ADC_UL(5)
#define ADC1_QSR0_EMPTY_LEN                  _ADC_UL(1)

/* ADC1_QSR0_REQGT (rh) */
#define ADC1_QSR0_REQGT_POS                  _ADC_UL(7)
#define ADC1_QSR0_REQGT_LEN                  _ADC_UL(1)

/* ADC1_QSR0_EV (rh) */
#define ADC1_QSR0_EV_POS                     _ADC_UL(8)
#define ADC1_QSR0_EV_LEN                     _ADC_UL(1)

/* ADC1_Q0R0_REQCHNR (rh) */
#define ADC1_Q0R0_REQCHNR_POS                _ADC_UL(0)
#define ADC1_Q0R0_REQCHNR_LEN                _ADC_UL(4)

/* ADC1_Q0R0_RF (rh) */
#define ADC1_Q0R0_RF_POS                     _ADC_UL(5)
#define ADC1_Q0R0_RF_LEN                     _ADC_UL(1)

/* ADC1_Q0R0_ENSI (rh) */
#define ADC1_Q0R0_ENSI_POS                   _ADC_UL(6)
#define ADC1_Q0R0_ENSI_LEN                   _ADC_UL(1)

/* ADC1_Q0R0_EXTR (rh) */
#define ADC1_Q0R0_EXTR_POS                   _ADC_UL(7)
#define ADC1_Q0R0_EXTR_LEN                   _ADC_UL(1)

/* ADC1_Q0R0_V (rh) */
#define ADC1_Q0R0_V_POS                      _ADC_UL(8)
#define ADC1_Q0R0_V_LEN                      _ADC_UL(1)

/* ADC1_QBUR0_REQCHNR (rh) */
#define ADC1_QBUR0_REQCHNR_POS               _ADC_UL(0)
#define ADC1_QBUR0_REQCHNR_LEN               _ADC_UL(4)

/* ADC1_QBUR0_RF (rh) */
#define ADC1_QBUR0_RF_POS                    _ADC_UL(5)
#define ADC1_QBUR0_RF_LEN                    _ADC_UL(1)

/* ADC1_QBUR0_ENSI (rh) */
#define ADC1_QBUR0_ENSI_POS                  _ADC_UL(6)
#define ADC1_QBUR0_ENSI_LEN                  _ADC_UL(1)

/* ADC1_QBUR0_EXTR (rh) */
#define ADC1_QBUR0_EXTR_POS                  _ADC_UL(7)
#define ADC1_QBUR0_EXTR_LEN                  _ADC_UL(1)

/* ADC1_QBUR0_V (rh) */
#define ADC1_QBUR0_V_POS                     _ADC_UL(8)
#define ADC1_QBUR0_V_LEN                     _ADC_UL(1)

/* ADC1_QINR0_REQCHNR (w) */
#define ADC1_QINR0_REQCHNR_POS               _ADC_UL(0)
#define ADC1_QINR0_REQCHNR_LEN               _ADC_UL(4)

/* ADC1_QINR0_RF (w) */
#define ADC1_QINR0_RF_POS                    _ADC_UL(5)
#define ADC1_QINR0_RF_LEN                    _ADC_UL(1)

/* ADC1_QINR0_ENSI (w) */
#define ADC1_QINR0_ENSI_POS                  _ADC_UL(6)
#define ADC1_QINR0_ENSI_LEN                  _ADC_UL(1)

/* ADC1_QINR0_EXTR (w) */
#define ADC1_QINR0_EXTR_POS                  _ADC_UL(7)
#define ADC1_QINR0_EXTR_LEN                  _ADC_UL(1)

/* ADC1_CRCR1_CH0 (rwh) */
#define ADC1_CRCR1_CH0_POS                   _ADC_UL(0)
#define ADC1_CRCR1_CH0_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH1 (rwh) */
#define ADC1_CRCR1_CH1_POS                   _ADC_UL(1)
#define ADC1_CRCR1_CH1_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH2 (rwh) */
#define ADC1_CRCR1_CH2_POS                   _ADC_UL(2)
#define ADC1_CRCR1_CH2_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH3 (rwh) */
#define ADC1_CRCR1_CH3_POS                   _ADC_UL(3)
#define ADC1_CRCR1_CH3_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH4 (rwh) */
#define ADC1_CRCR1_CH4_POS                   _ADC_UL(4)
#define ADC1_CRCR1_CH4_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH5 (rwh) */
#define ADC1_CRCR1_CH5_POS                   _ADC_UL(5)
#define ADC1_CRCR1_CH5_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH6 (rwh) */
#define ADC1_CRCR1_CH6_POS                   _ADC_UL(6)
#define ADC1_CRCR1_CH6_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH7 (rwh) */
#define ADC1_CRCR1_CH7_POS                   _ADC_UL(7)
#define ADC1_CRCR1_CH7_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH8 (rwh) */
#define ADC1_CRCR1_CH8_POS                   _ADC_UL(8)
#define ADC1_CRCR1_CH8_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH9 (rwh) */
#define ADC1_CRCR1_CH9_POS                   _ADC_UL(9)
#define ADC1_CRCR1_CH9_LEN                   _ADC_UL(1)

/* ADC1_CRCR1_CH10 (rwh) */
#define ADC1_CRCR1_CH10_POS                  _ADC_UL(10)
#define ADC1_CRCR1_CH10_LEN                  _ADC_UL(1)

/* ADC1_CRCR1_CH11 (rwh) */
#define ADC1_CRCR1_CH11_POS                  _ADC_UL(11)
#define ADC1_CRCR1_CH11_LEN                  _ADC_UL(1)

/* ADC1_CRCR1_CH12 (rwh) */
#define ADC1_CRCR1_CH12_POS                  _ADC_UL(12)
#define ADC1_CRCR1_CH12_LEN                  _ADC_UL(1)

/* ADC1_CRCR1_CH13 (rwh) */
#define ADC1_CRCR1_CH13_POS                  _ADC_UL(13)
#define ADC1_CRCR1_CH13_LEN                  _ADC_UL(1)

/* ADC1_CRCR1_CH14 (rwh) */
#define ADC1_CRCR1_CH14_POS                  _ADC_UL(14)
#define ADC1_CRCR1_CH14_LEN                  _ADC_UL(1)

/* ADC1_CRCR1_CH15 (rwh) */
#define ADC1_CRCR1_CH15_POS                  _ADC_UL(15)
#define ADC1_CRCR1_CH15_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP0 (rwh) */
#define ADC1_CRPR1_CHP0_POS                  _ADC_UL(0)
#define ADC1_CRPR1_CHP0_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP1 (rwh) */
#define ADC1_CRPR1_CHP1_POS                  _ADC_UL(1)
#define ADC1_CRPR1_CHP1_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP2 (rwh) */
#define ADC1_CRPR1_CHP2_POS                  _ADC_UL(2)
#define ADC1_CRPR1_CHP2_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP3 (rwh) */
#define ADC1_CRPR1_CHP3_POS                  _ADC_UL(3)
#define ADC1_CRPR1_CHP3_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP4 (rwh) */
#define ADC1_CRPR1_CHP4_POS                  _ADC_UL(4)
#define ADC1_CRPR1_CHP4_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP5 (rwh) */
#define ADC1_CRPR1_CHP5_POS                  _ADC_UL(5)
#define ADC1_CRPR1_CHP5_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP6 (rwh) */
#define ADC1_CRPR1_CHP6_POS                  _ADC_UL(6)
#define ADC1_CRPR1_CHP6_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP7 (rwh) */
#define ADC1_CRPR1_CHP7_POS                  _ADC_UL(7)
#define ADC1_CRPR1_CHP7_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP8 (rwh) */
#define ADC1_CRPR1_CHP8_POS                  _ADC_UL(8)
#define ADC1_CRPR1_CHP8_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP9 (rwh) */
#define ADC1_CRPR1_CHP9_POS                  _ADC_UL(9)
#define ADC1_CRPR1_CHP9_LEN                  _ADC_UL(1)

/* ADC1_CRPR1_CHP10 (rwh) */
#define ADC1_CRPR1_CHP10_POS                 _ADC_UL(10)
#define ADC1_CRPR1_CHP10_LEN                 _ADC_UL(1)

/* ADC1_CRPR1_CHP11 (rwh) */
#define ADC1_CRPR1_CHP11_POS                 _ADC_UL(11)
#define ADC1_CRPR1_CHP11_LEN                 _ADC_UL(1)

/* ADC1_CRPR1_CHP12 (rwh) */
#define ADC1_CRPR1_CHP12_POS                 _ADC_UL(12)
#define ADC1_CRPR1_CHP12_LEN                 _ADC_UL(1)

/* ADC1_CRPR1_CHP13 (rwh) */
#define ADC1_CRPR1_CHP13_POS                 _ADC_UL(13)
#define ADC1_CRPR1_CHP13_LEN                 _ADC_UL(1)

/* ADC1_CRPR1_CHP14 (rwh) */
#define ADC1_CRPR1_CHP14_POS                 _ADC_UL(14)
#define ADC1_CRPR1_CHP14_LEN                 _ADC_UL(1)

/* ADC1_CRPR1_CHP15 (rwh) */
#define ADC1_CRPR1_CHP15_POS                 _ADC_UL(15)
#define ADC1_CRPR1_CHP15_LEN                 _ADC_UL(1)

/* ADC1_CRMR1_ENGT (rw) */
#define ADC1_CRMR1_ENGT_POS                  _ADC_UL(0)
#define ADC1_CRMR1_ENGT_LEN                  _ADC_UL(2)

/* ADC1_CRMR1_ENTR (rw) */
#define ADC1_CRMR1_ENTR_POS                  _ADC_UL(2)
#define ADC1_CRMR1_ENTR_LEN                  _ADC_UL(1)

/* ADC1_CRMR1_ENSI (rw) */
#define ADC1_CRMR1_ENSI_POS                  _ADC_UL(3)
#define ADC1_CRMR1_ENSI_LEN                  _ADC_UL(1)

/* ADC1_CRMR1_SCAN (rw) */
#define ADC1_CRMR1_SCAN_POS                  _ADC_UL(4)
#define ADC1_CRMR1_SCAN_LEN                  _ADC_UL(1)

/* ADC1_CRMR1_LDM (rw) */
#define ADC1_CRMR1_LDM_POS                   _ADC_UL(5)
#define ADC1_CRMR1_LDM_LEN                   _ADC_UL(1)

/* ADC1_CRMR1_REQGT (rh) */
#define ADC1_CRMR1_REQGT_POS                 _ADC_UL(7)
#define ADC1_CRMR1_REQGT_LEN                 _ADC_UL(1)

/* ADC1_CRMR1_CLRPND (w) */
#define ADC1_CRMR1_CLRPND_POS                _ADC_UL(8)
#define ADC1_CRMR1_CLRPND_LEN                _ADC_UL(1)

/* ADC1_CRMR1_LDEV (w) */
#define ADC1_CRMR1_LDEV_POS                  _ADC_UL(9)
#define ADC1_CRMR1_LDEV_LEN                  _ADC_UL(1)

/* ADC1_QMR2_ENGT (rw) */
#define ADC1_QMR2_ENGT_POS                   _ADC_UL(0)
#define ADC1_QMR2_ENGT_LEN                   _ADC_UL(2)

/* ADC1_QMR2_ENTR (rw) */
#define ADC1_QMR2_ENTR_POS                   _ADC_UL(2)
#define ADC1_QMR2_ENTR_LEN                   _ADC_UL(1)

/* ADC1_QMR2_CLRV (w) */
#define ADC1_QMR2_CLRV_POS                   _ADC_UL(8)
#define ADC1_QMR2_CLRV_LEN                   _ADC_UL(1)

/* ADC1_QMR2_TREV (w) */
#define ADC1_QMR2_TREV_POS                   _ADC_UL(9)
#define ADC1_QMR2_TREV_LEN                   _ADC_UL(1)

/* ADC1_QMR2_FLUSH (w) */
#define ADC1_QMR2_FLUSH_POS                  _ADC_UL(10)
#define ADC1_QMR2_FLUSH_LEN                  _ADC_UL(1)

/* ADC1_QMR2_CEV (w) */
#define ADC1_QMR2_CEV_POS                    _ADC_UL(11)
#define ADC1_QMR2_CEV_LEN                    _ADC_UL(1)

/* ADC1_QSR2_FILL (rh) */
#define ADC1_QSR2_FILL_POS                   _ADC_UL(0)
#define ADC1_QSR2_FILL_LEN                   _ADC_UL(4)

/* ADC1_QSR2_EMPTY (rh) */
#define ADC1_QSR2_EMPTY_POS                  _ADC_UL(5)
#define ADC1_QSR2_EMPTY_LEN                  _ADC_UL(1)

/* ADC1_QSR2_REQGT (rh) */
#define ADC1_QSR2_REQGT_POS                  _ADC_UL(7)
#define ADC1_QSR2_REQGT_LEN                  _ADC_UL(1)

/* ADC1_QSR2_EV (rh) */
#define ADC1_QSR2_EV_POS                     _ADC_UL(8)
#define ADC1_QSR2_EV_LEN                     _ADC_UL(1)

/* ADC1_Q0R2_REQCHNR (rh) */
#define ADC1_Q0R2_REQCHNR_POS                _ADC_UL(0)
#define ADC1_Q0R2_REQCHNR_LEN                _ADC_UL(4)

/* ADC1_Q0R2_RF (rh) */
#define ADC1_Q0R2_RF_POS                     _ADC_UL(5)
#define ADC1_Q0R2_RF_LEN                     _ADC_UL(1)

/* ADC1_Q0R2_ENSI (rh) */
#define ADC1_Q0R2_ENSI_POS                   _ADC_UL(6)
#define ADC1_Q0R2_ENSI_LEN                   _ADC_UL(1)

/* ADC1_Q0R2_EXTR (rh) */
#define ADC1_Q0R2_EXTR_POS                   _ADC_UL(7)
#define ADC1_Q0R2_EXTR_LEN                   _ADC_UL(1)

/* ADC1_Q0R2_V (rh) */
#define ADC1_Q0R2_V_POS                      _ADC_UL(8)
#define ADC1_Q0R2_V_LEN                      _ADC_UL(1)

/* ADC1_QBUR2_REQCHNR (rh) */
#define ADC1_QBUR2_REQCHNR_POS               _ADC_UL(0)
#define ADC1_QBUR2_REQCHNR_LEN               _ADC_UL(4)

/* ADC1_QBUR2_RF (rh) */
#define ADC1_QBUR2_RF_POS                    _ADC_UL(5)
#define ADC1_QBUR2_RF_LEN                    _ADC_UL(1)

/* ADC1_QBUR2_ENSI (rh) */
#define ADC1_QBUR2_ENSI_POS                  _ADC_UL(6)
#define ADC1_QBUR2_ENSI_LEN                  _ADC_UL(1)

/* ADC1_QBUR2_EXTR (rh) */
#define ADC1_QBUR2_EXTR_POS                  _ADC_UL(7)
#define ADC1_QBUR2_EXTR_LEN                  _ADC_UL(1)

/* ADC1_QBUR2_V (rh) */
#define ADC1_QBUR2_V_POS                     _ADC_UL(8)
#define ADC1_QBUR2_V_LEN                     _ADC_UL(1)

/* ADC1_QINR2_REQCHNR (w) */
#define ADC1_QINR2_REQCHNR_POS               _ADC_UL(0)
#define ADC1_QINR2_REQCHNR_LEN               _ADC_UL(4)

/* ADC1_QINR2_RF (w) */
#define ADC1_QINR2_RF_POS                    _ADC_UL(5)
#define ADC1_QINR2_RF_LEN                    _ADC_UL(1)

/* ADC1_QINR2_ENSI (w) */
#define ADC1_QINR2_ENSI_POS                  _ADC_UL(6)
#define ADC1_QINR2_ENSI_LEN                  _ADC_UL(1)

/* ADC1_QINR2_EXTR (w) */
#define ADC1_QINR2_EXTR_POS                  _ADC_UL(7)
#define ADC1_QINR2_EXTR_LEN                  _ADC_UL(1)

/* ADC1_CRCR3_CH0 (rwh) */
#define ADC1_CRCR3_CH0_POS                   _ADC_UL(0)
#define ADC1_CRCR3_CH0_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH1 (rwh) */
#define ADC1_CRCR3_CH1_POS                   _ADC_UL(1)
#define ADC1_CRCR3_CH1_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH2 (rwh) */
#define ADC1_CRCR3_CH2_POS                   _ADC_UL(2)
#define ADC1_CRCR3_CH2_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH3 (rwh) */
#define ADC1_CRCR3_CH3_POS                   _ADC_UL(3)
#define ADC1_CRCR3_CH3_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH4 (rwh) */
#define ADC1_CRCR3_CH4_POS                   _ADC_UL(4)
#define ADC1_CRCR3_CH4_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH5 (rwh) */
#define ADC1_CRCR3_CH5_POS                   _ADC_UL(5)
#define ADC1_CRCR3_CH5_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH6 (rwh) */
#define ADC1_CRCR3_CH6_POS                   _ADC_UL(6)
#define ADC1_CRCR3_CH6_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH7 (rwh) */
#define ADC1_CRCR3_CH7_POS                   _ADC_UL(7)
#define ADC1_CRCR3_CH7_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH8 (rwh) */
#define ADC1_CRCR3_CH8_POS                   _ADC_UL(8)
#define ADC1_CRCR3_CH8_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH9 (rwh) */
#define ADC1_CRCR3_CH9_POS                   _ADC_UL(9)
#define ADC1_CRCR3_CH9_LEN                   _ADC_UL(1)

/* ADC1_CRCR3_CH10 (rwh) */
#define ADC1_CRCR3_CH10_POS                  _ADC_UL(10)
#define ADC1_CRCR3_CH10_LEN                  _ADC_UL(1)

/* ADC1_CRCR3_CH11 (rwh) */
#define ADC1_CRCR3_CH11_POS                  _ADC_UL(11)
#define ADC1_CRCR3_CH11_LEN                  _ADC_UL(1)

/* ADC1_CRCR3_CH12 (rwh) */
#define ADC1_CRCR3_CH12_POS                  _ADC_UL(12)
#define ADC1_CRCR3_CH12_LEN                  _ADC_UL(1)

/* ADC1_CRCR3_CH13 (rwh) */
#define ADC1_CRCR3_CH13_POS                  _ADC_UL(13)
#define ADC1_CRCR3_CH13_LEN                  _ADC_UL(1)

/* ADC1_CRCR3_CH14 (rwh) */
#define ADC1_CRCR3_CH14_POS                  _ADC_UL(14)
#define ADC1_CRCR3_CH14_LEN                  _ADC_UL(1)

/* ADC1_CRCR3_CH15 (rwh) */
#define ADC1_CRCR3_CH15_POS                  _ADC_UL(15)
#define ADC1_CRCR3_CH15_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP0 (rwh) */
#define ADC1_CRPR3_CHP0_POS                  _ADC_UL(0)
#define ADC1_CRPR3_CHP0_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP1 (rwh) */
#define ADC1_CRPR3_CHP1_POS                  _ADC_UL(1)
#define ADC1_CRPR3_CHP1_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP2 (rwh) */
#define ADC1_CRPR3_CHP2_POS                  _ADC_UL(2)
#define ADC1_CRPR3_CHP2_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP3 (rwh) */
#define ADC1_CRPR3_CHP3_POS                  _ADC_UL(3)
#define ADC1_CRPR3_CHP3_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP4 (rwh) */
#define ADC1_CRPR3_CHP4_POS                  _ADC_UL(4)
#define ADC1_CRPR3_CHP4_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP5 (rwh) */
#define ADC1_CRPR3_CHP5_POS                  _ADC_UL(5)
#define ADC1_CRPR3_CHP5_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP6 (rwh) */
#define ADC1_CRPR3_CHP6_POS                  _ADC_UL(6)
#define ADC1_CRPR3_CHP6_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP7 (rwh) */
#define ADC1_CRPR3_CHP7_POS                  _ADC_UL(7)
#define ADC1_CRPR3_CHP7_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP8 (rwh) */
#define ADC1_CRPR3_CHP8_POS                  _ADC_UL(8)
#define ADC1_CRPR3_CHP8_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP9 (rwh) */
#define ADC1_CRPR3_CHP9_POS                  _ADC_UL(9)
#define ADC1_CRPR3_CHP9_LEN                  _ADC_UL(1)

/* ADC1_CRPR3_CHP10 (rwh) */
#define ADC1_CRPR3_CHP10_POS                 _ADC_UL(10)
#define ADC1_CRPR3_CHP10_LEN                 _ADC_UL(1)

/* ADC1_CRPR3_CHP11 (rwh) */
#define ADC1_CRPR3_CHP11_POS                 _ADC_UL(11)
#define ADC1_CRPR3_CHP11_LEN                 _ADC_UL(1)

/* ADC1_CRPR3_CHP12 (rwh) */
#define ADC1_CRPR3_CHP12_POS                 _ADC_UL(12)
#define ADC1_CRPR3_CHP12_LEN                 _ADC_UL(1)

/* ADC1_CRPR3_CHP13 (rwh) */
#define ADC1_CRPR3_CHP13_POS                 _ADC_UL(13)
#define ADC1_CRPR3_CHP13_LEN                 _ADC_UL(1)

/* ADC1_CRPR3_CHP14 (rwh) */
#define ADC1_CRPR3_CHP14_POS                 _ADC_UL(14)
#define ADC1_CRPR3_CHP14_LEN                 _ADC_UL(1)

/* ADC1_CRPR3_CHP15 (rwh) */
#define ADC1_CRPR3_CHP15_POS                 _ADC_UL(15)
#define ADC1_CRPR3_CHP15_LEN                 _ADC_UL(1)

/* ADC1_CRMR3_ENGT (rw) */
#define ADC1_CRMR3_ENGT_POS                  _ADC_UL(0)
#define ADC1_CRMR3_ENGT_LEN                  _ADC_UL(2)

/* ADC1_CRMR3_ENTR (rw) */
#define ADC1_CRMR3_ENTR_POS                  _ADC_UL(2)
#define ADC1_CRMR3_ENTR_LEN                  _ADC_UL(1)

/* ADC1_CRMR3_ENSI (rw) */
#define ADC1_CRMR3_ENSI_POS                  _ADC_UL(3)
#define ADC1_CRMR3_ENSI_LEN                  _ADC_UL(1)

/* ADC1_CRMR3_SCAN (rw) */
#define ADC1_CRMR3_SCAN_POS                  _ADC_UL(4)
#define ADC1_CRMR3_SCAN_LEN                  _ADC_UL(1)

/* ADC1_CRMR3_LDM (rw) */
#define ADC1_CRMR3_LDM_POS                   _ADC_UL(5)
#define ADC1_CRMR3_LDM_LEN                   _ADC_UL(1)

/* ADC1_CRMR3_REQGT (rh) */
#define ADC1_CRMR3_REQGT_POS                 _ADC_UL(7)
#define ADC1_CRMR3_REQGT_LEN                 _ADC_UL(1)

/* ADC1_CRMR3_CLRPND (w) */
#define ADC1_CRMR3_CLRPND_POS                _ADC_UL(8)
#define ADC1_CRMR3_CLRPND_LEN                _ADC_UL(1)

/* ADC1_CRMR3_LDEV (w) */
#define ADC1_CRMR3_LDEV_POS                  _ADC_UL(9)
#define ADC1_CRMR3_LDEV_LEN                  _ADC_UL(1)

/* ADC1_QMR4_ENGT (rw) */
#define ADC1_QMR4_ENGT_POS                   _ADC_UL(0)
#define ADC1_QMR4_ENGT_LEN                   _ADC_UL(2)

/* ADC1_QMR4_ENTR (rw) */
#define ADC1_QMR4_ENTR_POS                   _ADC_UL(2)
#define ADC1_QMR4_ENTR_LEN                   _ADC_UL(1)

/* ADC1_QMR4_CLRV (w) */
#define ADC1_QMR4_CLRV_POS                   _ADC_UL(8)
#define ADC1_QMR4_CLRV_LEN                   _ADC_UL(1)

/* ADC1_QMR4_TREV (w) */
#define ADC1_QMR4_TREV_POS                   _ADC_UL(9)
#define ADC1_QMR4_TREV_LEN                   _ADC_UL(1)

/* ADC1_QMR4_FLUSH (w) */
#define ADC1_QMR4_FLUSH_POS                  _ADC_UL(10)
#define ADC1_QMR4_FLUSH_LEN                  _ADC_UL(1)

/* ADC1_QMR4_CEV (w) */
#define ADC1_QMR4_CEV_POS                    _ADC_UL(11)
#define ADC1_QMR4_CEV_LEN                    _ADC_UL(1)

/* ADC1_QSR4_FILL (rh) */
#define ADC1_QSR4_FILL_POS                   _ADC_UL(0)
#define ADC1_QSR4_FILL_LEN                   _ADC_UL(4)

/* ADC1_QSR4_EMPTY (rh) */
#define ADC1_QSR4_EMPTY_POS                  _ADC_UL(5)
#define ADC1_QSR4_EMPTY_LEN                  _ADC_UL(1)

/* ADC1_QSR4_REQGT (rh) */
#define ADC1_QSR4_REQGT_POS                  _ADC_UL(7)
#define ADC1_QSR4_REQGT_LEN                  _ADC_UL(1)

/* ADC1_QSR4_EV (rh) */
#define ADC1_QSR4_EV_POS                     _ADC_UL(8)
#define ADC1_QSR4_EV_LEN                     _ADC_UL(1)

/* ADC1_Q0R4_REQCHNR (rh) */
#define ADC1_Q0R4_REQCHNR_POS                _ADC_UL(0)
#define ADC1_Q0R4_REQCHNR_LEN                _ADC_UL(4)

/* ADC1_Q0R4_RF (rh) */
#define ADC1_Q0R4_RF_POS                     _ADC_UL(5)
#define ADC1_Q0R4_RF_LEN                     _ADC_UL(1)

/* ADC1_Q0R4_ENSI (rh) */
#define ADC1_Q0R4_ENSI_POS                   _ADC_UL(6)
#define ADC1_Q0R4_ENSI_LEN                   _ADC_UL(1)

/* ADC1_Q0R4_EXTR (rh) */
#define ADC1_Q0R4_EXTR_POS                   _ADC_UL(7)
#define ADC1_Q0R4_EXTR_LEN                   _ADC_UL(1)

/* ADC1_Q0R4_V (rh) */
#define ADC1_Q0R4_V_POS                      _ADC_UL(8)
#define ADC1_Q0R4_V_LEN                      _ADC_UL(1)

/* ADC1_QBUR4_REQCHNR (rh) */
#define ADC1_QBUR4_REQCHNR_POS               _ADC_UL(0)
#define ADC1_QBUR4_REQCHNR_LEN               _ADC_UL(4)

/* ADC1_QBUR4_RF (rh) */
#define ADC1_QBUR4_RF_POS                    _ADC_UL(5)
#define ADC1_QBUR4_RF_LEN                    _ADC_UL(1)

/* ADC1_QBUR4_ENSI (rh) */
#define ADC1_QBUR4_ENSI_POS                  _ADC_UL(6)
#define ADC1_QBUR4_ENSI_LEN                  _ADC_UL(1)

/* ADC1_QBUR4_EXTR (rh) */
#define ADC1_QBUR4_EXTR_POS                  _ADC_UL(7)
#define ADC1_QBUR4_EXTR_LEN                  _ADC_UL(1)

/* ADC1_QBUR4_V (rh) */
#define ADC1_QBUR4_V_POS                     _ADC_UL(8)
#define ADC1_QBUR4_V_LEN                     _ADC_UL(1)

/* ADC1_QINR4_REQCHNR (w) */
#define ADC1_QINR4_REQCHNR_POS               _ADC_UL(0)
#define ADC1_QINR4_REQCHNR_LEN               _ADC_UL(4)

/* ADC1_QINR4_RF (w) */
#define ADC1_QINR4_RF_POS                    _ADC_UL(5)
#define ADC1_QINR4_RF_LEN                    _ADC_UL(1)

/* ADC1_QINR4_ENSI (w) */
#define ADC1_QINR4_ENSI_POS                  _ADC_UL(6)
#define ADC1_QINR4_ENSI_LEN                  _ADC_UL(1)

/* ADC1_QINR4_EXTR (w) */
#define ADC1_QINR4_EXTR_POS                  _ADC_UL(7)
#define ADC1_QINR4_EXTR_LEN                  _ADC_UL(1)

/* ADC1_LCBR_BOUNDARY (rw) */
#define ADC1_LCBR_BOUNDARY_POS               _ADC_UL(2)
#define ADC1_LCBR_BOUNDARY_LEN               _ADC_UL(10)

/* ADC1_CHCTR_BNDASEL (rw) */
#define ADC1_CHCTR_BNDASEL_POS               _ADC_UL(0)
#define ADC1_CHCTR_BNDASEL_LEN               _ADC_UL(2)

/* ADC1_CHCTR_BNDBSEL (rw) */
#define ADC1_CHCTR_BNDBSEL_POS               _ADC_UL(2)
#define ADC1_CHCTR_BNDBSEL_LEN               _ADC_UL(2)

/* ADC1_CHCTR_LCC (rw) */
#define ADC1_CHCTR_LCC_POS                   _ADC_UL(4)
#define ADC1_CHCTR_LCC_LEN                   _ADC_UL(3)

/* ADC1_CHCTR_SYNC (rw) */
#define ADC1_CHCTR_SYNC_POS                  _ADC_UL(7)
#define ADC1_CHCTR_SYNC_LEN                  _ADC_UL(1)

/* ADC1_CHCTR_REFSEL (rw) */
#define ADC1_CHCTR_REFSEL_POS                _ADC_UL(8)
#define ADC1_CHCTR_REFSEL_LEN                _ADC_UL(2)

/* ADC1_CHCTR_ICLSEL (rw) */
#define ADC1_CHCTR_ICLSEL_POS                _ADC_UL(10)
#define ADC1_CHCTR_ICLSEL_LEN                _ADC_UL(2)

/* ADC1_CHCTR_RESRSEL (rw) */
#define ADC1_CHCTR_RESRSEL_POS               _ADC_UL(12)
#define ADC1_CHCTR_RESRSEL_LEN               _ADC_UL(4)

/* ADC1_RCR_DRCTR (rw) */
#define ADC1_RCR_DRCTR_POS                   _ADC_UL(0)
#define ADC1_RCR_DRCTR_LEN                   _ADC_UL(2)

/* ADC1_RCR_ENRI (rw) */
#define ADC1_RCR_ENRI_POS                    _ADC_UL(4)
#define ADC1_RCR_ENRI_LEN                    _ADC_UL(1)

/* ADC1_RCR_FEN (rw) */
#define ADC1_RCR_FEN_POS                     _ADC_UL(5)
#define ADC1_RCR_FEN_LEN                     _ADC_UL(1)

/* ADC1_RCR_WFR (rw) */
#define ADC1_RCR_WFR_POS                     _ADC_UL(6)
#define ADC1_RCR_WFR_LEN                     _ADC_UL(1)

/* ADC1_RESR_RESULT (rh) */
#define ADC1_RESR_RESULT_POS                 _ADC_UL(0)
#define ADC1_RESR_RESULT_LEN                 _ADC_UL(14)

/* ADC1_RESR_EMUX (rh) */
#define ADC1_RESR_EMUX_POS                   _ADC_UL(16)
#define ADC1_RESR_EMUX_LEN                   _ADC_UL(3)

/* ADC1_RESR_CRS (rh) */
#define ADC1_RESR_CRS_POS                    _ADC_UL(20)
#define ADC1_RESR_CRS_LEN                    _ADC_UL(3)

/* ADC1_RESR_CHNR (rh) */
#define ADC1_RESR_CHNR_POS                   _ADC_UL(24)
#define ADC1_RESR_CHNR_LEN                   _ADC_UL(4)

/* ADC1_RESR_DRC (rh) */
#define ADC1_RESR_DRC_POS                    _ADC_UL(29)
#define ADC1_RESR_DRC_LEN                    _ADC_UL(2)

/* ADC1_RESR_VF (rh) */
#define ADC1_RESR_VF_POS                     _ADC_UL(31)
#define ADC1_RESR_VF_LEN                     _ADC_UL(1)

/* ADC1_RESRD_RESULT (rh) */
#define ADC1_RESRD_RESULT_POS                _ADC_UL(0)
#define ADC1_RESRD_RESULT_LEN                _ADC_UL(14)

/* ADC1_RESRD_EMUX (rh) */
#define ADC1_RESRD_EMUX_POS                  _ADC_UL(16)
#define ADC1_RESRD_EMUX_LEN                  _ADC_UL(3)

/* ADC1_RESRD_CRS (rh) */
#define ADC1_RESRD_CRS_POS                   _ADC_UL(20)
#define ADC1_RESRD_CRS_LEN                   _ADC_UL(3)

/* ADC1_RESRD_CHNR (rh) */
#define ADC1_RESRD_CHNR_POS                  _ADC_UL(24)
#define ADC1_RESRD_CHNR_LEN                  _ADC_UL(4)

/* ADC1_RESRD_DRC (rh) */
#define ADC1_RESRD_DRC_POS                   _ADC_UL(29)
#define ADC1_RESRD_DRC_LEN                   _ADC_UL(2)

/* ADC1_RESRD_VF (rh) */
#define ADC1_RESRD_VF_POS                    _ADC_UL(31)
#define ADC1_RESRD_VF_LEN                    _ADC_UL(1)

/* ADC1_VFR_VF0 (rwh) */
#define ADC1_VFR_VF0_POS                     _ADC_UL(0)
#define ADC1_VFR_VF0_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF1 (rwh) */
#define ADC1_VFR_VF1_POS                     _ADC_UL(1)
#define ADC1_VFR_VF1_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF2 (rwh) */
#define ADC1_VFR_VF2_POS                     _ADC_UL(2)
#define ADC1_VFR_VF2_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF3 (rwh) */
#define ADC1_VFR_VF3_POS                     _ADC_UL(3)
#define ADC1_VFR_VF3_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF4 (rwh) */
#define ADC1_VFR_VF4_POS                     _ADC_UL(4)
#define ADC1_VFR_VF4_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF5 (rwh) */
#define ADC1_VFR_VF5_POS                     _ADC_UL(5)
#define ADC1_VFR_VF5_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF6 (rwh) */
#define ADC1_VFR_VF6_POS                     _ADC_UL(6)
#define ADC1_VFR_VF6_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF7 (rwh) */
#define ADC1_VFR_VF7_POS                     _ADC_UL(7)
#define ADC1_VFR_VF7_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF8 (rwh) */
#define ADC1_VFR_VF8_POS                     _ADC_UL(8)
#define ADC1_VFR_VF8_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF9 (rwh) */
#define ADC1_VFR_VF9_POS                     _ADC_UL(9)
#define ADC1_VFR_VF9_LEN                     _ADC_UL(1)

/* ADC1_VFR_VF10 (rwh) */
#define ADC1_VFR_VF10_POS                    _ADC_UL(10)
#define ADC1_VFR_VF10_LEN                    _ADC_UL(1)

/* ADC1_VFR_VF11 (rwh) */
#define ADC1_VFR_VF11_POS                    _ADC_UL(11)
#define ADC1_VFR_VF11_LEN                    _ADC_UL(1)

/* ADC1_VFR_VF12 (rwh) */
#define ADC1_VFR_VF12_POS                    _ADC_UL(12)
#define ADC1_VFR_VF12_LEN                    _ADC_UL(1)

/* ADC1_VFR_VF13 (rwh) */
#define ADC1_VFR_VF13_POS                    _ADC_UL(13)
#define ADC1_VFR_VF13_LEN                    _ADC_UL(1)

/* ADC1_VFR_VF14 (rwh) */
#define ADC1_VFR_VF14_POS                    _ADC_UL(14)
#define ADC1_VFR_VF14_LEN                    _ADC_UL(1)

/* ADC1_VFR_VF15 (rwh) */
#define ADC1_VFR_VF15_POS                    _ADC_UL(15)
#define ADC1_VFR_VF15_LEN                    _ADC_UL(1)

/* ADC1_INTR_SISR0 (w) */
#define ADC1_INTR_SISR0_POS                  _ADC_UL(0)
#define ADC1_INTR_SISR0_LEN                  _ADC_UL(1)

/* ADC1_INTR_SISR1 (w) */
#define ADC1_INTR_SISR1_POS                  _ADC_UL(1)
#define ADC1_INTR_SISR1_LEN                  _ADC_UL(1)

/* ADC1_INTR_SISR2 (w) */
#define ADC1_INTR_SISR2_POS                  _ADC_UL(2)
#define ADC1_INTR_SISR2_LEN                  _ADC_UL(1)

/* ADC1_INTR_SISR3 (w) */
#define ADC1_INTR_SISR3_POS                  _ADC_UL(3)
#define ADC1_INTR_SISR3_LEN                  _ADC_UL(1)

/* ADC1_INTR_SISR4 (w) */
#define ADC1_INTR_SISR4_POS                  _ADC_UL(4)
#define ADC1_INTR_SISR4_LEN                  _ADC_UL(1)

/* ADC1_INTR_SISR5 (w) */
#define ADC1_INTR_SISR5_POS                  _ADC_UL(5)
#define ADC1_INTR_SISR5_LEN                  _ADC_UL(1)

/* ADC1_INTR_SISR6 (w) */
#define ADC1_INTR_SISR6_POS                  _ADC_UL(6)
#define ADC1_INTR_SISR6_LEN                  _ADC_UL(1)

/* ADC1_INTR_SISR7 (w) */
#define ADC1_INTR_SISR7_POS                  _ADC_UL(7)
#define ADC1_INTR_SISR7_LEN                  _ADC_UL(1)

/* ADC1_RNPR0_RENP0 (rw) */
#define ADC1_RNPR0_RENP0_POS                 _ADC_UL(0)
#define ADC1_RNPR0_RENP0_LEN                 _ADC_UL(3)

/* ADC1_RNPR0_RENP1 (rw) */
#define ADC1_RNPR0_RENP1_POS                 _ADC_UL(4)
#define ADC1_RNPR0_RENP1_LEN                 _ADC_UL(3)

/* ADC1_RNPR0_RENP2 (rw) */
#define ADC1_RNPR0_RENP2_POS                 _ADC_UL(8)
#define ADC1_RNPR0_RENP2_LEN                 _ADC_UL(3)

/* ADC1_RNPR0_RENP3 (rw) */
#define ADC1_RNPR0_RENP3_POS                 _ADC_UL(12)
#define ADC1_RNPR0_RENP3_LEN                 _ADC_UL(3)

/* ADC1_RNPR0_RENP4 (rw) */
#define ADC1_RNPR0_RENP4_POS                 _ADC_UL(16)
#define ADC1_RNPR0_RENP4_LEN                 _ADC_UL(3)

/* ADC1_RNPR0_RENP5 (rw) */
#define ADC1_RNPR0_RENP5_POS                 _ADC_UL(20)
#define ADC1_RNPR0_RENP5_LEN                 _ADC_UL(3)

/* ADC1_RNPR0_RENP6 (rw) */
#define ADC1_RNPR0_RENP6_POS                 _ADC_UL(24)
#define ADC1_RNPR0_RENP6_LEN                 _ADC_UL(3)

/* ADC1_RNPR0_RENP7 (rw) */
#define ADC1_RNPR0_RENP7_POS                 _ADC_UL(28)
#define ADC1_RNPR0_RENP7_LEN                 _ADC_UL(3)

/* ADC1_RNPR8_RENP8 (rw) */
#define ADC1_RNPR8_RENP8_POS                 _ADC_UL(0)
#define ADC1_RNPR8_RENP8_LEN                 _ADC_UL(3)

/* ADC1_RNPR8_RENP9 (rw) */
#define ADC1_RNPR8_RENP9_POS                 _ADC_UL(4)
#define ADC1_RNPR8_RENP9_LEN                 _ADC_UL(3)

/* ADC1_RNPR8_RENP10 (rw) */
#define ADC1_RNPR8_RENP10_POS                _ADC_UL(8)
#define ADC1_RNPR8_RENP10_LEN                _ADC_UL(3)

/* ADC1_RNPR8_RENP11 (rw) */
#define ADC1_RNPR8_RENP11_POS                _ADC_UL(12)
#define ADC1_RNPR8_RENP11_LEN                _ADC_UL(3)

/* ADC1_RNPR8_RENP12 (rw) */
#define ADC1_RNPR8_RENP12_POS                _ADC_UL(16)
#define ADC1_RNPR8_RENP12_LEN                _ADC_UL(3)

/* ADC1_RNPR8_RENP13 (rw) */
#define ADC1_RNPR8_RENP13_POS                _ADC_UL(20)
#define ADC1_RNPR8_RENP13_LEN                _ADC_UL(3)

/* ADC1_RNPR8_RENP14 (rw) */
#define ADC1_RNPR8_RENP14_POS                _ADC_UL(24)
#define ADC1_RNPR8_RENP14_LEN                _ADC_UL(3)

/* ADC1_RNPR8_RENP15 (rw) */
#define ADC1_RNPR8_RENP15_POS                _ADC_UL(28)
#define ADC1_RNPR8_RENP15_LEN                _ADC_UL(3)

/* ADC1_ALR0_ALIAS0 (rw) */
#define ADC1_ALR0_ALIAS0_POS                 _ADC_UL(0)
#define ADC1_ALR0_ALIAS0_LEN                 _ADC_UL(4)

/* ADC1_ALR0_ALIAS1 (rw) */
#define ADC1_ALR0_ALIAS1_POS                 _ADC_UL(8)
#define ADC1_ALR0_ALIAS1_LEN                 _ADC_UL(4)

/* ADC1_APR_RG0 (rw) */
#define ADC1_APR_RG0_POS                     _ADC_UL(0)
#define ADC1_APR_RG0_LEN                     _ADC_UL(1)

/* ADC1_APR_RG1 (rw) */
#define ADC1_APR_RG1_POS                     _ADC_UL(1)
#define ADC1_APR_RG1_LEN                     _ADC_UL(1)

/* ADC1_APR_RG2 (rw) */
#define ADC1_APR_RG2_POS                     _ADC_UL(2)
#define ADC1_APR_RG2_LEN                     _ADC_UL(1)

/* ADC1_APR_RG3 (rw) */
#define ADC1_APR_RG3_POS                     _ADC_UL(3)
#define ADC1_APR_RG3_LEN                     _ADC_UL(1)

/* ADC1_APR_RG4 (rw) */
#define ADC1_APR_RG4_POS                     _ADC_UL(4)
#define ADC1_APR_RG4_LEN                     _ADC_UL(1)

/* ADC1_APR_RG5 (rw) */
#define ADC1_APR_RG5_POS                     _ADC_UL(5)
#define ADC1_APR_RG5_LEN                     _ADC_UL(1)

/* ADC1_APR_ACCERR (rwh) */
#define ADC1_APR_ACCERR_POS                  _ADC_UL(15)
#define ADC1_APR_ACCERR_LEN                  _ADC_UL(1)

/* ADC1_EMCTR_SETEMUX (rw) */
#define ADC1_EMCTR_SETEMUX_POS               _ADC_UL(0)
#define ADC1_EMCTR_SETEMUX_LEN               _ADC_UL(3)

/* ADC1_EMCTR_EMUX (rh) */
#define ADC1_EMCTR_EMUX_POS                  _ADC_UL(4)
#define ADC1_EMCTR_EMUX_LEN                  _ADC_UL(3)

/* ADC1_EMCTR_EMSAMPLE (rw) */
#define ADC1_EMCTR_EMSAMPLE_POS              _ADC_UL(8)
#define ADC1_EMCTR_EMSAMPLE_LEN              _ADC_UL(8)

/* ADC1_EMCTR_EMUXCHNR (rw) */
#define ADC1_EMCTR_EMUXCHNR_POS              _ADC_UL(16)
#define ADC1_EMCTR_EMUXCHNR_LEN              _ADC_UL(4)

/* ADC1_EMCTR_TROEN (rw) */
#define ADC1_EMCTR_TROEN_POS                 _ADC_UL(21)
#define ADC1_EMCTR_TROEN_LEN                 _ADC_UL(1)

/* ADC1_EMCTR_SCANEN (rw) */
#define ADC1_EMCTR_SCANEN_POS                _ADC_UL(22)
#define ADC1_EMCTR_SCANEN_LEN                _ADC_UL(1)

/* ADC1_EMCTR_EMUXEN (rw) */
#define ADC1_EMCTR_EMUXEN_POS                _ADC_UL(23)
#define ADC1_EMCTR_EMUXEN_LEN                _ADC_UL(1)

/* ADC2_RSIR_GTSEL (rw) */
#define ADC2_RSIR_GTSEL_POS                  _ADC_UL(0)
#define ADC2_RSIR_GTSEL_LEN                  _ADC_UL(3)

/* ADC2_RSIR_TMEN (rw) */
#define ADC2_RSIR_TMEN_POS                   _ADC_UL(4)
#define ADC2_RSIR_TMEN_LEN                   _ADC_UL(1)

/* ADC2_RSIR_GTI (rh) */
#define ADC2_RSIR_GTI_POS                    _ADC_UL(7)
#define ADC2_RSIR_GTI_LEN                    _ADC_UL(1)

/* ADC2_RSIR_TRSEL (rw) */
#define ADC2_RSIR_TRSEL_POS                  _ADC_UL(8)
#define ADC2_RSIR_TRSEL_LEN                  _ADC_UL(3)

/* ADC2_RSIR_FEN (rw) */
#define ADC2_RSIR_FEN_POS                    _ADC_UL(12)
#define ADC2_RSIR_FEN_LEN                    _ADC_UL(1)

/* ADC2_RSIR_REN (rw) */
#define ADC2_RSIR_REN_POS                    _ADC_UL(13)
#define ADC2_RSIR_REN_LEN                    _ADC_UL(1)

/* ADC2_RSIR_TRI (rh) */
#define ADC2_RSIR_TRI_POS                    _ADC_UL(15)
#define ADC2_RSIR_TRI_LEN                    _ADC_UL(1)

/* ADC2_GLOBCTR_DIVA (rw) */
#define ADC2_GLOBCTR_DIVA_POS                _ADC_UL(0)
#define ADC2_GLOBCTR_DIVA_LEN                _ADC_UL(6)

/* ADC2_GLOBCTR_DIVD (rw) */
#define ADC2_GLOBCTR_DIVD_POS                _ADC_UL(6)
#define ADC2_GLOBCTR_DIVD_LEN                _ADC_UL(2)

/* ADC2_GLOBCTR_ANON (rw) */
#define ADC2_GLOBCTR_ANON_POS                _ADC_UL(8)
#define ADC2_GLOBCTR_ANON_LEN                _ADC_UL(2)

/* ADC2_GLOBCTR_ARBRND (rw) */
#define ADC2_GLOBCTR_ARBRND_POS              _ADC_UL(10)
#define ADC2_GLOBCTR_ARBRND_LEN              _ADC_UL(2)

/* ADC2_GLOBCTR_ARBM (rw) */
#define ADC2_GLOBCTR_ARBM_POS                _ADC_UL(15)
#define ADC2_GLOBCTR_ARBM_LEN                _ADC_UL(1)

/* ADC2_GLOBCFG_MTM7 (rw) */
#define ADC2_GLOBCFG_MTM7_POS                _ADC_UL(4)
#define ADC2_GLOBCFG_MTM7_LEN                _ADC_UL(1)

/* ADC2_GLOBCFG_SUCAL (rw) */
#define ADC2_GLOBCFG_SUCAL_POS               _ADC_UL(5)
#define ADC2_GLOBCFG_SUCAL_LEN               _ADC_UL(1)

/* ADC2_GLOBCFG_DPCAL (rw) */
#define ADC2_GLOBCFG_DPCAL_POS               _ADC_UL(6)
#define ADC2_GLOBCFG_DPCAL_LEN               _ADC_UL(1)

/* ADC2_GLOBSTR_BUSY (rh) */
#define ADC2_GLOBSTR_BUSY_POS                _ADC_UL(0)
#define ADC2_GLOBSTR_BUSY_LEN                _ADC_UL(1)

/* ADC2_GLOBSTR_SAMPLE (rh) */
#define ADC2_GLOBSTR_SAMPLE_POS              _ADC_UL(1)
#define ADC2_GLOBSTR_SAMPLE_LEN              _ADC_UL(1)

/* ADC2_GLOBSTR_CAL (rh) */
#define ADC2_GLOBSTR_CAL_POS                 _ADC_UL(2)
#define ADC2_GLOBSTR_CAL_LEN                 _ADC_UL(1)

/* ADC2_GLOBSTR_CHNR (rh) */
#define ADC2_GLOBSTR_CHNR_POS                _ADC_UL(3)
#define ADC2_GLOBSTR_CHNR_LEN                _ADC_UL(4)

/* ADC2_GLOBSTR_ANON (rh) */
#define ADC2_GLOBSTR_ANON_POS                _ADC_UL(8)
#define ADC2_GLOBSTR_ANON_LEN                _ADC_UL(2)

/* ADC2_GLOBSTR_SYNRUN (rh) */
#define ADC2_GLOBSTR_SYNRUN_POS              _ADC_UL(10)
#define ADC2_GLOBSTR_SYNRUN_LEN              _ADC_UL(1)

/* ADC2_GLOBSTR_CSRC (rh) */
#define ADC2_GLOBSTR_CSRC_POS                _ADC_UL(11)
#define ADC2_GLOBSTR_CSRC_LEN                _ADC_UL(3)

/* ADC2_ASENR_ASEN0 (rw) */
#define ADC2_ASENR_ASEN0_POS                 _ADC_UL(0)
#define ADC2_ASENR_ASEN0_LEN                 _ADC_UL(1)

/* ADC2_ASENR_ASEN1 (rw) */
#define ADC2_ASENR_ASEN1_POS                 _ADC_UL(1)
#define ADC2_ASENR_ASEN1_LEN                 _ADC_UL(1)

/* ADC2_ASENR_ASEN2 (rw) */
#define ADC2_ASENR_ASEN2_POS                 _ADC_UL(2)
#define ADC2_ASENR_ASEN2_LEN                 _ADC_UL(1)

/* ADC2_ASENR_ASEN3 (rw) */
#define ADC2_ASENR_ASEN3_POS                 _ADC_UL(3)
#define ADC2_ASENR_ASEN3_LEN                 _ADC_UL(1)

/* ADC2_ASENR_ASEN4 (rw) */
#define ADC2_ASENR_ASEN4_POS                 _ADC_UL(4)
#define ADC2_ASENR_ASEN4_LEN                 _ADC_UL(1)

/* ADC2_RSPR0_PRIO0 (rw) */
#define ADC2_RSPR0_PRIO0_POS                 _ADC_UL(0)
#define ADC2_RSPR0_PRIO0_LEN                 _ADC_UL(2)

/* ADC2_RSPR0_PRIO1 (rw) */
#define ADC2_RSPR0_PRIO1_POS                 _ADC_UL(4)
#define ADC2_RSPR0_PRIO1_LEN                 _ADC_UL(2)

/* ADC2_RSPR0_PRIO2 (rw) */
#define ADC2_RSPR0_PRIO2_POS                 _ADC_UL(8)
#define ADC2_RSPR0_PRIO2_LEN                 _ADC_UL(2)

/* ADC2_RSPR0_PRIO3 (rw) */
#define ADC2_RSPR0_PRIO3_POS                 _ADC_UL(12)
#define ADC2_RSPR0_PRIO3_LEN                 _ADC_UL(2)

/* ADC2_RSPR0_CSM0 (rw) */
#define ADC2_RSPR0_CSM0_POS                  _ADC_UL(3)
#define ADC2_RSPR0_CSM0_LEN                  _ADC_UL(1)

/* ADC2_RSPR0_CSM1 (rw) */
#define ADC2_RSPR0_CSM1_POS                  _ADC_UL(7)
#define ADC2_RSPR0_CSM1_LEN                  _ADC_UL(1)

/* ADC2_RSPR0_CSM2 (rw) */
#define ADC2_RSPR0_CSM2_POS                  _ADC_UL(11)
#define ADC2_RSPR0_CSM2_LEN                  _ADC_UL(1)

/* ADC2_RSPR0_CSM3 (rw) */
#define ADC2_RSPR0_CSM3_POS                  _ADC_UL(15)
#define ADC2_RSPR0_CSM3_LEN                  _ADC_UL(1)

/* ADC2_RSPR4_PRIO4 (rw) */
#define ADC2_RSPR4_PRIO4_POS                 _ADC_UL(0)
#define ADC2_RSPR4_PRIO4_LEN                 _ADC_UL(2)

/* ADC2_RSPR4_CSM4 (rw) */
#define ADC2_RSPR4_CSM4_POS                  _ADC_UL(3)
#define ADC2_RSPR4_CSM4_LEN                  _ADC_UL(1)

/* ADC2_SYNCTR_STSEL (rw) */
#define ADC2_SYNCTR_STSEL_POS                _ADC_UL(0)
#define ADC2_SYNCTR_STSEL_LEN                _ADC_UL(2)

/* ADC2_SYNCTR_EVALR1 (rw) */
#define ADC2_SYNCTR_EVALR1_POS               _ADC_UL(4)
#define ADC2_SYNCTR_EVALR1_LEN               _ADC_UL(1)

/* ADC2_SYNCTR_EVALR2 (rw) */
#define ADC2_SYNCTR_EVALR2_POS               _ADC_UL(5)
#define ADC2_SYNCTR_EVALR2_LEN               _ADC_UL(1)

/* ADC2_SYNCTR_EVALR3 (rw) */
#define ADC2_SYNCTR_EVALR3_POS               _ADC_UL(6)
#define ADC2_SYNCTR_EVALR3_LEN               _ADC_UL(1)

/* ADC2_INPCR_STC (rw) */
#define ADC2_INPCR_STC_POS                   _ADC_UL(0)
#define ADC2_INPCR_STC_LEN                   _ADC_UL(8)

/* ADC2_INPCR_DW (rw) */
#define ADC2_INPCR_DW_POS                    _ADC_UL(8)
#define ADC2_INPCR_DW_LEN                    _ADC_UL(2)

/* ADC2_CHFR_FC0 (rwh) */
#define ADC2_CHFR_FC0_POS                    _ADC_UL(0)
#define ADC2_CHFR_FC0_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC1 (rwh) */
#define ADC2_CHFR_FC1_POS                    _ADC_UL(1)
#define ADC2_CHFR_FC1_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC2 (rwh) */
#define ADC2_CHFR_FC2_POS                    _ADC_UL(2)
#define ADC2_CHFR_FC2_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC3 (rwh) */
#define ADC2_CHFR_FC3_POS                    _ADC_UL(3)
#define ADC2_CHFR_FC3_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC4 (rwh) */
#define ADC2_CHFR_FC4_POS                    _ADC_UL(4)
#define ADC2_CHFR_FC4_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC5 (rwh) */
#define ADC2_CHFR_FC5_POS                    _ADC_UL(5)
#define ADC2_CHFR_FC5_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC6 (rwh) */
#define ADC2_CHFR_FC6_POS                    _ADC_UL(6)
#define ADC2_CHFR_FC6_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC7 (rwh) */
#define ADC2_CHFR_FC7_POS                    _ADC_UL(7)
#define ADC2_CHFR_FC7_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC8 (rwh) */
#define ADC2_CHFR_FC8_POS                    _ADC_UL(8)
#define ADC2_CHFR_FC8_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC9 (rwh) */
#define ADC2_CHFR_FC9_POS                    _ADC_UL(9)
#define ADC2_CHFR_FC9_LEN                    _ADC_UL(1)

/* ADC2_CHFR_FC10 (rwh) */
#define ADC2_CHFR_FC10_POS                   _ADC_UL(10)
#define ADC2_CHFR_FC10_LEN                   _ADC_UL(1)

/* ADC2_CHFR_FC11 (rwh) */
#define ADC2_CHFR_FC11_POS                   _ADC_UL(11)
#define ADC2_CHFR_FC11_LEN                   _ADC_UL(1)

/* ADC2_CHFR_FC12 (rwh) */
#define ADC2_CHFR_FC12_POS                   _ADC_UL(12)
#define ADC2_CHFR_FC12_LEN                   _ADC_UL(1)

/* ADC2_CHFR_FC13 (rwh) */
#define ADC2_CHFR_FC13_POS                   _ADC_UL(13)
#define ADC2_CHFR_FC13_LEN                   _ADC_UL(1)

/* ADC2_CHFR_FC14 (rwh) */
#define ADC2_CHFR_FC14_POS                   _ADC_UL(14)
#define ADC2_CHFR_FC14_LEN                   _ADC_UL(1)

/* ADC2_CHFR_FC15 (rwh) */
#define ADC2_CHFR_FC15_POS                   _ADC_UL(15)
#define ADC2_CHFR_FC15_LEN                   _ADC_UL(1)

/* ADC2_CHFCR_CFC0 (w) */
#define ADC2_CHFCR_CFC0_POS                  _ADC_UL(0)
#define ADC2_CHFCR_CFC0_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC1 (w) */
#define ADC2_CHFCR_CFC1_POS                  _ADC_UL(1)
#define ADC2_CHFCR_CFC1_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC2 (w) */
#define ADC2_CHFCR_CFC2_POS                  _ADC_UL(2)
#define ADC2_CHFCR_CFC2_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC3 (w) */
#define ADC2_CHFCR_CFC3_POS                  _ADC_UL(3)
#define ADC2_CHFCR_CFC3_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC4 (w) */
#define ADC2_CHFCR_CFC4_POS                  _ADC_UL(4)
#define ADC2_CHFCR_CFC4_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC5 (w) */
#define ADC2_CHFCR_CFC5_POS                  _ADC_UL(5)
#define ADC2_CHFCR_CFC5_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC6 (w) */
#define ADC2_CHFCR_CFC6_POS                  _ADC_UL(6)
#define ADC2_CHFCR_CFC6_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC7 (w) */
#define ADC2_CHFCR_CFC7_POS                  _ADC_UL(7)
#define ADC2_CHFCR_CFC7_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC8 (w) */
#define ADC2_CHFCR_CFC8_POS                  _ADC_UL(8)
#define ADC2_CHFCR_CFC8_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC9 (w) */
#define ADC2_CHFCR_CFC9_POS                  _ADC_UL(9)
#define ADC2_CHFCR_CFC9_LEN                  _ADC_UL(1)

/* ADC2_CHFCR_CFC10 (w) */
#define ADC2_CHFCR_CFC10_POS                 _ADC_UL(10)
#define ADC2_CHFCR_CFC10_LEN                 _ADC_UL(1)

/* ADC2_CHFCR_CFC11 (w) */
#define ADC2_CHFCR_CFC11_POS                 _ADC_UL(11)
#define ADC2_CHFCR_CFC11_LEN                 _ADC_UL(1)

/* ADC2_CHFCR_CFC12 (w) */
#define ADC2_CHFCR_CFC12_POS                 _ADC_UL(12)
#define ADC2_CHFCR_CFC12_LEN                 _ADC_UL(1)

/* ADC2_CHFCR_CFC13 (w) */
#define ADC2_CHFCR_CFC13_POS                 _ADC_UL(13)
#define ADC2_CHFCR_CFC13_LEN                 _ADC_UL(1)

/* ADC2_CHFCR_CFC14 (w) */
#define ADC2_CHFCR_CFC14_POS                 _ADC_UL(14)
#define ADC2_CHFCR_CFC14_LEN                 _ADC_UL(1)

/* ADC2_CHFCR_CFC15 (w) */
#define ADC2_CHFCR_CFC15_POS                 _ADC_UL(15)
#define ADC2_CHFCR_CFC15_LEN                 _ADC_UL(1)

/* ADC2_CHENPR0_CHENP0 (rw) */
#define ADC2_CHENPR0_CHENP0_POS              _ADC_UL(0)
#define ADC2_CHENPR0_CHENP0_LEN              _ADC_UL(3)

/* ADC2_CHENPR0_CHENP1 (rw) */
#define ADC2_CHENPR0_CHENP1_POS              _ADC_UL(4)
#define ADC2_CHENPR0_CHENP1_LEN              _ADC_UL(3)

/* ADC2_CHENPR0_CHENP2 (rw) */
#define ADC2_CHENPR0_CHENP2_POS              _ADC_UL(8)
#define ADC2_CHENPR0_CHENP2_LEN              _ADC_UL(3)

/* ADC2_CHENPR0_CHENP3 (rw) */
#define ADC2_CHENPR0_CHENP3_POS              _ADC_UL(12)
#define ADC2_CHENPR0_CHENP3_LEN              _ADC_UL(3)

/* ADC2_CHENPR0_CHENP4 (rw) */
#define ADC2_CHENPR0_CHENP4_POS              _ADC_UL(16)
#define ADC2_CHENPR0_CHENP4_LEN              _ADC_UL(3)

/* ADC2_CHENPR0_CHENP5 (rw) */
#define ADC2_CHENPR0_CHENP5_POS              _ADC_UL(20)
#define ADC2_CHENPR0_CHENP5_LEN              _ADC_UL(3)

/* ADC2_CHENPR0_CHENP6 (rw) */
#define ADC2_CHENPR0_CHENP6_POS              _ADC_UL(24)
#define ADC2_CHENPR0_CHENP6_LEN              _ADC_UL(3)

/* ADC2_CHENPR0_CHENP7 (rw) */
#define ADC2_CHENPR0_CHENP7_POS              _ADC_UL(28)
#define ADC2_CHENPR0_CHENP7_LEN              _ADC_UL(3)

/* ADC2_CHENPR8_CHENP8 (rw) */
#define ADC2_CHENPR8_CHENP8_POS              _ADC_UL(0)
#define ADC2_CHENPR8_CHENP8_LEN              _ADC_UL(3)

/* ADC2_CHENPR8_CHENP9 (rw) */
#define ADC2_CHENPR8_CHENP9_POS              _ADC_UL(4)
#define ADC2_CHENPR8_CHENP9_LEN              _ADC_UL(3)

/* ADC2_CHENPR8_CHENP10 (rw) */
#define ADC2_CHENPR8_CHENP10_POS             _ADC_UL(8)
#define ADC2_CHENPR8_CHENP10_LEN             _ADC_UL(3)

/* ADC2_CHENPR8_CHENP11 (rw) */
#define ADC2_CHENPR8_CHENP11_POS             _ADC_UL(12)
#define ADC2_CHENPR8_CHENP11_LEN             _ADC_UL(3)

/* ADC2_CHENPR8_CHENP12 (rw) */
#define ADC2_CHENPR8_CHENP12_POS             _ADC_UL(16)
#define ADC2_CHENPR8_CHENP12_LEN             _ADC_UL(3)

/* ADC2_CHENPR8_CHENP13 (rw) */
#define ADC2_CHENPR8_CHENP13_POS             _ADC_UL(20)
#define ADC2_CHENPR8_CHENP13_LEN             _ADC_UL(3)

/* ADC2_CHENPR8_CHENP14 (rw) */
#define ADC2_CHENPR8_CHENP14_POS             _ADC_UL(24)
#define ADC2_CHENPR8_CHENP14_LEN             _ADC_UL(3)

/* ADC2_CHENPR8_CHENP15 (rw) */
#define ADC2_CHENPR8_CHENP15_POS             _ADC_UL(28)
#define ADC2_CHENPR8_CHENP15_LEN             _ADC_UL(3)

/* ADC2_EVFR_FR0 (rwh) */
#define ADC2_EVFR_FR0_POS                    _ADC_UL(0)
#define ADC2_EVFR_FR0_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR1 (rwh) */
#define ADC2_EVFR_FR1_POS                    _ADC_UL(1)
#define ADC2_EVFR_FR1_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR2 (rwh) */
#define ADC2_EVFR_FR2_POS                    _ADC_UL(2)
#define ADC2_EVFR_FR2_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR3 (rwh) */
#define ADC2_EVFR_FR3_POS                    _ADC_UL(3)
#define ADC2_EVFR_FR3_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR4 (rwh) */
#define ADC2_EVFR_FR4_POS                    _ADC_UL(4)
#define ADC2_EVFR_FR4_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR5 (rwh) */
#define ADC2_EVFR_FR5_POS                    _ADC_UL(5)
#define ADC2_EVFR_FR5_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR6 (rwh) */
#define ADC2_EVFR_FR6_POS                    _ADC_UL(6)
#define ADC2_EVFR_FR6_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR7 (rwh) */
#define ADC2_EVFR_FR7_POS                    _ADC_UL(7)
#define ADC2_EVFR_FR7_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR8 (rwh) */
#define ADC2_EVFR_FR8_POS                    _ADC_UL(8)
#define ADC2_EVFR_FR8_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR9 (rwh) */
#define ADC2_EVFR_FR9_POS                    _ADC_UL(9)
#define ADC2_EVFR_FR9_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FR10 (rwh) */
#define ADC2_EVFR_FR10_POS                   _ADC_UL(10)
#define ADC2_EVFR_FR10_LEN                   _ADC_UL(1)

/* ADC2_EVFR_FR11 (rwh) */
#define ADC2_EVFR_FR11_POS                   _ADC_UL(11)
#define ADC2_EVFR_FR11_LEN                   _ADC_UL(1)

/* ADC2_EVFR_FR12 (rwh) */
#define ADC2_EVFR_FR12_POS                   _ADC_UL(12)
#define ADC2_EVFR_FR12_LEN                   _ADC_UL(1)

/* ADC2_EVFR_FR13 (rwh) */
#define ADC2_EVFR_FR13_POS                   _ADC_UL(13)
#define ADC2_EVFR_FR13_LEN                   _ADC_UL(1)

/* ADC2_EVFR_FR14 (rwh) */
#define ADC2_EVFR_FR14_POS                   _ADC_UL(14)
#define ADC2_EVFR_FR14_LEN                   _ADC_UL(1)

/* ADC2_EVFR_FR15 (rwh) */
#define ADC2_EVFR_FR15_POS                   _ADC_UL(15)
#define ADC2_EVFR_FR15_LEN                   _ADC_UL(1)

/* ADC2_EVFR_FS0 (rwh) */
#define ADC2_EVFR_FS0_POS                    _ADC_UL(16)
#define ADC2_EVFR_FS0_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FS1 (rwh) */
#define ADC2_EVFR_FS1_POS                    _ADC_UL(17)
#define ADC2_EVFR_FS1_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FS2 (rwh) */
#define ADC2_EVFR_FS2_POS                    _ADC_UL(18)
#define ADC2_EVFR_FS2_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FS3 (rwh) */
#define ADC2_EVFR_FS3_POS                    _ADC_UL(19)
#define ADC2_EVFR_FS3_LEN                    _ADC_UL(1)

/* ADC2_EVFR_FS4 (rwh) */
#define ADC2_EVFR_FS4_POS                    _ADC_UL(20)
#define ADC2_EVFR_FS4_LEN                    _ADC_UL(1)

/* ADC2_EVFR_GFS0 (rh) */
#define ADC2_EVFR_GFS0_POS                   _ADC_UL(24)
#define ADC2_EVFR_GFS0_LEN                   _ADC_UL(1)

/* ADC2_EVFR_GFS1 (rh) */
#define ADC2_EVFR_GFS1_POS                   _ADC_UL(25)
#define ADC2_EVFR_GFS1_LEN                   _ADC_UL(1)

/* ADC2_EVFR_GFS2 (rh) */
#define ADC2_EVFR_GFS2_POS                   _ADC_UL(26)
#define ADC2_EVFR_GFS2_LEN                   _ADC_UL(1)

/* ADC2_EVFR_GFS3 (rh) */
#define ADC2_EVFR_GFS3_POS                   _ADC_UL(27)
#define ADC2_EVFR_GFS3_LEN                   _ADC_UL(1)

/* ADC2_EVFR_GFS4 (rh) */
#define ADC2_EVFR_GFS4_POS                   _ADC_UL(28)
#define ADC2_EVFR_GFS4_LEN                   _ADC_UL(1)

/* ADC2_EVFCR_CFR0 (w) */
#define ADC2_EVFCR_CFR0_POS                  _ADC_UL(0)
#define ADC2_EVFCR_CFR0_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR1 (w) */
#define ADC2_EVFCR_CFR1_POS                  _ADC_UL(1)
#define ADC2_EVFCR_CFR1_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR2 (w) */
#define ADC2_EVFCR_CFR2_POS                  _ADC_UL(2)
#define ADC2_EVFCR_CFR2_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR3 (w) */
#define ADC2_EVFCR_CFR3_POS                  _ADC_UL(3)
#define ADC2_EVFCR_CFR3_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR4 (w) */
#define ADC2_EVFCR_CFR4_POS                  _ADC_UL(4)
#define ADC2_EVFCR_CFR4_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR5 (w) */
#define ADC2_EVFCR_CFR5_POS                  _ADC_UL(5)
#define ADC2_EVFCR_CFR5_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR6 (w) */
#define ADC2_EVFCR_CFR6_POS                  _ADC_UL(6)
#define ADC2_EVFCR_CFR6_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR7 (w) */
#define ADC2_EVFCR_CFR7_POS                  _ADC_UL(7)
#define ADC2_EVFCR_CFR7_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR8 (w) */
#define ADC2_EVFCR_CFR8_POS                  _ADC_UL(8)
#define ADC2_EVFCR_CFR8_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR9 (w) */
#define ADC2_EVFCR_CFR9_POS                  _ADC_UL(9)
#define ADC2_EVFCR_CFR9_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFR10 (w) */
#define ADC2_EVFCR_CFR10_POS                 _ADC_UL(10)
#define ADC2_EVFCR_CFR10_LEN                 _ADC_UL(1)

/* ADC2_EVFCR_CFR11 (w) */
#define ADC2_EVFCR_CFR11_POS                 _ADC_UL(11)
#define ADC2_EVFCR_CFR11_LEN                 _ADC_UL(1)

/* ADC2_EVFCR_CFR12 (w) */
#define ADC2_EVFCR_CFR12_POS                 _ADC_UL(12)
#define ADC2_EVFCR_CFR12_LEN                 _ADC_UL(1)

/* ADC2_EVFCR_CFR13 (w) */
#define ADC2_EVFCR_CFR13_POS                 _ADC_UL(13)
#define ADC2_EVFCR_CFR13_LEN                 _ADC_UL(1)

/* ADC2_EVFCR_CFR14 (w) */
#define ADC2_EVFCR_CFR14_POS                 _ADC_UL(14)
#define ADC2_EVFCR_CFR14_LEN                 _ADC_UL(1)

/* ADC2_EVFCR_CFR15 (w) */
#define ADC2_EVFCR_CFR15_POS                 _ADC_UL(15)
#define ADC2_EVFCR_CFR15_LEN                 _ADC_UL(1)

/* ADC2_EVFCR_CFS0 (w) */
#define ADC2_EVFCR_CFS0_POS                  _ADC_UL(16)
#define ADC2_EVFCR_CFS0_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFS1 (w) */
#define ADC2_EVFCR_CFS1_POS                  _ADC_UL(17)
#define ADC2_EVFCR_CFS1_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFS2 (w) */
#define ADC2_EVFCR_CFS2_POS                  _ADC_UL(18)
#define ADC2_EVFCR_CFS2_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFS3 (w) */
#define ADC2_EVFCR_CFS3_POS                  _ADC_UL(19)
#define ADC2_EVFCR_CFS3_LEN                  _ADC_UL(1)

/* ADC2_EVFCR_CFS4 (w) */
#define ADC2_EVFCR_CFS4_POS                  _ADC_UL(20)
#define ADC2_EVFCR_CFS4_LEN                  _ADC_UL(1)

/* ADC2_EVNPR_SENP0 (rw) */
#define ADC2_EVNPR_SENP0_POS                 _ADC_UL(0)
#define ADC2_EVNPR_SENP0_LEN                 _ADC_UL(3)

/* ADC2_EVNPR_SENP1 (rw) */
#define ADC2_EVNPR_SENP1_POS                 _ADC_UL(4)
#define ADC2_EVNPR_SENP1_LEN                 _ADC_UL(3)

/* ADC2_EVNPR_SENP2 (rw) */
#define ADC2_EVNPR_SENP2_POS                 _ADC_UL(8)
#define ADC2_EVNPR_SENP2_LEN                 _ADC_UL(3)

/* ADC2_EVNPR_SENP3 (rw) */
#define ADC2_EVNPR_SENP3_POS                 _ADC_UL(12)
#define ADC2_EVNPR_SENP3_LEN                 _ADC_UL(3)

/* ADC2_EVNPR_SENP4 (rw) */
#define ADC2_EVNPR_SENP4_POS                 _ADC_UL(16)
#define ADC2_EVNPR_SENP4_LEN                 _ADC_UL(3)

/* ADC2_QMR0_ENGT (rw) */
#define ADC2_QMR0_ENGT_POS                   _ADC_UL(0)
#define ADC2_QMR0_ENGT_LEN                   _ADC_UL(2)

/* ADC2_QMR0_ENTR (rw) */
#define ADC2_QMR0_ENTR_POS                   _ADC_UL(2)
#define ADC2_QMR0_ENTR_LEN                   _ADC_UL(1)

/* ADC2_QMR0_CLRV (w) */
#define ADC2_QMR0_CLRV_POS                   _ADC_UL(8)
#define ADC2_QMR0_CLRV_LEN                   _ADC_UL(1)

/* ADC2_QMR0_TREV (w) */
#define ADC2_QMR0_TREV_POS                   _ADC_UL(9)
#define ADC2_QMR0_TREV_LEN                   _ADC_UL(1)

/* ADC2_QMR0_FLUSH (w) */
#define ADC2_QMR0_FLUSH_POS                  _ADC_UL(10)
#define ADC2_QMR0_FLUSH_LEN                  _ADC_UL(1)

/* ADC2_QMR0_CEV (w) */
#define ADC2_QMR0_CEV_POS                    _ADC_UL(11)
#define ADC2_QMR0_CEV_LEN                    _ADC_UL(1)

/* ADC2_QSR0_FILL (rh) */
#define ADC2_QSR0_FILL_POS                   _ADC_UL(0)
#define ADC2_QSR0_FILL_LEN                   _ADC_UL(4)

/* ADC2_QSR0_EMPTY (rh) */
#define ADC2_QSR0_EMPTY_POS                  _ADC_UL(5)
#define ADC2_QSR0_EMPTY_LEN                  _ADC_UL(1)

/* ADC2_QSR0_REQGT (rh) */
#define ADC2_QSR0_REQGT_POS                  _ADC_UL(7)
#define ADC2_QSR0_REQGT_LEN                  _ADC_UL(1)

/* ADC2_QSR0_EV (rh) */
#define ADC2_QSR0_EV_POS                     _ADC_UL(8)
#define ADC2_QSR0_EV_LEN                     _ADC_UL(1)

/* ADC2_Q0R0_REQCHNR (rh) */
#define ADC2_Q0R0_REQCHNR_POS                _ADC_UL(0)
#define ADC2_Q0R0_REQCHNR_LEN                _ADC_UL(4)

/* ADC2_Q0R0_RF (rh) */
#define ADC2_Q0R0_RF_POS                     _ADC_UL(5)
#define ADC2_Q0R0_RF_LEN                     _ADC_UL(1)

/* ADC2_Q0R0_ENSI (rh) */
#define ADC2_Q0R0_ENSI_POS                   _ADC_UL(6)
#define ADC2_Q0R0_ENSI_LEN                   _ADC_UL(1)

/* ADC2_Q0R0_EXTR (rh) */
#define ADC2_Q0R0_EXTR_POS                   _ADC_UL(7)
#define ADC2_Q0R0_EXTR_LEN                   _ADC_UL(1)

/* ADC2_Q0R0_V (rh) */
#define ADC2_Q0R0_V_POS                      _ADC_UL(8)
#define ADC2_Q0R0_V_LEN                      _ADC_UL(1)

/* ADC2_QBUR0_REQCHNR (rh) */
#define ADC2_QBUR0_REQCHNR_POS               _ADC_UL(0)
#define ADC2_QBUR0_REQCHNR_LEN               _ADC_UL(4)

/* ADC2_QBUR0_RF (rh) */
#define ADC2_QBUR0_RF_POS                    _ADC_UL(5)
#define ADC2_QBUR0_RF_LEN                    _ADC_UL(1)

/* ADC2_QBUR0_ENSI (rh) */
#define ADC2_QBUR0_ENSI_POS                  _ADC_UL(6)
#define ADC2_QBUR0_ENSI_LEN                  _ADC_UL(1)

/* ADC2_QBUR0_EXTR (rh) */
#define ADC2_QBUR0_EXTR_POS                  _ADC_UL(7)
#define ADC2_QBUR0_EXTR_LEN                  _ADC_UL(1)

/* ADC2_QBUR0_V (rh) */
#define ADC2_QBUR0_V_POS                     _ADC_UL(8)
#define ADC2_QBUR0_V_LEN                     _ADC_UL(1)

/* ADC2_QINR0_REQCHNR (w) */
#define ADC2_QINR0_REQCHNR_POS               _ADC_UL(0)
#define ADC2_QINR0_REQCHNR_LEN               _ADC_UL(4)

/* ADC2_QINR0_RF (w) */
#define ADC2_QINR0_RF_POS                    _ADC_UL(5)
#define ADC2_QINR0_RF_LEN                    _ADC_UL(1)

/* ADC2_QINR0_ENSI (w) */
#define ADC2_QINR0_ENSI_POS                  _ADC_UL(6)
#define ADC2_QINR0_ENSI_LEN                  _ADC_UL(1)

/* ADC2_QINR0_EXTR (w) */
#define ADC2_QINR0_EXTR_POS                  _ADC_UL(7)
#define ADC2_QINR0_EXTR_LEN                  _ADC_UL(1)

/* ADC2_CRCR1_CH0 (rwh) */
#define ADC2_CRCR1_CH0_POS                   _ADC_UL(0)
#define ADC2_CRCR1_CH0_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH1 (rwh) */
#define ADC2_CRCR1_CH1_POS                   _ADC_UL(1)
#define ADC2_CRCR1_CH1_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH2 (rwh) */
#define ADC2_CRCR1_CH2_POS                   _ADC_UL(2)
#define ADC2_CRCR1_CH2_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH3 (rwh) */
#define ADC2_CRCR1_CH3_POS                   _ADC_UL(3)
#define ADC2_CRCR1_CH3_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH4 (rwh) */
#define ADC2_CRCR1_CH4_POS                   _ADC_UL(4)
#define ADC2_CRCR1_CH4_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH5 (rwh) */
#define ADC2_CRCR1_CH5_POS                   _ADC_UL(5)
#define ADC2_CRCR1_CH5_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH6 (rwh) */
#define ADC2_CRCR1_CH6_POS                   _ADC_UL(6)
#define ADC2_CRCR1_CH6_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH7 (rwh) */
#define ADC2_CRCR1_CH7_POS                   _ADC_UL(7)
#define ADC2_CRCR1_CH7_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH8 (rwh) */
#define ADC2_CRCR1_CH8_POS                   _ADC_UL(8)
#define ADC2_CRCR1_CH8_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH9 (rwh) */
#define ADC2_CRCR1_CH9_POS                   _ADC_UL(9)
#define ADC2_CRCR1_CH9_LEN                   _ADC_UL(1)

/* ADC2_CRCR1_CH10 (rwh) */
#define ADC2_CRCR1_CH10_POS                  _ADC_UL(10)
#define ADC2_CRCR1_CH10_LEN                  _ADC_UL(1)

/* ADC2_CRCR1_CH11 (rwh) */
#define ADC2_CRCR1_CH11_POS                  _ADC_UL(11)
#define ADC2_CRCR1_CH11_LEN                  _ADC_UL(1)

/* ADC2_CRCR1_CH12 (rwh) */
#define ADC2_CRCR1_CH12_POS                  _ADC_UL(12)
#define ADC2_CRCR1_CH12_LEN                  _ADC_UL(1)

/* ADC2_CRCR1_CH13 (rwh) */
#define ADC2_CRCR1_CH13_POS                  _ADC_UL(13)
#define ADC2_CRCR1_CH13_LEN                  _ADC_UL(1)

/* ADC2_CRCR1_CH14 (rwh) */
#define ADC2_CRCR1_CH14_POS                  _ADC_UL(14)
#define ADC2_CRCR1_CH14_LEN                  _ADC_UL(1)

/* ADC2_CRCR1_CH15 (rwh) */
#define ADC2_CRCR1_CH15_POS                  _ADC_UL(15)
#define ADC2_CRCR1_CH15_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP0 (rwh) */
#define ADC2_CRPR1_CHP0_POS                  _ADC_UL(0)
#define ADC2_CRPR1_CHP0_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP1 (rwh) */
#define ADC2_CRPR1_CHP1_POS                  _ADC_UL(1)
#define ADC2_CRPR1_CHP1_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP2 (rwh) */
#define ADC2_CRPR1_CHP2_POS                  _ADC_UL(2)
#define ADC2_CRPR1_CHP2_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP3 (rwh) */
#define ADC2_CRPR1_CHP3_POS                  _ADC_UL(3)
#define ADC2_CRPR1_CHP3_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP4 (rwh) */
#define ADC2_CRPR1_CHP4_POS                  _ADC_UL(4)
#define ADC2_CRPR1_CHP4_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP5 (rwh) */
#define ADC2_CRPR1_CHP5_POS                  _ADC_UL(5)
#define ADC2_CRPR1_CHP5_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP6 (rwh) */
#define ADC2_CRPR1_CHP6_POS                  _ADC_UL(6)
#define ADC2_CRPR1_CHP6_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP7 (rwh) */
#define ADC2_CRPR1_CHP7_POS                  _ADC_UL(7)
#define ADC2_CRPR1_CHP7_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP8 (rwh) */
#define ADC2_CRPR1_CHP8_POS                  _ADC_UL(8)
#define ADC2_CRPR1_CHP8_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP9 (rwh) */
#define ADC2_CRPR1_CHP9_POS                  _ADC_UL(9)
#define ADC2_CRPR1_CHP9_LEN                  _ADC_UL(1)

/* ADC2_CRPR1_CHP10 (rwh) */
#define ADC2_CRPR1_CHP10_POS                 _ADC_UL(10)
#define ADC2_CRPR1_CHP10_LEN                 _ADC_UL(1)

/* ADC2_CRPR1_CHP11 (rwh) */
#define ADC2_CRPR1_CHP11_POS                 _ADC_UL(11)
#define ADC2_CRPR1_CHP11_LEN                 _ADC_UL(1)

/* ADC2_CRPR1_CHP12 (rwh) */
#define ADC2_CRPR1_CHP12_POS                 _ADC_UL(12)
#define ADC2_CRPR1_CHP12_LEN                 _ADC_UL(1)

/* ADC2_CRPR1_CHP13 (rwh) */
#define ADC2_CRPR1_CHP13_POS                 _ADC_UL(13)
#define ADC2_CRPR1_CHP13_LEN                 _ADC_UL(1)

/* ADC2_CRPR1_CHP14 (rwh) */
#define ADC2_CRPR1_CHP14_POS                 _ADC_UL(14)
#define ADC2_CRPR1_CHP14_LEN                 _ADC_UL(1)

/* ADC2_CRPR1_CHP15 (rwh) */
#define ADC2_CRPR1_CHP15_POS                 _ADC_UL(15)
#define ADC2_CRPR1_CHP15_LEN                 _ADC_UL(1)

/* ADC2_CRMR1_ENGT (rw) */
#define ADC2_CRMR1_ENGT_POS                  _ADC_UL(0)
#define ADC2_CRMR1_ENGT_LEN                  _ADC_UL(2)

/* ADC2_CRMR1_ENTR (rw) */
#define ADC2_CRMR1_ENTR_POS                  _ADC_UL(2)
#define ADC2_CRMR1_ENTR_LEN                  _ADC_UL(1)

/* ADC2_CRMR1_ENSI (rw) */
#define ADC2_CRMR1_ENSI_POS                  _ADC_UL(3)
#define ADC2_CRMR1_ENSI_LEN                  _ADC_UL(1)

/* ADC2_CRMR1_SCAN (rw) */
#define ADC2_CRMR1_SCAN_POS                  _ADC_UL(4)
#define ADC2_CRMR1_SCAN_LEN                  _ADC_UL(1)

/* ADC2_CRMR1_LDM (rw) */
#define ADC2_CRMR1_LDM_POS                   _ADC_UL(5)
#define ADC2_CRMR1_LDM_LEN                   _ADC_UL(1)

/* ADC2_CRMR1_REQGT (rh) */
#define ADC2_CRMR1_REQGT_POS                 _ADC_UL(7)
#define ADC2_CRMR1_REQGT_LEN                 _ADC_UL(1)

/* ADC2_CRMR1_CLRPND (w) */
#define ADC2_CRMR1_CLRPND_POS                _ADC_UL(8)
#define ADC2_CRMR1_CLRPND_LEN                _ADC_UL(1)

/* ADC2_CRMR1_LDEV (w) */
#define ADC2_CRMR1_LDEV_POS                  _ADC_UL(9)
#define ADC2_CRMR1_LDEV_LEN                  _ADC_UL(1)

/* ADC2_QMR2_ENGT (rw) */
#define ADC2_QMR2_ENGT_POS                   _ADC_UL(0)
#define ADC2_QMR2_ENGT_LEN                   _ADC_UL(2)

/* ADC2_QMR2_ENTR (rw) */
#define ADC2_QMR2_ENTR_POS                   _ADC_UL(2)
#define ADC2_QMR2_ENTR_LEN                   _ADC_UL(1)

/* ADC2_QMR2_CLRV (w) */
#define ADC2_QMR2_CLRV_POS                   _ADC_UL(8)
#define ADC2_QMR2_CLRV_LEN                   _ADC_UL(1)

/* ADC2_QMR2_TREV (w) */
#define ADC2_QMR2_TREV_POS                   _ADC_UL(9)
#define ADC2_QMR2_TREV_LEN                   _ADC_UL(1)

/* ADC2_QMR2_FLUSH (w) */
#define ADC2_QMR2_FLUSH_POS                  _ADC_UL(10)
#define ADC2_QMR2_FLUSH_LEN                  _ADC_UL(1)

/* ADC2_QMR2_CEV (w) */
#define ADC2_QMR2_CEV_POS                    _ADC_UL(11)
#define ADC2_QMR2_CEV_LEN                    _ADC_UL(1)

/* ADC2_QSR2_FILL (rh) */
#define ADC2_QSR2_FILL_POS                   _ADC_UL(0)
#define ADC2_QSR2_FILL_LEN                   _ADC_UL(4)

/* ADC2_QSR2_EMPTY (rh) */
#define ADC2_QSR2_EMPTY_POS                  _ADC_UL(5)
#define ADC2_QSR2_EMPTY_LEN                  _ADC_UL(1)

/* ADC2_QSR2_REQGT (rh) */
#define ADC2_QSR2_REQGT_POS                  _ADC_UL(7)
#define ADC2_QSR2_REQGT_LEN                  _ADC_UL(1)

/* ADC2_QSR2_EV (rh) */
#define ADC2_QSR2_EV_POS                     _ADC_UL(8)
#define ADC2_QSR2_EV_LEN                     _ADC_UL(1)

/* ADC2_Q0R2_REQCHNR (rh) */
#define ADC2_Q0R2_REQCHNR_POS                _ADC_UL(0)
#define ADC2_Q0R2_REQCHNR_LEN                _ADC_UL(4)

/* ADC2_Q0R2_RF (rh) */
#define ADC2_Q0R2_RF_POS                     _ADC_UL(5)
#define ADC2_Q0R2_RF_LEN                     _ADC_UL(1)

/* ADC2_Q0R2_ENSI (rh) */
#define ADC2_Q0R2_ENSI_POS                   _ADC_UL(6)
#define ADC2_Q0R2_ENSI_LEN                   _ADC_UL(1)

/* ADC2_Q0R2_EXTR (rh) */
#define ADC2_Q0R2_EXTR_POS                   _ADC_UL(7)
#define ADC2_Q0R2_EXTR_LEN                   _ADC_UL(1)

/* ADC2_Q0R2_V (rh) */
#define ADC2_Q0R2_V_POS                      _ADC_UL(8)
#define ADC2_Q0R2_V_LEN                      _ADC_UL(1)

/* ADC2_QBUR2_REQCHNR (rh) */
#define ADC2_QBUR2_REQCHNR_POS               _ADC_UL(0)
#define ADC2_QBUR2_REQCHNR_LEN               _ADC_UL(4)

/* ADC2_QBUR2_RF (rh) */
#define ADC2_QBUR2_RF_POS                    _ADC_UL(5)
#define ADC2_QBUR2_RF_LEN                    _ADC_UL(1)

/* ADC2_QBUR2_ENSI (rh) */
#define ADC2_QBUR2_ENSI_POS                  _ADC_UL(6)
#define ADC2_QBUR2_ENSI_LEN                  _ADC_UL(1)

/* ADC2_QBUR2_EXTR (rh) */
#define ADC2_QBUR2_EXTR_POS                  _ADC_UL(7)
#define ADC2_QBUR2_EXTR_LEN                  _ADC_UL(1)

/* ADC2_QBUR2_V (rh) */
#define ADC2_QBUR2_V_POS                     _ADC_UL(8)
#define ADC2_QBUR2_V_LEN                     _ADC_UL(1)

/* ADC2_QINR2_REQCHNR (w) */
#define ADC2_QINR2_REQCHNR_POS               _ADC_UL(0)
#define ADC2_QINR2_REQCHNR_LEN               _ADC_UL(4)

/* ADC2_QINR2_RF (w) */
#define ADC2_QINR2_RF_POS                    _ADC_UL(5)
#define ADC2_QINR2_RF_LEN                    _ADC_UL(1)

/* ADC2_QINR2_ENSI (w) */
#define ADC2_QINR2_ENSI_POS                  _ADC_UL(6)
#define ADC2_QINR2_ENSI_LEN                  _ADC_UL(1)

/* ADC2_QINR2_EXTR (w) */
#define ADC2_QINR2_EXTR_POS                  _ADC_UL(7)
#define ADC2_QINR2_EXTR_LEN                  _ADC_UL(1)

/* ADC2_CRCR3_CH0 (rwh) */
#define ADC2_CRCR3_CH0_POS                   _ADC_UL(0)
#define ADC2_CRCR3_CH0_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH1 (rwh) */
#define ADC2_CRCR3_CH1_POS                   _ADC_UL(1)
#define ADC2_CRCR3_CH1_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH2 (rwh) */
#define ADC2_CRCR3_CH2_POS                   _ADC_UL(2)
#define ADC2_CRCR3_CH2_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH3 (rwh) */
#define ADC2_CRCR3_CH3_POS                   _ADC_UL(3)
#define ADC2_CRCR3_CH3_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH4 (rwh) */
#define ADC2_CRCR3_CH4_POS                   _ADC_UL(4)
#define ADC2_CRCR3_CH4_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH5 (rwh) */
#define ADC2_CRCR3_CH5_POS                   _ADC_UL(5)
#define ADC2_CRCR3_CH5_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH6 (rwh) */
#define ADC2_CRCR3_CH6_POS                   _ADC_UL(6)
#define ADC2_CRCR3_CH6_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH7 (rwh) */
#define ADC2_CRCR3_CH7_POS                   _ADC_UL(7)
#define ADC2_CRCR3_CH7_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH8 (rwh) */
#define ADC2_CRCR3_CH8_POS                   _ADC_UL(8)
#define ADC2_CRCR3_CH8_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH9 (rwh) */
#define ADC2_CRCR3_CH9_POS                   _ADC_UL(9)
#define ADC2_CRCR3_CH9_LEN                   _ADC_UL(1)

/* ADC2_CRCR3_CH10 (rwh) */
#define ADC2_CRCR3_CH10_POS                  _ADC_UL(10)
#define ADC2_CRCR3_CH10_LEN                  _ADC_UL(1)

/* ADC2_CRCR3_CH11 (rwh) */
#define ADC2_CRCR3_CH11_POS                  _ADC_UL(11)
#define ADC2_CRCR3_CH11_LEN                  _ADC_UL(1)

/* ADC2_CRCR3_CH12 (rwh) */
#define ADC2_CRCR3_CH12_POS                  _ADC_UL(12)
#define ADC2_CRCR3_CH12_LEN                  _ADC_UL(1)

/* ADC2_CRCR3_CH13 (rwh) */
#define ADC2_CRCR3_CH13_POS                  _ADC_UL(13)
#define ADC2_CRCR3_CH13_LEN                  _ADC_UL(1)

/* ADC2_CRCR3_CH14 (rwh) */
#define ADC2_CRCR3_CH14_POS                  _ADC_UL(14)
#define ADC2_CRCR3_CH14_LEN                  _ADC_UL(1)

/* ADC2_CRCR3_CH15 (rwh) */
#define ADC2_CRCR3_CH15_POS                  _ADC_UL(15)
#define ADC2_CRCR3_CH15_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP0 (rwh) */
#define ADC2_CRPR3_CHP0_POS                  _ADC_UL(0)
#define ADC2_CRPR3_CHP0_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP1 (rwh) */
#define ADC2_CRPR3_CHP1_POS                  _ADC_UL(1)
#define ADC2_CRPR3_CHP1_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP2 (rwh) */
#define ADC2_CRPR3_CHP2_POS                  _ADC_UL(2)
#define ADC2_CRPR3_CHP2_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP3 (rwh) */
#define ADC2_CRPR3_CHP3_POS                  _ADC_UL(3)
#define ADC2_CRPR3_CHP3_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP4 (rwh) */
#define ADC2_CRPR3_CHP4_POS                  _ADC_UL(4)
#define ADC2_CRPR3_CHP4_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP5 (rwh) */
#define ADC2_CRPR3_CHP5_POS                  _ADC_UL(5)
#define ADC2_CRPR3_CHP5_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP6 (rwh) */
#define ADC2_CRPR3_CHP6_POS                  _ADC_UL(6)
#define ADC2_CRPR3_CHP6_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP7 (rwh) */
#define ADC2_CRPR3_CHP7_POS                  _ADC_UL(7)
#define ADC2_CRPR3_CHP7_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP8 (rwh) */
#define ADC2_CRPR3_CHP8_POS                  _ADC_UL(8)
#define ADC2_CRPR3_CHP8_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP9 (rwh) */
#define ADC2_CRPR3_CHP9_POS                  _ADC_UL(9)
#define ADC2_CRPR3_CHP9_LEN                  _ADC_UL(1)

/* ADC2_CRPR3_CHP10 (rwh) */
#define ADC2_CRPR3_CHP10_POS                 _ADC_UL(10)
#define ADC2_CRPR3_CHP10_LEN                 _ADC_UL(1)

/* ADC2_CRPR3_CHP11 (rwh) */
#define ADC2_CRPR3_CHP11_POS                 _ADC_UL(11)
#define ADC2_CRPR3_CHP11_LEN                 _ADC_UL(1)

/* ADC2_CRPR3_CHP12 (rwh) */
#define ADC2_CRPR3_CHP12_POS                 _ADC_UL(12)
#define ADC2_CRPR3_CHP12_LEN                 _ADC_UL(1)

/* ADC2_CRPR3_CHP13 (rwh) */
#define ADC2_CRPR3_CHP13_POS                 _ADC_UL(13)
#define ADC2_CRPR3_CHP13_LEN                 _ADC_UL(1)

/* ADC2_CRPR3_CHP14 (rwh) */
#define ADC2_CRPR3_CHP14_POS                 _ADC_UL(14)
#define ADC2_CRPR3_CHP14_LEN                 _ADC_UL(1)

/* ADC2_CRPR3_CHP15 (rwh) */
#define ADC2_CRPR3_CHP15_POS                 _ADC_UL(15)
#define ADC2_CRPR3_CHP15_LEN                 _ADC_UL(1)

/* ADC2_CRMR3_ENGT (rw) */
#define ADC2_CRMR3_ENGT_POS                  _ADC_UL(0)
#define ADC2_CRMR3_ENGT_LEN                  _ADC_UL(2)

/* ADC2_CRMR3_ENTR (rw) */
#define ADC2_CRMR3_ENTR_POS                  _ADC_UL(2)
#define ADC2_CRMR3_ENTR_LEN                  _ADC_UL(1)

/* ADC2_CRMR3_ENSI (rw) */
#define ADC2_CRMR3_ENSI_POS                  _ADC_UL(3)
#define ADC2_CRMR3_ENSI_LEN                  _ADC_UL(1)

/* ADC2_CRMR3_SCAN (rw) */
#define ADC2_CRMR3_SCAN_POS                  _ADC_UL(4)
#define ADC2_CRMR3_SCAN_LEN                  _ADC_UL(1)

/* ADC2_CRMR3_LDM (rw) */
#define ADC2_CRMR3_LDM_POS                   _ADC_UL(5)
#define ADC2_CRMR3_LDM_LEN                   _ADC_UL(1)

/* ADC2_CRMR3_REQGT (rh) */
#define ADC2_CRMR3_REQGT_POS                 _ADC_UL(7)
#define ADC2_CRMR3_REQGT_LEN                 _ADC_UL(1)

/* ADC2_CRMR3_CLRPND (w) */
#define ADC2_CRMR3_CLRPND_POS                _ADC_UL(8)
#define ADC2_CRMR3_CLRPND_LEN                _ADC_UL(1)

/* ADC2_CRMR3_LDEV (w) */
#define ADC2_CRMR3_LDEV_POS                  _ADC_UL(9)
#define ADC2_CRMR3_LDEV_LEN                  _ADC_UL(1)

/* ADC2_QMR4_ENGT (rw) */
#define ADC2_QMR4_ENGT_POS                   _ADC_UL(0)
#define ADC2_QMR4_ENGT_LEN                   _ADC_UL(2)

/* ADC2_QMR4_ENTR (rw) */
#define ADC2_QMR4_ENTR_POS                   _ADC_UL(2)
#define ADC2_QMR4_ENTR_LEN                   _ADC_UL(1)

/* ADC2_QMR4_CLRV (w) */
#define ADC2_QMR4_CLRV_POS                   _ADC_UL(8)
#define ADC2_QMR4_CLRV_LEN                   _ADC_UL(1)

/* ADC2_QMR4_TREV (w) */
#define ADC2_QMR4_TREV_POS                   _ADC_UL(9)
#define ADC2_QMR4_TREV_LEN                   _ADC_UL(1)

/* ADC2_QMR4_FLUSH (w) */
#define ADC2_QMR4_FLUSH_POS                  _ADC_UL(10)
#define ADC2_QMR4_FLUSH_LEN                  _ADC_UL(1)

/* ADC2_QMR4_CEV (w) */
#define ADC2_QMR4_CEV_POS                    _ADC_UL(11)
#define ADC2_QMR4_CEV_LEN                    _ADC_UL(1)

/* ADC2_QSR4_FILL (rh) */
#define ADC2_QSR4_FILL_POS                   _ADC_UL(0)
#define ADC2_QSR4_FILL_LEN                   _ADC_UL(4)

/* ADC2_QSR4_EMPTY (rh) */
#define ADC2_QSR4_EMPTY_POS                  _ADC_UL(5)
#define ADC2_QSR4_EMPTY_LEN                  _ADC_UL(1)

/* ADC2_QSR4_REQGT (rh) */
#define ADC2_QSR4_REQGT_POS                  _ADC_UL(7)
#define ADC2_QSR4_REQGT_LEN                  _ADC_UL(1)

/* ADC2_QSR4_EV (rh) */
#define ADC2_QSR4_EV_POS                     _ADC_UL(8)
#define ADC2_QSR4_EV_LEN                     _ADC_UL(1)

/* ADC2_Q0R4_REQCHNR (rh) */
#define ADC2_Q0R4_REQCHNR_POS                _ADC_UL(0)
#define ADC2_Q0R4_REQCHNR_LEN                _ADC_UL(4)

/* ADC2_Q0R4_RF (rh) */
#define ADC2_Q0R4_RF_POS                     _ADC_UL(5)
#define ADC2_Q0R4_RF_LEN                     _ADC_UL(1)

/* ADC2_Q0R4_ENSI (rh) */
#define ADC2_Q0R4_ENSI_POS                   _ADC_UL(6)
#define ADC2_Q0R4_ENSI_LEN                   _ADC_UL(1)

/* ADC2_Q0R4_EXTR (rh) */
#define ADC2_Q0R4_EXTR_POS                   _ADC_UL(7)
#define ADC2_Q0R4_EXTR_LEN                   _ADC_UL(1)

/* ADC2_Q0R4_V (rh) */
#define ADC2_Q0R4_V_POS                      _ADC_UL(8)
#define ADC2_Q0R4_V_LEN                      _ADC_UL(1)

/* ADC2_QBUR4_REQCHNR (rh) */
#define ADC2_QBUR4_REQCHNR_POS               _ADC_UL(0)
#define ADC2_QBUR4_REQCHNR_LEN               _ADC_UL(4)

/* ADC2_QBUR4_RF (rh) */
#define ADC2_QBUR4_RF_POS                    _ADC_UL(5)
#define ADC2_QBUR4_RF_LEN                    _ADC_UL(1)

/* ADC2_QBUR4_ENSI (rh) */
#define ADC2_QBUR4_ENSI_POS                  _ADC_UL(6)
#define ADC2_QBUR4_ENSI_LEN                  _ADC_UL(1)

/* ADC2_QBUR4_EXTR (rh) */
#define ADC2_QBUR4_EXTR_POS                  _ADC_UL(7)
#define ADC2_QBUR4_EXTR_LEN                  _ADC_UL(1)

/* ADC2_QBUR4_V (rh) */
#define ADC2_QBUR4_V_POS                     _ADC_UL(8)
#define ADC2_QBUR4_V_LEN                     _ADC_UL(1)

/* ADC2_QINR4_REQCHNR (w) */
#define ADC2_QINR4_REQCHNR_POS               _ADC_UL(0)
#define ADC2_QINR4_REQCHNR_LEN               _ADC_UL(4)

/* ADC2_QINR4_RF (w) */
#define ADC2_QINR4_RF_POS                    _ADC_UL(5)
#define ADC2_QINR4_RF_LEN                    _ADC_UL(1)

/* ADC2_QINR4_ENSI (w) */
#define ADC2_QINR4_ENSI_POS                  _ADC_UL(6)
#define ADC2_QINR4_ENSI_LEN                  _ADC_UL(1)

/* ADC2_QINR4_EXTR (w) */
#define ADC2_QINR4_EXTR_POS                  _ADC_UL(7)
#define ADC2_QINR4_EXTR_LEN                  _ADC_UL(1)

/* ADC2_LCBR_BOUNDARY (rw) */
#define ADC2_LCBR_BOUNDARY_POS               _ADC_UL(2)
#define ADC2_LCBR_BOUNDARY_LEN               _ADC_UL(10)

/* ADC2_CHCTR_BNDASEL (rw) */
#define ADC2_CHCTR_BNDASEL_POS               _ADC_UL(0)
#define ADC2_CHCTR_BNDASEL_LEN               _ADC_UL(2)

/* ADC2_CHCTR_BNDBSEL (rw) */
#define ADC2_CHCTR_BNDBSEL_POS               _ADC_UL(2)
#define ADC2_CHCTR_BNDBSEL_LEN               _ADC_UL(2)

/* ADC2_CHCTR_LCC (rw) */
#define ADC2_CHCTR_LCC_POS                   _ADC_UL(4)
#define ADC2_CHCTR_LCC_LEN                   _ADC_UL(3)

/* ADC2_CHCTR_SYNC (rw) */
#define ADC2_CHCTR_SYNC_POS                  _ADC_UL(7)
#define ADC2_CHCTR_SYNC_LEN                  _ADC_UL(1)

/* ADC2_CHCTR_REFSEL (rw) */
#define ADC2_CHCTR_REFSEL_POS                _ADC_UL(8)
#define ADC2_CHCTR_REFSEL_LEN                _ADC_UL(2)

/* ADC2_CHCTR_ICLSEL (rw) */
#define ADC2_CHCTR_ICLSEL_POS                _ADC_UL(10)
#define ADC2_CHCTR_ICLSEL_LEN                _ADC_UL(2)

/* ADC2_CHCTR_RESRSEL (rw) */
#define ADC2_CHCTR_RESRSEL_POS               _ADC_UL(12)
#define ADC2_CHCTR_RESRSEL_LEN               _ADC_UL(4)

/* ADC2_RCR_DRCTR (rw) */
#define ADC2_RCR_DRCTR_POS                   _ADC_UL(0)
#define ADC2_RCR_DRCTR_LEN                   _ADC_UL(2)

/* ADC2_RCR_ENRI (rw) */
#define ADC2_RCR_ENRI_POS                    _ADC_UL(4)
#define ADC2_RCR_ENRI_LEN                    _ADC_UL(1)

/* ADC2_RCR_FEN (rw) */
#define ADC2_RCR_FEN_POS                     _ADC_UL(5)
#define ADC2_RCR_FEN_LEN                     _ADC_UL(1)

/* ADC2_RCR_WFR (rw) */
#define ADC2_RCR_WFR_POS                     _ADC_UL(6)
#define ADC2_RCR_WFR_LEN                     _ADC_UL(1)

/* ADC2_RESR_RESULT (rh) */
#define ADC2_RESR_RESULT_POS                 _ADC_UL(0)
#define ADC2_RESR_RESULT_LEN                 _ADC_UL(14)

/* ADC2_RESR_EMUX (rh) */
#define ADC2_RESR_EMUX_POS                   _ADC_UL(16)
#define ADC2_RESR_EMUX_LEN                   _ADC_UL(3)

/* ADC2_RESR_CRS (rh) */
#define ADC2_RESR_CRS_POS                    _ADC_UL(20)
#define ADC2_RESR_CRS_LEN                    _ADC_UL(3)

/* ADC2_RESR_CHNR (rh) */
#define ADC2_RESR_CHNR_POS                   _ADC_UL(24)
#define ADC2_RESR_CHNR_LEN                   _ADC_UL(4)

/* ADC2_RESR_DRC (rh) */
#define ADC2_RESR_DRC_POS                    _ADC_UL(29)
#define ADC2_RESR_DRC_LEN                    _ADC_UL(2)

/* ADC2_RESR_VF (rh) */
#define ADC2_RESR_VF_POS                     _ADC_UL(31)
#define ADC2_RESR_VF_LEN                     _ADC_UL(1)

/* ADC2_RESRD_RESULT (rh) */
#define ADC2_RESRD_RESULT_POS                _ADC_UL(0)
#define ADC2_RESRD_RESULT_LEN                _ADC_UL(14)

/* ADC2_RESRD_EMUX (rh) */
#define ADC2_RESRD_EMUX_POS                  _ADC_UL(16)
#define ADC2_RESRD_EMUX_LEN                  _ADC_UL(3)

/* ADC2_RESRD_CRS (rh) */
#define ADC2_RESRD_CRS_POS                   _ADC_UL(20)
#define ADC2_RESRD_CRS_LEN                   _ADC_UL(3)

/* ADC2_RESRD_CHNR (rh) */
#define ADC2_RESRD_CHNR_POS                  _ADC_UL(24)
#define ADC2_RESRD_CHNR_LEN                  _ADC_UL(4)

/* ADC2_RESRD_DRC (rh) */
#define ADC2_RESRD_DRC_POS                   _ADC_UL(29)
#define ADC2_RESRD_DRC_LEN                   _ADC_UL(2)

/* ADC2_RESRD_VF (rh) */
#define ADC2_RESRD_VF_POS                    _ADC_UL(31)
#define ADC2_RESRD_VF_LEN                    _ADC_UL(1)

/* ADC2_VFR_VF0 (rwh) */
#define ADC2_VFR_VF0_POS                     _ADC_UL(0)
#define ADC2_VFR_VF0_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF1 (rwh) */
#define ADC2_VFR_VF1_POS                     _ADC_UL(1)
#define ADC2_VFR_VF1_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF2 (rwh) */
#define ADC2_VFR_VF2_POS                     _ADC_UL(2)
#define ADC2_VFR_VF2_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF3 (rwh) */
#define ADC2_VFR_VF3_POS                     _ADC_UL(3)
#define ADC2_VFR_VF3_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF4 (rwh) */
#define ADC2_VFR_VF4_POS                     _ADC_UL(4)
#define ADC2_VFR_VF4_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF5 (rwh) */
#define ADC2_VFR_VF5_POS                     _ADC_UL(5)
#define ADC2_VFR_VF5_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF6 (rwh) */
#define ADC2_VFR_VF6_POS                     _ADC_UL(6)
#define ADC2_VFR_VF6_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF7 (rwh) */
#define ADC2_VFR_VF7_POS                     _ADC_UL(7)
#define ADC2_VFR_VF7_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF8 (rwh) */
#define ADC2_VFR_VF8_POS                     _ADC_UL(8)
#define ADC2_VFR_VF8_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF9 (rwh) */
#define ADC2_VFR_VF9_POS                     _ADC_UL(9)
#define ADC2_VFR_VF9_LEN                     _ADC_UL(1)

/* ADC2_VFR_VF10 (rwh) */
#define ADC2_VFR_VF10_POS                    _ADC_UL(10)
#define ADC2_VFR_VF10_LEN                    _ADC_UL(1)

/* ADC2_VFR_VF11 (rwh) */
#define ADC2_VFR_VF11_POS                    _ADC_UL(11)
#define ADC2_VFR_VF11_LEN                    _ADC_UL(1)

/* ADC2_VFR_VF12 (rwh) */
#define ADC2_VFR_VF12_POS                    _ADC_UL(12)
#define ADC2_VFR_VF12_LEN                    _ADC_UL(1)

/* ADC2_VFR_VF13 (rwh) */
#define ADC2_VFR_VF13_POS                    _ADC_UL(13)
#define ADC2_VFR_VF13_LEN                    _ADC_UL(1)

/* ADC2_VFR_VF14 (rwh) */
#define ADC2_VFR_VF14_POS                    _ADC_UL(14)
#define ADC2_VFR_VF14_LEN                    _ADC_UL(1)

/* ADC2_VFR_VF15 (rwh) */
#define ADC2_VFR_VF15_POS                    _ADC_UL(15)
#define ADC2_VFR_VF15_LEN                    _ADC_UL(1)

/* ADC2_INTR_SISR0 (w) */
#define ADC2_INTR_SISR0_POS                  _ADC_UL(0)
#define ADC2_INTR_SISR0_LEN                  _ADC_UL(1)

/* ADC2_INTR_SISR1 (w) */
#define ADC2_INTR_SISR1_POS                  _ADC_UL(1)
#define ADC2_INTR_SISR1_LEN                  _ADC_UL(1)

/* ADC2_INTR_SISR2 (w) */
#define ADC2_INTR_SISR2_POS                  _ADC_UL(2)
#define ADC2_INTR_SISR2_LEN                  _ADC_UL(1)

/* ADC2_INTR_SISR3 (w) */
#define ADC2_INTR_SISR3_POS                  _ADC_UL(3)
#define ADC2_INTR_SISR3_LEN                  _ADC_UL(1)

/* ADC2_INTR_SISR4 (w) */
#define ADC2_INTR_SISR4_POS                  _ADC_UL(4)
#define ADC2_INTR_SISR4_LEN                  _ADC_UL(1)

/* ADC2_INTR_SISR5 (w) */
#define ADC2_INTR_SISR5_POS                  _ADC_UL(5)
#define ADC2_INTR_SISR5_LEN                  _ADC_UL(1)

/* ADC2_INTR_SISR6 (w) */
#define ADC2_INTR_SISR6_POS                  _ADC_UL(6)
#define ADC2_INTR_SISR6_LEN                  _ADC_UL(1)

/* ADC2_INTR_SISR7 (w) */
#define ADC2_INTR_SISR7_POS                  _ADC_UL(7)
#define ADC2_INTR_SISR7_LEN                  _ADC_UL(1)

/* ADC2_RNPR0_RENP0 (rw) */
#define ADC2_RNPR0_RENP0_POS                 _ADC_UL(0)
#define ADC2_RNPR0_RENP0_LEN                 _ADC_UL(3)

/* ADC2_RNPR0_RENP1 (rw) */
#define ADC2_RNPR0_RENP1_POS                 _ADC_UL(4)
#define ADC2_RNPR0_RENP1_LEN                 _ADC_UL(3)

/* ADC2_RNPR0_RENP2 (rw) */
#define ADC2_RNPR0_RENP2_POS                 _ADC_UL(8)
#define ADC2_RNPR0_RENP2_LEN                 _ADC_UL(3)

/* ADC2_RNPR0_RENP3 (rw) */
#define ADC2_RNPR0_RENP3_POS                 _ADC_UL(12)
#define ADC2_RNPR0_RENP3_LEN                 _ADC_UL(3)

/* ADC2_RNPR0_RENP4 (rw) */
#define ADC2_RNPR0_RENP4_POS                 _ADC_UL(16)
#define ADC2_RNPR0_RENP4_LEN                 _ADC_UL(3)

/* ADC2_RNPR0_RENP5 (rw) */
#define ADC2_RNPR0_RENP5_POS                 _ADC_UL(20)
#define ADC2_RNPR0_RENP5_LEN                 _ADC_UL(3)

/* ADC2_RNPR0_RENP6 (rw) */
#define ADC2_RNPR0_RENP6_POS                 _ADC_UL(24)
#define ADC2_RNPR0_RENP6_LEN                 _ADC_UL(3)

/* ADC2_RNPR0_RENP7 (rw) */
#define ADC2_RNPR0_RENP7_POS                 _ADC_UL(28)
#define ADC2_RNPR0_RENP7_LEN                 _ADC_UL(3)

/* ADC2_RNPR8_RENP8 (rw) */
#define ADC2_RNPR8_RENP8_POS                 _ADC_UL(0)
#define ADC2_RNPR8_RENP8_LEN                 _ADC_UL(3)

/* ADC2_RNPR8_RENP9 (rw) */
#define ADC2_RNPR8_RENP9_POS                 _ADC_UL(4)
#define ADC2_RNPR8_RENP9_LEN                 _ADC_UL(3)

/* ADC2_RNPR8_RENP10 (rw) */
#define ADC2_RNPR8_RENP10_POS                _ADC_UL(8)
#define ADC2_RNPR8_RENP10_LEN                _ADC_UL(3)

/* ADC2_RNPR8_RENP11 (rw) */
#define ADC2_RNPR8_RENP11_POS                _ADC_UL(12)
#define ADC2_RNPR8_RENP11_LEN                _ADC_UL(3)

/* ADC2_RNPR8_RENP12 (rw) */
#define ADC2_RNPR8_RENP12_POS                _ADC_UL(16)
#define ADC2_RNPR8_RENP12_LEN                _ADC_UL(3)

/* ADC2_RNPR8_RENP13 (rw) */
#define ADC2_RNPR8_RENP13_POS                _ADC_UL(20)
#define ADC2_RNPR8_RENP13_LEN                _ADC_UL(3)

/* ADC2_RNPR8_RENP14 (rw) */
#define ADC2_RNPR8_RENP14_POS                _ADC_UL(24)
#define ADC2_RNPR8_RENP14_LEN                _ADC_UL(3)

/* ADC2_RNPR8_RENP15 (rw) */
#define ADC2_RNPR8_RENP15_POS                _ADC_UL(28)
#define ADC2_RNPR8_RENP15_LEN                _ADC_UL(3)

/* ADC2_ALR0_ALIAS0 (rw) */
#define ADC2_ALR0_ALIAS0_POS                 _ADC_UL(0)
#define ADC2_ALR0_ALIAS0_LEN                 _ADC_UL(4)

/* ADC2_ALR0_ALIAS1 (rw) */
#define ADC2_ALR0_ALIAS1_POS                 _ADC_UL(8)
#define ADC2_ALR0_ALIAS1_LEN                 _ADC_UL(4)

/* ADC2_APR_RG0 (rw) */
#define ADC2_APR_RG0_POS                     _ADC_UL(0)
#define ADC2_APR_RG0_LEN                     _ADC_UL(1)

/* ADC2_APR_RG1 (rw) */
#define ADC2_APR_RG1_POS                     _ADC_UL(1)
#define ADC2_APR_RG1_LEN                     _ADC_UL(1)

/* ADC2_APR_RG2 (rw) */
#define ADC2_APR_RG2_POS                     _ADC_UL(2)
#define ADC2_APR_RG2_LEN                     _ADC_UL(1)

/* ADC2_APR_RG3 (rw) */
#define ADC2_APR_RG3_POS                     _ADC_UL(3)
#define ADC2_APR_RG3_LEN                     _ADC_UL(1)

/* ADC2_APR_RG4 (rw) */
#define ADC2_APR_RG4_POS                     _ADC_UL(4)
#define ADC2_APR_RG4_LEN                     _ADC_UL(1)

/* ADC2_APR_RG5 (rw) */
#define ADC2_APR_RG5_POS                     _ADC_UL(5)
#define ADC2_APR_RG5_LEN                     _ADC_UL(1)

/* ADC2_APR_ACCERR (rwh) */
#define ADC2_APR_ACCERR_POS                  _ADC_UL(15)
#define ADC2_APR_ACCERR_LEN                  _ADC_UL(1)

/* ADC2_EMCTR_SETEMUX (rw) */
#define ADC2_EMCTR_SETEMUX_POS               _ADC_UL(0)
#define ADC2_EMCTR_SETEMUX_LEN               _ADC_UL(3)

/* ADC2_EMCTR_EMUX (rh) */
#define ADC2_EMCTR_EMUX_POS                  _ADC_UL(4)
#define ADC2_EMCTR_EMUX_LEN                  _ADC_UL(3)

/* ADC2_EMCTR_EMSAMPLE (rw) */
#define ADC2_EMCTR_EMSAMPLE_POS              _ADC_UL(8)
#define ADC2_EMCTR_EMSAMPLE_LEN              _ADC_UL(8)

/* ADC2_EMCTR_EMUXCHNR (rw) */
#define ADC2_EMCTR_EMUXCHNR_POS              _ADC_UL(16)
#define ADC2_EMCTR_EMUXCHNR_LEN              _ADC_UL(4)

/* ADC2_EMCTR_TROEN (rw) */
#define ADC2_EMCTR_TROEN_POS                 _ADC_UL(21)
#define ADC2_EMCTR_TROEN_LEN                 _ADC_UL(1)

/* ADC2_EMCTR_SCANEN (rw) */
#define ADC2_EMCTR_SCANEN_POS                _ADC_UL(22)
#define ADC2_EMCTR_SCANEN_LEN                _ADC_UL(1)

/* ADC2_EMCTR_EMUXEN (rw) */
#define ADC2_EMCTR_EMUXEN_POS                _ADC_UL(23)
#define ADC2_EMCTR_EMUXEN_LEN                _ADC_UL(1)

#endif
