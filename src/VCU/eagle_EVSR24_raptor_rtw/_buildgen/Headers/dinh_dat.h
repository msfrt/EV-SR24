#ifndef _DINH_DAT_H
#define _DINH_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DINH_FId */
#ifndef _DINH_FId_DEF
#define _DINH_FId_DEF
#ifndef DINH_FID_STR_DEF
#define DINH_FID_STR_DEF
typedef struct
{
    uint16 DFC_Cy327SpiCom_CA[10];
    uint16 DFC_MonUMaxSupply1_CA[10];
    uint16 DFC_MonUMinSupply1_CA[10];
    uint16 DFC_SSpMon1_CA[17];
    uint16 DFC_SSpMon1OV_CA[10];
    uint16 DFC_SSpMon1SCG_CA[10];
    uint16 DFC_SSpMon1UV_CA[10];
    uint16 DFC_SSpMon2_CA[16];
    uint16 DFC_SSpMon2OV_CA[10];
    uint16 DFC_SSpMon2SCG_CA[10];
    uint16 DFC_SSpMon2UV_CA[10];
    uint16 DFC_SSpMon3_CA[10];
    uint16 DFC_SSpMon3OV_CA[10];
    uint16 DFC_SSpMon3SCG_CA[10];
    uint16 DFC_SSpMon3UV_CA[10];
    uint16 DFC_SSpMonOT_CA[10];
    uint16 DFC_IgnClPsClBenchErr1_CA[10];
    uint16 DFC_IgnClPsClBenchErr2_CA[10];
    uint16 DFC_IgnClPsDevIdentErr1_CA[10];
    uint16 DFC_IgnClPsDevIdentErr2_CA[10];
    uint16 DFC_IgnClPsDevInitErr1_CA[10];
    uint16 DFC_IgnClPsDevInitErr2_CA[10];
    uint16 DFC_IgnClPsDevSpiErr1_CA[10];
    uint16 DFC_IgnClPsDevSpiErr2_CA[10];
    uint16 DFC_IgnClPsOpenLoad0_CA[10];
    uint16 DFC_IgnClPsOpenLoad1_CA[10];
    uint16 DFC_IgnClPsOpenLoad2_CA[10];
    uint16 DFC_IgnClPsOpenLoad3_CA[10];
    uint16 DFC_IgnClPsOpenLoad4_CA[10];
    uint16 DFC_IgnClPsOpenLoad5_CA[10];
    uint16 DFC_IgnClPsOpenLoad6_CA[10];
    uint16 DFC_IgnClPsOpenLoad7_CA[10];
    uint16 DFC_IgnClPsShCirBatt0_CA[10];
    uint16 DFC_IgnClPsShCirBatt1_CA[10];
    uint16 DFC_IgnClPsShCirBatt2_CA[10];
    uint16 DFC_IgnClPsShCirBatt3_CA[10];
    uint16 DFC_IgnClPsShCirBatt4_CA[10];
    uint16 DFC_IgnClPsShCirBatt5_CA[10];
    uint16 DFC_IgnClPsShCirBatt6_CA[10];
    uint16 DFC_IgnClPsShCirBatt7_CA[10];
    uint16 DFC_IgnClPsShCirGnd0_CA[10];
    uint16 DFC_IgnClPsShCirGnd1_CA[10];
    uint16 DFC_IgnClPsShCirGnd2_CA[10];
    uint16 DFC_IgnClPsShCirGnd3_CA[10];
    uint16 DFC_IgnClPsShCirGnd4_CA[10];
    uint16 DFC_IgnClPsShCirGnd5_CA[10];
    uint16 DFC_IgnClPsShCirGnd6_CA[10];
    uint16 DFC_IgnClPsShCirGnd7_CA[10];
    uint16 DFC_UEGOASICS1B1_CA[13];
    uint16 DFC_UEGOASICS1B2_CA[13];
    uint16 DFC_UEGOOLAPES1B1_CA[14];
    uint16 DFC_UEGOOLAPES1B2_CA[14];
    uint16 DFC_UEGOOLIPES1B1_CA[14];
    uint16 DFC_UEGOOLIPES1B2_CA[14];
    uint16 DFC_UEGOOLMESS1B1_CA[14];
    uint16 DFC_UEGOOLMESS1B2_CA[14];
    uint16 DFC_UEGOOLRES1B1_CA[14];
    uint16 DFC_UEGOOLRES1B2_CA[14];
    uint16 DFC_UEGOSCBS1B1_CA[14];
    uint16 DFC_UEGOSCBS1B2_CA[14];
    uint16 DFC_UEGOSCGS1B1_CA[14];
    uint16 DFC_UEGOSCGS1B2_CA[14];
    uint16 DFC_UEGOSPIS1B1_CA[13];
    uint16 DFC_UEGOSPIS1B2_CA[13];
    uint16 DFC_UEGOSnsrS1B1_CA[10];
    uint16 DFC_UEGOSnsrS1B2_CA[10];
    uint16 DFC_UEGOSnsrTempS1B1_CA[10];
    uint16 DFC_UEGOSnsrTempS1B2_CA[10];
    uint16 DFC_DevLibBattUHi_CA[10];
    uint16 DFC_DevLibBattULo_CA[10];
    uint16 DFC_MRlySCG_CA[11];
    uint16 DFC_KnDetSens1PortAMax_CA[11];
    uint16 DFC_KnDetSens1PortAMin_CA[11];
    uint16 DFC_KnDetSens1PortBMax_CA[11];
    uint16 DFC_KnDetSens1PortBMin_CA[11];
    uint16 DFC_KnDetSens2PortAMax_CA[11];
    uint16 DFC_KnDetSens2PortAMin_CA[11];
    uint16 DFC_KnDetSens2PortBMax_CA[11];
    uint16 DFC_KnDetSens2PortBMin_CA[11];
    uint16 DFC_KnDetSens3PortAMax_CA[11];
    uint16 DFC_KnDetSens3PortAMin_CA[11];
    uint16 DFC_KnDetSens3PortBMax_CA[11];
    uint16 DFC_KnDetSens3PortBMin_CA[11];
    uint16 DFC_KnDetSens4PortAMax_CA[11];
    uint16 DFC_KnDetSens4PortAMin_CA[11];
    uint16 DFC_KnDetSens4PortBMax_CA[11];
    uint16 DFC_KnDetSens4PortBMin_CA[11];
    uint16 DFC_BstCtlDumpVlvErrShtrp_CA[10];
    uint16 DFC_BstCtlWgErrShtrp_CA[10];
    uint16 DFC_CmprnTest_CA[10];
    uint16 DFC_DMTK_CA[10];
    uint16 DFC_DMTLmax_CA[10];
    uint16 DFC_DMTLmin_CA[10];
    uint16 DFC_DMTLnpl_CA[10];
    uint16 DFC_DMTLsig_CA[10];
    uint16 DFC_LSV2max_CA[10];
    uint16 DFC_LSVmax_CA[10];
    uint16 DFC_MRlyErlyOpng_CA[10];
    uint16 DFC_MRlyStk_CA[10];
    uint16 DFC_SSpMon1loc_CA[10];
    uint16 DFC_SSpMon2loc_CA[10];
    uint16 DFC_SSpMon3loc_CA[10];
    uint16 DFC_TESG_CA[10];
    uint16 DFC_TESmax_CA[10];
    uint16 DFC_TESmin_CA[10];
    uint16 DFC_VehVMax_CA[11];
    uint16 DFC_VehVPlaus_CA[11];
    uint16 DFC_VehVSig_CA[11];
    uint16 DFC_EEPRdErr_CA[10];
    uint16 DFC_EEPWrErr_CA[10];
    uint16 DFC_EV1max_CA[10];
    uint16 DFC_EV1min_CA[10];
    uint16 DFC_EV1sig_CA[10];
    uint16 DFC_EV2max_CA[10];
    uint16 DFC_EV2min_CA[10];
    uint16 DFC_EV2sig_CA[10];
    uint16 DFC_EV3max_CA[10];
    uint16 DFC_EV3min_CA[10];
    uint16 DFC_EV3sig_CA[10];
    uint16 DFC_EV4max_CA[10];
    uint16 DFC_EV4min_CA[10];
    uint16 DFC_EV4sig_CA[10];
    uint16 DFC_EV5max_CA[10];
    uint16 DFC_EV5min_CA[10];
    uint16 DFC_EV5sig_CA[10];
    uint16 DFC_EV6max_CA[10];
    uint16 DFC_EV6min_CA[10];
    uint16 DFC_EV6sig_CA[10];
    uint16 DFC_EV7max_CA[10];
    uint16 DFC_EV7min_CA[10];
    uint16 DFC_EV7sig_CA[10];
    uint16 DFC_EV8max_CA[10];
    uint16 DFC_EV8min_CA[10];
    uint16 DFC_EV8sig_CA[10];
    uint16 DFC_EpmCaSI1ErrSig_CA[15];
    uint16 DFC_EpmCaSI1MntErr_CA[11];
    uint16 DFC_EpmCaSI1NoSigMax_CA[15];
    uint16 DFC_EpmCaSI1NoSigMin_CA[15];
    uint16 DFC_EpmCaSI1OfsErr_CA[16];
    uint16 DFC_EpmCrSDGI_CA[12];
    uint16 DFC_EpmCrSErrSig_CA[18];
    uint16 DFC_EpmCrSNoSig_CA[18];
    uint16 DFC_MoCADCNTP_CA[10];
    uint16 DFC_MoCADCTst_CA[10];
    uint16 DFC_MoCComctErrMM_CA[10];
    uint16 DFC_OCWDAActv_CA[10];
    uint16 DFC_OCWDACom_CA[10];
    uint16 DFC_OCWDAOvrVltg_CA[10];
    uint16 DFC_SWReset_0_CA[10];
    uint16 DFC_SWReset_1_CA[10];
    uint16 DFC_SWReset_2_CA[10];
    uint16 DFC_StopCntTmr_CA[10];
    uint16 DSQ_DSMInhibitAlways_CA[11];
    uint16 DSQ_EpmCaSSigQuality_CA[16];
    uint16 DSQ_EpmReverseRun_CA[12];
    uint16 DSQ_RvsRotPred_CA[10];
    uint16 DSQ_UEGOIPmpS1B1_CA[16];
    uint16 DSQ_UEGOIPmpS1B2_CA[16];
} DINH_FId_str;
#endif
#endif /* _DINH_FId_DEF */

/* Defined Parameter DINH_Lim */
#ifndef _DINH_Lim_DEF
#define _DINH_Lim_DEF
#ifndef DINH_LIM_STR_DEF
#define DINH_LIM_STR_DEF
typedef struct
{
    uint8 DFC_Cy327SpiCom_CA[10];
    uint8 DFC_MonUMaxSupply1_CA[10];
    uint8 DFC_MonUMinSupply1_CA[10];
    uint8 DFC_SSpMon1_CA[17];
    uint8 DFC_SSpMon1OV_CA[10];
    uint8 DFC_SSpMon1SCG_CA[10];
    uint8 DFC_SSpMon1UV_CA[10];
    uint8 DFC_SSpMon2_CA[16];
    uint8 DFC_SSpMon2OV_CA[10];
    uint8 DFC_SSpMon2SCG_CA[10];
    uint8 DFC_SSpMon2UV_CA[10];
    uint8 DFC_SSpMon3_CA[10];
    uint8 DFC_SSpMon3OV_CA[10];
    uint8 DFC_SSpMon3SCG_CA[10];
    uint8 DFC_SSpMon3UV_CA[10];
    uint8 DFC_SSpMonOT_CA[10];
    uint8 DFC_IgnClPsClBenchErr1_CA[10];
    uint8 DFC_IgnClPsClBenchErr2_CA[10];
    uint8 DFC_IgnClPsDevIdentErr1_CA[10];
    uint8 DFC_IgnClPsDevIdentErr2_CA[10];
    uint8 DFC_IgnClPsDevInitErr1_CA[10];
    uint8 DFC_IgnClPsDevInitErr2_CA[10];
    uint8 DFC_IgnClPsDevSpiErr1_CA[10];
    uint8 DFC_IgnClPsDevSpiErr2_CA[10];
    uint8 DFC_IgnClPsOpenLoad0_CA[10];
    uint8 DFC_IgnClPsOpenLoad1_CA[10];
    uint8 DFC_IgnClPsOpenLoad2_CA[10];
    uint8 DFC_IgnClPsOpenLoad3_CA[10];
    uint8 DFC_IgnClPsOpenLoad4_CA[10];
    uint8 DFC_IgnClPsOpenLoad5_CA[10];
    uint8 DFC_IgnClPsOpenLoad6_CA[10];
    uint8 DFC_IgnClPsOpenLoad7_CA[10];
    uint8 DFC_IgnClPsShCirBatt0_CA[10];
    uint8 DFC_IgnClPsShCirBatt1_CA[10];
    uint8 DFC_IgnClPsShCirBatt2_CA[10];
    uint8 DFC_IgnClPsShCirBatt3_CA[10];
    uint8 DFC_IgnClPsShCirBatt4_CA[10];
    uint8 DFC_IgnClPsShCirBatt5_CA[10];
    uint8 DFC_IgnClPsShCirBatt6_CA[10];
    uint8 DFC_IgnClPsShCirBatt7_CA[10];
    uint8 DFC_IgnClPsShCirGnd0_CA[10];
    uint8 DFC_IgnClPsShCirGnd1_CA[10];
    uint8 DFC_IgnClPsShCirGnd2_CA[10];
    uint8 DFC_IgnClPsShCirGnd3_CA[10];
    uint8 DFC_IgnClPsShCirGnd4_CA[10];
    uint8 DFC_IgnClPsShCirGnd5_CA[10];
    uint8 DFC_IgnClPsShCirGnd6_CA[10];
    uint8 DFC_IgnClPsShCirGnd7_CA[10];
    uint8 DFC_UEGOASICS1B1_CA[13];
    uint8 DFC_UEGOASICS1B2_CA[13];
    uint8 DFC_UEGOOLAPES1B1_CA[14];
    uint8 DFC_UEGOOLAPES1B2_CA[14];
    uint8 DFC_UEGOOLIPES1B1_CA[14];
    uint8 DFC_UEGOOLIPES1B2_CA[14];
    uint8 DFC_UEGOOLMESS1B1_CA[14];
    uint8 DFC_UEGOOLMESS1B2_CA[14];
    uint8 DFC_UEGOOLRES1B1_CA[14];
    uint8 DFC_UEGOOLRES1B2_CA[14];
    uint8 DFC_UEGOSCBS1B1_CA[14];
    uint8 DFC_UEGOSCBS1B2_CA[14];
    uint8 DFC_UEGOSCGS1B1_CA[14];
    uint8 DFC_UEGOSCGS1B2_CA[14];
    uint8 DFC_UEGOSPIS1B1_CA[13];
    uint8 DFC_UEGOSPIS1B2_CA[13];
    uint8 DFC_UEGOSnsrS1B1_CA[10];
    uint8 DFC_UEGOSnsrS1B2_CA[10];
    uint8 DFC_UEGOSnsrTempS1B1_CA[10];
    uint8 DFC_UEGOSnsrTempS1B2_CA[10];
    uint8 DFC_DevLibBattUHi_CA[10];
    uint8 DFC_DevLibBattULo_CA[10];
    uint8 DFC_MRlySCG_CA[11];
    uint8 DFC_KnDetSens1PortAMax_CA[11];
    uint8 DFC_KnDetSens1PortAMin_CA[11];
    uint8 DFC_KnDetSens1PortBMax_CA[11];
    uint8 DFC_KnDetSens1PortBMin_CA[11];
    uint8 DFC_KnDetSens2PortAMax_CA[11];
    uint8 DFC_KnDetSens2PortAMin_CA[11];
    uint8 DFC_KnDetSens2PortBMax_CA[11];
    uint8 DFC_KnDetSens2PortBMin_CA[11];
    uint8 DFC_KnDetSens3PortAMax_CA[11];
    uint8 DFC_KnDetSens3PortAMin_CA[11];
    uint8 DFC_KnDetSens3PortBMax_CA[11];
    uint8 DFC_KnDetSens3PortBMin_CA[11];
    uint8 DFC_KnDetSens4PortAMax_CA[11];
    uint8 DFC_KnDetSens4PortAMin_CA[11];
    uint8 DFC_KnDetSens4PortBMax_CA[11];
    uint8 DFC_KnDetSens4PortBMin_CA[11];
    uint8 DFC_BstCtlDumpVlvErrShtrp_CA[10];
    uint8 DFC_BstCtlWgErrShtrp_CA[10];
    uint8 DFC_CmprnTest_CA[10];
    uint8 DFC_DMTK_CA[10];
    uint8 DFC_DMTLmax_CA[10];
    uint8 DFC_DMTLmin_CA[10];
    uint8 DFC_DMTLnpl_CA[10];
    uint8 DFC_DMTLsig_CA[10];
    uint8 DFC_LSV2max_CA[10];
    uint8 DFC_LSVmax_CA[10];
    uint8 DFC_MRlyErlyOpng_CA[10];
    uint8 DFC_MRlyStk_CA[10];
    uint8 DFC_SSpMon1loc_CA[10];
    uint8 DFC_SSpMon2loc_CA[10];
    uint8 DFC_SSpMon3loc_CA[10];
    uint8 DFC_TESG_CA[10];
    uint8 DFC_TESmax_CA[10];
    uint8 DFC_TESmin_CA[10];
    uint8 DFC_VehVMax_CA[11];
    uint8 DFC_VehVPlaus_CA[11];
    uint8 DFC_VehVSig_CA[11];
    uint8 DFC_EEPRdErr_CA[10];
    uint8 DFC_EEPWrErr_CA[10];
    uint8 DFC_EV1max_CA[10];
    uint8 DFC_EV1min_CA[10];
    uint8 DFC_EV1sig_CA[10];
    uint8 DFC_EV2max_CA[10];
    uint8 DFC_EV2min_CA[10];
    uint8 DFC_EV2sig_CA[10];
    uint8 DFC_EV3max_CA[10];
    uint8 DFC_EV3min_CA[10];
    uint8 DFC_EV3sig_CA[10];
    uint8 DFC_EV4max_CA[10];
    uint8 DFC_EV4min_CA[10];
    uint8 DFC_EV4sig_CA[10];
    uint8 DFC_EV5max_CA[10];
    uint8 DFC_EV5min_CA[10];
    uint8 DFC_EV5sig_CA[10];
    uint8 DFC_EV6max_CA[10];
    uint8 DFC_EV6min_CA[10];
    uint8 DFC_EV6sig_CA[10];
    uint8 DFC_EV7max_CA[10];
    uint8 DFC_EV7min_CA[10];
    uint8 DFC_EV7sig_CA[10];
    uint8 DFC_EV8max_CA[10];
    uint8 DFC_EV8min_CA[10];
    uint8 DFC_EV8sig_CA[10];
    uint8 DFC_EpmCaSI1ErrSig_CA[15];
    uint8 DFC_EpmCaSI1MntErr_CA[11];
    uint8 DFC_EpmCaSI1NoSigMax_CA[15];
    uint8 DFC_EpmCaSI1NoSigMin_CA[15];
    uint8 DFC_EpmCaSI1OfsErr_CA[16];
    uint8 DFC_EpmCrSDGI_CA[12];
    uint8 DFC_EpmCrSErrSig_CA[18];
    uint8 DFC_EpmCrSNoSig_CA[18];
    uint8 DFC_MoCADCNTP_CA[10];
    uint8 DFC_MoCADCTst_CA[10];
    uint8 DFC_MoCComctErrMM_CA[10];
    uint8 DFC_OCWDAActv_CA[10];
    uint8 DFC_OCWDACom_CA[10];
    uint8 DFC_OCWDAOvrVltg_CA[10];
    uint8 DFC_SWReset_0_CA[10];
    uint8 DFC_SWReset_1_CA[10];
    uint8 DFC_SWReset_2_CA[10];
    uint8 DFC_StopCntTmr_CA[10];
    uint8 DSQ_DSMInhibitAlways_CA[11];
    uint8 DSQ_EpmCaSSigQuality_CA[16];
    uint8 DSQ_EpmReverseRun_CA[12];
    uint8 DSQ_RvsRotPred_CA[10];
    uint8 DSQ_UEGOIPmpS1B1_CA[16];
    uint8 DSQ_UEGOIPmpS1B2_CA[16];
} DINH_Lim_str;
#endif
#endif /* _DINH_Lim_DEF */

/* Defined Parameter DINH_tiUpdObsv_C */
#ifndef _DINH_tiUpdObsv_C_DEF
#define _DINH_tiUpdObsv_C_DEF
#define DINH_tiUpdObsv_CM DINH_tiUpdObsv_C
#endif /* _DINH_tiUpdObsv_C_DEF */

/* Defined Parameter DINH_xFIDObsv_C */
#ifndef _DINH_xFIDObsv_C_DEF
#define _DINH_xFIDObsv_C_DEF
#define DINH_xFIDObsv_CM DINH_xFIDObsv_C
#endif /* _DINH_xFIDObsv_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DINH_MONINHBCNT_SC */


/* DINH_MONINHBCNT_SC Typ=ub */
#ifndef DINH_MONINHBCNT_SC
  #define DINH_MONINHBCNT_SC 3L
#elif (DINH_MONINHBCNT_SC != 3L)
  #error >>>> 'DINH_MONINHBCNT_SC' multiple defined
#endif


/* Referenced System Constant DSM_INHRLS_SY */


/* DSM_INHRLS_SY Typ=ub */
#ifndef DSM_INHRLS_SY
  #define DSM_INHRLS_SY 0L
#elif (DSM_INHRLS_SY != 0L)
  #error >>>> 'DSM_INHRLS_SY' multiple defined
#endif


/* Referenced System Constant HESRV_HETYP_SY */


/* HESRV_HETYP_SY Typ=sw */
#ifndef HESRV_HETYP_SY
  #define HESRV_HETYP_SY 255L
#elif (HESRV_HETYP_SY != 255L)
  #error >>>> 'HESRV_HETYP_SY' multiple defined
#endif


/* Referenced System Constant HESRV_MASTER */


/* HESRV_MASTER Typ=sl */
#ifndef HESRV_MASTER
  #define HESRV_MASTER 0L
#elif (HESRV_MASTER != 0L)
  #error >>>> 'HESRV_MASTER' multiple defined
#endif


/* Referenced System Constant HESRV_MASTERSLAVE */


/* HESRV_MASTERSLAVE Typ=sl */
#ifndef HESRV_MASTERSLAVE
  #define HESRV_MASTERSLAVE 1L
#elif (HESRV_MASTERSLAVE != 1L)
  #error >>>> 'HESRV_MASTERSLAVE' multiple defined
#endif


/* Referenced System Constant SY_PTO */


/* SY_PTO Typ=ub */
#ifndef SY_PTO
  #define SY_PTO 0L
#elif (SY_PTO != 0L)
  #error >>>> 'SY_PTO' multiple defined
#endif


/* Local System Constant DSM_NUMFID */


/* DSM_NUMFID Typ=sl */
#ifndef DSM_NUMFID
  #define DSM_NUMFID 71L
#elif (DSM_NUMFID != 71L)
  #error >>>> 'DSM_NUMFID' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: DINH_stClctFId_mp */
/* MpA_u16( N_DclFm ) */
#ifdef _DAT_H
#ifndef __DINH_STCLCTFID_MP_EXT__
#define __DINH_STCLCTFID_MP_EXT__
extern uint16 DINH_stClctFId_mp[5]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: DINH_xFIDObsvInh_mp */
/* MpA_u16( N_DclFm ) */
#ifdef _DAT_H
#ifndef __DINH_XFIDOBSVINH_MP_EXT__
#define __DINH_XFIDOBSVINH_MP_EXT__
extern uint16 DINH_xFIDObsvInh_mp[10]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: DINH_xFIDObsvRls_mp */
/* MpA_u16( N_DclFm ) */
#ifdef _DAT_H
#ifndef __DINH_XFIDOBSVRLS_MP_EXT__
#define __DINH_XFIDOBSVRLS_MP_EXT__
extern uint16 DINH_xFIDObsvRls_mp[10]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Local Variable: DINH_ctMonCorr */


/* Local Variable: DINH_MonNoSync */


/* Exported Variable: DINH_stFId */



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
#ifndef DATA_DINH_ADS_PTA_01_T_DEF
#define DATA_DINH_ADS_PTA_01_T_DEF
typedef struct
{
    /* ----- Parameter DINH_FId ----- */
    DINH_FId_str _DINH_FId;
} DATA_DINH_ADS_PTA_01_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DINH_ADS_PTA_01_t DATA_DINH_ADS_PTA_01
    __attribute__ ((asection (".pta_dataADS_PTA_01_DINH","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DINH_ADS_PTA_01_t * const VECT_DINH_ADS_PTA_01
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_01_DINH","f=as")));
#endif

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DINH_ADS_PTA_02_T_DEF
#define DATA_DINH_ADS_PTA_02_T_DEF
typedef struct
{
    /* ----- Parameter DINH_Lim ----- */
    DINH_Lim_str _DINH_Lim;
} DATA_DINH_ADS_PTA_02_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DINH_ADS_PTA_02_t DATA_DINH_ADS_PTA_02
    __attribute__ ((asection (".pta_dataADS_PTA_02_DINH","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DINH_ADS_PTA_02_t * const VECT_DINH_ADS_PTA_02
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_02_DINH","f=as")));
#endif

/* +++++ Addressschema ADS_PTA_03 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DINH_ADS_PTA_03_T_DEF
#define DATA_DINH_ADS_PTA_03_T_DEF
typedef struct
{
    /* ----- Parameter DINH_tiUpdObsv_C ----- */
    uint16 _DINH_tiUpdObsv_C;
    /* ----- Parameter DINH_xFIDObsv_C ----- */
    uint16 _DINH_xFIDObsv_C;
} DATA_DINH_ADS_PTA_03_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DINH_ADS_PTA_03_t DATA_DINH_ADS_PTA_03
    __attribute__ ((asection (".pta_dataADS_PTA_03_DINH","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DINH_ADS_PTA_03_t * const VECT_DINH_ADS_PTA_03
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_03_DINH","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Macro for local Parameter DINH_FId -- */
#ifndef DINH_FId
#define DINH_FId (VECT_DINH_ADS_PTA_01->_DINH_FId)
#endif

#ifndef RP_DINH_FId
#define RP_DINH_FId (DATA_DINH_ADS_PTA_01._DINH_FId)
#endif

#ifndef __DINH_FId
#define __DINH_FId (VECT_DINH_ADS_PTA_01->_DINH_FId)
#endif

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Macro for local Parameter DINH_Lim -- */
#ifndef DINH_Lim
#define DINH_Lim (VECT_DINH_ADS_PTA_02->_DINH_Lim)
#endif

#ifndef RP_DINH_Lim
#define RP_DINH_Lim (DATA_DINH_ADS_PTA_02._DINH_Lim)
#endif

#ifndef __DINH_Lim
#define __DINH_Lim (VECT_DINH_ADS_PTA_02->_DINH_Lim)
#endif

/* +++++ Addressschema ADS_PTA_03 +++++ */

/* -- Macro for local Parameter DINH_tiUpdObsv_C -- */
#ifndef DINH_tiUpdObsv_C
#define DINH_tiUpdObsv_C (VECT_DINH_ADS_PTA_03->_DINH_tiUpdObsv_C)
#endif

#ifndef RP_DINH_tiUpdObsv_C
#define RP_DINH_tiUpdObsv_C (DATA_DINH_ADS_PTA_03._DINH_tiUpdObsv_C)
#endif

#ifndef __DINH_tiUpdObsv_C
#define __DINH_tiUpdObsv_C (VECT_DINH_ADS_PTA_03->_DINH_tiUpdObsv_C)
#endif

/* -- Macro for local Parameter DINH_xFIDObsv_C -- */
#ifndef DINH_xFIDObsv_C
#define DINH_xFIDObsv_C (VECT_DINH_ADS_PTA_03->_DINH_xFIDObsv_C)
#endif

#ifndef RP_DINH_xFIDObsv_C
#define RP_DINH_xFIDObsv_C (DATA_DINH_ADS_PTA_03._DINH_xFIDObsv_C)
#endif

#ifndef __DINH_xFIDObsv_C
#define __DINH_xFIDObsv_C (VECT_DINH_ADS_PTA_03->_DINH_xFIDObsv_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DINH_DAT_H */
