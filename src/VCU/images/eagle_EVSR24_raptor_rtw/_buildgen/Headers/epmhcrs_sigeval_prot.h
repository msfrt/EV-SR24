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
 * $Filename__:epmhcrs_sigeval_prot.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:APJ1KOR$
 * $Date______:29.05.2014$
 * $Class_____:SWHDR$
 * $Name______:epmhcrs_sigeval_prot$
 * $Variant___:1.42.4$
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
 * 1.42.4; 0     29.05.2014 APJ1KOR
 *   RQONE00369791_BC_EPM_FC_EPMHCRS_SIGEVAL_AEV25207
 * 
 * 1.42.3; 0     27.05.2014 APJ1KOR
 *   -
 * 
 * 1.41.0; 0     13.08.2013 APJ1KOR
 *   RQONE00163369_Making angle-clock plausibilisation more robust against 
 *   latency problems
 * 
 * 1.40.0; 0     29.07.2013 WHT2SI
 *   -
 * 
 * 1.39.1; 0     15.03.2013 WHT2SI
 *   bugfix EpmHCrS_SigEval. Correction Bresenham macros for CRS backup mode, 
 *   cause gap not generated in Timermode
 * 
 * 1.39.0; 1     23.11.2012 NMN3KOR
 *   RQONE00077723:(CP179758) issue pulse width DGI sensor
 * 
 * 1.39.0; 0     15.11.2012 NMN3KOR
 *   RQONE00077723:(CP179758) issue pulse width DGI sensor
 * 
 * 1.38.0; 0     18.10.2012 RTI2FE
 *   Export of rotation direction information (EpmHCrS_stRotDir)
 * 
 * 1.36.1; 0     27.06.2012 RTI2FE
 *   Step of EpmHCrS_ctIncEngPos at transition from EpmSyn_stCrSPos = 
 *   EPMSYN_CAS_SYNC to EPMSYN_FULL_SYNC.
 * 
 * 1.36.0; 0     16.02.2012 GSU2KOR
 *   RQONE0011363: Microticks correction for Crankshaft wheel 63-2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCRS_SIGEVAL_PROT_H
#define _EPMHCRS_SIGEVAL_PROT_H


/*
 ***************************************************************************************************
 * Atomic generated includes not allowed but no other way is possible
 ***************************************************************************************************
 */
#include "epmhcrs_auto_prot.h"
#include "epmhcrs_sigeval_dat.h"
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 * Error indicator for crankshaft signal.
 * \arg Bit  0 - LONGPER          - EpmHCrS_tiIncPer > EpmCrS_tiMaxPer_C.
 * \arg Bit  1 - SHORTPER         - EpmHCrS_tiIncPer < EpmCrS_tiMinPer_C.
 * \arg Bit  2 - GLITCHFILT       - Glitch record from FPC.
 * \arg Bit  3 - GLITCHPLAUS      - edge outside of plausibility window.
 * \arg Bit  4 - TIMEOUT          - no edge after time tiIncPer * facIncPlausHi or facGapPlausHi.
 * \arg Bit  5 - GAPCRIT1         - second gap criterion fault after first gap criterion o.k.
 * \arg Bit  6 - GAPCRIT2         - second gap criterion fault.
 * \arg Bit  7 - NOGAP            - no gap found after numIncMax.
 * \arg Bit  8 - DYCGAPINC        - wrong duty cycle for gap increment
 * \arg Bit  9 - DYCINC           - wrong duty cycle for regular for increment
 * \arg Bit 10 - REVINC           - reverse increment detected
 * \arg Bit 11 - MINPF            - pulse less than forward pulse
 * \arg Bit 12 - MAXPF            - pulse greater than reverse pulse
 * \arg Bit 13 - NOPFPR           - no forward or reverse pulse, greater than forward less than reverse pulse
 * \arg Bit 14 - FIRSTEDGETIMEOUT - no edge after time tiIncPer * facGapPlausHi in state IGNTIME, IGNFRSTEDGE
 */
#define EPMHCRS_LONGPER_POS           0
#define EPMHCRS_SHORTPER_POS          1
#define EPMHCRS_GLITCHFILT_POS        2
#define EPMHCRS_GLITCHPLAUS_POS       3
#define EPMHCRS_TIMEOUT_POS           4
#define EPMHCRS_GAPCRIT1_POS          5
#define EPMHCRS_GAPCRIT2_POS          6
#define EPMHCRS_NOGAP_POS             7
#define EPMHCRS_DYCGAPINC_POS         8
#define EPMHCRS_DYCINC_POS            9
#define EPMHCRS_REVINC_POS            10
#define EPMHCRS_MINPF_POS             11
#define EPMHCRS_MAXPR_POS             12
#define EPMHCRS_NOPFPR_POS            13
#define EPMHCRS_FIRSTEDGETIMEOUT_POS  14



/** Initialisation value for EpmHCrS_ctIncEngPos (DGI). */
#define EPMHCRS_CTINCENGPOSINI  0xFFFF

/** Array of gap positions has no valid entry. */
#define EPMHCRS_NO_GAP_POS  0xFF

/**
 * Number of microticks per increment (one tooth).
 * e.g. for 60 increment crankshaft weel: 32768 / 2 * 60.
 * This mean: number of microtics divaded with number of increments per two rotation.
 */
#define EPMHCRS_NUM_MICROTICK   (EPM_PHIMAX / ( EPMHCRS_NUMINC * EPM_NUMCRSREVWCY))

/**
 * Number microticks generated should be 32768 for a working cycle. Because EPMHCRS_NUM_MICROTICK
 * is an integer there could be some microticks left which is calculated as below
 */
#define EPMHCRS_REST    (EPM_PHIMAX - (EPMHCRS_NUM_MICROTICK * EPMHCRS_NUMINC * EPM_NUMCRSREVWCY))

#define EPMHCRS_NUM_INC_ADD_ONE_MICROTIC    (((EPMHCRS_NUMINC * EPM_NUMCRSREVWCY) + (EPMHCRS_REST / 2)) / EPMHCRS_REST)

/**
 * Number of microticks for gap.
 */
#define EPMHCRS_REST_GAP    ((EPMHCRS_REST - ((EPMHCRS_NUMINC * EPM_NUMCRSREVWCY) / EPMHCRS_NUM_INC_ADD_ONE_MICROTIC)) / EPM_NUMCRSREVWCY)

#define EPMHCRS_NUM_MICROTICK_GAP   ((EPMHCRS_NUM_MICROTICK * EPMHCRS_NUMINCGAP) + EPMHCRS_REST_GAP)


/** PRAM or CPU Interface via Macro */
#if (EPMHWE_SWTCPU_SY == 0) // PCP
 #define EpmHCrS_ctGlitch       Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_ctGlitch
 #define EpmHCrS_tiPerTn        Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_tiPerTn
 #define EpmHCrS_tiPerTn_1      Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_tiPerTn_1
 #define EpmHCrS_tiPerTn_2      Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_tiPerTn_2
 #define EpmHCrS_LevCaS         Pcp_Pram_s.EpmHCrS_INC_PCP_EpmHCrS_LevCaS
#else // CPU
 #define EpmHCrS_ctGlitch       EpmHCrS_SigEvalCfg.ctGlitch
 #define EpmHCrS_tiPerTn        EpmHCrS_SigEvalCfg.tiPerTn
 #define EpmHCrS_tiPerTn_1      EpmHCrS_SigEvalCfg.tiPerTn_1
 #define EpmHCrS_tiPerTn_2      EpmHCrS_SigEvalCfg.tiPerTn_2
 #define EpmHCrS_LevCaS         EpmHCrS_SigEvalCfg.LevCaS
#endif

/**
 * Ini Value for number of crankshaft tooth for additional microtick.
 * From the Value EPMHCRS_NUM_INC_ADD_ONE_MICROTIC substract the number of gap increments and
 * check underflow.
 */
#if (EPMHCRS_NUM_INC_ADD_ONE_MICROTIC >= EPMHCRS_NUMINCGAP)
 #define EPMHCRS_CTINC_ADDONEMICROTICK_INI  (EPMHCRS_NUM_INC_ADD_ONE_MICROTIC - EPMHCRS_NUMINCGAP)
#else
 #define EPMHCRS_CTINC_ADDONEMICROTICK_INI  (2*EPMHCRS_NUM_INC_ADD_ONE_MICROTIC - EPMHCRS_NUMINCGAP)
#endif

/**
 * PCP_EpmHCrS_stCpuPcp
 * States CPU - PCP communication coded as bit position.
 * \arg Bit  0 - EPMHCRS_PCPCHNINI_POS      - TRUE:  Initialization phase
 * \arg                                       FALSE: Initialization phase done
 * \arg Bit  1 - EPMHCRS_STOPPCP_POS        - TRUE:  Stop PCP put signal buffer
 * \arg                                       FALSE: PCP fill the ctankshaft signal buffer continiuosly
 * \arg Bit  2 - EPMHCRS_TMRMODE_POS        - TRUE:  timer mode activated
 * \arg                                       FALSE: timer mode deactivated
 * \arg Bit  3 - EPMHCRS_TMRMODE_INI_POS    - TRUE:  timer mode initialization done
 * \arg                                       FALSE: timer mode not initializated
 * \arg Bit  4 - EPMHCRS_CODEDGAP_POS       - TRUE:  coded gap activated
 * \arg                                       FALSE: gap 12 degree deactivated
 * \arg Bit  5 - EPMHCRS_GAP12_POS          - TRUE:  gap 12 degree activated
 * \arg                                       FALSE: coded gap deactivated
 * \arg Bit  6 - EPMHCRS_IAS_POS            - TRUE:  Increment Angle Smooth activ
 * \arg                                       FALSE: Increment Angle Smooth inactiv
 * \arg Bit  7 - EPMHCRS_IAPENA_POS         - TRUE:  Increment Angle Prediction enabled
 * \arg                                       FALSE: Increment Angle Prediction disabled
 * \arg Bit  8 - IAPDVTCORENA_POS           - TRUE:  IAP Deviation Correction enabled
 * \arg                                       FALSE: IAP Deviation Correction disabled
 * \arg Bit  9 - EPMHCRS_DGI_POS            - TRUE:  DGI-Sensor activated, Crankshaft Sensor with direction detection
 * \arg                                       FALSE: DGI-Sensor deactivated
 * \arg Bit 10 - EPMHCRS_DISBLNEWSYNC_POS   - TRUE:  disable new synchronization for crankshaft driver
 * \arg                                       FALSE: crankshaft synchronization allowed
 * \arg Bit 11 - EPMHCRS_KEEPDGISYNC_POS    - TRUE:  transition IGNEDGE -> KEEPDGISYNC enabled (IGNEDGE -> DGIPOS -> WAITGAP)
 * \arg                                       FALSE: transition IGNEDGE -> KEEPDGISYNC disabled (IGNEDGE -> WAITGAP)
 */

#define EPMHCRS_PCPCHNINI_POS               0
#define EPMHCRS_STOPPCPPUTBUF_POS           1
#define EPMHCRS_TMRMODE_POS                 2
#define EPMHCRS_TMRMODE_INI_POS             3
#define EPMHCRS_CODEDGAP_POS                4
#define EPMHCRS_GAP12_POS                   5
#define EPMHCRS_IAS_POS                     6
#define EPMHCRS_IAPENA_POS                  7
#define EPMHCRS_IAPDVTCORENA_POS            8
#define EPMHCRS_DGI_POS                     9
#define EPMHCRS_DISBLNEWSYNC_POS           10
#define EPMHCRS_KEEPDGISYNC_POS            11

/**
 * PCP_EpmHCrS_st
 * States coded as bit position.
 * \arg Bit  0 - EPMHCRS_STTIMEOUT_POS      - TRUE:  timeout occured (DGI)
 * \arg                                       FALSE: timeout not occured
 * \arg Bit  1 - EPMHCRS_PLL_RUNNING_POS    - TRUE:  PLL is running
 * \arg                                       FALSE: PLL deactivated, no angle ticks on GT1
 * \arg Bit  2 - EPMHCRS_PLAUS_LOW_POS      - TRUE:  lower increment plausibility activ
 * \arg                                       FALSE: lower increment plausibility inactiv
 * \arg Bit  3 - EPMHCRS_STGAPCRIT1_POS     - TRUE:  gap criterion 1 occured
 * \arg                                       FALSE: gap criterion 1 not occured
 * \arg Bit  4 - EPMHCRS_PLAUS_LOW_DSBC_POS - TRUE:  for DGI: disturbance due the plausibility window
 * \arg                                       FALSE: functionality not active
 * \arg Bit  5 - EPMHCRS_RESET_DGI_POS      - TRUE:  reset from DGI occured
 * \arg                                       FALSE: functionality not active
 * \arg Bit  6 - EPMHCRS_INC_RUN_POS        - TRUE:  increment interrupt activated
 * \arg                                       FALSE: functionality not active
 * \arg Bit  7 - EPMHCRS_PLSDGI_RUN_POS     - TRUE:  DGI puls interrupt on passive edge activated
 * \arg                                       FALSE: functionality not active
 * \arg Bit  8 - EPMHCRS_RESYNCUPPERLVL_POS - TRUE:  resync upper level required
 * \arg                                       FALSE: -
 * \arg Bit  9 - EPMHCRS_ERRSHORTPER_POS    - TRUE:  SHORTPER was detected and set in EpmHCrS_stSigErr
 * \arg                                       FALSE: -
 * \arg Bit  10 - EPMHCRS_DISCONNECT_PLL_POS- TRUE:  Request to disconnect the PLL from DCM
 * \arg                                       FALSE: -
 */
#define EPMHCRS_STTIMEOUT_POS                    0
#define EPMHCRS_PLL_RUNNING_POS                  1
#define EPMHCRS_PLAUS_LOW_POS                    2
#define EPMHCRS_STGAPCRIT1_POS                   3
#define EPMHCRS_PLAUS_LOW_DSBC_POS               4
#define EPMHCRS_RESET_DGI_POS                    5
#define EPMHCRS_INC_RUN_POS                      6
#define EPMHCRS_PLSDGI_RUN_POS                   7
#define EPMHCRS_RESYNCUPPERLVL_POS               8
#define EPMHCRS_ERRSHORTPER_POS                  9
#define EPMHCRS_DISCONNECT_PLL_POS              10

/**
 * PRAM Interface via Macro for Epm internal access
 */
/** PRAM Interface via Macro */
#define EpmHCrS_tiMinPF             Pcp_Pram_s.EpmHCrS_DGI_PCP_EpmHCrS_tiMinPF
#define EpmHCrS_tiMaxPF             Pcp_Pram_s.EpmHCrS_DGI_PCP_EpmHCrS_tiMaxPF
#define EpmHCrS_tiMinPR             Pcp_Pram_s.EpmHCrS_DGI_PCP_EpmHCrS_tiMinPR
#define EpmHCrS_tiMaxPR             Pcp_Pram_s.EpmHCrS_DGI_PCP_EpmHCrS_tiMaxPR
#define EpmHCrS_numIncPhZeroNxt     Pcp_Pram_s.EpmHCrS_DGI_PCP_EpmHCrS_numIncPhZeroNxt
#define EpmHCrS_numIncPhZero        Pcp_Pram_s.EpmHCrS_DGI_PCP_EpmHCrS_numIncPhZero
#define EpmHCrS_numIncPhZeroLst     Pcp_Pram_s.EpmHCrS_DGI_PCP_EpmHCrS_numIncPhZeroLst



/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
typedef struct
{
   uint16   numInc;
   uint8    stCaSSig[NUMCASMAX];

} EpmHCrS_GapPos_t;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 *//* _EPMHCRS_SIGBUF_PROT_H */
 
#if ((CRSSENSTYP_SY == 1) && (EPM_MEASURE_SY >= 1))
 
/**
 * Crankshaft increment counter correlated with signal buffer write index.
 */
/* MISRA RULE 18.4 VIOLATION: union for better optimisation */
typedef union
{
    volatile uint32  idxWrCtIncDgi;        /**< Buffer write index and increment counter corelated. */
   struct
    {
        volatile uint16  ctIncDgi;         /**< Crankshaft increment counter corelated with idxWr. */
        volatile sint16  idxWrDgi;         /**< Buffer write index. */
    } s;

} EpmHCrS_IdxWrCtIncDgi_t;

/**
 * Crankshaft increment buffer.
 * This buffer contain time stamp of actives crankshaft edges.
 */
typedef struct
{
    EpmHCrS_IdxWrCtIncDgi_t    u;          /**< Union: Crankshaft increment counter corelated with idxWr. */
    volatile sint16  ctIncLvlDgi;         	   /**< Increment level counter.
                                             This counter show the fill level of increment buffer.
                                             The maximal value is the size of ti array. */
   volatile uint32  tiPw[EPMHCRS_NUMINC]; 			/**< Time stamp. */
} EpmHCrS_SigBufDgi_t;

#endif


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

#if ((CRSSENSTYP_SY == 1) && (EPM_MEASURE_SY >= 1))

extern EpmHCrS_SigBufDgi_t EpmHCrS_SigBufDgi;
	
#endif

extern volatile EpmHCrS_GapPos_t EpmHCrS_GapPos[];
extern volatile uint16  EpmHCrS_ctGapPos;
extern volatile uint16  EpmHCrS_stSigErr;
extern volatile uint16  EpmHCrS_ctIncEngPos;
extern volatile uint16  EpmHCrS_ctIncEngPosStrt;
extern volatile sint32  EpmHCrS_tiIncTransRaw;
extern volatile uint32  EpmHCrS_AgIncTrans;
#if (CRSSENSTYP_SY == 1)
extern volatile uint8   EpmHCrS_stRotDir;
#endif

/*
 ***************************************************************************************************
 * extern-declarations for owned messages
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
//services from epmhcrs_sigeval
extern void EpmHCrS_StrtSigMode (void);
extern void EpmHCrS_StopSigMode (void);
extern void EpmHCrS_Init (void);
extern void EpmHCrS_StrtTmrMode (void);
extern void EpmHCrS_SetTiPerTmrMode (sint32 tiPer);
extern void EpmHCrS_StopTmrMode (void);
extern void EpmHCrS_GetIncTrans(sint32 *tiCrSEdge);
extern void EpmHCrS_IncDvtMeas( void );
extern void EpmHCrS_SetPhCtIncEngPos( sint16 numOffs);

/* _EPMHCRS_SIGEVAL_PROT_H */
#endif
