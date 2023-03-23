#ifndef _MOCCOM_CO_DAT_H
#define _MOCCOM_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model TYP_Mo_DataCyclicCheckU8 instantiated in actual function MoCCom_Co */
#ifndef _TYP_Mo_DataCyclicCheckU8_DEF
#define _TYP_Mo_DataCyclicCheckU8_DEF

#endif /* _TYP_Mo_DataCyclicCheckU8_DEF */


/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant ECU_TRICORE_SY */


/* ECU_TRICORE_SY Typ=sw */
#ifndef ECU_TRICORE_SY
  #define ECU_TRICORE_SY 14L
#elif (ECU_TRICORE_SY != 14L)
  #error >>>> 'ECU_TRICORE_SY' multiple defined
#endif


/* Referenced System Constant MO_ECOM_MSK */


/* MO_ECOM_MSK Typ=ub */
#ifndef MO_ECOM_MSK
  #define MO_ECOM_MSK 128u
#endif


/* Referenced System Constant MO_EXTDTSK_SC */


/* MO_EXTDTSK_SC Typ=sw */
#ifndef MO_EXTDTSK_SC
  #define MO_EXTDTSK_SC 0L
#elif (MO_EXTDTSK_SC != 0L)
  #error >>>> 'MO_EXTDTSK_SC' multiple defined
#endif


/* Local System Constant MOCCOM_CO_CPUNEW_MSK */


/* MOCCOM_CO_CPUNEW_MSK Typ=ub */
#ifndef MOCCOM_CO_CPUNEW_MSK
  #define MOCCOM_CO_CPUNEW_MSK 1u
#endif


/* Local System Constant MOCCOM_CO_NUM_ANSW */


/* MOCCOM_CO_NUM_ANSW Typ=ub */
#ifndef MOCCOM_CO_NUM_ANSW
  #define MOCCOM_CO_NUM_ANSW 16u
#endif


/* Local System Constant MOCCOM_CO_PCPNEW_MSK */


/* MOCCOM_CO_PCPNEW_MSK Typ=ub */
#ifndef MOCCOM_CO_PCPNEW_MSK
  #define MOCCOM_CO_PCPNEW_MSK 4u
#endif


/* Local System Constant MOCCOM_CO_PFCNEW_MSK */


/* MOCCOM_CO_PFCNEW_MSK Typ=ub */
#ifndef MOCCOM_CO_PFCNEW_MSK
  #define MOCCOM_CO_PFCNEW_MSK 2u
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: MoCCom_bCPUNew */

/* SET-Macro Interface */
#define MoCCom_bCPUNew_MoSet  MoCCom_stQueryNew = ( MoCCom_stQueryNew | (((b_BBasT)1u) << 0) )
/* CLR-Macro Interface */
#define MoCCom_bCPUNew_MoClr  MoCCom_stQueryNew = ( MoCCom_stQueryNew &  ((b_BBasT)(~(((b_BBasT)1u) << 0))) )
/* GET-Macro Interface */
#define MoCCom_bCPUNew_MoGet  ((MoCCom_stQueryNew & (((b_BBasT)1u) << 0)) == (((b_BBasT)1u) << 0) )
/* PUT-Macro Interface */
#define MoCCom_bCPUNew_MoPut(val) \
    if((val)) \
    { \
        MoCCom_bCPUNew_MoSet; \
    } \
    else \
    { \
        MoCCom_bCPUNew_MoClr; \
    }


/* Exported Variable: MoCCom_bPCPNew */

/* SET-Macro Interface */
#define MoCCom_bPCPNew_MoSet  MoCCom_stQueryNew = ( MoCCom_stQueryNew | (((b_BBasT)1u) << 2) )
/* CLR-Macro Interface */
#define MoCCom_bPCPNew_MoClr  MoCCom_stQueryNew = ( MoCCom_stQueryNew &  ((b_BBasT)(~(((b_BBasT)1u) << 2))) )
/* GET-Macro Interface */
#define MoCCom_bPCPNew_MoGet  ((MoCCom_stQueryNew & (((b_BBasT)1u) << 2)) == (((b_BBasT)1u) << 2) )
/* PUT-Macro Interface */
#define MoCCom_bPCPNew_MoPut(val) \
    if((val)) \
    { \
        MoCCom_bPCPNew_MoSet; \
    } \
    else \
    { \
        MoCCom_bPCPNew_MoClr; \
    }


/* Exported Variable: MoCCom_bPFCNew */

/* SET-Macro Interface */
#define MoCCom_bPFCNew_MoSet  MoCCom_stQueryNew = ( MoCCom_stQueryNew | (((b_BBasT)1u) << 1) )
/* CLR-Macro Interface */
#define MoCCom_bPFCNew_MoClr  MoCCom_stQueryNew = ( MoCCom_stQueryNew &  ((b_BBasT)(~(((b_BBasT)1u) << 1))) )
/* GET-Macro Interface */
#define MoCCom_bPFCNew_MoGet  ((MoCCom_stQueryNew & (((b_BBasT)1u) << 1)) == (((b_BBasT)1u) << 1) )
/* PUT-Macro Interface */
#define MoCCom_bPFCNew_MoPut(val) \
    if((val)) \
    { \
        MoCCom_bPFCNew_MoSet; \
    } \
    else \
    { \
        MoCCom_bPFCNew_MoClr; \
    }


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

/* +++++ Addressschema IramNoReIniI32 +++++ */
/* IramNoReIniI32Header */
#pragma section .bss.a4 aw 


/* Local Variable: MoCCom_Response */
#ifdef _DAT_H
#ifndef __MOCCOM_RESPONSE_EXT__
#define __MOCCOM_RESPONSE_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint32 MoCCom_Response;
#else /* local or exported variable - write access */
extern uint32 MoCCom_Response;
#endif /* IMPORTED */
#endif /* __MOCCOM_RESPONSE_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: MoCCom_Query */
#ifdef _DAT_H
#ifndef __MOCCOM_QUERY_EXT__
#define __MOCCOM_QUERY_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint32 MoCCom_Query;
#else /* local or exported variable - write access */
extern uint32 MoCCom_Query;
#endif /* IMPORTED */
#endif /* __MOCCOM_QUERY_EXT__ */
#endif /* _DAT_H */

/* Footer */
#pragma section 

/* +++++ Addressschema IramNoReIniI8 +++++ */
/* IramNoReIniI8Header */
#pragma section .sbss.a1 aws 


/* Local Variable: MoCCom_ctErrFC */
#ifdef _DAT_H
#ifndef __MOCCOM_CTERRFC_EXT__
#define __MOCCOM_CTERRFC_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_ctErrFC;
#else /* local or exported variable - write access */
extern uint8 MoCCom_ctErrFC;
#endif /* IMPORTED */
#endif /* __MOCCOM_CTERRFC_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCCom_ctErrFCCpl */
#ifdef _DAT_H
#ifndef __MOCCOM_CTERRFCCPL_EXT__
#define __MOCCOM_CTERRFCCPL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_ctErrFCCpl;
#else /* local or exported variable - write access */
extern uint8 MoCCom_ctErrFCCpl;
#endif /* IMPORTED */
#endif /* __MOCCOM_CTERRFCCPL_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCCom_ctErrMMOld */
#ifdef _DAT_H
#ifndef __MOCCOM_CTERRMMOLD_EXT__
#define __MOCCOM_CTERRMMOLD_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_ctErrMMOld;
#else /* local or exported variable - write access */
extern uint8 MoCCom_ctErrMMOld;
#endif /* IMPORTED */
#endif /* __MOCCOM_CTERRMMOLD_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCCom_ctErrOSTimeout */
#ifdef _DAT_H
#ifndef __MOCCOM_CTERROSTIMEOUT_EXT__
#define __MOCCOM_CTERROSTIMEOUT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_ctErrOSTimeout;
#else /* local or exported variable - write access */
extern uint8 MoCCom_ctErrOSTimeout;
#endif /* IMPORTED */
#endif /* __MOCCOM_CTERROSTIMEOUT_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCCom_ctErrSPI */
#ifdef _DAT_H
#ifndef __MOCCOM_CTERRSPI_EXT__
#define __MOCCOM_CTERRSPI_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_ctErrSPI;
#else /* local or exported variable - write access */
extern uint8 MoCCom_ctErrSPI;
#endif /* IMPORTED */
#endif /* __MOCCOM_CTERRSPI_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCCom_ctSOPTstActv */
#ifdef _DAT_H
#ifndef __MOCCOM_CTSOPTSTACTV_EXT__
#define __MOCCOM_CTSOPTSTACTV_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_ctSOPTstActv;
#else /* local or exported variable - write access */
extern uint8 MoCCom_ctSOPTstActv;
#endif /* IMPORTED */
#endif /* __MOCCOM_CTSOPTSTACTV_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCCom_stErrCpl */
#ifdef _DAT_H
#ifndef __MOCCOM_STERRCPL_EXT__
#define __MOCCOM_STERRCPL_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_stErrCpl;
#else /* local or exported variable - write access */
extern uint8 MoCCom_stErrCpl;
#endif /* IMPORTED */
#endif /* __MOCCOM_STERRCPL_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCCom_stMm */
#ifdef _DAT_H
#ifndef __MOCCOM_STMM_EXT__
#define __MOCCOM_STMM_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_stMm;
#else /* local or exported variable - write access */
extern uint8 MoCCom_stMm;
#endif /* IMPORTED */
#endif /* __MOCCOM_STMM_EXT__ */
#endif /* _DAT_H */


/* Local Variable: MoCCom_stMmRespCnt */
#ifdef _DAT_H
#ifndef __MOCCOM_STMMRESPCNT_EXT__
#define __MOCCOM_STMMRESPCNT_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_stMmRespCnt;
#else /* local or exported variable - write access */
extern uint8 MoCCom_stMmRespCnt;
#endif /* IMPORTED */
#endif /* __MOCCOM_STMMRESPCNT_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: MoCCom_ctErrMM */
#ifdef _DAT_H
#ifndef __MOCCOM_CTERRMM_EXT__
#define __MOCCOM_CTERRMM_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_ctErrMM;
#else /* local or exported variable - write access */
extern uint8 MoCCom_ctErrMM;
#endif /* IMPORTED */
#endif /* __MOCCOM_CTERRMM_EXT__ */
#endif /* _DAT_H */


/* Exported Variable: MoCCom_stErr */
#ifdef _DAT_H
#ifndef __MOCCOM_STERR_EXT__
#define __MOCCOM_STERR_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 MoCCom_stErr;
#else /* local or exported variable - write access */
extern uint8 MoCCom_stErr;
#endif /* IMPORTED */
#endif /* __MOCCOM_STERR_EXT__ */
#endif /* _DAT_H */


/* Imported Variable: MoCSOP_stComActv */
#define IMPORTED
#ifndef _D_FILE_ 
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

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCSOP_stComActvCpl */
#define IMPORTED
#ifndef _D_FILE_ 
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

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCSOP_stRdy */
#define IMPORTED
#ifndef _D_FILE_ 
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

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCSOP_stRdyCpl */
#define IMPORTED
#ifndef _D_FILE_ 
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

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema MoF_CplRam +++++ */


/* Local Variable: MoCCom_ctRespOffsetTst */


/* Local Variable: MoCCom_stCheckState */


/* Local Variable: MoCCom_stComState */


/* +++++ Addressschema Mo_MpLong +++++ */

/* ########################### */
/* START MoMpLong              */
/* ########################### */
#pragma section .bss.mpram aw 


/* Local Variable: MoCCom_Response_mp */
#ifdef _DAT_H
#ifndef __MOCCOM_RESPONSE_MP_EXT__
#define __MOCCOM_RESPONSE_MP_EXT__
extern uint32 MoCCom_Response_mp;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoMpLong                */
/* ########################### */

/* +++++ Addressschema Mo_RamBit +++++ */

/* ########################### */
/* START MoRamBit              */
/* ########################### */
#pragma section .bbss.Mo_RamBit awbz 


/* Imported Variable: B_ausc_act */
#define IMPORTED
#ifndef _D_FILE_ 
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

#endif /* _D_FILE_ */
#undef IMPORTED

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

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* ########################### */
/* START MoRamCplByte          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Local Variable: MoCCom_ctSOPNoRdy */
#ifdef _DAT_H
#ifndef __MOCCOM_CTSOPNORDY_EXT__
#define __MOCCOM_CTSOPNORDY_EXT__
/* N_DclFm: MoCCom_ctSOPNoRdy */
extern uint8 MoCCom_ctSOPNoRdy
;
#endif
#endif


/* Exported Variable: MoCCom_stQueryNew */
#ifndef __MOCCOM_STQUERYNEW_EXT__
#define __MOCCOM_STQUERYNEW_EXT__
extern uint8 MoCCom_stQueryNew;
#endif


#pragma section   
/* ########################### */
/* END MoRamCplByte            */
/* ########################### */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* ########################### */
/* START MoRamCplLong          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Exported Variable: MoCCom_SwShrPtlResp */
#ifdef _DAT_H
#ifndef __MOCCOM_SWSHRPTLRESP_EXT__
#define __MOCCOM_SWSHRPTLRESP_EXT__
/* N_DclFm: MoCCom_SwShrPtlResp */
extern uint32 MoCCom_SwShrPtlResp
;
#endif
#endif


/* Imported Variable: MoCCPU_PartResp */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCCPU_PARTRESP_EXT__
#define __MOCCPU_PARTRESP_EXT__
/* N_DclFm: MoCCPU_PartResp */
extern uint32 MoCCPU_PartResp
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCPFC_PartResp */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MOCPFC_PARTRESP_EXT__
#define __MOCPFC_PARTRESP_EXT__
/* N_DclFm: MoCPFC_PartResp */
extern uint32 MoCPFC_PartResp
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamCplLong            */
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


/* Local Variable: MoCCom_ctCorRespCnt */
#ifdef _DAT_H
#ifndef __MOCCOM_CTCORRESPCNT_EXT__
#define __MOCCOM_CTCORRESPCNT_EXT__
/* N_DclFm: MoCCom_ctCorRespCnt */
extern uint8 MoCCom_ctCorRespCnt
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


/* Exported Variable: MoCCom_ctErrMMMsg */
/* MoCCom_ctErrMMMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: MoCSOP_stActvMsg */
#define IMPORTED
#ifndef _D_FILE_ 
/* MoCSOP_stActvMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED
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

/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MoCCPU_Co -- */
/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of MoCMem_Co -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of MoCPFC_Co -- */
 					
/* -- Referenced PTA Structures of MoCSOP_Co -- */
/* -- Typedeclarations of Referenced Functions -- */
/* Parameter-Model TYP_Mo_DataCyclicCheckU8 instantiated in function MoCSOP_Co */
#ifndef _TYP_Mo_DataCyclicCheckU8_DEF
#define _TYP_Mo_DataCyclicCheckU8_DEF

#endif /* _TYP_Mo_DataCyclicCheckU8_DEF */



/* Referenced Parameter MOCSOP_CO_CTDEBPSDIA_CONST */


#ifndef _MOCSOP_CO_CTDEBPSDIA_CONST_DEF
#define _MOCSOP_CO_CTDEBPSDIA_CONST_DEF


/* MOCSOP_CO_CTDEBPSDIA_CONST Typ=ub */
#ifndef MOCSOP_CO_CTDEBPSDIA_CONST
  #define MOCSOP_CO_CTDEBPSDIA_CONST 2u
#endif

#endif /* _MOCSOP_CO_CTDEBPSDIA_CONST_DEF */

/* Referenced Parameter MOCSOP_CO_CYCLE_REPEAT */


#ifndef _MOCSOP_CO_CYCLE_REPEAT_DEF
#define _MOCSOP_CO_CYCLE_REPEAT_DEF


/* MOCSOP_CO_CYCLE_REPEAT Typ=ul */
#ifndef MOCSOP_CO_CYCLE_REPEAT
  #define MOCSOP_CO_CYCLE_REPEAT 0ul
#endif

#endif /* _MOCSOP_CO_CYCLE_REPEAT_DEF */

/* Referenced Parameter MOCSOP_CO_DRVMOD_RESPTIME */


#ifndef _MOCSOP_CO_DRVMOD_RESPTIME_DEF
#define _MOCSOP_CO_DRVMOD_RESPTIME_DEF


/* MOCSOP_CO_DRVMOD_RESPTIME Typ=ul */
#ifndef MOCSOP_CO_DRVMOD_RESPTIME
  #define MOCSOP_CO_DRVMOD_RESPTIME 75200ul
#endif

#endif /* _MOCSOP_CO_DRVMOD_RESPTIME_DEF */

/* Referenced Parameter MOCSOP_CO_INCORRECT_RESPONSE */


#ifndef _MOCSOP_CO_INCORRECT_RESPONSE_DEF
#define _MOCSOP_CO_INCORRECT_RESPONSE_DEF


/* MOCSOP_CO_INCORRECT_RESPONSE Typ=ul */
#ifndef MOCSOP_CO_INCORRECT_RESPONSE
  #define MOCSOP_CO_INCORRECT_RESPONSE 0ul
#endif

#endif /* _MOCSOP_CO_INCORRECT_RESPONSE_DEF */

/* Referenced Parameter MOCSOP_CO_INIT_RESPTIME */


#ifndef _MOCSOP_CO_INIT_RESPTIME_DEF
#define _MOCSOP_CO_INIT_RESPTIME_DEF


/* MOCSOP_CO_INIT_RESPTIME Typ=ul */
#ifndef MOCSOP_CO_INIT_RESPTIME
  #define MOCSOP_CO_INIT_RESPTIME 1600ul
#endif

#endif /* _MOCSOP_CO_INIT_RESPTIME_DEF */

/* Referenced Parameter MOCSOP_CO_NUM_ANSW */


#ifndef _MOCSOP_CO_NUM_ANSW_DEF
#define _MOCSOP_CO_NUM_ANSW_DEF


/* MOCSOP_CO_NUM_ANSW Typ=ub */
#ifndef MOCSOP_CO_NUM_ANSW
  #define MOCSOP_CO_NUM_ANSW 16u
#endif

#endif /* _MOCSOP_CO_NUM_ANSW_DEF */

/* Referenced Parameter MOCSOP_CO_RAM_RESET */


#ifndef _MOCSOP_CO_RAM_RESET_DEF
#define _MOCSOP_CO_RAM_RESET_DEF


/* MOCSOP_CO_RAM_RESET Typ=ul */
#ifndef MOCSOP_CO_RAM_RESET
  #define MOCSOP_CO_RAM_RESET 0ul
#endif

#endif /* _MOCSOP_CO_RAM_RESET_DEF */

/* Referenced Parameter MOCSOP_CO_SCHED_EXIT */


#ifndef _MOCSOP_CO_SCHED_EXIT_DEF
#define _MOCSOP_CO_SCHED_EXIT_DEF


/* MOCSOP_CO_SCHED_EXIT Typ=ul */
#ifndef MOCSOP_CO_SCHED_EXIT
  #define MOCSOP_CO_SCHED_EXIT 8000ul
#endif

#endif /* _MOCSOP_CO_SCHED_EXIT_DEF */

/* Referenced Parameter MOCSOP_CO_SCHED_TEST */


#ifndef _MOCSOP_CO_SCHED_TEST_DEF
#define _MOCSOP_CO_SCHED_TEST_DEF


/* MOCSOP_CO_SCHED_TEST Typ=ul */
#ifndef MOCSOP_CO_SCHED_TEST
  #define MOCSOP_CO_SCHED_TEST 2200ul
#endif

#endif /* _MOCSOP_CO_SCHED_TEST_DEF */

/* Referenced Parameter MoCSOP_ctDebSOPTst_C */


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

#endif /* _MOCSOP_CTDEBSOPTST_C_DEF */

/* Referenced Parameter MoCSOP_cwCANErrReactn_C */


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

#endif /* _MOCSOP_CWCANERRREACTN_C_DEF */

/* Referenced Parameter MoCSOP_nMaxOVLthDisbl_C */


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

#endif /* _MOCSOP_NMAXOVLTHDISBL_C_DEF */

/* Referenced Parameter MoCSOP_stMMErrReac_CW */


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

#endif /* _MOCSOP_STMMERRREAC_CW_DEF */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */
			
/* Parameter MoCSOP_ctDebSOPTst_C in Addressschema Mo_DataCyclicCheckByte is referenced from function MoCSOP_Co */ 

		
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

/* -- No referenced PTA Structures of Mo_Glbl -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* -- Macro for referenced Parameter MoCSOP_ctDebSOPTst_C -- */
#ifndef MoCSOP_ctDebSOPTst_C
#define MoCSOP_ctDebSOPTst_C\
    (VECT_MoCSOP_Co_Mo_DataCyclicCheckByte->_MoCSOP_ctDebSOPTst_C)
#endif

#ifndef RP_MoCSOP_ctDebSOPTst_C
#define RP_MoCSOP_ctDebSOPTst_C\
    (DATA_MoCSOP_Co_Mo_DataCyclicCheckByte._MoCSOP_ctDebSOPTst_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema IramNoReIniI32 +++++ */

/* +++++ Addressschema IramNoReIniI8 +++++ */

/* +++++ Addressschema MoF_CplRam +++++ */

/* +++++ Addressschema Mo_MpLong +++++ */

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* +++++ Addressschema Mo_RamProtByte +++++ */

/* +++++ Addressschema MsgRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema IramNoReIniI32 +++++ */

/* +++++ Addressschema IramNoReIniI8 +++++ */

/* +++++ Addressschema MoF_CplRam +++++ */

/* +++++ Addressschema Mo_MpLong +++++ */

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* +++++ Addressschema Mo_RamProtByte +++++ */

/* +++++ Addressschema MsgRam +++++ */


#undef _DAT_H
#endif /* _MOCCOM_CO_DAT_H */
