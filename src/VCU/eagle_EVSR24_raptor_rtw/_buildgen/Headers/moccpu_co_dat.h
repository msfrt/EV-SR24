#ifndef _MOCCPU_CO_DAT_H
#define _MOCCPU_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter MoCCPU_IpoTst_CUR */
#ifndef _MoCCPU_IpoTst_CUR_DEF
#define _MoCCPU_IpoTst_CUR_DEF

#ifndef _MoCCPU_IpoTst_CUR_MAC
#define _MoCCPU_IpoTst_CUR_MAC
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define MO_KL_MoCCPU_IpoTst_CUR ( Mo_IpoCurveS16( (sint32)(MoCCPU_IpoIn), (__MoCCPU_IpoTst_CUR) ) )
#define MO_KL_P_MoCCPU_IpoTst_CUR(x) ( Mo_IpoCurveS16( (sint32)(x), (__MoCCPU_IpoTst_CUR) ) )/* Parameter: SST-Ergebnisgroesse X, Uebergabe im C-File */
/* DS Macro referencing to GS PTA Element */
#define MoCCPU_IpoTst_CURM(input_x) ( MoFSrv_Lib_IpoCurveS16( (sint32)(input_x), (__MoCCPU_IpoTst_CUR) ) )
#else
/* GS Macro referencing to DS PTA Element */
#define MO_KL_MoCCPU_IpoTst_CUR ( Mo_IpoCurveS16( (sint32)(MoCCPU_IpoIn), (MoCCPU_IpoTst_CUR) ) )
#define MO_KL_P_MoCCPU_IpoTst_CUR(x) ( Mo_IpoCurveS16( (sint32)(x), (MoCCPU_IpoTst_CUR) ) )/* Parameter: SST-Ergebnisgroesse X, Uebergabe im C-File */
/* DS Macro referencing to DS PTA Element */
#define MoCCPU_IpoTst_CURM(input_x) ( MoFSrv_Lib_IpoCurveS16( (sint32)(input_x), (MoCCPU_IpoTst_CUR) ) )
#endif /* _DAT_H */
#endif /* _MoCCPU_IpoTst_CUR_MAC */
#endif /* _MoCCPU_IpoTst_CUR_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant MOCCOM_CO_NUM_ANSW */


/* MOCCOM_CO_NUM_ANSW Typ=ub */
#ifndef MOCCOM_CO_NUM_ANSW
  #define MOCCOM_CO_NUM_ANSW 16u
#endif


/* Referenced System Constant MOCCPU_FIT_SY */


/* MOCCPU_FIT_SY Typ=sw */
#ifndef MOCCPU_FIT_SY
  #define MOCCPU_FIT_SY 0L
#elif (MOCCPU_FIT_SY != 0L)
  #error >>>> 'MOCCPU_FIT_SY' multiple defined
#endif


/* Referenced System Constant MOCCPU_IT_SY */


/* MOCCPU_IT_SY Typ=sw */
#ifndef MOCCPU_IT_SY
  #define MOCCPU_IT_SY 0L
#elif (MOCCPU_IT_SY != 0L)
  #error >>>> 'MOCCPU_IT_SY' multiple defined
#endif


/* Referenced System Constant MOEXE_CO_NUM_CPUSEQ */


/* MOEXE_CO_NUM_CPUSEQ Typ=ul */
#ifndef MOEXE_CO_NUM_CPUSEQ
  #define MOEXE_CO_NUM_CPUSEQ 1ul
#endif


/* Local System Constant MOCCPU_CO_CTINI */


/* MOCCPU_CO_CTINI Typ=ub */
#ifndef MOCCPU_CO_CTINI
  #define MOCCPU_CO_CTINI 1u
#endif


/* Local System Constant MOCCPU_CO_IPOTST_CURX */


/* MOCCPU_CO_IPOTST_CURX Typ=ub */
#ifndef MOCCPU_CO_IPOTST_CURX
  #define MOCCPU_CO_IPOTST_CURX 20u
#endif


/* Local System Constant MOCCPU_CO_LONIBBLE */


/* MOCCPU_CO_LONIBBLE Typ=ul */
#ifndef MOCCPU_CO_LONIBBLE
  #define MOCCPU_CO_LONIBBLE 15ul
#endif


/* Local System Constant MOCCPU_CO_LSB */


/* MOCCPU_CO_LSB Typ=ul */
#ifndef MOCCPU_CO_LSB
  #define MOCCPU_CO_LSB 1ul
#endif


/* Local System Constant MOCCPU_CO_MAXS16_ASFLOAT */


/* MOCCPU_CO_MAXS16_ASFLOAT Typ=ul */
#ifndef MOCCPU_CO_MAXS16_ASFLOAT
  #define MOCCPU_CO_MAXS16_ASFLOAT 65536ul
#endif


/* Local System Constant MOCCPU_CO_MSB16 */


/* MOCCPU_CO_MSB16 Typ=ul */
#ifndef MOCCPU_CO_MSB16
  #define MOCCPU_CO_MSB16 32768ul
#endif


/* Local System Constant MOCCPU_CO_QUERY15 */


/* MOCCPU_CO_QUERY15 Typ=sl */
#ifndef MOCCPU_CO_QUERY15
  #define MOCCPU_CO_QUERY15 3855l
#endif


/* Local System Constant MOCCPU_CO_QUERY_MSK */


/* MOCCPU_CO_QUERY_MSK Typ=ul */
#ifndef MOCCPU_CO_QUERY_MSK
  #define MOCCPU_CO_QUERY_MSK 15ul
#endif


/* Local System Constant MOCCPU_CO_ZERO */


/* MOCCPU_CO_ZERO Typ=ul */
#ifndef MOCCPU_CO_ZERO
  #define MOCCPU_CO_ZERO 0ul
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: MoCCom_bCPUNew */
#define IMPORTED
#ifndef _D_FILE_ 

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

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* ########################### */
/* START MoRamCplByte          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Local Variable: MoCCPU_ctSeq */
#ifdef _DAT_H
#ifndef __MOCCPU_CTSEQ_EXT__
#define __MOCCPU_CTSEQ_EXT__
/* N_DclFm: MoCCPU_ctSeq */
extern uint8 MoCCPU_ctSeq
;
#endif
#endif


/* Exported Variable: MoCCPU_Query */
#ifdef _DAT_H
#ifndef __MOCCPU_QUERY_EXT__
#define __MOCCPU_QUERY_EXT__
/* N_DclFm: MoCCPU_Query */
extern uint8 MoCCPU_Query
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

#pragma section   
/* ########################### */
/* END MoRamCplByte            */
/* ########################### */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* ########################### */
/* START MoRamCplLong          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Local Variable: MoCCPU_TempRes */
#ifdef _DAT_H
#ifndef __MOCCPU_TEMPRES_EXT__
#define __MOCCPU_TEMPRES_EXT__
/* N_DclFm: MoCCPU_TempRes */
extern uint32 MoCCPU_TempRes
;
#endif
#endif


/* Exported Variable: MoCCPU_PartResp */
#ifdef _DAT_H
#ifndef __MOCCPU_PARTRESP_EXT__
#define __MOCCPU_PARTRESP_EXT__
/* N_DclFm: MoCCPU_PartResp */
extern uint32 MoCCPU_PartResp
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoRamCplLong            */
/* ########################### */

/* +++++ Addressschema Mo_RamCplWord +++++ */

/* ########################### */
/* START MoRamCplWord          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Local Variable: MoCCPU_IpoIn */
#ifdef _DAT_H
#ifndef __MOCCPU_IPOIN_EXT__
#define __MOCCPU_IPOIN_EXT__
/* N_DclFm: MoCCPU_IpoIn */
extern sint16 MoCCPU_IpoIn
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoRamCplWord            */
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
/* -- No referenced PTA Structures of MoExe_Co -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_MOCCPU_CO_MO_DATACYCLICCHECKWORD_T_DEF
#define DATA_MOCCPU_CO_MO_DATACYCLICCHECKWORD_T_DEF
typedef struct
{
    /* ----- Parameter MoCCPU_IpoTst_CUR ----- */
        /* Mo_DataCurveSstU16WU8( N_DefFm ) */
    sint16 _MoCCPU_IpoTst_CUR[1+2*20];
} DATA_MoCCPU_Co_Mo_DataCyclicCheckWord_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_MoCCPU_Co_Mo_DataCyclicCheckWord_t DATA_MoCCPU_Co_Mo_DataCyclicCheckWord
    __attribute__ ((asection (".pta_dataMo_DataCyclicCheckWord_MoCCPU_Co","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_MoCCPU_Co_Mo_DataCyclicCheckWord_t * const VECT_MoCCPU_Co_Mo_DataCyclicCheckWord
    __attribute__ ((asection (".sdata.pta_vectMo_DataCyclicCheckWord_MoCCPU_Co","f=as")));
#endif

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* +++++ Addressschema Mo_RamCplWord +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* -- Macro for local Parameter MoCCPU_IpoTst_CUR -- */
#ifndef MoCCPU_IpoTst_CUR
#define MoCCPU_IpoTst_CUR (VECT_MoCCPU_Co_Mo_DataCyclicCheckWord->_MoCCPU_IpoTst_CUR)
#endif

#ifndef RP_MoCCPU_IpoTst_CUR
#define RP_MoCCPU_IpoTst_CUR (DATA_MoCCPU_Co_Mo_DataCyclicCheckWord._MoCCPU_IpoTst_CUR)
#endif

#ifndef __MoCCPU_IpoTst_CUR
#define __MoCCPU_IpoTst_CUR (VECT_MoCCPU_Co_Mo_DataCyclicCheckWord->_MoCCPU_IpoTst_CUR)
#endif

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* +++++ Addressschema Mo_RamCplWord +++++ */


#undef _DAT_H
#endif /* _MOCCPU_CO_DAT_H */
