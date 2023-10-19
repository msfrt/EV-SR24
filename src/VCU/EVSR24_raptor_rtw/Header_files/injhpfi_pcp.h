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
 * $Filename__:injhpfi_pcp.h$
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
 * $User______:GEHAAF$
 * $Date______:04.10.2010$
 * $Class_____:SWHDR$
 * $Name______:injhpfi_pcp$
 * $Variant___:2.10.1$
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
 * 2.10.1; 0     04.10.2010 GEHAAF
 *   MISRA - Warnings removed (hexneutral)
 *   
 *   
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
 *        Object name :injhpfi_pcp
 *        Variant :2.10
 *        Revision :3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _INJHPFI_PCP_H
#define _INJHPFI_PCP_H

#include <injhpfi_prot.h>

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Start defines for Accessing the PCP channel Data (function InjHPfi_ChlFsm)
   on the channel data page */
#define INJHPFI_CHLDTA_TE_N (InjHPfi_ChlData + 0)
#define INJHPFI_CHLDTA_TVUB_N (InjHPfi_ChlData + 1)
#define INJHPFI_CHLDTA_ANGEND_TIMEBEGIN_N (InjHPfi_ChlData + 2)
#define INJHPFI_CHLDTA_ANGABORT_DIFLAG_N (InjHPfi_ChlData + 3)
#define INJHPFI_CHLDTA_TE_C (InjHPfi_ChlData + 4)
#define INJHPFI_CHLDTA_TVUB_C (InjHPfi_ChlData + 5)
#define INJHPFI_CHLDTA_ANGEND_TIMEBEGIN_C (InjHPfi_ChlData + 6)
#define INJHPFI_CHLDTA_ANGABORT_DIFLAG_C (InjHPfi_ChlData + 7)
#define INJHPFI_CHLDTA_TEUPD (InjHPfi_ChlData + 8)
#define INJHPFI_CHLDTA_THRESTEUPD_UFLAG (InjHPfi_ChlData + 9)
#define INJHPFI_CHLDTA_FCNUPDATE_P (InjHPfi_ChlData + 10)
#define INJHPFI_CHLDTA_FLAGSANDSTATEUP (InjHPfi_ChlData + 11)
#define INJHPFI_CHLDTA_INJDTANEXTVALID (InjHPfi_ChlData + 12)

/* defines for the const channel data : */
#define INJHPFI_CHLCTDTA_GTCCTR      (InjHPfi_ChlConstData + 0)
#define INJHPFI_CHLCTDTA_GTCSRC      (InjHPfi_ChlConstData + 1)
#define INJHPFI_CHLCTDTA_CSAR7       (InjHPfi_ChlConstData + 2)
#define INJHPFI_CHLCTDTA_LTCCTR      (InjHPfi_ChlConstData + 3)
#define INJHPFI_CHLCTDTA_LTCSRC      (InjHPfi_ChlConstData + 4)
#define INJHPFI_CHLCTDTA_LTCSRSC     (InjHPfi_ChlConstData + 5)
#define INJHPFI_CHLCTDTA_LTCSRS_MASK (InjHPfi_ChlConstData + 6)

/* Stop defines for PCP channel data access (function InjHPfi_ChlFsm) */

#define PCP_R7_Z_POS_NDT          0
#define PCP_R7_C_POS_NDT          2
#define INJHPFI_EXIT_IDZERO_BIT_NO 0


/* Address offset between GTC.CTR and GTC.XR:
   Be aware that there are many points in ignh PCP assembler code that rely on the size
   of the values below to be less than 6bits. */
#ifdef MAXSIM   /* MaxSim environment */
/* Address offset between GTC.CTR and GTC.XR */
#  define INJHPFI_GTCXR_OFFS (sizeof(uint32))
/* Address offset between LTC.CTR and LTC.XR */
#  define INJHPFI_LTCXR_OFFS (sizeof(uint32))
/* Address offset between GTC[n].CTR and GTC[n-1].CTR */
#  define INJHPFI_GTC_OFFS (sizeof(uint32) << 1)
#else
/* Use non ANSI extension "typeof" of gcc, but this way connected with GPTA0_RegMap_t
   hardware register struct. */
/* Address offset between GTC.CTR and GTC.XR */
#  define INJHPFI_GTCXR_OFFS (sizeof(typeof(GPTA0.GTC[0].GTCCTR)))
/* Address offset between LTC[n].CTR and LTC[n-1].CTR */
#  define INJHPFI_LTCXR_OFFS (sizeof(typeof(GPTA0.LTC[0].LTCCTR)))
/* Address offset between GTC[n].CTR and GTC[n-1].CTR */
#  define INJHPFI_GTC_OFFS (sizeof(typeof(GPTA0.GTC[0])))
#endif

/* ldl_il_cptr copies the PCP CMEM adress of the label to reg1.*/
#ifndef ldl_il_cptr
#define ldl_il_cptr(reg1,label) asm("ldl.il  "#reg1",  cptr:"#label"");
#endif

/***********************************************************************************************
 * INJHPFI_FUTURE: return: >= reference value (24Bit Counters GT);
 ***********************************************************************************************
 * This macro implements the following function:
 * if(VAL lies in the past ref. to REFVAL)
 *    {
 *       VAL = REFVAL;
 *    }
 * where the future/past horizon is 2^24/2.
 *  Inputs: Register mapped
 *          VAL,TMP1,REFVAL;  VAL,REFVAL: Bits >pos 24 do not disturb the calculation
 *  Return: VAL;
 *
 *  Registers changed:
 *          VAL, TMP1;
 *********************************************************************************************/

#define INJHPFI_FUTURE(VAL,TMP1,REFVAL)\
     mov(TMP1,VAL, uc)                       /* TMP1 = VAL, to leave VAL  untouched */\
     sub(TMP1,REFVAL,uc)                     /* TMP1 = TMP1 - REFVAL;  */\
     chkb(TMP1,23,set) /* bit 23 clr ?-> VAL lies in Future in reference to REFVAL, else -> Past*/\
     mov(VAL,REFVAL,c)                      /* If input-VAL lies in the past REFVAL is returned*/

/***********************************************************************************************
 * INJHPFI_FUTURE_BOOL: return: Carry Bit, true-> VAL lies in the future in ref. to REFVAL
 ***********************************************************************************************
 *  Inputs: Register mapped
 *          VAL,REFVAL;  VAL,REFVAL: Bits >pos 24 do not disturb the calculation
 *  Return: Carry Bit of r7;
 *
 *  Registers changed:
 *          VAL;
 *********************************************************************************************/

#define INJHPFI_FUTURE_BOOL(VAL,REFVAL)\
     sub(VAL,REFVAL,uc)                     /* VAL = VAL - REFVAL;  */\
     chkb(VAL,23,clr) /* bit 23 clr ?-> C=set ->  VAL lies in Future in reference to REFVAL,
                         else -> Past*/



/***********************************************************************************************
 * INJHPFI_INCR_GLOP_VAR: (global PCP variable)++;
 ***********************************************************************************************
 * This macro increments a global PCP variable by 1. An overflow occurs at 0xffffffff.
 * Note that the operation is non atomic e.g. a write operation to the global variable while the
 * channel is suspended or from CPU is discarded if it comes in between the read and store
 * instructions of the global variable.
 *
 *  Inputs: Register mapped
 *          TMP1, TMP2
 *
 *          Constants
 *          DPTR of global PCP variable, FAR-offstet of global PCP variable
 *
 *  Registers changed:
 *          TMP1, TMP1;
 *********************************************************************************************/


#define INJHPFI_INCR_GLOB_VAR(TMP1,TMP2,INJHPFI_GLVAR_DPTR,INJHPFI_GLVAR_FAR)\
    mov(TMP1,r7,uc)                           /* save Chl's DPTR */\
    ldl_il(r7,INJHPFI_GLVAR_DPTR)              /* load DPTR of global PCP variable */\
    ld_i(TMP2,1)                              /* increment */\
    add_pi(TMP2,INJHPFI_GLVAR_FAR)            /* add global variable to the increment */\
    st_pi(TMP2,INJHPFI_GLVAR_FAR)             /* store global variable */\
    mov(r7,TMP1,uc)                           /* restore Chl's DPTR */

/**********************************************************************************************/

/***********************************************************************************************
 * INJHPFI_LOAD_GTx: return: Global Timer Value);
 ***********************************************************************************************
 * This macro returns the adressed GT0|GT1 value.
 *  Inputs: Register mapped
 *          GTxVAL: use as temp register and as return register
 *
 *  Constants:
 *  Return: GTxVAL = GT0|GT1 value
 *
 *  Registers changed:
 *          GTxVAL;
 *********************************************************************************************/

#define INJHPFI_LOAD_GT0(GTxVAL)\
    ldl_il(GTxVAL,&GPTA0.GTTIM0)\
    ldl_iu(GTxVAL,&GPTA0.GTTIM0)\
    ld_f(GTxVAL,GTxVAL,32)                        /* GTxVAL = GTx */

#define INJHPFI_LOAD_GT1(GTxVAL)\
    ldl_il(GTxVAL,&GPTA0.GTTIM1)\
    ldl_iu(GTxVAL,&GPTA0.GTTIM1)\
    ld_f(GTxVAL,GTxVAL,32)                        /* GTxVAL = GTx */



/* INJHPFI_REGLOAD_GTCSETCOMP_PCP | INJHPFI_REGREADY_GTCSETCOMP_PCP
***************************************************************************************************
* Set up a compare event on a given GTC. Inline Macro.
* INJHPFI_REGLOAD_GTCSETCOMP_PCP loads addresses of CTR and X registers from PRAM and programs
* the value given in XR into XReg and the constant value INJHPFI_GTCCTRMASK into CTR.
* INJHPFI_REGREADY_GTCSETCOMP_PCP assumes the adresses of CTR and X registers to be loaded.
* Sequence: 1st write XReg with the right compare value to avoid unadvertent match on writing to
*           CTR thereafter. Thus, prepared for equal compare.
*           2nd write to CTR
*           3rd write XReg to trigger the GE compare.
* As a workaround to the defective GE hardware compare, the 3rd write to XReg can be replaced with
* a function call that runs a GE compare in software.
* This workaround runs only with a fixed register allocation [see below]!!!
* INJHPFI_REGREADY_GTCSETCOMP_PCP: upper 16bit of TMP1 are assumed cleared!
*
*   Inputs: Register mapped
*             XR - compare value to be written into XReg
*             CTR_p, XR_p - addresses of CTR and X registers [INJHPFI_REGREADY_GTCSETCOMP_PCP]
*             TMP1
*           RAM, Constants
*             InjHPfi_ChlConstDta_p->GTCCTR_p - PRAM channel const.
*
*             INJHPFI_GTCCTRMASK - Constant, CTR register mask
*
*   Registers changed:
*           CTR_p, XR_p, TMP1
*
***************************************************************************************************
*/
#ifdef TC1796_GTC_WO
/* Warning: GTC_GE workaround works with fixed register allocation only! */
/* ((XR == r0) && (TMP1 == r1) && (CTR_p == r3) && (XR_p == r4)) */
#  define INJHPFI_WRITEX\
     call (InjHPfi_GECompare)
#else
#  define INJHPFI_WRITEX\
     st_f(XR, XR_p, 32)
#endif
/* Interface Macro */

/* Note that as long as the TC1796_GTC_WO is active the registers used by the following
   macros are fixed due to the registers used with the call target CDRV_SRVH_GECOMPARE(..) in
   injhpfi_fsm_pcp.c: XR=r0, CTR_p=r2, XR_p=r4, TPM1=r1.   */
#define INJHPFI_REGLOAD_GTCSETCOMP_PCP(XR, CTR_p, XR_p, TMP1, _INJHPFI_GTCCTRMASK)\
     /* load GTC addresses into regs */\
     ld_pi(XR_p, INJHPFI_CHLCTDTA_GTCCTR)\
     mov(CTR_p, XR_p, uc)                          /* CTR_p = addr. of CTR */\
     add_i(XR_p, INJHPFI_GTCXR_OFFS)                  /* XR_p = addr. of X */\
     /* no 'capture after compare' has happened before, so no need to unlock XReg by reading it.*/\
     /* load values to be written into regs */\
     ld_i(TMP1, 0)                                 /* TMP1 = 0 */\
     ldl_il(TMP1, _INJHPFI_GTCCTRMASK)                 /* TMP1 --> CtrReg, upper half already 0 */\
     /* write the GTCn control registers X and CTR */\
     st_f(XR, XR_p, 32)                            /* write X */\
     st_f(TMP1, CTR_p, 16)                         /* write CTR */\
     INJHPFI_WRITEX

#define INJHPFI_REGREADY_GTCSETCOMP_PCP(XR, CTR_p, XR_p, TMP1,_INJHPFI_GTCCTRMASK)\
     ld_i(TMP1, 0)                                 /* TMP1 = 0 */\
     ldl_il(TMP1, _INJHPFI_GTCCTRMASK)                 /* TMP1 --> CtrReg, upper half already 0 */\
     /* write the GTCn control registers X and CTR */\
     st_f(XR, XR_p, 32)                            /* write X */\
     st_f(TMP1, CTR_p, 16)                         /* write CTR */\
     INJHPFI_WRITEX


/* INJHPFI_SETUPIAMAXINT
 ***************************************************************************************************
 * Set up a count down event on a given LTC for triggering an interrupt on max. injection angle.
 * Inline Macro.
 *
 * First calculates count of angle tics until max. angle is reached. LTC.XR is loaded with FFFF -
 * "ticks to max. angle".  So an interrupt is triggered on max. injection angle. LTC.CTR is set for
 * one shot mode.
 *
 *   Inputs: Register mapped
 *              TMP0 - for temporary data
 *              IAMAX - max. injection angle for compare with GT1
 *              LTCCTR_p - address of LTC.CTR
 *              LTCXR_p - address of LTC.XR
 *
 *
 *
 *   Registers changed:
 *           TMP0, IAMAX
 *
 ***************************************************************************************************
 */
#define INJHPFI_SETUPIAMAXINT(IAMAX, LTCCTR_p, LTCXR_p, TMP0)\
    ldl_il(TMP0, &(GPTA0.GTTIM1))\
    ldl_iu(TMP0, &(GPTA0.GTTIM1))               /* TMP0 = adr. of GT1 */\
    ld_f(TMP0, TMP0, 32)                        /* TMP1 = value of GT1 */\
    sub(IAMAX, TMP0, uc)                        /* IAMAX = ltc-ticks until IAMAX */\
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
    ldl_il(TMP0, INJHPFI_LTCCTR_FREERUNNING)      /* TMP0 = value for LTC.CTR */\
    st_f(TMP0, LTCCTR_p, 16)

/**************************************************************************************************/

/* INJHPFI_GPTA_LTC_DISABLE
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

#define INJHPFI_GPTA_LTC_DISABLE(CTR_p, TMP0)\
     ldl_il(TMP0, INJHPFI_LTCCTR_DISABLE)\
     st_f(TMP0, CTR_p, 16)                         /* disable LTC by writing CTR */\
     /* clear bit in srs request */\
     ld_pi(TMP0, INJHPFI_CHLCTDTA_LTCSRS_MASK)                 /* TMP0 := mask for srsc */\
     ld_pi(CTR_p, INJHPFI_CHLCTDTA_LTCSRSC)                    /* CTR_p := address of SRSC */\
     st_f(TMP0, CTR_p, 32)

/**************************************************************************************************/

/* INJHPFI_CALCTIANGLE_PCP
***************************************************************************************************
* Calculate expected Ti angle of a pulse of given time.
*
* Ti angle is determined on assumption of constant angular speed.
* Ti angle  =  IncrAngle/factor * LeadTime.
* factor = time per angular sample increment [PCP_EpmHCrS_tiIncPer or PCP_EpmHCrS_tiIncPerAvrg
* depending on EPMHCRS_SWTTIINCPERAVRG setting].
* [Result is automatically limited to span 24bits in GT1 units, because the relevant XR
* is 24 bits wide.]
*
* Numerical ranges
* Assumption: engine speed >= 10rpm, GT0 clock = 2.5MHz <==> 400ns
*             <==> EpmHCrS_tiIncPer = 100ms <==> 250000 = 0x3d090 GT0 ticks.
*   EpmHCrS_tiIncPer <= 0xffffffff [no arithmetic restrictions]
*   INJHPFI_TOOTHTICKS = 273 = 0x0111 [9 bit]
*   Ti <= 0x007fffff [23bit - 32bit result on multiplication with INJHPFI_TOOTHTICKS],
*             maximum possible length = 720*100ms = 180000000 = 0x0aba9500 GT0 ticks.
*
*   Inputs: Register mapped
*           INJHPFI_TI - Ti [GT0 ticks], <= 0x007fffff [23bit - see above]
*           TMP1, TMP2_RET
*           r0 - needed for multiplication [special register for mult.]
*
*           RAM, Constants
*           PCP_EpmHCrS_tiIncPer  - PRAM global, Increment period [GT0 ticks] <= 0xffffffff
*                                   It is assumed that EpmHCrS_tiIncPer is always != 0, when
*                                   INJHPFI_CALCTIANGLE_PCP is called, so no "divide by zero"
*                                   check is necessary. This is assured by the fact that INJHPFI
*                                   FSM is only running, when engine speed is active.
*           PCP_EpmHCrS_tiIncPerAvrg
*                                - PRAM global, Averaged increment period [GT0 ticks] <= 0xffffffff
*           INJHPFI_TOOTHTICKS         - increment angle in GT1 units
*
*           Labels
*           _InjHPfi_CalcInjAngle_PCP_ENTRY - name of entry label
*           _INJHPFI_CALCTIANGLE_PCP_LOC1 - name of local label
*
*   Registers changed:
*           r0, TMP1, TMP2_RET,  INJHPFI_TI, r7[cond_flags]
*
*   Return:
*           TMP2_RET - Ti angle in units of GT1 angle ticks.
*
***************************************************************************************************
*/
/* Macros to load a constant into a register. Code depends on length of constant to be loaded.
   Unfortunately, these macros cannot be defined universally, because preprocessing conditions
   need to be evaluated. */

/* REG[31..16] = INJHPFI_TOOTHTICKS; INJHPFI_TOOTHTICKS > 16bit */
#if (INJHPFI_TOOTHTICKS & 0xffff0000)
#define INJHPFI_LOADTOOTHTICKS(REG)\
     ldl_iu(REG, INJHPFI_TOOTHTICKS)             /* ldl.iu needs 2*16bit code space */
#else
#define INJHPFI_LOADTOOTHTICKS(REG)\
     ld_i(REG, 0)                                /* this needs 16bit code space only */
#endif

/* r0 = REG1 * REG2 */
#if (INJHPFI_TOOTHTICKS & 0xff000000)
#error "INJHPFI_TOOTHTICKS" must be <= 0x00ffffffu
#elif (INJHPFI_TOOTHTICKS & 0xffff0000)               /* 24bit INJHPFI_TOOTHTICKS */
#define MUL_INJHPFI(REG1, REG2)                     /* mul_24_32 - 3 steps */\
     minit(REG1, REG2)                           /* init. mult.; set condition flags */\
     jc(INJHPFI_CALCTIANGLE_PCP_LOC1, z)         /* do not multiply, if one factor is zero */\
     rl(REG1, 8)\
     mstep32(REG1, REG2)\
     mstep32(REG1, REG2)\
     mstep32(REG1, REG2)                         /* r0 = REG1[24] * REG2[32] */\
LABEL (_INJHPFI_CALCTIANGLE_PCP_LOC1)
#elif (INJHPFI_TOOTHTICKS & 0x0000ff00)               /* 16bit INJHPFI_TOOTHTICKS */
#define MUL_INJHPFI(REG1, REG2)                     /* mul_16_32 - 2 steps */\
     mul16(REG1, REG2)                           /* r0 = REG1 * REG2 */
#else                                            /* 8bit INJHPFI_TOOTHTICKS */
#define MUL_INJHPFI(REG1, REG2)                     /* mul_8_32  - 1 step */\
     mul8(REG1, REG2)                            /* r0 = REG1 * REG2 */
#endif

#if (EPMHCRS_SWTTIINCPERAVRG == 0)               /* load EpmHCrS_tiIncPer */
#define INJHPFI_LOADTIINC(REG)\
     ldl_il(r7, PCP_EpmHCrS_tiIncPer_DPTR)       /* new DPTR into r7 */\
     ld_pi(REG, PCP_EpmHCrS_tiIncPer_FAR)        /* REG = EpmHCrS_tiIncPer */
#elif (EPMHCRS_SWTTIINCPERAVRG == 1)             /* load EpmHCrS_tiIncPerAvrg */
#define INJHPFI_LOADTIINC(REG)\
     ldl_il(r7, PCP_EpmHCrS_tiIncPerAvrg_DPTR)   /* new DPTR into r7 */\
     ld_pi(REG, PCP_EpmHCrS_tiIncPerAvrg_FAR)    /* REG = EpmHCrS_tiIncPerAvrg */
#else
#error "EPMHCRS_SWTTIINCPERAVRG" not defined [epm_auto_conf.h not included?]
#endif

/* Interface Macro */
#define INJHPFI_CALCTIANGLE_PCP(INJHPFI_TI, TMP1, TMP2_RET, _InjHPfi_CalcInjAngle_PCP_ENTRY,\
                                _INJHPFI_CALCTIANGLE_PCP_LOC1)\
LABEL (_InjHPfi_CalcInjAngle_PCP_ENTRY)\
     mov(TMP2_RET, r7, uc)                           /* save r7 */\
     /* load EpmHCrS_tiIncPer[Avrg] */\
     INJHPFI_LOADTIINC(TMP1)                        /* TMP1 = EpmHCrS_tiIncPer[Avrg] */\
     mov(r7, TMP2_RET, uc)                           /* restore r7 */\
     /* Ti angle = INJHPFI_TOOTHTICKS * LeadTime / EpmHCrS_tiIncPer */\
     INJHPFI_LOADTOOTHTICKS(TMP2_RET)           /* TMP2_RET[31..16] = INJHPFI_TOOTHTICKS */\
     clr(r7, PCP_R7_IEN_POS)                     /* disable IR */\
     /* mul/div sequence must not be interrupted by another routine that also uses mul/div instr.*/\
     /* Since it is not determined, which channel pgms use mul/div in which priority, */\
     /* IR has to be disabled. */\
     ldl_il(TMP2_RET, INJHPFI_TOOTHTICKS)                 /* TMP2_RET = INJHPFI_TOOTHTICKS */\
     /* disable IR becomes effective */\
     /* Ti = INJHPFI_TI <= 0x00ffffff */\
     MUL_INJHPFI(TMP2_RET, INJHPFI_TI)                      /* r0 = TMP2_RET * INJHPFI_TI */\
     mov(TMP2_RET, r0, uc)                           /* free r0 for following division */\
                                                 /* TMP2_RET = INJHPFI_TOOTHTICKS * LeadTime */\
     /* divide 32bit-INJHPFI_TOOTHTICKS*LeadTime by 32bit-EpmHCrS_tiIncPer */\
     div32_no_dbz_check(TMP2_RET, TMP1)      /* TMP2 =
                                                INJHPFI_TOOTHTICKS*LeadTime / EpmHCrS_tiIncPer
                                                = Ti angle */

/**************************************************************************************************/

#endif
