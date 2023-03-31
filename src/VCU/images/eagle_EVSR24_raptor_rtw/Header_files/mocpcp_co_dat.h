#ifndef _MOCPCP_CO_DAT_H
#define _MOCPCP_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model TYP_Mo_DataCyclicCheckU8 instantiated in actual function MoCPCP_Co */
#ifndef _TYP_Mo_DataCyclicCheckU8_DEF
#define _TYP_Mo_DataCyclicCheckU8_DEF

#endif /* _TYP_Mo_DataCyclicCheckU8_DEF */
/* Parameter-Model TYP_Mo_DataCyclicCheckU16 instantiated in actual function MoCPCP_Co */
#ifndef _TYP_Mo_DataCyclicCheckU16_DEF
#define _TYP_Mo_DataCyclicCheckU16_DEF

#endif /* _TYP_Mo_DataCyclicCheckU16_DEF */


/* Defined Parameter MoCPCP_numErr_C */
#ifndef _MoCPCP_numErr_C_DEF
#define _MoCPCP_numErr_C_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCPCP_numErr_C_MAC
#define _MoCPCP_numErr_C_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCPCP_numErr_C __MoCPCP_numErr_C
#define MoCPCP_numErr_C __MoCPCP_numErr_C
/* DS Macro referencing to GS PTA Element */
#define MoCPCP_numErr_CM __MoCPCP_numErr_C
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCPCP_numErr_C MoCPCP_numErr_C
/* DS Macro referencing to DS PTA Element */
#define MoCPCP_numErr_CM MoCPCP_numErr_C
#endif /* _DAT_H */
#endif /* _MoCPCP_numErr_C_MAC */

#endif /* _MoCPCP_numErr_C_DEF */

/* Defined Parameter MoCPCP_stEnaMFTst_CW */
#ifndef _MoCPCP_stEnaMFTst_CW_DEF
#define _MoCPCP_stEnaMFTst_CW_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCPCP_stEnaMFTst_CW_MAC
#define _MoCPCP_stEnaMFTst_CW_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCPCP_stEnaMFTst_CW __MoCPCP_stEnaMFTst_CW
#define MoCPCP_stEnaMFTst_CW __MoCPCP_stEnaMFTst_CW
/* DS Macro referencing to GS PTA Element */
#define MoCPCP_stEnaMFTst_CWM __MoCPCP_stEnaMFTst_CW
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCPCP_stEnaMFTst_CW MoCPCP_stEnaMFTst_CW
/* DS Macro referencing to DS PTA Element */
#define MoCPCP_stEnaMFTst_CWM MoCPCP_stEnaMFTst_CW
#endif /* _DAT_H */
#endif /* _MoCPCP_stEnaMFTst_CW_MAC */

#endif /* _MoCPCP_stEnaMFTst_CW_DEF */

/* Defined Parameter MoCPCP_tiHeal_C */
#ifndef _MoCPCP_tiHeal_C_DEF
#define _MoCPCP_tiHeal_C_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCPCP_tiHeal_C_MAC
#define _MoCPCP_tiHeal_C_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCPCP_tiHeal_C __MoCPCP_tiHeal_C
#define MoCPCP_tiHeal_C __MoCPCP_tiHeal_C
/* DS Macro referencing to GS PTA Element */
#define MoCPCP_tiHeal_CM __MoCPCP_tiHeal_C
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCPCP_tiHeal_C MoCPCP_tiHeal_C
/* DS Macro referencing to DS PTA Element */
#define MoCPCP_tiHeal_CM MoCPCP_tiHeal_C
#endif /* _DAT_H */
#endif /* _MoCPCP_tiHeal_C_MAC */

#endif /* _MoCPCP_tiHeal_C_DEF */

/* Defined Parameter MoCPCP_numRomChk_C */
#ifndef _MoCPCP_numRomChk_C_DEF
#define _MoCPCP_numRomChk_C_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCPCP_numRomChk_C_MAC
#define _MoCPCP_numRomChk_C_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCPCP_numRomChk_C __MoCPCP_numRomChk_C
#define MoCPCP_numRomChk_C __MoCPCP_numRomChk_C
/* DS Macro referencing to GS PTA Element */
#define MoCPCP_numRomChk_CM __MoCPCP_numRomChk_C
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCPCP_numRomChk_C MoCPCP_numRomChk_C
/* DS Macro referencing to DS PTA Element */
#define MoCPCP_numRomChk_CM MoCPCP_numRomChk_C
#endif /* _DAT_H */
#endif /* _MoCPCP_numRomChk_C_MAC */

#endif /* _MoCPCP_numRomChk_C_DEF */

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


/* Referenced System Constant MO_MAXVALINDCR_SC */


/* MO_MAXVALINDCR_SC Typ=ub */
#ifndef MO_MAXVALINDCR_SC
  #define MO_MAXVALINDCR_SC 0L
#elif (MO_MAXVALINDCR_SC != 0L)
  #error >>>> 'MO_MAXVALINDCR_SC' multiple defined
#endif


/* Local System Constant MOCPCP_CO_NUM_CHECK */


/* MOCPCP_CO_NUM_CHECK Typ=uw */
#ifndef MOCPCP_CO_NUM_CHECK
  #define MOCPCP_CO_NUM_CHECK 150u
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: MoCCom_bPCPNew */
#define IMPORTED
#ifndef _D_FILE_ 

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

/* +++++ Addressschema IramNoReIniI32 +++++ */
/* IramNoReIniI32Header */
#pragma section .bss.a4 aw 


/* Imported Variable: MoCCom_Query */
#define IMPORTED
#ifndef _D_FILE_ 
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

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

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


/* Local Variable: MoCPCP_ctErrCpl */
#ifdef _DAT_H
#ifndef __MOCPCP_CTERRCPL_EXT__
#define __MOCPCP_CTERRCPL_EXT__
/* N_DclFm: MoCPCP_ctErrCpl */
extern uint8 MoCPCP_ctErrCpl
;
#endif
#endif


/* Local Variable: MoCPCP_ctHealCpl */
#ifdef _DAT_H
#ifndef __MOCPCP_CTHEALCPL_EXT__
#define __MOCPCP_CTHEALCPL_EXT__
/* N_DclFm: MoCPCP_ctHealCpl */
extern uint8 MoCPCP_ctHealCpl
;
#endif
#endif


/* Imported Variable: MoCCom_stQueryNew */
#define IMPORTED
#ifndef _D_FILE_ 
#ifndef __MOCCOM_STQUERYNEW_EXT__
#define __MOCCOM_STQUERYNEW_EXT__
extern uint8 MoCCom_stQueryNew;
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Mo_stMoCCpl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MO_STMOCCPL_EXT__
#define __MO_STMOCCPL_EXT__
/* N_DclFm: Mo_stMoCCpl */
extern uint8 Mo_stMoCCpl
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamCplByte            */
/* ########################### */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* ########################### */
/* START MoRamCplLong          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Local Variable: MoCPCP_adCSPtrCpl */
#ifdef _DAT_H
#ifndef __MOCPCP_ADCSPTRCPL_EXT__
#define __MOCPCP_ADCSPTRCPL_EXT__
/* N_DclFm: MoCPCP_adCSPtrCpl */
extern uint32 MoCPCP_adCSPtrCpl
;
#endif
#endif


/* Local Variable: MoCPCP_adCurrentCpl */
#ifdef _DAT_H
#ifndef __MOCPCP_ADCURRENTCPL_EXT__
#define __MOCPCP_ADCURRENTCPL_EXT__
/* N_DclFm: MoCPCP_adCurrentCpl */
extern uint32 MoCPCP_adCurrentCpl
;
#endif
#endif


/* Local Variable: MoCPCP_numCurrentCSumCpl */
#ifdef _DAT_H
#ifndef __MOCPCP_NUMCURRENTCSUMCPL_EXT__
#define __MOCPCP_NUMCURRENTCSUMCPL_EXT__
/* N_DclFm: MoCPCP_numCurrentCSumCpl */
extern uint32 MoCPCP_numCurrentCSumCpl
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoRamCplLong            */
/* ########################### */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* ########################### */
/* START MoRamCyclicCheckByte  */
/* ########################### */
#pragma section .bss.Mo_RamCyclicCheck aw 


/* Local Variable: MoCPCP_ctErr */
#ifdef _DAT_H
#ifndef __MOCPCP_CTERR_EXT__
#define __MOCPCP_CTERR_EXT__
/* N_DclFm: MoCPCP_ctErr */
extern uint8 MoCPCP_ctErr
;
#endif
#endif


/* Local Variable: MoCPCP_ctHeal */
#ifdef _DAT_H
#ifndef __MOCPCP_CTHEAL_EXT__
#define __MOCPCP_CTHEAL_EXT__
/* N_DclFm: MoCPCP_ctHeal */
extern uint8 MoCPCP_ctHeal
;
#endif
#endif


/* Imported Variable: Mo_stMoC */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MO_STMOC_EXT__
#define __MO_STMOC_EXT__
/* N_DclFm: Mo_stMoC */
extern uint8 Mo_stMoC
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamCyclicCheckByte    */
/* ########################### */

/* +++++ Addressschema Mo_RamCyclicCheckLong +++++ */

/* ########################### */
/* START MoRamCyclicCheckLong  */
/* ########################### */
#pragma section .bss.Mo_RamCyclicCheck aw 


/* Local Variable: MoCPCP_adCSPtr */


/* Local Variable: MoCPCP_adCurrent */
#ifdef _DAT_H
#ifndef __MOCPCP_ADCURRENT_EXT__
#define __MOCPCP_ADCURRENT_EXT__
/* N_DclFm: MoCPCP_adCurrent */
extern uint32 MoCPCP_adCurrent
;
#endif
#endif


/* Local Variable: MoCPCP_numCurrentCSum */
#ifdef _DAT_H
#ifndef __MOCPCP_NUMCURRENTCSUM_EXT__
#define __MOCPCP_NUMCURRENTCSUM_EXT__
/* N_DclFm: MoCPCP_numCurrentCSum */
extern uint32 MoCPCP_numCurrentCSum
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoRamCyclicCheckLong    */
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
/* -- No referenced PTA Structures of MoCCom_Co -- */
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
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_MOCPCP_CO_MO_DATACYCLICCHECKBYTE_T_DEF
#define DATA_MOCPCP_CO_MO_DATACYCLICCHECKBYTE_T_DEF
typedef struct
{
    /* ----- Parameter MoCPCP_numErr_C ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCPCP_numErr_C;
    /* ----- Parameter MoCPCP_stEnaMFTst_CW ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCPCP_stEnaMFTst_CW;
    /* ----- Parameter MoCPCP_tiHeal_C ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCPCP_tiHeal_C;
} DATA_MoCPCP_Co_Mo_DataCyclicCheckByte_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_MoCPCP_Co_Mo_DataCyclicCheckByte_t DATA_MoCPCP_Co_Mo_DataCyclicCheckByte
    __attribute__ ((asection (".pta_dataMo_DataCyclicCheckByte_MoCPCP_Co","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_MoCPCP_Co_Mo_DataCyclicCheckByte_t * const VECT_MoCPCP_Co_Mo_DataCyclicCheckByte
    __attribute__ ((asection (".sdata.pta_vectMo_DataCyclicCheckByte_MoCPCP_Co","f=as")));
#endif

/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_MOCPCP_CO_MO_DATACYCLICCHECKWORD_T_DEF
#define DATA_MOCPCP_CO_MO_DATACYCLICCHECKWORD_T_DEF
typedef struct
{
    /* ----- Parameter MoCPCP_numRomChk_C ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint16 _MoCPCP_numRomChk_C;
} DATA_MoCPCP_Co_Mo_DataCyclicCheckWord_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_MoCPCP_Co_Mo_DataCyclicCheckWord_t DATA_MoCPCP_Co_Mo_DataCyclicCheckWord
    __attribute__ ((asection (".pta_dataMo_DataCyclicCheckWord_MoCPCP_Co","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_MoCPCP_Co_Mo_DataCyclicCheckWord_t * const VECT_MoCPCP_Co_Mo_DataCyclicCheckWord
    __attribute__ ((asection (".sdata.pta_vectMo_DataCyclicCheckWord_MoCPCP_Co","f=as")));
#endif

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckLong +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* -- Macro for local Parameter MoCPCP_numErr_C -- */
#ifndef MoCPCP_numErr_C
#define MoCPCP_numErr_C (VECT_MoCPCP_Co_Mo_DataCyclicCheckByte->_MoCPCP_numErr_C)
#endif

#ifndef RP_MoCPCP_numErr_C
#define RP_MoCPCP_numErr_C (DATA_MoCPCP_Co_Mo_DataCyclicCheckByte._MoCPCP_numErr_C)
#endif

#ifndef __MoCPCP_numErr_C
#define __MoCPCP_numErr_C (VECT_MoCPCP_Co_Mo_DataCyclicCheckByte->_MoCPCP_numErr_C)
#endif

/* -- Macro for local Parameter MoCPCP_stEnaMFTst_CW -- */
#ifndef MoCPCP_stEnaMFTst_CW
#define MoCPCP_stEnaMFTst_CW (VECT_MoCPCP_Co_Mo_DataCyclicCheckByte->_MoCPCP_stEnaMFTst_CW)
#endif

#ifndef RP_MoCPCP_stEnaMFTst_CW
#define RP_MoCPCP_stEnaMFTst_CW (DATA_MoCPCP_Co_Mo_DataCyclicCheckByte._MoCPCP_stEnaMFTst_CW)
#endif

#ifndef __MoCPCP_stEnaMFTst_CW
#define __MoCPCP_stEnaMFTst_CW (VECT_MoCPCP_Co_Mo_DataCyclicCheckByte->_MoCPCP_stEnaMFTst_CW)
#endif

/* -- Macro for local Parameter MoCPCP_tiHeal_C -- */
#ifndef MoCPCP_tiHeal_C
#define MoCPCP_tiHeal_C (VECT_MoCPCP_Co_Mo_DataCyclicCheckByte->_MoCPCP_tiHeal_C)
#endif

#ifndef RP_MoCPCP_tiHeal_C
#define RP_MoCPCP_tiHeal_C (DATA_MoCPCP_Co_Mo_DataCyclicCheckByte._MoCPCP_tiHeal_C)
#endif

#ifndef __MoCPCP_tiHeal_C
#define __MoCPCP_tiHeal_C (VECT_MoCPCP_Co_Mo_DataCyclicCheckByte->_MoCPCP_tiHeal_C)
#endif

/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* -- Macro for local Parameter MoCPCP_numRomChk_C -- */
#ifndef MoCPCP_numRomChk_C
#define MoCPCP_numRomChk_C (VECT_MoCPCP_Co_Mo_DataCyclicCheckWord->_MoCPCP_numRomChk_C)
#endif

#ifndef RP_MoCPCP_numRomChk_C
#define RP_MoCPCP_numRomChk_C (DATA_MoCPCP_Co_Mo_DataCyclicCheckWord._MoCPCP_numRomChk_C)
#endif

#ifndef __MoCPCP_numRomChk_C
#define __MoCPCP_numRomChk_C (VECT_MoCPCP_Co_Mo_DataCyclicCheckWord->_MoCPCP_numRomChk_C)
#endif

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckLong +++++ */


#undef _DAT_H
#endif /* _MOCPCP_CO_DAT_H */
