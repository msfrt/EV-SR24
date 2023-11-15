#ifndef _OCWDA_CO_DAT_H
#define _OCWDA_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter OCWDA_ctDebOvrVltgOn_C */
#ifndef _OCWDA_ctDebOvrVltgOn_C_DEF
#define _OCWDA_ctDebOvrVltgOn_C_DEF
#endif /* _OCWDA_ctDebOvrVltgOn_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: OCWDA_bMonitor */


/* Local Variable: OCWDA_bOvrVltg */


/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema IramI32 +++++ */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 


/* Exported Variable: wdapat_l */
#ifdef _DAT_H
#ifndef __WDAPAT_L_EXT__
#define __WDAPAT_L_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint32 wdapat_l;
#else /* local or exported variable - write access */
extern uint32 wdapat_l;
#endif /* IMPORTED */
#endif /* __WDAPAT_L_EXT__ */
#endif /* _DAT_H */

/* Footer */
#pragma section 

/* +++++ Addressschema IramI8 +++++ */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 


/* Imported Variable: ubsq */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __UBSQ_EXT__
#define __UBSQ_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const uint8 ubsq;
#else /* local or exported variable - write access */
extern uint8 ubsq;
#endif /* IMPORTED */
#endif /* __UBSQ_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema Mo_MpByte +++++ */

/* ########################### */
/* START MoMpByte              */
/* ########################### */
#pragma section .bss.mpram aw 


/* Local Variable: OCWDA_stPwrGetABE_mp */
#ifdef _DAT_H
#ifndef __OCWDA_STPWRGETABE_MP_EXT__
#define __OCWDA_STPWRGETABE_MP_EXT__
extern uint8 OCWDA_stPwrGetABE_mp;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoMpByte                */
/* ########################### */

/* +++++ Addressschema MsgRam +++++ */
/* MsgRamHeader */
#pragma section .sbss aws 


/* Local Variable: OCWDA_ctDebLowVltgOn */
/* OCWDA_ctDebLowVltgOn is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctDebOvrVltgOn */
/* OCWDA_ctDebOvrVltgOn is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctDebSOPNotActv */
/* OCWDA_ctDebSOPNotActv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctDebWDAActv */
/* OCWDA_ctDebWDAActv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctDebWDANotActv */
/* OCWDA_ctDebWDANotActv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctTstComErr */
/* OCWDA_ctTstComErr is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctTstOCWDA */
/* OCWDA_ctTstOCWDA is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctTstOvrVltg */
/* OCWDA_ctTstOvrVltg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctTstWDAActv */
/* OCWDA_ctTstWDAActv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_ctUbsq */
/* OCWDA_ctUbsq is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_st */
/* OCWDA_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: OCWDA_stCheckState */
/* OCWDA_stCheckState is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: MoCCom_stWDAActvMsg */
/* MoCCom_stWDAActvMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: OCWDA_bWDAActv */
/* OCWDA_bWDAActv is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: OCWDA_stWDAPtt */
/* OCWDA_stWDAPtt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: MoCSOP_stActMsg */
#define IMPORTED
#ifndef _D_FILE_ 
/* MoCSOP_stActMsg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: MoCSOP_stOvl */
#define IMPORTED
#ifndef _D_FILE_ 
/* MoCSOP_stOvl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema SingleBitI1 +++++ */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 


/* Exported Variable: B_wdaactiv */
#ifdef _DAT_H
#ifndef __B_WDAACTIV_EXT__
#define __B_WDAACTIV_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const _bit B_wdaactiv;
#define GET_B_wdaactiv (B_wdaactiv)
#else /* local or exported variable - write access */
extern _bit B_wdaactiv;
#define SET_B_wdaactiv (B_wdaactiv = TRUE)
#define CLR_B_wdaactiv (B_wdaactiv = FALSE)
#define GET_B_wdaactiv (B_wdaactiv)
#define PUT_B_wdaactiv(val) ((val) ? SET_B_wdaactiv : CLR_B_wdaactiv)
#endif /* IMPORTED */
#endif /* __B_WDAACTIV_EXT__ */
#endif /* _DAT_H */

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

/* -- No referenced PTA Structures of MoCSOP_Co -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

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


/* +++++ Addressschema DataFar +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_OCWDA_CO_DATAFAR_T_DEF
#define DATA_OCWDA_CO_DATAFAR_T_DEF
typedef struct
{
    /* ----- Parameter OCWDA_ctDebOvrVltgOn_C ----- */
    uint16 _OCWDA_ctDebOvrVltgOn_C;
} DATA_OCWDA_Co_DataFar_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_OCWDA_Co_DataFar_t DATA_OCWDA_Co_DataFar
    __attribute__ ((asection (".pta_dataDataFar_OCWDA_Co","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_OCWDA_Co_DataFar_t * const VECT_OCWDA_Co_DataFar
    __attribute__ ((asection (".sdata.pta_vectDataFar_OCWDA_Co","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema IramI32 +++++ */

/* +++++ Addressschema Mo_MpByte +++++ */

/* +++++ Addressschema MsgRam +++++ */

/* +++++ Addressschema SingleBitI1 +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema DataFar +++++ */

/* -- Macro for local Parameter OCWDA_ctDebOvrVltgOn_C -- */
#ifndef OCWDA_ctDebOvrVltgOn_C
#define OCWDA_ctDebOvrVltgOn_C (VECT_OCWDA_Co_DataFar->_OCWDA_ctDebOvrVltgOn_C)
#endif

#ifndef RP_OCWDA_ctDebOvrVltgOn_C
#define RP_OCWDA_ctDebOvrVltgOn_C (DATA_OCWDA_Co_DataFar._OCWDA_ctDebOvrVltgOn_C)
#endif

#ifndef __OCWDA_ctDebOvrVltgOn_C
#define __OCWDA_ctDebOvrVltgOn_C (VECT_OCWDA_Co_DataFar->_OCWDA_ctDebOvrVltgOn_C)
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema IramI32 +++++ */

/* +++++ Addressschema Mo_MpByte +++++ */

/* +++++ Addressschema MsgRam +++++ */

/* +++++ Addressschema SingleBitI1 +++++ */


#undef _DAT_H
#endif /* _OCWDA_CO_DAT_H */
