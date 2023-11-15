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
 * $Filename__:dfes_inl.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:21.03.2012$
 * $Class_____:SWHDR$
 * $Name______:dfes_inl$
 * $Variant___:2.17.0$
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
 * 2.17.0; 0     21.03.2012 MMO2FE
 *   Compiler Independence warnings removal.
 * 
 * 2.15.0; 0     21.12.2011 PKA2SI
 *   DCM DID support for environment data
 * 
 * 2.13.0; 0     26.08.2011 ROA2KOR
 *   Review changes and misra warning correction
 * 
 * 2.10.0; 0     14.12.2010 PKA2SI
 *   static disable by DFES_Cls=255
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfes_inl.h
 *      Version: \main\7
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _DFES_INL_H
#define _DFES_INL_H

#include "dfes_auto_pub.h"

 /*
 ***************************************************************************************************
 * Implementation
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * inline function to get debounce limit which causes a fcm entry for a given DFC
 *
 * \param      fault check number
 * \return     debounce limit from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
__PRAGMA_USE__RENESAS__INLINE(DFES_GetSdwDebLimit)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DFES_GetSdwDebLimit(uint numCheck) )
#else
static uint DFES_GetSdwDebLimit(uint numCheck)
#endif
{
#if DSMCONF_SUPGLBDBLV == 1
    /* select global parameter independent from fault check number */
    PARAM_UNUSED(numCheck);
    return (uint)(DFES_DbLv_C);
#else
    /* get debounce limit from fault check specific calibration parameter */
    const uint8 * DFES_adDbLv;

    DFES_adDbLv = &(DFES_DbLv.DFC_Unused_C);
    return (uint)DFES_adDbLv[numCheck];
#endif
}

/* here is another solution based on macros if inline is not possible
#if DSMCONF_SUPGLBDBLV == 1
#define DFES_GetSdwDebLimit(numCheck) (DFES_DbLv_C)
#else
#define DFES_GetSdwDebLimit(numCheck) ( ((const uint8 *)&DFES_DbLv.DFC_Unused_C)[(numCheck)] )
#endif
*/



/**
 ***************************************************************************************************
 * inline function to get the fault type for a given DFC
 *
 * \param      fault check number
 * \return     fault type
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
__PRAGMA_USE__RENESAS__INLINE(DFES_GetFaultTyp)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DFES_GetFaultTyp(uint numCheck) )
#else
static uint DFES_GetFaultTyp(uint numCheck)
#endif
{
#if DSMCONF_SUPGLBFAULTTYP == 1
    /* select global parameter independent from fault check number */
    PARAM_UNUSED(numCheck);
    return (uint)(DFES_FaultTyp_C);
#else
    /* get fault type from fault check specific calibration parameter */
    const uint8 * DFES_adFaultTyp;

    DFES_adFaultTyp = &(DFES_FaultTyp.DFC_Unused_C);
    return (uint)DFES_adFaultTyp[numCheck];
#endif
}

/**
 ***************************************************************************************************
 * inline function to get the referenced environment dataset for a given DFC
 *
 * \param      fault check number
 * \return     referenced environment dataset
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */

#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
__PRAGMA_USE__RENESAS__INLINE(DFES_GetEnvRef)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint16 DFES_GetEnvRef(uint numCheck) )
#else
static uint16 DFES_GetEnvRef(uint numCheck)
#endif
{
#if DSMCONF_SUPGLBENVREF == 1
    /* select global parameter independent from fault check number */
    PARAM_UNUSED(numCheck);
    return (DFES_EnvRef_C);
#else
    /* get fault type from fault check specific calibration parameter */
#if (DSM_SUP_16BIT_ENVREF == 1)
    /* 2byte calibration parameter */
    const uint16 * DFES_adEnvRef;

    DFES_adEnvRef = &(DFES_EnvRef.DFC_Unused_C);
#else
    /* 1byte calibration parameter */
    const uint8 * DFES_adEnvRef;

    DFES_adEnvRef = &(DFES_EnvRef.DFC_Unused_C);
#endif

    return ((uint16)DFES_adEnvRef[numCheck]);
#endif
}


/**
 ***************************************************************************************************
 * inline function to get the assigned fault class for a given DFC
 * special value 255 which means static disable is mapped to class value 0
 * in order to avoid access to array element 255!
 *
 * \param      fault check number
 * \return     assigned fault class
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
__PRAGMA_USE__RENESAS__INLINE(DFES_GetFltCls)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DFES_GetFltCls(uint numCheck) )
#else
static uint DFES_GetFltCls(uint numCheck)
#endif
{
#if DSMCONF_SUPGLBFLTCLS == 1

    /* select global parameter independent from fault check number */
    PARAM_UNUSED(numCheck);

    #if (DSMCONF_SUPGLBDISBLMSK == 1)
        return ( (DFES_Cls_C >= (uint8)DSMCONF_NUM_CLASSES) ? ((uint)0) : ((uint)DFES_Cls_C) );
     #else
        return (uint)(DFES_Cls_C);
    #endif

#else

    /* get fault class from fault check specific calibration parameter */
    const uint8 * DFES_adFltCls;

    DFES_adFltCls = &(DFES_Cls.DFC_Unused_C);

    #if (DSMCONF_SUPGLBDISBLMSK == 1)
        return ( (DFES_adFltCls[numCheck] >= (uint8)DSMCONF_NUM_CLASSES) ? ((uint)0) : ((uint)DFES_adFltCls[numCheck]) );
    #else
        return (uint)DFES_adFltCls[numCheck];
    #endif

#endif
}


/**
 ***************************************************************************************************
 * inline function to check whether the assigned fault class indicates static disable of DFC
 *
 * \param      fault check number
 * \return     assigned fault class
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */

#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
__PRAGMA_USE__RENESAS__INLINE(DFES_GetFltClsStatDisbl)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DFES_GetFltClsStatDisbl(uint numCheck) )
#else
static uint DFES_GetFltClsStatDisbl(uint numCheck)
#endif
{
#if DSMCONF_SUPGLBFLTCLS == 1
    /* select global parameter independent from fault check number */
    PARAM_UNUSED(numCheck);
    return (uint)(DFES_Cls_C == (uint8)255);
#else
    /* get fault class from fault check specific calibration parameter */
    const uint8 * DFES_adFltCls;

    DFES_adFltCls = &(DFES_Cls.DFC_Unused_C);
    return (uint)(DFES_adFltCls[numCheck] == (uint8)255);
#endif
}


/**
 ***************************************************************************************************
 * inline function get representant for common MIL debouncing for a given DFC
 *
 * \param      fault check number
 * \return     assigned fault class
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#if DFES_COMMILDEB_SY == 1

#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
__PRAGMA_USE__RENESAS__INLINE(DFES_GetGrpRpr)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DFES_GetGrpRpr(uint numCheck) )
#else
static uint DFES_GetGrpRpr(uint numCheck)
#endif
{
    /* get representant from fault check specific calibration parameter */
    const uint16 * DFES_adGrpRpr;

    DFES_adGrpRpr = &(DFES_GrpRpr.DFC_Unused_C);
    return (uint)DFES_adGrpRpr[numCheck];
}
#endif


/**
 ***************************************************************************************************
 * inline function to get address of environment datasets (signal calibration)
 *
 * \param
 * \return     pointer to signal calibration of all environment datasets
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#if (DFES_CNF_NUM_ENV_DID == 0) /* Signal calibration used */

#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
__PRAGMA_USE__RENESAS__INLINE(DFES_GetAdEnv)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( const uint16 *DFES_GetAdEnv(void) )
#else
static const uint16 *DFES_GetAdEnv(void)
#endif
{
    /* get pointer to signal calibration of all environment datasets */
    const uint16 * DFES_adTmp;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DFES_adTmp = &(DFES_Env.xSet1_CA[0]);
    return (DFES_adTmp);
}

#else /* #if (DFES_CNF_NUM_ENV_DID == 0) => DID calibration used */

#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
__PRAGMA_USE__RENESAS__INLINE(DFES_GetAdEnvDid)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( const uint16 *DFES_GetAdEnvDid(void) )
#else
static const uint16 *DFES_GetAdEnvDid(void)
#endif
{
    /* get pointer to signal calibration of all environment datasets */
    const uint16 * DFES_adTmp;

    DFES_adTmp = &(DFES_EnvDid.xSet1_CA[0]);
    return (DFES_adTmp);
}

#endif /* #if (DFES_CNF_NUM_ENV_DID == 0) */


/**************************************************************************************************/
/************ Access macros for calibration parameters ********************************************/
/**************************************************************************************************/

/**
 list of signals for freeze frame
 */
#define DFES_adAsgnFrzFrSig                     (DFES_xAsgnFrzFrSig_CA)
#define DFES_adAsgnFrzFrDid                     (DFES_xAsgnFrzFrDid_CA)
/**
 list of signals for extended freeze frame
 */
#define DFES_adAsgnExtdFrzFrSig                 (DFES_xAsgnExtdFrzFrSig_CA)
#define DFES_adAsgnExtdFrzFrDid                 (DFES_xAsgnExtdFrzFrDid_CA)


/**
 Priority and implicit visibility for different tester modes
 */
#define DFES_GetPrio(numClass)                  (DFES_xClsPrio_CA[(numClass)])

/**
 MIL relevance
 */
#define DFES_GetMIL(numClass)                   (DFES_xClsFltMIL_CA[(numClass)])

/**
 Service vehicle soon lamp relevance
 */
#define DFES_GetSVS(numClass)                   (DFES_xClsFltSVS_CA[(numClass)])
/**
 Second service vehicle soon lamp2 relevance (second lamp support not provided up to now, use
 copy of paramter for first lamp
 */
#define DFES_GetSVS2(numClass)                  (DFES_xClsFltSVS_CA[(numClass)])

/**
 trigger for flc OBD
 */
#define DFES_GetFLCTrigger(numClass)            (DFES_xClsFaultTrg_CA[(numClass)])
/**
 trigger for hlc OBD
 */
#define DFES_GetHLCTrigger(numClass)            (DFES_xClsHealTrg_CA[(numClass)])
/**
 trigger for flc Manufacturer specific
 */
#define DFES_GetManuFLCTrigger(numClass)        (DFES_xClsSVSFaultTrg_CA[(numClass)])
/**
 trigger for hlc Manufacturer specific
 */
#define DFES_GetManuHLCTrigger(numClass)        (DFES_xClsSVSHealTrg_CA[(numClass)])

/**
 trigger for Del OBD
 */
#define DFES_GetDLCOBDTrigger(numClass)         (DFES_xClsDltTrg_CA[(numClass)])

/**
 trigger states for flc OBD
 */
#define DFES_stGetFLCTrigger(numClass)          (DSM_GetTrgInt(DFES_GetFLCTrigger(numClass)))
/**
 trigger states for hlc OBD
 */
#define DFES_stGetHLCTrigger(numClass)          (DSM_GetTrgInt(DFES_GetHLCTrigger(numClass)))
/**
 trigger states for flc Manufacturer specific
 */
#define DFES_stGetManuFLCTrigger(numClass)      (DSM_GetTrgInt(DFES_GetManuFLCTrigger(numClass)))
/**
 trigger states for hlc Manufacturer specific
 */
#define DFES_stGetManuHLCTrigger(numClass)      (DSM_GetTrgInt(DFES_GetManuHLCTrigger(numClass)))


/**
 initialization values for flc OBD
 */
#define DFES_GetDefectDebCycles(numClass)       (DFES_numClsFaultCycl_CA[(numClass)])
/**
 initialization values for hlc OBD
 */
#define DFES_GetHealDebCycles(numClass)         (DFES_numClsHealCycl_CA[(numClass)])
/**
 initialization values for flc Manufacturer specific
 */
#define DFES_GetManuDefectDebCycles(numClass)   (DFES_numClsSVSFaultCycl_CA[(numClass)])
/**
 initialization values for hlc Manufacturer specific
 */
#define DFES_GetManuHealDebCycles(numClass)     (DFES_numClsSVSHealCycl_CA[(numClass)])


/**
 trigger status for dlc in service state
 */
#define DFES_stGetDLCManuTrigger(numClass)      (DSM_GetTrgInt(DFES_xClsSvcDltTrg_CA[(numClass)]))
/**
 trigger status for dlc in pending state
 */
#define DFES_stGetDLCPendTrigger(numClass)      (DSM_GetTrgInt(DFES_xClsPndDltTrg_CA[(numClass)]))
/**
 trigger status for dlc in validated states
 */
#define DFES_stGetDLCOBDTrigger(numClass)       (DSM_GetTrgInt(DFES_xClsDltTrg_CA[(numClass)]))


/**
 initialization values for dlc for state service
 */
#define DFES_GetDelCyclesCust(numClass)         (DFES_numClsSvcDlt_CA[(numClass)])
/**
 initialization values for dlc for state pending
 */
#define DFES_GetDelCyclesPend(numClass)         (DFES_numClsPndDlt_CA[(numClass)])
/**
 initialization values for dlc for state validated
 */
#define DFES_GetDelCyclesValid(numClass)        (DFES_numClsDlt_CA[(numClass)])

/**
 initialization values for dlc for state shadow cleared
 */
#define DFES_GetDelCyclesSdw(numClass)          (DFES_numClsSvcDlt_CA[(numClass)])


/**
 state dependent (dynamic) entry priority
 */
#define DFES_GetStatePrio(stEntry)              (DFES_xStPrio[(stEntry)])


/**
 threshold for engine speed regarding similar condition
 */
#define DFES_GetThresSimCondN                   (DFES_ThresSimCond.n_C)
/**
 threshold for calculated load regarding similar condition
 */
#define DFES_GetThresSimCondR                   (DFES_ThresSimCond.r_C)
/**
 threshold for engine coolant temperatur regarding similar condition
 */
#define DFES_GetThresSimCondT                   (DFES_ThresSimCond.t_C)

#endif
