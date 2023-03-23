#ifndef _MOCPFC_CO_DAT_H
#define _MOCPFC_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




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


/* Referenced System Constant MO_EXTDTSK_SC */


/* MO_EXTDTSK_SC Typ=sw */
#ifndef MO_EXTDTSK_SC
  #define MO_EXTDTSK_SC 0L
#elif (MO_EXTDTSK_SC != 0L)
  #error >>>> 'MO_EXTDTSK_SC' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: MoCCom_bPFCNew */
#define IMPORTED
#ifndef _D_FILE_ 

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


/* Local Variable: MoCPFC_Counter */
#ifdef _DAT_H
#ifndef __MOCPFC_COUNTER_EXT__
#define __MOCPFC_COUNTER_EXT__
/* N_DclFm: MoCPFC_Counter */
extern uint8 MoCPFC_Counter
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


/* Local Variable: MoCPFC_Checkword */
#ifdef _DAT_H
#ifndef __MOCPFC_CHECKWORD_EXT__
#define __MOCPFC_CHECKWORD_EXT__
/* N_DclFm: MoCPFC_Checkword */
extern uint32 MoCPFC_Checkword
;
#endif
#endif


/* Exported Variable: MoCPFC_Checksum */
#ifdef _DAT_H
#ifndef __MOCPFC_CHECKSUM_EXT__
#define __MOCPFC_CHECKSUM_EXT__
/* N_DclFm: MoCPFC_Checksum */
extern uint32 MoCPFC_Checksum
;
#endif
#endif


/* Exported Variable: MoCPFC_PartResp */
#ifdef _DAT_H
#ifndef __MOCPFC_PARTRESP_EXT__
#define __MOCPFC_PARTRESP_EXT__
/* N_DclFm: MoCPFC_PartResp */
extern uint32 MoCPFC_PartResp
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoRamCplLong            */
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

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */


#undef _DAT_H
#endif /* _MOCPFC_CO_DAT_H */
