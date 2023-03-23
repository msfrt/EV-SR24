#ifndef _T15_VD_DAT_H
#define _T15_VD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter T15_tiDebHiLo_C */
#ifndef _T15_tiDebHiLo_C_DEF
#define _T15_tiDebHiLo_C_DEF
#define T15_tiDebHiLo_CM T15_tiDebHiLo_C
#endif /* _T15_tiDebHiLo_C_DEF */

/* Defined Parameter T15_tiDebLoHi_C */
#ifndef _T15_tiDebLoHi_C_DEF
#define _T15_tiDebLoHi_C_DEF
#define T15_tiDebLoHi_CM T15_tiDebLoHi_C
#endif /* _T15_tiDebLoHi_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */


/* ++++++++++++++++++++ Class Srv_DebounceParam_t ++++++++++++++++++++++ */
 
/* -- Implementation S16 -- */
/* -- OML-N-Class -- */
#ifndef _SRV_DEBOUNCEPARAM_T_S16_
#define _SRV_DEBOUNCEPARAM_T_S16_

/* -- Wrapper of Class Srv_DebounceParam_t in Addressschema Xram -- */
typedef struct
{
   /* Variable tiHiLo_C */
   sint16 tiHiLo_C;

   /* Variable tiLoHi_C */
   sint16 tiLoHi_C;

} SRV_DEBOUNCEPARAM_T_S16;

#endif /* _SRV_DEBOUNCEPARAM_T_S16_ */


/* ++++++++++++++++++++ Class Srv_Debounce ++++++++++++++++++++++ */
 
/* -- Implementation BOOL -- */
/* -- OML-N-Class -- */
#ifndef _SRV_DEBOUNCE_BOOL_
#define _SRV_DEBOUNCE_BOOL_

/* -- Wrapper of Class Srv_Debounce in Addressschema Xram -- */
typedef struct
{
   /* Variable Timer */
   sint32 Timer;

   /* Variable XOld */
   uint8 XOld;

} SRV_DEBOUNCE_BOOL;

#endif /* _SRV_DEBOUNCE_BOOL_ */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant T15_ATS_SY */


/* T15_ATS_SY Typ=ub */
#ifndef T15_ATS_SY
  #define T15_ATS_SY 0L
#elif (T15_ATS_SY != 0L)
  #error >>>> 'T15_ATS_SY' multiple defined
#endif


/* Referenced System Constant T15_DBGMD_VD_SY */


/* T15_DBGMD_VD_SY Typ=ub */
#ifndef T15_DBGMD_VD_SY
  #define T15_DBGMD_VD_SY 0L
#elif (T15_DBGMD_VD_SY != 0L)
  #error >>>> 'T15_DBGMD_VD_SY' multiple defined
#endif


/* Referenced System Constant T15_ON_VLDT_COM_SY */


/* T15_ON_VLDT_COM_SY Typ=ub */
#ifndef T15_ON_VLDT_COM_SY
  #define T15_ON_VLDT_COM_SY 0L
#elif (T15_ON_VLDT_COM_SY != 0L)
  #error >>>> 'T15_ON_VLDT_COM_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema ADS_Bit +++++ */


/* Exported Variable: T15_flgOn */
/* T15_flgOn is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* +++++ Addressschema intRam +++++ */


/* Exported Variable: T15_st */
/* T15_st is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: ESC_tiSampling */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: T15_stRaw */
#define IMPORTED
#ifndef _D_FILE_ 
/* T15_stRaw is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED


#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */


/* ++++++++++++++++++++ Class Srv_DebounceParam_t ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class Srv_Debounce ++++++++++++++++++++++ */
/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* --------------- */
/* Local OML-Class Srv_DebounceParam_t, Instance T15_DebPrm_st */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance T15_DebPrm_st, Addressschema intRam */
#ifndef _T15_DebPrm_st_DEF
#define _T15_DebPrm_st_DEF


static SRV_DEBOUNCEPARAM_T_S16 T15_DebPrm_st;

#endif /* _T15_DebPrm_st_DEF */

#endif /* _D_FILE_ */
/* --------------- */
/* Local OML-Class Srv_Debounce, Instance T15_DebSt_st */
/* --------------- */
/* This DS static class instance is invisible for GS D-Files */
#ifndef _D_FILE_



/* Instance T15_DebSt_st, Addressschema intRam */
#ifndef _T15_DebSt_st_DEF
#define _T15_DebSt_st_DEF


static SRV_DEBOUNCE_BOOL T15_DebSt_st;

#endif /* _T15_DebSt_st_DEF */

#endif /* _D_FILE_ */
/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of ESC_Stack -- */
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of T15_DD -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema ADS_Bit +++++ */

/* +++++ Addressschema DSERAP +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_T15_VD_DSERAP_T_DEF
#define DATA_T15_VD_DSERAP_T_DEF
typedef struct
{
    /* ----- Parameter T15_tiDebHiLo_C ----- */
    sint16 _T15_tiDebHiLo_C;
    /* ----- Parameter T15_tiDebLoHi_C ----- */
    sint16 _T15_tiDebLoHi_C;
} DATA_T15_VD_DSERAP_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_T15_VD_DSERAP_t DATA_T15_VD_DSERAP
    __attribute__ ((asection (".pta_dataDSERAP_T15_VD","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_T15_VD_DSERAP_t * const VECT_T15_VD_DSERAP
    __attribute__ ((asection (".sdata.pta_vectDSERAP_T15_VD","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema ADS_Bit +++++ */

/* +++++ Addressschema DSERAP +++++ */

/* -- Macro for local Parameter T15_tiDebHiLo_C -- */
#ifndef T15_tiDebHiLo_C
#define T15_tiDebHiLo_C (VECT_T15_VD_DSERAP->_T15_tiDebHiLo_C)
#endif

#ifndef RP_T15_tiDebHiLo_C
#define RP_T15_tiDebHiLo_C (DATA_T15_VD_DSERAP._T15_tiDebHiLo_C)
#endif

#ifndef __T15_tiDebHiLo_C
#define __T15_tiDebHiLo_C (VECT_T15_VD_DSERAP->_T15_tiDebHiLo_C)
#endif

/* -- Macro for local Parameter T15_tiDebLoHi_C -- */
#ifndef T15_tiDebLoHi_C
#define T15_tiDebLoHi_C (VECT_T15_VD_DSERAP->_T15_tiDebLoHi_C)
#endif

#ifndef RP_T15_tiDebLoHi_C
#define RP_T15_tiDebLoHi_C (DATA_T15_VD_DSERAP._T15_tiDebLoHi_C)
#endif

#ifndef __T15_tiDebLoHi_C
#define __T15_tiDebLoHi_C (VECT_T15_VD_DSERAP->_T15_tiDebLoHi_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _T15_VD_DAT_H */
