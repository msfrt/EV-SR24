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
 * $Filename__:diumpr_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RMP2SI$ 
 * $Date______:21.03.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:diumpr_inl$ 
 * $Variant___:2.12.0$ 
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
 * 2.12.0; 0     21.03.2012 RMP2SI
 *   Compiler independency task for DSM.
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diumpr_inl.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _DIUMPR_INL_H                                  /* protect multiple includes               */
#define _DIUMPR_INL_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Diagnostic In Use Monitor Performace Ratio
 *
 ***************************************************************************************************
 */


 /*
 ***************************************************************************************************
 * Implementation
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * inline function to get the associated DFC for a given configured IUMPR record
 *
 * \param      IUMPR record number (for configured IUMPR records - mapped to FIDs)
 * \return     associated DFC-Id (from calibration parameter)
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifndef RENESAS_SHC
LOCAL_INLINE  uint DIUMPR_GetDIUMPR_DFC(uint numIUMPRRec);
#else
/* Implementation for Renesas Compiler requires #pragma inline statement */
static uint DIUMPR_GetDIUMPR_DFC(uint numIUMPRRec);
__PRAGMA_USE__RENESAS__INLINE(DIUMPR_GetDIUMPR_DFC)
#endif

#ifndef RENESAS_SHC
LOCAL_INLINE uint DIUMPR_GetDIUMPR_DFC(uint numIUMPRRec)
#else
static uint DIUMPR_GetDIUMPR_DFC(uint numIUMPRRec)
#endif
{
#if ((IUMPR_SY > 0) && (DIUMPR_NUMRATCFG > 0))
    /* get the associated DFC-Id of configured IUMPR record specific calibration parameter */
    const uint16 * DIUMPR_adDIUMPR_DFC;
    const void * dfc_p;
    dfc_p = &(DIUMPR_DFC);
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DIUMPR_adDIUMPR_DFC = (const uint16 *)dfc_p;
    return (uint)DIUMPR_adDIUMPR_DFC[numIUMPRRec];
#else
    PARAM_UNUSED(numIUMPRRec);
    return (0u);
#endif
}

/* here is another solution based on macros if inline is not possible
  but only with an additional "first" element (to get syntactical legal start address ...)
#define DIUMPR_GetDIUMPR_DFC(ID) ( ((const uint16 *)&DIUMPR_DFC.IUMR_FIRST_C)[(ID)] )
*/

/**
 ***************************************************************************************************
 * inline function to get the control byte for a given configured IUMPR record
 *
 * \param      IUMPR record number (for configured IUMPR records - mapped to FIDs)
 * \return     IUMPR control byte from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifndef RENESAS_SHC
LOCAL_INLINE uint DIUMPR_GetDIUMPR_Ctl(uint numIUMPRRec);
#else
/* Implementation for Renesas Compiler requires #pragma inline statement */
static uint DIUMPR_GetDIUMPR_Ctl(uint numIUMPRRec);
__PRAGMA_USE__RENESAS__INLINE(DIUMPR_GetDIUMPR_Ctl)
#endif

#ifndef RENESAS_SHC
LOCAL_INLINE uint DIUMPR_GetDIUMPR_Ctl(uint numIUMPRRec)
#else
static uint DIUMPR_GetDIUMPR_Ctl(uint numIUMPRRec)
#endif
{
#if ((IUMPR_SY > 0) && (DIUMPR_NUMRATCFG > 0))
    /* get control byte of configured IUMPR record specific calibration parameter */
    const uint8 * DIUMPR_adDIUMPR_Ctl;
    const void * ctl_p;
    ctl_p = &(DIUMPR_Ctl);
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DIUMPR_adDIUMPR_Ctl = (const uint8  *)ctl_p;
    return (uint)DIUMPR_adDIUMPR_Ctl[numIUMPRRec];
#else
    PARAM_UNUSED(numIUMPRRec);
    return (0u);
#endif
}

/* here is another solution based on macros if inline is not possible
  but only with an additional "first" element (to get syntactical legal start address ...)
#define DIUMPR_GetDIUMPR_Ctl(ID) ( ((const uint8 *)&DIUMPR_Ctl.IUMR_FIRST_C)[(ID)] )
*/


/**
 ***************************************************************************************************
 * inline function to get the associated IUMPR group for a given configured IUMPR record
 *
 * \param      IUMPR record number (for configured IUMPR records - mapped to FIDs)
 * \return     associated IUMPR group from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifndef RENESAS_SHC
LOCAL_INLINE uint DIUMPR_GetDIUMPR_Grp(uint numIUMPRRec);
#else
/* Implementation for Renesas Compiler requires #pragma inline statement */
static uint DIUMPR_GetDIUMPR_Grp(uint numIUMPRRec);
__PRAGMA_USE__RENESAS__INLINE(DIUMPR_GetDIUMPR_Grp)
#endif

#ifndef RENESAS_SHC
LOCAL_INLINE uint DIUMPR_GetDIUMPR_Grp(uint numIUMPRRec)
#else
static uint DIUMPR_GetDIUMPR_Grp(uint numIUMPRRec)
#endif
{
#if ((IUMPR_SY > 0) && (DIUMPR_NUMRATCFG > 0))
    /* get control byte of configured IUMPR record specific calibration parameter */
    const uint8 * DIUMPR_adDIUMPR_Grp;
    const void * grp_p;
    grp_p = &(DIUMPR_Grp);
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DIUMPR_adDIUMPR_Grp = (const uint8  *)grp_p;
    return (uint)DIUMPR_adDIUMPR_Grp[numIUMPRRec];
#else
    PARAM_UNUSED(numIUMPRRec);
    return (0u);
#endif
}



/**
 ***************************************************************************************************
 * inline function to get the additional MSG group for a given configured IUMPR record
 *
 * \param      IUMPR record number (for configured IUMPR records - pmapped to FIDs)
 * \return     associated additional message IUMPR group (calibrated)
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifndef RENESAS_SHC
LOCAL_INLINE uint DIUMPR_GetDIUMPR_idx(uint numIUMPRRec);
#else
/* Implementation for Renesas Compiler requires #pragma inline statement */
static uint DIUMPR_GetDIUMPR_idx(uint numIUMPRRec);
__PRAGMA_USE__RENESAS__INLINE(DIUMPR_GetDIUMPR_idx)
#endif

#ifndef RENESAS_SHC
LOCAL_INLINE uint DIUMPR_GetDIUMPR_idx(uint numIUMPRRec)
#else
static uint DIUMPR_GetDIUMPR_idx(uint numIUMPRRec)
#endif
{
#if ((IUMPR_SY > 0) && (DIUMPR_NUMRATCFG > 0) && (DIUMPR_NUMMSGGRPS > 0))
    /* get control byte of configured IUMPR record specific calibration parameter */
    const uint8 * DIUMPR_adDIUMPR_idx;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration structure -> array */
    DIUMPR_adDIUMPR_idx = (const uint8  *)&DIUMPR_idx;
    return (uint)DIUMPR_adDIUMPR_idx[numIUMPRRec];
#else
    PARAM_UNUSED(numIUMPRRec);
    return (0u);
#endif
}


#endif
