#ifndef _DFES_DAT_H
#define _DFES_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DFES_Cls */
#ifndef _DFES_Cls_DEF
#define _DFES_Cls_DEF
#ifndef DFES_CLS_STR_DEF
#define DFES_CLS_STR_DEF
typedef struct
{
    uint8 DFC_Unused_C;
    uint8 DFC_Cy327SpiCom_C;
    uint8 DFC_MonUMaxSupply1_C;
    uint8 DFC_MonUMinSupply1_C;
    uint8 DFC_SSpMon1_C;
    uint8 DFC_SSpMon1OV_C;
    uint8 DFC_SSpMon1SCG_C;
    uint8 DFC_SSpMon1UV_C;
    uint8 DFC_SSpMon2_C;
    uint8 DFC_SSpMon2OV_C;
    uint8 DFC_SSpMon2SCG_C;
    uint8 DFC_SSpMon2UV_C;
    uint8 DFC_SSpMon3_C;
    uint8 DFC_SSpMon3OV_C;
    uint8 DFC_SSpMon3SCG_C;
    uint8 DFC_SSpMon3UV_C;
    uint8 DFC_SSpMonOT_C;
    uint8 DFC_IgnClPsClBenchErr1_C;
    uint8 DFC_IgnClPsClBenchErr2_C;
    uint8 DFC_IgnClPsDevIdentErr1_C;
    uint8 DFC_IgnClPsDevIdentErr2_C;
    uint8 DFC_IgnClPsDevInitErr1_C;
    uint8 DFC_IgnClPsDevInitErr2_C;
    uint8 DFC_IgnClPsDevSpiErr1_C;
    uint8 DFC_IgnClPsDevSpiErr2_C;
    uint8 DFC_IgnClPsOpenLoad0_C;
    uint8 DFC_IgnClPsOpenLoad1_C;
    uint8 DFC_IgnClPsOpenLoad2_C;
    uint8 DFC_IgnClPsOpenLoad3_C;
    uint8 DFC_IgnClPsOpenLoad4_C;
    uint8 DFC_IgnClPsOpenLoad5_C;
    uint8 DFC_IgnClPsOpenLoad6_C;
    uint8 DFC_IgnClPsOpenLoad7_C;
    uint8 DFC_IgnClPsShCirBatt0_C;
    uint8 DFC_IgnClPsShCirBatt1_C;
    uint8 DFC_IgnClPsShCirBatt2_C;
    uint8 DFC_IgnClPsShCirBatt3_C;
    uint8 DFC_IgnClPsShCirBatt4_C;
    uint8 DFC_IgnClPsShCirBatt5_C;
    uint8 DFC_IgnClPsShCirBatt6_C;
    uint8 DFC_IgnClPsShCirBatt7_C;
    uint8 DFC_IgnClPsShCirGnd0_C;
    uint8 DFC_IgnClPsShCirGnd1_C;
    uint8 DFC_IgnClPsShCirGnd2_C;
    uint8 DFC_IgnClPsShCirGnd3_C;
    uint8 DFC_IgnClPsShCirGnd4_C;
    uint8 DFC_IgnClPsShCirGnd5_C;
    uint8 DFC_IgnClPsShCirGnd6_C;
    uint8 DFC_IgnClPsShCirGnd7_C;
    uint8 DFC_UEGOASICS1B1_C;
    uint8 DFC_UEGOASICS1B2_C;
    uint8 DFC_UEGOOLAPES1B1_C;
    uint8 DFC_UEGOOLAPES1B2_C;
    uint8 DFC_UEGOOLIPES1B1_C;
    uint8 DFC_UEGOOLIPES1B2_C;
    uint8 DFC_UEGOOLMESS1B1_C;
    uint8 DFC_UEGOOLMESS1B2_C;
    uint8 DFC_UEGOOLRES1B1_C;
    uint8 DFC_UEGOOLRES1B2_C;
    uint8 DFC_UEGOSCBS1B1_C;
    uint8 DFC_UEGOSCBS1B2_C;
    uint8 DFC_UEGOSCGS1B1_C;
    uint8 DFC_UEGOSCGS1B2_C;
    uint8 DFC_UEGOSPIS1B1_C;
    uint8 DFC_UEGOSPIS1B2_C;
    uint8 DFC_UEGOSnsrS1B1_C;
    uint8 DFC_UEGOSnsrS1B2_C;
    uint8 DFC_UEGOSnsrTempS1B1_C;
    uint8 DFC_UEGOSnsrTempS1B2_C;
    uint8 DFC_DevLibBattUHi_C;
    uint8 DFC_DevLibBattULo_C;
    uint8 DFC_MRlySCG_C;
    uint8 DFC_KnDetSens1PortAMax_C;
    uint8 DFC_KnDetSens1PortAMin_C;
    uint8 DFC_KnDetSens1PortBMax_C;
    uint8 DFC_KnDetSens1PortBMin_C;
    uint8 DFC_KnDetSens2PortAMax_C;
    uint8 DFC_KnDetSens2PortAMin_C;
    uint8 DFC_KnDetSens2PortBMax_C;
    uint8 DFC_KnDetSens2PortBMin_C;
    uint8 DFC_KnDetSens3PortAMax_C;
    uint8 DFC_KnDetSens3PortAMin_C;
    uint8 DFC_KnDetSens3PortBMax_C;
    uint8 DFC_KnDetSens3PortBMin_C;
    uint8 DFC_KnDetSens4PortAMax_C;
    uint8 DFC_KnDetSens4PortAMin_C;
    uint8 DFC_KnDetSens4PortBMax_C;
    uint8 DFC_KnDetSens4PortBMin_C;
    uint8 DFC_BstCtlDumpVlvErrShtrp_C;
    uint8 DFC_BstCtlWgErrShtrp_C;
    uint8 DFC_CmprnTest_C;
    uint8 DFC_DMTK_C;
    uint8 DFC_DMTLmax_C;
    uint8 DFC_DMTLmin_C;
    uint8 DFC_DMTLnpl_C;
    uint8 DFC_DMTLsig_C;
    uint8 DFC_LSV2max_C;
    uint8 DFC_LSVmax_C;
    uint8 DFC_MRlyErlyOpng_C;
    uint8 DFC_MRlyStk_C;
    uint8 DFC_SSpMon1loc_C;
    uint8 DFC_SSpMon2loc_C;
    uint8 DFC_SSpMon3loc_C;
    uint8 DFC_TESG_C;
    uint8 DFC_TESmax_C;
    uint8 DFC_TESmin_C;
    uint8 DFC_VehVMax_C;
    uint8 DFC_VehVPlaus_C;
    uint8 DFC_VehVSig_C;
    uint8 DFC_EEPRdErr_C;
    uint8 DFC_EEPWrErr_C;
    uint8 DFC_EV1max_C;
    uint8 DFC_EV1min_C;
    uint8 DFC_EV1sig_C;
    uint8 DFC_EV2max_C;
    uint8 DFC_EV2min_C;
    uint8 DFC_EV2sig_C;
    uint8 DFC_EV3max_C;
    uint8 DFC_EV3min_C;
    uint8 DFC_EV3sig_C;
    uint8 DFC_EV4max_C;
    uint8 DFC_EV4min_C;
    uint8 DFC_EV4sig_C;
    uint8 DFC_EV5max_C;
    uint8 DFC_EV5min_C;
    uint8 DFC_EV5sig_C;
    uint8 DFC_EV6max_C;
    uint8 DFC_EV6min_C;
    uint8 DFC_EV6sig_C;
    uint8 DFC_EV7max_C;
    uint8 DFC_EV7min_C;
    uint8 DFC_EV7sig_C;
    uint8 DFC_EV8max_C;
    uint8 DFC_EV8min_C;
    uint8 DFC_EV8sig_C;
    uint8 DFC_EpmCaSI1ErrSig_C;
    uint8 DFC_EpmCaSI1MntErr_C;
    uint8 DFC_EpmCaSI1NoSigMax_C;
    uint8 DFC_EpmCaSI1NoSigMin_C;
    uint8 DFC_EpmCaSI1OfsErr_C;
    uint8 DFC_EpmCrSDGI_C;
    uint8 DFC_EpmCrSErrSig_C;
    uint8 DFC_EpmCrSNoSig_C;
    uint8 DFC_MoCADCNTP_C;
    uint8 DFC_MoCADCTst_C;
    uint8 DFC_MoCComctErrMM_C;
    uint8 DFC_OCWDAActv_C;
    uint8 DFC_OCWDACom_C;
    uint8 DFC_OCWDAOvrVltg_C;
    uint8 DFC_SWReset_0_C;
    uint8 DFC_SWReset_1_C;
    uint8 DFC_SWReset_2_C;
    uint8 DFC_StopCntTmr_C;
} DFES_Cls_str;
#endif
#endif /* _DFES_Cls_DEF */

/* Defined Parameter DFES_DbLv_C */
#ifndef _DFES_DbLv_C_DEF
#define _DFES_DbLv_C_DEF
#define DFES_DbLv_CM DFES_DbLv_C
#endif /* _DFES_DbLv_C_DEF */

/* Defined Parameter DFES_FaultTyp_C */
#ifndef _DFES_FaultTyp_C_DEF
#define _DFES_FaultTyp_C_DEF
#define DFES_FaultTyp_CM DFES_FaultTyp_C
#endif /* _DFES_FaultTyp_C_DEF */

/* Defined Parameter DFES_MonEvtMSK0_C */
#ifndef _DFES_MonEvtMSK0_C_DEF
#define _DFES_MonEvtMSK0_C_DEF
#define DFES_MonEvtMSK0_CM DFES_MonEvtMSK0_C
#endif /* _DFES_MonEvtMSK0_C_DEF */

/* Defined Parameter DFES_MonEvtMSK1_C */
#ifndef _DFES_MonEvtMSK1_C_DEF
#define _DFES_MonEvtMSK1_C_DEF
#define DFES_MonEvtMSK1_CM DFES_MonEvtMSK1_C
#endif /* _DFES_MonEvtMSK1_C_DEF */

/* Defined Parameter DFES_MonRepeat_C */
#ifndef _DFES_MonRepeat_C_DEF
#define _DFES_MonRepeat_C_DEF
#define DFES_MonRepeat_CM DFES_MonRepeat_C
#endif /* _DFES_MonRepeat_C_DEF */

/* Defined Parameter DFES_numClsDlt_CA */
#ifndef _DFES_numClsDlt_CA_DEF
#define _DFES_numClsDlt_CA_DEF
#define DFES_numClsDlt_CAM DFES_numClsDlt_CA
#endif /* _DFES_numClsDlt_CA_DEF */

/* Defined Parameter DFES_numClsFaultCycl_CA */
#ifndef _DFES_numClsFaultCycl_CA_DEF
#define _DFES_numClsFaultCycl_CA_DEF
#define DFES_numClsFaultCycl_CAM DFES_numClsFaultCycl_CA
#endif /* _DFES_numClsFaultCycl_CA_DEF */

/* Defined Parameter DFES_numClsHealCycl_CA */
#ifndef _DFES_numClsHealCycl_CA_DEF
#define _DFES_numClsHealCycl_CA_DEF
#define DFES_numClsHealCycl_CAM DFES_numClsHealCycl_CA
#endif /* _DFES_numClsHealCycl_CA_DEF */

/* Defined Parameter DFES_numClsPndDlt_CA */
#ifndef _DFES_numClsPndDlt_CA_DEF
#define _DFES_numClsPndDlt_CA_DEF
#define DFES_numClsPndDlt_CAM DFES_numClsPndDlt_CA
#endif /* _DFES_numClsPndDlt_CA_DEF */

/* Defined Parameter DFES_numClsSvcDlt_CA */
#ifndef _DFES_numClsSvcDlt_CA_DEF
#define _DFES_numClsSvcDlt_CA_DEF
#define DFES_numClsSvcDlt_CAM DFES_numClsSvcDlt_CA
#endif /* _DFES_numClsSvcDlt_CA_DEF */

/* Defined Parameter DFES_numClsSVSFaultCycl_CA */
#ifndef _DFES_numClsSVSFaultCycl_CA_DEF
#define _DFES_numClsSVSFaultCycl_CA_DEF
#define DFES_numClsSVSFaultCycl_CAM DFES_numClsSVSFaultCycl_CA
#endif /* _DFES_numClsSVSFaultCycl_CA_DEF */

/* Defined Parameter DFES_numClsSVSHealCycl_CA */
#ifndef _DFES_numClsSVSHealCycl_CA_DEF
#define _DFES_numClsSVSHealCycl_CA_DEF
#define DFES_numClsSVSHealCycl_CAM DFES_numClsSVSHealCycl_CA
#endif /* _DFES_numClsSVSHealCycl_CA_DEF */

/* Defined Parameter DFES_ThresSimCond */
#ifndef _DFES_ThresSimCond_DEF
#define _DFES_ThresSimCond_DEF
#ifndef DFES_THRESSIMCOND_STR_DEF
#define DFES_THRESSIMCOND_STR_DEF
typedef struct
{
    uint8 t_C;
    uint8 r_C;
    uint16 n_C;
} DFES_ThresSimCond_str;
#endif
#endif /* _DFES_ThresSimCond_DEF */

/* Defined Parameter DFES_xAsgnExtdFrzFrSig_CA */
#ifndef _DFES_xAsgnExtdFrzFrSig_CA_DEF
#define _DFES_xAsgnExtdFrzFrSig_CA_DEF
#define DFES_xAsgnExtdFrzFrSig_CAM DFES_xAsgnExtdFrzFrSig_CA
#endif /* _DFES_xAsgnExtdFrzFrSig_CA_DEF */

/* Defined Parameter DFES_xAsgnFrzFrSig_CA */
#ifndef _DFES_xAsgnFrzFrSig_CA_DEF
#define _DFES_xAsgnFrzFrSig_CA_DEF
#define DFES_xAsgnFrzFrSig_CAM DFES_xAsgnFrzFrSig_CA
#endif /* _DFES_xAsgnFrzFrSig_CA_DEF */

/* Defined Parameter DFES_xClsDltTrg_CA */
#ifndef _DFES_xClsDltTrg_CA_DEF
#define _DFES_xClsDltTrg_CA_DEF
#define DFES_xClsDltTrg_CAM DFES_xClsDltTrg_CA
#endif /* _DFES_xClsDltTrg_CA_DEF */

/* Defined Parameter DFES_xClsFaultTrg_CA */
#ifndef _DFES_xClsFaultTrg_CA_DEF
#define _DFES_xClsFaultTrg_CA_DEF
#define DFES_xClsFaultTrg_CAM DFES_xClsFaultTrg_CA
#endif /* _DFES_xClsFaultTrg_CA_DEF */

/* Defined Parameter DFES_xClsFltMIL_CA */
#ifndef _DFES_xClsFltMIL_CA_DEF
#define _DFES_xClsFltMIL_CA_DEF
#define DFES_xClsFltMIL_CAM DFES_xClsFltMIL_CA
#endif /* _DFES_xClsFltMIL_CA_DEF */

/* Defined Parameter DFES_xClsFltSVS_CA */
#ifndef _DFES_xClsFltSVS_CA_DEF
#define _DFES_xClsFltSVS_CA_DEF
#define DFES_xClsFltSVS_CAM DFES_xClsFltSVS_CA
#endif /* _DFES_xClsFltSVS_CA_DEF */

/* Defined Parameter DFES_xClsHealTrg_CA */
#ifndef _DFES_xClsHealTrg_CA_DEF
#define _DFES_xClsHealTrg_CA_DEF
#define DFES_xClsHealTrg_CAM DFES_xClsHealTrg_CA
#endif /* _DFES_xClsHealTrg_CA_DEF */

/* Defined Parameter DFES_xClsPndDltTrg_CA */
#ifndef _DFES_xClsPndDltTrg_CA_DEF
#define _DFES_xClsPndDltTrg_CA_DEF
#define DFES_xClsPndDltTrg_CAM DFES_xClsPndDltTrg_CA
#endif /* _DFES_xClsPndDltTrg_CA_DEF */

/* Defined Parameter DFES_xClsPrio_CA */
#ifndef _DFES_xClsPrio_CA_DEF
#define _DFES_xClsPrio_CA_DEF
#define DFES_xClsPrio_CAM DFES_xClsPrio_CA
#endif /* _DFES_xClsPrio_CA_DEF */

/* Defined Parameter DFES_xClsSvcDltTrg_CA */
#ifndef _DFES_xClsSvcDltTrg_CA_DEF
#define _DFES_xClsSvcDltTrg_CA_DEF
#define DFES_xClsSvcDltTrg_CAM DFES_xClsSvcDltTrg_CA
#endif /* _DFES_xClsSvcDltTrg_CA_DEF */

/* Defined Parameter DFES_xClsSVSFaultTrg_CA */
#ifndef _DFES_xClsSVSFaultTrg_CA_DEF
#define _DFES_xClsSVSFaultTrg_CA_DEF
#define DFES_xClsSVSFaultTrg_CAM DFES_xClsSVSFaultTrg_CA
#endif /* _DFES_xClsSVSFaultTrg_CA_DEF */

/* Defined Parameter DFES_xClsSVSHealTrg_CA */
#ifndef _DFES_xClsSVSHealTrg_CA_DEF
#define _DFES_xClsSVSHealTrg_CA_DEF
#define DFES_xClsSVSHealTrg_CAM DFES_xClsSVSHealTrg_CA
#endif /* _DFES_xClsSVSHealTrg_CA_DEF */

/* Defined Parameter DFES_DTCO */
#ifndef _DFES_DTCO_DEF
#define _DFES_DTCO_DEF
#ifndef DFES_DTCO_STR_DEF
#define DFES_DTCO_STR_DEF
typedef struct
{
    uint16 DFC_Unused_C;
    uint16 DFC_Cy327SpiCom_C;
    uint16 DFC_MonUMaxSupply1_C;
    uint16 DFC_MonUMinSupply1_C;
    uint16 DFC_SSpMon1_C;
    uint16 DFC_SSpMon1OV_C;
    uint16 DFC_SSpMon1SCG_C;
    uint16 DFC_SSpMon1UV_C;
    uint16 DFC_SSpMon2_C;
    uint16 DFC_SSpMon2OV_C;
    uint16 DFC_SSpMon2SCG_C;
    uint16 DFC_SSpMon2UV_C;
    uint16 DFC_SSpMon3_C;
    uint16 DFC_SSpMon3OV_C;
    uint16 DFC_SSpMon3SCG_C;
    uint16 DFC_SSpMon3UV_C;
    uint16 DFC_SSpMonOT_C;
    uint16 DFC_IgnClPsClBenchErr1_C;
    uint16 DFC_IgnClPsClBenchErr2_C;
    uint16 DFC_IgnClPsDevIdentErr1_C;
    uint16 DFC_IgnClPsDevIdentErr2_C;
    uint16 DFC_IgnClPsDevInitErr1_C;
    uint16 DFC_IgnClPsDevInitErr2_C;
    uint16 DFC_IgnClPsDevSpiErr1_C;
    uint16 DFC_IgnClPsDevSpiErr2_C;
    uint16 DFC_IgnClPsOpenLoad0_C;
    uint16 DFC_IgnClPsOpenLoad1_C;
    uint16 DFC_IgnClPsOpenLoad2_C;
    uint16 DFC_IgnClPsOpenLoad3_C;
    uint16 DFC_IgnClPsOpenLoad4_C;
    uint16 DFC_IgnClPsOpenLoad5_C;
    uint16 DFC_IgnClPsOpenLoad6_C;
    uint16 DFC_IgnClPsOpenLoad7_C;
    uint16 DFC_IgnClPsShCirBatt0_C;
    uint16 DFC_IgnClPsShCirBatt1_C;
    uint16 DFC_IgnClPsShCirBatt2_C;
    uint16 DFC_IgnClPsShCirBatt3_C;
    uint16 DFC_IgnClPsShCirBatt4_C;
    uint16 DFC_IgnClPsShCirBatt5_C;
    uint16 DFC_IgnClPsShCirBatt6_C;
    uint16 DFC_IgnClPsShCirBatt7_C;
    uint16 DFC_IgnClPsShCirGnd0_C;
    uint16 DFC_IgnClPsShCirGnd1_C;
    uint16 DFC_IgnClPsShCirGnd2_C;
    uint16 DFC_IgnClPsShCirGnd3_C;
    uint16 DFC_IgnClPsShCirGnd4_C;
    uint16 DFC_IgnClPsShCirGnd5_C;
    uint16 DFC_IgnClPsShCirGnd6_C;
    uint16 DFC_IgnClPsShCirGnd7_C;
    uint16 DFC_UEGOASICS1B1_C;
    uint16 DFC_UEGOASICS1B2_C;
    uint16 DFC_UEGOOLAPES1B1_C;
    uint16 DFC_UEGOOLAPES1B2_C;
    uint16 DFC_UEGOOLIPES1B1_C;
    uint16 DFC_UEGOOLIPES1B2_C;
    uint16 DFC_UEGOOLMESS1B1_C;
    uint16 DFC_UEGOOLMESS1B2_C;
    uint16 DFC_UEGOOLRES1B1_C;
    uint16 DFC_UEGOOLRES1B2_C;
    uint16 DFC_UEGOSCBS1B1_C;
    uint16 DFC_UEGOSCBS1B2_C;
    uint16 DFC_UEGOSCGS1B1_C;
    uint16 DFC_UEGOSCGS1B2_C;
    uint16 DFC_UEGOSPIS1B1_C;
    uint16 DFC_UEGOSPIS1B2_C;
    uint16 DFC_UEGOSnsrS1B1_C;
    uint16 DFC_UEGOSnsrS1B2_C;
    uint16 DFC_UEGOSnsrTempS1B1_C;
    uint16 DFC_UEGOSnsrTempS1B2_C;
    uint16 DFC_DevLibBattUHi_C;
    uint16 DFC_DevLibBattULo_C;
    uint16 DFC_MRlySCG_C;
    uint16 DFC_KnDetSens1PortAMax_C;
    uint16 DFC_KnDetSens1PortAMin_C;
    uint16 DFC_KnDetSens1PortBMax_C;
    uint16 DFC_KnDetSens1PortBMin_C;
    uint16 DFC_KnDetSens2PortAMax_C;
    uint16 DFC_KnDetSens2PortAMin_C;
    uint16 DFC_KnDetSens2PortBMax_C;
    uint16 DFC_KnDetSens2PortBMin_C;
    uint16 DFC_KnDetSens3PortAMax_C;
    uint16 DFC_KnDetSens3PortAMin_C;
    uint16 DFC_KnDetSens3PortBMax_C;
    uint16 DFC_KnDetSens3PortBMin_C;
    uint16 DFC_KnDetSens4PortAMax_C;
    uint16 DFC_KnDetSens4PortAMin_C;
    uint16 DFC_KnDetSens4PortBMax_C;
    uint16 DFC_KnDetSens4PortBMin_C;
    uint16 DFC_BstCtlDumpVlvErrShtrp_C;
    uint16 DFC_BstCtlWgErrShtrp_C;
    uint16 DFC_CmprnTest_C;
    uint16 DFC_DMTK_C;
    uint16 DFC_DMTLmax_C;
    uint16 DFC_DMTLmin_C;
    uint16 DFC_DMTLnpl_C;
    uint16 DFC_DMTLsig_C;
    uint16 DFC_LSV2max_C;
    uint16 DFC_LSVmax_C;
    uint16 DFC_MRlyErlyOpng_C;
    uint16 DFC_MRlyStk_C;
    uint16 DFC_SSpMon1loc_C;
    uint16 DFC_SSpMon2loc_C;
    uint16 DFC_SSpMon3loc_C;
    uint16 DFC_TESG_C;
    uint16 DFC_TESmax_C;
    uint16 DFC_TESmin_C;
    uint16 DFC_VehVMax_C;
    uint16 DFC_VehVPlaus_C;
    uint16 DFC_VehVSig_C;
    uint16 DFC_EEPRdErr_C;
    uint16 DFC_EEPWrErr_C;
    uint16 DFC_EV1max_C;
    uint16 DFC_EV1min_C;
    uint16 DFC_EV1sig_C;
    uint16 DFC_EV2max_C;
    uint16 DFC_EV2min_C;
    uint16 DFC_EV2sig_C;
    uint16 DFC_EV3max_C;
    uint16 DFC_EV3min_C;
    uint16 DFC_EV3sig_C;
    uint16 DFC_EV4max_C;
    uint16 DFC_EV4min_C;
    uint16 DFC_EV4sig_C;
    uint16 DFC_EV5max_C;
    uint16 DFC_EV5min_C;
    uint16 DFC_EV5sig_C;
    uint16 DFC_EV6max_C;
    uint16 DFC_EV6min_C;
    uint16 DFC_EV6sig_C;
    uint16 DFC_EV7max_C;
    uint16 DFC_EV7min_C;
    uint16 DFC_EV7sig_C;
    uint16 DFC_EV8max_C;
    uint16 DFC_EV8min_C;
    uint16 DFC_EV8sig_C;
    uint16 DFC_EpmCaSI1ErrSig_C;
    uint16 DFC_EpmCaSI1MntErr_C;
    uint16 DFC_EpmCaSI1NoSigMax_C;
    uint16 DFC_EpmCaSI1NoSigMin_C;
    uint16 DFC_EpmCaSI1OfsErr_C;
    uint16 DFC_EpmCrSDGI_C;
    uint16 DFC_EpmCrSErrSig_C;
    uint16 DFC_EpmCrSNoSig_C;
    uint16 DFC_MoCADCNTP_C;
    uint16 DFC_MoCADCTst_C;
    uint16 DFC_MoCComctErrMM_C;
    uint16 DFC_OCWDAActv_C;
    uint16 DFC_OCWDACom_C;
    uint16 DFC_OCWDAOvrVltg_C;
    uint16 DFC_SWReset_0_C;
    uint16 DFC_SWReset_1_C;
    uint16 DFC_SWReset_2_C;
    uint16 DFC_StopCntTmr_C;
} DFES_DTCO_str;
#endif
#endif /* _DFES_DTCO_DEF */

/* Defined Parameter DFES_EnvRef */
#ifndef _DFES_EnvRef_DEF
#define _DFES_EnvRef_DEF
#ifndef DFES_ENVREF_STR_DEF
#define DFES_ENVREF_STR_DEF
typedef struct
{
    uint8 DFC_Unused_C;
    uint8 DFC_Cy327SpiCom_C;
    uint8 DFC_MonUMaxSupply1_C;
    uint8 DFC_MonUMinSupply1_C;
    uint8 DFC_SSpMon1_C;
    uint8 DFC_SSpMon1OV_C;
    uint8 DFC_SSpMon1SCG_C;
    uint8 DFC_SSpMon1UV_C;
    uint8 DFC_SSpMon2_C;
    uint8 DFC_SSpMon2OV_C;
    uint8 DFC_SSpMon2SCG_C;
    uint8 DFC_SSpMon2UV_C;
    uint8 DFC_SSpMon3_C;
    uint8 DFC_SSpMon3OV_C;
    uint8 DFC_SSpMon3SCG_C;
    uint8 DFC_SSpMon3UV_C;
    uint8 DFC_SSpMonOT_C;
    uint8 DFC_IgnClPsClBenchErr1_C;
    uint8 DFC_IgnClPsClBenchErr2_C;
    uint8 DFC_IgnClPsDevIdentErr1_C;
    uint8 DFC_IgnClPsDevIdentErr2_C;
    uint8 DFC_IgnClPsDevInitErr1_C;
    uint8 DFC_IgnClPsDevInitErr2_C;
    uint8 DFC_IgnClPsDevSpiErr1_C;
    uint8 DFC_IgnClPsDevSpiErr2_C;
    uint8 DFC_IgnClPsOpenLoad0_C;
    uint8 DFC_IgnClPsOpenLoad1_C;
    uint8 DFC_IgnClPsOpenLoad2_C;
    uint8 DFC_IgnClPsOpenLoad3_C;
    uint8 DFC_IgnClPsOpenLoad4_C;
    uint8 DFC_IgnClPsOpenLoad5_C;
    uint8 DFC_IgnClPsOpenLoad6_C;
    uint8 DFC_IgnClPsOpenLoad7_C;
    uint8 DFC_IgnClPsShCirBatt0_C;
    uint8 DFC_IgnClPsShCirBatt1_C;
    uint8 DFC_IgnClPsShCirBatt2_C;
    uint8 DFC_IgnClPsShCirBatt3_C;
    uint8 DFC_IgnClPsShCirBatt4_C;
    uint8 DFC_IgnClPsShCirBatt5_C;
    uint8 DFC_IgnClPsShCirBatt6_C;
    uint8 DFC_IgnClPsShCirBatt7_C;
    uint8 DFC_IgnClPsShCirGnd0_C;
    uint8 DFC_IgnClPsShCirGnd1_C;
    uint8 DFC_IgnClPsShCirGnd2_C;
    uint8 DFC_IgnClPsShCirGnd3_C;
    uint8 DFC_IgnClPsShCirGnd4_C;
    uint8 DFC_IgnClPsShCirGnd5_C;
    uint8 DFC_IgnClPsShCirGnd6_C;
    uint8 DFC_IgnClPsShCirGnd7_C;
    uint8 DFC_UEGOASICS1B1_C;
    uint8 DFC_UEGOASICS1B2_C;
    uint8 DFC_UEGOOLAPES1B1_C;
    uint8 DFC_UEGOOLAPES1B2_C;
    uint8 DFC_UEGOOLIPES1B1_C;
    uint8 DFC_UEGOOLIPES1B2_C;
    uint8 DFC_UEGOOLMESS1B1_C;
    uint8 DFC_UEGOOLMESS1B2_C;
    uint8 DFC_UEGOOLRES1B1_C;
    uint8 DFC_UEGOOLRES1B2_C;
    uint8 DFC_UEGOSCBS1B1_C;
    uint8 DFC_UEGOSCBS1B2_C;
    uint8 DFC_UEGOSCGS1B1_C;
    uint8 DFC_UEGOSCGS1B2_C;
    uint8 DFC_UEGOSPIS1B1_C;
    uint8 DFC_UEGOSPIS1B2_C;
    uint8 DFC_UEGOSnsrS1B1_C;
    uint8 DFC_UEGOSnsrS1B2_C;
    uint8 DFC_UEGOSnsrTempS1B1_C;
    uint8 DFC_UEGOSnsrTempS1B2_C;
    uint8 DFC_DevLibBattUHi_C;
    uint8 DFC_DevLibBattULo_C;
    uint8 DFC_MRlySCG_C;
    uint8 DFC_KnDetSens1PortAMax_C;
    uint8 DFC_KnDetSens1PortAMin_C;
    uint8 DFC_KnDetSens1PortBMax_C;
    uint8 DFC_KnDetSens1PortBMin_C;
    uint8 DFC_KnDetSens2PortAMax_C;
    uint8 DFC_KnDetSens2PortAMin_C;
    uint8 DFC_KnDetSens2PortBMax_C;
    uint8 DFC_KnDetSens2PortBMin_C;
    uint8 DFC_KnDetSens3PortAMax_C;
    uint8 DFC_KnDetSens3PortAMin_C;
    uint8 DFC_KnDetSens3PortBMax_C;
    uint8 DFC_KnDetSens3PortBMin_C;
    uint8 DFC_KnDetSens4PortAMax_C;
    uint8 DFC_KnDetSens4PortAMin_C;
    uint8 DFC_KnDetSens4PortBMax_C;
    uint8 DFC_KnDetSens4PortBMin_C;
    uint8 DFC_BstCtlDumpVlvErrShtrp_C;
    uint8 DFC_BstCtlWgErrShtrp_C;
    uint8 DFC_CmprnTest_C;
    uint8 DFC_DMTK_C;
    uint8 DFC_DMTLmax_C;
    uint8 DFC_DMTLmin_C;
    uint8 DFC_DMTLnpl_C;
    uint8 DFC_DMTLsig_C;
    uint8 DFC_LSV2max_C;
    uint8 DFC_LSVmax_C;
    uint8 DFC_MRlyErlyOpng_C;
    uint8 DFC_MRlyStk_C;
    uint8 DFC_SSpMon1loc_C;
    uint8 DFC_SSpMon2loc_C;
    uint8 DFC_SSpMon3loc_C;
    uint8 DFC_TESG_C;
    uint8 DFC_TESmax_C;
    uint8 DFC_TESmin_C;
    uint8 DFC_VehVMax_C;
    uint8 DFC_VehVPlaus_C;
    uint8 DFC_VehVSig_C;
    uint8 DFC_EEPRdErr_C;
    uint8 DFC_EEPWrErr_C;
    uint8 DFC_EV1max_C;
    uint8 DFC_EV1min_C;
    uint8 DFC_EV1sig_C;
    uint8 DFC_EV2max_C;
    uint8 DFC_EV2min_C;
    uint8 DFC_EV2sig_C;
    uint8 DFC_EV3max_C;
    uint8 DFC_EV3min_C;
    uint8 DFC_EV3sig_C;
    uint8 DFC_EV4max_C;
    uint8 DFC_EV4min_C;
    uint8 DFC_EV4sig_C;
    uint8 DFC_EV5max_C;
    uint8 DFC_EV5min_C;
    uint8 DFC_EV5sig_C;
    uint8 DFC_EV6max_C;
    uint8 DFC_EV6min_C;
    uint8 DFC_EV6sig_C;
    uint8 DFC_EV7max_C;
    uint8 DFC_EV7min_C;
    uint8 DFC_EV7sig_C;
    uint8 DFC_EV8max_C;
    uint8 DFC_EV8min_C;
    uint8 DFC_EV8sig_C;
    uint8 DFC_EpmCaSI1ErrSig_C;
    uint8 DFC_EpmCaSI1MntErr_C;
    uint8 DFC_EpmCaSI1NoSigMax_C;
    uint8 DFC_EpmCaSI1NoSigMin_C;
    uint8 DFC_EpmCaSI1OfsErr_C;
    uint8 DFC_EpmCrSDGI_C;
    uint8 DFC_EpmCrSErrSig_C;
    uint8 DFC_EpmCrSNoSig_C;
    uint8 DFC_MoCADCNTP_C;
    uint8 DFC_MoCADCTst_C;
    uint8 DFC_MoCComctErrMM_C;
    uint8 DFC_OCWDAActv_C;
    uint8 DFC_OCWDACom_C;
    uint8 DFC_OCWDAOvrVltg_C;
    uint8 DFC_SWReset_0_C;
    uint8 DFC_SWReset_1_C;
    uint8 DFC_SWReset_2_C;
    uint8 DFC_StopCntTmr_C;
} DFES_EnvRef_str;
#endif
#endif /* _DFES_EnvRef_DEF */

/* Defined Parameter DFES_Env */
#ifndef _DFES_Env_DEF
#define _DFES_Env_DEF
#ifndef DFES_ENV_STR_DEF
#define DFES_ENV_STR_DEF
typedef struct
{
    uint16 xSet1_CA[120];
    uint16 xSet2_CA[120];
    uint16 xSet3_CA[120];
    uint16 xSet4_CA[120];
    uint16 xSet5_CA[120];
    uint16 xSet6_CA[120];
    uint16 xSet7_CA[120];
    uint16 xSet8_CA[120];
    uint16 xSet9_CA[120];
    uint16 xSet10_CA[120];
    uint16 xSet11_CA[120];
    uint16 xSet12_CA[120];
    uint16 xSet13_CA[120];
    uint16 xSet14_CA[120];
    uint16 xSet15_CA[120];
    uint16 xSet16_CA[120];
    uint16 xSet17_CA[120];
    uint16 xSet18_CA[120];
    uint16 xSet19_CA[120];
    uint16 xSet20_CA[120];
} DFES_Env_str;
#endif
#endif /* _DFES_Env_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CMBTYP_SY */


/* CMBTYP_SY Typ=sw */
#ifndef CMBTYP_SY
  #define CMBTYP_SY 1L
#elif (CMBTYP_SY != 1L)
  #error >>>> 'CMBTYP_SY' multiple defined
#endif


/* Referenced System Constant DFES_BLKENTRY_SY */


/* DFES_BLKENTRY_SY Typ=ub */
#ifndef DFES_BLKENTRY_SY
  #define DFES_BLKENTRY_SY 0L
#elif (DFES_BLKENTRY_SY != 0L)
  #error >>>> 'DFES_BLKENTRY_SY' multiple defined
#endif


/* Referenced System Constant DFES_COMMILDEB_SY */


/* DFES_COMMILDEB_SY Typ=ub */
#ifndef DFES_COMMILDEB_SY
  #define DFES_COMMILDEB_SY 0L
#elif (DFES_COMMILDEB_SY != 0L)
  #error >>>> 'DFES_COMMILDEB_SY' multiple defined
#endif


/* Referenced System Constant DFES_DTC_TSTFAIL_SY */


/* DFES_DTC_TSTFAIL_SY Typ=sw */
#ifndef DFES_DTC_TSTFAIL_SY
  #define DFES_DTC_TSTFAIL_SY 0L
#elif (DFES_DTC_TSTFAIL_SY != 0L)
  #error >>>> 'DFES_DTC_TSTFAIL_SY' multiple defined
#endif


/* Referenced System Constant DFES_EOLCLR_SY */


/* DFES_EOLCLR_SY Typ=ub */
#ifndef DFES_EOLCLR_SY
  #define DFES_EOLCLR_SY 1L
#elif (DFES_EOLCLR_SY != 1L)
  #error >>>> 'DFES_EOLCLR_SY' multiple defined
#endif


/* Referenced System Constant DFES_EXTDFLT_SY */


/* DFES_EXTDFLT_SY Typ=ub */
#ifndef DFES_EXTDFLT_SY
  #define DFES_EXTDFLT_SY 0L
#elif (DFES_EXTDFLT_SY != 0L)
  #error >>>> 'DFES_EXTDFLT_SY' multiple defined
#endif


/* Referenced System Constant DFES_IRV_SY */


/* DFES_IRV_SY Typ=ub */
#ifndef DFES_IRV_SY
  #define DFES_IRV_SY 0L
#elif (DFES_IRV_SY != 0L)
  #error >>>> 'DFES_IRV_SY' multiple defined
#endif


/* Referenced System Constant DFES_PDTC_SY */


/* DFES_PDTC_SY Typ=ub */
#ifndef DFES_PDTC_SY
  #define DFES_PDTC_SY 0L
#elif (DFES_PDTC_SY != 0L)
  #error >>>> 'DFES_PDTC_SY' multiple defined
#endif


/* Referenced System Constant DFES_PRVTSTRDLT_SY */


/* DFES_PRVTSTRDLT_SY Typ=ub */
#ifndef DFES_PRVTSTRDLT_SY
  #define DFES_PRVTSTRDLT_SY 0L
#elif (DFES_PRVTSTRDLT_SY != 0L)
  #error >>>> 'DFES_PRVTSTRDLT_SY' multiple defined
#endif


/* Referenced System Constant DFES_VIS_BUF_SY */


/* DFES_VIS_BUF_SY Typ=sw */
#ifndef DFES_VIS_BUF_SY
  #define DFES_VIS_BUF_SY 0L
#elif (DFES_VIS_BUF_SY != 0L)
  #error >>>> 'DFES_VIS_BUF_SY' multiple defined
#endif


/* Referenced System Constant DSM2AUTOSAR_SC */


/* DSM2AUTOSAR_SC Typ=ub */
#ifndef DSM2AUTOSAR_SC
  #define DSM2AUTOSAR_SC 0L
#elif (DSM2AUTOSAR_SC != 0L)
  #error >>>> 'DSM2AUTOSAR_SC' multiple defined
#endif


/* Referenced System Constant DSM2SG_DFC_SY */


/* DSM2SG_DFC_SY Typ=ub */
#ifndef DSM2SG_DFC_SY
  #define DSM2SG_DFC_SY 0L
#elif (DSM2SG_DFC_SY != 0L)
  #error >>>> 'DSM2SG_DFC_SY' multiple defined
#endif


/* Referenced System Constant DSM2SG_EXCH_SC */


/* DSM2SG_EXCH_SC Typ=ub */
#ifndef DSM2SG_EXCH_SC
  #define DSM2SG_EXCH_SC 0L
#elif (DSM2SG_EXCH_SC != 0L)
  #error >>>> 'DSM2SG_EXCH_SC' multiple defined
#endif


/* Referenced System Constant DSM2SG_FID_SY */


/* DSM2SG_FID_SY Typ=ub */
#ifndef DSM2SG_FID_SY
  #define DSM2SG_FID_SY 0L
#elif (DSM2SG_FID_SY != 0L)
  #error >>>> 'DSM2SG_FID_SY' multiple defined
#endif


/* Referenced System Constant DSMAUX_TCSORT_SY */


/* DSMAUX_TCSORT_SY Typ=ub */
#ifndef DSMAUX_TCSORT_SY
  #define DSMAUX_TCSORT_SY 0L
#elif (DSMAUX_TCSORT_SY != 0L)
  #error >>>> 'DSMAUX_TCSORT_SY' multiple defined
#endif


/* Referenced System Constant DSMBAS_VAR_SY */


/* DSMBAS_VAR_SY Typ=sw */
#ifndef DSMBAS_VAR_SY
  #define DSMBAS_VAR_SY 999L
#elif (DSMBAS_VAR_SY != 999L)
  #error >>>> 'DSMBAS_VAR_SY' multiple defined
#endif


/* Referenced System Constant DSMCONF_SUPGLBDISBLMSK */


/* DSMCONF_SUPGLBDISBLMSK Typ=sl */
#ifndef DSMCONF_SUPGLBDISBLMSK
  #define DSMCONF_SUPGLBDISBLMSK 0L
#elif (DSMCONF_SUPGLBDISBLMSK != 0L)
  #error >>>> 'DSMCONF_SUPGLBDISBLMSK' multiple defined
#endif


/* Referenced System Constant DSM_DISBLGRPSIZE_SY */


/* DSM_DISBLGRPSIZE_SY Typ=uw */
#ifndef DSM_DISBLGRPSIZE_SY
  #define DSM_DISBLGRPSIZE_SY 0L
#elif (DSM_DISBLGRPSIZE_SY != 0L)
  #error >>>> 'DSM_DISBLGRPSIZE_SY' multiple defined
#endif


/* Referenced System Constant DSM_DSM2SG_SY */


/* DSM_DSM2SG_SY Typ=ub */
#ifndef DSM_DSM2SG_SY
  #define DSM_DSM2SG_SY 0L
#elif (DSM_DSM2SG_SY != 0L)
  #error >>>> 'DSM_DSM2SG_SY' multiple defined
#endif


/* Referenced System Constant DSM_FAILCNT_SY */


/* DSM_FAILCNT_SY Typ=ub */
#ifndef DSM_FAILCNT_SY
  #define DSM_FAILCNT_SY 0L
#elif (DSM_FAILCNT_SY != 0L)
  #error >>>> 'DSM_FAILCNT_SY' multiple defined
#endif


/* Referenced System Constant DSM_FAULTSEQ_SY */


/* DSM_FAULTSEQ_SY Typ=ub */
#ifndef DSM_FAULTSEQ_SY
  #define DSM_FAULTSEQ_SY 0L
#elif (DSM_FAULTSEQ_SY != 0L)
  #error >>>> 'DSM_FAULTSEQ_SY' multiple defined
#endif


/* Referenced System Constant DSM_PDTCTSTRA_SY */


/* DSM_PDTCTSTRA_SY Typ=ub */
#ifndef DSM_PDTCTSTRA_SY
  #define DSM_PDTCTSTRA_SY 0L
#elif (DSM_PDTCTSTRA_SY != 0L)
  #error >>>> 'DSM_PDTCTSTRA_SY' multiple defined
#endif


/* Referenced System Constant HESRV_HETYP_SY */


/* HESRV_HETYP_SY Typ=sw */
#ifndef HESRV_HETYP_SY
  #define HESRV_HETYP_SY 255L
#elif (HESRV_HETYP_SY != 255L)
  #error >>>> 'HESRV_HETYP_SY' multiple defined
#endif


/* Referenced System Constant HESRV_MASTERSLAVE */


/* HESRV_MASTERSLAVE Typ=sl */
#ifndef HESRV_MASTERSLAVE
  #define HESRV_MASTERSLAVE 1L
#elif (HESRV_MASTERSLAVE != 1L)
  #error >>>> 'HESRV_MASTERSLAVE' multiple defined
#endif


/* Local System Constant DFES_AGINGCTR_VAR1 */


/* DFES_AGINGCTR_VAR1 Typ=sl */
#ifndef DFES_AGINGCTR_VAR1
  #define DFES_AGINGCTR_VAR1 0L
#elif (DFES_AGINGCTR_VAR1 != 0L)
  #error >>>> 'DFES_AGINGCTR_VAR1' multiple defined
#endif


/* Local System Constant DFES_MONITORING_LEN_SY */


/* DFES_MONITORING_LEN_SY Typ=sl */
#ifndef DFES_MONITORING_LEN_SY
  #define DFES_MONITORING_LEN_SY 1L
#elif (DFES_MONITORING_LEN_SY != 1L)
  #error >>>> 'DFES_MONITORING_LEN_SY' multiple defined
#endif


/* Local System Constant DFES_NUMENTRIES_SY */


/* DFES_NUMENTRIES_SY Typ=sl */
#ifndef DFES_NUMENTRIES_SY
  #define DFES_NUMENTRIES_SY 20L
#elif (DFES_NUMENTRIES_SY != 20L)
  #error >>>> 'DFES_NUMENTRIES_SY' multiple defined
#endif


/* Local System Constant DFES_NUM_COMMON_ENV_DID */


/* DFES_NUM_COMMON_ENV_DID Typ=sl */
#ifndef DFES_NUM_COMMON_ENV_DID
  #define DFES_NUM_COMMON_ENV_DID 0L
#elif (DFES_NUM_COMMON_ENV_DID != 0L)
  #error >>>> 'DFES_NUM_COMMON_ENV_DID' multiple defined
#endif


/* Local System Constant DFES_NUM_COMMON_ENV_SIGNALS */


/* DFES_NUM_COMMON_ENV_SIGNALS Typ=sl */
#ifndef DFES_NUM_COMMON_ENV_SIGNALS
  #define DFES_NUM_COMMON_ENV_SIGNALS 0L
#elif (DFES_NUM_COMMON_ENV_SIGNALS != 0L)
  #error >>>> 'DFES_NUM_COMMON_ENV_SIGNALS' multiple defined
#endif


/* Local System Constant DFES_NUM_ENV_BLK */


/* DFES_NUM_ENV_BLK Typ=sl */
#ifndef DFES_NUM_ENV_BLK
  #define DFES_NUM_ENV_BLK 1L
#elif (DFES_NUM_ENV_BLK != 1L)
  #error >>>> 'DFES_NUM_ENV_BLK' multiple defined
#endif


/* Local System Constant DFES_NUM_ENV_BYT */


/* DFES_NUM_ENV_BYT Typ=sl */
#ifndef DFES_NUM_ENV_BYT
  #define DFES_NUM_ENV_BYT 240L
#elif (DFES_NUM_ENV_BYT != 240L)
  #error >>>> 'DFES_NUM_ENV_BYT' multiple defined
#endif


/* Local System Constant DFES_NUM_ENV_DID */


/* DFES_NUM_ENV_DID Typ=sl */
#ifndef DFES_NUM_ENV_DID
  #define DFES_NUM_ENV_DID 0L
#elif (DFES_NUM_ENV_DID != 0L)
  #error >>>> 'DFES_NUM_ENV_DID' multiple defined
#endif


/* Local System Constant DFES_NUM_ENV_SIGNALS */


/* DFES_NUM_ENV_SIGNALS Typ=sl */
#ifndef DFES_NUM_ENV_SIGNALS
  #define DFES_NUM_ENV_SIGNALS 120L
#elif (DFES_NUM_ENV_SIGNALS != 120L)
  #error >>>> 'DFES_NUM_ENV_SIGNALS' multiple defined
#endif


/* Local System Constant DFES_NUM_EXFRZFR_BYT */


/* DFES_NUM_EXFRZFR_BYT Typ=sl */
#ifndef DFES_NUM_EXFRZFR_BYT
  #define DFES_NUM_EXFRZFR_BYT 0L
#elif (DFES_NUM_EXFRZFR_BYT != 0L)
  #error >>>> 'DFES_NUM_EXFRZFR_BYT' multiple defined
#endif


/* Local System Constant DFES_NUM_FRFR_DID */


/* DFES_NUM_FRFR_DID Typ=sl */
#ifndef DFES_NUM_FRFR_DID
  #define DFES_NUM_FRFR_DID 0L
#elif (DFES_NUM_FRFR_DID != 0L)
  #error >>>> 'DFES_NUM_FRFR_DID' multiple defined
#endif


/* Local System Constant DFES_NUM_FRZFR_BYT */


/* DFES_NUM_FRZFR_BYT Typ=sl */
#ifndef DFES_NUM_FRZFR_BYT
  #define DFES_NUM_FRZFR_BYT 2L
#elif (DFES_NUM_FRZFR_BYT != 2L)
  #error >>>> 'DFES_NUM_FRZFR_BYT' multiple defined
#endif


/* Local System Constant DFES_SIMCOND_READONLY */


/* DFES_SIMCOND_READONLY Typ=sl */
#ifndef DFES_SIMCOND_READONLY
  #define DFES_SIMCOND_READONLY 1L
#elif (DFES_SIMCOND_READONLY != 1L)
  #error >>>> 'DFES_SIMCOND_READONLY' multiple defined
#endif


/* Local System Constant DSMCONF_DTCTABLE_DTCM */


/* DSMCONF_DTCTABLE_DTCM Typ=sl */
#ifndef DSMCONF_DTCTABLE_DTCM
  #define DSMCONF_DTCTABLE_DTCM 0L
#elif (DSMCONF_DTCTABLE_DTCM != 0L)
  #error >>>> 'DSMCONF_DTCTABLE_DTCM' multiple defined
#endif


/* Local System Constant DSMCONF_DTCTABLE_DTCX */


/* DSMCONF_DTCTABLE_DTCX Typ=sl */
#ifndef DSMCONF_DTCTABLE_DTCX
  #define DSMCONF_DTCTABLE_DTCX 0L
#elif (DSMCONF_DTCTABLE_DTCX != 0L)
  #error >>>> 'DSMCONF_DTCTABLE_DTCX' multiple defined
#endif


/* Local System Constant DSMCONF_NUM_CLASSES */


/* DSMCONF_NUM_CLASSES Typ=sl */
#ifndef DSMCONF_NUM_CLASSES
  #define DSMCONF_NUM_CLASSES 22L
#elif (DSMCONF_NUM_CLASSES != 22L)
  #error >>>> 'DSMCONF_NUM_CLASSES' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBDBLV */


/* DSMCONF_SUPGLBDBLV Typ=sl */
#ifndef DSMCONF_SUPGLBDBLV
  #define DSMCONF_SUPGLBDBLV 1L
#elif (DSMCONF_SUPGLBDBLV != 1L)
  #error >>>> 'DSMCONF_SUPGLBDBLV' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBENVREF */


/* DSMCONF_SUPGLBENVREF Typ=sl */
#ifndef DSMCONF_SUPGLBENVREF
  #define DSMCONF_SUPGLBENVREF 0L
#elif (DSMCONF_SUPGLBENVREF != 0L)
  #error >>>> 'DSMCONF_SUPGLBENVREF' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBFAULTTYP */


/* DSMCONF_SUPGLBFAULTTYP Typ=sl */
#ifndef DSMCONF_SUPGLBFAULTTYP
  #define DSMCONF_SUPGLBFAULTTYP 1L
#elif (DSMCONF_SUPGLBFAULTTYP != 1L)
  #error >>>> 'DSMCONF_SUPGLBFAULTTYP' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBFLTCLS */


/* DSMCONF_SUPGLBFLTCLS Typ=sl */
#ifndef DSMCONF_SUPGLBFLTCLS
  #define DSMCONF_SUPGLBFLTCLS 0L
#elif (DSMCONF_SUPGLBFLTCLS != 0L)
  #error >>>> 'DSMCONF_SUPGLBFLTCLS' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: DFES_ChkLstDltDemExCond_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __DFES_CHKLSTDLTDEMEXCOND_MP_EXT__
#define __DFES_CHKLSTDLTDEMEXCOND_MP_EXT__
extern uint8 DFES_ChkLstDltDemExCond_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Local Variable: DFES_ctDef */


/* Local Variable: DFES_ctDel */


/* Local Variable: DFES_ctEntry */


/* Local Variable: DFES_ctFrq */


/* Local Variable: DFES_ctManuDef */


/* Local Variable: DFES_ctManuOk */


/* Local Variable: DFES_ctMIL */


/* Local Variable: DFES_ctOBD */


/* Local Variable: DFES_ctOBDPend */


/* Local Variable: DFES_ctOk */


/* Local Variable: DFES_ctSrv */


/* Local Variable: DFES_EnvBlock */


/* Local Variable: DFES_FrzFrVal */


/* Local Variable: DFES_idxHash */


/* Local Variable: DFES_idxLink */


/* Local Variable: DFES_idxPrioQueue */


/* Local Variable: DFES_idxSequence */


/* Local Variable: DFES_idxVisible */


/* Local Variable: DFES_ISOFrstCnfDFC */


/* Local Variable: DFES_ISOFrstFailDFC */


/* Local Variable: DFES_ISORcntCnfDFC */


/* Local Variable: DFES_ISORcntFailDFC */


/* Local Variable: DFES_MonEvnt */


/* Local Variable: DFES_MonObjt */


/* Local Variable: DFES_MonParm */


/* Local Variable: DFES_MonPtr */


/* Local Variable: DFES_numDFC */


/* Local Variable: DFES_numEntryAvl */


/* Local Variable: DFES_numEnvSize */


/* Local Variable: DFES_numExtdFrzFrmSize */


/* Local Variable: DFES_numFrzFrmSize */


/* Local Variable: DFES_Order */


/* Local Variable: DFES_OutLamps */


/* Local Variable: DFES_OutTester */


/* Local Variable: DFES_OutTester2 */


/* Local Variable: DFES_stChk */


/* Local Variable: DFES_stChkFault */


/* Local Variable: DFES_stCounters */


/* Local Variable: DFES_stCtlSetting */


/* Local Variable: DFES_stDTCRecUpdt */


/* Local Variable: DFES_stDTCStorage */


/* Local Variable: DFES_stEntry */


/* Local Variable: DFES_stErrDia */


/* Local Variable: DFES_stErrLamp */


/* Local Variable: DFES_stOutstate */


/* Local Variable: DFES_xAsgnEnvAllDataSize */


/* Imported Variable: DFC_idxReInitDFC */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: DSMAUX_stDCy */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema MediumNoReIni +++++ */


/* Local Variable: DFES_PDTCStore */


/* Local Variable: DFES_stPrgEvt */



#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of DFC -- */
/* +++++ Addressschema ADS_PTA_01 +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema ADS_PTA_02 +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of DSMAux -- */
/* +++++ Addressschema ADS_PTA_01 +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DFES_ADS_PTA_01_T_DEF
#define DATA_DFES_ADS_PTA_01_T_DEF
typedef struct
{
    /* ----- Parameter DFES_Cls ----- */
    DFES_Cls_str _DFES_Cls;
    /* ----- Parameter DFES_DbLv_C ----- */
    uint8 _DFES_DbLv_C;
    /* ----- Parameter DFES_FaultTyp_C ----- */
    uint8 _DFES_FaultTyp_C;
    /* ----- Parameter DFES_MonEvtMSK0_C ----- */
    uint16 _DFES_MonEvtMSK0_C;
    /* ----- Parameter DFES_MonEvtMSK1_C ----- */
    uint16 _DFES_MonEvtMSK1_C;
    /* ----- Parameter DFES_MonRepeat_C ----- */
    uint8 _DFES_MonRepeat_C;
    /* ----- Parameter DFES_numClsDlt_CA ----- */
    uint8 _DFES_numClsDlt_CA[22];
    /* ----- Parameter DFES_numClsFaultCycl_CA ----- */
    uint8 _DFES_numClsFaultCycl_CA[22];
    /* ----- Parameter DFES_numClsHealCycl_CA ----- */
    uint8 _DFES_numClsHealCycl_CA[22];
    /* ----- Parameter DFES_numClsPndDlt_CA ----- */
    uint8 _DFES_numClsPndDlt_CA[22];
    /* ----- Parameter DFES_numClsSvcDlt_CA ----- */
    uint8 _DFES_numClsSvcDlt_CA[22];
    /* ----- Parameter DFES_numClsSVSFaultCycl_CA ----- */
    uint8 _DFES_numClsSVSFaultCycl_CA[22];
    /* ----- Parameter DFES_numClsSVSHealCycl_CA ----- */
    uint8 _DFES_numClsSVSHealCycl_CA[22];
    /* ----- Parameter DFES_ThresSimCond ----- */
    DFES_ThresSimCond_str _DFES_ThresSimCond;
    /* ----- Parameter DFES_xAsgnExtdFrzFrSig_CA ----- */
    uint16 _DFES_xAsgnExtdFrzFrSig_CA[1];
    /* ----- Parameter DFES_xAsgnFrzFrSig_CA ----- */
    uint16 _DFES_xAsgnFrzFrSig_CA[1];
    /* ----- Parameter DFES_xClsDltTrg_CA ----- */
    uint8 _DFES_xClsDltTrg_CA[22];
    /* ----- Parameter DFES_xClsFaultTrg_CA ----- */
    uint8 _DFES_xClsFaultTrg_CA[22];
    /* ----- Parameter DFES_xClsFltMIL_CA ----- */
    uint8 _DFES_xClsFltMIL_CA[22];
    /* ----- Parameter DFES_xClsFltSVS_CA ----- */
    uint8 _DFES_xClsFltSVS_CA[22];
    /* ----- Parameter DFES_xClsHealTrg_CA ----- */
    uint8 _DFES_xClsHealTrg_CA[22];
    /* ----- Parameter DFES_xClsPndDltTrg_CA ----- */
    uint8 _DFES_xClsPndDltTrg_CA[22];
    /* ----- Parameter DFES_xClsPrio_CA ----- */
    uint8 _DFES_xClsPrio_CA[22];
    /* ----- Parameter DFES_xClsSvcDltTrg_CA ----- */
    uint8 _DFES_xClsSvcDltTrg_CA[22];
    /* ----- Parameter DFES_xClsSVSFaultTrg_CA ----- */
    uint8 _DFES_xClsSVSFaultTrg_CA[22];
    /* ----- Parameter DFES_xClsSVSHealTrg_CA ----- */
    uint8 _DFES_xClsSVSHealTrg_CA[22];
} DATA_DFES_ADS_PTA_01_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DFES_ADS_PTA_01_t DATA_DFES_ADS_PTA_01
    __attribute__ ((asection (".pta_dataADS_PTA_01_DFES","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DFES_ADS_PTA_01_t * const VECT_DFES_ADS_PTA_01
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_01_DFES","f=as")));
#endif

/* +++++ Addressschema ADS_PTA_03 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DFES_ADS_PTA_03_T_DEF
#define DATA_DFES_ADS_PTA_03_T_DEF
typedef struct
{
    /* ----- Parameter DFES_DTCO ----- */
    DFES_DTCO_str _DFES_DTCO;
} DATA_DFES_ADS_PTA_03_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DFES_ADS_PTA_03_t DATA_DFES_ADS_PTA_03
    __attribute__ ((asection (".pta_dataADS_PTA_03_DFES","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DFES_ADS_PTA_03_t * const VECT_DFES_ADS_PTA_03
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_03_DFES","f=as")));
#endif

/* +++++ Addressschema ADS_PTA_06 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DFES_ADS_PTA_06_T_DEF
#define DATA_DFES_ADS_PTA_06_T_DEF
typedef struct
{
    /* ----- Parameter DFES_EnvRef ----- */
    DFES_EnvRef_str _DFES_EnvRef;
} DATA_DFES_ADS_PTA_06_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DFES_ADS_PTA_06_t DATA_DFES_ADS_PTA_06
    __attribute__ ((asection (".pta_dataADS_PTA_06_DFES","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DFES_ADS_PTA_06_t * const VECT_DFES_ADS_PTA_06
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_06_DFES","f=as")));
#endif

/* +++++ Addressschema ADS_PTA_08 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DFES_ADS_PTA_08_T_DEF
#define DATA_DFES_ADS_PTA_08_T_DEF
typedef struct
{
    /* ----- Parameter DFES_Env ----- */
    DFES_Env_str _DFES_Env;
} DATA_DFES_ADS_PTA_08_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DFES_ADS_PTA_08_t DATA_DFES_ADS_PTA_08
    __attribute__ ((asection (".pta_dataADS_PTA_08_DFES","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DFES_ADS_PTA_08_t * const VECT_DFES_ADS_PTA_08
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_08_DFES","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumNoReIni +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Macro for local Parameter DFES_Cls -- */
#ifndef DFES_Cls
#define DFES_Cls (VECT_DFES_ADS_PTA_01->_DFES_Cls)
#endif

#ifndef RP_DFES_Cls
#define RP_DFES_Cls (DATA_DFES_ADS_PTA_01._DFES_Cls)
#endif

#ifndef __DFES_Cls
#define __DFES_Cls (VECT_DFES_ADS_PTA_01->_DFES_Cls)
#endif

/* -- Macro for local Parameter DFES_DbLv_C -- */
#ifndef DFES_DbLv_C
#define DFES_DbLv_C (VECT_DFES_ADS_PTA_01->_DFES_DbLv_C)
#endif

#ifndef RP_DFES_DbLv_C
#define RP_DFES_DbLv_C (DATA_DFES_ADS_PTA_01._DFES_DbLv_C)
#endif

#ifndef __DFES_DbLv_C
#define __DFES_DbLv_C (VECT_DFES_ADS_PTA_01->_DFES_DbLv_C)
#endif

/* -- Macro for local Parameter DFES_FaultTyp_C -- */
#ifndef DFES_FaultTyp_C
#define DFES_FaultTyp_C (VECT_DFES_ADS_PTA_01->_DFES_FaultTyp_C)
#endif

#ifndef RP_DFES_FaultTyp_C
#define RP_DFES_FaultTyp_C (DATA_DFES_ADS_PTA_01._DFES_FaultTyp_C)
#endif

#ifndef __DFES_FaultTyp_C
#define __DFES_FaultTyp_C (VECT_DFES_ADS_PTA_01->_DFES_FaultTyp_C)
#endif

/* -- Macro for local Parameter DFES_MonEvtMSK0_C -- */
#ifndef DFES_MonEvtMSK0_C
#define DFES_MonEvtMSK0_C (VECT_DFES_ADS_PTA_01->_DFES_MonEvtMSK0_C)
#endif

#ifndef RP_DFES_MonEvtMSK0_C
#define RP_DFES_MonEvtMSK0_C (DATA_DFES_ADS_PTA_01._DFES_MonEvtMSK0_C)
#endif

#ifndef __DFES_MonEvtMSK0_C
#define __DFES_MonEvtMSK0_C (VECT_DFES_ADS_PTA_01->_DFES_MonEvtMSK0_C)
#endif

/* -- Macro for local Parameter DFES_MonEvtMSK1_C -- */
#ifndef DFES_MonEvtMSK1_C
#define DFES_MonEvtMSK1_C (VECT_DFES_ADS_PTA_01->_DFES_MonEvtMSK1_C)
#endif

#ifndef RP_DFES_MonEvtMSK1_C
#define RP_DFES_MonEvtMSK1_C (DATA_DFES_ADS_PTA_01._DFES_MonEvtMSK1_C)
#endif

#ifndef __DFES_MonEvtMSK1_C
#define __DFES_MonEvtMSK1_C (VECT_DFES_ADS_PTA_01->_DFES_MonEvtMSK1_C)
#endif

/* -- Macro for local Parameter DFES_MonRepeat_C -- */
#ifndef DFES_MonRepeat_C
#define DFES_MonRepeat_C (VECT_DFES_ADS_PTA_01->_DFES_MonRepeat_C)
#endif

#ifndef RP_DFES_MonRepeat_C
#define RP_DFES_MonRepeat_C (DATA_DFES_ADS_PTA_01._DFES_MonRepeat_C)
#endif

#ifndef __DFES_MonRepeat_C
#define __DFES_MonRepeat_C (VECT_DFES_ADS_PTA_01->_DFES_MonRepeat_C)
#endif

/* -- Macro for local Parameter DFES_numClsDlt_CA -- */
#ifndef DFES_numClsDlt_CA
#define DFES_numClsDlt_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsDlt_CA)
#endif

#ifndef RP_DFES_numClsDlt_CA
#define RP_DFES_numClsDlt_CA (DATA_DFES_ADS_PTA_01._DFES_numClsDlt_CA)
#endif

#ifndef __DFES_numClsDlt_CA
#define __DFES_numClsDlt_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsDlt_CA)
#endif

/* -- Macro for local Parameter DFES_numClsFaultCycl_CA -- */
#ifndef DFES_numClsFaultCycl_CA
#define DFES_numClsFaultCycl_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsFaultCycl_CA)
#endif

#ifndef RP_DFES_numClsFaultCycl_CA
#define RP_DFES_numClsFaultCycl_CA (DATA_DFES_ADS_PTA_01._DFES_numClsFaultCycl_CA)
#endif

#ifndef __DFES_numClsFaultCycl_CA
#define __DFES_numClsFaultCycl_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsFaultCycl_CA)
#endif

/* -- Macro for local Parameter DFES_numClsHealCycl_CA -- */
#ifndef DFES_numClsHealCycl_CA
#define DFES_numClsHealCycl_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsHealCycl_CA)
#endif

#ifndef RP_DFES_numClsHealCycl_CA
#define RP_DFES_numClsHealCycl_CA (DATA_DFES_ADS_PTA_01._DFES_numClsHealCycl_CA)
#endif

#ifndef __DFES_numClsHealCycl_CA
#define __DFES_numClsHealCycl_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsHealCycl_CA)
#endif

/* -- Macro for local Parameter DFES_numClsPndDlt_CA -- */
#ifndef DFES_numClsPndDlt_CA
#define DFES_numClsPndDlt_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsPndDlt_CA)
#endif

#ifndef RP_DFES_numClsPndDlt_CA
#define RP_DFES_numClsPndDlt_CA (DATA_DFES_ADS_PTA_01._DFES_numClsPndDlt_CA)
#endif

#ifndef __DFES_numClsPndDlt_CA
#define __DFES_numClsPndDlt_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsPndDlt_CA)
#endif

/* -- Macro for local Parameter DFES_numClsSvcDlt_CA -- */
#ifndef DFES_numClsSvcDlt_CA
#define DFES_numClsSvcDlt_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsSvcDlt_CA)
#endif

#ifndef RP_DFES_numClsSvcDlt_CA
#define RP_DFES_numClsSvcDlt_CA (DATA_DFES_ADS_PTA_01._DFES_numClsSvcDlt_CA)
#endif

#ifndef __DFES_numClsSvcDlt_CA
#define __DFES_numClsSvcDlt_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsSvcDlt_CA)
#endif

/* -- Macro for local Parameter DFES_numClsSVSFaultCycl_CA -- */
#ifndef DFES_numClsSVSFaultCycl_CA
#define DFES_numClsSVSFaultCycl_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsSVSFaultCycl_CA)
#endif

#ifndef RP_DFES_numClsSVSFaultCycl_CA
#define RP_DFES_numClsSVSFaultCycl_CA (DATA_DFES_ADS_PTA_01._DFES_numClsSVSFaultCycl_CA)
#endif

#ifndef __DFES_numClsSVSFaultCycl_CA
#define __DFES_numClsSVSFaultCycl_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsSVSFaultCycl_CA)
#endif

/* -- Macro for local Parameter DFES_numClsSVSHealCycl_CA -- */
#ifndef DFES_numClsSVSHealCycl_CA
#define DFES_numClsSVSHealCycl_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsSVSHealCycl_CA)
#endif

#ifndef RP_DFES_numClsSVSHealCycl_CA
#define RP_DFES_numClsSVSHealCycl_CA (DATA_DFES_ADS_PTA_01._DFES_numClsSVSHealCycl_CA)
#endif

#ifndef __DFES_numClsSVSHealCycl_CA
#define __DFES_numClsSVSHealCycl_CA (VECT_DFES_ADS_PTA_01->_DFES_numClsSVSHealCycl_CA)
#endif

/* -- Macro for local Parameter DFES_ThresSimCond -- */
#ifndef DFES_ThresSimCond
#define DFES_ThresSimCond (VECT_DFES_ADS_PTA_01->_DFES_ThresSimCond)
#endif

#ifndef RP_DFES_ThresSimCond
#define RP_DFES_ThresSimCond (DATA_DFES_ADS_PTA_01._DFES_ThresSimCond)
#endif

#ifndef __DFES_ThresSimCond
#define __DFES_ThresSimCond (VECT_DFES_ADS_PTA_01->_DFES_ThresSimCond)
#endif

/* -- Macro for local Parameter DFES_xAsgnExtdFrzFrSig_CA -- */
#ifndef DFES_xAsgnExtdFrzFrSig_CA
#define DFES_xAsgnExtdFrzFrSig_CA (VECT_DFES_ADS_PTA_01->_DFES_xAsgnExtdFrzFrSig_CA)
#endif

#ifndef RP_DFES_xAsgnExtdFrzFrSig_CA
#define RP_DFES_xAsgnExtdFrzFrSig_CA (DATA_DFES_ADS_PTA_01._DFES_xAsgnExtdFrzFrSig_CA)
#endif

#ifndef __DFES_xAsgnExtdFrzFrSig_CA
#define __DFES_xAsgnExtdFrzFrSig_CA (VECT_DFES_ADS_PTA_01->_DFES_xAsgnExtdFrzFrSig_CA)
#endif

/* -- Macro for local Parameter DFES_xAsgnFrzFrSig_CA -- */
#ifndef DFES_xAsgnFrzFrSig_CA
#define DFES_xAsgnFrzFrSig_CA (VECT_DFES_ADS_PTA_01->_DFES_xAsgnFrzFrSig_CA)
#endif

#ifndef RP_DFES_xAsgnFrzFrSig_CA
#define RP_DFES_xAsgnFrzFrSig_CA (DATA_DFES_ADS_PTA_01._DFES_xAsgnFrzFrSig_CA)
#endif

#ifndef __DFES_xAsgnFrzFrSig_CA
#define __DFES_xAsgnFrzFrSig_CA (VECT_DFES_ADS_PTA_01->_DFES_xAsgnFrzFrSig_CA)
#endif

/* -- Macro for local Parameter DFES_xClsDltTrg_CA -- */
#ifndef DFES_xClsDltTrg_CA
#define DFES_xClsDltTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsDltTrg_CA)
#endif

#ifndef RP_DFES_xClsDltTrg_CA
#define RP_DFES_xClsDltTrg_CA (DATA_DFES_ADS_PTA_01._DFES_xClsDltTrg_CA)
#endif

#ifndef __DFES_xClsDltTrg_CA
#define __DFES_xClsDltTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsDltTrg_CA)
#endif

/* -- Macro for local Parameter DFES_xClsFaultTrg_CA -- */
#ifndef DFES_xClsFaultTrg_CA
#define DFES_xClsFaultTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsFaultTrg_CA)
#endif

#ifndef RP_DFES_xClsFaultTrg_CA
#define RP_DFES_xClsFaultTrg_CA (DATA_DFES_ADS_PTA_01._DFES_xClsFaultTrg_CA)
#endif

#ifndef __DFES_xClsFaultTrg_CA
#define __DFES_xClsFaultTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsFaultTrg_CA)
#endif

/* -- Macro for local Parameter DFES_xClsFltMIL_CA -- */
#ifndef DFES_xClsFltMIL_CA
#define DFES_xClsFltMIL_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsFltMIL_CA)
#endif

#ifndef RP_DFES_xClsFltMIL_CA
#define RP_DFES_xClsFltMIL_CA (DATA_DFES_ADS_PTA_01._DFES_xClsFltMIL_CA)
#endif

#ifndef __DFES_xClsFltMIL_CA
#define __DFES_xClsFltMIL_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsFltMIL_CA)
#endif

/* -- Macro for local Parameter DFES_xClsFltSVS_CA -- */
#ifndef DFES_xClsFltSVS_CA
#define DFES_xClsFltSVS_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsFltSVS_CA)
#endif

#ifndef RP_DFES_xClsFltSVS_CA
#define RP_DFES_xClsFltSVS_CA (DATA_DFES_ADS_PTA_01._DFES_xClsFltSVS_CA)
#endif

#ifndef __DFES_xClsFltSVS_CA
#define __DFES_xClsFltSVS_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsFltSVS_CA)
#endif

/* -- Macro for local Parameter DFES_xClsHealTrg_CA -- */
#ifndef DFES_xClsHealTrg_CA
#define DFES_xClsHealTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsHealTrg_CA)
#endif

#ifndef RP_DFES_xClsHealTrg_CA
#define RP_DFES_xClsHealTrg_CA (DATA_DFES_ADS_PTA_01._DFES_xClsHealTrg_CA)
#endif

#ifndef __DFES_xClsHealTrg_CA
#define __DFES_xClsHealTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsHealTrg_CA)
#endif

/* -- Macro for local Parameter DFES_xClsPndDltTrg_CA -- */
#ifndef DFES_xClsPndDltTrg_CA
#define DFES_xClsPndDltTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsPndDltTrg_CA)
#endif

#ifndef RP_DFES_xClsPndDltTrg_CA
#define RP_DFES_xClsPndDltTrg_CA (DATA_DFES_ADS_PTA_01._DFES_xClsPndDltTrg_CA)
#endif

#ifndef __DFES_xClsPndDltTrg_CA
#define __DFES_xClsPndDltTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsPndDltTrg_CA)
#endif

/* -- Macro for local Parameter DFES_xClsPrio_CA -- */
#ifndef DFES_xClsPrio_CA
#define DFES_xClsPrio_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsPrio_CA)
#endif

#ifndef RP_DFES_xClsPrio_CA
#define RP_DFES_xClsPrio_CA (DATA_DFES_ADS_PTA_01._DFES_xClsPrio_CA)
#endif

#ifndef __DFES_xClsPrio_CA
#define __DFES_xClsPrio_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsPrio_CA)
#endif

/* -- Macro for local Parameter DFES_xClsSvcDltTrg_CA -- */
#ifndef DFES_xClsSvcDltTrg_CA
#define DFES_xClsSvcDltTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsSvcDltTrg_CA)
#endif

#ifndef RP_DFES_xClsSvcDltTrg_CA
#define RP_DFES_xClsSvcDltTrg_CA (DATA_DFES_ADS_PTA_01._DFES_xClsSvcDltTrg_CA)
#endif

#ifndef __DFES_xClsSvcDltTrg_CA
#define __DFES_xClsSvcDltTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsSvcDltTrg_CA)
#endif

/* -- Macro for local Parameter DFES_xClsSVSFaultTrg_CA -- */
#ifndef DFES_xClsSVSFaultTrg_CA
#define DFES_xClsSVSFaultTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsSVSFaultTrg_CA)
#endif

#ifndef RP_DFES_xClsSVSFaultTrg_CA
#define RP_DFES_xClsSVSFaultTrg_CA (DATA_DFES_ADS_PTA_01._DFES_xClsSVSFaultTrg_CA)
#endif

#ifndef __DFES_xClsSVSFaultTrg_CA
#define __DFES_xClsSVSFaultTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsSVSFaultTrg_CA)
#endif

/* -- Macro for local Parameter DFES_xClsSVSHealTrg_CA -- */
#ifndef DFES_xClsSVSHealTrg_CA
#define DFES_xClsSVSHealTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsSVSHealTrg_CA)
#endif

#ifndef RP_DFES_xClsSVSHealTrg_CA
#define RP_DFES_xClsSVSHealTrg_CA (DATA_DFES_ADS_PTA_01._DFES_xClsSVSHealTrg_CA)
#endif

#ifndef __DFES_xClsSVSHealTrg_CA
#define __DFES_xClsSVSHealTrg_CA (VECT_DFES_ADS_PTA_01->_DFES_xClsSVSHealTrg_CA)
#endif

/* +++++ Addressschema ADS_PTA_03 +++++ */

/* -- Macro for local Parameter DFES_DTCO -- */
#ifndef DFES_DTCO
#define DFES_DTCO (VECT_DFES_ADS_PTA_03->_DFES_DTCO)
#endif

#ifndef RP_DFES_DTCO
#define RP_DFES_DTCO (DATA_DFES_ADS_PTA_03._DFES_DTCO)
#endif

#ifndef __DFES_DTCO
#define __DFES_DTCO (VECT_DFES_ADS_PTA_03->_DFES_DTCO)
#endif

/* +++++ Addressschema ADS_PTA_06 +++++ */

/* -- Macro for local Parameter DFES_EnvRef -- */
#ifndef DFES_EnvRef
#define DFES_EnvRef (VECT_DFES_ADS_PTA_06->_DFES_EnvRef)
#endif

#ifndef RP_DFES_EnvRef
#define RP_DFES_EnvRef (DATA_DFES_ADS_PTA_06._DFES_EnvRef)
#endif

#ifndef __DFES_EnvRef
#define __DFES_EnvRef (VECT_DFES_ADS_PTA_06->_DFES_EnvRef)
#endif

/* +++++ Addressschema ADS_PTA_08 +++++ */

/* -- Macro for local Parameter DFES_Env -- */
#ifndef DFES_Env
#define DFES_Env (VECT_DFES_ADS_PTA_08->_DFES_Env)
#endif

#ifndef RP_DFES_Env
#define RP_DFES_Env (DATA_DFES_ADS_PTA_08._DFES_Env)
#endif

#ifndef __DFES_Env
#define __DFES_Env (VECT_DFES_ADS_PTA_08->_DFES_Env)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumNoReIni +++++ */


#undef _DAT_H
#endif /* _DFES_DAT_H */
