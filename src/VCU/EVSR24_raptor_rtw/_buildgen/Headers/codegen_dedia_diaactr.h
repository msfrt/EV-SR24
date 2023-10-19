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
 * $Filename__:codegen_dedia_diaactr.h$
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
 * $User______:DAJ2KOR$
 * $Date______:10.01.2013$
 * $Class_____:SWHDR$
 * $Name______:codegen_dedia_diaactr$
 * $Variant___:1.1.0$
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
 * 1.1.0; 0     10.01.2013 DAJ2KOR
 *   Two new macros added for DeDia classes
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_DEDIA_DIAACTR_H
#define _CODEGEN_DEDIA_DIAACTR_H


/* Adapter for DiaActr_ElecPsDiagErrorCfgOT */
#define DIAACTR_ELECPSDIAGERRORCFGOT_IMPL_DiaActr_ElecPsDiagErrorCfgOT(DiagSignal, TstPls, Rep) 			\
        DiaActr_ElecPsDiagErrorCfgOT(DiagSignal,                                                            \
                                    TstPls,                                                                 \
                                    Rep)

#define DiaActr_ElecPsDiagErrorCfgOTIMPL(DiagSignal, TstPls, Rep) 			                                \
        DiaActr_ElecPsDiagErrorCfgOT(DiagSignal,                                                            \
                                    TstPls,                                                                 \
                                    Rep)

/* Adapter for DiaActr_ElecPsDiagErrorCfgOL */
#define DIAACTR_ELECPSDIAGERRORCFGOL_IMPL_DiaActr_ElecPsDiagErrorCfgOL(DiagSignal, TstPls, Rep) 			\
        DiaActr_ElecPsDiagErrorCfgOL(DiagSignal,                                                            \
                                    TstPls,                                                                 \
                                    Rep)

#define DiaActr_ElecPsDiagErrorCfgOLIMPL(DiagSignal, TstPls, Rep) 			                                \
        DiaActr_ElecPsDiagErrorCfgOL(DiagSignal,                                                            \
                                    TstPls,                                                                 \
                                    Rep)


/* Adapter for DiaActr_ElecPsDiagErrorCfgSCB */
#define DIAACTR_ELECPSDIAGERRORCFGSCB_IMPL_DiaActr_ElecPsDiagErrorCfgSCB(DiagSignal, TstPls, Rep) 			\
        DiaActr_ElecPsDiagErrorCfgSCB(DiagSignal,                                                           \
                                    TstPls,                                                                 \
                                    Rep)

#define DiaActr_ElecPsDiagErrorCfgSCBIMPL(DiagSignal, TstPls, Rep) 			                                \
        DiaActr_ElecPsDiagErrorCfgSCB(DiagSignal,                                                           \
                                    TstPls,                                                                 \
                                    Rep)

/* Adapter for DiaActr_ElecPsDiagErrorCfgSCG */
#define DIAACTR_ELECPSDIAGERRORCFGSCG_IMPL_DiaActr_ElecPsDiagErrorCfgSCG(DiagSignal, TstPls, Rep) 			\
        DiaActr_ElecPsDiagErrorCfgSCG(DiagSignal,                                                           \
                                    TstPls,                                                                 \
                                    Rep)

#define DiaActr_ElecPsDiagErrorCfgSCGIMPL(DiagSignal, TstPls, Rep) 			                                \
        DiaActr_ElecPsDiagErrorCfgSCG(DiagSignal,                                                           \
                                    TstPls,                                                                 \
                                    Rep)

/* Adapter for DiaActr_ElecPsDiagErrorCfg */
#define DIAACTR_ELECPSDIAGERRORCFG_IMPL_DiaActr_ElecPsDiagErrorCfg(DiagSignal, TstPls, Rep, ErrorType)    	\
        DiaActr_ElecPsDiagErrorCfg(DiagSignal,                                                              \
                                    TstPls,                                                                 \
                                    Rep,                                                                    \
                                    ErrorType)

#define DiaActr_ElecPsDiagErrorCfgIMPL(DiagSignal, TstPls, Rep, ErrorType)	                                \
        DiaActr_ElecPsDiagErrorCfg(DiagSignal,                                                              \
                                    TstPls,                                                                 \
                                    Rep,                                                                    \
                                    ErrorType)

/* Adapter for DiaActr_ElecPsDiag_InitOL */
#define DIAACTR_ELECPSDIAG_INITOL_IMPL_DiaActr_ElecPsDiag_InitOL(DiagSignal, DFC)    	                    \
        DiaActr_ElecPsDiag_InitOL(DiagSignal, *(DFC))

#define DiaActr_ElecPsDiag_InitOLIMPL(DiagSignal, DFC)	                                                    \
        DiaActr_ElecPsDiag_InitOL(DiagSignal, *(DFC))

/* Adapter for DiaActr_ElecPsDiag_InitOT */
#define DIAACTR_ELECPSDIAG_INITOT_IMPL_DiaActr_ElecPsDiag_InitOT(DiagSignal, DFC)    	                    \
        DiaActr_ElecPsDiag_InitOT(DiagSignal, *(DFC))

#define DiaActr_ElecPsDiag_InitOTIMPL(DiagSignal, DFC)	                                                    \
        DiaActr_ElecPsDiag_InitOT(DiagSignal, *(DFC))

/* Adapter for DiaActr_ElecPsDiag_InitSCB */
#define DIAACTR_ELECPSDIAG_INITSCB_IMPL_DiaActr_ElecPsDiag_InitSCB(DiagSignal, DFC)    	                    \
        DiaActr_ElecPsDiag_InitSCB(DiagSignal, *(DFC))

#define DiaActr_ElecPsDiag_InitSCBIMPL(DiagSignal, DFC)	                                                    \
        DiaActr_ElecPsDiag_InitSCB(DiagSignal, *(DFC))

/* Adapter for DiaActr_ElecPsDiag_InitSCG */
#define DIAACTR_ELECPSDIAG_INITSCG_IMPL_DiaActr_ElecPsDiag_InitSCG(DiagSignal, DFC)    	                    \
        DiaActr_ElecPsDiag_InitSCG(DiagSignal, *(DFC))

#define DiaActr_ElecPsDiag_InitSCGIMPL(DiagSignal, DFC)	                                                    \
        DiaActr_ElecPsDiag_InitSCG(DiagSignal, *(DFC))


/* Adapter for DiaActr_ElecPsDiagErrorInit */
#define DIAACTR_ELECPSDIAGERRORINIT_IMPL_DiaActr_ElecPsDiagErrorInit(DiagSignal, DFC, ErrorType)            \
        DiaActr_ElecPsDiagErrorInit(DiagSignal, *(DFC), ErrorType)

#define DiaActr_ElecPsDiagErrorInitIMPL(DiagSignal, DFC, ErrorType)                                         \
        DiaActr_ElecPsDiagErrorInit(DiagSignal, *(DFC), ErrorType)

/* Adapter for DiaActr_ElecPsDiagInitSig */
#define DIAACTR_ELECPSDIAGINITSIG_IMPL_DiaActr_ElecPsDiagInitSig(DiaActr_signal, SigName, SigType)          \
        DiaActr_ElecPsDiagInitSig(DiaActr_signal, SigName, SigType)

#define DiaActr_ElecPsDiagInitSigIMPL(DiaActr_signal, SigName, SigType)                                     \
        DiaActr_ElecPsDiagInitSig(DiaActr_signal, SigName, SigType)

/* Adapter for DiaActr_ElecPsDiagInit */
#define DIAACTR_ELECPSDIAGINIT_IMPL_DiaActr_ElecPsDiagInit(DiaActr_signal, SigName, SigType)                \
        DiaActr_ElecPsDiagInit(DiaActr_signal, SigName, SigType)

#define DiaActr_ElecPsDiagInitIMPL(DiaActr_signal, SigName, SigType)                                        \
        DiaActr_ElecPsDiagInit(DiaActr_signal, SigName, SigType)

/* Adapter for DiaActr_ElecPsDiag */
#define DIAACTR_ELECPSDIAG_IMPL_DiaActr_ElecPsDiag(DiaActr_signal, SigParams, dT)                           \
        DiaActr_ElecPsDiag(DiaActr_signal, SigParams, dT)

#define DiaActr_ElecPsDiagIMPL(DiaActr_signal, SigParams, dT)                                               \
        DiaActr_ElecPsDiag(DiaActr_signal, SigParams, dT)


/* Adapter for DiaActr_ElecPsDiag_NrTestPlsExs */
#define DIAACTR_ELECPSDIAG_NRTESTPLSEXS_IMPL_DiaActr_ElecPsDiag_NrTestPlsExs(DiaActr_signal, SigParams)     \
        DiaActr_ElecPsDiag_NrTestPlsExs(DiaActr_signal, SigParams)

#define DiaActr_ElecPsDiag_NrTestPlsExsIMPL(DiaActr_signal, SigParams)                                      \
        DiaActr_ElecPsDiag_NrTestPlsExs(DiaActr_signal, SigParams)


/* Adapter for DiaActr_ElecPsDiagCfgDiag */
#define DIAACTR_ELECPSDIAGCFGDIAG_IMPL_DiaActr_ElecPsDiagCfgDiag(DiaActr_signal, DiagDi)                    \
        DiaActr_ElecPsDiagCfgDiag(DiaActr_signal, DiagDi)

#define DiaActr_ElecPsDiagCfgDiagIMPL(DiaActr_signal, DiagDi)                                               \
        DiaActr_ElecPsDiagCfgDiag(DiaActr_signal, DiagDi)

/* Adapter for DiaActr_ElecPsDiagCfgRep */
#define DIAACTR_ELECPSDIAGCFGREP_IMPL_DiaActr_ElecPsDiagCfgRep(DiaActr_signal, RepDi)                       \
        DiaActr_ElecPsDiagCfgRep(DiaActr_signal, RepDi)

#define DiaActr_ElecPsDiagCfgRepIMPL(DiaActr_signal, RepDi)                                                 \
        DiaActr_ElecPsDiagCfgRep(DiaActr_signal, RepDi)

/* Adapter for DiaActr_ElecPsDiagCfgTstPls */
#define DIAACTR_ELECPSDIAGCFGTSTPLS_IMPL_DiaActr_ElecPsDiagCfgTstPls(DiaActr_signal, TstPlsDi)              \
        DiaActr_ElecPsDiagCfgTstPls(DiaActr_signal, TstPlsDi)

#define DiaActr_ElecPsDiagCfgTstPlsIMPL(DiaActr_signal, TstPlsDi)                                           \
        DiaActr_ElecPsDiagCfgTstPls(DiaActr_signal, TstPlsDi)

/* Adapter for DiaActr_ElecPsDiag_EvlnShtOff */
#define DIAACTR_ELECPSDIAG_EVLNSHTOFF_IMPL_DiaActr_ElecPsDiag_EvlnShtOff(DiaActr_signal)                    \
        DiaActr_ElecPsDiag_EvlnShtOff(DiaActr_signal)

#define DiaActr_ElecPsDiag_EvlnShtOffIMPL(DiaActr_signal)                                                   \
        DiaActr_ElecPsDiag_EvlnShtOff(DiaActr_signal)

/* Adapter for DiaActr_ElecPsDiag_ExecTstPls */
#define DIAACTR_ELECPSDIAG_EXECTSTPLS_IMPL_DiaActr_ElecPsDiag_ExecTstPls(DiaActr_signal)                    \
        DiaActr_ElecPsDiag_ExecTstPls(DiaActr_signal)

#define DiaActr_ElecPsDiag_ExecTstPlsIMPL(DiaActr_signal)                                                   \
        DiaActr_ElecPsDiag_ExecTstPls(DiaActr_signal)

/* Adapter for DiaActr_ElecPsDiag_stErrInfo */
#define DIAACTR_ELECPSDIAG_STERRINFO_IMPL_DiaActr_ElecPsDiag_stErrInfo(DiaActr_signal)                      \
        DiaActr_ElecPsDiag_stErrInfo(DiaActr_signal)

#define DiaActr_ElecPsDiag_stErrInfoIMPL(DiaActr_signal)                                                    \
        DiaActr_ElecPsDiag_stErrInfo(DiaActr_signal)

#ifndef DIAACTR_DIAGSIGCLASS_T_IMPL
#define DIAACTR_DIAGSIGCLASS_T_IMPL  DiaActr_DiagSigClass_t
#endif 

#ifndef DIAACTR_SIGPRMCLASS_T_IMPL
#define DIAACTR_SIGPRMCLASS_T_IMPL   DiaActr_SigPrmClass_t
#endif

#endif  /*#ifndef _CODEGEN_DEDIA_DIAACTR_H*/

