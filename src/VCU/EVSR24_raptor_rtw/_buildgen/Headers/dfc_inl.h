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
 * $Filename__:dfc_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PKA2SI$ 
 * $Date______:21.12.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:dfc_inl$ 
 * $Variant___:2.6.0$ 
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
 * 2.6.0; 0     21.12.2011 PKA2SI
 *   DCM DID support for environment data
 * 
 * 2.5.0; 0     15.09.2011 ZUZ2SI
 *   (378248) CRQ: Extension of DisblMsk to support 32 bits 
 *   
 *   Docu complement due to virtual DFC
 * 
 * 2.4.0; 0     14.12.2010 PKA2SI
 *   static disable by DFES_Cls=255
 * 
 * 2.1.0; 0     26.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfc_inl.h
 *      Version: \main\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _DFC_INL_H
#define _DFC_INL_H

#ifndef DFC_CTLDISBLLAYOUT_SY
  #error >>>> 'DFC_CTLDISBLLAYOUT_SY' undefined!
#endif
#ifndef DFC_CTLMSKBYTES_SY
  #error >>>> 'DFC_CTLMSKBYTES_SY' undefined!
#endif
#ifndef DFC_DISBLMSKBYTES_SY
  #error >>>> 'DFC_DISBLMSKBYTES_SY' undefined!
#endif

 /*
 ***************************************************************************************************
 * Implementation
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * inline function to get control mask DFC_CtlMsk
 *
 * \param      fault check number
 * \return     control mask from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DFC_GetCtlMsk)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint DFC_GetCtlMsk(uint numCheck) )
#else
static uint DFC_GetCtlMsk(uint numCheck)
#endif
{
#if (DSMCONF_SUPGLBCTLMSK == 1)
    /* select global parameter independent from fault check number */

    PARAM_UNUSED(numCheck);
 #if (DFC_CTLDISBLLAYOUT_SY == 0)
    return (uint)(DFC_CtlMsk_C);
 #else
    return (uint)(DFC_CtlMsk2_C);
 #endif

#else
    /* get control mask from fault check specific calibration parameter */

 #if (DFC_CTLDISBLLAYOUT_SY == 0)
    const uint16 * DFC_adCtlMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration strucutur -> array */
    DFC_adCtlMsk = &(DFC_CtlMsk.DFC_Unused_C);
 #else
  #if (DFC_CTLMSKBYTES_SY == 2)
    const uint16 * DFC_adCtlMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration strucutur -> array */
    DFC_adCtlMsk = &(DFC_CtlMsk2.DFC_Unused_C);
  #elif (DFC_CTLMSKBYTES_SY == 1)
    const uint8 * DFC_adCtlMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration strucutur -> array */
    DFC_adCtlMsk = &(DFC_CtlMsk2.DFC_Unused_C);
  #endif
 #endif
    return (uint)DFC_adCtlMsk[numCheck];
#endif
}



/**
 ***************************************************************************************************
 * inline function to get disable mask DFC_DisblMsk
 *
 * \param      fault check number
 * \return     disable state from calibration parameter
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DFC_GetDisblMsk)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( uint32 DFC_GetDisblMsk(uint numCheck) )
#else
static uint32 DFC_GetDisblMsk(uint numCheck)
#endif
{
#if (DSMCONF_SUPGLBDISBLMSK == 1)
    /* select global parameter independent from fault check number */
    uint32 dfesClsDisable;
    
    dfesClsDisable = 0;
    
    if (DFES_GetFltClsStatDisbl(numCheck))
    {
        dfesClsDisable = (uint32)DFC_DISBL_MSK_DFC_UNUSED_MSK;
    }

 #if (DFC_CTLDISBLLAYOUT_SY == 0)
    return ( ((uint32)(DFC_DisblMsk_C))
 #else
    return ( ((uint32)(DFC_DisblMsk2_C))
 #endif /* DFC_CTLDISBLLAYOUT_SY */

 #if (DSM_DISBLGRPSIZE_SY > 0)
           | ((DSMAppl_GetStDFCDisbl(numCheck) > 0) ?
                    ((uint32)(DFC_DISBL_MSK_DFC_UNUSED_MSK)) : ((uint32)0))
 #endif
           | (dfesClsDisable) 
           );

#else
    /* get control mask from fault check specific calibration parameter */

 #if (DFC_CTLDISBLLAYOUT_SY == 0)
    const uint16 * DFC_adDisblMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration strucutur -> array */
    DFC_adDisblMsk = &(DFC_DisblMsk.DFC_Unused_C);
 #else

  #if (DFC_DISBLMSKBYTES_SY == 4)
    const uint32 * DFC_adDisblMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration strucutur -> array */
    DFC_adDisblMsk = &(DFC_DisblMsk2.DFC_Unused_C);
  #elif (DFC_DISBLMSKBYTES_SY == 2)
    const uint16 * DFC_adDisblMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration strucutur -> array */
    DFC_adDisblMsk = &(DFC_DisblMsk2.DFC_Unused_C);
  #elif (DFC_DISBLMSKBYTES_SY == 1)
    const uint8 * DFC_adDisblMsk;
    /* MISRA RULE 45 VIOLATION: pointer cast required to convert calibration strucutur -> array */
    DFC_adDisblMsk = &(DFC_DisblMsk2.DFC_Unused_C);
  #endif

 #endif

    return ( ((uint32)DFC_adDisblMsk[numCheck])
    #if (DSM_DISBLGRPSIZE_SY > 0)
           | ((DSMAppl_GetStDFCDisbl(numCheck) > 0) ?
                    ((uint32)(DFC_DISBL_MSK_DFC_UNUSED_MSK)) : ((uint32)0))
    #endif
           );

#endif /* DSMCONF_SUPGLBDISBLMSK */
}


#endif /* _DFC_INL_H */
