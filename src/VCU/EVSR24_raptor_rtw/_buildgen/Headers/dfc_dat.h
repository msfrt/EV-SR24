#ifndef _DFC_DAT_H
#define _DFC_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DFC_CtlMsk2 */
#ifndef _DFC_CtlMsk2_DEF
#define _DFC_CtlMsk2_DEF
#ifndef DFC_CTLMSK2_STR_DEF
#define DFC_CTLMSK2_STR_DEF
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
} DFC_CtlMsk2_str;
#endif
#endif /* _DFC_CtlMsk2_DEF */

/* Defined Parameter DFC_DisblMsk2 */
#ifndef _DFC_DisblMsk2_DEF
#define _DFC_DisblMsk2_DEF
#ifndef DFC_DISBLMSK2_STR_DEF
#define DFC_DISBLMSK2_STR_DEF
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
} DFC_DisblMsk2_str;
#endif
#endif /* _DFC_DisblMsk2_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DFC_CTLDISBLLAYOUT_SY */


/* DFC_CTLDISBLLAYOUT_SY Typ=ub */
#ifndef DFC_CTLDISBLLAYOUT_SY
  #define DFC_CTLDISBLLAYOUT_SY 1L
#elif (DFC_CTLDISBLLAYOUT_SY != 1L)
  #error >>>> 'DFC_CTLDISBLLAYOUT_SY' multiple defined
#endif


/* Referenced System Constant DFC_CTLMSKBYTES_SY */


/* DFC_CTLMSKBYTES_SY Typ=sw */
#ifndef DFC_CTLMSKBYTES_SY
  #define DFC_CTLMSKBYTES_SY 1L
#elif (DFC_CTLMSKBYTES_SY != 1L)
  #error >>>> 'DFC_CTLMSKBYTES_SY' multiple defined
#endif


/* Referenced System Constant DFC_DISBLMSKBYTES_SY */


/* DFC_DISBLMSKBYTES_SY Typ=sw */
#ifndef DFC_DISBLMSKBYTES_SY
  #define DFC_DISBLMSKBYTES_SY 2L
#elif (DFC_DISBLMSKBYTES_SY != 2L)
  #error >>>> 'DFC_DISBLMSKBYTES_SY' multiple defined
#endif


/* Referenced System Constant DFES_BLKENTRY_SY */


/* DFES_BLKENTRY_SY Typ=ub */
#ifndef DFES_BLKENTRY_SY
  #define DFES_BLKENTRY_SY 0L
#elif (DFES_BLKENTRY_SY != 0L)
  #error >>>> 'DFES_BLKENTRY_SY' multiple defined
#endif


/* Referenced System Constant DSM_DISBLGRPSIZE_SY */


/* DSM_DISBLGRPSIZE_SY Typ=uw */
#ifndef DSM_DISBLGRPSIZE_SY
  #define DSM_DISBLGRPSIZE_SY 0L
#elif (DSM_DISBLGRPSIZE_SY != 0L)
  #error >>>> 'DSM_DISBLGRPSIZE_SY' multiple defined
#endif


/* Local System Constant DFC_CTLMSK_RESCANCMSK */


/* DFC_CTLMSK_RESCANCMSK Typ=sl */
#ifndef DFC_CTLMSK_RESCANCMSK
  #define DFC_CTLMSK_RESCANCMSK 1L
#elif (DFC_CTLMSK_RESCANCMSK != 1L)
  #error >>>> 'DFC_CTLMSK_RESCANCMSK' multiple defined
#endif


/* Local System Constant DFC_CTLMSK_RESINIMSK */


/* DFC_CTLMSK_RESINIMSK Typ=sl */
#ifndef DFC_CTLMSK_RESINIMSK
  #define DFC_CTLMSK_RESINIMSK 1L
#elif (DFC_CTLMSK_RESINIMSK != 1L)
  #error >>>> 'DFC_CTLMSK_RESINIMSK' multiple defined
#endif


/* Local System Constant DSMCONF_DFCCTTSTD */


/* DSMCONF_DFCCTTSTD Typ=sl */
#ifndef DSMCONF_DFCCTTSTD
  #define DSMCONF_DFCCTTSTD 0L
#elif (DSMCONF_DFCCTTSTD != 0L)
  #error >>>> 'DSMCONF_DFCCTTSTD' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBCTLMSK */


/* DSMCONF_SUPGLBCTLMSK Typ=sl */
#ifndef DSMCONF_SUPGLBCTLMSK
  #define DSMCONF_SUPGLBCTLMSK 0L
#elif (DSMCONF_SUPGLBCTLMSK != 0L)
  #error >>>> 'DSMCONF_SUPGLBCTLMSK' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBDISBLMSK */


/* DSMCONF_SUPGLBDISBLMSK Typ=sl */
#ifndef DSMCONF_SUPGLBDISBLMSK
  #define DSMCONF_SUPGLBDISBLMSK 0L
#elif (DSMCONF_SUPGLBDISBLMSK != 0L)
  #error >>>> 'DSMCONF_SUPGLBDISBLMSK' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBDTCFUNCUNIT */


/* DSMCONF_SUPGLBDTCFUNCUNIT Typ=sl */
#ifndef DSMCONF_SUPGLBDTCFUNCUNIT
  #define DSMCONF_SUPGLBDTCFUNCUNIT 0L
#elif (DSMCONF_SUPGLBDTCFUNCUNIT != 0L)
  #error >>>> 'DSMCONF_SUPGLBDTCFUNCUNIT' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBDTCGROUP */


/* DSMCONF_SUPGLBDTCGROUP Typ=sl */
#ifndef DSMCONF_SUPGLBDTCGROUP
  #define DSMCONF_SUPGLBDTCGROUP 0L
#elif (DSMCONF_SUPGLBDTCGROUP != 0L)
  #error >>>> 'DSMCONF_SUPGLBDTCGROUP' multiple defined
#endif


/* Local System Constant DSMCONF_SUPGLBDTCSEVERITY */


/* DSMCONF_SUPGLBDTCSEVERITY Typ=sl */
#ifndef DSMCONF_SUPGLBDTCSEVERITY
  #define DSMCONF_SUPGLBDTCSEVERITY 0L
#elif (DSMCONF_SUPGLBDTCSEVERITY != 0L)
  #error >>>> 'DSMCONF_SUPGLBDTCSEVERITY' multiple defined
#endif


/* Local System Constant DSMCONF_SUP_TNPSCPU */


/* DSMCONF_SUP_TNPSCPU Typ=sl */
#ifndef DSMCONF_SUP_TNPSCPU
  #define DSMCONF_SUP_TNPSCPU 0L
#elif (DSMCONF_SUP_TNPSCPU != 0L)
  #error >>>> 'DSMCONF_SUP_TNPSCPU' multiple defined
#endif


/* Local System Constant DSMCONF_SUP_TNPSDTCC */


/* DSMCONF_SUP_TNPSDTCC Typ=sl */
#ifndef DSMCONF_SUP_TNPSDTCC
  #define DSMCONF_SUP_TNPSDTCC 0L
#elif (DSMCONF_SUP_TNPSDTCC != 0L)
  #error >>>> 'DSMCONF_SUP_TNPSDTCC' multiple defined
#endif


/* Local System Constant DSM_NUMDFC */


/* DSM_NUMDFC Typ=sl */
#ifndef DSM_NUMDFC
  #define DSM_NUMDFC 153L
#elif (DSM_NUMDFC != 153L)
  #error >>>> 'DSM_NUMDFC' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema dir +++++ */


/* Exported Variable: DFC_b */


/* +++++ Addressschema intRam +++++ */


/* Local Variable: DFC_stFinal */


/* Local Variable: DFC_stMaxFlt */


/* Local Variable: DFC_stRun */


/* Exported Variable: DFC_idxReInitDFC */


/* Exported Variable: DFC_st */


/* Exported Variable: DSQ_st */



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

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DFC_ADS_PTA_01_T_DEF
#define DATA_DFC_ADS_PTA_01_T_DEF
typedef struct
{
    /* ----- Parameter DFC_CtlMsk2 ----- */
    DFC_CtlMsk2_str _DFC_CtlMsk2;
} DATA_DFC_ADS_PTA_01_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DFC_ADS_PTA_01_t DATA_DFC_ADS_PTA_01
    __attribute__ ((asection (".pta_dataADS_PTA_01_DFC","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DFC_ADS_PTA_01_t * const VECT_DFC_ADS_PTA_01
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_01_DFC","f=as")));
#endif

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DFC_ADS_PTA_02_T_DEF
#define DATA_DFC_ADS_PTA_02_T_DEF
typedef struct
{
    /* ----- Parameter DFC_DisblMsk2 ----- */
    DFC_DisblMsk2_str _DFC_DisblMsk2;
} DATA_DFC_ADS_PTA_02_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DFC_ADS_PTA_02_t DATA_DFC_ADS_PTA_02
    __attribute__ ((asection (".pta_dataADS_PTA_02_DFC","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DFC_ADS_PTA_02_t * const VECT_DFC_ADS_PTA_02
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_02_DFC","f=as")));
#endif

/* +++++ Addressschema dir +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Macro for local Parameter DFC_CtlMsk2 -- */
#ifndef DFC_CtlMsk2
#define DFC_CtlMsk2 (VECT_DFC_ADS_PTA_01->_DFC_CtlMsk2)
#endif

#ifndef RP_DFC_CtlMsk2
#define RP_DFC_CtlMsk2 (DATA_DFC_ADS_PTA_01._DFC_CtlMsk2)
#endif

#ifndef __DFC_CtlMsk2
#define __DFC_CtlMsk2 (VECT_DFC_ADS_PTA_01->_DFC_CtlMsk2)
#endif

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Macro for local Parameter DFC_DisblMsk2 -- */
#ifndef DFC_DisblMsk2
#define DFC_DisblMsk2 (VECT_DFC_ADS_PTA_02->_DFC_DisblMsk2)
#endif

#ifndef RP_DFC_DisblMsk2
#define RP_DFC_DisblMsk2 (DATA_DFC_ADS_PTA_02._DFC_DisblMsk2)
#endif

#ifndef __DFC_DisblMsk2
#define __DFC_DisblMsk2 (VECT_DFC_ADS_PTA_02->_DFC_DisblMsk2)
#endif

/* +++++ Addressschema dir +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DFC_DAT_H */
