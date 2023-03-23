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
 * $Filename__:epmhcrs_sigeval_pub.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PIE2SI$
 * $Date______:09.06.2010$
 * $Class_____:SWHDR$
 * $Name______:epmhcrs_sigeval_pub$
 * $Variant___:1.25.0$
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
 * 1.25.0; 0     09.06.2010 PIE2SI
 *   KEEPDGISYNC: 
 *   Test SW, not released
 * 
 * 1.23.0_1; 0     17.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCRS_SIGEVAL_PUB_H                                  /* protect multiple includes  */
#define _EPMHCRS_SIGEVAL_PUB_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
// only for friend module PWMOUT to include EPMHWE_SWTCPU_SY
#include "epmhcrs_sigeval_dat.h"

#if (EPMHWE_SWTCPU_SY == 0) // PCP
 #include "pcp.h"
#endif


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
 /** PRAM Interface via Macro */
#if (EPMHWE_SWTCPU_SY == 0) // PCP
 #define EpmHCrS_tiIncPer            Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_tiIncPer
 #define EpmHCrS_tiIncTrans          Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_tiIncTrans
 #define EpmHCrS_ctInc               *EpmHCrS_ctInc_cpu16
 #define EpmHCrS_numTiIncPerAvrg     Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_numTiIncPerAvrg
 #define EpmHCrS_tiIncPerAvrg        Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_tiIncPerAvrg
#else // CPU
 #define EpmHCrS_tiIncPer            EpmHCrS_SigEvalCfg.tiIncPer
 #define EpmHCrS_tiIncTrans          EpmHCrS_SigEvalCfg.tiIncTrans
 #define EpmHCrS_ctInc               EpmHCrS_SigEvalCfg.ctInc
 #define EpmHCrS_numTiIncPerAvrg     EpmHCrS_SigEvalCfg.numTiIncPerAvrg
 #define EpmHCrS_tiIncPerAvrg        EpmHCrS_SigEvalCfg.tiIncPerAvrg
#endif


/** Get Increment Transition time in micro second resolution */
#define EPMHCRS_GETINCTRANS_US      GPTA_GT0_TICKS_TO_US(EpmHCrS_tiIncTrans)

/** Return Value of buffer access functions for an error */
#define EPMHCRS_ERROR   1


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */
 /** EpmHCrS_stSigMode_t defines the possible states of the CrS-statemachine */
enum EpmHCrS_stSigMode_t
{
    RESET,          // 0
    HALT,           // 1
    WAITSIG,        // 2
    IGNTIME,        // 3
    IGNFRSTEDGE,    // 4
    IGNEDGE,        // 5
    WAITGAP,        // 6
    GAPFOUND,       // 7
    TIMERMODE,      // 8
    DISBLNEWSYNC,   // 9
    DLY,            // 10
    KEEPDGISYNC     // 11
};


#if (EPMHWE_SWTCPU_SY == 1) // CPU
/**
 * Configuration struct of camshaft signal evaluation.
 */
typedef struct
{
    volatile       uint32    st;
    volatile       uint32    stCpuPcp;
    volatile       uint32    ctInc;
    volatile       uint32    facIncPlausLow;
    volatile       uint32    facIncPlausHigh;
    volatile       uint32    facGapPlausHigh;
    volatile       sint32    tiMinPer;
    volatile       sint32    tiMaxPer;
    volatile       sint32    tiIgnSig;
    volatile       uint32    numIgnInc;
    volatile       uint32    facGapCrit1;
    volatile       uint32    facGapCrit2;
    volatile       uint32    stPllCor;
    volatile       uint32    ctIgnEdge;
    volatile       uint32    ctIncAddOneMicroTick;
    volatile       uint32    ctGap2Gap;
    volatile       uint32    ctGapPos;
    volatile       sint32    tiIncTrans;
    volatile       sint32    tiIncPer;
    volatile       sint32    tiIncPer50ns;
    volatile       sint32    tiIncPer50nsNoCor;
    volatile       sint32    tiPerTn;
    volatile       sint32    tiPerTn_1;
    volatile       sint32    tiPerTn_2;
    volatile       sint32    tiPerTn_3;
    volatile       uint32    tiTo;
    volatile       sint32    tiToInterrim;
    volatile       sint32    tiIncPlausLow;
    volatile       uint32    ctGlitch;
    volatile       uint32    PLLMTI;
    volatile       uint32    PLLMTI_1;
    volatile       uint32    GTCXR;
    volatile       uint32    GTTIM1;
    volatile       sint32    phiIncTrans;
    volatile       uint32    LevCaS;
    #if (EPMHCRS_SWTTIINCPERAVRG == 1)   // Average calculation released
    volatile       uint32    numTiIncPerAvrg;
    volatile       sint32    tiIncPerAvrg;
    #endif

} EpmHCrS_SigEvalCfg_t;
#endif

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
/** EpmHCrS_stSigMode represents the state of the CrS-statemachine, the variable is written from the
    PCP-channel-programm if the state changes */
extern volatile enum EpmHCrS_stSigMode_t    EpmHCrS_stSigMode;

#if EPMHWE_SWTCPU_SY
/**
 * Configuration struct for crankshaft signal evaluation.
 */
extern EpmHCrS_SigEvalCfg_t    EpmHCrS_SigEvalCfg;
#endif

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
//services from epmhcrs_sigeval
extern void EpmHCrS_ResyncUpperLvl (void);

/* _EPMHCRS_SIGEVAL_PUB_H */
#endif
