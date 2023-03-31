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
 * $Filename__:injhpfi_prot.h$
 *
 * $Author____:HIA3SI$
 *
 * $Function__:Initial import from Nestor 
 *                  Object in Nestor : 
 *                  Domain :MX17
 *                  Class :CDCOMP
 *                  Object name :INJHPFI
 *                  Variant :2.60
 *                  Revision :1$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AOS2KOR$
 * $Date______:22.10.2012$
 * $Class_____:SWHDR$
 * $Name______:injhpfi_prot$
 * $Variant___:2.11.1$
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
 * 2.11.1; 0     22.10.2012 AOS2KOR
 *   Bugfix for Fast recovery after fuel cutoff
 * 
 * 2.10.1; 0     04.10.2010 GEHAAF
 *    MACHINE_TYPE definition  no more needed,
 *    MISRA - Warnings removed (hexneutral)
 *   
 *   
 * 
 * 2.10.0; 0     19.10.2009 BUA2ABT
 *   changes for support of 12 cylinders
 * 
 * 2.8.0; 0     14.10.2009 HIA3SI
 *   Ported from Nestor
 *   CDCOMP : INJHPFI  2.80; 1
 *   
 *   CRQ 275122
 *   ressource reduction to 1 gtc and 1ltc
 * 
 * 2.6.0; 0     22.10.2008 HIA3SI
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :injhpfi_prot
 *        Variant :2.60
 *        Revision :1
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


/**
 ***************************************************************************************************
 * \moduledescription
 *              types and API functions for InjHGDI driver
 *
 * \scope           [CONF][API][INTERN]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#ifndef _INJHPFI_PROT_H
#define _INJHPFI_PROT_H


#ifndef _COMMON_H
#include <common.h>
#endif


#ifndef _MACHINE_H
#include <machine.h>
#endif

#ifndef _intrinsics_h
#include <intrinsics.h>
#endif

#ifndef _CPU_H
#include <cpu.h>
#endif

#ifndef _PCP_H
#include <pcp.h>
#endif

/* with these defines only the pcp-macros for the functions of the InjHPfi are included from
   pcp_pramdef_auto_conf.h
*/

#define INJHPFI_CHLFSM_SELECT
#define INJHPFI_SWIRISR_SELECT


#ifndef _PCP_PRAMDEF_AUTO_CONF_H
#include <pcp_pramdef_auto_conf.h>
#endif


#ifndef _CDRV_SRVH_PCP_H
#include <CDrv_SrvH_pcp.H>
#endif

#ifndef _CDRV_MEMLAY_H
#include <cdrv_memlay.h>
#endif

#ifndef _GPTA_H
#include <gpta.h>
#endif

#ifndef _INJHPFI_GPTA_H
#include <injhpfi_gpta.h>
#endif

#ifndef _INJHPFI_H
#include <injhpfi.h>
#endif



/************************************************************************/
/*                 Check of system constants used in this module        */
/************************************************************************/
#ifndef EPMHCRS_NUMINC
  #error >>>> 'EPMHCRS_NUMINC' undefined!
#endif

#ifndef EPM_PHIMAX_SY
  #error >>>> 'EPM_PHIMAX_SY' undefined!
#endif

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define INJHPFI_MAX(A,B)    ((A)>(B) ? (A):(B))


# define TC1796_GTC_WO   /* Activate workaround due to non functional >= compare. */

/* defines the number of GT1-Ticks per tooth on crankshaft position wheel */
#define INJHPFI_TOOTHTICKS (((EPM_PHIMAX_SY-1) >> 1) / EPMHCRS_NUMINC)

/* The Core macro cannot be used because it uses a non macro input so that the calculation cannot
   be done by the c-preprocessor. This is why INJHPFI uses its own macro. */
#define INJHPFI_GPTA_US_TO_TICKS(microsecs)      ( (microsecs) * ( (GPTA_MODULE_CLOCK) / 1000 ) )


/* UPDTIMEDISTEVENT represents the time in GT0-ticks which is used in
   InjHPfi_StmCcUpdRunXxWaitThen(...). Its value is defined by the IR latency. If higher
   prio IR come in between the the check (new XR is in Future rel. to GT0+UPDTIMEDISTEVENT ?) and
   the according setup operation of the GTC there could occur unwanted pulse lengthening if
   UPDTIMEDISTEVENT is lower than the max IR latency plus some runtime. Since this
   runtime << IR latency it is not considered in this calculation.
   Note that UPDTIMEDISTEVENT must always be bigger than the runtime between the mentioned check
   and the deactivation of the GTC ( ldl_il(rx,INJHPFI_GTCCTR_SKIP_END),  st_f(rx,ry,32) in
   InjHPfi_StmCcUpdRunXxWaitThen).
*/
#define INJHPFI_IR_LATENCY_US 200 /* keep consistent with the value in the pcp channel
                                     configuration */

/* In case of usage with older core than V6.0.0 */
#ifndef GPTA_GT0_US_TO_TICKS_PCP
#define GPTA_GT0_US_TO_TICKS_PCP(microsecs) ( ( (microsecs) * GPTA_GT0_TICKS_PER_10US_U32 ) / 10ul )
#endif

#define UPDTIMEDISTEVENT GPTA_GT0_US_TO_TICKS_PCP(INJHPFI_IR_LATENCY_US)
/*
  Calculation of the function stack depth for the SW-IR:
  - Worst case: number of channels InjHPfi_Update() calls
  number of channels InjHPfi_SetNewMi() calls
  number of channels InjHPfi_StopStart() calls
  number of channels InjHPfi_SetNewDi() calls
*/
#define SW_IR_FCN_STACK_DEPTH (INJHPFI_NR_CHLS << 2)


/* Calculation of the min angle INJHPFI_ANGLE_MINOFF_TIME_GRD towards the abort angle where no
   more after dribble is stared.
   First this angle must be greater than the MIN_OFF_TIME at max angle speed (10000 rpm).
   INJHPFI_ANGLE_MINOFF_TIME_GRD = 10000 U/min * 360°/U * min/(60s) * Time in us * s/(1000000)us =
   (1*6*INJHPFI_MIN_OFF_TIME_US)/100 in ° . The Quantization of 1° is fine enough.
   Then a conversion to the angle clock ticks is done (INJHPFI_ANGLE_MINOFF_TIME_TICKS_1).
   Here the angle clock frequency is assumed to be constant.

   It has also to be ensured that between the the two points
   1. check whether the abort angle is to near
   2. deactivation of the abort cell GTC A in InjHPfi_StmCcUpdRunXxWaitThen_Ad
   no abort event can take place.
   This is ensured by calculating INJHPFI_ANGLE_MINOFF_TIME_TICKS_2 as follows:
   The runtime (us) between the two points (with some reserve) depends on f_sys and is calculated
   in INJHPFI_TIME_ABORT_CHECK. At f_sys=75MHz the measured runtime is 653ns. Adding generous
   reserve ->  6us. Scaling this time by f_sys yields
   INJHPFI_TIME_ABORT_CHECK = (6us * 75MHz / f_sys) [MHz] in us
   The conversion to angle clock ticks (INJHPFI_ANGLE_MINOFF_TIME_TICKS_2) is done by the
   asumption that the angle clock runs with max GPTA frequency (angle clock burst).

   This angle can be influenced also by the user with INJHPFI_MIN_ANGLE_AD_GRD, so the max. of
   these three is taken.
*/

#define INJHPFI_ANGLE_MINOFF_TIME_GRD (1*6*INJHPFI_MIN_OFF_TIME_US)/100
#define INJHPFI_ANGLE_MINOFF_TIME_TICKS_1 (INJHPFI_ANGLE_MINOFF_TIME_GRD * (EPM_PHIMAX_SY+1))/720
#define INJHPFI_TIME_ABORT_CHECK 450/MACHINE_TICKS_PER_US /* in us */
#define INJHPFI_ANGLE_MINOFF_TIME_TICKS_2  INJHPFI_GPTA_US_TO_TICKS(INJHPFI_TIME_ABORT_CHECK)
#define INJHPFI_ANGLE_MINOFF_TIME_TICKS_3 (INJHPFI_MIN_ANGLE_AD_GRD * (EPM_PHIMAX_SY+1))/720
#define INJHPFI_MX_1_2 INJHPFI_MAX(INJHPFI_ANGLE_MINOFF_TIME_TICKS_1,\
                                               INJHPFI_ANGLE_MINOFF_TIME_TICKS_2)
#define INJHPFI_MIN_ANGLE_AD INJHPFI_MAX(INJHPFI_MX_1_2, INJHPFI_ANGLE_MINOFF_TIME_TICKS_3)

#define INJHPFI_MIN_OFF_TIME_GT0 GPTA_GT0_US_TO_TICKS_PCP(INJHPFI_MIN_OFF_TIME_US)

#ifndef CPU_SET_SEQUENCE_POINT
/**
***************************************************************************************************
* Enforce a sequence point in the code.
*
* This macro inserts a "sequence point" in the assembly code generated by the compiler.
* The optimizer is not allowed to move instructions beyond se-quence points while re-ordering.
***************************************************************************************************
*/
#define CPU_SET_SEQUENCE_POINT() asm volatile ("" ::: "memory")
#endif

/* position of the fcn ID in Pcp_Pram_s.InjHPfi_Drv_SwIrId[]:
   [31,16] fcn ID, [15,0] Pcp Chl DPTR formattet for r7   */
#define SW_IR_ID_POS 16ul

/* defines for InjDtaNextValidFlag flag position */
#define INJHPFI_INJNEXTDTA_VALID 0x00000001
#define INJHPFI_INJNEXTDTA_VALID_NO 0x0

/* two defines for Masking Di-flag and for Di-flag bit no */
#define INJHPFI_DIFLAG 0x80000000
#define INJHPFI_DIFLAG_NO 31

/* two defines for masking the INJHPFI_UPDNEXT_FLAG of ThreshTeUpd_UFlag*/
#define INJHPFI_UPDNEXT_FLAG 0x00000001
#define INJHPFI_UPDNEXT_FLAG_NO 0

/* define for the number of GT1 Ticks per tooth */
#define INJHPFI_INCANGLE ((360 * EPM_PHIMAX_SY) / (720*EPMHCRS_NUMINC))  /* in GT1 units */

/* Start defines for the channel state */
#define INJHPFI_BITNO_WAIT0 0
#define INJHPFI_BITNO_PENDMI 1
#define INJHPFI_BITNO_RUNMIWAITTHEN 2
#define INJHPFI_BITNO_MINOFFTIME 3
#define INJHPFI_BITNO_RUNADWAITTHEN 4
#define INJHPFI_BITNO_CUTOFF 5
#define INJHPFI_BITNO_PENDDI 6
#define INJHPFI_BITNO_RUNDI 7
/* this defines the states where an update takes effect. Note that in general it is allowed
   to request an update in any state.  */
#define INJHPFI_STATEPATTERN_UPD ((sint32) ((1ul << INJHPFI_BITNO_PENDMI) | \
                                           (1ul << INJHPFI_BITNO_RUNMIWAITTHEN) | \
                                           (1ul << INJHPFI_BITNO_RUNADWAITTHEN)))

#define INJHPFI_STATEPATTERN_RCVRYCUTOFF ((sint32) ((1ul << INJHPFI_BITNO_WAIT0)))

#define INJHPFI_MASK_ALL_FLAGS 0xffff0000
/* Stop defines for the channel state*/

/* define for Bit "increment on InjHPfi_Drv_NextFreeSwIrId by PCP is coming up soon" */
#define INJHPFI_INC_NEXTFREESWIRID_BIT_NO 31

/* InjHPfi_Future24 determines whether TimVal lies in the future rel. to RimRef. The function
   works well only for 24 Bit timers/counters and the future/past horizon is timer period/2.
   Bits >24 in the fcn parameters do not disturb the calculcation and may have arbitrary values.*/
static __inline__ bool InjHPfi_Future24(uint32 TimVal, uint32 TimRef);
static __inline__ bool InjHPfi_Future24(uint32 TimVal, uint32 TimRef)
{
    uint32 Diff;
    Diff = TimVal - TimRef;
    return !((bool)SrvB_GetBit(Diff,23));
}

/* macro for initialization of the r7-value in the injection channel PCP-CSA
   (instance of InjHPfi_ChlFsm) */
    /* MISRA RULE 19.4 VIOLATION: tha macro is in brackets */
#define INJHPFI_CSAR7INIT(channel) \
 {  uint32 xTemp_u32 = 0; \
    asm("movh %0, lo:InjHPfi_ChlFsm":"=d"(xTemp_u32):); \
    xTemp_u32 = (xTemp_u32 >> 1UL) \
              | ((uint32)INJHPFI_CHL##channel##_DPTR << PCP_R7_DPTR_POS) \
              | (1UL << PCP_R7_CEN_POS) \
              | (1UL << PCP_R7_IEN_POS);    \
      Pcp_Pram_s.InjHPfi_Chl##channel.xR7_u32 = xTemp_u32; }


/************************************************************************************************+
 * Start: defines for adressing the CSA.r7 of the injection channel (instance of ChlFsm)
 *
 * INJHPFI_DPTR_CHLFSM_CHLCSA calculates the Pcp DPTR (r7 format) of the data page where the
 * channel context is stored. The data page pointer depends on the Pcp channel priority. */
#define INJHPFI_DPTR_CHLFSM_CHLCSA(prio) (((((prio)/8)<< PCP_R7_DPTR_POS_NDT) |\
                         (0x01 << PCP_R7_CEN_POS_NDT)         |\
                         (0x01 << PCP_R7_IEN_POS_NDT)))
/************************************************************************************************
 * INJHPFI_OFFSET6_CSAREG calculates the offset for Pcp Adressing (adr_pcp = Dptr << 6 + offset)
 * from channel priority and the register number (r0 - r7).
 * prio*8 yields the Pcp adress of the channel's CSA. This adress represents the r7 adress of the
 * CSA (refer to the controller manual).
 * Calculating the offset means subtracting the data page number ((prio)/8)*64.
 *                                           <----->   <----------->
                                           PRAM-ADR     Adr of DataP.                      */
#define INJHPFI_OFFSET6_CSAREG(prio,regnr) ((prio)*8 - ((prio)/8)*64 + 7 - (regnr))

/*************************************************************************************************
 * defines for max 12 injection channels (-> 10 instances of ChlFsm)
 * format: [31:16]=offset | [15:0] DPTR(r7-format)                                            */
#define INJHPFI_CHL0_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL0_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL0_PRIO,7)<<16)

#define INJHPFI_CHL1_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL1_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL1_PRIO,7)<<16)

#define INJHPFI_CHL2_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL2_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL2_PRIO,7)<<16)

#define INJHPFI_CHL3_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL3_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL3_PRIO,7)<<16)

#define INJHPFI_CHL4_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL4_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL4_PRIO,7)<<16)

#define INJHPFI_CHL5_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL5_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL5_PRIO,7)<<16)

#define INJHPFI_CHL6_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL6_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL6_PRIO,7)<<16)

#define INJHPFI_CHL7_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL7_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL7_PRIO,7)<<16)

#define INJHPFI_CHL8_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL8_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL8_PRIO,7)<<16)

#define INJHPFI_CHL9_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL9_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL9_PRIO,7)<<16)

#define INJHPFI_CHL10_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL10_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL10_PRIO,7)<<16)

#define INJHPFI_CHL11_CSAR7_P INJHPFI_DPTR_CHLFSM_CHLCSA(INJHPFI_CHL11_PRIO)|\
                      (INJHPFI_OFFSET6_CSAREG(INJHPFI_CHL11_PRIO,7)<<16)

/* Start defines for the fcn ID's on PCP.  */
#define INJHPFI_STOPSTARTTRG 1
#define INJHPFI_UPDATETRG 2
#define INJHPFI_SETNEWMITRG 3
#define INJHPFI_SETNEWDITRG 4
/* Stop defines for the fcn ID's on PCP.  */

/*
***************************************************************************************************
* Type definition
***************************************************************************************************
*/
/* keep consistent with the fcn ID macros for PCP in injhpfi_pcp.h! */
typedef enum {StopStartTrg = INJHPFI_STOPSTARTTRG,        /* fcn ID for the StopStart function */
              UpdateTrg = INJHPFI_UPDATETRG,              /* fcn ID for the Update function */
              SetNewMiTrg = INJHPFI_SETNEWMITRG,          /* fcn ID for SetNewMi function */
              SetNewDiTrg = INJHPFI_SETNEWDITRG           /* fcn ID for the SetNewDi function */
}FcnId_t;


typedef struct     /* Keep consistent with declaration in <PCP_FUNC_VARS_DECL> (injhpfi_conf.xml) */
{
    sint32 Te_N;                     /* effective injection duration, "N"ext inj. parameter set*/
    sint32 Tvub_N;                   /* injection valve delay time, "N"ext inj. parameter set */
    sint32 AngEnd_TimeBegin_N;       /* main pulses end angle / begin-time (depends on Mi or Di-
                                        flag in FlagsAndState) "N"ext inj. parameter set */
    sint32 AngAbort_DiFlag_N;        /* [31] = Di-flag, true -> "N"ext inj. parameter set
                                        is a Di-type injection (time based).
                                        false-> angle based
                                        [23]:[0] = abort angle, "N"ext inj. parameter set */
    sint32 Te_C;                     /* effective injection duration, "C"urrent inj. parameter set*/
    sint32 Tvub_C;                   /* injection valve delay time, "C"urrent inj. parameter set */
    sint32 AngEnd_TimeBegin_C;       /* main pulses end angle / begin-time (depends on Mi or Di-
                                        flag in FlagsAndState) "C"urrent inj. parameter set */
    sint32 AngAbort_DiFlag_C;        /* [31]  = Di-flag, true -> "C"urrent inj. parameter set is a
                                        Di-type injection (time based).
                                        false-> angle based
                                        [23]:[0] = abort angle "C"urrent inj. parameter set
                                        Since in case of Di-flag = 1  the abort angle is not
                                        used the Bit does not disturb further calculations
                                        on the abort angle (e.g TC1796_GTC_WO) */
    sint32 TeUpd;                     /* effective injection duration, actual update value */
    sint32 ThreshTeUpd_UFlag;         /* threshold on Te for after dribble [30:0] and flag [0]
                                         INJHPFI_UPDNEXT; true-> parameter set "InjDtaNext"
                                         must be updated (by pcp) in case of an update trigger */
    uint32 FcnUpdate_p;               /* adress of the update function to be executed next */
    uint32 FlagsAndStateUp;           /* [31:16] = flags, [15:0] = state;
                                         "Up" = pcp (w) cpu (r) except during the init function */
                                         /* flags: none

                                         State: Bit coded
                                         0 = 0x0001: Wait0
                                         1 = 0x0002: PendMi
                                         2 = 0x0004: RunMiWaitThen
                                         3 = 0x0008: MinOffTime
                                         4 = 0x0010: RunAdWaitThen
                                         5 = 0x0020: CutOff
                                         6 = 0x0040: PendDiRunThen
                                         */
    uint32 InjDtaNextValidFlag;          /* [0] true-> parameter set "InjDtaNext" is valid */
}InjHPfi_ChlDta_t;


typedef struct
{
    volatile GPTA0_GTC_t * GTCCTR_p;    /* adress of channel's GTC */
    volatile uint32 * SRC_p;            /* adress of the channel's SRN */
    volatile uint32 * CSAR7_p;          /* adress of the channel's CSA-r7 value on PRAM */
    volatile GPTA0_LTC_t * LTCCTR_p;    /* adress of channel's LTC */
    volatile uint32 * LTCSRC_p;         /* adress of the channel's SRN */
    volatile uint32 * LTCSRSC_p;        /* adress of the channel's SRSC */
    volatile uint32 * LTCSRS_MASK_p;    /* mask of the channel's SRS */
}InjHPfi_ChlConstDta_t;



/*
***************************************************************************************************
* Variables
***************************************************************************************************
*/

extern volatile InjHPfi_ChlDta_t * const InjHPfi_ChlDta_p[];
extern volatile InjHPfi_ChlConstDta_t * const InjHPfi_ChlConstDta_p[];

extern void __attribute__ ((asection(".pcptext","f=axp"))) InjHPfi_StmTrUpdNoFkt(void);
CODE_NORM(extern bool InjHPfi_SetFcnId(FcnId_t FcnId, uint8 Chl));
CODE_SLOW(extern void InjHPfi_CsaR7Init(void));



#endif /* #ifndef _INJHPFI_PROT_H */
