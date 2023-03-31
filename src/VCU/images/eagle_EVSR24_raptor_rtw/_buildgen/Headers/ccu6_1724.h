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
 * $Filename__:ccu6_1724.h$ 
 * 
 * $Author____:RAT1COB$ 
 * 
 * $Function__: TC1724 update and removing QAC warning in gpta0_1793.h$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:02.02.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:ccu6_1724$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 0     02.02.2011 RAT1COB
 *   TC1724 update
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CCU6_1724_H
#define _CCU6_1724_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CCU6_UL(x) x
#else
    #define _CCU6_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CCU6 on TC1724
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 MCFG;                // [0xF0003004] : Module Configuration Register
    volatile uint32 ID;                  // [0xF0003008] : Module Identification Register
    volatile uint32 MOSEL;               // [0xF000300C] : CCU60 Module Output Select Register
    volatile uint32 PISEL0;              // [0xF0003010] : Port Input Select Register 0
    volatile uint32 PISEL2;              // [0xF0003014] : Port Input Select Register 2
    volatile uint32 KSCFG;               // [0xF0003018] : Kernel State Configuration Register
    volatile uint32 KSCSR;               // [0xF000301C] : Kernel State Control Sensitivity Register
    volatile uint32 T12;                 // [0xF0003020] : Timer T12 Counter Register
    volatile uint32 T12PR;               // [0xF0003024] : Timer 12 Period Register
    volatile uint32 T12DTC;              // [0xF0003028] : Dead-Time Control Register for Timer12
    volatile uint32 RESERVED0[1];        // [0xF000302C...0xF000302F] : reserved space
    volatile uint32 CC60R;               // [0xF0003030] : Capture/Compare Register for Channel CC60
    volatile uint32 CC61R;               // [0xF0003034] : Capture/Compare Register for Channel CC61
    volatile uint32 CC62R;               // [0xF0003038] : Capture/Compare Register for Channel CC62
    volatile uint32 RESERVED1[1];        // [0xF000303C...0xF000303F] : reserved space
    volatile uint32 CC60SR;              // [0xF0003040] : Capture/Compare Shadow Reg. for Channel CC60
    volatile uint32 CC61SR;              // [0xF0003044] : Capture/Compare Shadow Reg. for Channel CC61
    volatile uint32 CC62SR;              // [0xF0003048] : Capture/Compare Shadow Reg. for Channel CC62
    volatile uint32 RESERVED2[1];        // [0xF000304C...0xF000304F] : reserved space
    volatile uint32 T13;                 // [0xF0003050] : Timer T13 Counter Register
    volatile uint32 T13PR;               // [0xF0003054] : Timer 13 Period Register
    volatile uint32 CC63R;               // [0xF0003058] : Compare Register for T13
    volatile uint32 CC63SR;              // [0xF000305C] : Compare Shadow Register for T13
    volatile uint32 CMPSTAT;             // [0xF0003060] : Compare State Register
    volatile uint32 CMPMODIF;            // [0xF0003064] : Compare State Modification Register
    volatile uint32 T12MSEL;             // [0xF0003068] : T12 Mode Select Register
    volatile uint32 RESERVED3[1];        // [0xF000306C...0xF000306F] : reserved space
    volatile uint32 TCTR0;               // [0xF0003070] : Timer Control Register 0
    volatile uint32 TCTR2;               // [0xF0003074] : Timer Control Register 2
    volatile uint32 TCTR4;               // [0xF0003078] : Timer Control Register 4
    volatile uint32 RESERVED4[1];        // [0xF000307C...0xF000307F] : reserved space
    volatile uint32 MODCTR;              // [0xF0003080] : Modulation Control Register
    volatile uint32 TRPCTR;              // [0xF0003084] : Trap Control Register
    volatile uint32 PSLR;                // [0xF0003088] : Passive State Level Register
    volatile uint32 MCMOUTS;             // [0xF000308C] : Multi-Channel Mode Output Shadow Register
    volatile uint32 MCMOUT;              // [0xF0003090] : Multi-Channel Mode Output Register
    volatile uint32 MCMCTR;              // [0xF0003094] : Multi-Channel Mode Control Register
    volatile uint32 IMON;                // [0xF0003098] : Input Monitoring Register
    volatile uint32 LI;                  // [0xF000309C] : Lost Indicator Register
    volatile uint32 IS;                  // [0xF00030A0] : Interrupt Status Register
    volatile uint32 ISS;                 // [0xF00030A4] : Interrupt Status Set Register
    volatile uint32 ISR;                 // [0xF00030A8] : Interrupt Status Reset Register
    volatile uint32 INP;                 // [0xF00030AC] : Interrupt Node Pointer Register
    volatile uint32 IEN;                 // [0xF00030B0] : Interrupt Enable Register
    volatile uint32 RESERVED5[15];       // [0xF00030B4...0xF00030EF] : reserved space
    volatile uint32 SRC3;                // [0xF00030F0] : CCU60 Service Request Control Register
    volatile uint32 SRC2;                // [0xF00030F4] : CCU60 Service Request Control Register
    volatile uint32 SRC1;                // [0xF00030F8] : CCU60 Service Request Control Register
    volatile uint32 SRC0;                // [0xF00030FC] : CCU60 Service Request Control Register
} CCU6_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CCU6_RegMap_t CCU60 __attribute__ ((asection (".zbss.label_only","f=awz")));
extern CCU6_RegMap_t CCU61 __attribute__ ((asection (".zbss.label_only","f=awz")));
extern CCU6_RegMap_t CCU6[2] __attribute__ ((asection (".zbss.label_only","f=awz")));


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

/* CCU6_ID_MOD_NUMBER (r) */
#define CCU6_ID_MOD_NUMBER_POS                _CCU6_UL(16)
#define CCU6_ID_MOD_NUMBER_LEN                _CCU6_UL(16)

/* CCU6_ID_MOD_REV (r) */
#define CCU6_ID_MOD_REV_POS                   _CCU6_UL(0)
#define CCU6_ID_MOD_REV_LEN                   _CCU6_UL(8)

/* CCU6_ID_MOD_TYPE (r) */
#define CCU6_ID_MOD_TYPE_POS                  _CCU6_UL(8)
#define CCU6_ID_MOD_TYPE_LEN                  _CCU6_UL(8)

/* CCU60_ID_MOD_NUMBER (r) */
#define CCU60_ID_MOD_NUMBER_POS               _CCU6_UL(16)
#define CCU60_ID_MOD_NUMBER_LEN               _CCU6_UL(16)

/* CCU60_ID_MOD_REV (r) */
#define CCU60_ID_MOD_REV_POS                  _CCU6_UL(0)
#define CCU60_ID_MOD_REV_LEN                  _CCU6_UL(8)

/* CCU60_ID_MOD_TYPE (r) */
#define CCU60_ID_MOD_TYPE_POS                 _CCU6_UL(8)
#define CCU60_ID_MOD_TYPE_LEN                 _CCU6_UL(8)

/* CCU61_ID_MOD_NUMBER (r) */
#define CCU61_ID_MOD_NUMBER_POS               _CCU6_UL(16)
#define CCU61_ID_MOD_NUMBER_LEN               _CCU6_UL(16)

/* CCU61_ID_MOD_REV (r) */
#define CCU61_ID_MOD_REV_POS                  _CCU6_UL(0)
#define CCU61_ID_MOD_REV_LEN                  _CCU6_UL(8)

/* CCU61_ID_MOD_TYPE (r) */
#define CCU61_ID_MOD_TYPE_POS                 _CCU6_UL(8)
#define CCU61_ID_MOD_TYPE_LEN                 _CCU6_UL(8)

/* CCU6_MCFG_T12 (r) */
#define CCU6_MCFG_T12_POS                    _CCU6_UL(0)
#define CCU6_MCFG_T12_LEN                    _CCU6_UL(1)

/* CCU6_MCFG_T13 (r) */
#define CCU6_MCFG_T13_POS                    _CCU6_UL(1)
#define CCU6_MCFG_T13_LEN                    _CCU6_UL(1)

/* CCU6_MCFG_MCM (r) */
#define CCU6_MCFG_MCM_POS                    _CCU6_UL(2)
#define CCU6_MCFG_MCM_LEN                    _CCU6_UL(1)

/* CCU6_ID_MODREV (r) */
#define CCU6_ID_MODREV_POS                   _CCU6_UL(0)
#define CCU6_ID_MODREV_LEN                   _CCU6_UL(8)

/* CCU6_ID_MODNUM (r) */
#define CCU6_ID_MODNUM_POS                   _CCU6_UL(8)
#define CCU6_ID_MODNUM_LEN                   _CCU6_UL(8)

/* CCU6_MOSEL_TRIG0SEL (rw) */
#define CCU6_MOSEL_TRIG0SEL_POS              _CCU6_UL(0)
#define CCU6_MOSEL_TRIG0SEL_LEN              _CCU6_UL(3)

/* CCU6_MOSEL_TRIG1SEL (rw) */
#define CCU6_MOSEL_TRIG1SEL_POS              _CCU6_UL(3)
#define CCU6_MOSEL_TRIG1SEL_LEN              _CCU6_UL(3)

/* CCU6_MOSEL_TRIG2SEL (rw) */
#define CCU6_MOSEL_TRIG2SEL_POS              _CCU6_UL(6)
#define CCU6_MOSEL_TRIG2SEL_LEN              _CCU6_UL(3)

/* CCU6_PISEL0_ISCC60 (rw) */
#define CCU6_PISEL0_ISCC60_POS               _CCU6_UL(0)
#define CCU6_PISEL0_ISCC60_LEN               _CCU6_UL(2)

/* CCU6_PISEL0_ISCC61 (rw) */
#define CCU6_PISEL0_ISCC61_POS               _CCU6_UL(2)
#define CCU6_PISEL0_ISCC61_LEN               _CCU6_UL(2)

/* CCU6_PISEL0_ISCC62 (rw) */
#define CCU6_PISEL0_ISCC62_POS               _CCU6_UL(4)
#define CCU6_PISEL0_ISCC62_LEN               _CCU6_UL(2)

/* CCU6_PISEL0_ISTRP (rw) */
#define CCU6_PISEL0_ISTRP_POS                _CCU6_UL(6)
#define CCU6_PISEL0_ISTRP_LEN                _CCU6_UL(2)

/* CCU6_PISEL0_ISPOS0 (rw) */
#define CCU6_PISEL0_ISPOS0_POS               _CCU6_UL(8)
#define CCU6_PISEL0_ISPOS0_LEN               _CCU6_UL(2)

/* CCU6_PISEL0_ISPOS1 (rw) */
#define CCU6_PISEL0_ISPOS1_POS               _CCU6_UL(10)
#define CCU6_PISEL0_ISPOS1_LEN               _CCU6_UL(2)

/* CCU6_PISEL0_ISPOS2 (rw) */
#define CCU6_PISEL0_ISPOS2_POS               _CCU6_UL(12)
#define CCU6_PISEL0_ISPOS2_LEN               _CCU6_UL(2)

/* CCU6_PISEL0_IST12HR (rw) */
#define CCU6_PISEL0_IST12HR_POS              _CCU6_UL(14)
#define CCU6_PISEL0_IST12HR_LEN              _CCU6_UL(2)

/* CCU6_PISEL2_IST13HR (rw) */
#define CCU6_PISEL2_IST13HR_POS              _CCU6_UL(0)
#define CCU6_PISEL2_IST13HR_LEN              _CCU6_UL(2)

/* CCU6_PISEL2_ISCNT12 (rw) */
#define CCU6_PISEL2_ISCNT12_POS              _CCU6_UL(2)
#define CCU6_PISEL2_ISCNT12_LEN              _CCU6_UL(2)

/* CCU6_PISEL2_ISCNT13 (rw) */
#define CCU6_PISEL2_ISCNT13_POS              _CCU6_UL(4)
#define CCU6_PISEL2_ISCNT13_LEN              _CCU6_UL(2)

/* CCU6_PISEL2_T12EXT (rw) */
#define CCU6_PISEL2_T12EXT_POS               _CCU6_UL(6)
#define CCU6_PISEL2_T12EXT_LEN               _CCU6_UL(1)

/* CCU6_PISEL2_T13EXT (rw) */
#define CCU6_PISEL2_T13EXT_POS               _CCU6_UL(7)
#define CCU6_PISEL2_T13EXT_LEN               _CCU6_UL(1)

/* CCU6_KSCFG_MODEN (rw) */
#define CCU6_KSCFG_MODEN_POS                 _CCU6_UL(0)
#define CCU6_KSCFG_MODEN_LEN                 _CCU6_UL(1)

/* CCU6_KSCFG_BPMODEN (w) */
#define CCU6_KSCFG_BPMODEN_POS               _CCU6_UL(1)
#define CCU6_KSCFG_BPMODEN_LEN               _CCU6_UL(1)

/* CCU6_KSCFG_ACK (rh) */
#define CCU6_KSCFG_ACK_POS                   _CCU6_UL(2)
#define CCU6_KSCFG_ACK_LEN                   _CCU6_UL(1)

/* CCU6_KSCFG_SUSREQ (rh) */
#define CCU6_KSCFG_SUSREQ_POS                _CCU6_UL(3)
#define CCU6_KSCFG_SUSREQ_LEN                _CCU6_UL(1)

/* CCU6_KSCFG_NOMCFG (rw) */
#define CCU6_KSCFG_NOMCFG_POS                _CCU6_UL(4)
#define CCU6_KSCFG_NOMCFG_LEN                _CCU6_UL(2)

/* CCU6_KSCFG_BPNOM (w) */
#define CCU6_KSCFG_BPNOM_POS                 _CCU6_UL(7)
#define CCU6_KSCFG_BPNOM_LEN                 _CCU6_UL(1)

/* CCU6_KSCFG_SUMCFG (rw) */
#define CCU6_KSCFG_SUMCFG_POS                _CCU6_UL(8)
#define CCU6_KSCFG_SUMCFG_LEN                _CCU6_UL(2)

/* CCU6_KSCFG_BPSUM (w) */
#define CCU6_KSCFG_BPSUM_POS                 _CCU6_UL(11)
#define CCU6_KSCFG_BPSUM_LEN                 _CCU6_UL(1)

/* CCU6_KSCFG_COMCFG (rw) */
#define CCU6_KSCFG_COMCFG_POS                _CCU6_UL(12)
#define CCU6_KSCFG_COMCFG_LEN                _CCU6_UL(2)

/* CCU6_KSCFG_BPCOM (w) */
#define CCU6_KSCFG_BPCOM_POS                 _CCU6_UL(15)
#define CCU6_KSCFG_BPCOM_LEN                 _CCU6_UL(1)

/* CCU6_KSCSR_SB0 (rw) */
#define CCU6_KSCSR_SB0_POS                   _CCU6_UL(0)
#define CCU6_KSCSR_SB0_LEN                   _CCU6_UL(1)

/* CCU6_KSCSR_SB1 (rw) */
#define CCU6_KSCSR_SB1_POS                   _CCU6_UL(1)
#define CCU6_KSCSR_SB1_LEN                   _CCU6_UL(1)

/* CCU6_KSCSR_SB2 (rw) */
#define CCU6_KSCSR_SB2_POS                   _CCU6_UL(2)
#define CCU6_KSCSR_SB2_LEN                   _CCU6_UL(1)

/* CCU6_KSCSR_SB3 (rw) */
#define CCU6_KSCSR_SB3_POS                   _CCU6_UL(3)
#define CCU6_KSCSR_SB3_LEN                   _CCU6_UL(1)

/* CCU6_T12_T12CV (rwh) */
#define CCU6_T12_T12CV_POS                   _CCU6_UL(0)
#define CCU6_T12_T12CV_LEN                   _CCU6_UL(16)

/* CCU6_T12PR_T12PV (rwh) */
#define CCU6_T12PR_T12PV_POS                 _CCU6_UL(0)
#define CCU6_T12PR_T12PV_LEN                 _CCU6_UL(16)

/* CCU6_T12DTC_DTM (rw) */
#define CCU6_T12DTC_DTM_POS                  _CCU6_UL(0)
#define CCU6_T12DTC_DTM_LEN                  _CCU6_UL(8)

/* CCU6_T12DTC_DTE0 (rw) */
#define CCU6_T12DTC_DTE0_POS                 _CCU6_UL(8)
#define CCU6_T12DTC_DTE0_LEN                 _CCU6_UL(1)

/* CCU6_T12DTC_DTE1 (rw) */
#define CCU6_T12DTC_DTE1_POS                 _CCU6_UL(9)
#define CCU6_T12DTC_DTE1_LEN                 _CCU6_UL(1)

/* CCU6_T12DTC_DTE2 (rw) */
#define CCU6_T12DTC_DTE2_POS                 _CCU6_UL(10)
#define CCU6_T12DTC_DTE2_LEN                 _CCU6_UL(1)

/* CCU6_T12DTC_DTR0 (rh) */
#define CCU6_T12DTC_DTR0_POS                 _CCU6_UL(12)
#define CCU6_T12DTC_DTR0_LEN                 _CCU6_UL(1)

/* CCU6_T12DTC_DTR1 (rh) */
#define CCU6_T12DTC_DTR1_POS                 _CCU6_UL(13)
#define CCU6_T12DTC_DTR1_LEN                 _CCU6_UL(1)

/* CCU6_T12DTC_DTR2 (rh) */
#define CCU6_T12DTC_DTR2_POS                 _CCU6_UL(14)
#define CCU6_T12DTC_DTR2_LEN                 _CCU6_UL(1)

/* CCU6_CC60R_CCV (rh) */
#define CCU6_CC60R_CCV_POS                   _CCU6_UL(0)
#define CCU6_CC60R_CCV_LEN                   _CCU6_UL(16)

/* CCU6_CC61R_CCV (rh) */
#define CCU6_CC61R_CCV_POS                   _CCU6_UL(0)
#define CCU6_CC61R_CCV_LEN                   _CCU6_UL(16)

/* CCU6_CC62R_CCV (rh) */
#define CCU6_CC62R_CCV_POS                   _CCU6_UL(0)
#define CCU6_CC62R_CCV_LEN                   _CCU6_UL(16)

/* CCU6_CC60SR_CCS (rwh) */
#define CCU6_CC60SR_CCS_POS                  _CCU6_UL(0)
#define CCU6_CC60SR_CCS_LEN                  _CCU6_UL(16)

/* CCU6_CC61SR_CCS (rwh) */
#define CCU6_CC61SR_CCS_POS                  _CCU6_UL(0)
#define CCU6_CC61SR_CCS_LEN                  _CCU6_UL(16)

/* CCU6_CC62SR_CCS (rwh) */
#define CCU6_CC62SR_CCS_POS                  _CCU6_UL(0)
#define CCU6_CC62SR_CCS_LEN                  _CCU6_UL(16)

/* CCU6_T13_T13CV (rwh) */
#define CCU6_T13_T13CV_POS                   _CCU6_UL(0)
#define CCU6_T13_T13CV_LEN                   _CCU6_UL(16)

/* CCU6_T13PR_T13PV (rwh) */
#define CCU6_T13PR_T13PV_POS                 _CCU6_UL(0)
#define CCU6_T13PR_T13PV_LEN                 _CCU6_UL(16)

/* CCU6_CC63R_CCV (rh) */
#define CCU6_CC63R_CCV_POS                   _CCU6_UL(0)
#define CCU6_CC63R_CCV_LEN                   _CCU6_UL(16)

/* CCU6_CC63SR_CCS (rw) */
#define CCU6_CC63SR_CCS_POS                  _CCU6_UL(0)
#define CCU6_CC63SR_CCS_LEN                  _CCU6_UL(16)

/* CCU6_CMPSTAT_CC60ST (rh) */
#define CCU6_CMPSTAT_CC60ST_POS              _CCU6_UL(0)
#define CCU6_CMPSTAT_CC60ST_LEN              _CCU6_UL(1)

/* CCU6_CMPSTAT_CC61ST (rh) */
#define CCU6_CMPSTAT_CC61ST_POS              _CCU6_UL(1)
#define CCU6_CMPSTAT_CC61ST_LEN              _CCU6_UL(1)

/* CCU6_CMPSTAT_CC62ST (rh) */
#define CCU6_CMPSTAT_CC62ST_POS              _CCU6_UL(2)
#define CCU6_CMPSTAT_CC62ST_LEN              _CCU6_UL(1)

/* CCU6_CMPSTAT_CCPOS60 (rh) */
#define CCU6_CMPSTAT_CCPOS60_POS             _CCU6_UL(3)
#define CCU6_CMPSTAT_CCPOS60_LEN             _CCU6_UL(1)

/* CCU6_CMPSTAT_CCPOS61 (rh) */
#define CCU6_CMPSTAT_CCPOS61_POS             _CCU6_UL(4)
#define CCU6_CMPSTAT_CCPOS61_LEN             _CCU6_UL(1)

/* CCU6_CMPSTAT_CCPOS62 (rh) */
#define CCU6_CMPSTAT_CCPOS62_POS             _CCU6_UL(5)
#define CCU6_CMPSTAT_CCPOS62_LEN             _CCU6_UL(1)

/* CCU6_CMPSTAT_CC63ST (rh) */
#define CCU6_CMPSTAT_CC63ST_POS              _CCU6_UL(6)
#define CCU6_CMPSTAT_CC63ST_LEN              _CCU6_UL(1)

/* CCU6_CMPSTAT_CC60PS (rwh) */
#define CCU6_CMPSTAT_CC60PS_POS              _CCU6_UL(8)
#define CCU6_CMPSTAT_CC60PS_LEN              _CCU6_UL(1)

/* CCU6_CMPSTAT_COUT60PS (rwh) */
#define CCU6_CMPSTAT_COUT60PS_POS            _CCU6_UL(9)
#define CCU6_CMPSTAT_COUT60PS_LEN            _CCU6_UL(1)

/* CCU6_CMPSTAT_CC61PS (rwh) */
#define CCU6_CMPSTAT_CC61PS_POS              _CCU6_UL(10)
#define CCU6_CMPSTAT_CC61PS_LEN              _CCU6_UL(1)

/* CCU6_CMPSTAT_COUT61PS (rwh) */
#define CCU6_CMPSTAT_COUT61PS_POS            _CCU6_UL(11)
#define CCU6_CMPSTAT_COUT61PS_LEN            _CCU6_UL(1)

/* CCU6_CMPSTAT_CC62PS (rwh) */
#define CCU6_CMPSTAT_CC62PS_POS              _CCU6_UL(12)
#define CCU6_CMPSTAT_CC62PS_LEN              _CCU6_UL(1)

/* CCU6_CMPSTAT_COUT62PS (rwh) */
#define CCU6_CMPSTAT_COUT62PS_POS            _CCU6_UL(13)
#define CCU6_CMPSTAT_COUT62PS_LEN            _CCU6_UL(1)

/* CCU6_CMPSTAT_COUT63PS (rwh) */
#define CCU6_CMPSTAT_COUT63PS_POS            _CCU6_UL(14)
#define CCU6_CMPSTAT_COUT63PS_LEN            _CCU6_UL(1)

/* CCU6_CMPSTAT_T13IM (rwh) */
#define CCU6_CMPSTAT_T13IM_POS               _CCU6_UL(15)
#define CCU6_CMPSTAT_T13IM_LEN               _CCU6_UL(1)

/* CCU6_CMPMODIF_MCC60S (w) */
#define CCU6_CMPMODIF_MCC60S_POS             _CCU6_UL(0)
#define CCU6_CMPMODIF_MCC60S_LEN             _CCU6_UL(1)

/* CCU6_CMPMODIF_MCC61S (w) */
#define CCU6_CMPMODIF_MCC61S_POS             _CCU6_UL(1)
#define CCU6_CMPMODIF_MCC61S_LEN             _CCU6_UL(1)

/* CCU6_CMPMODIF_MCC62S (w) */
#define CCU6_CMPMODIF_MCC62S_POS             _CCU6_UL(2)
#define CCU6_CMPMODIF_MCC62S_LEN             _CCU6_UL(1)

/* CCU6_CMPMODIF_MCC63S (w) */
#define CCU6_CMPMODIF_MCC63S_POS             _CCU6_UL(7)
#define CCU6_CMPMODIF_MCC63S_LEN             _CCU6_UL(1)

/* CCU6_CMPMODIF_MCC60R (w) */
#define CCU6_CMPMODIF_MCC60R_POS             _CCU6_UL(8)
#define CCU6_CMPMODIF_MCC60R_LEN             _CCU6_UL(1)

/* CCU6_CMPMODIF_MCC61R (w) */
#define CCU6_CMPMODIF_MCC61R_POS             _CCU6_UL(9)
#define CCU6_CMPMODIF_MCC61R_LEN             _CCU6_UL(1)

/* CCU6_CMPMODIF_MCC62R (w) */
#define CCU6_CMPMODIF_MCC62R_POS             _CCU6_UL(10)
#define CCU6_CMPMODIF_MCC62R_LEN             _CCU6_UL(1)

/* CCU6_CMPMODIF_MCC63R (w) */
#define CCU6_CMPMODIF_MCC63R_POS             _CCU6_UL(14)
#define CCU6_CMPMODIF_MCC63R_LEN             _CCU6_UL(1)

/* CCU6_T12MSEL_MSEL60 (rw) */
#define CCU6_T12MSEL_MSEL60_POS              _CCU6_UL(0)
#define CCU6_T12MSEL_MSEL60_LEN              _CCU6_UL(4)

/* CCU6_T12MSEL_MSEL61 (rw) */
#define CCU6_T12MSEL_MSEL61_POS              _CCU6_UL(4)
#define CCU6_T12MSEL_MSEL61_LEN              _CCU6_UL(4)

/* CCU6_T12MSEL_MSEL62 (rw) */
#define CCU6_T12MSEL_MSEL62_POS              _CCU6_UL(8)
#define CCU6_T12MSEL_MSEL62_LEN              _CCU6_UL(4)

/* CCU6_T12MSEL_HSYNC (rw) */
#define CCU6_T12MSEL_HSYNC_POS               _CCU6_UL(12)
#define CCU6_T12MSEL_HSYNC_LEN               _CCU6_UL(3)

/* CCU6_T12MSEL_DBYP (rw) */
#define CCU6_T12MSEL_DBYP_POS                _CCU6_UL(15)
#define CCU6_T12MSEL_DBYP_LEN                _CCU6_UL(1)

/* CCU6_TCTR0_T12CLK (rw) */
#define CCU6_TCTR0_T12CLK_POS                _CCU6_UL(0)
#define CCU6_TCTR0_T12CLK_LEN                _CCU6_UL(3)

/* CCU6_TCTR0_T12PRE (rw) */
#define CCU6_TCTR0_T12PRE_POS                _CCU6_UL(3)
#define CCU6_TCTR0_T12PRE_LEN                _CCU6_UL(1)

/* CCU6_TCTR0_T12R (rh) */
#define CCU6_TCTR0_T12R_POS                  _CCU6_UL(4)
#define CCU6_TCTR0_T12R_LEN                  _CCU6_UL(1)

/* CCU6_TCTR0_STE12 (rh) */
#define CCU6_TCTR0_STE12_POS                 _CCU6_UL(5)
#define CCU6_TCTR0_STE12_LEN                 _CCU6_UL(1)

/* CCU6_TCTR0_CDIR (rh) */
#define CCU6_TCTR0_CDIR_POS                  _CCU6_UL(6)
#define CCU6_TCTR0_CDIR_LEN                  _CCU6_UL(1)

/* CCU6_TCTR0_CTM (rw) */
#define CCU6_TCTR0_CTM_POS                   _CCU6_UL(7)
#define CCU6_TCTR0_CTM_LEN                   _CCU6_UL(1)

/* CCU6_TCTR0_T13CLK (rw) */
#define CCU6_TCTR0_T13CLK_POS                _CCU6_UL(8)
#define CCU6_TCTR0_T13CLK_LEN                _CCU6_UL(3)

/* CCU6_TCTR0_T13PRE (rw) */
#define CCU6_TCTR0_T13PRE_POS                _CCU6_UL(11)
#define CCU6_TCTR0_T13PRE_LEN                _CCU6_UL(1)

/* CCU6_TCTR0_T13R (rh) */
#define CCU6_TCTR0_T13R_POS                  _CCU6_UL(12)
#define CCU6_TCTR0_T13R_LEN                  _CCU6_UL(1)

/* CCU6_TCTR0_STE13 (rh) */
#define CCU6_TCTR0_STE13_POS                 _CCU6_UL(13)
#define CCU6_TCTR0_STE13_LEN                 _CCU6_UL(1)

/* CCU6_TCTR2_T12SSC (rw) */
#define CCU6_TCTR2_T12SSC_POS                _CCU6_UL(0)
#define CCU6_TCTR2_T12SSC_LEN                _CCU6_UL(1)

/* CCU6_TCTR2_T13SSC (rw) */
#define CCU6_TCTR2_T13SSC_POS                _CCU6_UL(1)
#define CCU6_TCTR2_T13SSC_LEN                _CCU6_UL(1)

/* CCU6_TCTR2_T13TEC (rw) */
#define CCU6_TCTR2_T13TEC_POS                _CCU6_UL(2)
#define CCU6_TCTR2_T13TEC_LEN                _CCU6_UL(3)

/* CCU6_TCTR2_T13TED (rw) */
#define CCU6_TCTR2_T13TED_POS                _CCU6_UL(5)
#define CCU6_TCTR2_T13TED_LEN                _CCU6_UL(2)

/* CCU6_TCTR2_T12RSEL (rw) */
#define CCU6_TCTR2_T12RSEL_POS               _CCU6_UL(8)
#define CCU6_TCTR2_T12RSEL_LEN               _CCU6_UL(2)

/* CCU6_TCTR2_T13RSEL (rw) */
#define CCU6_TCTR2_T13RSEL_POS               _CCU6_UL(10)
#define CCU6_TCTR2_T13RSEL_LEN               _CCU6_UL(2)

/* CCU6_TCTR4_T12RR (w) */
#define CCU6_TCTR4_T12RR_POS                 _CCU6_UL(0)
#define CCU6_TCTR4_T12RR_LEN                 _CCU6_UL(1)

/* CCU6_TCTR4_T12RS (w) */
#define CCU6_TCTR4_T12RS_POS                 _CCU6_UL(1)
#define CCU6_TCTR4_T12RS_LEN                 _CCU6_UL(1)

/* CCU6_TCTR4_T12RES (w) */
#define CCU6_TCTR4_T12RES_POS                _CCU6_UL(2)
#define CCU6_TCTR4_T12RES_LEN                _CCU6_UL(1)

/* CCU6_TCTR4_DTRES (w) */
#define CCU6_TCTR4_DTRES_POS                 _CCU6_UL(3)
#define CCU6_TCTR4_DTRES_LEN                 _CCU6_UL(1)

/* CCU6_TCTR4_T12CNT (w) */
#define CCU6_TCTR4_T12CNT_POS                _CCU6_UL(5)
#define CCU6_TCTR4_T12CNT_LEN                _CCU6_UL(1)

/* CCU6_TCTR4_T12STR (w) */
#define CCU6_TCTR4_T12STR_POS                _CCU6_UL(6)
#define CCU6_TCTR4_T12STR_LEN                _CCU6_UL(1)

/* CCU6_TCTR4_T12STD (w) */
#define CCU6_TCTR4_T12STD_POS                _CCU6_UL(7)
#define CCU6_TCTR4_T12STD_LEN                _CCU6_UL(1)

/* CCU6_TCTR4_T13RR (w) */
#define CCU6_TCTR4_T13RR_POS                 _CCU6_UL(8)
#define CCU6_TCTR4_T13RR_LEN                 _CCU6_UL(1)

/* CCU6_TCTR4_T13RS (w) */
#define CCU6_TCTR4_T13RS_POS                 _CCU6_UL(9)
#define CCU6_TCTR4_T13RS_LEN                 _CCU6_UL(1)

/* CCU6_TCTR4_T13RES (w) */
#define CCU6_TCTR4_T13RES_POS                _CCU6_UL(10)
#define CCU6_TCTR4_T13RES_LEN                _CCU6_UL(1)

/* CCU6_TCTR4_T13CNT (w) */
#define CCU6_TCTR4_T13CNT_POS                _CCU6_UL(13)
#define CCU6_TCTR4_T13CNT_LEN                _CCU6_UL(1)

/* CCU6_TCTR4_T13STR (w) */
#define CCU6_TCTR4_T13STR_POS                _CCU6_UL(14)
#define CCU6_TCTR4_T13STR_LEN                _CCU6_UL(1)

/* CCU6_TCTR4_T13STD (w) */
#define CCU6_TCTR4_T13STD_POS                _CCU6_UL(15)
#define CCU6_TCTR4_T13STD_LEN                _CCU6_UL(1)

/* CCU6_MODCTR_T12MODEN (rw) */
#define CCU6_MODCTR_T12MODEN_POS             _CCU6_UL(0)
#define CCU6_MODCTR_T12MODEN_LEN             _CCU6_UL(6)

/* CCU6_MODCTR_MCMEN (rw) */
#define CCU6_MODCTR_MCMEN_POS                _CCU6_UL(7)
#define CCU6_MODCTR_MCMEN_LEN                _CCU6_UL(1)

/* CCU6_MODCTR_T13MODEN (rw) */
#define CCU6_MODCTR_T13MODEN_POS             _CCU6_UL(8)
#define CCU6_MODCTR_T13MODEN_LEN             _CCU6_UL(6)

/* CCU6_MODCTR_ECT13O (rw) */
#define CCU6_MODCTR_ECT13O_POS               _CCU6_UL(15)
#define CCU6_MODCTR_ECT13O_LEN               _CCU6_UL(1)

/* CCU6_TRPCTR_TRPM0 (rw) */
#define CCU6_TRPCTR_TRPM0_POS                _CCU6_UL(0)
#define CCU6_TRPCTR_TRPM0_LEN                _CCU6_UL(1)

/* CCU6_TRPCTR_TRPM1 (rw) */
#define CCU6_TRPCTR_TRPM1_POS                _CCU6_UL(1)
#define CCU6_TRPCTR_TRPM1_LEN                _CCU6_UL(1)

/* CCU6_TRPCTR_TRPM2 (rw) */
#define CCU6_TRPCTR_TRPM2_POS                _CCU6_UL(2)
#define CCU6_TRPCTR_TRPM2_LEN                _CCU6_UL(1)

/* CCU6_TRPCTR_TRPEN (rw) */
#define CCU6_TRPCTR_TRPEN_POS                _CCU6_UL(8)
#define CCU6_TRPCTR_TRPEN_LEN                _CCU6_UL(6)

/* CCU6_TRPCTR_TRPEN13 (rw) */
#define CCU6_TRPCTR_TRPEN13_POS              _CCU6_UL(14)
#define CCU6_TRPCTR_TRPEN13_LEN              _CCU6_UL(1)

/* CCU6_TRPCTR_TRPPEN (rw) */
#define CCU6_TRPCTR_TRPPEN_POS               _CCU6_UL(15)
#define CCU6_TRPCTR_TRPPEN_LEN               _CCU6_UL(1)

/* CCU6_PSLR_PSL (rwh) */
#define CCU6_PSLR_PSL_POS                    _CCU6_UL(0)
#define CCU6_PSLR_PSL_LEN                    _CCU6_UL(6)

/* CCU6_PSLR_PSL63 (rwh) */
#define CCU6_PSLR_PSL63_POS                  _CCU6_UL(7)
#define CCU6_PSLR_PSL63_LEN                  _CCU6_UL(1)

/* CCU6_MCMOUTS_MCMPS (rw) */
#define CCU6_MCMOUTS_MCMPS_POS               _CCU6_UL(0)
#define CCU6_MCMOUTS_MCMPS_LEN               _CCU6_UL(6)

/* CCU6_MCMOUTS_STRMCM (w) */
#define CCU6_MCMOUTS_STRMCM_POS              _CCU6_UL(7)
#define CCU6_MCMOUTS_STRMCM_LEN              _CCU6_UL(1)

/* CCU6_MCMOUTS_EXPHS (rw) */
#define CCU6_MCMOUTS_EXPHS_POS               _CCU6_UL(8)
#define CCU6_MCMOUTS_EXPHS_LEN               _CCU6_UL(3)

/* CCU6_MCMOUTS_CURHS (rw) */
#define CCU6_MCMOUTS_CURHS_POS               _CCU6_UL(11)
#define CCU6_MCMOUTS_CURHS_LEN               _CCU6_UL(3)

/* CCU6_MCMOUTS_STRHP (w) */
#define CCU6_MCMOUTS_STRHP_POS               _CCU6_UL(15)
#define CCU6_MCMOUTS_STRHP_LEN               _CCU6_UL(1)

/* CCU6_MCMOUT_MCMP (rh) */
#define CCU6_MCMOUT_MCMP_POS                 _CCU6_UL(0)
#define CCU6_MCMOUT_MCMP_LEN                 _CCU6_UL(6)

/* CCU6_MCMOUT_R (rh) */
#define CCU6_MCMOUT_R_POS                    _CCU6_UL(6)
#define CCU6_MCMOUT_R_LEN                    _CCU6_UL(1)

/* CCU6_MCMOUT_EXPH (rh) */
#define CCU6_MCMOUT_EXPH_POS                 _CCU6_UL(8)
#define CCU6_MCMOUT_EXPH_LEN                 _CCU6_UL(3)

/* CCU6_MCMOUT_CURH (rh) */
#define CCU6_MCMOUT_CURH_POS                 _CCU6_UL(11)
#define CCU6_MCMOUT_CURH_LEN                 _CCU6_UL(3)

/* CCU6_MCMCTR_SWSEL (rw) */
#define CCU6_MCMCTR_SWSEL_POS                _CCU6_UL(0)
#define CCU6_MCMCTR_SWSEL_LEN                _CCU6_UL(3)

/* CCU6_MCMCTR_SWSYN (rw) */
#define CCU6_MCMCTR_SWSYN_POS                _CCU6_UL(4)
#define CCU6_MCMCTR_SWSYN_LEN                _CCU6_UL(2)

/* CCU6_MCMCTR_STE12U (rw) */
#define CCU6_MCMCTR_STE12U_POS               _CCU6_UL(8)
#define CCU6_MCMCTR_STE12U_LEN               _CCU6_UL(1)

/* CCU6_MCMCTR_STE12D (rw) */
#define CCU6_MCMCTR_STE12D_POS               _CCU6_UL(9)
#define CCU6_MCMCTR_STE12D_LEN               _CCU6_UL(1)

/* CCU6_MCMCTR_STE13U (rw) */
#define CCU6_MCMCTR_STE13U_POS               _CCU6_UL(10)
#define CCU6_MCMCTR_STE13U_LEN               _CCU6_UL(1)

/* CCU6_IMON_LBE (rwh) */
#define CCU6_IMON_LBE_POS                    _CCU6_UL(0)
#define CCU6_IMON_LBE_LEN                    _CCU6_UL(1)

/* CCU6_IMON_CCPOS0I (rwh) */
#define CCU6_IMON_CCPOS0I_POS                _CCU6_UL(1)
#define CCU6_IMON_CCPOS0I_LEN                _CCU6_UL(1)

/* CCU6_IMON_CCPOS1I (rwh) */
#define CCU6_IMON_CCPOS1I_POS                _CCU6_UL(2)
#define CCU6_IMON_CCPOS1I_LEN                _CCU6_UL(1)

/* CCU6_IMON_CCPOS2I (rwh) */
#define CCU6_IMON_CCPOS2I_POS                _CCU6_UL(3)
#define CCU6_IMON_CCPOS2I_LEN                _CCU6_UL(1)

/* CCU6_IMON_CC60INI (rwh) */
#define CCU6_IMON_CC60INI_POS                _CCU6_UL(4)
#define CCU6_IMON_CC60INI_LEN                _CCU6_UL(1)

/* CCU6_IMON_CC61INI (rwh) */
#define CCU6_IMON_CC61INI_POS                _CCU6_UL(5)
#define CCU6_IMON_CC61INI_LEN                _CCU6_UL(1)

/* CCU6_IMON_CC62INI (rwh) */
#define CCU6_IMON_CC62INI_POS                _CCU6_UL(6)
#define CCU6_IMON_CC62INI_LEN                _CCU6_UL(1)

/* CCU6_IMON_CTRAPI (rwh) */
#define CCU6_IMON_CTRAPI_POS                 _CCU6_UL(7)
#define CCU6_IMON_CTRAPI_LEN                 _CCU6_UL(1)

/* CCU6_IMON_T12HRI (rwh) */
#define CCU6_IMON_T12HRI_POS                 _CCU6_UL(8)
#define CCU6_IMON_T12HRI_LEN                 _CCU6_UL(1)

/* CCU6_IMON_T13HRI (rwh) */
#define CCU6_IMON_T13HRI_POS                 _CCU6_UL(9)
#define CCU6_IMON_T13HRI_LEN                 _CCU6_UL(1)

/* CCU6_LI_CCPOS0EN (rw) */
#define CCU6_LI_CCPOS0EN_POS                 _CCU6_UL(1)
#define CCU6_LI_CCPOS0EN_LEN                 _CCU6_UL(1)

/* CCU6_LI_CCPOS1EN (rw) */
#define CCU6_LI_CCPOS1EN_POS                 _CCU6_UL(2)
#define CCU6_LI_CCPOS1EN_LEN                 _CCU6_UL(1)

/* CCU6_LI_CCPOS2EN (rw) */
#define CCU6_LI_CCPOS2EN_POS                 _CCU6_UL(3)
#define CCU6_LI_CCPOS2EN_LEN                 _CCU6_UL(1)

/* CCU6_LI_CC60INEN (rw) */
#define CCU6_LI_CC60INEN_POS                 _CCU6_UL(4)
#define CCU6_LI_CC60INEN_LEN                 _CCU6_UL(1)

/* CCU6_LI_CC61INEN (rw) */
#define CCU6_LI_CC61INEN_POS                 _CCU6_UL(5)
#define CCU6_LI_CC61INEN_LEN                 _CCU6_UL(1)

/* CCU6_LI_CC62INEN (rw) */
#define CCU6_LI_CC62INEN_POS                 _CCU6_UL(6)
#define CCU6_LI_CC62INEN_LEN                 _CCU6_UL(1)

/* CCU6_LI_CTRAPEN (rw) */
#define CCU6_LI_CTRAPEN_POS                  _CCU6_UL(7)
#define CCU6_LI_CTRAPEN_LEN                  _CCU6_UL(1)

/* CCU6_LI_T12HREN (rw) */
#define CCU6_LI_T12HREN_POS                  _CCU6_UL(8)
#define CCU6_LI_T12HREN_LEN                  _CCU6_UL(1)

/* CCU6_LI_T13HREN (rw) */
#define CCU6_LI_T13HREN_POS                  _CCU6_UL(9)
#define CCU6_LI_T13HREN_LEN                  _CCU6_UL(1)

/* CCU6_LI_LBEEN (rw) */
#define CCU6_LI_LBEEN_POS                    _CCU6_UL(13)
#define CCU6_LI_LBEEN_LEN                    _CCU6_UL(1)

/* CCU6_LI_INPLBE (rw) */
#define CCU6_LI_INPLBE_POS                   _CCU6_UL(14)
#define CCU6_LI_INPLBE_LEN                   _CCU6_UL(2)

/* CCU6_IS_ICC60R (rh) */
#define CCU6_IS_ICC60R_POS                   _CCU6_UL(0)
#define CCU6_IS_ICC60R_LEN                   _CCU6_UL(1)

/* CCU6_IS_ICC60F (rh) */
#define CCU6_IS_ICC60F_POS                   _CCU6_UL(1)
#define CCU6_IS_ICC60F_LEN                   _CCU6_UL(1)

/* CCU6_IS_ICC61R (rh) */
#define CCU6_IS_ICC61R_POS                   _CCU6_UL(2)
#define CCU6_IS_ICC61R_LEN                   _CCU6_UL(1)

/* CCU6_IS_ICC61F (rh) */
#define CCU6_IS_ICC61F_POS                   _CCU6_UL(3)
#define CCU6_IS_ICC61F_LEN                   _CCU6_UL(1)

/* CCU6_IS_ICC62R (rh) */
#define CCU6_IS_ICC62R_POS                   _CCU6_UL(4)
#define CCU6_IS_ICC62R_LEN                   _CCU6_UL(1)

/* CCU6_IS_ICC62F (rh) */
#define CCU6_IS_ICC62F_POS                   _CCU6_UL(5)
#define CCU6_IS_ICC62F_LEN                   _CCU6_UL(1)

/* CCU6_IS_T12OM (rh) */
#define CCU6_IS_T12OM_POS                    _CCU6_UL(6)
#define CCU6_IS_T12OM_LEN                    _CCU6_UL(1)

/* CCU6_IS_T12PM (rh) */
#define CCU6_IS_T12PM_POS                    _CCU6_UL(7)
#define CCU6_IS_T12PM_LEN                    _CCU6_UL(1)

/* CCU6_IS_T13CM (rh) */
#define CCU6_IS_T13CM_POS                    _CCU6_UL(8)
#define CCU6_IS_T13CM_LEN                    _CCU6_UL(1)

/* CCU6_IS_T13PM (rh) */
#define CCU6_IS_T13PM_POS                    _CCU6_UL(9)
#define CCU6_IS_T13PM_LEN                    _CCU6_UL(1)

/* CCU6_IS_TRPF (rh) */
#define CCU6_IS_TRPF_POS                     _CCU6_UL(10)
#define CCU6_IS_TRPF_LEN                     _CCU6_UL(1)

/* CCU6_IS_TRPS (rh) */
#define CCU6_IS_TRPS_POS                     _CCU6_UL(11)
#define CCU6_IS_TRPS_LEN                     _CCU6_UL(1)

/* CCU6_IS_CHE (rh) */
#define CCU6_IS_CHE_POS                      _CCU6_UL(12)
#define CCU6_IS_CHE_LEN                      _CCU6_UL(1)

/* CCU6_IS_WHE (rh) */
#define CCU6_IS_WHE_POS                      _CCU6_UL(13)
#define CCU6_IS_WHE_LEN                      _CCU6_UL(1)

/* CCU6_IS_IDLE (rh) */
#define CCU6_IS_IDLE_POS                     _CCU6_UL(14)
#define CCU6_IS_IDLE_LEN                     _CCU6_UL(1)

/* CCU6_IS_STR (rh) */
#define CCU6_IS_STR_POS                      _CCU6_UL(15)
#define CCU6_IS_STR_LEN                      _CCU6_UL(1)

/* CCU6_ISS_SCC60R (w) */
#define CCU6_ISS_SCC60R_POS                  _CCU6_UL(0)
#define CCU6_ISS_SCC60R_LEN                  _CCU6_UL(1)

/* CCU6_ISS_SCC60F (w) */
#define CCU6_ISS_SCC60F_POS                  _CCU6_UL(1)
#define CCU6_ISS_SCC60F_LEN                  _CCU6_UL(1)

/* CCU6_ISS_SCC61R (w) */
#define CCU6_ISS_SCC61R_POS                  _CCU6_UL(2)
#define CCU6_ISS_SCC61R_LEN                  _CCU6_UL(1)

/* CCU6_ISS_SCC61F (w) */
#define CCU6_ISS_SCC61F_POS                  _CCU6_UL(3)
#define CCU6_ISS_SCC61F_LEN                  _CCU6_UL(1)

/* CCU6_ISS_SCC62R (w) */
#define CCU6_ISS_SCC62R_POS                  _CCU6_UL(4)
#define CCU6_ISS_SCC62R_LEN                  _CCU6_UL(1)

/* CCU6_ISS_SCC62F (w) */
#define CCU6_ISS_SCC62F_POS                  _CCU6_UL(5)
#define CCU6_ISS_SCC62F_LEN                  _CCU6_UL(1)

/* CCU6_ISS_ST12OM (w) */
#define CCU6_ISS_ST12OM_POS                  _CCU6_UL(6)
#define CCU6_ISS_ST12OM_LEN                  _CCU6_UL(1)

/* CCU6_ISS_ST12PM (w) */
#define CCU6_ISS_ST12PM_POS                  _CCU6_UL(7)
#define CCU6_ISS_ST12PM_LEN                  _CCU6_UL(1)

/* CCU6_ISS_ST13CM (w) */
#define CCU6_ISS_ST13CM_POS                  _CCU6_UL(8)
#define CCU6_ISS_ST13CM_LEN                  _CCU6_UL(1)

/* CCU6_ISS_ST13PM (w) */
#define CCU6_ISS_ST13PM_POS                  _CCU6_UL(9)
#define CCU6_ISS_ST13PM_LEN                  _CCU6_UL(1)

/* CCU6_ISS_STRPF (w) */
#define CCU6_ISS_STRPF_POS                   _CCU6_UL(10)
#define CCU6_ISS_STRPF_LEN                   _CCU6_UL(1)

/* CCU6_ISS_SWHC (w) */
#define CCU6_ISS_SWHC_POS                    _CCU6_UL(11)
#define CCU6_ISS_SWHC_LEN                    _CCU6_UL(1)

/* CCU6_ISS_SCHE (w) */
#define CCU6_ISS_SCHE_POS                    _CCU6_UL(12)
#define CCU6_ISS_SCHE_LEN                    _CCU6_UL(1)

/* CCU6_ISS_SWHE (w) */
#define CCU6_ISS_SWHE_POS                    _CCU6_UL(13)
#define CCU6_ISS_SWHE_LEN                    _CCU6_UL(1)

/* CCU6_ISS_SIDLE (w) */
#define CCU6_ISS_SIDLE_POS                   _CCU6_UL(14)
#define CCU6_ISS_SIDLE_LEN                   _CCU6_UL(1)

/* CCU6_ISS_SSTR (w) */
#define CCU6_ISS_SSTR_POS                    _CCU6_UL(15)
#define CCU6_ISS_SSTR_LEN                    _CCU6_UL(1)

/* CCU6_ISR_RCC60R (w) */
#define CCU6_ISR_RCC60R_POS                  _CCU6_UL(0)
#define CCU6_ISR_RCC60R_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RCC60F (w) */
#define CCU6_ISR_RCC60F_POS                  _CCU6_UL(1)
#define CCU6_ISR_RCC60F_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RCC61R (w) */
#define CCU6_ISR_RCC61R_POS                  _CCU6_UL(2)
#define CCU6_ISR_RCC61R_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RCC61F (w) */
#define CCU6_ISR_RCC61F_POS                  _CCU6_UL(3)
#define CCU6_ISR_RCC61F_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RCC62R (w) */
#define CCU6_ISR_RCC62R_POS                  _CCU6_UL(4)
#define CCU6_ISR_RCC62R_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RCC62F (w) */
#define CCU6_ISR_RCC62F_POS                  _CCU6_UL(5)
#define CCU6_ISR_RCC62F_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RT12OM (w) */
#define CCU6_ISR_RT12OM_POS                  _CCU6_UL(6)
#define CCU6_ISR_RT12OM_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RT12PM (w) */
#define CCU6_ISR_RT12PM_POS                  _CCU6_UL(7)
#define CCU6_ISR_RT12PM_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RT13CM (w) */
#define CCU6_ISR_RT13CM_POS                  _CCU6_UL(8)
#define CCU6_ISR_RT13CM_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RT13PM (w) */
#define CCU6_ISR_RT13PM_POS                  _CCU6_UL(9)
#define CCU6_ISR_RT13PM_LEN                  _CCU6_UL(1)

/* CCU6_ISR_RTRPF (w) */
#define CCU6_ISR_RTRPF_POS                   _CCU6_UL(10)
#define CCU6_ISR_RTRPF_LEN                   _CCU6_UL(1)

/* CCU6_ISR_RCHE (w) */
#define CCU6_ISR_RCHE_POS                    _CCU6_UL(12)
#define CCU6_ISR_RCHE_LEN                    _CCU6_UL(1)

/* CCU6_ISR_RWHE (w) */
#define CCU6_ISR_RWHE_POS                    _CCU6_UL(13)
#define CCU6_ISR_RWHE_LEN                    _CCU6_UL(1)

/* CCU6_ISR_RIDLE (w) */
#define CCU6_ISR_RIDLE_POS                   _CCU6_UL(14)
#define CCU6_ISR_RIDLE_LEN                   _CCU6_UL(1)

/* CCU6_ISR_RSTR (w) */
#define CCU6_ISR_RSTR_POS                    _CCU6_UL(15)
#define CCU6_ISR_RSTR_LEN                    _CCU6_UL(1)

/* CCU6_INP_INPCC60 (rw) */
#define CCU6_INP_INPCC60_POS                 _CCU6_UL(0)
#define CCU6_INP_INPCC60_LEN                 _CCU6_UL(2)

/* CCU6_INP_INPCC61 (rw) */
#define CCU6_INP_INPCC61_POS                 _CCU6_UL(2)
#define CCU6_INP_INPCC61_LEN                 _CCU6_UL(2)

/* CCU6_INP_INPCC62 (rw) */
#define CCU6_INP_INPCC62_POS                 _CCU6_UL(4)
#define CCU6_INP_INPCC62_LEN                 _CCU6_UL(2)

/* CCU6_INP_INPCHE (rw) */
#define CCU6_INP_INPCHE_POS                  _CCU6_UL(6)
#define CCU6_INP_INPCHE_LEN                  _CCU6_UL(2)

/* CCU6_INP_INPERR (rw) */
#define CCU6_INP_INPERR_POS                  _CCU6_UL(8)
#define CCU6_INP_INPERR_LEN                  _CCU6_UL(2)

/* CCU6_INP_INPT12 (rw) */
#define CCU6_INP_INPT12_POS                  _CCU6_UL(10)
#define CCU6_INP_INPT12_LEN                  _CCU6_UL(2)

/* CCU6_INP_INPT13 (rw) */
#define CCU6_INP_INPT13_POS                  _CCU6_UL(12)
#define CCU6_INP_INPT13_LEN                  _CCU6_UL(2)

/* CCU6_IEN_ENCC60R (rw) */
#define CCU6_IEN_ENCC60R_POS                 _CCU6_UL(0)
#define CCU6_IEN_ENCC60R_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENCC60F (rw) */
#define CCU6_IEN_ENCC60F_POS                 _CCU6_UL(1)
#define CCU6_IEN_ENCC60F_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENCC61R (rw) */
#define CCU6_IEN_ENCC61R_POS                 _CCU6_UL(2)
#define CCU6_IEN_ENCC61R_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENCC61F (rw) */
#define CCU6_IEN_ENCC61F_POS                 _CCU6_UL(3)
#define CCU6_IEN_ENCC61F_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENCC62R (rw) */
#define CCU6_IEN_ENCC62R_POS                 _CCU6_UL(4)
#define CCU6_IEN_ENCC62R_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENCC62F (rw) */
#define CCU6_IEN_ENCC62F_POS                 _CCU6_UL(5)
#define CCU6_IEN_ENCC62F_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENT12OM (rw) */
#define CCU6_IEN_ENT12OM_POS                 _CCU6_UL(6)
#define CCU6_IEN_ENT12OM_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENT12PM (rw) */
#define CCU6_IEN_ENT12PM_POS                 _CCU6_UL(7)
#define CCU6_IEN_ENT12PM_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENT13CM (rw) */
#define CCU6_IEN_ENT13CM_POS                 _CCU6_UL(8)
#define CCU6_IEN_ENT13CM_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENT13PM (rw) */
#define CCU6_IEN_ENT13PM_POS                 _CCU6_UL(9)
#define CCU6_IEN_ENT13PM_LEN                 _CCU6_UL(1)

/* CCU6_IEN_ENTRPF (rw) */
#define CCU6_IEN_ENTRPF_POS                  _CCU6_UL(10)
#define CCU6_IEN_ENTRPF_LEN                  _CCU6_UL(1)

/* CCU6_IEN_ENCHE (rw) */
#define CCU6_IEN_ENCHE_POS                   _CCU6_UL(12)
#define CCU6_IEN_ENCHE_LEN                   _CCU6_UL(1)

/* CCU6_IEN_ENWHE (rw) */
#define CCU6_IEN_ENWHE_POS                   _CCU6_UL(13)
#define CCU6_IEN_ENWHE_LEN                   _CCU6_UL(1)

/* CCU6_IEN_ENIDLE (rw) */
#define CCU6_IEN_ENIDLE_POS                  _CCU6_UL(14)
#define CCU6_IEN_ENIDLE_LEN                  _CCU6_UL(1)

/* CCU6_IEN_ENSTR (rw) */
#define CCU6_IEN_ENSTR_POS                   _CCU6_UL(15)
#define CCU6_IEN_ENSTR_LEN                   _CCU6_UL(1)

/* CCU6_SRC3_SRPN (rw) */
#define CCU6_SRC3_SRPN_POS                   _CCU6_UL(0)
#define CCU6_SRC3_SRPN_LEN                   _CCU6_UL(8)

/* CCU6_SRC3_TOS (rw) */
#define CCU6_SRC3_TOS_POS                    _CCU6_UL(10)
#define CCU6_SRC3_TOS_LEN                    _CCU6_UL(1)

/* CCU6_SRC3_SRE (rw) */
#define CCU6_SRC3_SRE_POS                    _CCU6_UL(12)
#define CCU6_SRC3_SRE_LEN                    _CCU6_UL(1)

/* CCU6_SRC3_SRR (rh) */
#define CCU6_SRC3_SRR_POS                    _CCU6_UL(13)
#define CCU6_SRC3_SRR_LEN                    _CCU6_UL(1)

/* CCU6_SRC3_CLRR (w) */
#define CCU6_SRC3_CLRR_POS                   _CCU6_UL(14)
#define CCU6_SRC3_CLRR_LEN                   _CCU6_UL(1)

/* CCU6_SRC3_SETR (w) */
#define CCU6_SRC3_SETR_POS                   _CCU6_UL(15)
#define CCU6_SRC3_SETR_LEN                   _CCU6_UL(1)

/* CCU6_SRC2_SRPN (rw) */
#define CCU6_SRC2_SRPN_POS                   _CCU6_UL(0)
#define CCU6_SRC2_SRPN_LEN                   _CCU6_UL(8)

/* CCU6_SRC2_TOS (rw) */
#define CCU6_SRC2_TOS_POS                    _CCU6_UL(10)
#define CCU6_SRC2_TOS_LEN                    _CCU6_UL(1)

/* CCU6_SRC2_SRE (rw) */
#define CCU6_SRC2_SRE_POS                    _CCU6_UL(12)
#define CCU6_SRC2_SRE_LEN                    _CCU6_UL(1)

/* CCU6_SRC2_SRR (rh) */
#define CCU6_SRC2_SRR_POS                    _CCU6_UL(13)
#define CCU6_SRC2_SRR_LEN                    _CCU6_UL(1)

/* CCU6_SRC2_CLRR (w) */
#define CCU6_SRC2_CLRR_POS                   _CCU6_UL(14)
#define CCU6_SRC2_CLRR_LEN                   _CCU6_UL(1)

/* CCU6_SRC2_SETR (w) */
#define CCU6_SRC2_SETR_POS                   _CCU6_UL(15)
#define CCU6_SRC2_SETR_LEN                   _CCU6_UL(1)

/* CCU6_SRC1_SRPN (rw) */
#define CCU6_SRC1_SRPN_POS                   _CCU6_UL(0)
#define CCU6_SRC1_SRPN_LEN                   _CCU6_UL(8)

/* CCU6_SRC1_TOS (rw) */
#define CCU6_SRC1_TOS_POS                    _CCU6_UL(10)
#define CCU6_SRC1_TOS_LEN                    _CCU6_UL(1)

/* CCU6_SRC1_SRE (rw) */
#define CCU6_SRC1_SRE_POS                    _CCU6_UL(12)
#define CCU6_SRC1_SRE_LEN                    _CCU6_UL(1)

/* CCU6_SRC1_SRR (rh) */
#define CCU6_SRC1_SRR_POS                    _CCU6_UL(13)
#define CCU6_SRC1_SRR_LEN                    _CCU6_UL(1)

/* CCU6_SRC1_CLRR (w) */
#define CCU6_SRC1_CLRR_POS                   _CCU6_UL(14)
#define CCU6_SRC1_CLRR_LEN                   _CCU6_UL(1)

/* CCU6_SRC1_SETR (w) */
#define CCU6_SRC1_SETR_POS                   _CCU6_UL(15)
#define CCU6_SRC1_SETR_LEN                   _CCU6_UL(1)

/* CCU6_SRC0_SRPN (rw) */
#define CCU6_SRC0_SRPN_POS                   _CCU6_UL(0)
#define CCU6_SRC0_SRPN_LEN                   _CCU6_UL(8)

/* CCU6_SRC0_TOS (rw) */
#define CCU6_SRC0_TOS_POS                    _CCU6_UL(10)
#define CCU6_SRC0_TOS_LEN                    _CCU6_UL(1)

/* CCU6_SRC0_SRE (rw) */
#define CCU6_SRC0_SRE_POS                    _CCU6_UL(12)
#define CCU6_SRC0_SRE_LEN                    _CCU6_UL(1)

/* CCU6_SRC0_SRR (rh) */
#define CCU6_SRC0_SRR_POS                    _CCU6_UL(13)
#define CCU6_SRC0_SRR_LEN                    _CCU6_UL(1)

/* CCU6_SRC0_CLRR (w) */
#define CCU6_SRC0_CLRR_POS                   _CCU6_UL(14)
#define CCU6_SRC0_CLRR_LEN                   _CCU6_UL(1)

/* CCU6_SRC0_SETR (w) */
#define CCU6_SRC0_SETR_POS                   _CCU6_UL(15)
#define CCU6_SRC0_SETR_LEN                   _CCU6_UL(1)

/* CCU60_MCFG_T12 (r) */
#define CCU60_MCFG_T12_POS                   _CCU6_UL(0)
#define CCU60_MCFG_T12_LEN                   _CCU6_UL(1)

/* CCU60_MCFG_T13 (r) */
#define CCU60_MCFG_T13_POS                   _CCU6_UL(1)
#define CCU60_MCFG_T13_LEN                   _CCU6_UL(1)

/* CCU60_MCFG_MCM (r) */
#define CCU60_MCFG_MCM_POS                   _CCU6_UL(2)
#define CCU60_MCFG_MCM_LEN                   _CCU6_UL(1)

/* CCU60_ID_MODREV (r) */
#define CCU60_ID_MODREV_POS                  _CCU6_UL(0)
#define CCU60_ID_MODREV_LEN                  _CCU6_UL(8)

/* CCU60_ID_MODNUM (r) */
#define CCU60_ID_MODNUM_POS                  _CCU6_UL(8)
#define CCU60_ID_MODNUM_LEN                  _CCU6_UL(8)

/* CCU60_MOSEL_TRIG0SEL (rw) */
#define CCU60_MOSEL_TRIG0SEL_POS             _CCU6_UL(0)
#define CCU60_MOSEL_TRIG0SEL_LEN             _CCU6_UL(3)

/* CCU60_MOSEL_TRIG1SEL (rw) */
#define CCU60_MOSEL_TRIG1SEL_POS             _CCU6_UL(3)
#define CCU60_MOSEL_TRIG1SEL_LEN             _CCU6_UL(3)

/* CCU60_MOSEL_TRIG2SEL (rw) */
#define CCU60_MOSEL_TRIG2SEL_POS             _CCU6_UL(6)
#define CCU60_MOSEL_TRIG2SEL_LEN             _CCU6_UL(3)

/* CCU60_PISEL0_ISCC60 (rw) */
#define CCU60_PISEL0_ISCC60_POS              _CCU6_UL(0)
#define CCU60_PISEL0_ISCC60_LEN              _CCU6_UL(2)

/* CCU60_PISEL0_ISCC61 (rw) */
#define CCU60_PISEL0_ISCC61_POS              _CCU6_UL(2)
#define CCU60_PISEL0_ISCC61_LEN              _CCU6_UL(2)

/* CCU60_PISEL0_ISCC62 (rw) */
#define CCU60_PISEL0_ISCC62_POS              _CCU6_UL(4)
#define CCU60_PISEL0_ISCC62_LEN              _CCU6_UL(2)

/* CCU60_PISEL0_ISTRP (rw) */
#define CCU60_PISEL0_ISTRP_POS               _CCU6_UL(6)
#define CCU60_PISEL0_ISTRP_LEN               _CCU6_UL(2)

/* CCU60_PISEL0_ISPOS0 (rw) */
#define CCU60_PISEL0_ISPOS0_POS              _CCU6_UL(8)
#define CCU60_PISEL0_ISPOS0_LEN              _CCU6_UL(2)

/* CCU60_PISEL0_ISPOS1 (rw) */
#define CCU60_PISEL0_ISPOS1_POS              _CCU6_UL(10)
#define CCU60_PISEL0_ISPOS1_LEN              _CCU6_UL(2)

/* CCU60_PISEL0_ISPOS2 (rw) */
#define CCU60_PISEL0_ISPOS2_POS              _CCU6_UL(12)
#define CCU60_PISEL0_ISPOS2_LEN              _CCU6_UL(2)

/* CCU60_PISEL0_IST12HR (rw) */
#define CCU60_PISEL0_IST12HR_POS             _CCU6_UL(14)
#define CCU60_PISEL0_IST12HR_LEN             _CCU6_UL(2)

/* CCU60_PISEL2_IST13HR (rw) */
#define CCU60_PISEL2_IST13HR_POS             _CCU6_UL(0)
#define CCU60_PISEL2_IST13HR_LEN             _CCU6_UL(2)

/* CCU60_PISEL2_ISCNT12 (rw) */
#define CCU60_PISEL2_ISCNT12_POS             _CCU6_UL(2)
#define CCU60_PISEL2_ISCNT12_LEN             _CCU6_UL(2)

/* CCU60_PISEL2_ISCNT13 (rw) */
#define CCU60_PISEL2_ISCNT13_POS             _CCU6_UL(4)
#define CCU60_PISEL2_ISCNT13_LEN             _CCU6_UL(2)

/* CCU60_PISEL2_T12EXT (rw) */
#define CCU60_PISEL2_T12EXT_POS              _CCU6_UL(6)
#define CCU60_PISEL2_T12EXT_LEN              _CCU6_UL(1)

/* CCU60_PISEL2_T13EXT (rw) */
#define CCU60_PISEL2_T13EXT_POS              _CCU6_UL(7)
#define CCU60_PISEL2_T13EXT_LEN              _CCU6_UL(1)

/* CCU60_KSCFG_MODEN (rw) */
#define CCU60_KSCFG_MODEN_POS                _CCU6_UL(0)
#define CCU60_KSCFG_MODEN_LEN                _CCU6_UL(1)

/* CCU60_KSCFG_BPMODEN (w) */
#define CCU60_KSCFG_BPMODEN_POS              _CCU6_UL(1)
#define CCU60_KSCFG_BPMODEN_LEN              _CCU6_UL(1)

/* CCU60_KSCFG_ACK (rh) */
#define CCU60_KSCFG_ACK_POS                  _CCU6_UL(2)
#define CCU60_KSCFG_ACK_LEN                  _CCU6_UL(1)

/* CCU60_KSCFG_SUSREQ (rh) */
#define CCU60_KSCFG_SUSREQ_POS               _CCU6_UL(3)
#define CCU60_KSCFG_SUSREQ_LEN               _CCU6_UL(1)

/* CCU60_KSCFG_NOMCFG (rw) */
#define CCU60_KSCFG_NOMCFG_POS               _CCU6_UL(4)
#define CCU60_KSCFG_NOMCFG_LEN               _CCU6_UL(2)

/* CCU60_KSCFG_BPNOM (w) */
#define CCU60_KSCFG_BPNOM_POS                _CCU6_UL(7)
#define CCU60_KSCFG_BPNOM_LEN                _CCU6_UL(1)

/* CCU60_KSCFG_SUMCFG (rw) */
#define CCU60_KSCFG_SUMCFG_POS               _CCU6_UL(8)
#define CCU60_KSCFG_SUMCFG_LEN               _CCU6_UL(2)

/* CCU60_KSCFG_BPSUM (w) */
#define CCU60_KSCFG_BPSUM_POS                _CCU6_UL(11)
#define CCU60_KSCFG_BPSUM_LEN                _CCU6_UL(1)

/* CCU60_KSCFG_COMCFG (rw) */
#define CCU60_KSCFG_COMCFG_POS               _CCU6_UL(12)
#define CCU60_KSCFG_COMCFG_LEN               _CCU6_UL(2)

/* CCU60_KSCFG_BPCOM (w) */
#define CCU60_KSCFG_BPCOM_POS                _CCU6_UL(15)
#define CCU60_KSCFG_BPCOM_LEN                _CCU6_UL(1)

/* CCU60_KSCSR_SB0 (rw) */
#define CCU60_KSCSR_SB0_POS                  _CCU6_UL(0)
#define CCU60_KSCSR_SB0_LEN                  _CCU6_UL(1)

/* CCU60_KSCSR_SB1 (rw) */
#define CCU60_KSCSR_SB1_POS                  _CCU6_UL(1)
#define CCU60_KSCSR_SB1_LEN                  _CCU6_UL(1)

/* CCU60_KSCSR_SB2 (rw) */
#define CCU60_KSCSR_SB2_POS                  _CCU6_UL(2)
#define CCU60_KSCSR_SB2_LEN                  _CCU6_UL(1)

/* CCU60_KSCSR_SB3 (rw) */
#define CCU60_KSCSR_SB3_POS                  _CCU6_UL(3)
#define CCU60_KSCSR_SB3_LEN                  _CCU6_UL(1)

/* CCU60_T12_T12CV (rwh) */
#define CCU60_T12_T12CV_POS                  _CCU6_UL(0)
#define CCU60_T12_T12CV_LEN                  _CCU6_UL(16)

/* CCU60_T12PR_T12PV (rwh) */
#define CCU60_T12PR_T12PV_POS                _CCU6_UL(0)
#define CCU60_T12PR_T12PV_LEN                _CCU6_UL(16)

/* CCU60_T12DTC_DTM (rw) */
#define CCU60_T12DTC_DTM_POS                 _CCU6_UL(0)
#define CCU60_T12DTC_DTM_LEN                 _CCU6_UL(8)

/* CCU60_T12DTC_DTE0 (rw) */
#define CCU60_T12DTC_DTE0_POS                _CCU6_UL(8)
#define CCU60_T12DTC_DTE0_LEN                _CCU6_UL(1)

/* CCU60_T12DTC_DTE1 (rw) */
#define CCU60_T12DTC_DTE1_POS                _CCU6_UL(9)
#define CCU60_T12DTC_DTE1_LEN                _CCU6_UL(1)

/* CCU60_T12DTC_DTE2 (rw) */
#define CCU60_T12DTC_DTE2_POS                _CCU6_UL(10)
#define CCU60_T12DTC_DTE2_LEN                _CCU6_UL(1)

/* CCU60_T12DTC_DTR0 (rh) */
#define CCU60_T12DTC_DTR0_POS                _CCU6_UL(12)
#define CCU60_T12DTC_DTR0_LEN                _CCU6_UL(1)

/* CCU60_T12DTC_DTR1 (rh) */
#define CCU60_T12DTC_DTR1_POS                _CCU6_UL(13)
#define CCU60_T12DTC_DTR1_LEN                _CCU6_UL(1)

/* CCU60_T12DTC_DTR2 (rh) */
#define CCU60_T12DTC_DTR2_POS                _CCU6_UL(14)
#define CCU60_T12DTC_DTR2_LEN                _CCU6_UL(1)

/* CCU60_CC60R_CCV (rh) */
#define CCU60_CC60R_CCV_POS                  _CCU6_UL(0)
#define CCU60_CC60R_CCV_LEN                  _CCU6_UL(16)

/* CCU60_CC61R_CCV (rh) */
#define CCU60_CC61R_CCV_POS                  _CCU6_UL(0)
#define CCU60_CC61R_CCV_LEN                  _CCU6_UL(16)

/* CCU60_CC62R_CCV (rh) */
#define CCU60_CC62R_CCV_POS                  _CCU6_UL(0)
#define CCU60_CC62R_CCV_LEN                  _CCU6_UL(16)

/* CCU60_CC60SR_CCS (rwh) */
#define CCU60_CC60SR_CCS_POS                 _CCU6_UL(0)
#define CCU60_CC60SR_CCS_LEN                 _CCU6_UL(16)

/* CCU60_CC61SR_CCS (rwh) */
#define CCU60_CC61SR_CCS_POS                 _CCU6_UL(0)
#define CCU60_CC61SR_CCS_LEN                 _CCU6_UL(16)

/* CCU60_CC62SR_CCS (rwh) */
#define CCU60_CC62SR_CCS_POS                 _CCU6_UL(0)
#define CCU60_CC62SR_CCS_LEN                 _CCU6_UL(16)

/* CCU60_T13_T13CV (rwh) */
#define CCU60_T13_T13CV_POS                  _CCU6_UL(0)
#define CCU60_T13_T13CV_LEN                  _CCU6_UL(16)

/* CCU60_T13PR_T13PV (rwh) */
#define CCU60_T13PR_T13PV_POS                _CCU6_UL(0)
#define CCU60_T13PR_T13PV_LEN                _CCU6_UL(16)

/* CCU60_CC63R_CCV (rh) */
#define CCU60_CC63R_CCV_POS                  _CCU6_UL(0)
#define CCU60_CC63R_CCV_LEN                  _CCU6_UL(16)

/* CCU60_CC63SR_CCS (rw) */
#define CCU60_CC63SR_CCS_POS                 _CCU6_UL(0)
#define CCU60_CC63SR_CCS_LEN                 _CCU6_UL(16)

/* CCU60_CMPSTAT_CC60ST (rh) */
#define CCU60_CMPSTAT_CC60ST_POS             _CCU6_UL(0)
#define CCU60_CMPSTAT_CC60ST_LEN             _CCU6_UL(1)

/* CCU60_CMPSTAT_CC61ST (rh) */
#define CCU60_CMPSTAT_CC61ST_POS             _CCU6_UL(1)
#define CCU60_CMPSTAT_CC61ST_LEN             _CCU6_UL(1)

/* CCU60_CMPSTAT_CC62ST (rh) */
#define CCU60_CMPSTAT_CC62ST_POS             _CCU6_UL(2)
#define CCU60_CMPSTAT_CC62ST_LEN             _CCU6_UL(1)

/* CCU60_CMPSTAT_CCPOS60 (rh) */
#define CCU60_CMPSTAT_CCPOS60_POS            _CCU6_UL(3)
#define CCU60_CMPSTAT_CCPOS60_LEN            _CCU6_UL(1)

/* CCU60_CMPSTAT_CCPOS61 (rh) */
#define CCU60_CMPSTAT_CCPOS61_POS            _CCU6_UL(4)
#define CCU60_CMPSTAT_CCPOS61_LEN            _CCU6_UL(1)

/* CCU60_CMPSTAT_CCPOS62 (rh) */
#define CCU60_CMPSTAT_CCPOS62_POS            _CCU6_UL(5)
#define CCU60_CMPSTAT_CCPOS62_LEN            _CCU6_UL(1)

/* CCU60_CMPSTAT_CC63ST (rh) */
#define CCU60_CMPSTAT_CC63ST_POS             _CCU6_UL(6)
#define CCU60_CMPSTAT_CC63ST_LEN             _CCU6_UL(1)

/* CCU60_CMPSTAT_CC60PS (rwh) */
#define CCU60_CMPSTAT_CC60PS_POS             _CCU6_UL(8)
#define CCU60_CMPSTAT_CC60PS_LEN             _CCU6_UL(1)

/* CCU60_CMPSTAT_COUT60PS (rwh) */
#define CCU60_CMPSTAT_COUT60PS_POS           _CCU6_UL(9)
#define CCU60_CMPSTAT_COUT60PS_LEN           _CCU6_UL(1)

/* CCU60_CMPSTAT_CC61PS (rwh) */
#define CCU60_CMPSTAT_CC61PS_POS             _CCU6_UL(10)
#define CCU60_CMPSTAT_CC61PS_LEN             _CCU6_UL(1)

/* CCU60_CMPSTAT_COUT61PS (rwh) */
#define CCU60_CMPSTAT_COUT61PS_POS           _CCU6_UL(11)
#define CCU60_CMPSTAT_COUT61PS_LEN           _CCU6_UL(1)

/* CCU60_CMPSTAT_CC62PS (rwh) */
#define CCU60_CMPSTAT_CC62PS_POS             _CCU6_UL(12)
#define CCU60_CMPSTAT_CC62PS_LEN             _CCU6_UL(1)

/* CCU60_CMPSTAT_COUT62PS (rwh) */
#define CCU60_CMPSTAT_COUT62PS_POS           _CCU6_UL(13)
#define CCU60_CMPSTAT_COUT62PS_LEN           _CCU6_UL(1)

/* CCU60_CMPSTAT_COUT63PS (rwh) */
#define CCU60_CMPSTAT_COUT63PS_POS           _CCU6_UL(14)
#define CCU60_CMPSTAT_COUT63PS_LEN           _CCU6_UL(1)

/* CCU60_CMPSTAT_T13IM (rwh) */
#define CCU60_CMPSTAT_T13IM_POS              _CCU6_UL(15)
#define CCU60_CMPSTAT_T13IM_LEN              _CCU6_UL(1)

/* CCU60_CMPMODIF_MCC60S (w) */
#define CCU60_CMPMODIF_MCC60S_POS            _CCU6_UL(0)
#define CCU60_CMPMODIF_MCC60S_LEN            _CCU6_UL(1)

/* CCU60_CMPMODIF_MCC61S (w) */
#define CCU60_CMPMODIF_MCC61S_POS            _CCU6_UL(1)
#define CCU60_CMPMODIF_MCC61S_LEN            _CCU6_UL(1)

/* CCU60_CMPMODIF_MCC62S (w) */
#define CCU60_CMPMODIF_MCC62S_POS            _CCU6_UL(2)
#define CCU60_CMPMODIF_MCC62S_LEN            _CCU6_UL(1)

/* CCU60_CMPMODIF_MCC63S (w) */
#define CCU60_CMPMODIF_MCC63S_POS            _CCU6_UL(7)
#define CCU60_CMPMODIF_MCC63S_LEN            _CCU6_UL(1)

/* CCU60_CMPMODIF_MCC60R (w) */
#define CCU60_CMPMODIF_MCC60R_POS            _CCU6_UL(8)
#define CCU60_CMPMODIF_MCC60R_LEN            _CCU6_UL(1)

/* CCU60_CMPMODIF_MCC61R (w) */
#define CCU60_CMPMODIF_MCC61R_POS            _CCU6_UL(9)
#define CCU60_CMPMODIF_MCC61R_LEN            _CCU6_UL(1)

/* CCU60_CMPMODIF_MCC62R (w) */
#define CCU60_CMPMODIF_MCC62R_POS            _CCU6_UL(10)
#define CCU60_CMPMODIF_MCC62R_LEN            _CCU6_UL(1)

/* CCU60_CMPMODIF_MCC63R (w) */
#define CCU60_CMPMODIF_MCC63R_POS            _CCU6_UL(14)
#define CCU60_CMPMODIF_MCC63R_LEN            _CCU6_UL(1)

/* CCU60_T12MSEL_MSEL60 (rw) */
#define CCU60_T12MSEL_MSEL60_POS             _CCU6_UL(0)
#define CCU60_T12MSEL_MSEL60_LEN             _CCU6_UL(4)

/* CCU60_T12MSEL_MSEL61 (rw) */
#define CCU60_T12MSEL_MSEL61_POS             _CCU6_UL(4)
#define CCU60_T12MSEL_MSEL61_LEN             _CCU6_UL(4)

/* CCU60_T12MSEL_MSEL62 (rw) */
#define CCU60_T12MSEL_MSEL62_POS             _CCU6_UL(8)
#define CCU60_T12MSEL_MSEL62_LEN             _CCU6_UL(4)

/* CCU60_T12MSEL_HSYNC (rw) */
#define CCU60_T12MSEL_HSYNC_POS              _CCU6_UL(12)
#define CCU60_T12MSEL_HSYNC_LEN              _CCU6_UL(3)

/* CCU60_T12MSEL_DBYP (rw) */
#define CCU60_T12MSEL_DBYP_POS               _CCU6_UL(15)
#define CCU60_T12MSEL_DBYP_LEN               _CCU6_UL(1)

/* CCU60_TCTR0_T12CLK (rw) */
#define CCU60_TCTR0_T12CLK_POS               _CCU6_UL(0)
#define CCU60_TCTR0_T12CLK_LEN               _CCU6_UL(3)

/* CCU60_TCTR0_T12PRE (rw) */
#define CCU60_TCTR0_T12PRE_POS               _CCU6_UL(3)
#define CCU60_TCTR0_T12PRE_LEN               _CCU6_UL(1)

/* CCU60_TCTR0_T12R (rh) */
#define CCU60_TCTR0_T12R_POS                 _CCU6_UL(4)
#define CCU60_TCTR0_T12R_LEN                 _CCU6_UL(1)

/* CCU60_TCTR0_STE12 (rh) */
#define CCU60_TCTR0_STE12_POS                _CCU6_UL(5)
#define CCU60_TCTR0_STE12_LEN                _CCU6_UL(1)

/* CCU60_TCTR0_CDIR (rh) */
#define CCU60_TCTR0_CDIR_POS                 _CCU6_UL(6)
#define CCU60_TCTR0_CDIR_LEN                 _CCU6_UL(1)

/* CCU60_TCTR0_CTM (rw) */
#define CCU60_TCTR0_CTM_POS                  _CCU6_UL(7)
#define CCU60_TCTR0_CTM_LEN                  _CCU6_UL(1)

/* CCU60_TCTR0_T13CLK (rw) */
#define CCU60_TCTR0_T13CLK_POS               _CCU6_UL(8)
#define CCU60_TCTR0_T13CLK_LEN               _CCU6_UL(3)

/* CCU60_TCTR0_T13PRE (rw) */
#define CCU60_TCTR0_T13PRE_POS               _CCU6_UL(11)
#define CCU60_TCTR0_T13PRE_LEN               _CCU6_UL(1)

/* CCU60_TCTR0_T13R (rh) */
#define CCU60_TCTR0_T13R_POS                 _CCU6_UL(12)
#define CCU60_TCTR0_T13R_LEN                 _CCU6_UL(1)

/* CCU60_TCTR0_STE13 (rh) */
#define CCU60_TCTR0_STE13_POS                _CCU6_UL(13)
#define CCU60_TCTR0_STE13_LEN                _CCU6_UL(1)

/* CCU60_TCTR2_T12SSC (rw) */
#define CCU60_TCTR2_T12SSC_POS               _CCU6_UL(0)
#define CCU60_TCTR2_T12SSC_LEN               _CCU6_UL(1)

/* CCU60_TCTR2_T13SSC (rw) */
#define CCU60_TCTR2_T13SSC_POS               _CCU6_UL(1)
#define CCU60_TCTR2_T13SSC_LEN               _CCU6_UL(1)

/* CCU60_TCTR2_T13TEC (rw) */
#define CCU60_TCTR2_T13TEC_POS               _CCU6_UL(2)
#define CCU60_TCTR2_T13TEC_LEN               _CCU6_UL(3)

/* CCU60_TCTR2_T13TED (rw) */
#define CCU60_TCTR2_T13TED_POS               _CCU6_UL(5)
#define CCU60_TCTR2_T13TED_LEN               _CCU6_UL(2)

/* CCU60_TCTR2_T12RSEL (rw) */
#define CCU60_TCTR2_T12RSEL_POS              _CCU6_UL(8)
#define CCU60_TCTR2_T12RSEL_LEN              _CCU6_UL(2)

/* CCU60_TCTR2_T13RSEL (rw) */
#define CCU60_TCTR2_T13RSEL_POS              _CCU6_UL(10)
#define CCU60_TCTR2_T13RSEL_LEN              _CCU6_UL(2)

/* CCU60_TCTR4_T12RR (w) */
#define CCU60_TCTR4_T12RR_POS                _CCU6_UL(0)
#define CCU60_TCTR4_T12RR_LEN                _CCU6_UL(1)

/* CCU60_TCTR4_T12RS (w) */
#define CCU60_TCTR4_T12RS_POS                _CCU6_UL(1)
#define CCU60_TCTR4_T12RS_LEN                _CCU6_UL(1)

/* CCU60_TCTR4_T12RES (w) */
#define CCU60_TCTR4_T12RES_POS               _CCU6_UL(2)
#define CCU60_TCTR4_T12RES_LEN               _CCU6_UL(1)

/* CCU60_TCTR4_DTRES (w) */
#define CCU60_TCTR4_DTRES_POS                _CCU6_UL(3)
#define CCU60_TCTR4_DTRES_LEN                _CCU6_UL(1)

/* CCU60_TCTR4_T12CNT (w) */
#define CCU60_TCTR4_T12CNT_POS               _CCU6_UL(5)
#define CCU60_TCTR4_T12CNT_LEN               _CCU6_UL(1)

/* CCU60_TCTR4_T12STR (w) */
#define CCU60_TCTR4_T12STR_POS               _CCU6_UL(6)
#define CCU60_TCTR4_T12STR_LEN               _CCU6_UL(1)

/* CCU60_TCTR4_T12STD (w) */
#define CCU60_TCTR4_T12STD_POS               _CCU6_UL(7)
#define CCU60_TCTR4_T12STD_LEN               _CCU6_UL(1)

/* CCU60_TCTR4_T13RR (w) */
#define CCU60_TCTR4_T13RR_POS                _CCU6_UL(8)
#define CCU60_TCTR4_T13RR_LEN                _CCU6_UL(1)

/* CCU60_TCTR4_T13RS (w) */
#define CCU60_TCTR4_T13RS_POS                _CCU6_UL(9)
#define CCU60_TCTR4_T13RS_LEN                _CCU6_UL(1)

/* CCU60_TCTR4_T13RES (w) */
#define CCU60_TCTR4_T13RES_POS               _CCU6_UL(10)
#define CCU60_TCTR4_T13RES_LEN               _CCU6_UL(1)

/* CCU60_TCTR4_T13CNT (w) */
#define CCU60_TCTR4_T13CNT_POS               _CCU6_UL(13)
#define CCU60_TCTR4_T13CNT_LEN               _CCU6_UL(1)

/* CCU60_TCTR4_T13STR (w) */
#define CCU60_TCTR4_T13STR_POS               _CCU6_UL(14)
#define CCU60_TCTR4_T13STR_LEN               _CCU6_UL(1)

/* CCU60_TCTR4_T13STD (w) */
#define CCU60_TCTR4_T13STD_POS               _CCU6_UL(15)
#define CCU60_TCTR4_T13STD_LEN               _CCU6_UL(1)

/* CCU60_MODCTR_T12MODEN (rw) */
#define CCU60_MODCTR_T12MODEN_POS            _CCU6_UL(0)
#define CCU60_MODCTR_T12MODEN_LEN            _CCU6_UL(6)

/* CCU60_MODCTR_MCMEN (rw) */
#define CCU60_MODCTR_MCMEN_POS               _CCU6_UL(7)
#define CCU60_MODCTR_MCMEN_LEN               _CCU6_UL(1)

/* CCU60_MODCTR_T13MODEN (rw) */
#define CCU60_MODCTR_T13MODEN_POS            _CCU6_UL(8)
#define CCU60_MODCTR_T13MODEN_LEN            _CCU6_UL(6)

/* CCU60_MODCTR_ECT13O (rw) */
#define CCU60_MODCTR_ECT13O_POS              _CCU6_UL(15)
#define CCU60_MODCTR_ECT13O_LEN              _CCU6_UL(1)

/* CCU60_TRPCTR_TRPM0 (rw) */
#define CCU60_TRPCTR_TRPM0_POS               _CCU6_UL(0)
#define CCU60_TRPCTR_TRPM0_LEN               _CCU6_UL(1)

/* CCU60_TRPCTR_TRPM1 (rw) */
#define CCU60_TRPCTR_TRPM1_POS               _CCU6_UL(1)
#define CCU60_TRPCTR_TRPM1_LEN               _CCU6_UL(1)

/* CCU60_TRPCTR_TRPM2 (rw) */
#define CCU60_TRPCTR_TRPM2_POS               _CCU6_UL(2)
#define CCU60_TRPCTR_TRPM2_LEN               _CCU6_UL(1)

/* CCU60_TRPCTR_TRPEN (rw) */
#define CCU60_TRPCTR_TRPEN_POS               _CCU6_UL(8)
#define CCU60_TRPCTR_TRPEN_LEN               _CCU6_UL(6)

/* CCU60_TRPCTR_TRPEN13 (rw) */
#define CCU60_TRPCTR_TRPEN13_POS             _CCU6_UL(14)
#define CCU60_TRPCTR_TRPEN13_LEN             _CCU6_UL(1)

/* CCU60_TRPCTR_TRPPEN (rw) */
#define CCU60_TRPCTR_TRPPEN_POS              _CCU6_UL(15)
#define CCU60_TRPCTR_TRPPEN_LEN              _CCU6_UL(1)

/* CCU60_PSLR_PSL (rwh) */
#define CCU60_PSLR_PSL_POS                   _CCU6_UL(0)
#define CCU60_PSLR_PSL_LEN                   _CCU6_UL(6)

/* CCU60_PSLR_PSL63 (rwh) */
#define CCU60_PSLR_PSL63_POS                 _CCU6_UL(7)
#define CCU60_PSLR_PSL63_LEN                 _CCU6_UL(1)

/* CCU60_MCMOUTS_MCMPS (rw) */
#define CCU60_MCMOUTS_MCMPS_POS              _CCU6_UL(0)
#define CCU60_MCMOUTS_MCMPS_LEN              _CCU6_UL(6)

/* CCU60_MCMOUTS_STRMCM (w) */
#define CCU60_MCMOUTS_STRMCM_POS             _CCU6_UL(7)
#define CCU60_MCMOUTS_STRMCM_LEN             _CCU6_UL(1)

/* CCU60_MCMOUTS_EXPHS (rw) */
#define CCU60_MCMOUTS_EXPHS_POS              _CCU6_UL(8)
#define CCU60_MCMOUTS_EXPHS_LEN              _CCU6_UL(3)

/* CCU60_MCMOUTS_CURHS (rw) */
#define CCU60_MCMOUTS_CURHS_POS              _CCU6_UL(11)
#define CCU60_MCMOUTS_CURHS_LEN              _CCU6_UL(3)

/* CCU60_MCMOUTS_STRHP (w) */
#define CCU60_MCMOUTS_STRHP_POS              _CCU6_UL(15)
#define CCU60_MCMOUTS_STRHP_LEN              _CCU6_UL(1)

/* CCU60_MCMOUT_MCMP (rh) */
#define CCU60_MCMOUT_MCMP_POS                _CCU6_UL(0)
#define CCU60_MCMOUT_MCMP_LEN                _CCU6_UL(6)

/* CCU60_MCMOUT_R (rh) */
#define CCU60_MCMOUT_R_POS                   _CCU6_UL(6)
#define CCU60_MCMOUT_R_LEN                   _CCU6_UL(1)

/* CCU60_MCMOUT_EXPH (rh) */
#define CCU60_MCMOUT_EXPH_POS                _CCU6_UL(8)
#define CCU60_MCMOUT_EXPH_LEN                _CCU6_UL(3)

/* CCU60_MCMOUT_CURH (rh) */
#define CCU60_MCMOUT_CURH_POS                _CCU6_UL(11)
#define CCU60_MCMOUT_CURH_LEN                _CCU6_UL(3)

/* CCU60_MCMCTR_SWSEL (rw) */
#define CCU60_MCMCTR_SWSEL_POS               _CCU6_UL(0)
#define CCU60_MCMCTR_SWSEL_LEN               _CCU6_UL(3)

/* CCU60_MCMCTR_SWSYN (rw) */
#define CCU60_MCMCTR_SWSYN_POS               _CCU6_UL(4)
#define CCU60_MCMCTR_SWSYN_LEN               _CCU6_UL(2)

/* CCU60_MCMCTR_STE12U (rw) */
#define CCU60_MCMCTR_STE12U_POS              _CCU6_UL(8)
#define CCU60_MCMCTR_STE12U_LEN              _CCU6_UL(1)

/* CCU60_MCMCTR_STE12D (rw) */
#define CCU60_MCMCTR_STE12D_POS              _CCU6_UL(9)
#define CCU60_MCMCTR_STE12D_LEN              _CCU6_UL(1)

/* CCU60_MCMCTR_STE13U (rw) */
#define CCU60_MCMCTR_STE13U_POS              _CCU6_UL(10)
#define CCU60_MCMCTR_STE13U_LEN              _CCU6_UL(1)

/* CCU60_IMON_LBE (rwh) */
#define CCU60_IMON_LBE_POS                   _CCU6_UL(0)
#define CCU60_IMON_LBE_LEN                   _CCU6_UL(1)

/* CCU60_IMON_CCPOS0I (rwh) */
#define CCU60_IMON_CCPOS0I_POS               _CCU6_UL(1)
#define CCU60_IMON_CCPOS0I_LEN               _CCU6_UL(1)

/* CCU60_IMON_CCPOS1I (rwh) */
#define CCU60_IMON_CCPOS1I_POS               _CCU6_UL(2)
#define CCU60_IMON_CCPOS1I_LEN               _CCU6_UL(1)

/* CCU60_IMON_CCPOS2I (rwh) */
#define CCU60_IMON_CCPOS2I_POS               _CCU6_UL(3)
#define CCU60_IMON_CCPOS2I_LEN               _CCU6_UL(1)

/* CCU60_IMON_CC60INI (rwh) */
#define CCU60_IMON_CC60INI_POS               _CCU6_UL(4)
#define CCU60_IMON_CC60INI_LEN               _CCU6_UL(1)

/* CCU60_IMON_CC61INI (rwh) */
#define CCU60_IMON_CC61INI_POS               _CCU6_UL(5)
#define CCU60_IMON_CC61INI_LEN               _CCU6_UL(1)

/* CCU60_IMON_CC62INI (rwh) */
#define CCU60_IMON_CC62INI_POS               _CCU6_UL(6)
#define CCU60_IMON_CC62INI_LEN               _CCU6_UL(1)

/* CCU60_IMON_CTRAPI (rwh) */
#define CCU60_IMON_CTRAPI_POS                _CCU6_UL(7)
#define CCU60_IMON_CTRAPI_LEN                _CCU6_UL(1)

/* CCU60_IMON_T12HRI (rwh) */
#define CCU60_IMON_T12HRI_POS                _CCU6_UL(8)
#define CCU60_IMON_T12HRI_LEN                _CCU6_UL(1)

/* CCU60_IMON_T13HRI (rwh) */
#define CCU60_IMON_T13HRI_POS                _CCU6_UL(9)
#define CCU60_IMON_T13HRI_LEN                _CCU6_UL(1)

/* CCU60_LI_CCPOS0EN (rw) */
#define CCU60_LI_CCPOS0EN_POS                _CCU6_UL(1)
#define CCU60_LI_CCPOS0EN_LEN                _CCU6_UL(1)

/* CCU60_LI_CCPOS1EN (rw) */
#define CCU60_LI_CCPOS1EN_POS                _CCU6_UL(2)
#define CCU60_LI_CCPOS1EN_LEN                _CCU6_UL(1)

/* CCU60_LI_CCPOS2EN (rw) */
#define CCU60_LI_CCPOS2EN_POS                _CCU6_UL(3)
#define CCU60_LI_CCPOS2EN_LEN                _CCU6_UL(1)

/* CCU60_LI_CC60INEN (rw) */
#define CCU60_LI_CC60INEN_POS                _CCU6_UL(4)
#define CCU60_LI_CC60INEN_LEN                _CCU6_UL(1)

/* CCU60_LI_CC61INEN (rw) */
#define CCU60_LI_CC61INEN_POS                _CCU6_UL(5)
#define CCU60_LI_CC61INEN_LEN                _CCU6_UL(1)

/* CCU60_LI_CC62INEN (rw) */
#define CCU60_LI_CC62INEN_POS                _CCU6_UL(6)
#define CCU60_LI_CC62INEN_LEN                _CCU6_UL(1)

/* CCU60_LI_CTRAPEN (rw) */
#define CCU60_LI_CTRAPEN_POS                 _CCU6_UL(7)
#define CCU60_LI_CTRAPEN_LEN                 _CCU6_UL(1)

/* CCU60_LI_T12HREN (rw) */
#define CCU60_LI_T12HREN_POS                 _CCU6_UL(8)
#define CCU60_LI_T12HREN_LEN                 _CCU6_UL(1)

/* CCU60_LI_T13HREN (rw) */
#define CCU60_LI_T13HREN_POS                 _CCU6_UL(9)
#define CCU60_LI_T13HREN_LEN                 _CCU6_UL(1)

/* CCU60_LI_LBEEN (rw) */
#define CCU60_LI_LBEEN_POS                   _CCU6_UL(13)
#define CCU60_LI_LBEEN_LEN                   _CCU6_UL(1)

/* CCU60_LI_INPLBE (rw) */
#define CCU60_LI_INPLBE_POS                  _CCU6_UL(14)
#define CCU60_LI_INPLBE_LEN                  _CCU6_UL(2)

/* CCU60_IS_ICC60R (rh) */
#define CCU60_IS_ICC60R_POS                  _CCU6_UL(0)
#define CCU60_IS_ICC60R_LEN                  _CCU6_UL(1)

/* CCU60_IS_ICC60F (rh) */
#define CCU60_IS_ICC60F_POS                  _CCU6_UL(1)
#define CCU60_IS_ICC60F_LEN                  _CCU6_UL(1)

/* CCU60_IS_ICC61R (rh) */
#define CCU60_IS_ICC61R_POS                  _CCU6_UL(2)
#define CCU60_IS_ICC61R_LEN                  _CCU6_UL(1)

/* CCU60_IS_ICC61F (rh) */
#define CCU60_IS_ICC61F_POS                  _CCU6_UL(3)
#define CCU60_IS_ICC61F_LEN                  _CCU6_UL(1)

/* CCU60_IS_ICC62R (rh) */
#define CCU60_IS_ICC62R_POS                  _CCU6_UL(4)
#define CCU60_IS_ICC62R_LEN                  _CCU6_UL(1)

/* CCU60_IS_ICC62F (rh) */
#define CCU60_IS_ICC62F_POS                  _CCU6_UL(5)
#define CCU60_IS_ICC62F_LEN                  _CCU6_UL(1)

/* CCU60_IS_T12OM (rh) */
#define CCU60_IS_T12OM_POS                   _CCU6_UL(6)
#define CCU60_IS_T12OM_LEN                   _CCU6_UL(1)

/* CCU60_IS_T12PM (rh) */
#define CCU60_IS_T12PM_POS                   _CCU6_UL(7)
#define CCU60_IS_T12PM_LEN                   _CCU6_UL(1)

/* CCU60_IS_T13CM (rh) */
#define CCU60_IS_T13CM_POS                   _CCU6_UL(8)
#define CCU60_IS_T13CM_LEN                   _CCU6_UL(1)

/* CCU60_IS_T13PM (rh) */
#define CCU60_IS_T13PM_POS                   _CCU6_UL(9)
#define CCU60_IS_T13PM_LEN                   _CCU6_UL(1)

/* CCU60_IS_TRPF (rh) */
#define CCU60_IS_TRPF_POS                    _CCU6_UL(10)
#define CCU60_IS_TRPF_LEN                    _CCU6_UL(1)

/* CCU60_IS_TRPS (rh) */
#define CCU60_IS_TRPS_POS                    _CCU6_UL(11)
#define CCU60_IS_TRPS_LEN                    _CCU6_UL(1)

/* CCU60_IS_CHE (rh) */
#define CCU60_IS_CHE_POS                     _CCU6_UL(12)
#define CCU60_IS_CHE_LEN                     _CCU6_UL(1)

/* CCU60_IS_WHE (rh) */
#define CCU60_IS_WHE_POS                     _CCU6_UL(13)
#define CCU60_IS_WHE_LEN                     _CCU6_UL(1)

/* CCU60_IS_IDLE (rh) */
#define CCU60_IS_IDLE_POS                    _CCU6_UL(14)
#define CCU60_IS_IDLE_LEN                    _CCU6_UL(1)

/* CCU60_IS_STR (rh) */
#define CCU60_IS_STR_POS                     _CCU6_UL(15)
#define CCU60_IS_STR_LEN                     _CCU6_UL(1)

/* CCU60_ISS_SCC60R (w) */
#define CCU60_ISS_SCC60R_POS                 _CCU6_UL(0)
#define CCU60_ISS_SCC60R_LEN                 _CCU6_UL(1)

/* CCU60_ISS_SCC60F (w) */
#define CCU60_ISS_SCC60F_POS                 _CCU6_UL(1)
#define CCU60_ISS_SCC60F_LEN                 _CCU6_UL(1)

/* CCU60_ISS_SCC61R (w) */
#define CCU60_ISS_SCC61R_POS                 _CCU6_UL(2)
#define CCU60_ISS_SCC61R_LEN                 _CCU6_UL(1)

/* CCU60_ISS_SCC61F (w) */
#define CCU60_ISS_SCC61F_POS                 _CCU6_UL(3)
#define CCU60_ISS_SCC61F_LEN                 _CCU6_UL(1)

/* CCU60_ISS_SCC62R (w) */
#define CCU60_ISS_SCC62R_POS                 _CCU6_UL(4)
#define CCU60_ISS_SCC62R_LEN                 _CCU6_UL(1)

/* CCU60_ISS_SCC62F (w) */
#define CCU60_ISS_SCC62F_POS                 _CCU6_UL(5)
#define CCU60_ISS_SCC62F_LEN                 _CCU6_UL(1)

/* CCU60_ISS_ST12OM (w) */
#define CCU60_ISS_ST12OM_POS                 _CCU6_UL(6)
#define CCU60_ISS_ST12OM_LEN                 _CCU6_UL(1)

/* CCU60_ISS_ST12PM (w) */
#define CCU60_ISS_ST12PM_POS                 _CCU6_UL(7)
#define CCU60_ISS_ST12PM_LEN                 _CCU6_UL(1)

/* CCU60_ISS_ST13CM (w) */
#define CCU60_ISS_ST13CM_POS                 _CCU6_UL(8)
#define CCU60_ISS_ST13CM_LEN                 _CCU6_UL(1)

/* CCU60_ISS_ST13PM (w) */
#define CCU60_ISS_ST13PM_POS                 _CCU6_UL(9)
#define CCU60_ISS_ST13PM_LEN                 _CCU6_UL(1)

/* CCU60_ISS_STRPF (w) */
#define CCU60_ISS_STRPF_POS                  _CCU6_UL(10)
#define CCU60_ISS_STRPF_LEN                  _CCU6_UL(1)

/* CCU60_ISS_SWHC (w) */
#define CCU60_ISS_SWHC_POS                   _CCU6_UL(11)
#define CCU60_ISS_SWHC_LEN                   _CCU6_UL(1)

/* CCU60_ISS_SCHE (w) */
#define CCU60_ISS_SCHE_POS                   _CCU6_UL(12)
#define CCU60_ISS_SCHE_LEN                   _CCU6_UL(1)

/* CCU60_ISS_SWHE (w) */
#define CCU60_ISS_SWHE_POS                   _CCU6_UL(13)
#define CCU60_ISS_SWHE_LEN                   _CCU6_UL(1)

/* CCU60_ISS_SIDLE (w) */
#define CCU60_ISS_SIDLE_POS                  _CCU6_UL(14)
#define CCU60_ISS_SIDLE_LEN                  _CCU6_UL(1)

/* CCU60_ISS_SSTR (w) */
#define CCU60_ISS_SSTR_POS                   _CCU6_UL(15)
#define CCU60_ISS_SSTR_LEN                   _CCU6_UL(1)

/* CCU60_ISR_RCC60R (w) */
#define CCU60_ISR_RCC60R_POS                 _CCU6_UL(0)
#define CCU60_ISR_RCC60R_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RCC60F (w) */
#define CCU60_ISR_RCC60F_POS                 _CCU6_UL(1)
#define CCU60_ISR_RCC60F_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RCC61R (w) */
#define CCU60_ISR_RCC61R_POS                 _CCU6_UL(2)
#define CCU60_ISR_RCC61R_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RCC61F (w) */
#define CCU60_ISR_RCC61F_POS                 _CCU6_UL(3)
#define CCU60_ISR_RCC61F_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RCC62R (w) */
#define CCU60_ISR_RCC62R_POS                 _CCU6_UL(4)
#define CCU60_ISR_RCC62R_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RCC62F (w) */
#define CCU60_ISR_RCC62F_POS                 _CCU6_UL(5)
#define CCU60_ISR_RCC62F_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RT12OM (w) */
#define CCU60_ISR_RT12OM_POS                 _CCU6_UL(6)
#define CCU60_ISR_RT12OM_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RT12PM (w) */
#define CCU60_ISR_RT12PM_POS                 _CCU6_UL(7)
#define CCU60_ISR_RT12PM_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RT13CM (w) */
#define CCU60_ISR_RT13CM_POS                 _CCU6_UL(8)
#define CCU60_ISR_RT13CM_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RT13PM (w) */
#define CCU60_ISR_RT13PM_POS                 _CCU6_UL(9)
#define CCU60_ISR_RT13PM_LEN                 _CCU6_UL(1)

/* CCU60_ISR_RTRPF (w) */
#define CCU60_ISR_RTRPF_POS                  _CCU6_UL(10)
#define CCU60_ISR_RTRPF_LEN                  _CCU6_UL(1)

/* CCU60_ISR_RCHE (w) */
#define CCU60_ISR_RCHE_POS                   _CCU6_UL(12)
#define CCU60_ISR_RCHE_LEN                   _CCU6_UL(1)

/* CCU60_ISR_RWHE (w) */
#define CCU60_ISR_RWHE_POS                   _CCU6_UL(13)
#define CCU60_ISR_RWHE_LEN                   _CCU6_UL(1)

/* CCU60_ISR_RIDLE (w) */
#define CCU60_ISR_RIDLE_POS                  _CCU6_UL(14)
#define CCU60_ISR_RIDLE_LEN                  _CCU6_UL(1)

/* CCU60_ISR_RSTR (w) */
#define CCU60_ISR_RSTR_POS                   _CCU6_UL(15)
#define CCU60_ISR_RSTR_LEN                   _CCU6_UL(1)

/* CCU60_INP_INPCC60 (rw) */
#define CCU60_INP_INPCC60_POS                _CCU6_UL(0)
#define CCU60_INP_INPCC60_LEN                _CCU6_UL(2)

/* CCU60_INP_INPCC61 (rw) */
#define CCU60_INP_INPCC61_POS                _CCU6_UL(2)
#define CCU60_INP_INPCC61_LEN                _CCU6_UL(2)

/* CCU60_INP_INPCC62 (rw) */
#define CCU60_INP_INPCC62_POS                _CCU6_UL(4)
#define CCU60_INP_INPCC62_LEN                _CCU6_UL(2)

/* CCU60_INP_INPCHE (rw) */
#define CCU60_INP_INPCHE_POS                 _CCU6_UL(6)
#define CCU60_INP_INPCHE_LEN                 _CCU6_UL(2)

/* CCU60_INP_INPERR (rw) */
#define CCU60_INP_INPERR_POS                 _CCU6_UL(8)
#define CCU60_INP_INPERR_LEN                 _CCU6_UL(2)

/* CCU60_INP_INPT12 (rw) */
#define CCU60_INP_INPT12_POS                 _CCU6_UL(10)
#define CCU60_INP_INPT12_LEN                 _CCU6_UL(2)

/* CCU60_INP_INPT13 (rw) */
#define CCU60_INP_INPT13_POS                 _CCU6_UL(12)
#define CCU60_INP_INPT13_LEN                 _CCU6_UL(2)

/* CCU60_IEN_ENCC60R (rw) */
#define CCU60_IEN_ENCC60R_POS                _CCU6_UL(0)
#define CCU60_IEN_ENCC60R_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENCC60F (rw) */
#define CCU60_IEN_ENCC60F_POS                _CCU6_UL(1)
#define CCU60_IEN_ENCC60F_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENCC61R (rw) */
#define CCU60_IEN_ENCC61R_POS                _CCU6_UL(2)
#define CCU60_IEN_ENCC61R_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENCC61F (rw) */
#define CCU60_IEN_ENCC61F_POS                _CCU6_UL(3)
#define CCU60_IEN_ENCC61F_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENCC62R (rw) */
#define CCU60_IEN_ENCC62R_POS                _CCU6_UL(4)
#define CCU60_IEN_ENCC62R_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENCC62F (rw) */
#define CCU60_IEN_ENCC62F_POS                _CCU6_UL(5)
#define CCU60_IEN_ENCC62F_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENT12OM (rw) */
#define CCU60_IEN_ENT12OM_POS                _CCU6_UL(6)
#define CCU60_IEN_ENT12OM_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENT12PM (rw) */
#define CCU60_IEN_ENT12PM_POS                _CCU6_UL(7)
#define CCU60_IEN_ENT12PM_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENT13CM (rw) */
#define CCU60_IEN_ENT13CM_POS                _CCU6_UL(8)
#define CCU60_IEN_ENT13CM_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENT13PM (rw) */
#define CCU60_IEN_ENT13PM_POS                _CCU6_UL(9)
#define CCU60_IEN_ENT13PM_LEN                _CCU6_UL(1)

/* CCU60_IEN_ENTRPF (rw) */
#define CCU60_IEN_ENTRPF_POS                 _CCU6_UL(10)
#define CCU60_IEN_ENTRPF_LEN                 _CCU6_UL(1)

/* CCU60_IEN_ENCHE (rw) */
#define CCU60_IEN_ENCHE_POS                  _CCU6_UL(12)
#define CCU60_IEN_ENCHE_LEN                  _CCU6_UL(1)

/* CCU60_IEN_ENWHE (rw) */
#define CCU60_IEN_ENWHE_POS                  _CCU6_UL(13)
#define CCU60_IEN_ENWHE_LEN                  _CCU6_UL(1)

/* CCU60_IEN_ENIDLE (rw) */
#define CCU60_IEN_ENIDLE_POS                 _CCU6_UL(14)
#define CCU60_IEN_ENIDLE_LEN                 _CCU6_UL(1)

/* CCU60_IEN_ENSTR (rw) */
#define CCU60_IEN_ENSTR_POS                  _CCU6_UL(15)
#define CCU60_IEN_ENSTR_LEN                  _CCU6_UL(1)

/* CCU60_SRC3_SRPN (rw) */
#define CCU60_SRC3_SRPN_POS                  _CCU6_UL(0)
#define CCU60_SRC3_SRPN_LEN                  _CCU6_UL(8)

/* CCU60_SRC3_TOS (rw) */
#define CCU60_SRC3_TOS_POS                   _CCU6_UL(10)
#define CCU60_SRC3_TOS_LEN                   _CCU6_UL(1)

/* CCU60_SRC3_SRE (rw) */
#define CCU60_SRC3_SRE_POS                   _CCU6_UL(12)
#define CCU60_SRC3_SRE_LEN                   _CCU6_UL(1)

/* CCU60_SRC3_SRR (rh) */
#define CCU60_SRC3_SRR_POS                   _CCU6_UL(13)
#define CCU60_SRC3_SRR_LEN                   _CCU6_UL(1)

/* CCU60_SRC3_CLRR (w) */
#define CCU60_SRC3_CLRR_POS                  _CCU6_UL(14)
#define CCU60_SRC3_CLRR_LEN                  _CCU6_UL(1)

/* CCU60_SRC3_SETR (w) */
#define CCU60_SRC3_SETR_POS                  _CCU6_UL(15)
#define CCU60_SRC3_SETR_LEN                  _CCU6_UL(1)

/* CCU60_SRC2_SRPN (rw) */
#define CCU60_SRC2_SRPN_POS                  _CCU6_UL(0)
#define CCU60_SRC2_SRPN_LEN                  _CCU6_UL(8)

/* CCU60_SRC2_TOS (rw) */
#define CCU60_SRC2_TOS_POS                   _CCU6_UL(10)
#define CCU60_SRC2_TOS_LEN                   _CCU6_UL(1)

/* CCU60_SRC2_SRE (rw) */
#define CCU60_SRC2_SRE_POS                   _CCU6_UL(12)
#define CCU60_SRC2_SRE_LEN                   _CCU6_UL(1)

/* CCU60_SRC2_SRR (rh) */
#define CCU60_SRC2_SRR_POS                   _CCU6_UL(13)
#define CCU60_SRC2_SRR_LEN                   _CCU6_UL(1)

/* CCU60_SRC2_CLRR (w) */
#define CCU60_SRC2_CLRR_POS                  _CCU6_UL(14)
#define CCU60_SRC2_CLRR_LEN                  _CCU6_UL(1)

/* CCU60_SRC2_SETR (w) */
#define CCU60_SRC2_SETR_POS                  _CCU6_UL(15)
#define CCU60_SRC2_SETR_LEN                  _CCU6_UL(1)

/* CCU60_SRC1_SRPN (rw) */
#define CCU60_SRC1_SRPN_POS                  _CCU6_UL(0)
#define CCU60_SRC1_SRPN_LEN                  _CCU6_UL(8)

/* CCU60_SRC1_TOS (rw) */
#define CCU60_SRC1_TOS_POS                   _CCU6_UL(10)
#define CCU60_SRC1_TOS_LEN                   _CCU6_UL(1)

/* CCU60_SRC1_SRE (rw) */
#define CCU60_SRC1_SRE_POS                   _CCU6_UL(12)
#define CCU60_SRC1_SRE_LEN                   _CCU6_UL(1)

/* CCU60_SRC1_SRR (rh) */
#define CCU60_SRC1_SRR_POS                   _CCU6_UL(13)
#define CCU60_SRC1_SRR_LEN                   _CCU6_UL(1)

/* CCU60_SRC1_CLRR (w) */
#define CCU60_SRC1_CLRR_POS                  _CCU6_UL(14)
#define CCU60_SRC1_CLRR_LEN                  _CCU6_UL(1)

/* CCU60_SRC1_SETR (w) */
#define CCU60_SRC1_SETR_POS                  _CCU6_UL(15)
#define CCU60_SRC1_SETR_LEN                  _CCU6_UL(1)

/* CCU60_SRC0_SRPN (rw) */
#define CCU60_SRC0_SRPN_POS                  _CCU6_UL(0)
#define CCU60_SRC0_SRPN_LEN                  _CCU6_UL(8)

/* CCU60_SRC0_TOS (rw) */
#define CCU60_SRC0_TOS_POS                   _CCU6_UL(10)
#define CCU60_SRC0_TOS_LEN                   _CCU6_UL(1)

/* CCU60_SRC0_SRE (rw) */
#define CCU60_SRC0_SRE_POS                   _CCU6_UL(12)
#define CCU60_SRC0_SRE_LEN                   _CCU6_UL(1)

/* CCU60_SRC0_SRR (rh) */
#define CCU60_SRC0_SRR_POS                   _CCU6_UL(13)
#define CCU60_SRC0_SRR_LEN                   _CCU6_UL(1)

/* CCU60_SRC0_CLRR (w) */
#define CCU60_SRC0_CLRR_POS                  _CCU6_UL(14)
#define CCU60_SRC0_CLRR_LEN                  _CCU6_UL(1)

/* CCU60_SRC0_SETR (w) */
#define CCU60_SRC0_SETR_POS                  _CCU6_UL(15)
#define CCU60_SRC0_SETR_LEN                  _CCU6_UL(1)

/* CCU61_MCFG_T12 (r) */
#define CCU61_MCFG_T12_POS                   _CCU6_UL(0)
#define CCU61_MCFG_T12_LEN                   _CCU6_UL(1)

/* CCU61_MCFG_T13 (r) */
#define CCU61_MCFG_T13_POS                   _CCU6_UL(1)
#define CCU61_MCFG_T13_LEN                   _CCU6_UL(1)

/* CCU61_MCFG_MCM (r) */
#define CCU61_MCFG_MCM_POS                   _CCU6_UL(2)
#define CCU61_MCFG_MCM_LEN                   _CCU6_UL(1)

/* CCU61_ID_MODREV (r) */
#define CCU61_ID_MODREV_POS                  _CCU6_UL(0)
#define CCU61_ID_MODREV_LEN                  _CCU6_UL(8)

/* CCU61_ID_MODNUM (r) */
#define CCU61_ID_MODNUM_POS                  _CCU6_UL(8)
#define CCU61_ID_MODNUM_LEN                  _CCU6_UL(8)

/* CCU61_PISEL0_ISCC60 (rw) */
#define CCU61_PISEL0_ISCC60_POS              _CCU6_UL(0)
#define CCU61_PISEL0_ISCC60_LEN              _CCU6_UL(2)

/* CCU61_PISEL0_ISCC61 (rw) */
#define CCU61_PISEL0_ISCC61_POS              _CCU6_UL(2)
#define CCU61_PISEL0_ISCC61_LEN              _CCU6_UL(2)

/* CCU61_PISEL0_ISCC62 (rw) */
#define CCU61_PISEL0_ISCC62_POS              _CCU6_UL(4)
#define CCU61_PISEL0_ISCC62_LEN              _CCU6_UL(2)

/* CCU61_PISEL0_ISTRP (rw) */
#define CCU61_PISEL0_ISTRP_POS               _CCU6_UL(6)
#define CCU61_PISEL0_ISTRP_LEN               _CCU6_UL(2)

/* CCU61_PISEL0_ISPOS0 (rw) */
#define CCU61_PISEL0_ISPOS0_POS              _CCU6_UL(8)
#define CCU61_PISEL0_ISPOS0_LEN              _CCU6_UL(2)

/* CCU61_PISEL0_ISPOS1 (rw) */
#define CCU61_PISEL0_ISPOS1_POS              _CCU6_UL(10)
#define CCU61_PISEL0_ISPOS1_LEN              _CCU6_UL(2)

/* CCU61_PISEL0_ISPOS2 (rw) */
#define CCU61_PISEL0_ISPOS2_POS              _CCU6_UL(12)
#define CCU61_PISEL0_ISPOS2_LEN              _CCU6_UL(2)

/* CCU61_PISEL0_IST12HR (rw) */
#define CCU61_PISEL0_IST12HR_POS             _CCU6_UL(14)
#define CCU61_PISEL0_IST12HR_LEN             _CCU6_UL(2)

/* CCU61_PISEL2_IST13HR (rw) */
#define CCU61_PISEL2_IST13HR_POS             _CCU6_UL(0)
#define CCU61_PISEL2_IST13HR_LEN             _CCU6_UL(2)

/* CCU61_PISEL2_ISCNT12 (rw) */
#define CCU61_PISEL2_ISCNT12_POS             _CCU6_UL(2)
#define CCU61_PISEL2_ISCNT12_LEN             _CCU6_UL(2)

/* CCU61_PISEL2_ISCNT13 (rw) */
#define CCU61_PISEL2_ISCNT13_POS             _CCU6_UL(4)
#define CCU61_PISEL2_ISCNT13_LEN             _CCU6_UL(2)

/* CCU61_PISEL2_T12EXT (rw) */
#define CCU61_PISEL2_T12EXT_POS              _CCU6_UL(6)
#define CCU61_PISEL2_T12EXT_LEN              _CCU6_UL(1)

/* CCU61_PISEL2_T13EXT (rw) */
#define CCU61_PISEL2_T13EXT_POS              _CCU6_UL(7)
#define CCU61_PISEL2_T13EXT_LEN              _CCU6_UL(1)

/* CCU61_KSCFG_MODEN (rw) */
#define CCU61_KSCFG_MODEN_POS                _CCU6_UL(0)
#define CCU61_KSCFG_MODEN_LEN                _CCU6_UL(1)

/* CCU61_KSCFG_BPMODEN (w) */
#define CCU61_KSCFG_BPMODEN_POS              _CCU6_UL(1)
#define CCU61_KSCFG_BPMODEN_LEN              _CCU6_UL(1)

/* CCU61_KSCFG_ACK (rh) */
#define CCU61_KSCFG_ACK_POS                  _CCU6_UL(2)
#define CCU61_KSCFG_ACK_LEN                  _CCU6_UL(1)

/* CCU61_KSCFG_SUSREQ (rh) */
#define CCU61_KSCFG_SUSREQ_POS               _CCU6_UL(3)
#define CCU61_KSCFG_SUSREQ_LEN               _CCU6_UL(1)

/* CCU61_KSCFG_NOMCFG (rw) */
#define CCU61_KSCFG_NOMCFG_POS               _CCU6_UL(4)
#define CCU61_KSCFG_NOMCFG_LEN               _CCU6_UL(2)

/* CCU61_KSCFG_BPNOM (w) */
#define CCU61_KSCFG_BPNOM_POS                _CCU6_UL(7)
#define CCU61_KSCFG_BPNOM_LEN                _CCU6_UL(1)

/* CCU61_KSCFG_SUMCFG (rw) */
#define CCU61_KSCFG_SUMCFG_POS               _CCU6_UL(8)
#define CCU61_KSCFG_SUMCFG_LEN               _CCU6_UL(2)

/* CCU61_KSCFG_BPSUM (w) */
#define CCU61_KSCFG_BPSUM_POS                _CCU6_UL(11)
#define CCU61_KSCFG_BPSUM_LEN                _CCU6_UL(1)

/* CCU61_KSCFG_COMCFG (rw) */
#define CCU61_KSCFG_COMCFG_POS               _CCU6_UL(12)
#define CCU61_KSCFG_COMCFG_LEN               _CCU6_UL(2)

/* CCU61_KSCFG_BPCOM (w) */
#define CCU61_KSCFG_BPCOM_POS                _CCU6_UL(15)
#define CCU61_KSCFG_BPCOM_LEN                _CCU6_UL(1)

/* CCU61_KSCSR_SB0 (rw) */
#define CCU61_KSCSR_SB0_POS                  _CCU6_UL(0)
#define CCU61_KSCSR_SB0_LEN                  _CCU6_UL(1)

/* CCU61_KSCSR_SB1 (rw) */
#define CCU61_KSCSR_SB1_POS                  _CCU6_UL(1)
#define CCU61_KSCSR_SB1_LEN                  _CCU6_UL(1)

/* CCU61_KSCSR_SB2 (rw) */
#define CCU61_KSCSR_SB2_POS                  _CCU6_UL(2)
#define CCU61_KSCSR_SB2_LEN                  _CCU6_UL(1)

/* CCU61_KSCSR_SB3 (rw) */
#define CCU61_KSCSR_SB3_POS                  _CCU6_UL(3)
#define CCU61_KSCSR_SB3_LEN                  _CCU6_UL(1)

/* CCU61_T12_T12CV (rwh) */
#define CCU61_T12_T12CV_POS                  _CCU6_UL(0)
#define CCU61_T12_T12CV_LEN                  _CCU6_UL(16)

/* CCU61_T12PR_T12PV (rwh) */
#define CCU61_T12PR_T12PV_POS                _CCU6_UL(0)
#define CCU61_T12PR_T12PV_LEN                _CCU6_UL(16)

/* CCU61_T12DTC_DTM (rw) */
#define CCU61_T12DTC_DTM_POS                 _CCU6_UL(0)
#define CCU61_T12DTC_DTM_LEN                 _CCU6_UL(8)

/* CCU61_T12DTC_DTE0 (rw) */
#define CCU61_T12DTC_DTE0_POS                _CCU6_UL(8)
#define CCU61_T12DTC_DTE0_LEN                _CCU6_UL(1)

/* CCU61_T12DTC_DTE1 (rw) */
#define CCU61_T12DTC_DTE1_POS                _CCU6_UL(9)
#define CCU61_T12DTC_DTE1_LEN                _CCU6_UL(1)

/* CCU61_T12DTC_DTE2 (rw) */
#define CCU61_T12DTC_DTE2_POS                _CCU6_UL(10)
#define CCU61_T12DTC_DTE2_LEN                _CCU6_UL(1)

/* CCU61_T12DTC_DTR0 (rh) */
#define CCU61_T12DTC_DTR0_POS                _CCU6_UL(12)
#define CCU61_T12DTC_DTR0_LEN                _CCU6_UL(1)

/* CCU61_T12DTC_DTR1 (rh) */
#define CCU61_T12DTC_DTR1_POS                _CCU6_UL(13)
#define CCU61_T12DTC_DTR1_LEN                _CCU6_UL(1)

/* CCU61_T12DTC_DTR2 (rh) */
#define CCU61_T12DTC_DTR2_POS                _CCU6_UL(14)
#define CCU61_T12DTC_DTR2_LEN                _CCU6_UL(1)

/* CCU61_CC60R_CCV (rh) */
#define CCU61_CC60R_CCV_POS                  _CCU6_UL(0)
#define CCU61_CC60R_CCV_LEN                  _CCU6_UL(16)

/* CCU61_CC61R_CCV (rh) */
#define CCU61_CC61R_CCV_POS                  _CCU6_UL(0)
#define CCU61_CC61R_CCV_LEN                  _CCU6_UL(16)

/* CCU61_CC62R_CCV (rh) */
#define CCU61_CC62R_CCV_POS                  _CCU6_UL(0)
#define CCU61_CC62R_CCV_LEN                  _CCU6_UL(16)

/* CCU61_CC60SR_CCS (rwh) */
#define CCU61_CC60SR_CCS_POS                 _CCU6_UL(0)
#define CCU61_CC60SR_CCS_LEN                 _CCU6_UL(16)

/* CCU61_CC61SR_CCS (rwh) */
#define CCU61_CC61SR_CCS_POS                 _CCU6_UL(0)
#define CCU61_CC61SR_CCS_LEN                 _CCU6_UL(16)

/* CCU61_CC62SR_CCS (rwh) */
#define CCU61_CC62SR_CCS_POS                 _CCU6_UL(0)
#define CCU61_CC62SR_CCS_LEN                 _CCU6_UL(16)

/* CCU61_T13_T13CV (rwh) */
#define CCU61_T13_T13CV_POS                  _CCU6_UL(0)
#define CCU61_T13_T13CV_LEN                  _CCU6_UL(16)

/* CCU61_T13PR_T13PV (rwh) */
#define CCU61_T13PR_T13PV_POS                _CCU6_UL(0)
#define CCU61_T13PR_T13PV_LEN                _CCU6_UL(16)

/* CCU61_CC63R_CCV (rh) */
#define CCU61_CC63R_CCV_POS                  _CCU6_UL(0)
#define CCU61_CC63R_CCV_LEN                  _CCU6_UL(16)

/* CCU61_CC63SR_CCS (rw) */
#define CCU61_CC63SR_CCS_POS                 _CCU6_UL(0)
#define CCU61_CC63SR_CCS_LEN                 _CCU6_UL(16)

/* CCU61_CMPSTAT_CC60ST (rh) */
#define CCU61_CMPSTAT_CC60ST_POS             _CCU6_UL(0)
#define CCU61_CMPSTAT_CC60ST_LEN             _CCU6_UL(1)

/* CCU61_CMPSTAT_CC61ST (rh) */
#define CCU61_CMPSTAT_CC61ST_POS             _CCU6_UL(1)
#define CCU61_CMPSTAT_CC61ST_LEN             _CCU6_UL(1)

/* CCU61_CMPSTAT_CC62ST (rh) */
#define CCU61_CMPSTAT_CC62ST_POS             _CCU6_UL(2)
#define CCU61_CMPSTAT_CC62ST_LEN             _CCU6_UL(1)

/* CCU61_CMPSTAT_CCPOS60 (rh) */
#define CCU61_CMPSTAT_CCPOS60_POS            _CCU6_UL(3)
#define CCU61_CMPSTAT_CCPOS60_LEN            _CCU6_UL(1)

/* CCU61_CMPSTAT_CCPOS61 (rh) */
#define CCU61_CMPSTAT_CCPOS61_POS            _CCU6_UL(4)
#define CCU61_CMPSTAT_CCPOS61_LEN            _CCU6_UL(1)

/* CCU61_CMPSTAT_CCPOS62 (rh) */
#define CCU61_CMPSTAT_CCPOS62_POS            _CCU6_UL(5)
#define CCU61_CMPSTAT_CCPOS62_LEN            _CCU6_UL(1)

/* CCU61_CMPSTAT_CC63ST (rh) */
#define CCU61_CMPSTAT_CC63ST_POS             _CCU6_UL(6)
#define CCU61_CMPSTAT_CC63ST_LEN             _CCU6_UL(1)

/* CCU61_CMPSTAT_CC60PS (rwh) */
#define CCU61_CMPSTAT_CC60PS_POS             _CCU6_UL(8)
#define CCU61_CMPSTAT_CC60PS_LEN             _CCU6_UL(1)

/* CCU61_CMPSTAT_COUT60PS (rwh) */
#define CCU61_CMPSTAT_COUT60PS_POS           _CCU6_UL(9)
#define CCU61_CMPSTAT_COUT60PS_LEN           _CCU6_UL(1)

/* CCU61_CMPSTAT_CC61PS (rwh) */
#define CCU61_CMPSTAT_CC61PS_POS             _CCU6_UL(10)
#define CCU61_CMPSTAT_CC61PS_LEN             _CCU6_UL(1)

/* CCU61_CMPSTAT_COUT61PS (rwh) */
#define CCU61_CMPSTAT_COUT61PS_POS           _CCU6_UL(11)
#define CCU61_CMPSTAT_COUT61PS_LEN           _CCU6_UL(1)

/* CCU61_CMPSTAT_CC62PS (rwh) */
#define CCU61_CMPSTAT_CC62PS_POS             _CCU6_UL(12)
#define CCU61_CMPSTAT_CC62PS_LEN             _CCU6_UL(1)

/* CCU61_CMPSTAT_COUT62PS (rwh) */
#define CCU61_CMPSTAT_COUT62PS_POS           _CCU6_UL(13)
#define CCU61_CMPSTAT_COUT62PS_LEN           _CCU6_UL(1)

/* CCU61_CMPSTAT_COUT63PS (rwh) */
#define CCU61_CMPSTAT_COUT63PS_POS           _CCU6_UL(14)
#define CCU61_CMPSTAT_COUT63PS_LEN           _CCU6_UL(1)

/* CCU61_CMPSTAT_T13IM (rwh) */
#define CCU61_CMPSTAT_T13IM_POS              _CCU6_UL(15)
#define CCU61_CMPSTAT_T13IM_LEN              _CCU6_UL(1)

/* CCU61_CMPMODIF_MCC60S (w) */
#define CCU61_CMPMODIF_MCC60S_POS            _CCU6_UL(0)
#define CCU61_CMPMODIF_MCC60S_LEN            _CCU6_UL(1)

/* CCU61_CMPMODIF_MCC61S (w) */
#define CCU61_CMPMODIF_MCC61S_POS            _CCU6_UL(1)
#define CCU61_CMPMODIF_MCC61S_LEN            _CCU6_UL(1)

/* CCU61_CMPMODIF_MCC62S (w) */
#define CCU61_CMPMODIF_MCC62S_POS            _CCU6_UL(2)
#define CCU61_CMPMODIF_MCC62S_LEN            _CCU6_UL(1)

/* CCU61_CMPMODIF_MCC63S (w) */
#define CCU61_CMPMODIF_MCC63S_POS            _CCU6_UL(7)
#define CCU61_CMPMODIF_MCC63S_LEN            _CCU6_UL(1)

/* CCU61_CMPMODIF_MCC60R (w) */
#define CCU61_CMPMODIF_MCC60R_POS            _CCU6_UL(8)
#define CCU61_CMPMODIF_MCC60R_LEN            _CCU6_UL(1)

/* CCU61_CMPMODIF_MCC61R (w) */
#define CCU61_CMPMODIF_MCC61R_POS            _CCU6_UL(9)
#define CCU61_CMPMODIF_MCC61R_LEN            _CCU6_UL(1)

/* CCU61_CMPMODIF_MCC62R (w) */
#define CCU61_CMPMODIF_MCC62R_POS            _CCU6_UL(10)
#define CCU61_CMPMODIF_MCC62R_LEN            _CCU6_UL(1)

/* CCU61_CMPMODIF_MCC63R (w) */
#define CCU61_CMPMODIF_MCC63R_POS            _CCU6_UL(14)
#define CCU61_CMPMODIF_MCC63R_LEN            _CCU6_UL(1)

/* CCU61_T12MSEL_MSEL60 (rw) */
#define CCU61_T12MSEL_MSEL60_POS             _CCU6_UL(0)
#define CCU61_T12MSEL_MSEL60_LEN             _CCU6_UL(4)

/* CCU61_T12MSEL_MSEL61 (rw) */
#define CCU61_T12MSEL_MSEL61_POS             _CCU6_UL(4)
#define CCU61_T12MSEL_MSEL61_LEN             _CCU6_UL(4)

/* CCU61_T12MSEL_MSEL62 (rw) */
#define CCU61_T12MSEL_MSEL62_POS             _CCU6_UL(8)
#define CCU61_T12MSEL_MSEL62_LEN             _CCU6_UL(4)

/* CCU61_T12MSEL_HSYNC (rw) */
#define CCU61_T12MSEL_HSYNC_POS              _CCU6_UL(12)
#define CCU61_T12MSEL_HSYNC_LEN              _CCU6_UL(3)

/* CCU61_T12MSEL_DBYP (rw) */
#define CCU61_T12MSEL_DBYP_POS               _CCU6_UL(15)
#define CCU61_T12MSEL_DBYP_LEN               _CCU6_UL(1)

/* CCU61_TCTR0_T12CLK (rw) */
#define CCU61_TCTR0_T12CLK_POS               _CCU6_UL(0)
#define CCU61_TCTR0_T12CLK_LEN               _CCU6_UL(3)

/* CCU61_TCTR0_T12PRE (rw) */
#define CCU61_TCTR0_T12PRE_POS               _CCU6_UL(3)
#define CCU61_TCTR0_T12PRE_LEN               _CCU6_UL(1)

/* CCU61_TCTR0_T12R (rh) */
#define CCU61_TCTR0_T12R_POS                 _CCU6_UL(4)
#define CCU61_TCTR0_T12R_LEN                 _CCU6_UL(1)

/* CCU61_TCTR0_STE12 (rh) */
#define CCU61_TCTR0_STE12_POS                _CCU6_UL(5)
#define CCU61_TCTR0_STE12_LEN                _CCU6_UL(1)

/* CCU61_TCTR0_CDIR (rh) */
#define CCU61_TCTR0_CDIR_POS                 _CCU6_UL(6)
#define CCU61_TCTR0_CDIR_LEN                 _CCU6_UL(1)

/* CCU61_TCTR0_CTM (rw) */
#define CCU61_TCTR0_CTM_POS                  _CCU6_UL(7)
#define CCU61_TCTR0_CTM_LEN                  _CCU6_UL(1)

/* CCU61_TCTR0_T13CLK (rw) */
#define CCU61_TCTR0_T13CLK_POS               _CCU6_UL(8)
#define CCU61_TCTR0_T13CLK_LEN               _CCU6_UL(3)

/* CCU61_TCTR0_T13PRE (rw) */
#define CCU61_TCTR0_T13PRE_POS               _CCU6_UL(11)
#define CCU61_TCTR0_T13PRE_LEN               _CCU6_UL(1)

/* CCU61_TCTR0_T13R (rh) */
#define CCU61_TCTR0_T13R_POS                 _CCU6_UL(12)
#define CCU61_TCTR0_T13R_LEN                 _CCU6_UL(1)

/* CCU61_TCTR0_STE13 (rh) */
#define CCU61_TCTR0_STE13_POS                _CCU6_UL(13)
#define CCU61_TCTR0_STE13_LEN                _CCU6_UL(1)

/* CCU61_TCTR2_T12SSC (rw) */
#define CCU61_TCTR2_T12SSC_POS               _CCU6_UL(0)
#define CCU61_TCTR2_T12SSC_LEN               _CCU6_UL(1)

/* CCU61_TCTR2_T13SSC (rw) */
#define CCU61_TCTR2_T13SSC_POS               _CCU6_UL(1)
#define CCU61_TCTR2_T13SSC_LEN               _CCU6_UL(1)

/* CCU61_TCTR2_T13TEC (rw) */
#define CCU61_TCTR2_T13TEC_POS               _CCU6_UL(2)
#define CCU61_TCTR2_T13TEC_LEN               _CCU6_UL(3)

/* CCU61_TCTR2_T13TED (rw) */
#define CCU61_TCTR2_T13TED_POS               _CCU6_UL(5)
#define CCU61_TCTR2_T13TED_LEN               _CCU6_UL(2)

/* CCU61_TCTR2_T12RSEL (rw) */
#define CCU61_TCTR2_T12RSEL_POS              _CCU6_UL(8)
#define CCU61_TCTR2_T12RSEL_LEN              _CCU6_UL(2)

/* CCU61_TCTR2_T13RSEL (rw) */
#define CCU61_TCTR2_T13RSEL_POS              _CCU6_UL(10)
#define CCU61_TCTR2_T13RSEL_LEN              _CCU6_UL(2)

/* CCU61_TCTR4_T12RR (w) */
#define CCU61_TCTR4_T12RR_POS                _CCU6_UL(0)
#define CCU61_TCTR4_T12RR_LEN                _CCU6_UL(1)

/* CCU61_TCTR4_T12RS (w) */
#define CCU61_TCTR4_T12RS_POS                _CCU6_UL(1)
#define CCU61_TCTR4_T12RS_LEN                _CCU6_UL(1)

/* CCU61_TCTR4_T12RES (w) */
#define CCU61_TCTR4_T12RES_POS               _CCU6_UL(2)
#define CCU61_TCTR4_T12RES_LEN               _CCU6_UL(1)

/* CCU61_TCTR4_DTRES (w) */
#define CCU61_TCTR4_DTRES_POS                _CCU6_UL(3)
#define CCU61_TCTR4_DTRES_LEN                _CCU6_UL(1)

/* CCU61_TCTR4_T12CNT (w) */
#define CCU61_TCTR4_T12CNT_POS               _CCU6_UL(5)
#define CCU61_TCTR4_T12CNT_LEN               _CCU6_UL(1)

/* CCU61_TCTR4_T12STR (w) */
#define CCU61_TCTR4_T12STR_POS               _CCU6_UL(6)
#define CCU61_TCTR4_T12STR_LEN               _CCU6_UL(1)

/* CCU61_TCTR4_T12STD (w) */
#define CCU61_TCTR4_T12STD_POS               _CCU6_UL(7)
#define CCU61_TCTR4_T12STD_LEN               _CCU6_UL(1)

/* CCU61_TCTR4_T13RR (w) */
#define CCU61_TCTR4_T13RR_POS                _CCU6_UL(8)
#define CCU61_TCTR4_T13RR_LEN                _CCU6_UL(1)

/* CCU61_TCTR4_T13RS (w) */
#define CCU61_TCTR4_T13RS_POS                _CCU6_UL(9)
#define CCU61_TCTR4_T13RS_LEN                _CCU6_UL(1)

/* CCU61_TCTR4_T13RES (w) */
#define CCU61_TCTR4_T13RES_POS               _CCU6_UL(10)
#define CCU61_TCTR4_T13RES_LEN               _CCU6_UL(1)

/* CCU61_TCTR4_T13CNT (w) */
#define CCU61_TCTR4_T13CNT_POS               _CCU6_UL(13)
#define CCU61_TCTR4_T13CNT_LEN               _CCU6_UL(1)

/* CCU61_TCTR4_T13STR (w) */
#define CCU61_TCTR4_T13STR_POS               _CCU6_UL(14)
#define CCU61_TCTR4_T13STR_LEN               _CCU6_UL(1)

/* CCU61_TCTR4_T13STD (w) */
#define CCU61_TCTR4_T13STD_POS               _CCU6_UL(15)
#define CCU61_TCTR4_T13STD_LEN               _CCU6_UL(1)

/* CCU61_MODCTR_T12MODEN (rw) */
#define CCU61_MODCTR_T12MODEN_POS            _CCU6_UL(0)
#define CCU61_MODCTR_T12MODEN_LEN            _CCU6_UL(6)

/* CCU61_MODCTR_MCMEN (rw) */
#define CCU61_MODCTR_MCMEN_POS               _CCU6_UL(7)
#define CCU61_MODCTR_MCMEN_LEN               _CCU6_UL(1)

/* CCU61_MODCTR_T13MODEN (rw) */
#define CCU61_MODCTR_T13MODEN_POS            _CCU6_UL(8)
#define CCU61_MODCTR_T13MODEN_LEN            _CCU6_UL(6)

/* CCU61_MODCTR_ECT13O (rw) */
#define CCU61_MODCTR_ECT13O_POS              _CCU6_UL(15)
#define CCU61_MODCTR_ECT13O_LEN              _CCU6_UL(1)

/* CCU61_TRPCTR_TRPM0 (rw) */
#define CCU61_TRPCTR_TRPM0_POS               _CCU6_UL(0)
#define CCU61_TRPCTR_TRPM0_LEN               _CCU6_UL(1)

/* CCU61_TRPCTR_TRPM1 (rw) */
#define CCU61_TRPCTR_TRPM1_POS               _CCU6_UL(1)
#define CCU61_TRPCTR_TRPM1_LEN               _CCU6_UL(1)

/* CCU61_TRPCTR_TRPM2 (rw) */
#define CCU61_TRPCTR_TRPM2_POS               _CCU6_UL(2)
#define CCU61_TRPCTR_TRPM2_LEN               _CCU6_UL(1)

/* CCU61_TRPCTR_TRPEN (rw) */
#define CCU61_TRPCTR_TRPEN_POS               _CCU6_UL(8)
#define CCU61_TRPCTR_TRPEN_LEN               _CCU6_UL(6)

/* CCU61_TRPCTR_TRPEN13 (rw) */
#define CCU61_TRPCTR_TRPEN13_POS             _CCU6_UL(14)
#define CCU61_TRPCTR_TRPEN13_LEN             _CCU6_UL(1)

/* CCU61_TRPCTR_TRPPEN (rw) */
#define CCU61_TRPCTR_TRPPEN_POS              _CCU6_UL(15)
#define CCU61_TRPCTR_TRPPEN_LEN              _CCU6_UL(1)

/* CCU61_PSLR_PSL (rwh) */
#define CCU61_PSLR_PSL_POS                   _CCU6_UL(0)
#define CCU61_PSLR_PSL_LEN                   _CCU6_UL(6)

/* CCU61_PSLR_PSL63 (rwh) */
#define CCU61_PSLR_PSL63_POS                 _CCU6_UL(7)
#define CCU61_PSLR_PSL63_LEN                 _CCU6_UL(1)

/* CCU61_MCMOUTS_MCMPS (rw) */
#define CCU61_MCMOUTS_MCMPS_POS              _CCU6_UL(0)
#define CCU61_MCMOUTS_MCMPS_LEN              _CCU6_UL(6)

/* CCU61_MCMOUTS_STRMCM (w) */
#define CCU61_MCMOUTS_STRMCM_POS             _CCU6_UL(7)
#define CCU61_MCMOUTS_STRMCM_LEN             _CCU6_UL(1)

/* CCU61_MCMOUTS_EXPHS (rw) */
#define CCU61_MCMOUTS_EXPHS_POS              _CCU6_UL(8)
#define CCU61_MCMOUTS_EXPHS_LEN              _CCU6_UL(3)

/* CCU61_MCMOUTS_CURHS (rw) */
#define CCU61_MCMOUTS_CURHS_POS              _CCU6_UL(11)
#define CCU61_MCMOUTS_CURHS_LEN              _CCU6_UL(3)

/* CCU61_MCMOUTS_STRHP (w) */
#define CCU61_MCMOUTS_STRHP_POS              _CCU6_UL(15)
#define CCU61_MCMOUTS_STRHP_LEN              _CCU6_UL(1)

/* CCU61_MCMOUT_MCMP (rh) */
#define CCU61_MCMOUT_MCMP_POS                _CCU6_UL(0)
#define CCU61_MCMOUT_MCMP_LEN                _CCU6_UL(6)

/* CCU61_MCMOUT_R (rh) */
#define CCU61_MCMOUT_R_POS                   _CCU6_UL(6)
#define CCU61_MCMOUT_R_LEN                   _CCU6_UL(1)

/* CCU61_MCMOUT_EXPH (rh) */
#define CCU61_MCMOUT_EXPH_POS                _CCU6_UL(8)
#define CCU61_MCMOUT_EXPH_LEN                _CCU6_UL(3)

/* CCU61_MCMOUT_CURH (rh) */
#define CCU61_MCMOUT_CURH_POS                _CCU6_UL(11)
#define CCU61_MCMOUT_CURH_LEN                _CCU6_UL(3)

/* CCU61_MCMCTR_SWSEL (rw) */
#define CCU61_MCMCTR_SWSEL_POS               _CCU6_UL(0)
#define CCU61_MCMCTR_SWSEL_LEN               _CCU6_UL(3)

/* CCU61_MCMCTR_SWSYN (rw) */
#define CCU61_MCMCTR_SWSYN_POS               _CCU6_UL(4)
#define CCU61_MCMCTR_SWSYN_LEN               _CCU6_UL(2)

/* CCU61_MCMCTR_STE12U (rw) */
#define CCU61_MCMCTR_STE12U_POS              _CCU6_UL(8)
#define CCU61_MCMCTR_STE12U_LEN              _CCU6_UL(1)

/* CCU61_MCMCTR_STE12D (rw) */
#define CCU61_MCMCTR_STE12D_POS              _CCU6_UL(9)
#define CCU61_MCMCTR_STE12D_LEN              _CCU6_UL(1)

/* CCU61_MCMCTR_STE13U (rw) */
#define CCU61_MCMCTR_STE13U_POS              _CCU6_UL(10)
#define CCU61_MCMCTR_STE13U_LEN              _CCU6_UL(1)

/* CCU61_IMON_LBE (rwh) */
#define CCU61_IMON_LBE_POS                   _CCU6_UL(0)
#define CCU61_IMON_LBE_LEN                   _CCU6_UL(1)

/* CCU61_IMON_CCPOS0I (rwh) */
#define CCU61_IMON_CCPOS0I_POS               _CCU6_UL(1)
#define CCU61_IMON_CCPOS0I_LEN               _CCU6_UL(1)

/* CCU61_IMON_CCPOS1I (rwh) */
#define CCU61_IMON_CCPOS1I_POS               _CCU6_UL(2)
#define CCU61_IMON_CCPOS1I_LEN               _CCU6_UL(1)

/* CCU61_IMON_CCPOS2I (rwh) */
#define CCU61_IMON_CCPOS2I_POS               _CCU6_UL(3)
#define CCU61_IMON_CCPOS2I_LEN               _CCU6_UL(1)

/* CCU61_IMON_CC60INI (rwh) */
#define CCU61_IMON_CC60INI_POS               _CCU6_UL(4)
#define CCU61_IMON_CC60INI_LEN               _CCU6_UL(1)

/* CCU61_IMON_CC61INI (rwh) */
#define CCU61_IMON_CC61INI_POS               _CCU6_UL(5)
#define CCU61_IMON_CC61INI_LEN               _CCU6_UL(1)

/* CCU61_IMON_CC62INI (rwh) */
#define CCU61_IMON_CC62INI_POS               _CCU6_UL(6)
#define CCU61_IMON_CC62INI_LEN               _CCU6_UL(1)

/* CCU61_IMON_CTRAPI (rwh) */
#define CCU61_IMON_CTRAPI_POS                _CCU6_UL(7)
#define CCU61_IMON_CTRAPI_LEN                _CCU6_UL(1)

/* CCU61_IMON_T12HRI (rwh) */
#define CCU61_IMON_T12HRI_POS                _CCU6_UL(8)
#define CCU61_IMON_T12HRI_LEN                _CCU6_UL(1)

/* CCU61_IMON_T13HRI (rwh) */
#define CCU61_IMON_T13HRI_POS                _CCU6_UL(9)
#define CCU61_IMON_T13HRI_LEN                _CCU6_UL(1)

/* CCU61_LI_CCPOS0EN (rw) */
#define CCU61_LI_CCPOS0EN_POS                _CCU6_UL(1)
#define CCU61_LI_CCPOS0EN_LEN                _CCU6_UL(1)

/* CCU61_LI_CCPOS1EN (rw) */
#define CCU61_LI_CCPOS1EN_POS                _CCU6_UL(2)
#define CCU61_LI_CCPOS1EN_LEN                _CCU6_UL(1)

/* CCU61_LI_CCPOS2EN (rw) */
#define CCU61_LI_CCPOS2EN_POS                _CCU6_UL(3)
#define CCU61_LI_CCPOS2EN_LEN                _CCU6_UL(1)

/* CCU61_LI_CC60INEN (rw) */
#define CCU61_LI_CC60INEN_POS                _CCU6_UL(4)
#define CCU61_LI_CC60INEN_LEN                _CCU6_UL(1)

/* CCU61_LI_CC61INEN (rw) */
#define CCU61_LI_CC61INEN_POS                _CCU6_UL(5)
#define CCU61_LI_CC61INEN_LEN                _CCU6_UL(1)

/* CCU61_LI_CC62INEN (rw) */
#define CCU61_LI_CC62INEN_POS                _CCU6_UL(6)
#define CCU61_LI_CC62INEN_LEN                _CCU6_UL(1)

/* CCU61_LI_CTRAPEN (rw) */
#define CCU61_LI_CTRAPEN_POS                 _CCU6_UL(7)
#define CCU61_LI_CTRAPEN_LEN                 _CCU6_UL(1)

/* CCU61_LI_T12HREN (rw) */
#define CCU61_LI_T12HREN_POS                 _CCU6_UL(8)
#define CCU61_LI_T12HREN_LEN                 _CCU6_UL(1)

/* CCU61_LI_T13HREN (rw) */
#define CCU61_LI_T13HREN_POS                 _CCU6_UL(9)
#define CCU61_LI_T13HREN_LEN                 _CCU6_UL(1)

/* CCU61_LI_LBEEN (rw) */
#define CCU61_LI_LBEEN_POS                   _CCU6_UL(13)
#define CCU61_LI_LBEEN_LEN                   _CCU6_UL(1)

/* CCU61_LI_INPLBE (rw) */
#define CCU61_LI_INPLBE_POS                  _CCU6_UL(14)
#define CCU61_LI_INPLBE_LEN                  _CCU6_UL(2)

/* CCU61_IS_ICC60R (rh) */
#define CCU61_IS_ICC60R_POS                  _CCU6_UL(0)
#define CCU61_IS_ICC60R_LEN                  _CCU6_UL(1)

/* CCU61_IS_ICC60F (rh) */
#define CCU61_IS_ICC60F_POS                  _CCU6_UL(1)
#define CCU61_IS_ICC60F_LEN                  _CCU6_UL(1)

/* CCU61_IS_ICC61R (rh) */
#define CCU61_IS_ICC61R_POS                  _CCU6_UL(2)
#define CCU61_IS_ICC61R_LEN                  _CCU6_UL(1)

/* CCU61_IS_ICC61F (rh) */
#define CCU61_IS_ICC61F_POS                  _CCU6_UL(3)
#define CCU61_IS_ICC61F_LEN                  _CCU6_UL(1)

/* CCU61_IS_ICC62R (rh) */
#define CCU61_IS_ICC62R_POS                  _CCU6_UL(4)
#define CCU61_IS_ICC62R_LEN                  _CCU6_UL(1)

/* CCU61_IS_ICC62F (rh) */
#define CCU61_IS_ICC62F_POS                  _CCU6_UL(5)
#define CCU61_IS_ICC62F_LEN                  _CCU6_UL(1)

/* CCU61_IS_T12OM (rh) */
#define CCU61_IS_T12OM_POS                   _CCU6_UL(6)
#define CCU61_IS_T12OM_LEN                   _CCU6_UL(1)

/* CCU61_IS_T12PM (rh) */
#define CCU61_IS_T12PM_POS                   _CCU6_UL(7)
#define CCU61_IS_T12PM_LEN                   _CCU6_UL(1)

/* CCU61_IS_T13CM (rh) */
#define CCU61_IS_T13CM_POS                   _CCU6_UL(8)
#define CCU61_IS_T13CM_LEN                   _CCU6_UL(1)

/* CCU61_IS_T13PM (rh) */
#define CCU61_IS_T13PM_POS                   _CCU6_UL(9)
#define CCU61_IS_T13PM_LEN                   _CCU6_UL(1)

/* CCU61_IS_TRPF (rh) */
#define CCU61_IS_TRPF_POS                    _CCU6_UL(10)
#define CCU61_IS_TRPF_LEN                    _CCU6_UL(1)

/* CCU61_IS_TRPS (rh) */
#define CCU61_IS_TRPS_POS                    _CCU6_UL(11)
#define CCU61_IS_TRPS_LEN                    _CCU6_UL(1)

/* CCU61_IS_CHE (rh) */
#define CCU61_IS_CHE_POS                     _CCU6_UL(12)
#define CCU61_IS_CHE_LEN                     _CCU6_UL(1)

/* CCU61_IS_WHE (rh) */
#define CCU61_IS_WHE_POS                     _CCU6_UL(13)
#define CCU61_IS_WHE_LEN                     _CCU6_UL(1)

/* CCU61_IS_IDLE (rh) */
#define CCU61_IS_IDLE_POS                    _CCU6_UL(14)
#define CCU61_IS_IDLE_LEN                    _CCU6_UL(1)

/* CCU61_IS_STR (rh) */
#define CCU61_IS_STR_POS                     _CCU6_UL(15)
#define CCU61_IS_STR_LEN                     _CCU6_UL(1)

/* CCU61_ISS_SCC60R (w) */
#define CCU61_ISS_SCC60R_POS                 _CCU6_UL(0)
#define CCU61_ISS_SCC60R_LEN                 _CCU6_UL(1)

/* CCU61_ISS_SCC60F (w) */
#define CCU61_ISS_SCC60F_POS                 _CCU6_UL(1)
#define CCU61_ISS_SCC60F_LEN                 _CCU6_UL(1)

/* CCU61_ISS_SCC61R (w) */
#define CCU61_ISS_SCC61R_POS                 _CCU6_UL(2)
#define CCU61_ISS_SCC61R_LEN                 _CCU6_UL(1)

/* CCU61_ISS_SCC61F (w) */
#define CCU61_ISS_SCC61F_POS                 _CCU6_UL(3)
#define CCU61_ISS_SCC61F_LEN                 _CCU6_UL(1)

/* CCU61_ISS_SCC62R (w) */
#define CCU61_ISS_SCC62R_POS                 _CCU6_UL(4)
#define CCU61_ISS_SCC62R_LEN                 _CCU6_UL(1)

/* CCU61_ISS_SCC62F (w) */
#define CCU61_ISS_SCC62F_POS                 _CCU6_UL(5)
#define CCU61_ISS_SCC62F_LEN                 _CCU6_UL(1)

/* CCU61_ISS_ST12OM (w) */
#define CCU61_ISS_ST12OM_POS                 _CCU6_UL(6)
#define CCU61_ISS_ST12OM_LEN                 _CCU6_UL(1)

/* CCU61_ISS_ST12PM (w) */
#define CCU61_ISS_ST12PM_POS                 _CCU6_UL(7)
#define CCU61_ISS_ST12PM_LEN                 _CCU6_UL(1)

/* CCU61_ISS_ST13CM (w) */
#define CCU61_ISS_ST13CM_POS                 _CCU6_UL(8)
#define CCU61_ISS_ST13CM_LEN                 _CCU6_UL(1)

/* CCU61_ISS_ST13PM (w) */
#define CCU61_ISS_ST13PM_POS                 _CCU6_UL(9)
#define CCU61_ISS_ST13PM_LEN                 _CCU6_UL(1)

/* CCU61_ISS_STRPF (w) */
#define CCU61_ISS_STRPF_POS                  _CCU6_UL(10)
#define CCU61_ISS_STRPF_LEN                  _CCU6_UL(1)

/* CCU61_ISS_SWHC (w) */
#define CCU61_ISS_SWHC_POS                   _CCU6_UL(11)
#define CCU61_ISS_SWHC_LEN                   _CCU6_UL(1)

/* CCU61_ISS_SCHE (w) */
#define CCU61_ISS_SCHE_POS                   _CCU6_UL(12)
#define CCU61_ISS_SCHE_LEN                   _CCU6_UL(1)

/* CCU61_ISS_SWHE (w) */
#define CCU61_ISS_SWHE_POS                   _CCU6_UL(13)
#define CCU61_ISS_SWHE_LEN                   _CCU6_UL(1)

/* CCU61_ISS_SIDLE (w) */
#define CCU61_ISS_SIDLE_POS                  _CCU6_UL(14)
#define CCU61_ISS_SIDLE_LEN                  _CCU6_UL(1)

/* CCU61_ISS_SSTR (w) */
#define CCU61_ISS_SSTR_POS                   _CCU6_UL(15)
#define CCU61_ISS_SSTR_LEN                   _CCU6_UL(1)

/* CCU61_ISR_RCC60R (w) */
#define CCU61_ISR_RCC60R_POS                 _CCU6_UL(0)
#define CCU61_ISR_RCC60R_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RCC60F (w) */
#define CCU61_ISR_RCC60F_POS                 _CCU6_UL(1)
#define CCU61_ISR_RCC60F_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RCC61R (w) */
#define CCU61_ISR_RCC61R_POS                 _CCU6_UL(2)
#define CCU61_ISR_RCC61R_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RCC61F (w) */
#define CCU61_ISR_RCC61F_POS                 _CCU6_UL(3)
#define CCU61_ISR_RCC61F_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RCC62R (w) */
#define CCU61_ISR_RCC62R_POS                 _CCU6_UL(4)
#define CCU61_ISR_RCC62R_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RCC62F (w) */
#define CCU61_ISR_RCC62F_POS                 _CCU6_UL(5)
#define CCU61_ISR_RCC62F_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RT12OM (w) */
#define CCU61_ISR_RT12OM_POS                 _CCU6_UL(6)
#define CCU61_ISR_RT12OM_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RT12PM (w) */
#define CCU61_ISR_RT12PM_POS                 _CCU6_UL(7)
#define CCU61_ISR_RT12PM_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RT13CM (w) */
#define CCU61_ISR_RT13CM_POS                 _CCU6_UL(8)
#define CCU61_ISR_RT13CM_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RT13PM (w) */
#define CCU61_ISR_RT13PM_POS                 _CCU6_UL(9)
#define CCU61_ISR_RT13PM_LEN                 _CCU6_UL(1)

/* CCU61_ISR_RTRPF (w) */
#define CCU61_ISR_RTRPF_POS                  _CCU6_UL(10)
#define CCU61_ISR_RTRPF_LEN                  _CCU6_UL(1)

/* CCU61_ISR_RCHE (w) */
#define CCU61_ISR_RCHE_POS                   _CCU6_UL(12)
#define CCU61_ISR_RCHE_LEN                   _CCU6_UL(1)

/* CCU61_ISR_RWHE (w) */
#define CCU61_ISR_RWHE_POS                   _CCU6_UL(13)
#define CCU61_ISR_RWHE_LEN                   _CCU6_UL(1)

/* CCU61_ISR_RIDLE (w) */
#define CCU61_ISR_RIDLE_POS                  _CCU6_UL(14)
#define CCU61_ISR_RIDLE_LEN                  _CCU6_UL(1)

/* CCU61_ISR_RSTR (w) */
#define CCU61_ISR_RSTR_POS                   _CCU6_UL(15)
#define CCU61_ISR_RSTR_LEN                   _CCU6_UL(1)

/* CCU61_INP_INPCC60 (rw) */
#define CCU61_INP_INPCC60_POS                _CCU6_UL(0)
#define CCU61_INP_INPCC60_LEN                _CCU6_UL(2)

/* CCU61_INP_INPCC61 (rw) */
#define CCU61_INP_INPCC61_POS                _CCU6_UL(2)
#define CCU61_INP_INPCC61_LEN                _CCU6_UL(2)

/* CCU61_INP_INPCC62 (rw) */
#define CCU61_INP_INPCC62_POS                _CCU6_UL(4)
#define CCU61_INP_INPCC62_LEN                _CCU6_UL(2)

/* CCU61_INP_INPCHE (rw) */
#define CCU61_INP_INPCHE_POS                 _CCU6_UL(6)
#define CCU61_INP_INPCHE_LEN                 _CCU6_UL(2)

/* CCU61_INP_INPERR (rw) */
#define CCU61_INP_INPERR_POS                 _CCU6_UL(8)
#define CCU61_INP_INPERR_LEN                 _CCU6_UL(2)

/* CCU61_INP_INPT12 (rw) */
#define CCU61_INP_INPT12_POS                 _CCU6_UL(10)
#define CCU61_INP_INPT12_LEN                 _CCU6_UL(2)

/* CCU61_INP_INPT13 (rw) */
#define CCU61_INP_INPT13_POS                 _CCU6_UL(12)
#define CCU61_INP_INPT13_LEN                 _CCU6_UL(2)

/* CCU61_IEN_ENCC60R (rw) */
#define CCU61_IEN_ENCC60R_POS                _CCU6_UL(0)
#define CCU61_IEN_ENCC60R_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENCC60F (rw) */
#define CCU61_IEN_ENCC60F_POS                _CCU6_UL(1)
#define CCU61_IEN_ENCC60F_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENCC61R (rw) */
#define CCU61_IEN_ENCC61R_POS                _CCU6_UL(2)
#define CCU61_IEN_ENCC61R_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENCC61F (rw) */
#define CCU61_IEN_ENCC61F_POS                _CCU6_UL(3)
#define CCU61_IEN_ENCC61F_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENCC62R (rw) */
#define CCU61_IEN_ENCC62R_POS                _CCU6_UL(4)
#define CCU61_IEN_ENCC62R_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENCC62F (rw) */
#define CCU61_IEN_ENCC62F_POS                _CCU6_UL(5)
#define CCU61_IEN_ENCC62F_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENT12OM (rw) */
#define CCU61_IEN_ENT12OM_POS                _CCU6_UL(6)
#define CCU61_IEN_ENT12OM_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENT12PM (rw) */
#define CCU61_IEN_ENT12PM_POS                _CCU6_UL(7)
#define CCU61_IEN_ENT12PM_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENT13CM (rw) */
#define CCU61_IEN_ENT13CM_POS                _CCU6_UL(8)
#define CCU61_IEN_ENT13CM_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENT13PM (rw) */
#define CCU61_IEN_ENT13PM_POS                _CCU6_UL(9)
#define CCU61_IEN_ENT13PM_LEN                _CCU6_UL(1)

/* CCU61_IEN_ENTRPF (rw) */
#define CCU61_IEN_ENTRPF_POS                 _CCU6_UL(10)
#define CCU61_IEN_ENTRPF_LEN                 _CCU6_UL(1)

/* CCU61_IEN_ENCHE (rw) */
#define CCU61_IEN_ENCHE_POS                  _CCU6_UL(12)
#define CCU61_IEN_ENCHE_LEN                  _CCU6_UL(1)

/* CCU61_IEN_ENWHE (rw) */
#define CCU61_IEN_ENWHE_POS                  _CCU6_UL(13)
#define CCU61_IEN_ENWHE_LEN                  _CCU6_UL(1)

/* CCU61_IEN_ENIDLE (rw) */
#define CCU61_IEN_ENIDLE_POS                 _CCU6_UL(14)
#define CCU61_IEN_ENIDLE_LEN                 _CCU6_UL(1)

/* CCU61_IEN_ENSTR (rw) */
#define CCU61_IEN_ENSTR_POS                  _CCU6_UL(15)
#define CCU61_IEN_ENSTR_LEN                  _CCU6_UL(1)

/* CCU61_SRC3_SRPN (rw) */
#define CCU61_SRC3_SRPN_POS                  _CCU6_UL(0)
#define CCU61_SRC3_SRPN_LEN                  _CCU6_UL(8)

/* CCU61_SRC3_TOS (rw) */
#define CCU61_SRC3_TOS_POS                   _CCU6_UL(10)
#define CCU61_SRC3_TOS_LEN                   _CCU6_UL(1)

/* CCU61_SRC3_SRE (rw) */
#define CCU61_SRC3_SRE_POS                   _CCU6_UL(12)
#define CCU61_SRC3_SRE_LEN                   _CCU6_UL(1)

/* CCU61_SRC3_SRR (rh) */
#define CCU61_SRC3_SRR_POS                   _CCU6_UL(13)
#define CCU61_SRC3_SRR_LEN                   _CCU6_UL(1)

/* CCU61_SRC3_CLRR (w) */
#define CCU61_SRC3_CLRR_POS                  _CCU6_UL(14)
#define CCU61_SRC3_CLRR_LEN                  _CCU6_UL(1)

/* CCU61_SRC3_SETR (w) */
#define CCU61_SRC3_SETR_POS                  _CCU6_UL(15)
#define CCU61_SRC3_SETR_LEN                  _CCU6_UL(1)

/* CCU61_SRC2_SRPN (rw) */
#define CCU61_SRC2_SRPN_POS                  _CCU6_UL(0)
#define CCU61_SRC2_SRPN_LEN                  _CCU6_UL(8)

/* CCU61_SRC2_TOS (rw) */
#define CCU61_SRC2_TOS_POS                   _CCU6_UL(10)
#define CCU61_SRC2_TOS_LEN                   _CCU6_UL(1)

/* CCU61_SRC2_SRE (rw) */
#define CCU61_SRC2_SRE_POS                   _CCU6_UL(12)
#define CCU61_SRC2_SRE_LEN                   _CCU6_UL(1)

/* CCU61_SRC2_SRR (rh) */
#define CCU61_SRC2_SRR_POS                   _CCU6_UL(13)
#define CCU61_SRC2_SRR_LEN                   _CCU6_UL(1)

/* CCU61_SRC2_CLRR (w) */
#define CCU61_SRC2_CLRR_POS                  _CCU6_UL(14)
#define CCU61_SRC2_CLRR_LEN                  _CCU6_UL(1)

/* CCU61_SRC2_SETR (w) */
#define CCU61_SRC2_SETR_POS                  _CCU6_UL(15)
#define CCU61_SRC2_SETR_LEN                  _CCU6_UL(1)

/* CCU61_SRC1_SRPN (rw) */
#define CCU61_SRC1_SRPN_POS                  _CCU6_UL(0)
#define CCU61_SRC1_SRPN_LEN                  _CCU6_UL(8)

/* CCU61_SRC1_TOS (rw) */
#define CCU61_SRC1_TOS_POS                   _CCU6_UL(10)
#define CCU61_SRC1_TOS_LEN                   _CCU6_UL(1)

/* CCU61_SRC1_SRE (rw) */
#define CCU61_SRC1_SRE_POS                   _CCU6_UL(12)
#define CCU61_SRC1_SRE_LEN                   _CCU6_UL(1)

/* CCU61_SRC1_SRR (rh) */
#define CCU61_SRC1_SRR_POS                   _CCU6_UL(13)
#define CCU61_SRC1_SRR_LEN                   _CCU6_UL(1)

/* CCU61_SRC1_CLRR (w) */
#define CCU61_SRC1_CLRR_POS                  _CCU6_UL(14)
#define CCU61_SRC1_CLRR_LEN                  _CCU6_UL(1)

/* CCU61_SRC1_SETR (w) */
#define CCU61_SRC1_SETR_POS                  _CCU6_UL(15)
#define CCU61_SRC1_SETR_LEN                  _CCU6_UL(1)

/* CCU61_SRC0_SRPN (rw) */
#define CCU61_SRC0_SRPN_POS                  _CCU6_UL(0)
#define CCU61_SRC0_SRPN_LEN                  _CCU6_UL(8)

/* CCU61_SRC0_TOS (rw) */
#define CCU61_SRC0_TOS_POS                   _CCU6_UL(10)
#define CCU61_SRC0_TOS_LEN                   _CCU6_UL(1)

/* CCU61_SRC0_SRE (rw) */
#define CCU61_SRC0_SRE_POS                   _CCU6_UL(12)
#define CCU61_SRC0_SRE_LEN                   _CCU6_UL(1)

/* CCU61_SRC0_SRR (rh) */
#define CCU61_SRC0_SRR_POS                   _CCU6_UL(13)
#define CCU61_SRC0_SRR_LEN                   _CCU6_UL(1)

/* CCU61_SRC0_CLRR (w) */
#define CCU61_SRC0_CLRR_POS                  _CCU6_UL(14)
#define CCU61_SRC0_CLRR_LEN                  _CCU6_UL(1)

/* CCU61_SRC0_SETR (w) */
#define CCU61_SRC0_SETR_POS                  _CCU6_UL(15)
#define CCU61_SRC0_SETR_LEN                  _CCU6_UL(1)

#endif
