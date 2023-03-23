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
 * $Filename__:ignh_pcp.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:UWDAEMMR$
 * $Date______:16.08.2010$
 * $Class_____:SWHDR$
 * $Name______:ignh_pcp$
 * $Variant___:2.20.0$
 * $Revision__:3$
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
 * 2.20.0; 3     16.08.2010 UWDAEMMR
 *   Removed more MISRA warnings
 * 
 * 2.20.0; 2     13.08.2010 UWDAEMMR
 *   Removed MISRA warning
 * 
 * 2.20.0; 1     10.08.2010 UWDAEMMR
 *   Fixed dummy FPI read address.
 * 
 * 2.20.0; 0     18.05.2010 UWDAEMMR
 *   Implemented workaround for Tricore erratum PCP_TC.038
 * 
 * 2.19.0; 0     01.03.2010 BUA2ABT
 *   Support of IgnCl_Tmpr
 * 
 * 2.17.0; 0     20.10.2009 BUA2ABT
 *   changes for support of 12 cylinders
 * 
 * 2.14.1; 0     24.11.2008 HIA3SI
 *   Component Toolbox-Import
 * 
 * 2.14.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * 2.13.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _IGNH_PCP_H
#define _IGNH_PCP_H

#include "pcp.h"
#include "gpta.h"
#include "epm.h"
#include "ignh.h"



/* Index symbols for array access within ChlData
   Keep consistent with ignh.h - IgnH_ChlData_t! */
#define IGNH_IA (ChlData+0)
#define IGNH_T0PLUSDELAY (ChlData+0)
#define IGNH_DwT (ChlData+1)
#define IGNH_FSPT (ChlData+2)
#define IGNH_FSDwT (ChlData+3)
#define IGNH_IAMAX (ChlData+4)
#define IGNH_NOFS (ChlData+5)
#define IGNH_State (ChlData+6)
#define IGNH_FLAGS (ChlData+7)
#define IGNH_MODE (ChlData+7)
#define IGNH_IA_TMP (ChlData+8)
#define IGNH_DwT_TMP (ChlData+9)
#define IGNH_FSPT_TMP (ChlData+10)
#define IGNH_FSDwT_TMP (ChlData+11)
#define IGNH_NOFS_TMP (ChlData+12)
#define IGNH_FLAGS_TMP (ChlData+13)
/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if ( (defined(IGNARCDURMONI)&&(IGNARCDURMONI==1)) || (defined(IGNCL_CLCRNTMON)&&(IGNCL_CLCRNTMON==1)) )
#define IGNH_SPMON_DWELL_START_FLAG (ChlData+14)
#endif

/* Index symbols for array access within ChlConst
   Keep consistent with ignh.h - IgnH_ChlConst_t! */
#define IGNH_GTCCTR (ChlConst+0)
#define IGNH_GTCSRN (ChlConst+1)
#define IGNH_GTCSRSC (ChlConst+2)
#define IGNH_GTCSRS_MASK (ChlConst+3)
#define IGNH_LTCCTR (ChlConst+4)
#define IGNH_LTCSRN (ChlConst+5)
#define IGNH_LTCSRSC (ChlConst+6)
#define IGNH_LTCSRS_MASK (ChlConst+7)


/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if ( ((defined IGNARCDURMONI) && (IGNARCDURMONI == 1)) || ((defined IGNINCIR) && (IGNINCIR == 1))  || (defined(IGNCL_CLCRNTMON) && (IGNCL_CLCRNTMON==1)) )
#define IGNH_CHL_MASK (ChlConst+8)
#endif


/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if ( ((defined IGNARCDURMONI) && (IGNARCDURMONI == 1)))
#define IGNH_SPMON_TIMER_CTR (ChlConst+9)
#define IGNH_SPMON_TIMER_SRSC (ChlConst+10)
#define IGNH_SPMON_TIMER_SRS_MASK (ChlConst+11)
#define IGNH_SPMON_PARTNERCHANNEL_MASK (ChlConst+12)
#endif


/* Address offset between GTC.CTR and GTC.XR:
   Be aware that there are many points in ignh PCP assembler code that rely on the size
   of the values below to be less than 6bits. */
/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#ifdef MAXSIM   /* MaxSim environment */
/* Address offset between GTC.CTR and GTC.XR */
#  define IGNH_GTCXR_OFFS (sizeof(uint32))
/* Address offset between GTC[n].CTR and GTC[n-1].CTR */
#  define IGNH_GTCCTR_OFFS (sizeof(uint32) << 1)
#else
/* Use non ANSI extension "typeof" of gcc, but this way connected with GPTA0_RegMap_t
   hardware register struct. */
/* Address offset between GTC.CTR and GTC.XR */
#  define IGNH_GTCXR_OFFS (sizeof(typeof(GPTA0.GTC[0].GTCCTR)))
/* Address offset between GTC[n].CTR and GTC[n-1].CTR */
#  define IGNH_GTCCTR_OFFS (sizeof(typeof(GPTA0.GTC[0])))
#endif

/* Address offset between LTC.CTR and LTC.XR */
#define IGNH_LTCXR_OFFS 4


/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if ((defined IGNINCIR) && (IGNINCIR == 1))
/* Offset address of register reg in CSA of channel program of priority prio:
   1 page <==> prio % 7 = prio & 0x07 */
/* ***** CAVEAT *****
   Writing a foreign CSA will only work, if PCP "maximum channel no. check"
   [PCP2.CS.PPE] is DISABLED! Otherwise a PCP error will be generated on CSA
   write access. */
#define IGNH_PCP_CHCSA_REG(prio, reg) (8*(((prio) & 0x07) + 1) - ((reg) + 1))
/* DPTR of CSA depends on channel priority: DPTR = prio/8 [integer arithm.]
   channels 1 .. 7 <==> page 0; channels 8 .. 15 <==> page 1 etc. */
#define IGNH_DIST_CSA_DPTR_NO_IEN (((IGNH_DIST_PRIO/8) << PCP_R7_DPTR_POS_NDT) |\
                                   (0x01 << PCP_R7_CEN_POS_NDT))
#endif

/* Address offset between GTTIM0 and GTTIM1 */
// #define IGNH_GTTIM_OFFS (4*sizeof(uint32))

/* Symbol condition code for test of pin state */
#if (IGNH_PIN_ACTIVE == TRUE)
#  define IGNH_DATAOUT_COND set
#  define IGNH_INVDATAOUT_COND clr
#else
#  define IGNH_DATAOUT_COND clr
#  define IGNH_INVDATAOUT_COND set
#endif

/* mask for r6.cnt1 field */
#define IGNH_R6_CNT1_MASK IGNH_MASK(PCP_R6_CNT1_LEN, PCP_R6_CNT1_POS)


/* Global label address symbols made visible in debugger - prototypes */
#define IGNH_PCP_CODE_ATTR __attribute__ ((asection(".pcptext", "f=axp")))
/* extern void IgnH_ChlFSM(void) IGNH_PCP_POST_ATTR;  --> comes from pcp_auto_conf.h  */
extern void IGNH_PCP_CODE_ATTR IgnH_ChlFSM_Idle(void);
extern void IGNH_PCP_CODE_ATTR IgnH_ChlFSM_Triggered(void);
extern void IGNH_PCP_CODE_ATTR IgnH_ChlFSM_Released(void);
extern void IGNH_PCP_CODE_ATTR IgnH_ChlFSM_DwellPeriod(void);
extern void IGNH_PCP_CODE_ATTR IgnH_ChlFSM_IgnFollowUp(void);
extern void IGNH_PCP_CODE_ATTR IgnH_ChlFSM_IgnCompleted(void);
extern void IGNH_PCP_CODE_ATTR IgnH_ChlFSM_WaitMinOffTime(void);
extern void IGNH_PCP_CODE_ATTR IgnH_ChlFSM_WaitMaxIgnAngle(void);


/***************************************************************************************************/
/* Inline macros for PCP. */
/***************************************************************************************************/
/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if ((defined IGNINCIR) && (IGNINCIR == 1))
/* IGNH_SETENA_INC_IR_PCP | IGNH_CLRENA_INC_IR_PCP
 ***************************************************************************************************
 * Set/clear 'enable INC_IR' flag of running channel. Inline Macro.
 *
 * Set or clear flag in IgnH_Distributor_INC_IR CSA-r1 and enable/disable INC_IR SRN.
 * Set: Set flag in IgnH_Distributor_INC_IR CSA-r1.
 *      Test IncIRSRN - if enabled, exit
 *                      if disabled,
 * ***** CAVEAT *****
 * Writing a foreign CSA will only work, if PCP "maximum channel no. check"
 * [PCP2.CS.PPE] is DISABLED! Otherwise a PCP error will be generated on CSA
 * write access.
 *
 *   Inputs: Register mapped
 *             TMP0, TMP1, [TMP2]
 *           PRAM
 *             IGNH_CHL_MASK - mask [bit# == chl#] of running channel.
 *           Constants
 *             NO_TMP1 - number of register TMP1 w/o 'r' prefix.
 *
 *   Output: PRAM
 *             IgnH_Distributor_INC_IR CSA-r1 - PRAM IgnH_Distributor_INC_IR CSA.
 *
 *           Labels
 *             _IGNH_CLRENA_INC_IR_PCP_EXIT, _IGNH_SETENA_INC_IR_PCP_EXIT
 *
 *   Registers changed:
 *           TMP0, TMP1, TMP2
 *
 ***************************************************************************************************
 */
#define IGNH_SETENA_INC_IR_PCP(TMP0, TMP1, NO_TMP1, TMP2, _IGNH_SETENA_INC_IR_PCP_EXIT)\
     /* EPN_TC1796_PCP_TC_026_v1_0: disable interrupt around mset_pi, mclr_pi, xch_pi. */\
     /* According to docu. addendum EPN_TC1796_PCP_docu_addendum_v1_0, it takes */\
     /* 2 cycles for the IR to become disabled before an atomic PRAM access like mclr_pi. */\
     /* PCP_TC.038: needs disabled IR and dummy ld_f immediately before mset_pi, mclr_pi */\
     ld_pi(TMP1, IGNH_CHL_MASK)                /* TMP1 = mask of executing channel: bit# == chl# */\
     mov(TMP0, r7, uc)                         /* save r7 */\
     ldl_il(r7, IGNH_DIST_CSA_DPTR_NO_IEN)     /* new DPTR into r7; access CSA, IR disabled */\
     ldl_i(TMP2, &(GPTA0.GTTIM1))              /* PCP_TC.038: load any valid [2 cycles] */\
                                               /* FPI address. r7 points to the home channel. */\
     ld_f(TMP2, TMP2, 32)                      /* PCP_TC.038: dummy ld_f */\
     /* set atomically bit# for chl in TMP1 [= CSA-IGNH_DIST] */\
     mset_pi(TMP1, IGNH_PCP_CHCSA_REG(IGNH_DIST_PRIO, 1))\
     ldl_il(r7, IgnHIncIRSRN_DPTR_NO_IEN)      /* new DPTR into r7 */\
     ld_pi(TMP1, IgnHIncIRSRN_FAR)             /* TMP1 = &IgnHIncIRSRN */\
     ld_f(TMP2, TMP1, 16)                      /* TMP2 = IncIRSRN */\
     chkb(TMP2, GPTA_SRC_SRE_POS, set)         /* test IncIRSRN enable flag */\
     jc(_IGNH_SETENA_INC_IR_PCP_EXIT, c)\
     /* IncIRSRN was disabled */\
     set_f(TMP1, GPTA_SRC_CLRR_POS, 16)        /* clear old service requests that were raised, */\
                                               /* when SRN was disabled */\
     set_f(TMP1, GPTA_SRC_SRE_POS, 16)         /* enable IncIRSRN */\
     /* IncIRSRN was enabled */\
LABEL (_IGNH_SETENA_INC_IR_PCP_EXIT)\
     mov(r7, TMP0, uc)                         /* restore r7, reenable IR */

#define IGNH_CLRENA_INC_IR_PCP(TMP0, TMP1, NO_TMP1, TMP2, _IGNH_CLRENA_INC_IR_PCP_EXIT)\
     /* EPN_TC1796_PCP_TC_026_v1_0: disable interrupt around mset_pi, mclr_pi, xch_pi. */\
     /* According to docu. addendum EPN_TC1796_PCP_docu_addendum_v1_0, it takes */\
     /* 2 cycles for the IR to become disabled before an atomic PRAM access like mclr_pi. */\
     /* PCP_TC.038: needs disabled IR and dummy ld_f immediately before mset_pi, mclr_pi */\
     ld_pi(TMP1, IGNH_CHL_MASK)                /* TMP1 = mask of executing channel: bit# == chl# */\
     mov(TMP0, r7, uc)                         /* save r7 */\
     ldl_il(r7, IGNH_DIST_CSA_DPTR_NO_IEN)     /* new DPTR into r7; access CSA, IR disabled */\
     nop()                                     /* due to EPN_TC1796_PCP_docu_addendum_v1_0 */\
     /* clr atomically bit# for chl in mask 'TMP1[CSA-IGNH_DIST]' in PRAM; TMP1 = PRAM after clr */\
     not(TMP1, TMP1, uc)                       /* TMP1 = ~(mask of executing channel) */\
     ldl_i(TMP2, &(GPTA0.GTTIM1))              /* PCP_TC.038: load any valid */\
                                               /* FPI address. r7 points to the home channel. */\
     ld_f(TMP2, TMP2, 32)                      /* PCP_TC.038: dummy ld_f */\
     mclr_pi(TMP1, IGNH_PCP_CHCSA_REG(IGNH_DIST_PRIO, 1)) /* TMP1 = PRAM = TMP1 & ~(mask) */\
     /* mclr/mset appear to change CC even though not documented in TC17xx manuals! */\
     jc(_IGNH_CLRENA_INC_IR_PCP_EXIT, nz)      /* TMP1 [= CSA-IGNH_DIST] != 0; */\
                                               /* no channel INC_IR enabled --> disable IncIRSRN */\
     /* TMP1 [= CSA-IGNH_DIST] != 0 */\
     ldl_il(r7, IgnHIncIRSRN_DPTR_NO_IEN)      /* new DPTR into r7 */\
     ld_pi(TMP1, IgnHIncIRSRN_FAR)             /* TMP1 = &IgnHIncIRSRN */\
     clr_f(TMP1, GPTA_SRC_SRE_POS, 16)         /* disable SRN */\
LABEL (_IGNH_CLRENA_INC_IR_PCP_EXIT)\
     mov(r7, TMP0, uc)                         /* restore r7, reenable IR */

#endif
/* IGNINCIR */



/* IGNH_FETCH_TMP
 ***************************************************************************************************
 * Fetch data from the intermediate buffer into working data buffer.
 *
 * Copy a data set from the intermediate buffer IGNH_XYZ_TMP to the working data buffer.
 * Write IGNH_DwT_TMP = 0 to unlock the intermediate buffer.
 * Skip copying the follow-up pulses data, if NOFS == 0.
 *
 *   Inputs: Register mapped
 *             TMP0
 *
 *   Labels: _IGNH_FETCH_TMP_LOC1 - local label.
 *
 *   Output: PRAM
 *             Pcp_Pram_s.IgnHx_ChlData.IA etc. - PRAM channel data.
 *
 *
 *   Registers changed:
 *           TMP0
 *
 ***************************************************************************************************
 */

#define IGNH_FETCH_TMP(TMP0, IA, DT, _IGNH_FETCH_TMP_LOC1)\
     ld_pi(IA, IGNH_IA_TMP)\
     st_pi(IA, IGNH_IA)\
     ld_pi(DT, IGNH_DwT_TMP)\
     st_pi(DT, IGNH_DwT)\
     ld_pi(TMP0, IGNH_NOFS_TMP)\
     jc(_IGNH_FETCH_TMP_LOC1, z)      /* do not copy follow-up pulse data, if NOFS==0 */\
     st_pi(TMP0, IGNH_NOFS)\
     ld_pi(TMP0, IGNH_FSPT_TMP)\
     st_pi(TMP0, IGNH_FSPT)\
     ld_pi(TMP0, IGNH_FSDwT_TMP)\
     st_pi(TMP0, IGNH_FSDwT)\
LABEL (_IGNH_FETCH_TMP_LOC1)\
     ld_i(TMP0, 0)\
     st_pi(TMP0, IGNH_DwT_TMP)        /* free tmp buffer for next CPU write */

/* IGNH_FETCH_TMP_MSI
 ***************************************************************************************************
 * Fetch data from the intermediate buffer into working data buffer when MSI (MSI_SY) is activated.
 *
 * Copy a data set from the intermediate buffer IGNH_XYZ_TMP to the working data buffer.
 * Write IGNH_DwT_TMP = 0 to unlock the intermediate buffer.
 * Skip copying the follow-up pulses data, if NOFS == 0.
 * Sets the ActvMSI Flag according to the ActvMSI Flag in the temporary buffer.
 *
 *   Inputs: Register mapped
 *             TMP0, TMP1
 *
 *   Labels: _IGNH_FETCH_TMP_LOC1 - local label.
 *           _IGNH_FETCH_TMP_NOMSI - local label
 *           _IGNH_FETCH_TMP_ACTVMSI_END - local label
 *
 *   Output: PRAM
 *             Pcp_Pram_s.IgnHx_ChlData.IA etc. - PRAM channel data.
 *
 *
 *   Registers changed:
 *           TMP0, TMP1, r7
 *
 ***************************************************************************************************
 */

#define IGNH_FETCH_TMP_MSI(TMP0, TMP1, IA, DT, _IGNH_FETCH_TMP_LOC1, _IGNH_FETCH_TMP_NOMSI, _IGNH_FETCH_TMP_ACTVMSI_END)\
     ld_pi(IA, IGNH_IA_TMP)\
     st_pi(IA, IGNH_IA)\
     ld_pi(DT, IGNH_DwT_TMP)\
     st_pi(DT, IGNH_DwT)\
     /* if ActvMSI is set in IGNH_FLAGS_TMP then set it also in IGNH_FLAGS */\
     ld_pi(TMP0, IGNH_FLAGS_TMP)\
     chkb(TMP0, IGNH_FLAGS_ACTV_MSI_POS, set)   /* check if atvMSI is set */\
     jc(_IGNH_FETCH_TMP_NOMSI, nc)\
     /* set actvMSI in flags */\
     clr(r7, PCP_R7_IEN_POS_NDT)                    /* EPN_TC1796_PCP_TC_026_v1_0: disable IR with 2 ops afterwards */\
     ldl_i(TMP0, (IGNH_FLAGS_ACTV_MSI_MASK))        /* TMP = mask of ACTV_MSI_POS */\
     ldl_i(TMP1, &(GPTA0.GTTIM1))                   /* PCP_TC.038: load valid FPI address for workaround */\
     ld_f(TMP1, TMP1, 32)                           /* PCP_TC.038: dummy FPI read before MSET/MCLR */\
     mset_pi(TMP0, IGNH_FLAGS)                      /* set atomically ACTV_MSI flag */\
     set(r7, PCP_R7_IEN_POS_NDT)                    /* PCP_TC.038: reenable IR */\
     jc(_IGNH_FETCH_TMP_ACTVMSI_END , uc)\
LABEL (_IGNH_FETCH_TMP_NOMSI)                       /* ActvMSI in TMP not set then clear in IGNH_FLAGS */\
     /* clear actvMSI in flags */\
     clr(r7, PCP_R7_IEN_POS_NDT)                    /* EPN_TC1796_PCP_TC_026_v1_0: disable IR with 2 ops afterwards */\
     ldl_i(TMP0, (~IGNH_FLAGS_ACTV_MSI_MASK))       /* TMP = neg. mask of ACTV_MSI_POS */\
     ldl_i(TMP1, &(GPTA0.GTTIM1))                   /* load valid FPI address for workaround*/\
     ld_f(TMP1, TMP1, 32)                           /* PCP_TC.038: dummy FPI read before MSET/MCLR */\
     mclr_pi(TMP0, IGNH_FLAGS)                      /* clear atomically ACTV_MSI flag */\
     set(r7, PCP_R7_IEN_POS_NDT)                    /* PCP_TC.038: reenable IR */\
     LABEL (_IGNH_FETCH_TMP_ACTVMSI_END)\
     ld_pi(TMP0, IGNH_NOFS_TMP)\
     jc(_IGNH_FETCH_TMP_LOC1, z)                    /* do not copy follow-up pulse data, if NOFS==0 */\
     st_pi(TMP0, IGNH_NOFS)\
     ld_pi(TMP0, IGNH_FSPT_TMP)\
     st_pi(TMP0, IGNH_FSPT)\
     ld_pi(TMP0, IGNH_FSDwT_TMP)\
     st_pi(TMP0, IGNH_FSDwT)\
LABEL (_IGNH_FETCH_TMP_LOC1)\
     ld_i(TMP0, 0)\
     st_pi(TMP0, IGNH_DwT_TMP)                      /* free tmp buffer for next CPU write */



/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if defined(MSI_TMPR_SY) && (MSI_TMPR_SY > 0)
/* IGNH_TRIGGER_MSI_TMPR
 **********************************************************************************************************************
 * This macro triggers ISR of IGNCL_TMPR on CPU to initiate SPI read with coil temperature information.
 *
 *   Inputs: TMP0, TMP1, TMP2 - temporary registers
 *           _LABEL_END - label to create unqiue jump label
 *
 *   Registers changed:
 *           TMP0, TMP1, TMP2, r7
 *
 **********************************************************************************************************************
 */
#define IGNH_TRIGGER_MSI_TMPR(TMP0, TMP1, TMP2, _LABEL_END)\
     /*   Set CPU interrupt to initiate SPI read for coil temperature monitoring            */\
     /*   Condition: MSI should have been active                                            */\
     /*   Action:                                                                           */\
     /*           1. Check MSI active bit                                                   */\
     /*           2. Copy current ignition channel number to global label IgnCl_Tmpr_Chl    */\
     /*           3. Set CPU interrupt request bit for SRN.                                 */\
     /*                                                                                     */\
     ld_pi  (TMP0, IGNH_FLAGS)                  /* load followup spark bits (MSI acitve position is in this variable) */\
     chkb   (TMP0, IGNH_FLAGS_ACTV_MSI_POS, clr) /* check if MSI is inactive */\
     jc     (_LABEL_END, c)                     /* Jump if MSI not active */\
     ld_pi  (TMP1, IGNH_CHL_MASK)               /* load current channel number mask */\
     mov    (TMP0, r7, uc)                      /* save r7 */\
     ldl_il (r7, IgnCl_Tmpr_chl_DPTR_NO_IEN)    /* load DPTR of global label "IgnCl_Tmpr_chl" into r7 */\
                                                /* and disable IR with 2 ops afterward [prepare PCP_TC.038: */\
                                                /* dummy FPI read.]  */ \
     ldl_i  (TMP2, &(GPTA0.GTTIM1))             /* load valid FPI address */\
     ld_f   (TMP2, TMP2, 32)                    /* PCP_TC.038: dummy FPI read before MSET/MCLR */\
     mset_pi(TMP1, IgnCl_Tmpr_chl_FAR)          /* OR it with channel number to store both channels */\
     ldl_il (r7, IgnCl_Tmpr_cpuSRN_DPTR)        /* load DPTR of CPU ISR SRN into r7 and reenable IR */\
     ld_pi  (TMP1, IgnCl_Tmpr_cpuSRN_FAR)       /* Load 'igncl_tmpr_isr' interrupt register address */\
     set_f  (TMP1, GPTA_SRC_SETR_POS, 16)       /* Raise "igncl_tmpr_isr" interrupt to CPU by SW */\
     mov    (r7, TMP0, uc)                      /* restore r7 of current running channel */\
LABEL (_LABEL_END)
#endif



/* IGNH_SETNEXTSTATE_PCP
 ***************************************************************************************************
 * Set the next state of FSM. Inline Macro.
 *
 * Write next state into PRAM.
 *
 *   Inputs: Register mapped
 *             TMP1
 *           Constants
 *             IGNH_NEXTST       - constant, next state
 *             IGNH_NEXTST_ENTRY - constant, function pointer to entry for next state transition
 *                                 code.
 *
 *   Output: PRAM
 *             Pcp_Pram_s.IgnHx_ChlData.State [= IGNH_State] - PRAM channel data.
 *
 *   Registers changed:
 *           TMP1
 *
 ***************************************************************************************************
 */
/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if (defined(IGNH_DEBUG) && (IGNH_DEBUG == 1))
#define ldl_il_lbl(reg,imm) asm("ldl.il "#reg",cptr:%0"::"i"(imm));
#define IGNH_SETNEXTSTATE_PCP(TMP1, IGNH_NEXTST, IGNH_NEXTST_ENTRY)\
     ldl_il_lbl(TMP1, IGNH_NEXTST_ENTRY)          /* load address of state handler function */\
     ldl_iu(TMP1, (IGNH_NEXTST<<IGNH_STATE_NUM_POS)) /* load state symbol */\
     st_pi(TMP1, IGNH_State)                      /* store next state */
#else
#define IGNH_SETNEXTSTATE_PCP(TMP1, IGNH_NEXTST, IGNH_NEXTST_ENTRY)\
     ldl_iu(TMP1, ((IGNH_NEXTST)<<IGNH_STATE_NUM_POS)) /* load state symbol */ \
     st_pi(TMP1, IGNH_State)                      /* store next state */
#endif


/***************************************************************************************************/

/* IGNH_GPTAGTC_DISABLE_PAIR/IGNH_GPTAGTC_DISABLE
 ***************************************************************************************************
 * Disable a given pair of GTCs or a single GTC. Inline Macro.
 *
 * Disables pair of GTCs or a single GTC and generates immediate pin action to set output into
 * 'passive' state.
 * Clears service request of SRN connected with the pair of GTCs.
 * In case of IGNH_GPTAGTC_DISABLE_PAIR, clears event flags.
 *
 * IGNH_GPTAGTC_DISABLE_N disables GTCn and clears event flag in SRSS.
 * IGNH_GPTAGTC_DISABLE_N_MINUS_1 disables GTCn-1 and clears event flag in SRSS.
 *
 *   Inputs: Register mapped
 *             XR - compare value to be written into XReg
 *             CTRn_p, CTRn1_p - addresses of CTRn and CTR[n-1] registers.
 *             TMP0, TMP1
 *
 *           IGNH_GTCCTRMASK - Constant, CTR register mask
 *
 *   Registers changed:
 *           TMP0, TMP1
 *
 ***************************************************************************************************
 */
#if (IGNH_GTCCTR_DISABLE_SETPAS & 0xffff0000)
#  define IGNH_LOADDIS(REG)\
     ldl_iu(REG, IGNH_GTCCTR_DISABLE_SETPAS)\
     ldl_il(REG, IGNH_GTCCTR_DISABLE_SETPAS)
#elif (IGNH_GTCCTR_DISABLE_SETPAS & 0x0000ffc0)
#  define IGNH_LOADDIS(REG)\
     ld_i(REG, 0)\
     ldl_il(REG, IGNH_GTCCTR_DISABLE_SETPAS)
#else
#  define IGNH_LOADDIS(REG)\
     ld_i(REG, IGNH_GTCCTR_DISABLE_SETPAS)
#endif
/* Interface macro */
#define IGNH_GPTAGTC_DISABLE_PAIR(CTRn_p, CTRn1_p, TMP0, TMP1)\
     IGNH_LOADDIS(TMP1)\
     /* write the GTC control register CTR */\
     st_f(TMP1, CTRn1_p, 16)                       /* write CTR[n-1] */\
     st_f(TMP1, CTRn_p, 16)                        /* write CTRn */\
     /* clear src request */\
     ld_pi(TMP0, IGNH_GTCSRN)                      /* TMP0 = &SRC */\
     set_f(TMP0, GPTA_SRC_CLRR_POS, 16)            /* clear service request */\
     ld_f(TMP0, TMP0, 32)                          /* FPI read to force finishing of FPI access */\
                                                   /* cf. IFX AP32009 */\
     /* clear event flags */\
     ld_pi(TMP0, IGNH_GTCSRSC)                     /* TMP0 = &SRSC1 */\
     ld_pi(TMP1, IGNH_GTCSRS_MASK)                 /* TMP1 = mask(SRSC_GTC[n]) */\
     shr(TMP1, 1)                                  /* TMP1 = TMP1 >> 1 */\
     or_pi(TMP1, IGNH_GTCSRS_MASK)                 /* TMP1 = mask(SRSC_GTCn|GTC[n-1]) */\
     st_f(TMP1, TMP0, 32)                          /* clear event flags of GTCn/GTC[n-1] */

/* Interface macro */
#define IGNH_GPTAGTC_DISABLE_N(CTRn_p, TMP0, TMP1)\
     IGNH_LOADDIS(TMP0)\
     /* write the GTC control register CTR */\
     st_f(TMP0, CTRn_p, 16)                        /* write CTRn */\
     /* clear src request */\
     ld_pi(TMP0, IGNH_GTCSRN)                      /* TMP0 = &SRC */\
     set_f(TMP0, GPTA_SRC_CLRR_POS, 16)            /* clear service request */\
     ld_f(TMP0, TMP0, 32)                          /* FPI read to force finishing of FPI access */\
                                                   /* cf. IFX AP32009 */\
     /* clear SRSS */\
     ld_pi(TMP0, IGNH_GTCSRSC)                     /* TMP0 = &SRSC1 */\
     ld_pi(TMP1, IGNH_GTCSRS_MASK)                 /* TMP1 = mask(SRSC_GTC[n]) */\
     st_f(TMP1, TMP0, 32)                          /* clear event flags of GTCn */

/* Interface macro */
#define IGNH_GPTAGTC_DISABLE_N_MINUS_1(CTRn_p, TMP0, TMP1)\
     IGNH_LOADDIS(TMP0)\
     /* write the GTC control register CTR */\
     st_f(TMP0, CTRn_p, 16)                        /* write CTRn */\
     /* clear src request */\
     ld_pi(TMP0, IGNH_GTCSRN)                      /* TMP0 = &SRC */\
     set_f(TMP0, GPTA_SRC_CLRR_POS, 16)            /* clear service request */\
     ld_f(TMP0, TMP0, 32)                          /* FPI read to force finishing of FPI access */\
                                                   /* cf. IFX AP32009 */\
     /* clear SRSS */\
     ld_pi(TMP0, IGNH_GTCSRSC)                     /* TMP0 = &SRSC1 */\
     ld_pi(TMP1, IGNH_GTCSRS_MASK)                 /* TMP1 = mask(SRSC_GTC[n]) */\
     shr(TMP1, 1)                                  /* TMP1 = TMP1 >> 1 */\
     st_f(TMP1, TMP0, 32)                          /* clear event flags of GTC[n-1] */

/***************************************************************************************************/


/*IGNH_GPTAGTC_CLEARSRSS_MSI
 ***************************************************************************************************
 * Clears Bit in SRSS (service request state) that belongs to GTC[n-1]. Only in MSI-Mode because
 * otherwise GTC[n-1] is not used.
 *
 *   Inputs: Register mapped
 *             TMP0
 *
 *
 *   Registers changed:
 *           TMP0, TMP1
 *
 ***************************************************************************************************
 */

/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#if ((defined MSI) && (MSI == 1))
#define IGNH_GPTAGTC_CLEARSRSS_MSIGTC(TMP0, TMP1)\
     ld_pi(TMP0, IGNH_GTCSRSC)                     /* TMP0 = &SRSC1 */\
     ld_pi(TMP1, IGNH_GTCSRS_MASK)                 /* TMP1 = mask(SRSC_GTC[n]) */\
     shr(TMP1, 1)                                  /* TMP1 = TMP1 >> 1 */\
     st_f(TMP1, TMP0, 32)                          /* clear event flags of GTC[n-1] */
#endif

/***************************************************************************************************/

/* IGNH_GPTALTC_DISABLE
 ***************************************************************************************************
 * Disables a given LTC. Inline Macro.
 *
 * Disables a single LTC.
 * Bit in SRS register of given ltc is also cleared
 *
 *   Inputs: CTR_p - register containing the address of the LTC's ctr-register
 *                 - later used as temp-register
 *
 *   Registers changed: TMP0, CTR_p
 *
 ***************************************************************************************************
 */

#define IGNH_GPTALTC_DISABLE(CTR_p, TMP0)\
     ldl_il(TMP0, IGNH_LTCCTR_DISABLE)\
     st_f(TMP0, CTR_p, 16)                         /* disable LTC by writing CTR */\
     /* clear bit in srs request */\
     ld_pi(TMP0, IGNH_LTCSRS_MASK)                 /* TMP0 := mask for srsc */\
     ld_pi(CTR_p, IGNH_LTCSRSC)                    /* CTR_p := address of SRSC */\
     st_f(TMP0, CTR_p, 32)

/***************************************************************************************************/

/* IGNH_GPTAGTCSETUPCOMP_PCP | IGNH_GPTAGTCSETUPCOMP_PCP_1
 ***************************************************************************************************
 * Set up a compare event on a given GTC. Inline Macro.
 *
 * Loads addresses of CTR and X registers from PRAM and programs the value given in XR into XReg
 * and the constant value IGNH_GTCCTRMASK into CTR.
 * Sequence: 1st write XReg with the right compare value to avoid unadvertent match on writing to
 *           CTR thereafter. Thus, prepared for equal compare.
 *           2nd write to CTR
 *           3rd write XReg to trigger the GE compare.
 * As a workaround to the defective GE hardware compare, the 3rd write to XReg can be replaced with
 * a function call that runs a GE compare in software.
 * This workaround runs only with a fixed register allocation [see below]!!!
 * IGNH_GPTAGTCSETUPCOMP_PCP_1: upper 16bit of TMP1 are assumed cleared!
 *
 *   Inputs: Register mapped
 *             XR - compare value to be written into XReg
 *             CTR_p, XR_p - addresses of CTR and X registers [IGNH_GPTAGTCSETUPCOMP_PCP_1]
 *             TMP1
 *           RAM, Constants
 *             Pcp_Pram_s.IgnHx_ChlConst.GTCn [= IGNH_GTCCTR] - PRAM channel const.
 *
 *           IGNH_GTCCTRMASK - Constant, CTR register mask
 *
 *   Registers changed:
 *           CTR_p, XR_p, TMP1
 *
 ***************************************************************************************************
 */
#ifdef CDRV_GLOBAL_GTC_WO
/* Warning: GTC_GE workaround works with fixed register allocation only! */
/* ((XR == r0) && (TMP1 == r1) && (CTR_p == r3) && (XR_p == r4)) */
/* Interface Macro */
#define IGNH_GPTAGTCSETUPCOMP_PCP(XR, CTR_p, XR_p, TMP1, IGNH_GTCCTRMASK)\
     /* load GTC addresses into regs */\
     ld_pi(XR_p, IGNH_GTCCTR)\
     mov(CTR_p, XR_p, uc)                          /* CTR_p = addr. of CTR */\
     add_i(XR_p, IGNH_GTCXR_OFFS)                  /* XR_p = addr. of X */\
     /* no 'capture after compare' has happened before, so no need to unlock XReg by reading it.*/\
     /* load values to be written into regs */\
     ld_i(TMP1, 0)                                 /* TMP1 = 0 */\
     ldl_il(TMP1, IGNH_GTCCTRMASK)                 /* TMP1 --> CtrReg, upper half already 0 */\
     /* write the GTCn control registers X and CTR */\
     st_f(XR, XR_p, 32)                            /* write X */\
     st_f(TMP1, CTR_p, 16)                         /* write CTR */\
     call (IgnH_GECompare)

#define IGNH_GPTAGTCSETUPCOMP_PCP_1(XR, CTR_p, XR_p, TMP1, IGNH_GTCCTRMASK)\
     ldl_il(TMP1, IGNH_GTCCTRMASK)                 /* TMP1 --> CtrReg, upper half already 0 */\
     /* write the GTCn control registers X and CTR */\
     st_f(XR, XR_p, 32)                            /* write X */\
     st_f(TMP1, CTR_p, 16)                         /* write CTR */\
     call (IgnH_GECompare)

#else
/* CDRV_GLOBAL_GTC_WO not def'd */
#define IGNH_GPTAGTCSETUPCOMP_PCP(XR, CTR_p, XR_p, TMP1, IGNH_GTCCTRMASK)\
     /* load GTC addresses into regs */\
     ld_pi(XR_p, IGNH_GTCCTR)\
     mov(CTR_p, XR_p, uc)                          /* CTR_p = addr. of CTR */\
     add_i(XR_p, IGNH_GTCXR_OFFS)                  /* XR_p = addr. of X */\
     /* no 'capture after compare' has happened before, so no need to unlock XReg by reading it.*/\
     /* load values to be written into regs */\
     ld_i(TMP1, 0)                                 /* TMP1 = 0 */\
     ldl_il(TMP1, IGNH_GTCCTRMASK)                 /* TMP1 --> CtrReg, upper half already 0 */\
     /* write the GTCn control registers X and CTR */\
     st_f(XR, XR_p, 32)                            /* write X */\
     st_f(TMP1, CTR_p, 16)                         /* write CTR */\
     st_f(XR, XR_p, 32)

#define IGNH_GPTAGTCSETUPCOMP_PCP_1(XR, CTR_p, XR_p, TMP1, IGNH_GTCCTRMASK)\
     ldl_il(TMP1, IGNH_GTCCTRMASK)                 /* TMP1 --> CtrReg, upper half already 0 */\
     /* write the GTCn control registers X and CTR */\
     st_f(XR, XR_p, 32)                            /* write X */\
     st_f(TMP1, CTR_p, 16)                         /* write CTR */\
     st_f(XR, XR_p, 32)
#endif

/***************************************************************************************************/

/* IGNH_SETUPIAMAXINT
 ***************************************************************************************************
 * Set up a count down event on a given LTC for triggering an interrupt on max. ignition angle.
 * Inline Macro.
 *
 * First calculates count of angle tics until max. angle is reached. LTC.XR is loaded with FFFF -
 * "ticks to max. angle".  So an interrupt is triggered on max. ignition angle. LTC.CTR is set for
 * one shot mode.
 *
 *   Inputs: Register mapped
 *              TMP0 - for temporary data
 *              TMP1 - for temporary data
 *              IAMAX - max. ign. angle for compare with GT1
 *              LTCCTR_p - address of LTC.CTR
 *              LTCXR_p - address of LTC.XR
 *
 *
 *
 *   Registers changed:
 *           TMP0, TMP1, IAMAX
 *
 ***************************************************************************************************
 */
#define IGNH_SETUPIAMAXINT(IAMAX, LTCCTR_p, LTCXR_p, TMP0, TMP1)\
    ldl_il(TMP0, &(GPTA0.GTTIM1))\
    ldl_iu(TMP0, &(GPTA0.GTTIM1))               /* TMP0 = adr. of GT1 */\
    ld_f(TMP1, TMP0, 32)                        /* TMP1 = value of GT1 */\
    sub(IAMAX, TMP1, uc)                        /* IAMAX = ltc-ticks until IAMAX */\
    /* in case of gttim1 overflow, overflow bits of result have to be masked out */\
    ldl_iu(TMP0, 0x00FFFFFF)\
    ldl_il(TMP0, 0xFFFFFFFF)                    /* TMP0 = mask for gttim1 overflow */\
    and(IAMAX, TMP0, uc)                        /* TMP1 = ltc-ticks until ign. max */\
    /* prepare LTC.XR */\
    ld_i(TMP0, 0x0)\
    ldl_il(TMP0, 0xFFFF)\
    sub(TMP0, IAMAX, uc)\
    st_f(TMP0, LTCXR_p, 16)                     /* store LTC.XR for IAMAX */\
    /* prepare LTC.CTR */\
    ldl_il(TMP0, IGNH_LTCCTR_FREERUNNING )      /* TMP0 = value for LTC.CTR */\
    st_f(TMP0, LTCCTR_p, 16)



/***************************************************************************************************/

/* IGNH_EVAL_IAM_IR; IGNH_EVAL_IAM_IR_TRUE
 ***************************************************************************************************
 * Evaluate IAM_IR input signal of FSM. Inline Macro.
 *
 * Also clears IAM_IR event flag.
 *
 * IGNH_EVAL_IAM_IR_TRUE jumps to _IGNH_EVAL_IAM_IR_NEXT, if IAM_IR == TRUE.
 * IGNH_EVAL_IAM_IR jumps, if IAM_IR == FALSE.
 *
 *   Inputs: Register mapped
 *           TMP0, TMP1
 *
 *           RAM, Constants
 *           Pcp_Pram_s.IgnHx_ChlConst.Flags [= IGNH_GTCSRSC] - PRAM channel const.
 *
 *
 *           Labels
 *           _IGNH_EVAL_IAM_IR_NEXT - label of code sequence that evaluates the next FSM input
 *                                    condition.
 *   Output: PRAM
 *             Pcp_Pram_s.IgnHx_ChlData.Flags.IAM_IR cleared - PRAM channel data.
 *
 *
 *   Registers changed:
 *           TMP0, TMP1, R7
 *
 ***************************************************************************************************
 */


#define IGNH_EVAL_IAM_IR(TMP0, TMP1, _IGNH_EVAL_IAM_IR_NEXT)\
     ld_pi(TMP0, IGNH_FLAGS)                 /* TMP0 = Flags */\
     chkb(TMP0, IGNH_FLAGS_IAM_IR_POS, clr)  /* test if no IAMAX_IR occured */\
     jc(_IGNH_EVAL_IAM_IR_NEXT, c)           /* jump if no IAM_IR */\
     clr(r7, PCP_R7_IEN_POS_NDT)             /* EPN_TC1796_PCP_TC_026_v1_0: disable IR with 2 ops afterwards */\
     ldl_i(TMP0, (~IGNH_FLAGS_IAM_IR_MASK))  /* TMP0 = neg. mask of IAMAX_IR */\
     ldl_i(TMP1, &(GPTA0.GTTIM1))            /* load valid FPI address for workaround*/\
     ld_f(TMP1, TMP1, 32)                    /* PCP_TC.038: dummy FPI read before MSET/MCLR */\
     mclr_pi(TMP0, IGNH_FLAGS)               /* clear atomically IAM_IR flag */\
     set(r7, PCP_R7_IEN_POS_NDT)             /* PCP_TC.038: reenable IR */


#define IGNH_EVAL_IAM_IR_TRUE(TMP0, TMP1, _IGNH_EVAL_IAM_IR_NEXT)\
     ld_pi(TMP0, IGNH_FLAGS)                 /* TMP0 = Flags */\
     chkb(TMP0, IGNH_FLAGS_IAM_IR_POS, clr)  /* test if IAMAX_IR occured */\
     jc(IgnH_EVAL_IAM_NOJUMP, c)             /* jump to end of macro because no IAM_IR */\
     clr(r7, PCP_R7_IEN_POS_NDT)             /* EPN_TC1796_PCP_TC_026_v1_0: disable IR with 2 ops afterwards */\
     ldl_i(TMP0, (~IGNH_FLAGS_IAM_IR_MASK))  /* TMP0 = neg. mask of IAMAX_IR */\
     ldl_i(TMP1, &(GPTA0.GTTIM1))            /* load valid FPI address for workaround*/\
     ld_f(TMP1, TMP1, 32)                    /* PCP_TC.038: dummy FPI read before MSET/MCLR */\
     mclr_pi(TMP0, IGNH_FLAGS)               /* clear atomically IAM_IR flag */\
     set(r7, PCP_R7_IEN_POS_NDT)             /* PCP_TC.038: reenable IR */\
     jl(_IGNH_EVAL_IAM_IR_NEXT)              /* jump if IAM_IR */\
LABEL(IgnH_EVAL_IAM_NOJUMP)



/***************************************************************************************************/

/* IGNH_EVAL_SW_IR
 ***************************************************************************************************
 * Handle SW interrupt. Inline Macro.
 *
 * Evaluate state of SW_IR flag. If set, clear SW_IR to acknowledge.
 * In IGNH_EVAL_SW_IR: Test IRPEND. If IRPEND == FALSE, i.e. pulse event already occurred,
 * repost a service request, that would be missing otherwise.
 *
 *   Inputs: Register mapped
 *             TMP0
 *             IGNHFLGS - Register loaded with IGNH_FLAGS from PRAM
 *
 *           Labels
 *           [_IgnH_Eval_SW_IR_Loc1  - name of local label 1]
 *           _IgnH_Eval_SW_IR_EXIT_FALSE - name of exit label, if SW_IR == FALSE
 *
 *   Output: PRAM
 *             Pcp_Pram_s.IgnHx_ChlData.Flags.SW_IR cleared - PRAM channel data.
 *
 *   Registers changed:
 *           TMP0, IGNHFLGS [bit "SW_IR" cleared]
 *
 ***************************************************************************************************
 */
/* EPN_TC1796_PCP_TC_026_v1_0: disable interrupt arround mset_pi, mclr_pi, xch_pi.
   According to docu. addendum EPN_TC1796_PCP_docu_addendum_v1_0, it takes
   2 cycles for the IR to become disabled before an atomic PRAM access like mclr_pi. */
/* EPN_TC1796_PCP_TC_025_v1_1: taken into account at call to this macro */
#if ((~IGNH_SW_IR_MASK) & 0xffff0000)
#  define IGNH_LOAD_SW_IR_MASK(REG)\
     ldl_iu(REG, (~IGNH_SW_IR_MASK))\
     ldl_il(REG, (~IGNH_SW_IR_MASK))
#elif ((~IGNH_SW_IR_MASK) & 0x0000ffc0)
#  define IGNH_LOAD_SW_IR_MASK(REG)\
     ld_i(REG, 0)\
     ldl_il(REG, (~IGNH_SW_IR_MASK))
#else
#  define IGNH_LOAD_SW_IR_MASK(REG)\
     nop()                                     /* due to EPN_TC1796_PCP_docu_addendum_v1_0 */\
     ld_i(REG, (~IGNH_SW_IR_MASK))
#endif
/* Interface macro */
#define IGNH_EVAL_SW_IR(IGNHFLGS, TMP0, _IgnH_Eval_SW_IR_EXIT_FALSE)    \
     chkb(IGNHFLGS, IGNH_SW_IR_POS, clr)\
     jc(_IgnH_Eval_SW_IR_EXIT_FALSE, c)        /* SW_IR == FALSE */\
     /* SW_IR == TRUE */\
     /* EPN_TC1796_PCP_TC_026_v1_0: disable interrupt arround mset_pi, mclr_pi, xch_pi. */\
     /* According to docu. addendum EPN_TC1796_PCP_docu_addendum_v1_0, it takes */\
     /* 2 cycles for the IR to become disabled before an atomic PRAM access like mclr_pi. */\
     clr(r7, PCP_R7_IEN_POS_NDT)               /* EPN_TC1796_PCP_TC_026_v1_0: disable IR */\
     IGNH_LOAD_SW_IR_MASK(IGNHFLGS)            /* IGNHFLGS <- (~IGNH_SW_IR_MASK) */\
     ldl_i(TMP0, &(GPTA0.GTTIM1))              /* load valid FPI address for workaround*/\
     ld_f(TMP0, TMP0, 32)                      /* PCP_TC.038: dummy FPI read before MSET/MCLR */\
     mclr_pi(IGNHFLGS, IGNH_FLAGS)             /* clear atomicly SW_IR flag */\
     set(r7, PCP_R7_IEN_POS_NDT)               /* PCP_TC.038: reenable IR */


/***************************************************************************************************/

/* IGNH_CALCSTARTANGLE_PCP
 ***************************************************************************************************
 * Calculate expected start angle of a pulse of given end angle with a given lead time.
 *
 * Expected start angle is determined on assumption of constant angular speed.
 * StartAngle = EndAngle - dwellangle with dwellangle = IncrAngle/factor * LeadTime.
 * factor = time per angular sample increment [PCP_EpmHCrS_tiIncPer or PCP_EpmHCrS_tiIncPerAvrg
 * depending on CRS_TOOTHAVRG_SY setting].
 * Dwell angle is limited to maximum of 720°CA (EPM_PHIMAX_SY in GT1 ticks).
 * [Result is automatically limited to span 24bits in GT1 units, because the relevant XR
 * is 24 bits wide.]
 * Cf. respective inline C function in ignh.h.
 *
 * Numerical ranges
 * Assumption: engine speed >= 10rpm, GT0 clock = 2.5MHz <==> 400ns
 *             <==> EpmHCrS_tiIncPer = 100ms <==> 250000 = 0x3d090 GT0 ticks.
 *   EpmHCrS_tiIncPer <= 0xffffffff [no arithmetic restrictions]
 *   IGNH_INCANGLE = 273 = 0x0111 [9 bit]
 *   DwellTime <= 0x007fffff [23bit - 32bit result on multiplication with IGNH_INCANGLE],
 *             maximum possible length = 720*100ms = 180000000 = 0x0aba9500 GT0 ticks.
 *
 *   Inputs: Register mapped
 *           IGNHIA - EndAngle [GT1 ticks], <= 0x00ffffff [24bit - counter length]
 *           IGNHDT - DwellTime [GT0 ticks], <= 0x007fffff [23bit - see above]
 *           TMP1, TMP2
 *           r0 - needed for multiplication [special register for mult.]
 *
 *           RAM, Constants
 *           PCP_EpmHCrS_tiIncPer  - PRAM global, Increment period [GT0 ticks] <= 0xffffffff
 *                                   It is assumed that EpmHCrS_tiIncPer is always != 0, when
 *                                   IGNH_CALCSTARTANGLE_PCP is called, so no "divide by zero"
 *                                   check is necessary. This is assured by the fact that IgnH
 *                                   FSM is only running, when engine speed is active.
 *           PCP_EpmHCrS_tiIncPerAvrg
 *                                 - PRAM global, Averaged increment period [GT0 ticks] <= 0xffffffff
 *           Pcp_Pram_s.IgnHx_ChlData.Flags [= IGNH_FLAGS]
 *                                 - PRAM channel data, Flag "AVRGED_INCPER": determines,
 *                                   if EpmHCrS_tiIncPer or PCP_EpmHCrS_tiIncPerAvrg is to be used.
 *           EPM_PHIMAX_SY         - Maximum value of absolute angle in GT1 quantisation [0x7fff]
 *           IGNH_INCANGLE         - increment angle in GT1 units
 *
 *           Labels
 *           _IgnH_CalcStartAngle_PCP_ENTRY - name of entry label
 *           _IGNH_CALCSTARTANGLE_PCP_LOC1 - name of local label
 *
 *   Registers changed:
 *           r0, TMP1, TMP2, IGNHIA, IGNHDT, r7[cond_flags]
 *
 *   Return:
 *           IGNH_IA - Start angle in units of GT1 angle ticks.
 *
 ***************************************************************************************************
 */
/* Macros to load a constant into a register. Code depends on length of constant to be loaded.
   Unfortunately, these macros cannot be defined universally, because preprocessing conditions
   need to be evaluated. */
/* REG = EPM_PHIMAX_SY; EPM_PHIMAX_SY > 6bit */
#if (EPM_PHIMAX_SY & 0xffff0000)
#define IGNH_LOADEPM_PHIMAX(REG)\
    ldl_iu(REG, EPM_PHIMAX_SY)\
    ldl_il(REG, EPM_PHIMAX_SY)
#else
#define IGNH_LOADEPM_PHIMAX(REG)\
     ld_i(REG, 0)\
     ldl_il(REG, EPM_PHIMAX_SY)
#endif

/* REG[31..16] = IGNH_INCANGLE; IGNH_INCANGLE > 6bit */
#if (IGNH_INCANGLE & 0xffff0000)
#define IGNH_LOADINCANGLE(REG)\
     ldl_iu(REG, IGNH_INCANGLE)                  /* ldl.iu needs 2*16bit code space */
#else
#define IGNH_LOADINCANGLE(REG)\
     ld_i(REG, 0)                                /* this needs 16bit code space only */
#endif

/* r0 = REG1 * REG2 */
#if (IGNH_INCANGLE & 0xff000000)
#error "IGNH_INCANGLE" must be <= 0x00ffffffu
#elif (IGNH_INCANGLE & 0xffff0000)               /* 24bit IGNH_INCANGLE */
#define MUL_IGNH(REG1, REG2)                     /* mul_24_32 - 3 steps */\
     minit(REG1, REG2)                           /* init. mult.; set condition flags */\
     jc(IGNH_CALCSTARTANGLE_PCP_LOC1, z)         /* do not multiply, if one factor is zero */\
     rl(REG1, 8)\
     mstep32(REG1, REG2)\
     mstep32(REG1, REG2)\
     mstep32(REG1, REG2)                         /* r0 = REG1[24] * REG2[32] */\
LABEL (_IGNH_CALCSTARTANGLE_PCP_LOC1)
#elif (IGNH_INCANGLE & 0x0000ff00)               /* 16bit IGNH_INCANGLE */
#define MUL_IGNH(REG1, REG2)                     /* mul_16_32 - 2 steps */\
     mul16(REG1, REG2)                           /* r0 = REG1 * REG2 */
#else                                            /* 8bit IGNH_INCANGLE */
#define MUL_IGNH(REG1, REG2)                     /* mul_8_32  - 1 step */\
     mul8(REG1, REG2)                            /* r0 = REG1 * REG2 */
#endif

#if (CRS_TOOTHAVRG_SY == 0)               /* load EpmHCrS_tiIncPer */
#define IGNH_LOADTIINC(REG)\
     ldl_il(r7, PCP_EpmHCrS_tiIncPer_DPTR)       /* new DPTR into r7 */\
     ld_pi(REG, PCP_EpmHCrS_tiIncPer_FAR)        /* REG = EpmHCrS_tiIncPer */
#elif (CRS_TOOTHAVRG_SY == 1)             /* load EpmHCrS_tiIncPerAvrg */
#define IGNH_LOADTIINC(REG)\
     ldl_il(r7, PCP_EpmHCrS_tiIncPerAvrg_DPTR)   /* new DPTR into r7 */\
     ld_pi(REG, PCP_EpmHCrS_tiIncPerAvrg_FAR)    /* REG = EpmHCrS_tiIncPerAvrg */
#else
#error "CRS_TOOTHAVRG_SY" only value 0 or 1 allowed
#endif

/* Interface Macro */
#define IGNH_CALCSTARTANGLE_PCP(IGNHIA, IGNHDT, TMP1, TMP2, _IgnH_CalcStartAngle_PCP_ENTRY,\
                                _IGNH_CALCSTARTANGLE_PCP_LOC1)\
LABEL (_IgnH_CalcStartAngle_PCP_ENTRY)\
     mov(TMP2, r7, uc)                           /* save r7 */\
     /* load EpmHCrS_tiIncPer[Avrg] */\
     IGNH_LOADTIINC(TMP1)                        /* TMP1 = EpmHCrS_tiIncPer[Avrg] */\
     mov(r7, TMP2, uc)                           /* restore r7 */\
     /* DwellAngle = IGNH_INCANGLE * LeadTime / EpmHCrS_tiIncPer */\
     IGNH_LOADINCANGLE(TMP2)                     /* TMP2[31..16] = IGNH_INCANGLE */\
     clr(r7, PCP_R7_IEN_POS)                     /* disable IR */\
     /* mul/div sequence must not be interrupted by another routine that also uses mul/div instr. */\
     /* Since it is not determined, which channel pgms use mul/div in which priority, */\
     /* IR has to be disabled. */\
     ldl_il(TMP2, IGNH_INCANGLE)                 /* TMP2 = IGNH_INCANGLE */\
     /* disable IR becomes effective */\
     /* DwellTime = IGNHDT <= 0x00ffffff */\
     MUL_IGNH(TMP2, IGNHDT)                      /* r0 = TMP2 * IGNHDT */\
     mov(TMP2, r0, uc)                           /* free r0 for following division */\
                                                 /* TMP2 = IGNH_INCANGLE * LeadTime */\
     /* divide 32bit-IGNH_INCANGLE*LeadTime by 32bit-EpmHCrS_tiIncPer */\
     div32_no_dbz_check(TMP2, TMP1)         /* TMP2 = IGNH_INCANGLE*LeadTime / EpmHCrS_tiIncPer */\
                                                 /* = DwellAngle */\
     set(r7, PCP_R7_IEN_POS)                     /* reenable IR */\
     /* DwellAngle 720° [EPM_PHIMAX_SY] limitation */\
     IGNH_LOADEPM_PHIMAX(r0)                     /* r0 = EPM_PHIMAX_SY */\
     comp(r0, TMP2, uc)                          /* condition (EPM_PHIMAX_SY < DwellAngle) */\
     mov(TMP2, r0, ult)                          /* if (EPM_PHIMAX_SY < DwellAngle) then */\
                                                 /* (TMP2 <- r0 [EPM_PHIMAX_SY]) */\
     sub(IGNHIA, TMP2, uc)                       /* IGNHIA = IGNHIA - TMP2 */\
                                                 /*  = EndAngle - [DwellAngle | EPM_PHIMAX_SY] */



/***************************************************************************************************/

/*IGNH_TABLOOKUP_PCP
 ***************************************************************************************************
 * Table look up to determine lead angle value from IgnH_DrvLeadAngleMap. Inline Macro.
 *
 * Return table value. Input range is divided into bins: [0, 1*space] --> table[0],
 * ]space, 2*space] --> table [1] etc.
 * Small input values are assumed to be most likely.
 * Index of input bin is searched such that input values most probable are handled with as little
 * number of loops as possible.
 * Cf. C code of respective inline C function in ignh.h.
 *
 *   Inputs: Register mapped
 *           IGNHDT - DwellTime [GT0 ticks], sint32
 *           TMP0, TMP1, TMP2
 *
 *           RAM, Constants
 *           IgnH_LeadAngle - PRAM global, table of lead angle values [array]
 *           IGNH_LABINWIDTH - constant, space between adjacent table values in units of input bits.
 *                             Width of input bins.
 *           IGNH_NUM_LADTVALUES - constant, number of index values.
 *
 *           Labels
 *           _IGNH_TABLOOKUP_PCP_ENTRY - name of entry label
 *           _IGNH_TABLOOKUP_PCP_LOC1  - name of local label 1
 *           _IGNH_TABLOOKUP_PCP_EXIT  - name of exit label
 *
 *   Registers changed:
 *           IGNHDT, TMP0, TMP1, TMP2, r7[cond_flags]
 *
 *   Return:
 *           TMP1 - table value connected with input.
 *
 ***************************************************************************************************
 */
#define IGNH_NUM_LADTVALUES_M1 (IGNH_NUM_LADTVALUES - 1)

/* Macros to load a constant into a register. Code depends on length of constant to be loaded.
   Unfortunately, these macros cannot be defined universally, because preprocessing conditions
   need to be evaluated. */
/* REG = IGNH_NUM_LADTVALUES_M1 */
#if (IGNH_NUM_LADTVALUES_M1 & 0xffff0000)       /* width[CONST] > 16bit */
#define IGNH_LOADLADTVALUES_M1(REG)\
     ldl_iu(REG, IGNH_NUM_LADTVALUES_M1)\
     ldl_il(REG, IGNH_NUM_LADTVALUES_M1)        /* 4 * 16bit code space, 2 cycles */
#elif (IGNH_NUM_LADTVALUES_M1 & 0xffffffc0)     /* width[CONST] between 6bit and 16bit */
#define IGNH_LOADLADTVALUES_M1(REG)\
     ld_i(REG, 0)\
     ldl_il(REG, IGNH_NUM_LADTVALUES_M1)        /* 3 * 16bit code space, 2 cycles */
#else                                           /* width[CONST] < 6bit */
#define IGNH_LOADLADTVALUES_M1(REG)\
     ld_i(REG, IGNH_NUM_LADTVALUES_M1)          /* 1 * 16bit code space, 1 cycle */
#endif

/* REG = IGNH_LABINWIDTH */
#if (IGNH_LABINWIDTH & 0xffff0000)
#define IGNH_LOADLABINWIDTH(REG)\
     ldl_iu(REG, IGNH_LABINWIDTH)\
     ldl_il(REG, IGNH_LABINWIDTH)
#elif (IGNH_LABINWIDTH & 0xffffffc0)
#define IGNH_LOADLABINWIDTH(REG)\
     ld_i(REG, 0)\
     ldl_il(REG, IGNH_LABINWIDTH)
/* else clause is ommitted, since IGNH_LABINWIDTH is subtracted immediately below in this case. */
#endif

/* REG1 = REG1 - REG2 || REG1 = REG1 - IGNH_LABINWIDTH */
#if (IGNH_LABINWIDTH & 0xffffffc0)              /* width[IGNH_LABINWIDTH] > 6bit */
#define IGNH_SUBLABINWIDTH(REG1, REG2)\
     sub(REG1, REG2, uc)                        /* IGNH_LABINWIDTH in REG2 */
#else                                           /* width[IGNH_LABINWIDTH] <= 6bit */
#define IGNH_SUBLABINWIDTH(REG1, REG2)\
     sub_i(REG1, IGNH_LABINWIDTH)
#endif

/* Interface Macro */
#define IGNH_TABLOOKUP_PCP(IGNHDT, TMP0, TMP1, TMP2, _IGNH_TABLOOKUP_PCP_ENTRY,\
                           _IGNH_TABLOOKUP_PCP_LOC1, _IGNH_TABLOOKUP_PCP_EXIT)\
LABEL (_IGNH_TABLOOKUP_PCP_ENTRY)\
     IGNH_LOADLADTVALUES_M1(TMP1)               /* TMP1 = IGNH_NUM_LADTVALUES_M1 */\
     IGNH_LOADLABINWIDTH(TMP2)                  /* TMP2 = IGNH_LABINWIDTH */\
     /* */\
     ld_i(TMP0, 0)                              /* TMP0 = i = 0 */\
LABEL (_IGNH_TABLOOKUP_PCP_LOC1)\
     comp(TMP0, TMP1, uc)                       /* 1st break condition */\
     jc(_IGNH_TABLOOKUP_PCP_EXIT, sge)          /* i >= (IGNH_NUM_LADTVALUES - 1) */\
     /* */\
     IGNH_SUBLABINWIDTH(IGNHDT, TMP2)           /* IGNHDT = IGNHDT - IGNH_LABINWIDTH */\
                                                /* IGNHDT = input - space */\
     jc(_IGNH_TABLOOKUP_PCP_EXIT, sle)          /* 2nd break condition (in - i*LABINWIDTH) <= 0 */\
     add_i(TMP0, 1)                             /* TMP0++ = i++ */\
     jc(_IGNH_TABLOOKUP_PCP_LOC1, uc)\
     /* */\
LABEL (_IGNH_TABLOOKUP_PCP_EXIT)\
     /* TMP0 = index of value to be fetched from table */\
     add_i(TMP0, IgnH_LeadAngle_FAR)            /* TMP0 = &IgnH_LeadAngle[i] rel. to DPTR */\
     /* */\
     mov(TMP2, r7, uc)\
     ldl_il(r7, IgnH_LeadAngle_DPTR)            /* new DPTR into r7 */\
     ld_p(TMP1, TMP0, uc)                       /* TMP1 = IgnH_LeadAngle[i]; */\
     mov(r7, TMP2, uc)                          /* restore r7 */




/***************************************************************************************************/
/* MISRA RULE 19.11 VIOLATION:
   Macros are tested for definition. If not def'd, respective code is intended to be excluded. */
#ifdef IGNH_DEBUG
#include "port.h"

#define IGNH_DBG_POUT (&(P4.OUT))                /* &P4.OUT */
#define IGNH_DBG_PIN  4                          /* Pin #4 */
/* #define IGNH_DBG_POUT (&(P2.OUT)) */
/* #define IGNH_DBG_PIN  15                          /\* Pin #15 *\/ */
/* IGNH_DBGTESTPULSE
 ***************************************************************************************************
 * Debug test pulse output. Inline Macro.
 * Output n pulses on a certain portpin [hard coded, cf. defines above]. If input # pulses == 0,
 * reset portpin to LOW and initialize output.
 *
 *   Inputs: Register mapped
 *           NOPULSES - n, # pulses
 *
 *           Labels
 *           _DBGTESTPULSE_ENTRY   - name of entry label
 *           _DBGTESTPULSE_LOC1    - name of local label 1
 *           _DBGTESTPULSE_EXIT    - name of exit label
 *
 *   Registers changed:
 *           NOPULSES, TMP1
 *
 ***************************************************************************************************
 */
#define IGNH_DBGTESTPULSE(NOPULSES, TMP1, _DBGTESTPULSE_ENTRY, _DBGTESTPULSE_LOC1,\
                          _DBGTESTPULSE_EXIT)\
LABEL (_DBGTESTPULSE_ENTRY)\
     ldl_iu(TMP1, IGNH_DBG_POUT)\
     ldl_il(TMP1, IGNH_DBG_POUT)                 /* TMP1 = &POUT */\
     clr_f(TMP1, IGNH_DBG_PIN, 16)               /* reset port */\
     comp_i(NOPULSES, 0)\
     jc(_DBGTESTPULSE_EXIT, z)                   /* only reset, if NOPULSES=count=0 */\
     /* loop counter NOPULSES */\
LABEL (_DBGTESTPULSE_LOC1)\
     set_f(TMP1, IGNH_DBG_PIN, 16)               /* set port, 1 pulse */\
     nop()\
     nop()\
     nop()\
     nop()\
     nop()\
     clr_f(TMP1, IGNH_DBG_PIN, 16)               /* reset port */\
     nop()\
     nop()\
     nop()\
     sub_i(NOPULSES, 1)                          /* NOPULSES-- */\
     jc(_DBGTESTPULSE_LOC1, sgt)\
LABEL (_DBGTESTPULSE_EXIT)
#endif
/* IGNH_DEBUG */

#endif
/* _IGNH_PCP_H */
