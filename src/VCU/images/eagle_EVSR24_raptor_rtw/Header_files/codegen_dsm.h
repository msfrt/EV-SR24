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
 * $Filename__:codegen_dsm.h$
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
 * $Date______:08.10.2013$
 * $Class_____:SWHDR$
 * $Name______:codegen_dsm$
 * $Variant___:2.9.0$
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
 * 2.9.0; 0     08.10.2013 DAJ2KOR
 *   To support ASL 6.2.22  released with ASCET 6.1.4 RB-DGS 1.0
 * 
 * 1.3.1; 0     06.08.2013 DAJ2KOR
 *   Different macros added for DS and GS implementation for DSM_GetDFCDebTmr.
 * 
 * 1.3.0; 0     18.06.2013 DAJ2KOR
 *   Macro added for DSM_GetDFCDebTmr class 
 *   MAXSINT32 in DSM_RepTstRsltIMPL function changed to neumaric value (524287)
 * 
 * 1.2.0; 0     12.03.2013 DAJ2KOR
 *   Removal of Misra warnings for DSM class DSM_Visible_Check_Rep
 * 
 * 1.1.0; 0     10.01.2013 DAJ2KOR
 *   Macros for new DSM classes added.
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_DSM_H
#define _CODEGEN_DSM_H

/*************************************************************************/
/*                                                                       */
/*            DSM adapter for code generated files                       */
/*                                                                       */
/*************************************************************************/

#include "dsm.h"

/*************************************************************************/
/* Mx17_DSM	/ DSM_Types                                                  */
/*************************************************************************/
typedef const DSM_DSQType DSM_DSQTYPE_IMPL;
typedef const DSM_DFCType DSM_DFCTYPE_IMPL;
typedef const DSM_DTRType DSM_DTRTYPE_IMPL;
typedef const DSM_FIdType DSM_FIDTYPE_IMPL;
typedef const DSM_SFCType DSM_SFCTYPE_IMPL;
typedef const DSM_TRGType DSM_TRGTYPE_IMPL;
typedef DSM_InfoDFCType DSM_INFODFCTYPE_IMPL;


/*************************************************************************/
/* DFES adapter                                                          */
/*************************************************************************/

/* DFES_DFCClrRequest */
#define DFES_DFCCLRREQUEST_IMPL_DFES_DFCClrRequest(DFC_XYZ)                   \
        (DFES_DFCClrRequest(*(DFC_XYZ)))
#define DFES_DFCClrRequestIMPL(DFC_XYZ)                                       \
        (DFES_DFCClrRequest(*(DFC_XYZ)))

/* DFES_DFCClrRequest (Array) */
#define DFES_DFCCLRREQUEST_IMPLARRAY_DFES_DFCClrRequest(DFC_XYZ)              \
        (DFES_DFCClrRequest((DFC_XYZ)))
#define DFES_DFCClrRequestIMPLARRAY(DFC_XYZ)                                  \
        (DFES_DFCClrRequest((DFC_XYZ)))

/*************************************************************************/
/* DFP adapter                                                           */
/*************************************************************************/

/* getSfp */
#define SFP_IMPL_getSfp(x,y)                     ((x)=getSfp(y))

/* repSfp */
#define SFP_IMPL_repSfp(x,y)                     (repSfp(y,x))

/* getErf */
#define GETERF_IMPL_getErf(x)                    (getErf(x))

/* getZyf */
#define GETZYF_IMPL_getZyf(x)                    (getZyf(x))

/* getClf */
#define GETCLF_IMPL_getClf(x)                    (getClf(x))

/* getDfpPrimary */
#define GETDFPPRIMARY_IMPL_getDfpPrimary(x)      (getDfpPrimary(x))

/* getSfpErf */
#define GETSFPERF_IMPL_getSfpErf(x)              (getSfpErf(x))

/* getSfpZyf */
#define GETSFPZYF_IMPL_getSfpZyf(x)              (getSfpZyf(x))

/* getSfpTyp */
#define GETSFPTYP_IMPL_getSfpTyp(x)              (getSfpTyp(x))

/* getSfpMax */
#define GETSFPMAX_IMPL_getSfpMax(x)              (getSfpMax(x))

/* getSfpMin */
#define GETSFPMIN_IMPL_getSfpMin(x)              (getSfpMin(x))

/* getSfpSig */
#define GETSFPSIG_IMPL_getSfpSig(x)              (getSfpSig(x))

/* getSfpNpl */
#define GETSFPNPL_IMPL_getSfpNpl(x)              (getSfpNpl(x))

/* getSfpBak */
#define GETSFPBAK_IMPL_getSfpBak(x)              (getSfpBak(x))

/* sfpMaxError */
#define SFPMAXERROR_IMPL_sfpMaxError(x)                                       \
        do{                                                                   \
            setErfMax(x);                                                     \
            setSfpZyf(x);                                                     \
        } while(0)

/* sfpMaxErrorNoZyf */
#define SFPMAXERRORNOZYF_IMPL_sfpMaxErrorNoZyf(x)                             \
        do{                                                                   \
            setErfMax(x);                                                     \
        } while(0)

/* sfpMinError */
#define SFPMINERROR_IMPL_sfpMinError(x)                                       \
        do{                                                                   \
            setErfMin(x);                                                     \
            setSfpZyf(x);                                                     \
        } while(0)

/* sfpMinErrorNoZyf */
#define SFPMINERRORNOZYF_IMPL_sfpMinErrorNoZyf(x)                             \
        do{                                                                   \
            setErfMin(x);                                                     \
        } while(0)

/* sfpSigError */
#define SFPSIGERROR_IMPL_sfpSigError(x)                                       \
        do{                                                                   \
            setErfSig(x);                                                     \
            setSfpZyf(x);                                                     \
        } while(0)

/* sfpSigErrorNoZyf */
#define SFPSIGERRORNOZYF_IMPL_sfpSigErrorNoZyf(x)                             \
        do{                                                                   \
            setErfSig(x);                                                     \
        } while(0)

/* sfpNplError */
#define SFPNPLERROR_IMPL_sfpNplError(x)                                       \
        do{                                                                   \
            setErfNpl(x);                                                     \
            setSfpZyf(x);                                                     \
        } while(0)

/* sfpNplErrorNoZyf */
#define SFPNPLERRORNOZYF_IMPL_sfpNplErrorNoZyf(x)                             \
        do{                                                                   \
            setErfNpl(x);                                                     \
        } while(0)

/* sfpClrError */
#define SFPCLRERROR_IMPL_sfpClrError(x)          (clrErfTyp(x))

/* sfpHealing */
#define SFPHEALING_IMPL_sfpHealing(x)                                         \
        do{                                                                   \
            clrErfTyp(x);                                                     \
            setSfpZyf(x);                                                     \
        } while(0)

/* sfpSetCycle */
#define SFPSETCYCLE_IMPL_sfpSetCycle(x)          (setSfpZyf(x))

/* sfpSetBackup */
#define SFPSETBACKUP_IMPL_sfpSetBackup(x)        (setSfpBak(x))

/* sfpClrBackup */
#define SFPCLRBACKUP_IMPL_sfpClrBackup(x)        (clrSfpBak(x))

/* sfpSetBe */
#define SFPSETBE_IMPL_sfpSetBe(x)                (setSfpBe(x))

/* sfpClrBe */
#define SFPCLRBE_IMPL_sfpClrBe(x)                (clrSfpBe(x))

/* sfpSetFt */
#define SFPSETFT_IMPL_sfpSetFt(x)                (setSfpFa(x))

/* sfpClrFt */
#define SFPCLRFT_IMPL_sfpClrFt(x)                (clrSfpFa(x))

/* sfpSetFFR */
#define SFPSETFFR_IMPL_sfpSetFFR(x)              (setSfpFFR(x))

/* sfpClrFFR */
#define SFPCLRFFR_IMPL_sfpClrFFR(x)              (clrSfpFFR(x))

/* repSumDfp */
#define REPSUMDFP_IMPL_repSumDfp(x)              (repSumDfp(x))

/* EBY-665 : Addition of repSumDfpDGS */
#define REPSUMDFPDGS_IMPL_repSumDfpDGS(x)		 (dfp_repSum (x))             

/* getInfoDfp */
#define GETINFODFP_IMPL_getInfoDfp(x,y)          (getInfoDfp(y,x))

/* getInfoErfAct */
#define GETINFOERFACT_IMPL_getInfoErfAct(x)      (getInfoErfAct((*(x))))

/* getInfoErfPrl */
#define GETINFOERFPRL_IMPL_getInfoErfPrl(x)      (getInfoErfPrl((*(x))))

/* getInfoActMax */
#define GETINFOACTMAX_IMPL_getInfoActMax(x)      (getInfoActMax((*(x))))

/* getInfoActMin */
#define GETINFOACTMIN_IMPL_getInfoActMin(x)      (getInfoActMin((*(x))))

/* getInfoActNpl */
#define GETINFOACTNPL_IMPL_getInfoActNpl(x)      (getInfoActNpl((*(x))))

/* getInfoActSig */
#define GETINFOACTSIG_IMPL_getInfoActSig(x)      (getInfoActSig((*(x))))

/* getInfoDauer */
#define GETINFODAUER_IMPL_getInfoDauer(x)        (getInfoDauer((*(x))))

/* getInfoIniMax */
#define GETINFOINIMAX_IMPL_getInfoIniMax(x)      (getInfoIniMax((*(x))))

/* getInfoIniMin */
#define GETINFOINIMIN_IMPL_getInfoIniMin(x)      (getInfoIniMin((*(x))))

/* getInfoIniNpl */
#define GETINFOININPL_IMPL_getInfoIniNpl(x)      (getInfoIniNpl((*(x))))

/* getInfoIniSig */
#define GETINFOINISIG_IMPL_getInfoIniSig(x)      (getInfoIniSig((*(x))))

/* getInfoValLast */
#define GETINFOVALLAST_IMPL_getInfoValLast(x)    (getInfoValLast((*(x))))

/* getInfoValEver */
#define GETINFOVALEVER_IMPL_getInfoValEver(x)    (getInfoValEver((*(x))))

/* getInfoMil */
#define GETINFOMIL_IMPL_getInfoMil(x)            (getInfoMil((*(x))))

/* getInfoScatt */
#define GETINFOSCATT_IMPL_getInfoScatt(x)        (getInfoScatt((*(x))))

/* getInfoZyfAct */
#define GETINFOZYFACT_IMPL_getInfoZyfAct(x)      (getInfoZyfAct((*(x))))

/* fcmTrig */
#define FCMTRIG_IMPL_fcmTrig(x)                  (fcmTrig(&(x)))

/* getFcmFrzExists */
#define GETFCMFRZEXIST_IMPL_getFcmFrzExists(x,y) (getFcmFrzExists((x),(y)))

/* getFcmEngineSpeedP0C */
#define GETFCMENGINESPEEDP0C_IMPL_getFcmEngineSpeedP0C(x,y)                   \
        (getFcmEngineSpeedP0C((x),(y)))

/* getFcmLoadCondP04 */
#define GETFCMLOADCONDP04_IMPL_getFcmLoadCondP04(x,y)                         \
        (getFcmLoadCondP04((x),(y)))

/* getFcmCoolTempP05 */
#define GETFCMCOOLTEMPP05_IMPL_getFcmCoolTempP05(x,y)                         \
        (getFcmCoolTempP05((x),(y)))

/*************************************************************************/
/* DIUMPR adapter                                                        */
/*************************************************************************/

/* DIUMPR_LckDenPhy */
#define DIUMPR_LCKDENPHY_IMPL_DIUMPR_LckDenPhy(FID_XYZ)                       \
        (DIUMPR_LckDenPhy(*(FID_XYZ)))
#define DIUMPR_LckDenPhyIMPL(FID_XYZ)                                         \
        (DIUMPR_LckDenPhy(*(FID_XYZ)))

/* DIUMPR_RlsDenPhy */
#define DIUMPR_RLSDENPHY_IMPL_DIUMPR_RlsDenPhy(FID_XYZ)                       \
        (DIUMPR_RlsDenPhy(*(FID_XYZ)))
#define DIUMPR_RlsDenPhyIMPL(FID_XYZ)                                         \
        (DIUMPR_RlsDenPhy(*(FID_XYZ)))

/* DIUMPR_RlsNum */
#define DIUMPR_RLSNUM_IMPL_DIUMPR_RlsNum(FID_XYZ)                             \
        (DIUMPR_RlsNum(*(FID_XYZ)))
#define DIUMPR_RlsNumIMPL(FID_XYZ)                                            \
        (DIUMPR_RlsNum(*(FID_XYZ)))

/* DIUMPR_SetInh */
#define DIUMPR_SETINH_IMPL_DIUMPR_SetInh(FID_XYZ)                             \
        (DIUMPR_SetInh(*(FID_XYZ)))
#define DIUMPR_SetInhIMPL(FID_XYZ)                                            \
        (DIUMPR_SetInh(*(FID_XYZ)))

/* DIUMPR_ClrInh */
#define DIUMPR_CLRINH_IMPL_DIUMPR_ClrInh(FID_XYZ)                             \
        (DIUMPR_ClrInh(*(FID_XYZ)))
#define DIUMPR_ClrInhIMPL(FID_XYZ)                                            \
        (DIUMPR_ClrInh(*(FID_XYZ)))

/* DIUMPR_GetCfgRatioDenInc */
#define DIUMPR_GETCFGRATIODENINC_IMPL_DIUMPR_GetCfgRatioDenInc(FID_XYZ)       \
        (DIUMPR_GetCfgRatioDenInc(*(FID_XYZ)))
#define DIUMPR_GetCfgRatioDenIncIMPL(FID_XYZ)                                 \
        (DIUMPR_GetCfgRatioDenInc(*(FID_XYZ)))

/* DIUMPR_GetCfgRatioNumInc */
#define DIUMPR_GETCFGRATIONUMINC_IMPL_DIUMPR_GetCfgRatioNumInc(FID_XYZ)       \
        (DIUMPR_GetCfgRatioNumInc(*(FID_XYZ)))
#define DIUMPR_GetCfgRatioNumIncIMPL(FID_XYZ)                                 \
        (DIUMPR_GetCfgRatioNumInc(*(FID_XYZ)))

/*************************************************************************/
/* DSCHED adapter                                                        */
/*************************************************************************/

/* DSCHED_getInhib */
#define DSCHED_GETINHIB_IMPL_DSCHED_getInhib(FID_XYZ)                         \
        (DSCHED_getInhib(*(FID_XYZ)))
#define DSCHED_getInhibIMPL(FID_XYZ)                                          \
        (DSCHED_getInhib(*(FID_XYZ)))

/* DSCHED_resetActive */
#define DSCHED_RESETACTIVE_IMPL_DSCHED_resetActive(FID_XYZ)                   \
        (DSCHED_resetActive(*(FID_XYZ)))
#define DSCHED_resetActiveIMPL(FID_XYZ)                                       \
        (DSCHED_resetActive(*(FID_XYZ)))

/* DSCHED_resetReady */
#define DSCHED_RESETREADY_IMPL_DSCHED_resetReady(FID_XYZ)                     \
        (DSCHED_resetReady(*(FID_XYZ)))
#define DSCHED_resetReadyIMPL(FID_XYZ)                                        \
        (DSCHED_resetReady(*(FID_XYZ)))

/* DSCHED_setActive */
#define DSCHED_SETACTIVE_IMPL_DSCHED_setActive(FID_XYZ)                       \
        (DSCHED_setActive(*(FID_XYZ)))
#define DSCHED_setActiveIMPL(FID_XYZ)                                         \
        (DSCHED_setActive(*(FID_XYZ)))

/* DSCHED_setReady */
#define DSCHED_SETREADY_IMPL_DSCHED_setReady(FID_XYZ)                         \
        (DSCHED_setReady(*(FID_XYZ)))
#define DSCHED_setReadyIMPL(FID_XYZ)                                          \
        (DSCHED_setReady(*(FID_XYZ)))

/* DSCHED_setSleep */
#define DSCHED_SETSLEEP_IMPL_DSCHED_setSleep(FID_XYZ)                         \
        (DSCHED_setSleep(*(FID_XYZ)))
#define DSCHED_setSleepIMPL(FID_XYZ)                                          \
        (DSCHED_setSleep(*(FID_XYZ)))

/* DSCHED_setUrgency */
#define DSCHED_SETURGENCY_IMPL_DSCHED_setUrgency(FID_XYZ, URGENCY)            \
        (DSCHED_setUrgency(*(FID_XYZ), (URGENCY)))
#define DSCHED_setUrgencyIMPL(FID_XYZ, URGENCY)                               \
        (DSCHED_setUrgency(*(FID_XYZ), (URGENCY)))

/* getDscPermission */
#define GETDSCPERMISSION_IMPL_getDscPermission(x)                             \
        (getDscPermission(x))

/* getDscActive */
#define GETDSCACTIVE_IMPL_getDscActive(x)        (getDscActive(x))

/* resetDscActive */
#define RESETDSCACTIVE_IMPL_resetDscActive(x)    (resetDscActive(x))

/* resetDscReady */
#define RESETDSCREADY_IMPL_resetDscReady(x)      (resetDscReady(x))

/* setDscUrgency */
#define SETDSCURGENCY_IMPL_setDscUrgency(x,y)    (setDscUrgency(x,y))

/* setDscActive */
#define SETDSCACTIVE_IMPL_setDscActive(x)        (setDscActive(x))

/* setDscReady */
#define SETDSCREADY_IMPL_setDscReady(x)          (setDscReady(x))

/* setDscSleep */
#define SETDSCSLEEP_IMPL_setDscSleep(x)          (setDscSleep(x))

/* setImpNumCompl */
#define SETIMPNUMCOMPL_IMPL_setImpNumCompl(x)    (setImpNumCompl(x))

/* setImpDenInhPy */
#define SETIMPDENINHPY_IMPL_setImpDenInhPy(x)    (setImpDenInhPy(x))

/* getDscInhib */
#define GETDSCINHIB_IMPL_getDscInhib(x)          (getDscInhib(x))

/* clrImpDenInhPy */
#define CLRIMPDENINHPY_IMPL_clrImpDenInhPy(x)    (clrImpDenInhPy(x))

/* setImpNDInhE */
#define SETIMPNDINHE_IMPL_setImpNDInhE(x)        (setImpNDInhE(x))

/* clrImpNDInhE */
#define CLRIMPNDINHE_IMPL_clrImpNDInhE(x)        (clrImpNDInhE(x))

/* getImpDenCnt */
#define GETIMPDENCNT_IMPL_getImpDenCnt(x)        (getImpDenCnt(x))

/* getImpNumCnt */
#define GETIMPNUMCNT_IMPL_getImpNumCnt(x)        (getImpNumCnt(x))

/* setDis41 */
#define SETDIS41_IMPL_setDis41(x)                (setDis41((DfpType)(x)))

/* clrDis41 */
#define CLRDIS41_IMPL_clrDis41(x)                (clrDis41((DfpType)(x)))

/* setComp41 */
#define SETCOMP41_IMPL_setComp41(x)              (setComp41((DfpType)(x)))

/*************************************************************************/
/* DSM Array adapter                                                     */
/*************************************************************************/

/* DSM_DFCArray */
#define DSM_DFCARRAY_IMPL_DSM_DFCArray(DFC_XYZ, INDEX)                        \
        (DSM_DFCArray(*(DFC_XYZ), (uint)(INDEX)))
#define DSM_DFCArrayIMPL(DFC_XYZ, INDEX)                                      \
        (DSM_DFCArray(*(DFC_XYZ), (uint)(INDEX)))

/* DSM_DSQArray */
#define DSM_DSQARRAY_IMPL_DSM_DSQArray(DSQ_XYZ, INDEX)                        \
        (DSM_DSQArray(*(DSQ_XYZ), (uint)(INDEX)))
#define DSM_DSQArrayIMPL(DSQ_XYZ, INDEX)                                      \
        (DSM_DSQArray(*(DSQ_XYZ), (uint)(INDEX)))

/* DSM_DTRArray */
#define DSM_DTRARRAY_IMPL_DSM_DTRArray(DTR_XYZ, INDEX)                        \
        (DSM_DTRArray(*(DTR_XYZ), (uint)(INDEX)))
#define DSM_DTRArrayIMPL(DTR_XYZ, INDEX)                                      \
        (DSM_DTRArray(*(DTR_XYZ), (uint)(INDEX)))


/*************************************************************************/
/* DSM adapter                                                           */
/*************************************************************************/

/* DSM_GetCheckStatus */
#define DSM_GETCHECKSTATUS_IMPL_DSM_GetCheckStatus(DFC_XYZ)                   \
        (DSM_GetCheckStatus(*(DFC_XYZ)))
#define DSM_GetCheckStatusIMPL(DFC_XYZ)                                       \
        (DSM_GetCheckStatus(*(DFC_XYZ)))

/* DSM_GetCheckStatus (Array) */
#define DSM_GETCHECKSTATUS_IMPLARRAY_DSM_GetCheckStatus(DFC_XYZ)              \
        (DSM_GetCheckStatus((DFC_XYZ)))
#define DSM_GetCheckStatusIMPLARRAY(DFC_XYZ)                                  \
        (DSM_GetCheckStatus((DFC_XYZ)))

/* DSM_GetSFCDeb */
#define DSM_GETSFCDEB_IMPL_DSM_GetSFCDeb(SFC_XYZ)                             \
        (DSM_GetSFCDeb(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCDebIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCDeb(((DSM_SFCType)(SFC_XYZ))))

/* DSM_GetSFCDeb */
#define DSM_GETSFCERD_IMPL_DSM_GetSFCErD(SFC_XYZ)                             \
        (DSM_GetSFCErD(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCErDIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCErD(((DSM_SFCType)(SFC_XYZ))))

/* DSM_GetSFCErr */
#define DSM_GETSFCERR_IMPL_DSM_GetSFCErr(SFC_XYZ)                             \
        (DSM_GetSFCErr(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCErrIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCErr(((DSM_SFCType)(SFC_XYZ))))

/* DSM_GetSFCLcy */
#define DSM_GETSFCLCY_IMPL_DSM_GetSFCLcy(SFC_XYZ)                             \
        (DSM_GetSFCLcy(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCLcyIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCLcy(((DSM_SFCType)(SFC_XYZ))))

/* DSM_GetSFCLcy */
#define DSM_GETSFCMEM_IMPL_DSM_GetSFCMem(SFC_XYZ)                             \
        (DSM_GetSFCMem(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCMemIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCMem(((DSM_SFCType)(SFC_XYZ))))

/* DSM_GetSFCTSC */
#define DSM_GETSFCTSC_IMPL_DSM_GetSFCTSC(SFC_XYZ)                             \
        (DSM_GetSFCTSC(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCTSCIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCTSC(((DSM_SFCType)(SFC_XYZ))))

/* DSM_GetSFCTst */
#define DSM_GETSFCTST_IMPL_DSM_GetSFCTst(SFC_XYZ)                             \
        (DSM_GetSFCTst(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCTstIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCTst(((DSM_SFCType)(SFC_XYZ))))

/* DSM_GetSFCZpf */
#define DSM_GETSFCZPF_IMPL_DSM_GetSFCZpf(SFC_XYZ)                             \
        (DSM_GetSFCZpf(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCZpfIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCZpf(((DSM_SFCType)(SFC_XYZ))))

/* DSM_GetSFCZyf */
#define DSM_GETSFCZYF_IMPL_DSM_GetSFCZyf(SFC_XYZ)                             \
        (DSM_GetSFCZyf(((DSM_SFCType)(SFC_XYZ))))
#define DSM_GetSFCZyfIMPL(SFC_XYZ)                                            \
        (DSM_GetSFCZyf(((DSM_SFCType)(SFC_XYZ))))

/* DSM_DebRepCheck */
#define DSM_DEBREPCHECK_IMPL_DSM_DebRepCheck(DFC_XYZ, FAULT, ATTRIBUTES, TIDIFF) \
        (DSM_DebRepCheck(*(DFC_XYZ), (uint)(FAULT), (uint)(ATTRIBUTES), (TIDIFF)))
#define DSM_DebRepCheckIMPL(DFC_XYZ, FAULT, ATTRIBUTES, TIDIFF)               \
        (DSM_DebRepCheck(*(DFC_XYZ), (uint)(FAULT), (uint)(ATTRIBUTES), (TIDIFF)))

/* DSM_DebRepCheck (Array) */
#define DSM_DEBREPCHECK_IMPLARRAY_DSM_DebRepCheck(DFC_XYZ, FAULT, ATTRIBUTES, TIDIFF) \
        (DSM_DebRepCheck((DFC_XYZ), (uint)(FAULT), (uint)(ATTRIBUTES), (TIDIFF)))
#define DSM_DebRepCheckIMPLARRAY(DFC_XYZ, FAULT, ATTRIBUTES, TIDIFF)          \
        (DSM_DebRepCheck((DFC_XYZ), (uint)(FAULT), (uint)(ATTRIBUTES), (TIDIFF)))

/* DSM_DebRepCheck_simple*/
#define DSM_DEBREPCHECK_SIMPLE_IMPL_DSM_DebRepCheck_simple(DFC_XYZ, STERR , TIDIFF) \
        (void)(DSM_DebRepCheck(*(DFC_XYZ), (uint)((STERR) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00), \
        	(uint)(0), (TIDIFF)))
#define DSM_DebRepCheck_simpleIMPL(DFC_XYZ, STERR , TIDIFF)               \
        (void)(DSM_DebRepCheck(*(DFC_XYZ), (uint)((STERR) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00), \
        	(uint)(0), (TIDIFF)))

/* DSM_DebRepCheck_simple (Array) */
#define DSM_DEBREPCHECK_SIMPLE_IMPLARRAY_DSM_DebRepCheck_simple(DFC_XYZ, STERR , TIDIFF) \
        (void)(DSM_DebRepCheck((DFC_XYZ), (uint)((STERR) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00), \
        	(uint)(0), (TIDIFF)))
#define DSM_DebRepCheck_simpleIMPLARRAY(DFC_XYZ, STERR , TIDIFF)               \
        (void)(DSM_DebRepCheck((DFC_XYZ), (uint)((STERR) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00), \
        	(uint)(0), (TIDIFF)))

/* DSM_RepCheck_simple */
#define DSM_REPCHECK_SIMPLE_IMPL_DSM_RepCheck_simple(DFC_XYZ,FAULTDETECTED) \
        (DSM_RepCheck(*(DFC_XYZ),(uint)((FAULTDETECTED) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00),        \
        	(uint)(DSM_TST_READY),(uint)((FAULTDETECTED) ? DSM_DEBOUNCE_PERCENT_100 : DSM_DEBOUNCE_PERCENT_00), \
        	(uint)(0)))
#define DSM_RepCheck_simpleIMPL(DFC_XYZ,FAULTDETECTED) \
        (DSM_RepCheck(*(DFC_XYZ),(uint)((FAULTDETECTED) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00),        \
        	(uint)(DSM_TST_READY),(uint)((FAULTDETECTED) ? DSM_DEBOUNCE_PERCENT_100 : DSM_DEBOUNCE_PERCENT_00), \
        	(uint)(0)))
        
/* DSM_RepCheck_simple (Array) */
#define DSM_REPCHECK_SIMPLE_IMPLARRAY_DSM_RepCheck_simple(DFC_XYZ,FAULTDETECTED) \
        (DSM_RepCheck((DFC_XYZ),(uint)((FAULTDETECTED) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00),         \
        	(uint)(DSM_TST_READY),(uint)((FAULTDETECTED) ? DSM_DEBOUNCE_PERCENT_100 : DSM_DEBOUNCE_PERCENT_00), \
        	(uint)(0)))  
#define DSM_RepCheck_simpleIMPLARRAY(DFC_XYZ,FAULTDETECTED) \
        (DSM_RepCheck((DFC_XYZ),(uint)((FAULTDETECTED) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00),         \
        	(uint)(DSM_TST_READY),(uint)((FAULTDETECTED) ? DSM_DEBOUNCE_PERCENT_100 : DSM_DEBOUNCE_PERCENT_00), \
        	(uint)(0)))	

			
/* DSM_GetDFCDisblSt */			
#define DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DFCDisblSt)                         \
        (DSM_GetDFCDisblSt((DFCDisblSt)))
#define DSM_GETDFCDISBLSTIMPL(DFCDisblSt)                                     \
        (DSM_GetDFCDisblSt((DFCDisblSt)))
		
/* DSM_DFCTypeToIdx */
#define DSM_DFCTYPETOIDX_IMPL_idxDFC(DFC_XYZ)                                 \
        (DSM_DFCTypeToIdx(*(DFC_XYZ)))
#define DSM_DFCTYPETOIDXIMPL(DFC_XYZ)                                         \
        (DSM_DFCTypeToIdx(*(DFC_XYZ)))
		
		
/* DSM_DebRepCheckRet_simple */
INLINE_FUNCTION uint8 DSM_DebRepCheckRet_simple(DSM_DFCTYPE_IMPL DFC_XYZ, uint8 STERR , uint32 TIDIFF)
{
  /* temp. variables */
  uint8 stXYZ;
  uint8 locvar;

  stXYZ = (uint8)DSM_DebRepCheckIMPL(&(DFC_XYZ), ((STERR) ? DSM_FAULT_PERCENT_100 : DSM_FAULT_PERCENT_00), 0U, TIDIFF);

#ifdef DDRC_DTRUPDSUP_SY
  #if (DDRC_DTRUPDSUP_SY > 0)
  (locvar = (uint8)((SrvB_GetBit(stXYZ, DSM_ST_DEB_DTR_BIT)) && 
  				(DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DSM_DFCTYPETOIDX_IMPL_idxDFC(&(DFC_XYZ))) == 0)));
  #else
  (locvar = (uint8)((!SrvB_GetBit(stXYZ, DSM_ST_DEB_PRELIM_HEAL_BIT)) && 
  				(!SrvB_GetBit(stXYZ, DSM_ST_DEB_PRELIM_DEF_BIT)) && 
  				(SrvB_GetBit(stXYZ, DSM_ST_DEB_TST_BIT)) && 
  				(DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DSM_DFCTYPETOIDX_IMPL_idxDFC(&(DFC_XYZ))) == 0)));
  #endif
#else
  (locvar = (uint8)((!SrvB_GetBit(stXYZ, DSM_ST_DEB_PRELIM_HEAL_BIT)) && 
  				(!SrvB_GetBit(stXYZ, DSM_ST_DEB_PRELIM_DEF_BIT)) && 
  				(SrvB_GetBit(stXYZ, DSM_ST_DEB_TST_BIT)) && 
  				(DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DSM_DFCTYPETOIDX_IMPL_idxDFC(&(DFC_XYZ))) == 0)));
#endif
  return locvar;
}

#define DSM_DebRepCheckRet_simpleIMPL(DFC_XYZ, STERR, TIDIFF) \
       (DSM_DebRepCheckRet_simple(*(DFC_XYZ), (uint8)(STERR), TIDIFF))
#define DSM_DEBREPCHECKRET_SIMPLE_IMPL_DSM_DebRepCheckRet_simple(DFC_XYZ,STERR, TIDIFF) \
       (DSM_DebRepCheckRet_simple(*(DFC_XYZ), (uint8)(STERR) , TIDIFF))
	   	
/* DSM_ResetDebRep */
#define DSM_RESETDEBREP_IMPL_DSM_ResetDebRep(DFC_XYZ, FAULT, ATTRIBUTES)      \
        (DSM_ResetDebRep(*(DFC_XYZ), (uint)(FAULT), (uint)(ATTRIBUTES)))
#define DSM_RESETDEBREPIMPL(DFC_XYZ, FAULT, ATTRIBUTES)                       \
        (DSM_ResetDebRep(*(DFC_XYZ),(uint)(FAULT),(uint)(ATTRIBUTES)))

/* DSM_ResetDebRep (Array) */
#define DSM_RESETDEBREP_IMPLARRAY_DSM_ResetDebRep(DFC_XYZ,FAULT,ATTRIBUTES)   \
        (DSM_ResetDebRep((DFC_XYZ), (uint)(FAULT), (uint)(ATTRIBUTES)))
#define DSM_RESETDEBREPIMPLARRAY(DFC_XYZ, FAULT, ATTRIBUTES)                  \
        (DSM_ResetDebRep((DFC_XYZ), (uint)(FAULT), (uint)(ATTRIBUTES)))

/* DSM_GetDebStatus */
#define DSM_GETDEBSTATUS_IMPL_DSM_GetDebStatus(DFC_XYZ)                       \
        (DSM_GetDebStatus(*(DFC_XYZ)))
#define DSM_GetDebStatusIMPL(DFC_XYZ)                                         \
        (DSM_GetDebStatus(*(DFC_XYZ)))

/* DSM_GetDebStatus (Array) */
#define DSM_GETDEBSTATUS_IMPLARRAY_DSM_GetDebStatus(DFC_XYZ)                  \
        (DSM_GetDebStatus((DFC_XYZ)))
#define DSM_GetDebStatusIMPLARRAY(DFC_XYZ)                                    \
        (DSM_GetDebStatus((DFC_XYZ)))

/* DSM_ResetDebAndClearDFC */
#define DSM_RESETDEBANDCLEARDFC_IMPL_DSM_ResetDebAndClearDFC(DFC_XYZ)         \
        (DSM_ResetDebAndClearDFC(*(DFC_XYZ)))
#define DSM_ResetDebAndClearDFCIMPL(DFC_XYZ)                                  \
        (DSM_ResetDebAndClearDFC(*(DFC_XYZ)))

/* DSM_ResetDebAndClearDFC (Array) */
#define DSM_RESETDEBANDCLEARDFC_IMPLARRAY_DSM_ResetDebAndClearDFC(DFC_XYZ)    \
        (DSM_ResetDebAndClearDFC((DFC_XYZ)))
#define DSM_ResetDebAndClearDFCIMPLARRAY(DFC_XYZ)                             \
        (DSM_ResetDebAndClearDFC((DFC_XYZ)))

/* DSM_ResetDebounce */
#define DSM_RESETDEBOUNCE_IMPL_DSM_ResetDebounce(DFC_XYZ)                     \
        (DSM_ResetDebounce(*(DFC_XYZ)))
#define DSM_ResetDebounceIMPL(DFC_XYZ)                                        \
        (DSM_ResetDebounce(*(DFC_XYZ)))

/* DSM_ResetDebounce (Array) */
#define DSM_RESETDEBOUNCE_IMPLARRAY_DSM_ResetDebounce(DFC_XYZ)                \
        (DSM_ResetDebounce((DFC_XYZ)))
#define DSM_ResetDebounceIMPLARRAY(DFC_XYZ)                                   \
        (DSM_ResetDebounce((DFC_XYZ)))

/* DSM_RepCheck */
#define DSM_REPCHECK_IMPL_DSM_RepCheck(DFC_XYZ,FAULT,ZFLAG,DEBOUNCE,ATTRIBUTES) \
        (DSM_RepCheck(*(DFC_XYZ),(uint)(FAULT),(uint)(ZFLAG),(uint)(DEBOUNCE),(uint)(ATTRIBUTES)))
#define DSM_RepCheckIMPL(DFC_XYZ,FAULT,ZFLAG,DEBOUNCE,ATTRIBUTES)             \
        (DSM_RepCheck(*(DFC_XYZ),(uint)(FAULT),(uint)(ZFLAG),(uint)(DEBOUNCE),(uint)(ATTRIBUTES)))

/* DSM_RepCheck (Array) */
#define DSM_REPCHECK_IMPLARRAY_DSM_RepCheck(DFC_XYZ,FAULT,ZFLAG,DEBOUNCE,ATTRIBUTES) \
        (DSM_RepCheck((DFC_XYZ),(uint)(FAULT),(uint)(ZFLAG),(uint)(DEBOUNCE),(uint)(ATTRIBUTES)))
#define DSM_RepCheckIMPLARRAY(DFC_XYZ,FAULT,ZFLAG,DEBOUNCE,ATTRIBUTES) \
        (DSM_RepCheck((DFC_XYZ),(uint)(FAULT),(uint)(ZFLAG),(uint)(DEBOUNCE),(uint)(ATTRIBUTES)))

/* DSM_SetDFCFinal */
#define DSM_SETDFCFINAL_IMPL_DSM_SetDFCFinal(DFC_XYZ)                         \
        (DSM_SetDFCFinal(*(DFC_XYZ)))
#define DSM_SetDFCFinalIMPL(DFC_XYZ)                                          \
        (DSM_SetDFCFinal(*(DFC_XYZ)))

/* DSM_SetDFCFinal (Array) */
#define DSM_SETDFCFINAL_IMPLARRAY_DSM_SetDFCFinal(DFC_XYZ)                    \
        (DSM_SetDFCFinal((DFC_XYZ)))
#define DSM_SetDFCFinalIMPLARRAY(DFC_XYZ)                                     \
        (DSM_SetDFCFinal((DFC_XYZ)))

/* DSM_GetInfoDFC */
#define DSM_GETINFODFC_IMPL_DSM_GetInfoDFC(DFC_XYZ, DFCInfo_XYZ)              \
        (DSM_GetInfoDFC(*(DFC_XYZ), (DFCInfo_XYZ)))
#define DSM_GetInfoDFCIMPL(DFC_XYZ, DFCInfo_XYZ)                              \
        (DSM_GetInfoDFC(*(DFC_XYZ), (DFCInfo_XYZ)))

/* DSM_GetInfoDFCPend */
#define DSM_GETINFODFCPEND_IMPL_DSM_GetInfoDFCPend(DFCInfo_XYZ)               \
        (DSM_GetInfoDFCPend(*(DFCInfo_XYZ)))
#define DSM_GetInfoDFCPendIMPL(DFCInfo_XYZ)                                   \
        (DSM_GetInfoDFCPend(*(DFCInfo_XYZ)))

/* DSM_GetInfoDFCConf */
#define DSM_GETINFODFCCONF_IMPL_DSM_GetInfoDFCConf(DFCInfo_XYZ)               \
        (DSM_GetInfoDFCConf(*(DFCInfo_XYZ)))
#define DSM_GetInfoDFCConfIMPL(DFCInfo_XYZ)                                   \
        (DSM_GetInfoDFCConf(*(DFCInfo_XYZ)))

/* DSM_GetInfoDFCMIL */
#define DSM_GETINFODFCMIL_IMPL_DSM_GetInfoDFCMIL(DFCInfo_XYZ)                 \
        (DSM_GetInfoDFCMIL(*(DFCInfo_XYZ)))
#define DSM_GetInfoDFCMILIMPL(DFCInfo_XYZ)                                    \
        (DSM_GetInfoDFCMIL(*(DFCInfo_XYZ)))

/* DSM_GetInfoDFCOBD */
#define DSM_GETINFODFCOBD_IMPL_DSM_GetInfoDFCOBD(DFCInfo_XYZ)                 \
        (DSM_GetInfoDFCOBD(*(DFCInfo_XYZ)))
#define DSM_GetInfoDFCOBDIMPL(DFCInfo_XYZ)                                    \
        (DSM_GetInfoDFCOBD(*(DFCInfo_XYZ)))

/* DSM_DFCTypeToIdx */
/*#define DSM_DFCTYPETOIDX_IMPL_idxDFC(DFC_XYZ)                                 \
        (DSM_DFCTypeToIdx(*(DFC_XYZ)))
#define DSM_DFCTYPETOIDXIMPL(DFC_XYZ)                                         \
        (DSM_DFCTypeToIdx(*(DFC_XYZ)))*/

/* DSM_GetDFCDisblSt */
/*#define DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DFCDisblSt)                         \
        (DSM_GetDFCDisblSt((DFCDisblSt)))
#define DSM_GETDFCDISBLSTIMPL(DFCDisblSt)                                     \
        (DSM_GetDFCDisblSt((DFCDisblSt)))*/

/* DSM_DfcGetFcmFrzExists */
#define DSM_DFCGETFCMFRZEXISTS_IMPL_DSM_DfcGetFcmFrzExists(DFC_XYZ)           \
        (DSM_DfcGetFcmFrzExists(*(DFC_XYZ)))
#define DSM_DfcGetFcmFrzExistsIMPL(DFC_XYZ)                                   \
        (DSM_DfcGetFcmFrzExists(*(DFC_XYZ)))

/* DSM_DfcGetFcmCoolTempP05 */
#define DSM_DFCGETFCMCOOLTEMPP05_IMPL_DSM_DfcGetFcmCoolTempP05(DFC_XYZ)       \
        (DSM_DfcGetFcmCoolTempP05(*(DFC_XYZ)))
#define DSM_DfcGetFcmCoolTempP05IMPL(DFC_XYZ)                                 \
        (DSM_DfcGetFcmCoolTempP05(*(DFC_XYZ)))

/* DSM_DfcGetFcmEngineSpeedP0C */
#define DSM_DFCGETFCMENGINESPEEDP0C_IMPL_DSM_DfcGetFcmEngineSpeedP0C(DFC_XYZ) \
        (DSM_DfcGetFcmEngineSpeedP0C(*(DFC_XYZ)))
#define DSM_DfcGetFcmEngineSpeedP0CIMPL(DFC_XYZ)                              \
        (DSM_DfcGetFcmEngineSpeedP0C(*(DFC_XYZ)))

/* DSM_DfcGetFcmLoadCondP04 */
#define DSM_DFCGETFCMLOADCONDP04_IMPL_DSM_DfcGetFcmLoadCondP04(DFC_XYZ)       \
        (DSM_DfcGetFcmLoadCondP04(*(DFC_XYZ)))
#define DSM_DfcGetFcmLoadCondP04IMPL(DFC_XYZ)                                 \
        (DSM_DfcGetFcmLoadCondP04(*(DFC_XYZ)))

/* DSM_GetCurrCoolTempP05 */
#define DSM_GETCURRCOOLTEMPP05_IMPL_DSM_GetCurrCoolTempP05()                  \
        (DSM_GetCurrCoolTempP05())
#define DSM_GetCurrCoolTempP05IMPL()                                          \
        (DSM_GetCurrCoolTempP05())

/* DSM_GetCurrEngineSpeedP0C */
#define DSM_GETCURRENGINESPEEDP0C_IMPL_DSM_GetCurrEngineSpeedP0C()            \
        (DSM_GetCurrEngineSpeedP0C())
#define DSM_GetCurrEngineSpeedP0CIMPL()                                       \
        (DSM_GetCurrEngineSpeedP0C())

/* DSM_GetCurrLoadCondP04 */
#define DSM_GETCURRLOADCONDP04_IMPL_DSM_GetCurrLoadCondP04()                  \
        (DSM_GetCurrLoadCondP04())
#define DSM_GetCurrLoadCondP04IMPL()                                          \
        (DSM_GetCurrLoadCondP04())

/* DSM_GetThresCoolTempP05 */
#define DSM_GETTHRESCOOLTEMPP05_IMPL_DSM_GetThresCoolTempP05()                \
        (DSM_GetThresCoolTempP05())
#define DSM_GetThresCoolTempP05IMPL()                                         \
        (DSM_GetThresCoolTempP05())

/* DSM_GetThresEngineSpeedP0C */
#define DSM_GETTHRESENGINESPEEDP0C_IMPL_DSM_GetThresEngineSpeedP0C()          \
        (DSM_GetThresEngineSpeedP0C())
#define DSM_GetThresEngineSpeedP0CIMPL()                                      \
        (DSM_GetThresEngineSpeedP0C())

/* DSM_GetThresLoadCondP04 */
#define DSM_GETTHRESLOADCONDP04_IMPL_DSM_GetThresLoadCondP04()                \
        (DSM_GetThresLoadCondP04())
#define DSM_GetThresLoadCondP04IMPL()                                         \
        (DSM_GetThresLoadCondP04())

/* DSM_CreatSusFrzFrm */
#define DSM_CREATSUSFRZFRM_IMPL_DSM_CreatSusFrzFrm(DFC_XYZ)                   \
        (DSM_CreatSusFrzFrm(*(DFC_XYZ)))
#define DSM_CreatSusFrzFrmIMPL(DFC_XYZ)                                       \
        (DSM_CreatSusFrzFrm(*(DFC_XYZ)))

/* DSM_DltSusFrzFrm */
#define DSM_DLTSUSFRZFRM_IMPL_DSM_DltSusFrzFrm(DFC_XYZ)                       \
        (DSM_DltSusFrzFrm(*(DFC_XYZ)))
#define DSM_DltSusFrzFrmIMPL(DFC_XYZ)                                         \
        (DSM_DltSusFrzFrm(*(DFC_XYZ)))

/* DSM_GetSusFrzFrmSt */
#define DSM_GETSUSFRZFRMST_IMPL_DSM_GetSusFrzFrmSt(DFC_XYZ)                   \
        (DSM_GetSusFrzFrmSt(*(DFC_XYZ)))
#define DSM_GetSusFrzFrmStIMPL(DFC_XYZ)                                       \
        (DSM_GetSusFrzFrmSt(*(DFC_XYZ)))

/* DSM_GetDscPermission */
#define DSM_GETDSCPERMISSION_IMPL_DSM_GetDscPermission(FID_XYZ)               \
        (DSM_GetDscPermission(*(FID_XYZ)))
#define DSM_GetDscPermissionIMPL(FID_XYZ)                                     \
        (DSM_GetDscPermission(*(FID_XYZ)))

/* DSM_RepSignalQuality */
#define DSM_REPSIGNALQUALITY_IMPL_DSM_RepSignalQuality(DSQ_XYZ,DSQRESULT)     \
        (DSM_RepSignalQuality(*(DSQ_XYZ),(uint)(DSQRESULT)))
#define DSM_RepSignalQualityIMPL(DSQ_XYZ,DSQRESULT)                           \
        (DSM_RepSignalQuality(*(DSQ_XYZ),(uint)(DSQRESULT)))

/* DSM_RepSignalQuality (Array) */
#define DSM_REPSIGNALQUALITY_IMPLARRAY_DSM_RepSignalQuality(DSQ_XYZ,DSQRESULT) \
        (DSM_RepSignalQuality((DSQ_XYZ),(uint)(DSQRESULT)))
#define DSM_RepSignalQualityIMPLARRAY(DSQ_XYZ,DSQRESULT)                      \
        (DSM_RepSignalQuality((DSQ_XYZ),(uint)(DSQRESULT)))

/* DSM_RepTstRslt */
#define DSM_REPTSTRSLT_IMPL_DSM_RepTstRslt(DTR_XYZ,DTRRESULT,DTRUPPERLIMREF,DTRLOWERLIMREF,DTRCONTROL) \
        (DSM_RepTstRslt(*(DTR_XYZ),(DTRRESULT),(DTRUPPERLIMREF),(DTRLOWERLIMREF),(uint)(DTRCONTROL)))
#define DSM_RepTstRsltIMPL(DTR_XYZ,DTRRESULT,DTRUPPERLIMREF,DTRLOWERLIMREF,DTRCONTROL) \
        (DSM_RepTstRslt(*(DTR_XYZ),(DTRRESULT),(DTRUPPERLIMREF),(DTRLOWERLIMREF),(uint)(DTRCONTROL)))

/* DSM_RepTstRslt (Array) */
#define DSM_REPTSTRSLT_IMPLARRAY_DSM_RepTstRslt(DTR_XYZ,DTRRESULT,DTRUPPERLIMREF,DTRLOWERLIMREF,DTRCONTROL) \
        (DSM_RepTstRslt((DTR_XYZ),(DTRRESULT),(DTRUPPERLIMREF),(DTRLOWERLIMREF),(uint)(DTRCONTROL)))
#define DSM_RepTstRsltIMPLARRAY(DTR_XYZ,DTRRESULT,DTRUPPERLIMREF,DTRLOWERLIMREF,DTRCONTROL) \
        (DSM_RepTstRslt((DTR_XYZ),(DTRRESULT),(DTRUPPERLIMREF),(DTRLOWERLIMREF),(uint)(DTRCONTROL)))
/* DSM_RepTstRslt_novalues */
#define DSM_REPTSTRSLT_NOVALUES_IMPL_DSM_RepTstRslt_novalues(DTR_XYZ,DTRCONTROL) \
        (DSM_RepTstRslt(*(DTR_XYZ),(0),(0),(0),(uint)(DTRCONTROL)))
#define DSM_RepTstRslt_novaluesIMPL(DTR_XYZ,DTRCONTROL) \
        (DSM_RepTstRslt(*(DTR_XYZ),(0),(0),(0),(uint)(DTRCONTROL)))

/* DSM_RepTstRslt_novalues (Array) */
#define DSM_REPTSTRSLT_NOVALUES_IMPLARRAY_DSM_RepTstRslt_novalues(DTR_XYZ,DTRCONTROL) \
        (DSM_RepTstRslt((DTR_XYZ),(0),(0),(0),(uint)(DTRCONTROL)))
#define DSM_RepTstRslt_novaluesIMPLARRAY(DTR_XYZ,DTRCONTROL) \
        (DSM_RepTstRslt((DTR_XYZ),(0),(0),(0),(uint)(DTRCONTROL)))

/* DSM_RepTstRslt_singlesided */
INLINE_FUNCTION void DSM_RepTstRslt_singlesided(DSM_DTRTYPE_IMPL DTR_XYZ, sint32 threshold, sint32 value, 
	uint32 stControl)
{
  uint8 _cond;
  _cond = (((uint32)DTR_CTL_NO_MAX == stControl) && (0 == threshold) && (0 == value)) ;
  DSM_RepTstRsltIMPL(&(DTR_XYZ), value, ( _cond ? (sint32)524287  : threshold), threshold ,   
  	( _cond ? (uint32)DTR_CTL_NORMAL : stControl));
}

#define DSM_REPTSTRSLT_SINGLESIDED_IMPL_DSM_RepTstRslt_singlesided(DTR_XYZ,THRESHOLD,VALUE,STCTRL) \
      (DSM_RepTstRslt_singlesided(*(DTR_XYZ), THRESHOLD, VALUE, STCTRL))
#define DSM_RepTstRslt_singlesidedIMPL(DTR_XYZ,THRESHOLD,VALUE,STCTRL) \
      (DSM_RepTstRslt_singlesided(*(DTR_XYZ), THRESHOLD, VALUE, STCTRL))

/* DSM_Stat_Enable_Check */
#define DSM_STAT_ENABLE_CHECK_IMPL_DSM_Stat_Enable_Check(DFC_XYZ) \
        (uint8)(BITWISEAND_U8_calc((uint8)DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DSM_DFCTYPETOIDX_IMPL_idxDFC(DFC_XYZ)), \
        	DSM_ST_DFC_STAT_DISBL_MSK) == (uint8)0)
#define DSM_Stat_Enable_CheckIMPL(DFC_XYZ) \
        (uint8)(BITWISEAND_U8_calc((uint8)DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DSM_DFCTYPETOIDX_IMPL_idxDFC(DFC_XYZ)), \
        	DSM_ST_DFC_STAT_DISBL_MSK) == (uint8)0)	  
			
/* DSM_Visible_Check_Rep */
#define DSM_VISIBLE_CHECK_REP_IMPL_DSM_Visible_Check_Rep(DFC_XYZ) \
        (uint8)(BITWISEAND_U8_calc((uint8)DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DSM_DFCTYPETOIDX_IMPL_idxDFC(DFC_XYZ)), BITWISEOR_U8_calc(DSM_ST_DFC_STAT_DISBL_MSK, DSM_ST_DFC_FLTCLS_DISBL_MSK)) == (uint8)0)
#define DSM_Visible_Check_RepIMPL(DFC_XYZ) \
        (uint8)(BITWISEAND_U8_calc((uint8)DSM_GETDFCDISBLST_IMPL_DFCDisblSt(DSM_DFCTYPETOIDX_IMPL_idxDFC(DFC_XYZ)), BITWISEOR_U8_calc(DSM_ST_DFC_STAT_DISBL_MSK, DSM_ST_DFC_FLTCLS_DISBL_MSK)) == (uint8)0)			


/* DSM_GetTrigger */
#define DSM_GETTRIGGER_IMPL_DSM_GetTrigger(TRG_XYZ)                           \
        (DSM_GetTrigger(*(TRG_XYZ)))
#define DSM_GetTriggerIMPL(TRG_XYZ)                                           \
        (DSM_GetTrigger(*(TRG_XYZ)))

/* DSM_SetTrigger */
#define DSM_SETTRIGGER_IMPL_DSM_SetTrigger(TRG_XYZ)                           \
        (DSM_SetTrigger(*(TRG_XYZ)))
#define DSM_SetTriggerIMPL(TRG_XYZ)                                           \
        (DSM_SetTrigger(*(TRG_XYZ)))
	

/* DSM_GetDFCDebTmr */	
#define DSM_GETDFCDEBTMR_IMPL_DSM_GetDFCDebTmr(DFC_XYZ, tiDebDef, tiDebOk) DSM_GetDFCDebTmr(*(DFC_XYZ), tiDebDef, tiDebOk ) 
#define DSM_GetDFCDebTmrIMPL(DFC_XYZ, tiDebDef, tiDebOk) DSM_GetDFCDebTmr(*(DFC_XYZ), tiDebDef, tiDebOk )
 
/*************************************************************************/
/* DSMRDY adapter                                                        */
/*************************************************************************/

/* DSMRdy_SetCmplByDFC */
#define DSMRDY_SETCMPLBYDFC_IMPL_DSMRdy_SetCmplByDFC(DFC_XYZ)                 \
        (DSMRdy_SetCmplByDFC(*(DFC_XYZ)))
#define DSMRdy_SetCmplByDFCIMPL(DFC_XYZ)                                      \
        (DSMRdy_SetCmplByDFC(*(DFC_XYZ)))

/* DSMRdy_SetRdyByDFC */
#define DSMRDY_SETRDYBYDFC_IMPL_DSMRdy_SetRdyByDFC(DFC_XYZ)                   \
        (DSMRdy_SetRdyByDFC(*(DFC_XYZ)))
#define DSMRdy_SetRdyByDFCIMPL(DFC_XYZ)                                       \
        (DSMRdy_SetRdyByDFC(*(DFC_XYZ)))

#endif	/*#ifndef _CODEGEN_DSM_H*/
