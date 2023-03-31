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
 * $Filename$
 *
 * $Author$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User$
 * $Date______:19.06.2013$
 * $Class_____:SWHDR$
 * $Name$
 * $Variant___:2.65.0$
 * $Revision$
 * $Typ$
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
 * 2.65.0; 0     19.06.2013 KKA4KOR
 *   Declaration of new interface
 * 
 * 2.53.0; 0     21.06.2012 PKA2SI
 *   CARB OBD LEV3 update
 * 
 * 2.48.0; 0     21.03.2012 MMO2FE
 *   Compiler Independence Warnings removal
 * 
 * 2.40.0; 0     15.09.2011 ZUZ2SI
 *   (378248) CRQ: Extension of DisblMsk to 32Bit
 * 
 * 2.27.0; 0     01.02.2011 ZUZ2SI
 *   RCMS00779107: extended operation mode condition (32 bits) for FId 
 *   permission
 * 
 * 2.23.0; 0     30.11.2010 HAHILLNE
 *   Merge to support 2 different 2ECU features
 * 
 * 2.15.0; 0     23.03.2010 ZUZ2SI
 *   new interface function in dsm_confprot.h
 * 
 * 2.14.0; 0     18.03.2010 ABM1KOR
 *   (303391): Header file correction , and adaptation platform DSMbas
 *   to DSMAPL 10.4.0 (BMW specific DSMAPL).
 * 
 * 2.10.0; 0     17.08.2009 ABM1KOR
 *   Changes to update PTO feature.
 * 
 * 2.7.0; 0     28.07.2009 ABM1KOR
 *   (RCMS00303764):Changes to implement EvapDen feature.
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DSM_CONFPROT_H                                 /* protect multiple includes              */
#define _DSM_CONFPROT_H



/**
 ***************************************************************************************************
 * moduledescription
 *                     DSM configuration header for dsm library functions
 *
 *                     Must be configured project specific for library creation.
 *                     Must be delivered together with library for consistency check during
 *                     ordinary make.
 *
 * scope               API
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#ifdef RENESAS_SHC
/* DSM specific Service calls mapped to Renesas Services */
/* Limit Services */
/* Arguments a, b, c and return type is uint32 */
#define DSM_LimitU32(a,b,c)   SrvB_LimitU32(a,b,c)
/* Arguments a, b, c and return type is sint32 */
#define DSM_LimitS32(a,b,c)   SrvB_LimitS32(a,b,c)

/* Arguments a, b and return type is uint */
#define DSM_MinU(a,b)   SrvB_Min_U32(a,b)
/* Arguments a, b and return type is sint */
#define DSM_MinS(a,b)   SrvB_Min_S32(a,b)

#else
/* DSM specific Service calls mapped to MEDC17 SrvB-Calls */
/* in case of MEDC17 Compiler */

/* Minimum Services */
/* Arguments a, b and return type is uint */
#define DSM_MinU(a,b)   SrvB_Min_U32((a),(b))
/* Arguments a, b and return type is sint */
#define DSM_MinS(a,b)   SrvB_Min_S32((a),(b))

/* Limit Services */
/* Arguments a, b, c and return type is uint32 */
#define DSM_LimitU32(a,b,c)   SrvB_RangeLimiter_U32(a,b,c)
/* Arguments a, b, c and return type is sint32 */
#define DSM_LimitS32(a,b,c)   SrvB_RangeLimiter_S32(a,b,c)


/* End of Mapping of DSM Services */
#endif




/* extended filtering of fault entries [i.e. TCSORT - hide general misfire entry ...]             */
/* bit mask to use by %TCSORT in DFES_stFltr */
#define DFES_TCSORT_MSK           (0x01)


/* all merged filter mask - to detect first "complete" filtering                                  */
#define DFES_EXTD_FLTR_MSK        (DFES_TCSORT_MSK)


/* bit mask used by DSM_CONF in DSM_GetRdy2Drive() */
#define DSM_Rdy2Drive_MSK           (0x100)

/*
 ***************************************************************************************************
 * translations from function calls to makros used in the code (remove with next code change!)
 ***************************************************************************************************
 */


/* possible op modes */
#define DSCHED_stPrmsOpModeIn     (DSCHED_GetCoPrmsOpMode())

/* the operation mode which is used for scheduling during a transition of the operation mode
   is active */
#define DSCHED_OP_MODE_TRANSITION (DSCHED_GetCoTransitionOpMode())

/* instabele status of the operation mode */
#define DSCHED_stSelOpMode        (DSCHED_GetInstableStatus())


/*
 ***************************************************************************************************
 * Prototyp declarations
 ***************************************************************************************************
 */

/* DSM */
__PRAGMA_USE__CODE__dsm__LowSpeed__START
sint16 DSM_GetTEnv(void);
sint16 DSM_GetPEnv(void);
sint16 DSM_GetVVeh(void);
sint16 DSM_GetRAPP(void);
sint16 DSM_GetNEng(void);
sint16 DSM_GetRLd(void);
uint   DSM_GetPrgEvt(void);
uint32 DSM_GetPrgVersId(void);
uint8  DSM_PDTCDisbl(void);
sint16 DSM_GetTEngStrt(void);
bool DSM_GetStEnvTVld(void);
bool DSM_GetStTEngStrtVld(void);
bool DSM_GetPTOActv(void);
uint DSM_GetRdy2Drive(void);
bool DSM_GetFuEngOp(void);
bool DSM_GetTiPrpSysOff(sint32 *tiPrpSysOff);
uint DSM_GetEngStrtMILLmp(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END


/* DFC */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DFC_GetEnModes(void);
uint32 DFC_GetEnModes32(void);
uint DFC_GetECUId(void);
void dsm_conf_ini (void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

/* DSMAUX */
__PRAGMA_USE__CODE__dsm__LowSpeed__START
sint16 DSMAUX_GetTClnt(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

/* DFES */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DFES_GetStWiggle(void);
uint DFES_numPrio(uint numCheck);
uint DFES_GetIdxFromDTC_Appl(uint      valDTC
                           , uint      idxDFCStart
                           , uint      idxTable
                           , uint  *   idxVisible
                           , uint  *   idxDFC);
uint DFES_GetDTCEntry_3B(uint idxVisible, uint idxTable);
bool DFES_GetPDTCokCycle(void);

__PRAGMA_USE__CODE__dsm__NormalSpeed__END

/* DSMDur */
__PRAGMA_USE__CODE__dsm__LowSpeed__START
sint32 DSMDur_GetDist(void);
sint32 DSMDur_GetTi(void);
uint DSMDur_GetExtRequ(void);
uint DSMDur_GetExtRstRequ(void);
uint DSMDur_GetExtMILOnRequ(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

/* Scheduler interfaces */
__PRAGMA_USE__CODE__dsm__LowSpeed__START
uint DSCHED_GetDrvMode(void);
uint DSCHED_GetCoOpMode(void);
uint32 DSCHED_GetCoOpMode32(void);
uint DSCHED_GetCoPrmsOpMode(void);
uint DSCHED_GetCoTransitionOpMode(void);
uint DSCHED_GetInstableStatus(void);
uint DSM_GetStStrtEnd(void);
void DSCHED_SetOpModeDem(uint16 stModeDemand);
uint DSCHED_GetStFuncTst(void);
void DSCHED_SetStFuncTst(uint8 stFunctTst);
uint DSCHED_GetStFuncTstSlv(void);
void DSCHED_SetStFuncTstSlv(uint8 stFunctTst);
__PRAGMA_USE__CODE__dsm__LowSpeed__END


/* _DSM_CONFPROT_H                                                                            */
#endif
