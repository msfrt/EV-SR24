#ifndef _DSCHED_EVAL_DAT_H
#define _DSCHED_EVAL_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DSCHED_stMode_C */
#ifndef _DSCHED_stMode_C_DEF
#define _DSCHED_stMode_C_DEF
#define DSCHED_stMode_CM DSCHED_stMode_C
#endif /* _DSCHED_stMode_C_DEF */

/* Defined Parameter DSCHED_valDflOpMode_C */
#ifndef _DSCHED_valDflOpMode_C_DEF
#define _DSCHED_valDflOpMode_C_DEF
#define DSCHED_valDflOpMode_CM DSCHED_valDflOpMode_C
#endif /* _DSCHED_valDflOpMode_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CMBTYP_DS */


/* CMBTYP_DS Typ=ub */
#ifndef CMBTYP_DS
  #define CMBTYP_DS 0L
#elif (CMBTYP_DS != 0L)
  #error >>>> 'CMBTYP_DS' multiple defined
#endif


/* Referenced System Constant CMBTYP_SY */


/* CMBTYP_SY Typ=sw */
#ifndef CMBTYP_SY
  #define CMBTYP_SY 1L
#elif (CMBTYP_SY != 1L)
  #error >>>> 'CMBTYP_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_COEOMEXT_SC */


/* DSCHED_COEOMEXT_SC Typ=sw */
#ifndef DSCHED_COEOMEXT_SC
  #define DSCHED_COEOMEXT_SC 0L
#elif (DSCHED_COEOMEXT_SC != 0L)
  #error >>>> 'DSCHED_COEOMEXT_SC' multiple defined
#endif


/* Referenced System Constant DSCHED_COEOM_SY */


/* DSCHED_COEOM_SY Typ=ub */
#ifndef DSCHED_COEOM_SY
  #define DSCHED_COEOM_SY 0L
#elif (DSCHED_COEOM_SY != 0L)
  #error >>>> 'DSCHED_COEOM_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_FTI_SY */


/* DSCHED_FTI_SY Typ=ub */
#ifndef DSCHED_FTI_SY
  #define DSCHED_FTI_SY 1L
#elif (DSCHED_FTI_SY != 1L)
  #error >>>> 'DSCHED_FTI_SY' multiple defined
#endif


/* Referenced System Constant HESRV_HETYP_SY */


/* HESRV_HETYP_SY Typ=sw */
#ifndef HESRV_HETYP_SY
  #define HESRV_HETYP_SY 255L
#elif (HESRV_HETYP_SY != 255L)
  #error >>>> 'HESRV_HETYP_SY' multiple defined
#endif


/* Referenced System Constant HESRV_MASTERSLAVE */


/* HESRV_MASTERSLAVE Typ=sl */
#ifndef HESRV_MASTERSLAVE
  #define HESRV_MASTERSLAVE 1L
#elif (HESRV_MASTERSLAVE != 1L)
  #error >>>> 'HESRV_MASTERSLAVE' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: DSCHED_St */


/* Exported Variable: DSCHED_WhyExcl */



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
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DSCHED_EVAL_ADS_PTA_02_T_DEF
#define DATA_DSCHED_EVAL_ADS_PTA_02_T_DEF
typedef struct
{
    /* ----- Parameter DSCHED_stMode_C ----- */
    uint8 _DSCHED_stMode_C;
    /* ----- Parameter DSCHED_valDflOpMode_C ----- */
    uint16 _DSCHED_valDflOpMode_C;
} DATA_DSCHED_Eval_ADS_PTA_02_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DSCHED_Eval_ADS_PTA_02_t DATA_DSCHED_Eval_ADS_PTA_02
    __attribute__ ((asection (".pta_dataADS_PTA_02_DSCHED_Eval","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DSCHED_Eval_ADS_PTA_02_t * const VECT_DSCHED_Eval_ADS_PTA_02
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_02_DSCHED_Eval","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Macro for local Parameter DSCHED_stMode_C -- */
#ifndef DSCHED_stMode_C
#define DSCHED_stMode_C (VECT_DSCHED_Eval_ADS_PTA_02->_DSCHED_stMode_C)
#endif

#ifndef RP_DSCHED_stMode_C
#define RP_DSCHED_stMode_C (DATA_DSCHED_Eval_ADS_PTA_02._DSCHED_stMode_C)
#endif

#ifndef __DSCHED_stMode_C
#define __DSCHED_stMode_C (VECT_DSCHED_Eval_ADS_PTA_02->_DSCHED_stMode_C)
#endif

/* -- Macro for local Parameter DSCHED_valDflOpMode_C -- */
#ifndef DSCHED_valDflOpMode_C
#define DSCHED_valDflOpMode_C (VECT_DSCHED_Eval_ADS_PTA_02->_DSCHED_valDflOpMode_C)
#endif

#ifndef RP_DSCHED_valDflOpMode_C
#define RP_DSCHED_valDflOpMode_C (DATA_DSCHED_Eval_ADS_PTA_02._DSCHED_valDflOpMode_C)
#endif

#ifndef __DSCHED_valDflOpMode_C
#define __DSCHED_valDflOpMode_C (VECT_DSCHED_Eval_ADS_PTA_02->_DSCHED_valDflOpMode_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DSCHED_EVAL_DAT_H */
