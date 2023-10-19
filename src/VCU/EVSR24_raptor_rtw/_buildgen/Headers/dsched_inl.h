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
 * $Date______:29.03.2012$
 * $Class_____:SWHDR$
 * $Name$
 * $Variant___:1.6.0$
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
 * 1.6.0; 0     29.03.2012 GTN2SI
 *   Issue: RQONE00026843 - Reset of DSCHED-Lock Bit upon HD 4h DCY
 * 
 * 1.5.0; 0     19.03.2012 MMO2FE
 *   Compiler Independence warnings removal.
 * 
 * 1.4.0; 3     14.02.2011 ZUZ2SI
 *   change include in header files after swb in another PVER
 * 
 * 1.4.0; 2     09.02.2011 ZUZ2SI
 *   include in header file update
 * 
 * 1.4.0; 1     09.02.2011 ZUZ2SI
 *   header file update
 * 
 * 1.4.0; 0     01.02.2011 ZUZ2SI
 *   RCMS00779107: extended operation mode condition (32 bits) for FId 
 *   permission
 * 
 * 1.2.0; 0     05.08.2009 FTT2SI
 *   In case less than 2 scheduled FIds are used structure DSCHED_Excl is not 
 *   created.
 * 
 * 1.0.0_1; 0     11.12.2008 PKA2SI
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _DSCHED_INL_H
#define _DSCHED_INL_H


/*
 ***************************************************************************************************
 * include
 ***************************************************************************************************
 */

 /*
 ***************************************************************************************************
 * Implementation
 ***************************************************************************************************
 */

/**************************************************************************************************/
/************ Inline functions to access calibration parameters ***********************************/
/**************************************************************************************************/

/**
 ***************************************************************************************************
 * inline function to get base priority of given FId
 *
 * \param      FId number
 * \return     base priority from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetBsPrio)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetBsPrio(uint fid);
LOCAL_INLINE uint16 DSCHED_GetBsPrio(uint fid)
#else
static uint16 DSCHED_GetBsPrio(uint fid);
static uint16 DSCHED_GetBsPrio(uint fid)
#endif
{
    const uint16 * DSCHED_adBsPrio;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adBsPrio = ((const uint16 *) &DSCHED_BsPrio);
    return (DSCHED_adBsPrio[fid - 1u]);
}


#if (DSCHED_PRIORMPCALC_SY != 0 && DSCHED_PRIOACTVJMP_SY != 0)
/**
 ***************************************************************************************************
 * inline function to get upper limit of ramp for given FId
 *
 * \param      FId number
 * \return     upper limit of ramp from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetRmpUpLim)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetRmpUpLim(uint fid);
LOCAL_INLINE uint16 DSCHED_GetRmpUpLim(uint fid)
#else
static uint16 DSCHED_GetRmpUpLim(uint fid);
static uint16 DSCHED_GetRmpUpLim(uint fid)
#endif
{
    const uint16 * DSCHED_adRmpUpLim;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adRmpUpLim = ((const uint16 *) &DSCHED_RmpUpLim);
    return (DSCHED_adRmpUpLim[fid - 1u]);
}
#endif /*(DSCHED_PRIORMPCALC_SY != 0 && DSCHED_PRIOACTVJMP_SY != 0)*/



#if (DSCHED_PRIORMPCALC_SY != 0 && DSCHED_PRIOACTVJMP_SY != 0)
/**
 ***************************************************************************************************
 * inline function to get decreased speed of ramp value in case FId has the permission to run
 *
 * \param      FId number
 * \return     decreased speed of ramp value from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetRmpSlpActv)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetRmpSlpActv(uint fid);
LOCAL_INLINE uint16 DSCHED_GetRmpSlpActv(uint fid)
#else
static uint16 DSCHED_GetRmpSlpActv(uint fid);
static uint16 DSCHED_GetRmpSlpActv(uint fid)
#endif
{
    const uint16 * DSCHED_adRmpSlpActv;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adRmpSlpActv = ((const uint16 *) &DSCHED_RmpSlpActv);
    return (DSCHED_adRmpSlpActv[fid - 1u]);
}
#endif /*(DSCHED_PRIORMPCALC_SY != 0 && DSCHED_PRIOACTVJMP_SY != 0)*/



#if (DSCHED_PRIORMPCALC_SY != 0 && DSCHED_PRIOACTVJMP_SY != 0)
/**
 ***************************************************************************************************
 * inline function to get increase speed of ramp value in case FId has no permission to run
 *
 * \param      FId number
 * \return     increase speed of ramp value from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetRmpSlpPas)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetRmpSlpPas(uint fid);
LOCAL_INLINE uint16 DSCHED_GetRmpSlpPas(uint fid)
#else
static uint16 DSCHED_GetRmpSlpPas(uint fid);
static uint16 DSCHED_GetRmpSlpPas(uint fid)
#endif
{
    const uint16 * DSCHED_adRmpSlpPas;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adRmpSlpPas = ((const uint16 *) &DSCHED_RmpSlpPas);
    return (DSCHED_adRmpSlpPas[fid - 1u]);
}
#endif /*(DSCHED_PRIORMPCALC_SY != 0 && DSCHED_PRIOACTVJMP_SY != 0)*/


#if (DSCHED_PRIOACTVJMP_SY != 0)
/**
 ***************************************************************************************************
 * inline function to get priority offset during activation of the function (hysteresis)
 *
 * \param      FId number
 * \return     priority offset value from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetJmpActvPrio)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetJmpActvPrio(uint fid);
LOCAL_INLINE uint16 DSCHED_GetJmpActvPrio(uint fid)
#else
static uint16 DSCHED_GetJmpActvPrio(uint fid);
static uint16 DSCHED_GetJmpActvPrio(uint fid)
#endif
{
    const uint16 * DSCHED_adJmpActvPrio;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adJmpActvPrio = ((const uint16 *) &DSCHED_JmpActvPrio);
    return (DSCHED_adJmpActvPrio[fid - 1u]);
}
#endif /*(DSCHED_PRIOACTVJMP_SY != 0)*/


#if(DSCHED_PRIORMPCALC_SY != 0 && DSCHED_PRIOACTVJMP_SY != 0)
/**
 ***************************************************************************************************
 * inline function to get initial ramp priority
 *
 * \param      FId number
 * \return     initial ramp priority value from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetRmpIniPrio)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetRmpIniPrio(uint fid);
LOCAL_INLINE uint16 DSCHED_GetRmpIniPrio(uint fid)
#else
static uint16 DSCHED_GetRmpIniPrio(uint fid);
static uint16 DSCHED_GetRmpIniPrio(uint fid)
#endif
{
    const uint16 * DSCHED_adRmpIniPrio;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adRmpIniPrio = ((const uint16 *) &DSCHED_RmpIniPrio);
    return (DSCHED_adRmpIniPrio[fid - 1u]);
}
#endif /*(DSCHED_PRIORMPCALC_SY != 0 && DSCHED_PRIOACTVJMP_SY != 0)*/



#if (DSCHED_PRIOPHYSURGENCY_SY != 0)
/**
 **********************************************************************************************************
 * inline function to get scaling factor for the physical urgency value generated by the scheduled function
 *
 * \param      FId number
 * \return     scaling factor for the physical urgency value from calibration parameter
 * \seealso
 * \usedresources
 **********************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetFacPhys)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint8 DSCHED_GetFacPhys(uint fid);
LOCAL_INLINE uint8 DSCHED_GetFacPhys(uint fid)
#else
static uint8 DSCHED_GetFacPhys(uint fid);
static uint8 DSCHED_GetFacPhys(uint fid)
#endif
{
    const uint8 * DSCHED_adFacPhys;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adFacPhys = ((const uint8  *) &DSCHED_FacPhys);
    return (DSCHED_adFacPhys[fid - 1u]);
}
#endif /*#if (DSCHED_PRIOPHYSURGENCY_SY != 0)*/



#if (DSCHED_PRIODFCSTTST_SY != 0 || DSCHED_PRIODFCSTLDF_SY != 0)
/**
 ***************************************************************************************************
 * inline function to get fault check which is evaluated by the scheduled function
 *
 * \param      FId number
 * \return     fault check from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetAsgnCheck)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetAsgnCheck(uint fid);
LOCAL_INLINE uint16 DSCHED_GetAsgnCheck(uint fid)
#else
static uint16 DSCHED_GetAsgnCheck(uint fid);
static uint16 DSCHED_GetAsgnCheck(uint fid)
#endif
{
    const uint16 * DSCHED_adAsgnCheck;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adAsgnCheck = ((const uint16 *) &DSCHED_AsgnCheck);
    return (DSCHED_adAsgnCheck[fid - 1u]);
}

/* will be used if (DSCHED_PRIODFCSTTST_SY != 0 || DSCHED_PRIODFCSTLDF_SY != 0) */
#endif



#if (DSCHED_COEOM_SY != 0)
/**
 ***************************************************************************************************
 * inline function to get mask of compatible operation modes
 *
 * \param      FId number
 * \return     mask of compatible operation modes from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetOpModeMsk)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint32 DSCHED_GetOpModeMsk(uint fid);
LOCAL_INLINE uint32 DSCHED_GetOpModeMsk(uint fid)
#else
static uint32 DSCHED_GetOpModeMsk(uint fid);
static uint32 DSCHED_GetOpModeMsk(uint fid)
#endif
{
    #if (DSCHED_COEOMEXT_SC == 0)
    const uint16 * DSCHED_adOpModeMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adOpModeMsk = ((const uint16 *) &DSCHED_OpModeMsk);
    #else
    const uint32 * DSCHED_adOpModeMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adOpModeMsk = ((const uint32 *) &DSCHED_OpModeMsk);
    #endif

    return (DSCHED_adOpModeMsk[fid - 1u]);
}
#endif /*(DSCHED_COEOM_SY != 0)*/


#if (DSCHED_COEOM_SY != 0)
/**
 ***************************************************************************************************
 * inline function to get status of compatible operation modes
 *
 * \param      FId number, stOpMode
 * \return     1:   operation modes compatible with mask from calibration parameter
 *             0:   not compatible
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_CoEOMCmpSt)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE bool DSCHED_CoEOMCmpSt(uint fid, uint32 stOpMode);
LOCAL_INLINE bool DSCHED_CoEOMCmpSt(uint fid, uint32 stOpMode)
#else
static bool DSCHED_CoEOMCmpSt(uint fid, uint32 stOpMode);
static bool DSCHED_CoEOMCmpSt(uint fid, uint32 stOpMode)
#endif
{
    #if (DSCHED_COEOMEXT_SC == 0)
        return (bool)((DSCHED_GetOpModeMsk(fid) & (uint16)stOpMode) >0);
    #else
    /* in case of extended operation mode use extended algorithm for checking the upper 16 bits */
        return ((bool)((DSCHED_GetOpModeMsk(fid) & stOpMode & COEOM_OPMODE_MSK) >0)
                && (bool)((DSCHED_GetOpModeMsk(fid) & stOpMode & COEOM_STAGE_MSK) >0));
    #endif
}
#endif /*(DSCHED_COEOM_SY != 0)*/




#if (CMBTYP_SY == CMBTYP_DS)
/**
 ***************************************************************************************************
 * inline function to get current drive mode according to selected FId
 *
 * \param      FId number
 * \return     mask of current drive mode from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetDrvModeMsk)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetDrvModeMsk(uint fid);
LOCAL_INLINE uint16 DSCHED_GetDrvModeMsk(uint fid)
#else
static uint16 DSCHED_GetDrvModeMsk(uint fid);
static uint16 DSCHED_GetDrvModeMsk(uint fid)
#endif
{
    const uint16 * DSCHED_adDrvMode;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adDrvMode = ((const uint16 *) &DSCHED_DrvModeMsk);
    return (DSCHED_adDrvMode[fid - 1u]);
}
#endif /*(CMBTYP_SY == CMBTYP_DS)*/



#if (DSCHED_RATECALC_SY != 0)
/* will be used if DSCHED_RATECALC_SY != 0 */
/**
 ***************************************************************************************************
 * inline function to get limit value for lower 13 bits of dynamic priority if the rate is ok
 *
 * \param      FId number
 * \return     Limit value for lower 13 bits of dynamic priority (OK) from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetUpLimRateOk)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetUpLimRateOk(uint fid);
LOCAL_INLINE uint16 DSCHED_GetUpLimRateOk(uint fid)
#else
static uint16 DSCHED_GetUpLimRateOk(uint fid);
static uint16 DSCHED_GetUpLimRateOk(uint fid)
#endif
{
    const uint16 * DSCHED_adUpLimRateOk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adUpLimRateOk = ((const uint16 *) &DSCHED_UpLimRateOk);
    return (DSCHED_adUpLimRateOk[fid - 1u]);
}

/**
 ***************************************************************************************************
 * inline function to get limit value for lower 13 bits of dynamic priority if the rate is not ok
 *
 * \param      FId number
 * \return     Limit value for lower 13 bits of dynamic priority (NOT OK) from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetUpLimRateLow)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetUpLimRateLow(uint fid);
LOCAL_INLINE uint16 DSCHED_GetUpLimRateLow(uint fid)
#else
static uint16 DSCHED_GetUpLimRateLow(uint fid);
static uint16 DSCHED_GetUpLimRateLow(uint fid)
#endif
{
    const uint16 * DSCHED_adUpLimRateLow;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adUpLimRateLow = ((const uint16 *) &DSCHED_UpLimRateLow);
    return (DSCHED_adUpLimRateLow[fid - 1u]);
}

/**
 ***************************************************************************************************
 * inline function to get necessary active time for rate calculation
 *
 * \param      FId number
 * \return     necessary active time for rate calculation from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetSetPointRateActv)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetSetPointRateActv(uint fid);
LOCAL_INLINE uint16 DSCHED_GetSetPointRateActv(uint fid)
#else
static uint16 DSCHED_GetSetPointRateActv(uint fid);
static uint16 DSCHED_GetSetPointRateActv(uint fid)
#endif
{
    const uint16 * DSCHED_adSetPointRateActv;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adSetPointRateActv = ((const uint16 *) &DSCHED_SetPointRateActv);
    return (DSCHED_adSetPointRateActv[fid - 1u]);
}

/**
 ***************************************************************************************************
 * inline function to get necessary passive time for rate calculation
 *
 * \param      FId number
 * \return     necessary passive time for rate calculation from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetSetPointRatePas)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetSetPointRatePas(uint fid);
LOCAL_INLINE uint16 DSCHED_GetSetPointRatePas(uint fid)
#else
static uint16 DSCHED_GetSetPointRatePas(uint fid);
static uint16 DSCHED_GetSetPointRatePas(uint fid)
#endif
{
    const uint16 * DSCHED_adSetPointRatePas;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adSetPointRatePas = ((const uint16 *) &DSCHED_SetPointRatePas);
    return (DSCHED_adSetPointRatePas[fid - 1u]);
}
/* will be used if DSCHED_RATECALC_SY != 0 */

#else
/* else: will be used if DSCHED_RATECALC_SY == 0 */
/**
 ***************************************************************************************************
 * inline function to get limit value for lower 13 bits of dynamic priority if the rate calculation
 * is disabled
 *
 * \param      FId number
 * \return     Limit value for lower 13 bits of dynamic priority from calibration parameter if rate
 *             calculation is disabled
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetUpLimRateLow)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetLimPrio(uint fid);
LOCAL_INLINE uint16 DSCHED_GetLimPrio(uint fid)
#else
static uint16 DSCHED_GetLimPrio(uint fid);
static uint16 DSCHED_GetLimPrio(uint fid)
#endif
{
    const uint16 * DSCHED_adLimPrio;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adLimPrio = ((const uint16 *) &DSCHED_LimPrio);
    return (DSCHED_adLimPrio[fid - 1u]);
}
/* endif: will be used if DSCHED_RATECALC_SY == 0 */
#endif

#if (DSCHED_WTT_SY != 0)
/* will be used if DSCHED_WTT_SY != 0 */
/**
 ***************************************************************************************************
 * inline function to get first index of window time table which shall be processed
 *
 * \param      -
 * \return     first index of window time table from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetWTTStrt)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint8 DSCHED_GetWTTStrt(void);
LOCAL_INLINE uint8 DSCHED_GetWTTStrt(void)
#else
static uint8 DSCHED_GetWTTStrt(void);
static uint8 DSCHED_GetWTTStrt(void)
#endif
{
    return (DSCHED_idxWTTStrt_C);
}

/**
 ***************************************************************************************************
 * inline function to get last index of window time table which shall be processed
 *
 * \param      -
 * \return     last index of window time table from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetWTTEnd)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint8 DSCHED_GetWTTEnd(void);
LOCAL_INLINE uint8 DSCHED_GetWTTEnd(void)
#else
static uint8 DSCHED_GetWTTEnd(void);
static uint8 DSCHED_GetWTTEnd(void)
#endif
{
    return (DSCHED_idxWTTEnd_C);
}
/* will be used if DSCHED_WTT_SY != 0 */
#endif

#if (DSCHED_PRIODFCSTLDF_SY != 0)
/* will be used if DSCHED_PRIODFCSTLDF_SY != 0 */
/**
 ***************************************************************************************************
 * inline function to get DFC state dependent priority value which is added as long as the
 * error flag (LDF) in DSCHED_st.FID_xx is set.
 *
 * \param      fid
 * \return     uniform or individual priority offset
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetOfsPrioNoTst)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetOfsPrioNoTst(uint fid);
LOCAL_INLINE uint16 DSCHED_GetOfsPrioNoTst(uint fid)
#else
static uint16 DSCHED_GetOfsPrioNoTst(uint fid);
static uint16 DSCHED_GetOfsPrioNoTst(uint fid)
#endif
{
/* uniform offset for all FID */
#if (DSCHED_PRIODFCSTLDF_SY == 1)
    PARAM_UNUSED(fid);
    return (DSCHED_valOfsPrioNoTst_C);
#endif

/* individual offset for each FID */
#if (DSCHED_PRIODFCSTLDF_SY == 2)
    const uint16 * DSCHED_adValOfsPrioNoTst;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adValOfsPrioNoTst = ((const uint16 *) &DSCHED_valOfsPrioNoTst);
    return (DSCHED_adValOfsPrioNoTst[fid - 1u]);
#endif

}
/* will be used if DSCHED_PRIODFCSTLDF_SY != 0 */
#endif



#if (DSCHED_PRIODFCSTTST_SY != 0)
/* will be used if DSCHED_PRIODFCSTTST_SY != 0 */
/**
 ***************************************************************************************************
 * inline function to get DFC state dependent priority value which is added as long as the
 * tested flag in DSCHED_st.FId_xx is not set.
 *
 * \param      fid
 * \return     uniform or individual priority offset
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetOfsPrioTst)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetOfsPrioTst(uint fid);
LOCAL_INLINE uint16 DSCHED_GetOfsPrioTst(uint fid)
#else
static uint16 DSCHED_GetOfsPrioTst(uint fid);
static uint16 DSCHED_GetOfsPrioTst(uint fid)
#endif
{
/* uniform offset for all FID */
#if (DSCHED_PRIODFCSTTST_SY == 1)
    PARAM_UNUSED(fid);
    return (DSCHED_valOfsPrioTst_C);
#endif

/* individual offset for each FID */
#if (DSCHED_PRIODFCSTTST_SY == 2)
    const uint16 * DSCHED_adValOfsPrioTst;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DSCHED_adValOfsPrioTst = ((const uint16 *) &DSCHED_valOfsPrioTst);
    return (DSCHED_adValOfsPrioTst[fid - 1u]);
#endif

}
/* will be used if DSCHED_PRIODFCSTTST_SY != 0 */
#endif

/**
 ***************************************************************************************************
 * inline function to get central disable switch for all scheduled FIDs
 *
 * \param      -
 * \return     central disable switch for all scheduled FIDs
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetMode)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint8 DSCHED_GetMode(void);
LOCAL_INLINE uint8 DSCHED_GetMode(void)
#else
static uint8 DSCHED_GetMode(void);
static uint8 DSCHED_GetMode(void)
#endif
{
    return (DSCHED_stMode_C);
}

/**
 ***************************************************************************************************
 * inline function to get priority is raise value in case current operation mode is compatible
 *
 * \param      -
 * \return     priority is raise value in case current operation mode is compatible
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetOfsPrioOpMode)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetOfsPrioOpMode(void);
LOCAL_INLINE uint16 DSCHED_GetOfsPrioOpMode(void)
#else
static uint16 DSCHED_GetOfsPrioOpMode(void);
static uint16 DSCHED_GetOfsPrioOpMode(void)
#endif
{
    return (DSCHED_valOfsPrioOpMode_C);
}

/**
 ***************************************************************************************************
 * inline function to get default request value for operation mode coordinator during disable state
 *
 * \param      -
 * \return     default request value for operation mode coordinator during disable state
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_GetDflOpMode)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16 DSCHED_GetDflOpMode(void);
LOCAL_INLINE uint16 DSCHED_GetDflOpMode(void)
#else
static uint16 DSCHED_GetDflOpMode(void);
static uint16 DSCHED_GetDflOpMode(void)
#endif
{
    return (DSCHED_valDflOpMode_C);
}



/**
 ***************************************************************************************************
 * This function call sets the pointers to the calibration parameters
 *
 * Because the library can not access directly the damos paramters, this function sets
 * pointers to the damos paramter value blocks. This pointers can be used within the library part
 * furthermore this function can be called from within the library
 *
 * To avoid a dummy parameter at the beginning of each list, the pointers are all corrected by an
 * offset of 1 element. So during access to the values the correction can be saved (runtime!).
 *
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_SetCalPt)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_SetCalPt(void);
LOCAL_INLINE void DSCHED_SetCalPt(void)
#else
static void DSCHED_SetCalPt(void);
static void DSCHED_SetCalPt(void)
#endif
{
    /* In case of library use, put here function to update pointers to the calibration values */
    /* In case no library is used, inline function is empty */
}












/*
##################################################################################################################
##################################################################################################################
##################################################################################################################
##################################################################################################################
 */


/*
 ***************************************************************************************************
 * Inline definitions removed from dsched_prot.h
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Inline definitions
 *
 * All inline functions intended for dsched private use (_prot.h!). So no type protection
 * for fid parameters is done. This ensures the best access speed. Type protection must be
 * used for all function which are provided via dsched.h to outside dsched.
 ***************************************************************************************************
 */

/**
 **************************************************************************************************
 * This method will return TRUE if the zol flag is set for the named FID.
 *
 * ZOL means zyf of last = tested status of last driving cycle. This is not supported anymore, but
 * during runtime this bit is used as raw enable information for the fid.
 *
 * \param        FId number
 * \return       Raw scheduling status
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getSched)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint DSCHED_getSched(uint fid);
LOCAL_INLINE uint DSCHED_getSched(uint fid)
#else
static uint DSCHED_getSched(uint fid);
static uint DSCHED_getSched(uint fid)
#endif
{
    return(((DSCHED_St[fid] & DSCHED_ZOL_MSK) > 0));
}


/**
 **************************************************************************************************
 * This method will set the zol bit (= raw Scheduling) in the scheduler status, for the given FID.
 *
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setSched)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_setSched(uint fid);
LOCAL_INLINE void DSCHED_setSched(uint fid)
#else
static void DSCHED_setSched(uint fid);
static void DSCHED_setSched(uint fid)
#endif
{
    Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
    DSCHED_St[fid] = (DSCHED_St[fid] | DSCHED_ZOL_MSK);
    Cpu_ResumeInt(); /* end atomic (interrupt lock) */
}


/**
 **************************************************************************************************
 * This method will reset the zol (raw scheduler stauts and the scd bit in the scheduler status,
 * for the given FID.
 *
 * \param        FId number
 * \return       Raw scheduling status
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetSched)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_resetSched(uint fid);
LOCAL_INLINE void DSCHED_resetSched(uint fid)
#else
static void DSCHED_resetSched(uint fid);
static void DSCHED_resetSched(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit manipulation */
    Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
    DSCHED_St[fid] = (DSCHED_St[fid] & ~(DSCHED_StType)DSCHED_SCD_ZOL_MSK);
    Cpu_ResumeInt(); /* end atomic (interrupt lock) */
}


/**
 **************************************************************************************************
 * This method will set the scd bit in the scheduler status, for the given FID.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setPermission)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void  DSCHED_setPermission(uint fid);
LOCAL_INLINE void  DSCHED_setPermission(uint fid)
#else
static void DSCHED_setPermission(uint fid);
static void DSCHED_setPermission(uint fid)
#endif
{
    Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
    DSCHED_St[fid] = (DSCHED_St[fid] | DSCHED_SCD_MSK);
    Cpu_ResumeInt(); /* end atomic (interrupt lock) */
}

/**
 **************************************************************************************************
 * This method will reset the scd bit in the scheduler status, for the given FID.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetPermission)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_resetPermission(uint fid);
LOCAL_INLINE void DSCHED_resetPermission(uint fid)
#else
static void DSCHED_resetPermission(uint fid);
static void DSCHED_resetPermission(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit manipulation */
    Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
    DSCHED_St [fid] = (DSCHED_St [fid] & ~(DSCHED_StType)DSCHED_SCD_MSK);
    Cpu_ResumeInt(); /* end atomic (interrupt lock) */
}


#if (DSCHED_WTT_SY != 0)
/* will be used if DSCHED_WTT_SY != 0 */
/**
 **************************************************************************************************
 *  This method will return TRUE if the window bit, in the dynamic priority, is set in the given
 *  FID, otherwise it will return FALSE.
 * \param        FId number
 * \return       Window priority bit of dynamic priority
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getWind)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint DSCHED_getWind(uint fid);
LOCAL_INLINE uint DSCHED_getWind(uint fid)
#else
static uint DSCHED_getWind(uint fid);
static uint DSCHED_getWind(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit manipulation */
    return ((uint)((DSCHED_DynPrio [fid]  &  DSCHED_WND_MSK) > 0));
}


/**
 **************************************************************************************************
 * This method will set the window bit in the dynamic priority of the given fid.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setWind)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_setWind(uint fid);
LOCAL_INLINE void DSCHED_setWind(uint fid)
#else
static void DSCHED_setWind(uint fid);
static void DSCHED_setWind(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit manipulation */
    DSCHED_DynPrio [fid] = (DprioType)(((uint)DSCHED_DynPrio [fid]) | DSCHED_WND_MSK);
}


/**
 **************************************************************************************************
 * This method will reset the window bit in the dynamic priority of the given fid.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetWind)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void  DSCHED_resetWind(uint fid);
LOCAL_INLINE void  DSCHED_resetWind(uint fid)
#else
static void DSCHED_resetWind(uint fid);
static void DSCHED_resetWind(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit manipulation */
    DSCHED_DynPrio [fid] = (DprioType)(((uint)DSCHED_DynPrio [fid]) & ~DSCHED_WND_MSK);
}
/* will be used if DSCHED_WTT_SY != 0 */
#endif



/**
 **************************************************************************************************
 * This method will return TRUE if the Sleep bit is set in
 * the status of the given FID. Otherwise it will return FALSE.
 * \param        FId number
 * \return       Sleep (lock) bit of FId status
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getSleep)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint DSCHED_getSleep(uint fid);
LOCAL_INLINE uint DSCHED_getSleep(uint fid)
#else
static uint DSCHED_getSleep(uint fid);
static uint DSCHED_getSleep(uint fid)
#endif
{
    return (((DSCHED_St [fid] & DSCHED_LCK_MSK) > 0));
}


/**
 **************************************************************************************************
 * This method will return TRUE if the function active bit
 * is set in the given FID. otherwise it will return FALSE.
 * \param        FId number
 * \return       active bit of FId status
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getActive)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint DSCHED_getActive(uint fid);
LOCAL_INLINE uint DSCHED_getActive(uint fid)
#else
static uint DSCHED_getActive(uint fid);
static uint DSCHED_getActive(uint fid)
#endif
{
    return (((DSCHED_St [fid] & DSCHED_ACT_MSK) > 0));
}


/**
 **************************************************************************************************
 * This method will return TRUE if the mark bit, in the
 * dynamic priority, is set in the given FID. otherwise it will return FALSE.
 * \param        FId number
 * \return       mark bit (sign) of FId status
 **************************************************************************************************
 */

#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getMark)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint DSCHED_getMark(uint fid);
LOCAL_INLINE uint DSCHED_getMark(uint fid)
#else
static uint DSCHED_getMark(uint fid);
static uint DSCHED_getMark(uint fid)
#endif
{
    /* comparison must be != 0 because if mark bit is set this is a negative value */
    /* MISRA RULE 37 VIOLATION: direct bit operation */
    return (uint)((((uint)DSCHED_DynPrio[fid]) & DSCHED_MRK_MSK) != 0);
}


/**
 **************************************************************************************************
 * This method will set the mark bit in the dynamic priority of the given fid.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setMark)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_setMark(uint fid);
LOCAL_INLINE void DSCHED_setMark(uint fid)
#else
static void DSCHED_setMark(uint fid);
static void DSCHED_setMark(uint fid)
#endif
{
    /* MISRA RULE 37,43 VIOLATION: direct bit operation */
    DSCHED_DynPrio [fid] = (DprioType)((uint)(DSCHED_DynPrio [fid]) | DSCHED_MRK_MSK);
}


/**
 **************************************************************************************************
 * This method will reset the mark bit in the dynamic priority of the given fid.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetMark)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_resetMark(uint fid);
LOCAL_INLINE void DSCHED_resetMark(uint fid)
#else
static void DSCHED_resetMark(uint fid);
static void DSCHED_resetMark(uint fid)
#endif
{
    /* MISRA RULE 37,43 VIOLATION: direct bit operation */
    DSCHED_DynPrio [fid] = (DprioType)((uint)(DSCHED_DynPrio [fid]) & ~(DSCHED_MRK_MSK));
}


#if (DSCHED_FTI_SY != 0)
/* will be used if DSCHED_FTI_SY != 0 */
/**
 **************************************************************************************************
 * This method will set the swift bit in the dynamic priority of the given fid.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setSwift)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_setSwift(uint fid);
LOCAL_INLINE void DSCHED_setSwift(uint fid)
#else
static void DSCHED_setSwift(uint fid);
static void DSCHED_setSwift(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit manipulation */
    DSCHED_DynPrio [fid] = (DprioType)(((uint)DSCHED_DynPrio [fid]) | DSCHED_SWF_MSK);
}


/**
 **************************************************************************************************
 * This method will reset the swift bit in the dynamic priority of the given fid.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetSwift)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_resetSwift(uint fid);
LOCAL_INLINE void DSCHED_resetSwift(uint fid)
#else
static void DSCHED_resetSwift(uint fid);
static void DSCHED_resetSwift(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit manipulation */
    DSCHED_DynPrio [fid] = (DprioType)((uint)(DSCHED_DynPrio [fid]) & ~DSCHED_SWF_MSK);
}
/* will be used if DSCHED_FTI_SY != 0 */
#endif


/**
 **************************************************************************************************
 * This method will set the excluding FID in the WhyExcl measurmement point of the given fid.
 * \param        FId number
 * \param        exclusion cause
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_setExCause)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_setExCause(uint fid, uint cause);
LOCAL_INLINE void DSCHED_setExCause(uint fid, uint cause)
#else
static void DSCHED_setExCause(uint fid, uint cause);
static void DSCHED_setExCause(uint fid, uint cause)
#endif
{
    if (DSCHED_WhyExcl[fid] == 0)
    {
        DSCHED_WhyExcl[fid] = (uint16)cause;
    }
}


/**
 **************************************************************************************************
 * This method will reset the excluding FID in the WhyExcl measurmement point of the given fid.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetExCause)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void    DSCHED_resetExCause(uint fid);
LOCAL_INLINE void    DSCHED_resetExCause(uint fid)
#else
static void DSCHED_resetExCause(uint fid);
static void DSCHED_resetExCause(uint fid)
#endif
{
    DSCHED_WhyExcl[fid] = 0;
}


/**
 **************************************************************************************************
 * This method will clear (reset) the dynamic priority
 * value (ls 13 bits) and the Mark flag for the given fid.
 * Swift (function tester active)  flag is also cleared.
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_resetDynPrio)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE void DSCHED_resetDynPrio(uint fid);
LOCAL_INLINE void DSCHED_resetDynPrio(uint fid)
#else
static void DSCHED_resetDynPrio(uint fid);
static void DSCHED_resetDynPrio(uint fid)
#endif
{
    /* MISRA RULE 37 VIOLATION: direct bit operation */
    DSCHED_DynPrio [fid] = (DprioType)(((uint)DSCHED_DynPrio[fid]) & DSCHED_SWF_WND_MSK);
}




/**
 **************************************************************************************************
 * This method will return the time since the start of the
 * current driving cycle in 100s of ms.
 * \param        void
 * \return       driving cycle time for window time table
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (getDcyTime)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint16  getDcyTime(void);
LOCAL_INLINE uint16  getDcyTime(void)
#else
static uint16  getDcyTime(void);
static uint16  getDcyTime(void)
#endif
{
    return ( DSCHED_tiWTT);
}


/**
 **************************************************************************************************
 * This method will return the current permission state of the given fid.
 *
 * This function does nearly the same as the public version, but with the pure number as argument
 * the public function uses a type protected FId number.
 *
 * \param        FId number
 * \return       permission bit of FId status
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getPermission)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint  DSCHED_getPermission    (uint fid);
LOCAL_INLINE uint  DSCHED_getPermission    (uint fid)
#else
static uint DSCHED_getPermission(uint fid);
static uint DSCHED_getPermission(uint fid)
#endif
{
    return(((DSCHED_St[fid] & DSCHED_SCD_MSK) > 0));
}



/**
 **************************************************************************************************
 * This method will return TRUE if the physical flag is set for the named FID.
 * \param        FId number
 * \return       physical ready bit of FId status
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getReady)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint DSCHED_getReady(uint fid);
LOCAL_INLINE uint DSCHED_getReady(uint fid)
#else
static uint DSCHED_getReady(uint fid);
static uint DSCHED_getReady(uint fid)
#endif
{
    return ((uint)((DSCHED_St[fid] & DSCHED_PHY_MSK) > 0));
}


/**
 **************************************************************************************************
 * This method will return true if the input fids are incompatible to each other.
 * \param        FId number 1
 * \param        FId number 2
 * \return       True if fid's are exclusive to each other, otherwise false
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (IS_INCOMPATIB)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint IS_INCOMPATIB( uint fid1,uint fid2);
LOCAL_INLINE uint IS_INCOMPATIB( uint fid1,uint fid2)
#else
static uint IS_INCOMPATIB( uint fid1,uint fid2);
static uint IS_INCOMPATIB( uint fid1,uint fid2)
#endif
{
    uint stRet;
    #if (DSCHED_FID_MAX_NUM_NO_ACKN > 2)
    uint bytePos;
    //const uint16 * DSCHED_adExcl;
    const uint8 * DSCHED_adExcl;
    #endif

    /* default value for fid1==fid2 */
    stRet = FALSE;

    /* Only relevant if there is more than one scheduled FId,
       in other words at least one FId couple exists */
    #if (DSCHED_FID_MAX_NUM_NO_ACKN > 2)
    if (fid1 != fid2)
    {
        if (fid1 < fid2)
        {
            /*
            with fid2 > fid1:
            0.5 * (fid1 - 1) * (2*NumOfSchedFid - fid1) + fid2 - fid1 - 1

            caution:
            DSCHED_numFIdMaxNoAckn  = DSCHED_FID_MAX_NUM_NO_ACKN
                                    = NumOfSchedFid + 1 !
            => NumOfSchedFid = DSCHED_numFIdMaxNoAckn - 1
            */

            /* direct calculation */
            bytePos = ( ( (fid1-1) * (((DSCHED_numFIdMaxNoAckn - 1)<<1)-fid1) )>>1 )+ ((fid2-fid1) - 1);
        }
        else
        {

            /* direct calculation */
            bytePos = ( ( (fid2-1) * (((DSCHED_numFIdMaxNoAckn - 1)<<1)-fid2) )>>1 )+ ((fid1-fid2) - 1);
        }


        /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
        DSCHED_adExcl = ((const uint8 *) &DSCHED_Excl);
        stRet = (DSCHED_adExcl[bytePos] != FALSE);
    }
    #endif

    return stRet;


}





/**
 **************************************************************************************************
 * This method will return TRUE if the permission bit is not set
 * in the status of the given FID. Otherwise it will return FALSE.
 *
 * The same functionality but with fid as DSM_FIdType paramter is provided
 * within the public header file for for type protection.
 *
 * \param        FId number
 * \return       inhibit status of FId
 **************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DSCHED_getInhibInt)
#endif


#ifndef RENESAS_SHC
LOCAL_INLINE uint DSCHED_getInhibInt(uint FId);
LOCAL_INLINE uint DSCHED_getInhibInt(uint FId)
#else
static uint DSCHED_getInhibInt(uint FId);
static uint DSCHED_getInhibInt(uint FId)
#endif
{
   return(((DINH_stFId[FId] & DSM_SCH_INH_MK) == 0 ));
}




#endif
