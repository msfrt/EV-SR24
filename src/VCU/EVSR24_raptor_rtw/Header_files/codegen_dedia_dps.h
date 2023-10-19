/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************  
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:codegen_dedia_dps.h$
 *
 * $Author____:PRG2SI$
 *
 * $Function__:Removal MISRA warnings
 *             Compiler independent
 *             FC Restructuring
 *             Adaption to Srv 1.17.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PRG2SI$
 * $Date______:03.01.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_dedia_dps$
 * $Variant___:1.0.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_DEDIA_DPS_H
#define _CODEGEN_DEDIA_DPS_H

/* DE_StdDiag */
#define DE_STDDIAG_IMPL_compute(x, locSfp, DPS_xxE)     ((locSfp) = Dps_StdDiag((locSfp), (DPS_xxE)))

/* DE_ClrErr */
#define DE_CLRERR_IMPL_compute(DPS_xxE, CWPSxxE)        Dps_ClrErr((DPS_xxE), (CWPSxxE))

/* DE_Init */
#define DE_INIT_IMPL_compute(DPS_xxE)                   Dps_Init((DPS_xxE))

/* DE_Error */
#define DE_ERROR_IMPL_err(x, DPS_xxE)                   Dps_Error((DPS_xxE))

/* DE_ErrorTst, return value is uin16 */
#define DE_ERRORTST_IMPL_err(x, DPS_xxE)                Dps_Error((DPS_xxE))

/* DE_TstImp */
#define DE_TSTIMP_IMPL_compute(DPS_xxE)                 (void)Dps_TstImp((DPS_xxE))

/* DE_ClrErrTrace */
#define DE_CLRERRTRACE_IMPL_compute()                   Dps_ClrErrTrace()

#endif  /*#ifndef _CODEGEN_DEDIA_DPS_H*/

