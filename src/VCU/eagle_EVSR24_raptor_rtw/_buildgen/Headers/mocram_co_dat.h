#ifndef _MOCRAM_CO_DAT_H
#define _MOCRAM_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model TYP_Mo_DataNoCyclicCheckU8 instantiated in actual function MoCRAM_Co */
#ifndef _TYP_Mo_DataNoCyclicCheckU8_DEF
#define _TYP_Mo_DataNoCyclicCheckU8_DEF

#endif /* _TYP_Mo_DataNoCyclicCheckU8_DEF */


/* Defined Parameter MoCRam_ChkRAMIFA9SyncTst_CW */
#ifndef _MoCRam_ChkRAMIFA9SyncTst_CW_DEF
#define _MoCRam_ChkRAMIFA9SyncTst_CW_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCRam_ChkRAMIFA9SyncTst_CW_MAC
#define _MoCRam_ChkRAMIFA9SyncTst_CW_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCRam_ChkRAMIFA9SyncTst_CW __MoCRam_ChkRAMIFA9SyncTst_CW
#define MoCRam_ChkRAMIFA9SyncTst_CW __MoCRam_ChkRAMIFA9SyncTst_CW
/* DS Macro referencing to GS PTA Element */
#define MoCRam_ChkRAMIFA9SyncTst_CWM __MoCRam_ChkRAMIFA9SyncTst_CW
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCRam_ChkRAMIFA9SyncTst_CW MoCRam_ChkRAMIFA9SyncTst_CW
/* DS Macro referencing to DS PTA Element */
#define MoCRam_ChkRAMIFA9SyncTst_CWM MoCRam_ChkRAMIFA9SyncTst_CW
#endif /* _DAT_H */
#endif /* _MoCRam_ChkRAMIFA9SyncTst_CW_MAC */

#endif /* _MoCRam_ChkRAMIFA9SyncTst_CW_DEF */

/* Defined Parameter MoCRam_ChkRAMIFA9Tst_CW */
#ifndef _MoCRam_ChkRAMIFA9Tst_CW_DEF
#define _MoCRam_ChkRAMIFA9Tst_CW_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCRam_ChkRAMIFA9Tst_CW_MAC
#define _MoCRam_ChkRAMIFA9Tst_CW_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCRam_ChkRAMIFA9Tst_CW __MoCRam_ChkRAMIFA9Tst_CW
#define MoCRam_ChkRAMIFA9Tst_CW __MoCRam_ChkRAMIFA9Tst_CW
/* DS Macro referencing to GS PTA Element */
#define MoCRam_ChkRAMIFA9Tst_CWM __MoCRam_ChkRAMIFA9Tst_CW
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCRam_ChkRAMIFA9Tst_CW MoCRam_ChkRAMIFA9Tst_CW
/* DS Macro referencing to DS PTA Element */
#define MoCRam_ChkRAMIFA9Tst_CWM MoCRam_ChkRAMIFA9Tst_CW
#endif /* _DAT_H */
#endif /* _MoCRam_ChkRAMIFA9Tst_CW_MAC */

#endif /* _MoCRam_ChkRAMIFA9Tst_CW_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant ECU_GENR_SY */


/* ECU_GENR_SY Typ=sw */
#ifndef ECU_GENR_SY
  #define ECU_GENR_SY 2L
#elif (ECU_GENR_SY != 2L)
  #error >>>> 'ECU_GENR_SY' multiple defined
#endif


/* Referenced System Constant MOCMEM_CONF_EXTREQ_SUPPORT */


/* MOCMEM_CONF_EXTREQ_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_EXTREQ_SUPPORT
  #define MOCMEM_CONF_EXTREQ_SUPPORT 0L
#elif (MOCMEM_CONF_EXTREQ_SUPPORT != 0L)
  #error >>>> 'MOCMEM_CONF_EXTREQ_SUPPORT' multiple defined
#endif


/* Referenced System Constant MOCMEM_CONF_MSG_SUPPORT */


/* MOCMEM_CONF_MSG_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_MSG_SUPPORT
  #define MOCMEM_CONF_MSG_SUPPORT 1L
#elif (MOCMEM_CONF_MSG_SUPPORT != 1L)
  #error >>>> 'MOCMEM_CONF_MSG_SUPPORT' multiple defined
#endif


/* Referenced System Constant MOCMEM_CONF_NUM_RAMBLOCK_AROER */


/* MOCMEM_CONF_NUM_RAMBLOCK_AROER Typ=ub */
#ifndef MOCMEM_CONF_NUM_RAMBLOCK_AROER
  #define MOCMEM_CONF_NUM_RAMBLOCK_AROER 7u
#endif


/* Referenced System Constant MOCMEM_CONF_NUM_RAMBLOCK_MAIN1 */


/* MOCMEM_CONF_NUM_RAMBLOCK_MAIN1 Typ=ub */
#ifndef MOCMEM_CONF_NUM_RAMBLOCK_MAIN1
  #define MOCMEM_CONF_NUM_RAMBLOCK_MAIN1 4u
#endif


/* Referenced System Constant MOCMEM_CONF_NUM_RAMBLOCK_MAIN2 */


/* MOCMEM_CONF_NUM_RAMBLOCK_MAIN2 Typ=ub */
#ifndef MOCMEM_CONF_NUM_RAMBLOCK_MAIN2
  #define MOCMEM_CONF_NUM_RAMBLOCK_MAIN2 4u
#endif


/* Referenced System Constant MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS */


/* MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS Typ=ub */
#ifndef MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS
  #define MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS 5u
#endif


/* Referenced System Constant MOCMEM_CONF_NVRAM_HIST_SUPPORT */


/* MOCMEM_CONF_NVRAM_HIST_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_NVRAM_HIST_SUPPORT
  #define MOCMEM_CONF_NVRAM_HIST_SUPPORT 1L
#elif (MOCMEM_CONF_NVRAM_HIST_SUPPORT != 1L)
  #error >>>> 'MOCMEM_CONF_NVRAM_HIST_SUPPORT' multiple defined
#endif


/* Referenced System Constant MOCMEM_CONF_RAM_RST_REPEXOK_DIS */


/* MOCMEM_CONF_RAM_RST_REPEXOK_DIS Typ=sl */
#ifndef MOCMEM_CONF_RAM_RST_REPEXOK_DIS
  #define MOCMEM_CONF_RAM_RST_REPEXOK_DIS 0L
#elif (MOCMEM_CONF_RAM_RST_REPEXOK_DIS != 0L)
  #error >>>> 'MOCMEM_CONF_RAM_RST_REPEXOK_DIS' multiple defined
#endif


/* Referenced System Constant MOCMEM_CONF_USE_DSYNC */


/* MOCMEM_CONF_USE_DSYNC Typ=sl */
#ifndef MOCMEM_CONF_USE_DSYNC
  #define MOCMEM_CONF_USE_DSYNC 1L
#elif (MOCMEM_CONF_USE_DSYNC != 1L)
  #error >>>> 'MOCMEM_CONF_USE_DSYNC' multiple defined
#endif


/* Referenced System Constant MOCMEM_CONF_USE_NVRAM */


/* MOCMEM_CONF_USE_NVRAM Typ=sl */
#ifndef MOCMEM_CONF_USE_NVRAM
  #define MOCMEM_CONF_USE_NVRAM 0L
#elif (MOCMEM_CONF_USE_NVRAM != 0L)
  #error >>>> 'MOCMEM_CONF_USE_NVRAM' multiple defined
#endif


/* Referenced System Constant MOCMEM_CONF_WDT_TIME_RAM_REPEX */


/* MOCMEM_CONF_WDT_TIME_RAM_REPEX Typ=ul */
#ifndef MOCMEM_CONF_WDT_TIME_RAM_REPEX
  #define MOCMEM_CONF_WDT_TIME_RAM_REPEX 0ul
#endif


/* Referenced System Constant MOCMEM_CO_PATTERN_55_IDX */


/* MOCMEM_CO_PATTERN_55_IDX Typ=ub */
#ifndef MOCMEM_CO_PATTERN_55_IDX
  #define MOCMEM_CO_PATTERN_55_IDX 1u
#endif


/* Referenced System Constant MOCMEM_CO_PATTERN_AA_IDX */


/* MOCMEM_CO_PATTERN_AA_IDX Typ=ub */
#ifndef MOCMEM_CO_PATTERN_AA_IDX
  #define MOCMEM_CO_PATTERN_AA_IDX 0u
#endif


/* Referenced System Constant MOCMEM_CO_PATTERN_NUMBER */


/* MOCMEM_CO_PATTERN_NUMBER Typ=ub */
#ifndef MOCMEM_CO_PATTERN_NUMBER
  #define MOCMEM_CO_PATTERN_NUMBER 2u
#endif


/* Referenced System Constant MOCROM_CO_EXROMNOTEXECUTED */


/* MOCROM_CO_EXROMNOTEXECUTED Typ=ub */
#ifndef MOCROM_CO_EXROMNOTEXECUTED
  #define MOCROM_CO_EXROMNOTEXECUTED 0u
#endif


/* Referenced System Constant MOCROM_CO_MULTI_ROMPAGE_ERROR */


/* MOCROM_CO_MULTI_ROMPAGE_ERROR Typ=ub */
#ifndef MOCROM_CO_MULTI_ROMPAGE_ERROR
  #define MOCROM_CO_MULTI_ROMPAGE_ERROR 127u
#endif


/* Referenced System Constant MO_ECOM_MSK */


/* MO_ECOM_MSK Typ=ub */
#ifndef MO_ECOM_MSK
  #define MO_ECOM_MSK 128u
#endif


/* Referenced System Constant MO_EMEM_MSK */


/* MO_EMEM_MSK Typ=ub */
#ifndef MO_EMEM_MSK
  #define MO_EMEM_MSK 8u
#endif


/* Referenced System Constant MO_EPCP_MSK */


/* MO_EPCP_MSK Typ=ub */
#ifndef MO_EPCP_MSK
  #define MO_EPCP_MSK 64u
#endif


/* Referenced System Constant MO_ERAM_MSK */


/* MO_ERAM_MSK Typ=ub */
#ifndef MO_ERAM_MSK
  #define MO_ERAM_MSK 1u
#endif


/* Referenced System Constant MO_EROMXPG_MSK */


/* MO_EROMXPG_MSK Typ=ub */
#ifndef MO_EROMXPG_MSK
  #define MO_EROMXPG_MSK 4u
#endif


/* Referenced System Constant MO_REQRAMCHKEXT_MSK */


/* MO_REQRAMCHKEXT_MSK Typ=ub */
#ifndef MO_REQRAMCHKEXT_MSK
  #define MO_REQRAMCHKEXT_MSK 32u
#endif


/* Referenced System Constant MO_REQROMCHKEXT_MSK */


/* MO_REQROMCHKEXT_MSK Typ=ub */
#ifndef MO_REQROMCHKEXT_MSK
  #define MO_REQROMCHKEXT_MSK 16u
#endif


/* Local System Constant MOCRAM_CO_CLR_PATTERN */


/* MOCRAM_CO_CLR_PATTERN Typ=ul */
#ifndef MOCRAM_CO_CLR_PATTERN
  #define MOCRAM_CO_CLR_PATTERN 0ul
#endif


/* Local System Constant MOCRAM_CO_EARLY_CLR_RAM_VALID */


/* MOCRAM_CO_EARLY_CLR_RAM_VALID Typ=uw */
#ifndef MOCRAM_CO_EARLY_CLR_RAM_VALID
  #define MOCRAM_CO_EARLY_CLR_RAM_VALID 65280u
#endif


/* Local System Constant MOCRAM_CO_END_OF_TABLE */


/* MOCRAM_CO_END_OF_TABLE Typ=ul */
#ifndef MOCRAM_CO_END_OF_TABLE
  #define MOCRAM_CO_END_OF_TABLE 252645135ul
#endif


/* Local System Constant MOCRAM_CO_EXRAMBYPASSED */


/* MOCRAM_CO_EXRAMBYPASSED Typ=ub */
#ifndef MOCRAM_CO_EXRAMBYPASSED
  #define MOCRAM_CO_EXRAMBYPASSED 153u
#endif


/* Local System Constant MOCRAM_CO_EXRAMEXECUTED */


/* MOCRAM_CO_EXRAMEXECUTED Typ=ub */
#ifndef MOCRAM_CO_EXRAMEXECUTED
  #define MOCRAM_CO_EXRAMEXECUTED 150u
#endif


/* Local System Constant MOCRAM_CO_EXRAMNOTEXECUTED */


/* MOCRAM_CO_EXRAMNOTEXECUTED Typ=ub */
#ifndef MOCRAM_CO_EXRAMNOTEXECUTED
  #define MOCRAM_CO_EXRAMNOTEXECUTED 0u
#endif


/* Local System Constant MOCRAM_CO_PATTERN_00_IDX */


/* MOCRAM_CO_PATTERN_00_IDX Typ=ub */
#ifndef MOCRAM_CO_PATTERN_00_IDX
  #define MOCRAM_CO_PATTERN_00_IDX 1u
#endif


/* Local System Constant MOCRAM_CO_PATTERN_01 */


/* MOCRAM_CO_PATTERN_01 Typ=ul */
#ifndef MOCRAM_CO_PATTERN_01
  #define MOCRAM_CO_PATTERN_01 2863311530ul
#endif


/* Local System Constant MOCRAM_CO_PATTERN_02 */


/* MOCRAM_CO_PATTERN_02 Typ=ul */
#ifndef MOCRAM_CO_PATTERN_02
  #define MOCRAM_CO_PATTERN_02 0ul
#endif


/* Local System Constant MOCRAM_CO_PATTERN_AA_IDX */


/* MOCRAM_CO_PATTERN_AA_IDX Typ=ub */
#ifndef MOCRAM_CO_PATTERN_AA_IDX
  #define MOCRAM_CO_PATTERN_AA_IDX 0u
#endif


/* Local System Constant MOCRAM_CO_PATTERN_NUMBER */


/* MOCRAM_CO_PATTERN_NUMBER Typ=ub */
#ifndef MOCRAM_CO_PATTERN_NUMBER
  #define MOCRAM_CO_PATTERN_NUMBER 2u
#endif


/* Local System Constant MOCRAM_CO_PROTRAMCLEARED */


/* MOCRAM_CO_PROTRAMCLEARED Typ=ub */
#ifndef MOCRAM_CO_PROTRAMCLEARED
  #define MOCRAM_CO_PROTRAMCLEARED 51u
#endif


/* Local System Constant MOCRAM_CO_PROTRAMNOTCLEARED */


/* MOCRAM_CO_PROTRAMNOTCLEARED Typ=ub */
#ifndef MOCRAM_CO_PROTRAMNOTCLEARED
  #define MOCRAM_CO_PROTRAMNOTCLEARED 204u
#endif


/* Local System Constant MOCRAM_CO_RAMERRCTRINI */


/* MOCRAM_CO_RAMERRCTRINI Typ=uw */
#ifndef MOCRAM_CO_RAMERRCTRINI
  #define MOCRAM_CO_RAMERRCTRINI 3855u
#endif


/* Local System Constant MOCRAM_CO_TEST_ANFORDERUNG */


/* MOCRAM_CO_TEST_ANFORDERUNG Typ=ub */
#ifndef MOCRAM_CO_TEST_ANFORDERUNG
  #define MOCRAM_CO_TEST_ANFORDERUNG 51u
#endif


/* Local System Constant MO_RAMCHKEX_MSK */


/* MO_RAMCHKEX_MSK Typ=ub */
#ifndef MO_RAMCHKEX_MSK
  #define MO_RAMCHKEX_MSK 1u
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: Mo_bRamChkExMsg */


/* Imported Variable: Eep_EnvRamHist */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Eep_EnvRamInvld */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_bECom */
#define IMPORTED
#ifndef _D_FILE_ 

/* SET-Macro Interface */
#define Mo_bECom_MoSet  MoCMem_st =( MoCMem_st    | (((b_BBasT)1u) << 7) );  \
                      MoCMem_stCpl =( MoCMem_stCpl &  ((b_BBasT)(~(((b_BBasT)1u) << 7))) )
 
/* CLR-Macro Interface */
#define Mo_bECom_MoClr  MoCMem_st =( MoCMem_st    &  ((b_BBasT)(~(((b_BBasT)1u) << 7))) );  \
                      MoCMem_stCpl =( MoCMem_stCpl | (((b_BBasT)1u) << 7) )
/* GET-Macro Interface */
#define Mo_bECom_MoGet   ((MoCMem_st & (((b_BBasT)1u) << 7)) == (((b_BBasT)1u) << 7) )
/* PUT-Macro Interface */
#define Mo_bECom_MoPut(val) \
    if((val)) \
    { \
        Mo_bECom_MoSet; \
    } \
    else \
    { \
        Mo_bECom_MoClr; \
    }
/* CplChk-Macro Interface */
#define Mo_bECom_MoCplChk   ((MoCMem_st & (((b_BBasT)1u) << 7)) != (MoCMem_stCpl & (((b_BBasT)1u) << 7)))

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_bEMem */
#define IMPORTED
#ifndef _D_FILE_ 

/* SET-Macro Interface */
#define Mo_bEMem_MoSet  MoCMem_st =( MoCMem_st    | (((b_BBasT)1u) << 3) );  \
                      MoCMem_stCpl =( MoCMem_stCpl &  ((b_BBasT)(~(((b_BBasT)1u) << 3))) )
 
/* CLR-Macro Interface */
#define Mo_bEMem_MoClr  MoCMem_st =( MoCMem_st    &  ((b_BBasT)(~(((b_BBasT)1u) << 3))) );  \
                      MoCMem_stCpl =( MoCMem_stCpl | (((b_BBasT)1u) << 3) )
/* GET-Macro Interface */
#define Mo_bEMem_MoGet   ((MoCMem_st & (((b_BBasT)1u) << 3)) == (((b_BBasT)1u) << 3) )
/* PUT-Macro Interface */
#define Mo_bEMem_MoPut(val) \
    if((val)) \
    { \
        Mo_bEMem_MoSet; \
    } \
    else \
    { \
        Mo_bEMem_MoClr; \
    }
/* CplChk-Macro Interface */
#define Mo_bEMem_MoCplChk   ((MoCMem_st & (((b_BBasT)1u) << 3)) != (MoCMem_stCpl & (((b_BBasT)1u) << 3)))

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_bEPcp */
#define IMPORTED
#ifndef _D_FILE_ 

/* SET-Macro Interface */
#define Mo_bEPcp_MoSet  MoCMem_st =( MoCMem_st    | (((b_BBasT)1u) << 6) );  \
                      MoCMem_stCpl =( MoCMem_stCpl &  ((b_BBasT)(~(((b_BBasT)1u) << 6))) )
 
/* CLR-Macro Interface */
#define Mo_bEPcp_MoClr  MoCMem_st =( MoCMem_st    &  ((b_BBasT)(~(((b_BBasT)1u) << 6))) );  \
                      MoCMem_stCpl =( MoCMem_stCpl | (((b_BBasT)1u) << 6) )
/* GET-Macro Interface */
#define Mo_bEPcp_MoGet   ((MoCMem_st & (((b_BBasT)1u) << 6)) == (((b_BBasT)1u) << 6) )
/* PUT-Macro Interface */
#define Mo_bEPcp_MoPut(val) \
    if((val)) \
    { \
        Mo_bEPcp_MoSet; \
    } \
    else \
    { \
        Mo_bEPcp_MoClr; \
    }
/* CplChk-Macro Interface */
#define Mo_bEPcp_MoCplChk   ((MoCMem_st & (((b_BBasT)1u) << 6)) != (MoCMem_stCpl & (((b_BBasT)1u) << 6)))

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_bERam */
#define IMPORTED
#ifndef _D_FILE_ 

/* SET-Macro Interface */
#define Mo_bERam_MoSet  MoCMem_st =( MoCMem_st    | (((b_BBasT)1u) << 0) );  \
                      MoCMem_stCpl =( MoCMem_stCpl &  ((b_BBasT)(~(((b_BBasT)1u) << 0))) )
 
/* CLR-Macro Interface */
#define Mo_bERam_MoClr  MoCMem_st =( MoCMem_st    &  ((b_BBasT)(~(((b_BBasT)1u) << 0))) );  \
                      MoCMem_stCpl =( MoCMem_stCpl | (((b_BBasT)1u) << 0) )
/* GET-Macro Interface */
#define Mo_bERam_MoGet   ((MoCMem_st & (((b_BBasT)1u) << 0)) == (((b_BBasT)1u) << 0) )
/* PUT-Macro Interface */
#define Mo_bERam_MoPut(val) \
    if((val)) \
    { \
        Mo_bERam_MoSet; \
    } \
    else \
    { \
        Mo_bERam_MoClr; \
    }
/* CplChk-Macro Interface */
#define Mo_bERam_MoCplChk   ((MoCMem_st & (((b_BBasT)1u) << 0)) != (MoCMem_stCpl & (((b_BBasT)1u) << 0)))

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_bERomSPg */
#define IMPORTED
#ifndef _D_FILE_ 

/* SET-Macro Interface */
#define Mo_bERomSPg_MoSet  MoCMem_st =( MoCMem_st    | (((b_BBasT)1u) << 1) );  \
                      MoCMem_stCpl =( MoCMem_stCpl &  ((b_BBasT)(~(((b_BBasT)1u) << 1))) )
 
/* CLR-Macro Interface */
#define Mo_bERomSPg_MoClr  MoCMem_st =( MoCMem_st    &  ((b_BBasT)(~(((b_BBasT)1u) << 1))) );  \
                      MoCMem_stCpl =( MoCMem_stCpl | (((b_BBasT)1u) << 1) )
/* GET-Macro Interface */
#define Mo_bERomSPg_MoGet   ((MoCMem_st & (((b_BBasT)1u) << 1)) == (((b_BBasT)1u) << 1) )
/* PUT-Macro Interface */
#define Mo_bERomSPg_MoPut(val) \
    if((val)) \
    { \
        Mo_bERomSPg_MoSet; \
    } \
    else \
    { \
        Mo_bERomSPg_MoClr; \
    }
/* CplChk-Macro Interface */
#define Mo_bERomSPg_MoCplChk   ((MoCMem_st & (((b_BBasT)1u) << 1)) != (MoCMem_stCpl & (((b_BBasT)1u) << 1)))

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_bERomXPg */
#define IMPORTED
#ifndef _D_FILE_ 

/* SET-Macro Interface */
#define Mo_bERomXPg_MoSet  MoCMem_st =( MoCMem_st    | (((b_BBasT)1u) << 2) );  \
                      MoCMem_stCpl =( MoCMem_stCpl &  ((b_BBasT)(~(((b_BBasT)1u) << 2))) )
 
/* CLR-Macro Interface */
#define Mo_bERomXPg_MoClr  MoCMem_st =( MoCMem_st    &  ((b_BBasT)(~(((b_BBasT)1u) << 2))) );  \
                      MoCMem_stCpl =( MoCMem_stCpl | (((b_BBasT)1u) << 2) )
/* GET-Macro Interface */
#define Mo_bERomXPg_MoGet   ((MoCMem_st & (((b_BBasT)1u) << 2)) == (((b_BBasT)1u) << 2) )
/* PUT-Macro Interface */
#define Mo_bERomXPg_MoPut(val) \
    if((val)) \
    { \
        Mo_bERomXPg_MoSet; \
    } \
    else \
    { \
        Mo_bERomXPg_MoClr; \
    }
/* CplChk-Macro Interface */
#define Mo_bERomXPg_MoCplChk   ((MoCMem_st & (((b_BBasT)1u) << 2)) != (MoCMem_stCpl & (((b_BBasT)1u) << 2)))

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_bReqRamChkExt */
#define IMPORTED
#ifndef _D_FILE_ 

/* SET-Macro Interface */
#define Mo_bReqRamChkExt_MoSet  MoCMem_st =( MoCMem_st    | (((b_BBasT)1u) << 5) );  \
                      MoCMem_stCpl =( MoCMem_stCpl &  ((b_BBasT)(~(((b_BBasT)1u) << 5))) )
 
/* CLR-Macro Interface */
#define Mo_bReqRamChkExt_MoClr  MoCMem_st =( MoCMem_st    &  ((b_BBasT)(~(((b_BBasT)1u) << 5))) );  \
                      MoCMem_stCpl =( MoCMem_stCpl | (((b_BBasT)1u) << 5) )
/* GET-Macro Interface */
#define Mo_bReqRamChkExt_MoGet   ((MoCMem_st & (((b_BBasT)1u) << 5)) == (((b_BBasT)1u) << 5) )
/* PUT-Macro Interface */
#define Mo_bReqRamChkExt_MoPut(val) \
    if((val)) \
    { \
        Mo_bReqRamChkExt_MoSet; \
    } \
    else \
    { \
        Mo_bReqRamChkExt_MoClr; \
    }
/* CplChk-Macro Interface */
#define Mo_bReqRamChkExt_MoCplChk   ((MoCMem_st & (((b_BBasT)1u) << 5)) != (MoCMem_stCpl & (((b_BBasT)1u) << 5)))

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_bReqRomChkExt */
#define IMPORTED
#ifndef _D_FILE_ 

/* SET-Macro Interface */
#define Mo_bReqRomChkExt_MoSet  MoCMem_st =( MoCMem_st    | (((b_BBasT)1u) << 4) );  \
                      MoCMem_stCpl =( MoCMem_stCpl &  ((b_BBasT)(~(((b_BBasT)1u) << 4))) )
 
/* CLR-Macro Interface */
#define Mo_bReqRomChkExt_MoClr  MoCMem_st =( MoCMem_st    &  ((b_BBasT)(~(((b_BBasT)1u) << 4))) );  \
                      MoCMem_stCpl =( MoCMem_stCpl | (((b_BBasT)1u) << 4) )
/* GET-Macro Interface */
#define Mo_bReqRomChkExt_MoGet   ((MoCMem_st & (((b_BBasT)1u) << 4)) == (((b_BBasT)1u) << 4) )
/* PUT-Macro Interface */
#define Mo_bReqRomChkExt_MoPut(val) \
    if((val)) \
    { \
        Mo_bReqRomChkExt_MoSet; \
    } \
    else \
    { \
        Mo_bReqRomChkExt_MoClr; \
    }
/* CplChk-Macro Interface */
#define Mo_bReqRomChkExt_MoCplChk   ((MoCMem_st & (((b_BBasT)1u) << 4)) != (MoCMem_stCpl & (((b_BBasT)1u) << 4)))

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema Mo_LocRamTmpByte +++++ */

/* ########################### */
/* START MoLocRamTmpByte       */
/* ########################### */
#pragma section .bss.MoF_TmpRam aw 


/* Local Variable: MoCRAM_stOrder */
#ifdef _DAT_H
#ifndef __MOCRAM_STORDER_EXT__
#define __MOCRAM_STORDER_EXT__
/* N_DclFm: MoCRAM_stOrder */
extern uint8 MoCRAM_stOrder
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoLocRamTmpByte         */
/* ########################### */

/* +++++ Addressschema Mo_LocRamTmpLong +++++ */

/* ########################### */
/* START MoLocRamTmpLong       */
/* ########################### */
#pragma section .bss.MoF_TmpRam aw 


/* Local Variable: MoCRam_ctMain1RamChkTmp */
#ifdef _DAT_H
#ifndef __MOCRAM_CTMAIN1RAMCHKTMP_EXT__
#define __MOCRAM_CTMAIN1RAMCHKTMP_EXT__
/* N_DclFm: MoCRam_ctMain1RamChkTmp */
extern uint32 MoCRam_ctMain1RamChkTmp
;
#endif
#endif


/* Local Variable: MoCRam_ctMain2RamChkTmp */
#ifdef _DAT_H
#ifndef __MOCRAM_CTMAIN2RAMCHKTMP_EXT__
#define __MOCRAM_CTMAIN2RAMCHKTMP_EXT__
/* N_DclFm: MoCRam_ctMain2RamChkTmp */
extern uint32 MoCRam_ctMain2RamChkTmp
;
#endif
#endif


/* Local Variable: MoCRam_EndChkActPtr */
#ifdef _DAT_H
#ifndef __MOCRAM_ENDCHKACTPTR_EXT__
#define __MOCRAM_ENDCHKACTPTR_EXT__
extern uint8 * MoCRam_EndChkActPtr;
#endif
#endif


/* Local Variable: MoCRam_StartChkActPtr */
#ifdef _DAT_H
#ifndef __MOCRAM_STARTCHKACTPTR_EXT__
#define __MOCRAM_STARTCHKACTPTR_EXT__
extern uint32 * MoCRam_StartChkActPtr;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoLocRamTmpLong         */
/* ########################### */

/* +++++ Addressschema Mo_LocRamTmpWord +++++ */

/* ########################### */
/* START MoLocRamTmpWord       */
/* ########################### */
#pragma section .bss.MoF_TmpRam aw 


/* Local Variable: MoCRam_ctErrExRAM */
#ifdef _DAT_H
#ifndef __MOCRAM_CTERREXRAM_EXT__
#define __MOCRAM_CTERREXRAM_EXT__
/* N_DclFm: MoCRam_ctErrExRAM */
extern uint16 MoCRam_ctErrExRAM
;
#endif
#endif


/* Local Variable: MoCRam_ctErrExRAMCpl */
#ifdef _DAT_H
#ifndef __MOCRAM_CTERREXRAMCPL_EXT__
#define __MOCRAM_CTERREXRAMCPL_EXT__
/* N_DclFm: MoCRam_ctErrExRAMCpl */
extern uint16 MoCRam_ctErrExRAMCpl
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoLocRamTmpWord         */
/* ########################### */

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* ########################### */
/* START MoRamCplByte          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Imported Variable: MoCMem_ChkRAMIFA9TstSDCpl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCMEM_CHKRAMIFA9TSTSDCPL_EXT__
#define __MOCMEM_CHKRAMIFA9TSTSDCPL_EXT__
/* N_DclFm: MoCMem_ChkRAMIFA9TstSDCpl */
extern uint8 MoCMem_ChkRAMIFA9TstSDCpl
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamCplByte            */
/* ########################### */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* ########################### */
/* START MoRamCyclicCheckByte  */
/* ########################### */
#pragma section .bss.Mo_RamCyclicCheck aw 


/* Imported Variable: MoCMem_ChkRAMIFA9TstSD */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCMEM_CHKRAMIFA9TSTSD_EXT__
#define __MOCMEM_CHKRAMIFA9TSTSD_EXT__
/* N_DclFm: MoCMem_ChkRAMIFA9TstSD */
extern uint8 MoCMem_ChkRAMIFA9TstSD
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamCyclicCheckByte    */
/* ########################### */

/* +++++ Addressschema Mo_RamEarlyClearedByte +++++ */

/* ########################### */
/* START MoRamEarlyClearedByte */
/* ########################### */
#pragma section .bss.earlycleared aw 


/* Local Variable: MoCRam_numAreasChecked */
#ifdef _DAT_H
#ifndef __MOCRAM_NUMAREASCHECKED_EXT__
#define __MOCRAM_NUMAREASCHECKED_EXT__
/* N_DclFm: MoCRam_numAreasChecked */
extern uint8 MoCRam_numAreasChecked
;
#endif
#endif


/* Local Variable: MoCRam_numReset */
#ifdef _DAT_H
#ifndef __MOCRAM_NUMRESET_EXT__
#define __MOCRAM_NUMRESET_EXT__
/* N_DclFm: MoCRam_numReset */
extern uint8 MoCRam_numReset
;
#endif
#endif


/* Local Variable: MoCRam_stEEPInit */
#ifdef _DAT_H
#ifndef __MOCRAM_STEEPINIT_EXT__
#define __MOCRAM_STEEPINIT_EXT__
/* N_DclFm: MoCRam_stEEPInit */
extern uint8 MoCRam_stEEPInit
;
#endif
#endif


/* Local Variable: MoCRam_stRepExEepRd */
#ifdef _DAT_H
#ifndef __MOCRAM_STREPEXEEPRD_EXT__
#define __MOCRAM_STREPEXEEPRD_EXT__
/* N_DclFm: MoCRam_stRepExEepRd */
extern uint8 MoCRam_stRepExEepRd
;
#endif
#endif


/* Local Variable: MoCRam_stRepExRam */
#ifdef _DAT_H
#ifndef __MOCRAM_STREPEXRAM_EXT__
#define __MOCRAM_STREPEXRAM_EXT__
/* N_DclFm: MoCRam_stRepExRam */
extern uint8 MoCRam_stRepExRam
;
#endif
#endif


/* Local Variable: MoCRam_stRepExRamCpl */
#ifdef _DAT_H
#ifndef __MOCRAM_STREPEXRAMCPL_EXT__
#define __MOCRAM_STREPEXRAMCPL_EXT__
/* N_DclFm: MoCRam_stRepExRamCpl */
extern uint8 MoCRam_stRepExRamCpl
;
#endif
#endif


/* Exported Variable: MoCRam_stProtRAMCleared */
#ifdef _DAT_H
#ifndef __MOCRAM_STPROTRAMCLEARED_EXT__
#define __MOCRAM_STPROTRAMCLEARED_EXT__
/* N_DclFm: MoCRam_stProtRAMCleared */
extern uint8 MoCRam_stProtRAMCleared
;
#endif
#endif


/* Imported Variable: MoCMem_st */
#define IMPORTED
#ifndef _D_FILE_ 
#ifndef __MOCMEM_ST_EXT__
#define __MOCMEM_ST_EXT__
extern uint8 MoCMem_st;
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCMem_stCpl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCMEM_STCPL_EXT__
#define __MOCMEM_STCPL_EXT__
/* N_DclFm: MoCMem_stCpl */
extern uint8 MoCMem_stCpl
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCRom_numRomPageErr */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCROM_NUMROMPAGEERR_EXT__
#define __MOCROM_NUMROMPAGEERR_EXT__
/* N_DclFm: MoCRom_numRomPageErr */
extern uint8 MoCRom_numRomPageErr
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCRom_numRomPageErrCpl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCROM_NUMROMPAGEERRCPL_EXT__
#define __MOCROM_NUMROMPAGEERRCPL_EXT__
/* N_DclFm: MoCRom_numRomPageErrCpl */
extern uint8 MoCRom_numRomPageErrCpl
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCROM_stRepExROM */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCROM_STREPEXROM_EXT__
#define __MOCROM_STREPEXROM_EXT__
/* N_DclFm: MoCROM_stRepExROM */
extern uint8 MoCROM_stRepExROM
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCROM_stRepExROMCpl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCROM_STREPEXROMCPL_EXT__
#define __MOCROM_STREPEXROMCPL_EXT__
/* N_DclFm: MoCROM_stRepExROMCpl */
extern uint8 MoCROM_stRepExROMCpl
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamEarlyClearedByte   */
/* ########################### */

/* +++++ Addressschema Mo_RamEarlyClearedLong +++++ */

/* ########################### */
/* START MoRamEarlyClearedLong */
/* ########################### */
#pragma section .bss.earlycleared aw 


/* Local Variable: MoCRam_ctMain1RamChk */
#ifdef _DAT_H
#ifndef __MOCRAM_CTMAIN1RAMCHK_EXT__
#define __MOCRAM_CTMAIN1RAMCHK_EXT__
/* N_DclFm: MoCRam_ctMain1RamChk */
extern uint32 MoCRam_ctMain1RamChk
;
#endif
#endif


/* Local Variable: MoCRam_ctMain2RamChk */
#ifdef _DAT_H
#ifndef __MOCRAM_CTMAIN2RAMCHK_EXT__
#define __MOCRAM_CTMAIN2RAMCHK_EXT__
/* N_DclFm: MoCRam_ctMain2RamChk */
extern uint32 MoCRam_ctMain2RamChk
;
#endif
#endif


/* Local Variable: MoCRam_ctMainProtRam */
#ifdef _DAT_H
#ifndef __MOCRAM_CTMAINPROTRAM_EXT__
#define __MOCRAM_CTMAINPROTRAM_EXT__
/* N_DclFm: MoCRam_ctMainProtRam */
extern uint32 MoCRam_ctMainProtRam
;
#endif
#endif


/* Local Variable: MoCRam_ctRepEx */
#ifdef _DAT_H
#ifndef __MOCRAM_CTREPEX_EXT__
#define __MOCRAM_CTREPEX_EXT__
/* N_DclFm: MoCRam_ctRepEx */
extern uint32 MoCRam_ctRepEx
;
#endif
#endif


/* Imported Variable: MoCROM_adIBStructStrtPtr */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCROM_ADIBSTRUCTSTRTPTR_EXT__
#define __MOCROM_ADIBSTRUCTSTRTPTR_EXT__
/* N_DclFm: MoCROM_adIBStructStrtPtr */
extern uint32 MoCROM_adIBStructStrtPtr
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCROM_adIBStructStrtPtrCpl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCROM_ADIBSTRUCTSTRTPTRCPL_EXT__
#define __MOCROM_ADIBSTRUCTSTRTPTRCPL_EXT__
/* N_DclFm: MoCROM_adIBStructStrtPtrCpl */
extern uint32 MoCROM_adIBStructStrtPtrCpl
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamEarlyClearedLong   */
/* ########################### */

/* +++++ Addressschema Mo_RamEarlyClearedWord +++++ */
/* MoRamEarlyClearedWordHeader */
/* ########################### */
/* START MoRamEarlyClearedWord */
/* ########################### */
#pragma section .bss.earlycleared aw 


/* Local Variable: MoCRam_stEarlyClearedRam */
#ifdef _DAT_H
#ifndef __MOCRAM_STEARLYCLEAREDRAM_EXT__
#define __MOCRAM_STEARLYCLEAREDRAM_EXT__
/* N_DclFm: MoCRam_stEarlyClearedRam */
extern uint16 MoCRam_stEarlyClearedRam
;
#endif
#endif

/* MoRamEarlyClearedWordFooter */
#pragma section   
/* ########################### */
/* END MoRamEarlyClearedByte   */
/* ########################### */

/* +++++ Addressschema MsgRam +++++ */
/* MsgRamHeader */
#pragma section .sbss aws 


/* Exported Variable: MoCRam_stMsg */
/* MoCRam_stMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

/* Footer */
#pragma section 


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

/* -- No referenced PTA Structures of EepHal -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MoCMem_Co -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of MoCMem_Conf -- */
/* -- No referenced PTA Structures of MoCROM_Co -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_MOCRAM_CO_MO_DATANOCYCLICCHECKBYTE_T_DEF
#define DATA_MOCRAM_CO_MO_DATANOCYCLICCHECKBYTE_T_DEF
typedef struct
{
    /* ----- Parameter MoCRam_ChkRAMIFA9SyncTst_CW ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCRam_ChkRAMIFA9SyncTst_CW;
    /* ----- Parameter MoCRam_ChkRAMIFA9Tst_CW ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCRam_ChkRAMIFA9Tst_CW;
} DATA_MoCRAM_Co_Mo_DataNoCyclicCheckByte_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_MoCRAM_Co_Mo_DataNoCyclicCheckByte_t DATA_MoCRAM_Co_Mo_DataNoCyclicCheckByte
    __attribute__ ((asection (".pta_dataMo_DataNoCyclicCheckByte_MoCRAM_Co","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_MoCRAM_Co_Mo_DataNoCyclicCheckByte_t * const VECT_MoCRAM_Co_Mo_DataNoCyclicCheckByte
    __attribute__ ((asection (".sdata.pta_vectMo_DataNoCyclicCheckByte_MoCRAM_Co","f=as")));
#endif

/* +++++ Addressschema Mo_LocRamTmpByte +++++ */

/* +++++ Addressschema Mo_LocRamTmpLong +++++ */

/* +++++ Addressschema Mo_LocRamTmpWord +++++ */

/* +++++ Addressschema Mo_RamEarlyClearedByte +++++ */

/* +++++ Addressschema Mo_RamEarlyClearedLong +++++ */

/* +++++ Addressschema Mo_RamEarlyClearedWord +++++ */

/* +++++ Addressschema MsgRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* -- Macro for local Parameter MoCRam_ChkRAMIFA9SyncTst_CW -- */
#ifndef MoCRam_ChkRAMIFA9SyncTst_CW
#define MoCRam_ChkRAMIFA9SyncTst_CW (VECT_MoCRAM_Co_Mo_DataNoCyclicCheckByte->_MoCRam_ChkRAMIFA9SyncTst_CW)
#endif

#ifndef RP_MoCRam_ChkRAMIFA9SyncTst_CW
#define RP_MoCRam_ChkRAMIFA9SyncTst_CW (DATA_MoCRAM_Co_Mo_DataNoCyclicCheckByte._MoCRam_ChkRAMIFA9SyncTst_CW)
#endif

#ifndef __MoCRam_ChkRAMIFA9SyncTst_CW
#define __MoCRam_ChkRAMIFA9SyncTst_CW (VECT_MoCRAM_Co_Mo_DataNoCyclicCheckByte->_MoCRam_ChkRAMIFA9SyncTst_CW)
#endif

/* -- Macro for local Parameter MoCRam_ChkRAMIFA9Tst_CW -- */
#ifndef MoCRam_ChkRAMIFA9Tst_CW
#define MoCRam_ChkRAMIFA9Tst_CW (VECT_MoCRAM_Co_Mo_DataNoCyclicCheckByte->_MoCRam_ChkRAMIFA9Tst_CW)
#endif

#ifndef RP_MoCRam_ChkRAMIFA9Tst_CW
#define RP_MoCRam_ChkRAMIFA9Tst_CW (DATA_MoCRAM_Co_Mo_DataNoCyclicCheckByte._MoCRam_ChkRAMIFA9Tst_CW)
#endif

#ifndef __MoCRam_ChkRAMIFA9Tst_CW
#define __MoCRam_ChkRAMIFA9Tst_CW (VECT_MoCRAM_Co_Mo_DataNoCyclicCheckByte->_MoCRam_ChkRAMIFA9Tst_CW)
#endif

/* +++++ Addressschema Mo_LocRamTmpByte +++++ */

/* +++++ Addressschema Mo_LocRamTmpLong +++++ */

/* +++++ Addressschema Mo_LocRamTmpWord +++++ */

/* +++++ Addressschema Mo_RamEarlyClearedByte +++++ */

/* +++++ Addressschema Mo_RamEarlyClearedLong +++++ */

/* +++++ Addressschema Mo_RamEarlyClearedWord +++++ */

/* +++++ Addressschema MsgRam +++++ */


#undef _DAT_H
#endif /* _MOCRAM_CO_DAT_H */
