#ifndef _MOCSOP_CO_DAT_H
#define _MOCSOP_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model TYP_Mo_DataCyclicCheckU8 instantiated in actual function MoCSOP_Co */
#ifndef _TYP_Mo_DataCyclicCheckU8_DEF
#define _TYP_Mo_DataCyclicCheckU8_DEF

#endif /* _TYP_Mo_DataCyclicCheckU8_DEF */


/* Defined Parameter MoCSOP_ctDebSOPTst_C */
#ifndef _MoCSOP_ctDebSOPTst_C_DEF
#define _MoCSOP_ctDebSOPTst_C_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCSOP_ctDebSOPTst_C_MAC
#define _MoCSOP_ctDebSOPTst_C_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCSOP_ctDebSOPTst_C __MoCSOP_ctDebSOPTst_C
#define MoCSOP_ctDebSOPTst_C __MoCSOP_ctDebSOPTst_C
/* DS Macro referencing to GS PTA Element */
#define MoCSOP_ctDebSOPTst_CM __MoCSOP_ctDebSOPTst_C
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCSOP_ctDebSOPTst_C MoCSOP_ctDebSOPTst_C
/* DS Macro referencing to DS PTA Element */
#define MoCSOP_ctDebSOPTst_CM MoCSOP_ctDebSOPTst_C
#endif /* _DAT_H */
#endif /* _MoCSOP_ctDebSOPTst_C_MAC */

#endif /* _MoCSOP_ctDebSOPTst_C_DEF */

/* Defined Parameter MoCSOP_cwCANErrReactn_C */
#ifndef _MoCSOP_cwCANErrReactn_C_DEF
#define _MoCSOP_cwCANErrReactn_C_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCSOP_cwCANErrReactn_C_MAC
#define _MoCSOP_cwCANErrReactn_C_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCSOP_cwCANErrReactn_C __MoCSOP_cwCANErrReactn_C
#define MoCSOP_cwCANErrReactn_C __MoCSOP_cwCANErrReactn_C
/* DS Macro referencing to GS PTA Element */
#define MoCSOP_cwCANErrReactn_CM __MoCSOP_cwCANErrReactn_C
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCSOP_cwCANErrReactn_C MoCSOP_cwCANErrReactn_C
/* DS Macro referencing to DS PTA Element */
#define MoCSOP_cwCANErrReactn_CM MoCSOP_cwCANErrReactn_C
#endif /* _DAT_H */
#endif /* _MoCSOP_cwCANErrReactn_C_MAC */

#endif /* _MoCSOP_cwCANErrReactn_C_DEF */

/* Defined Parameter MoCSOP_nMaxOVLthDisbl_C */
#ifndef _MoCSOP_nMaxOVLthDisbl_C_DEF
#define _MoCSOP_nMaxOVLthDisbl_C_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCSOP_nMaxOVLthDisbl_C_MAC
#define _MoCSOP_nMaxOVLthDisbl_C_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCSOP_nMaxOVLthDisbl_C __MoCSOP_nMaxOVLthDisbl_C
#define MoCSOP_nMaxOVLthDisbl_C __MoCSOP_nMaxOVLthDisbl_C
/* DS Macro referencing to GS PTA Element */
#define MoCSOP_nMaxOVLthDisbl_CM __MoCSOP_nMaxOVLthDisbl_C
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCSOP_nMaxOVLthDisbl_C MoCSOP_nMaxOVLthDisbl_C
/* DS Macro referencing to DS PTA Element */
#define MoCSOP_nMaxOVLthDisbl_CM MoCSOP_nMaxOVLthDisbl_C
#endif /* _DAT_H */
#endif /* _MoCSOP_nMaxOVLthDisbl_C_MAC */

#endif /* _MoCSOP_nMaxOVLthDisbl_C_DEF */

/* Defined Parameter MoCSOP_stMMErrReac_CW */
#ifndef _MoCSOP_stMMErrReac_CW_DEF
#define _MoCSOP_stMMErrReac_CW_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCSOP_stMMErrReac_CW_MAC
#define _MoCSOP_stMMErrReac_CW_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCSOP_stMMErrReac_CW __MoCSOP_stMMErrReac_CW
#define MoCSOP_stMMErrReac_CW __MoCSOP_stMMErrReac_CW
/* DS Macro referencing to GS PTA Element */
#define MoCSOP_stMMErrReac_CWM __MoCSOP_stMMErrReac_CW
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCSOP_stMMErrReac_CW MoCSOP_stMMErrReac_CW
/* DS Macro referencing to DS PTA Element */
#define MoCSOP_stMMErrReac_CWM MoCSOP_stMMErrReac_CW
#endif /* _DAT_H */
#endif /* _MoCSOP_stMMErrReac_CW_MAC */

#endif /* _MoCSOP_stMMErrReac_CW_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant INJVLV_PSNR_SC */


/* INJVLV_PSNR_SC Typ=ub */
#ifndef INJVLV_PSNR_SC
  #define INJVLV_PSNR_SC 0L
#elif (INJVLV_PSNR_SC != 0L)
  #error >>>> 'INJVLV_PSNR_SC' multiple defined
#endif


/* Referenced System Constant MOCSOP_ABEIMPCT_SC */


/* MOCSOP_ABEIMPCT_SC Typ=sw */
#ifndef MOCSOP_ABEIMPCT_SC
  #define MOCSOP_ABEIMPCT_SC 0L
#elif (MOCSOP_ABEIMPCT_SC != 0L)
  #error >>>> 'MOCSOP_ABEIMPCT_SC' multiple defined
#endif


/* Referenced System Constant MO_ECOM_MSK */


/* MO_ECOM_MSK Typ=ub */
#ifndef MO_ECOM_MSK
  #define MO_ECOM_MSK 128u
#endif


/* Referenced System Constant SY_CJ840 */


/* SY_CJ840 Typ=ub */
#ifndef SY_CJ840
  #define SY_CJ840 0L
#elif (SY_CJ840 != 0L)
  #error >>>> 'SY_CJ840' multiple defined
#endif


/* Referenced System Constant SY_CJ840AT */


/* SY_CJ840AT Typ=sw */
#ifndef SY_CJ840AT
  #define SY_CJ840AT 0L
#elif (SY_CJ840AT != 0L)
  #error >>>> 'SY_CJ840AT' multiple defined
#endif


/* Referenced System Constant SY_CJ841 */


/* SY_CJ841 Typ=sw */
#ifndef SY_CJ841
  #define SY_CJ841 0L
#elif (SY_CJ841 != 0L)
  #error >>>> 'SY_CJ841' multiple defined
#endif


/* Local System Constant MOCSOP_CO_CTDEBPSDIA_CONST */


/* MOCSOP_CO_CTDEBPSDIA_CONST Typ=ub */
#ifndef MOCSOP_CO_CTDEBPSDIA_CONST
  #define MOCSOP_CO_CTDEBPSDIA_CONST 2u
#endif


/* Local System Constant MOCSOP_CO_CYCLE_REPEAT */


/* MOCSOP_CO_CYCLE_REPEAT Typ=ul */
#ifndef MOCSOP_CO_CYCLE_REPEAT
  #define MOCSOP_CO_CYCLE_REPEAT 0ul
#endif


/* Local System Constant MOCSOP_CO_DRVMOD_RESPTIME */


/* MOCSOP_CO_DRVMOD_RESPTIME Typ=ul */
#ifndef MOCSOP_CO_DRVMOD_RESPTIME
  #define MOCSOP_CO_DRVMOD_RESPTIME 75200ul
#endif


/* Local System Constant MOCSOP_CO_INCORRECT_RESPONSE */


/* MOCSOP_CO_INCORRECT_RESPONSE Typ=ul */
#ifndef MOCSOP_CO_INCORRECT_RESPONSE
  #define MOCSOP_CO_INCORRECT_RESPONSE 0ul
#endif


/* Local System Constant MOCSOP_CO_INIT_RESPTIME */


/* MOCSOP_CO_INIT_RESPTIME Typ=ul */
#ifndef MOCSOP_CO_INIT_RESPTIME
  #define MOCSOP_CO_INIT_RESPTIME 1600ul
#endif


/* Local System Constant MOCSOP_CO_NUM_ANSW */


/* MOCSOP_CO_NUM_ANSW Typ=ub */
#ifndef MOCSOP_CO_NUM_ANSW
  #define MOCSOP_CO_NUM_ANSW 16u
#endif


/* Local System Constant MOCSOP_CO_RAM_RESET */


/* MOCSOP_CO_RAM_RESET Typ=ul */
#ifndef MOCSOP_CO_RAM_RESET
  #define MOCSOP_CO_RAM_RESET 0ul
#endif


/* Local System Constant MOCSOP_CO_SCHED_EXIT */


/* MOCSOP_CO_SCHED_EXIT Typ=ul */
#ifndef MOCSOP_CO_SCHED_EXIT
  #define MOCSOP_CO_SCHED_EXIT 8000ul
#endif


/* Local System Constant MOCSOP_CO_SCHED_TEST */


/* MOCSOP_CO_SCHED_TEST Typ=ul */
#ifndef MOCSOP_CO_SCHED_TEST
  #define MOCSOP_CO_SCHED_TEST 2200ul
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: MoCSOP_stRdyMsg */
/* MoCSOP_stRdyMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: Epm_nEngLRes */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEngLRes is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema IramI8 +++++ */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 


/* Imported Variable: evz_austot */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __EVZ_AUSTOT_EXT__
#define __EVZ_AUSTOT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 evz_austot;
#else /* local or exported variable - write access */
extern uint8 evz_austot;
#endif /* IMPORTED */
#endif /* __EVZ_AUSTOT_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema IramNoReIniI8 +++++ */
/* IramNoReIniI8Header */
#pragma section .sbss.a1 aws 


/* Local Variable: MoCSOP_ctDebPSDia */
#ifdef _DAT_H
#ifndef __MOCSOP_CTDEBPSDIA_EXT__
#define __MOCSOP_CTDEBPSDIA_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_ctDebPSDia;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_ctDebPSDia;
#endif /* IMPORTED */
#endif /* __MOCSOP_CTDEBPSDIA_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCSOP_ctDebSOPTst */
#ifdef _DAT_H
#ifndef __MOCSOP_CTDEBSOPTST_EXT__
#define __MOCSOP_CTDEBSOPTST_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_ctDebSOPTst;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_ctDebSOPTst;
#endif /* IMPORTED */
#endif /* __MOCSOP_CTDEBSOPTST_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCSOP_ctErrMM */
#ifdef _DAT_H
#ifndef __MOCSOP_CTERRMM_EXT__
#define __MOCSOP_CTERRMM_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_ctErrMM;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_ctErrMM;
#endif /* IMPORTED */
#endif /* __MOCSOP_CTERRMM_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCSOP_ctErrMSC */
#ifdef _DAT_H
#ifndef __MOCSOP_CTERRMSC_EXT__
#define __MOCSOP_CTERRMSC_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_ctErrMSC;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_ctErrMSC;
#endif /* IMPORTED */
#endif /* __MOCSOP_CTERRMSC_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCSOP_ctErrOSTimeout */
#ifdef _DAT_H
#ifndef __MOCSOP_CTERROSTIMEOUT_EXT__
#define __MOCSOP_CTERROSTIMEOUT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_ctErrOSTimeout;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_ctErrOSTimeout;
#endif /* IMPORTED */
#endif /* __MOCSOP_CTERROSTIMEOUT_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCSOP_ctErrRespTime */
#ifdef _DAT_H
#ifndef __MOCSOP_CTERRRESPTIME_EXT__
#define __MOCSOP_CTERRRESPTIME_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_ctErrRespTime;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_ctErrRespTime;
#endif /* IMPORTED */
#endif /* __MOCSOP_CTERRRESPTIME_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCSOP_ctErrSPI */
#ifdef _DAT_H
#ifndef __MOCSOP_CTERRSPI_EXT__
#define __MOCSOP_CTERRSPI_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_ctErrSPI;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_ctErrSPI;
#endif /* IMPORTED */
#endif /* __MOCSOP_CTERRSPI_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCSOP_stMm */
#ifdef _DAT_H
#ifndef __MOCSOP_STMM_EXT__
#define __MOCSOP_STMM_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_stMm;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_stMm;
#endif /* IMPORTED */
#endif /* __MOCSOP_STMM_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCSOP_stMmRespCnt */
#ifdef _DAT_H
#ifndef __MOCSOP_STMMRESPCNT_EXT__
#define __MOCSOP_STMMRESPCNT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_stMmRespCnt;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_stMmRespCnt;
#endif /* IMPORTED */
#endif /* __MOCSOP_STMMRESPCNT_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: MoCSOP_stComActv */
#ifdef _DAT_H
#ifndef __MOCSOP_STCOMACTV_EXT__
#define __MOCSOP_STCOMACTV_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_stComActv;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_stComActv;
#endif /* IMPORTED */
#endif /* __MOCSOP_STCOMACTV_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: MoCSOP_stComActvCpl */
#ifdef _DAT_H
#ifndef __MOCSOP_STCOMACTVCPL_EXT__
#define __MOCSOP_STCOMACTVCPL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_stComActvCpl;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_stComActvCpl;
#endif /* IMPORTED */
#endif /* __MOCSOP_STCOMACTVCPL_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: MoCSOP_stRdy */
#ifdef _DAT_H
#ifndef __MOCSOP_STRDY_EXT__
#define __MOCSOP_STRDY_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_stRdy;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_stRdy;
#endif /* IMPORTED */
#endif /* __MOCSOP_STRDY_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: MoCSOP_stRdyCpl */
#ifdef _DAT_H
#ifndef __MOCSOP_STRDYCPL_EXT__
#define __MOCSOP_STRDYCPL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCSOP_stRdyCpl;
#else /* local or exported variable - write access */
extern uint8 MoCSOP_stRdyCpl;
#endif /* IMPORTED */
#endif /* __MOCSOP_STRDYCPL_EXT__ */
#endif /* _DAT_H */

/* Footer */
#pragma section 

/* +++++ Addressschema MoF_CplRam +++++ */


/* Local Variable: MoCSOP_ctRespOffsetTst */


/* Local Variable: MoCSOP_numQuery */


/* Local Variable: MoCSOP_RAMInitCorrResp1 */


/* Local Variable: MoCSOP_RAMInitCorrResp2 */


/* Local Variable: MoCSOP_stCheckState */


/* Local Variable: MoCSOP_stDVE */


/* Local Variable: MoCSOP_stDVE2 */


/* Local Variable: MoCSOP_stErr */


/* +++++ Addressschema Mo_MpByte +++++ */

/* ########################### */
/* START MoMpByte              */
/* ########################### */
#pragma section .bss.mpram aw 


/* Local Variable: MoCSOP_numSyCJ_mp */
#ifdef _DAT_H
#ifndef __MOCSOP_NUMSYCJ_MP_EXT__
#define __MOCSOP_NUMSYCJ_MP_EXT__
extern uint8 MoCSOP_numSyCJ_mp;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoMpByte                */
/* ########################### */

/* +++++ Addressschema Mo_RamBit +++++ */

/* ########################### */
/* START MoRamBit              */
/* ########################### */
#pragma section .bbss.Mo_RamBit awbz 


/* Exported Variable: B_ausc_act */
#ifdef _DAT_H
#ifndef __B_AUSC_ACT_EXT__
#define __B_AUSC_ACT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern _bit B_ausc_act;
#define GET_B_ausc_act (B_ausc_act)
#else /* local or exported variable - write access */
extern _bit B_ausc_act;
#define SET_B_ausc_act (B_ausc_act = TRUE)
#define CLR_B_ausc_act (B_ausc_act = FALSE)
#define GET_B_ausc_act (B_ausc_act)
#define PUT_B_ausc_act(val) ((val) ? SET_B_ausc_act : CLR_B_ausc_act)
#endif /* IMPORTED */
#endif /* __B_AUSC_ACT_EXT__ */
#endif /* _DAT_H */


#pragma section   
/* ########################### */
/* END MoRamBit                */
/* ########################### */

/* +++++ Addressschema Mo_RamComLong +++++ */

/* ########################### */
/* START MoRamComLong          */
/* ########################### */
#pragma section .bss.Mo_RamCom aw 


/* Imported Variable: Mo_stCplChk */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MO_STCPLCHK_EXT__
#define __MO_STCPLCHK_EXT__
/* N_DclFm: Mo_stCplChk */
extern uint32 Mo_stCplChk
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED
/* MoRamComLongFooter */
#pragma section   
/* ########################### */
/* END MoRamComLong            */
/* ########################### */

/* +++++ Addressschema Mo_RamEarlyClearedByte +++++ */

/* ########################### */
/* START MoRamEarlyClearedByte */
/* ########################### */
#pragma section .bss.earlycleared aw 


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

#pragma section   
/* ########################### */
/* END MoRamEarlyClearedByte   */
/* ########################### */

/* +++++ Addressschema Mo_RamProtByte +++++ */

/* ########################### */
/* START MoRamProtByte         */
/* ########################### */
#pragma section .bss.protram aw 


/* Local Variable: MoCSOP_stErrOld */
#ifdef _DAT_H
#ifndef __MOCSOP_STERROLD_EXT__
#define __MOCSOP_STERROLD_EXT__
/* N_DclFm: MoCSOP_stErrOld */
extern uint8 MoCSOP_stErrOld
;
#endif
#endif


/* Local Variable: MoCSOP_stOvTstRdy */
#ifdef _DAT_H
#ifndef __MOCSOP_STOVTSTRDY_EXT__
#define __MOCSOP_STOVTSTRDY_EXT__
/* N_DclFm: MoCSOP_stOvTstRdy */
extern uint8 MoCSOP_stOvTstRdy
;
#endif
#endif


/* Local Variable: MoCSOP_stOvTstRdyCpl */
#ifdef _DAT_H
#ifndef __MOCSOP_STOVTSTRDYCPL_EXT__
#define __MOCSOP_STOVTSTRDYCPL_EXT__
/* N_DclFm: MoCSOP_stOvTstRdyCpl */
extern uint8 MoCSOP_stOvTstRdyCpl
;
#endif
#endif


/* ########################### */
/* END MoRamProtByte           */
/* ########################### */
#pragma section   

/* +++++ Addressschema MsgRam +++++ */
/* MsgRamHeader */
#pragma section .sbss aws 


/* Local Variable: MoCSOP_stOvlCpl */
/* MoCSOP_stOvlCpl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: MoCSOP_stActMsg */
/* MoCSOP_stActMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: MoCSOP_stActvMsg */
/* MoCSOP_stActvMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: MoCSOP_stOvl */
/* MoCSOP_stOvl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of Epm_Spd -- */
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
 
/* -- No referenced PTA Structures of Mo_Glbl -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema IramNoReIniI8 +++++ */

/* +++++ Addressschema MoF_CplRam +++++ */

/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_MOCSOP_CO_MO_DATACYCLICCHECKBYTE_T_DEF
#define DATA_MOCSOP_CO_MO_DATACYCLICCHECKBYTE_T_DEF
typedef struct
{
    /* ----- Parameter MoCSOP_ctDebSOPTst_C ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCSOP_ctDebSOPTst_C;
    /* ----- Parameter MoCSOP_cwCANErrReactn_C ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCSOP_cwCANErrReactn_C;
    /* ----- Parameter MoCSOP_nMaxOVLthDisbl_C ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCSOP_nMaxOVLthDisbl_C;
    /* ----- Parameter MoCSOP_stMMErrReac_CW ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCSOP_stMMErrReac_CW;
} DATA_MoCSOP_Co_Mo_DataCyclicCheckByte_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_MoCSOP_Co_Mo_DataCyclicCheckByte_t DATA_MoCSOP_Co_Mo_DataCyclicCheckByte
    __attribute__ ((asection (".pta_dataMo_DataCyclicCheckByte_MoCSOP_Co","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_MoCSOP_Co_Mo_DataCyclicCheckByte_t * const VECT_MoCSOP_Co_Mo_DataCyclicCheckByte
    __attribute__ ((asection (".sdata.pta_vectMo_DataCyclicCheckByte_MoCSOP_Co","f=as")));
#endif

/* +++++ Addressschema Mo_MpByte +++++ */

/* +++++ Addressschema Mo_RamBit +++++ */

/* +++++ Addressschema Mo_RamProtByte +++++ */

/* +++++ Addressschema MsgRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema IramNoReIniI8 +++++ */

/* +++++ Addressschema MoF_CplRam +++++ */

/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* -- Macro for local Parameter MoCSOP_ctDebSOPTst_C -- */
#ifndef MoCSOP_ctDebSOPTst_C
#define MoCSOP_ctDebSOPTst_C (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_ctDebSOPTst_C)
#endif

#ifndef RP_MoCSOP_ctDebSOPTst_C
#define RP_MoCSOP_ctDebSOPTst_C (DATA_MoCSOP_Co_Mo_DataCyclicCheckByte._MoCSOP_ctDebSOPTst_C)
#endif

#ifndef __MoCSOP_ctDebSOPTst_C
#define __MoCSOP_ctDebSOPTst_C (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_ctDebSOPTst_C)
#endif

/* -- Macro for local Parameter MoCSOP_cwCANErrReactn_C -- */
#ifndef MoCSOP_cwCANErrReactn_C
#define MoCSOP_cwCANErrReactn_C (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_cwCANErrReactn_C)
#endif

#ifndef RP_MoCSOP_cwCANErrReactn_C
#define RP_MoCSOP_cwCANErrReactn_C (DATA_MoCSOP_Co_Mo_DataCyclicCheckByte._MoCSOP_cwCANErrReactn_C)
#endif

#ifndef __MoCSOP_cwCANErrReactn_C
#define __MoCSOP_cwCANErrReactn_C (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_cwCANErrReactn_C)
#endif

/* -- Macro for local Parameter MoCSOP_nMaxOVLthDisbl_C -- */
#ifndef MoCSOP_nMaxOVLthDisbl_C
#define MoCSOP_nMaxOVLthDisbl_C (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_nMaxOVLthDisbl_C)
#endif

#ifndef RP_MoCSOP_nMaxOVLthDisbl_C
#define RP_MoCSOP_nMaxOVLthDisbl_C (DATA_MoCSOP_Co_Mo_DataCyclicCheckByte._MoCSOP_nMaxOVLthDisbl_C)
#endif

#ifndef __MoCSOP_nMaxOVLthDisbl_C
#define __MoCSOP_nMaxOVLthDisbl_C (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_nMaxOVLthDisbl_C)
#endif

/* -- Macro for local Parameter MoCSOP_stMMErrReac_CW -- */
#ifndef MoCSOP_stMMErrReac_CW
#define MoCSOP_stMMErrReac_CW (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_stMMErrReac_CW)
#endif

#ifndef RP_MoCSOP_stMMErrReac_CW
#define RP_MoCSOP_stMMErrReac_CW (DATA_MoCSOP_Co_Mo_DataCyclicCheckByte._MoCSOP_stMMErrReac_CW)
#endif

#ifndef __MoCSOP_stMMErrReac_CW
#define __MoCSOP_stMMErrReac_CW (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_stMMErrReac_CW)
#endif

/* +++++ Addressschema Mo_MpByte +++++ */

/* +++++ Addressschema Mo_RamBit +++++ */

/* +++++ Addressschema Mo_RamProtByte +++++ */

/* +++++ Addressschema MsgRam +++++ */


#undef _DAT_H
#endif /* _MOCSOP_CO_DAT_H */
