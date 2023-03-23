#ifndef _DSCHED_CAL_DAT_H
#define _DSCHED_CAL_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DSCHED_AsgnCheck */
#ifndef _DSCHED_AsgnCheck_DEF
#define _DSCHED_AsgnCheck_DEF
#ifndef DSCHED_ASGNCHECK_STR_DEF
#define DSCHED_ASGNCHECK_STR_DEF
typedef struct
{
    uint16 FId_InhibitAlways_C;
} DSCHED_AsgnCheck_str;
#endif
#endif /* _DSCHED_AsgnCheck_DEF */

/* Defined Parameter DSCHED_BsPrio */
#ifndef _DSCHED_BsPrio_DEF
#define _DSCHED_BsPrio_DEF
#ifndef DSCHED_BSPRIO_STR_DEF
#define DSCHED_BSPRIO_STR_DEF
typedef struct
{
    uint16 FId_InhibitAlways_C;
} DSCHED_BsPrio_str;
#endif
#endif /* _DSCHED_BsPrio_DEF */

/* Defined Parameter DSCHED_FacPhys */
#ifndef _DSCHED_FacPhys_DEF
#define _DSCHED_FacPhys_DEF
#ifndef DSCHED_FACPHYS_STR_DEF
#define DSCHED_FACPHYS_STR_DEF
typedef struct
{
    uint8 FId_InhibitAlways_C;
} DSCHED_FacPhys_str;
#endif
#endif /* _DSCHED_FacPhys_DEF */

/* Defined Parameter DSCHED_JmpActvPrio */
#ifndef _DSCHED_JmpActvPrio_DEF
#define _DSCHED_JmpActvPrio_DEF
#ifndef DSCHED_JMPACTVPRIO_STR_DEF
#define DSCHED_JMPACTVPRIO_STR_DEF
typedef struct
{
    uint16 FId_InhibitAlways_C;
} DSCHED_JmpActvPrio_str;
#endif
#endif /* _DSCHED_JmpActvPrio_DEF */

/* Defined Parameter DSCHED_LimPrio */
#ifndef _DSCHED_LimPrio_DEF
#define _DSCHED_LimPrio_DEF
#ifndef DSCHED_LIMPRIO_STR_DEF
#define DSCHED_LIMPRIO_STR_DEF
typedef struct
{
    uint16 FId_InhibitAlways_C;
} DSCHED_LimPrio_str;
#endif
#endif /* _DSCHED_LimPrio_DEF */

/* Defined Parameter DSCHED_valOfsPrioNoTst_C */
#ifndef _DSCHED_valOfsPrioNoTst_C_DEF
#define _DSCHED_valOfsPrioNoTst_C_DEF
#define DSCHED_valOfsPrioNoTst_CM DSCHED_valOfsPrioNoTst_C
#endif /* _DSCHED_valOfsPrioNoTst_C_DEF */

/* Defined Parameter DSCHED_valOfsPrioOpMode_C */
#ifndef _DSCHED_valOfsPrioOpMode_C_DEF
#define _DSCHED_valOfsPrioOpMode_C_DEF
#define DSCHED_valOfsPrioOpMode_CM DSCHED_valOfsPrioOpMode_C
#endif /* _DSCHED_valOfsPrioOpMode_C_DEF */

/* Defined Parameter DSCHED_valOfsPrioTst_C */
#ifndef _DSCHED_valOfsPrioTst_C_DEF
#define _DSCHED_valOfsPrioTst_C_DEF
#define DSCHED_valOfsPrioTst_CM DSCHED_valOfsPrioTst_C
#endif /* _DSCHED_valOfsPrioTst_C_DEF */

/* Defined Parameter DSCHED_xFctTstFId_CA */
#ifndef _DSCHED_xFctTstFId_CA_DEF
#define _DSCHED_xFctTstFId_CA_DEF
#define DSCHED_xFctTstFId_CAM DSCHED_xFctTstFId_CA
#endif /* _DSCHED_xFctTstFId_CA_DEF */

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


/* Referenced System Constant CMBTYP_GS */


/* CMBTYP_GS Typ=ub */
#ifndef CMBTYP_GS
  #define CMBTYP_GS 1L
#elif (CMBTYP_GS != 1L)
  #error >>>> 'CMBTYP_GS' multiple defined
#endif


/* Referenced System Constant CMBTYP_SY */


/* CMBTYP_SY Typ=sw */
#ifndef CMBTYP_SY
  #define CMBTYP_SY 1L
#elif (CMBTYP_SY != 1L)
  #error >>>> 'CMBTYP_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_COEOM_SY */


/* DSCHED_COEOM_SY Typ=ub */
#ifndef DSCHED_COEOM_SY
  #define DSCHED_COEOM_SY 0L
#elif (DSCHED_COEOM_SY != 0L)
  #error >>>> 'DSCHED_COEOM_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_FIDMAXPRIOLST_SY */


/* DSCHED_FIDMAXPRIOLST_SY Typ=ub */
#ifndef DSCHED_FIDMAXPRIOLST_SY
  #define DSCHED_FIDMAXPRIOLST_SY 0L
#elif (DSCHED_FIDMAXPRIOLST_SY != 0L)
  #error >>>> 'DSCHED_FIDMAXPRIOLST_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_FTI_SY */


/* DSCHED_FTI_SY Typ=ub */
#ifndef DSCHED_FTI_SY
  #define DSCHED_FTI_SY 1L
#elif (DSCHED_FTI_SY != 1L)
  #error >>>> 'DSCHED_FTI_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_PRIOACTVJMP_SY */


/* DSCHED_PRIOACTVJMP_SY Typ=ub */
#ifndef DSCHED_PRIOACTVJMP_SY
  #define DSCHED_PRIOACTVJMP_SY 1L
#elif (DSCHED_PRIOACTVJMP_SY != 1L)
  #error >>>> 'DSCHED_PRIOACTVJMP_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_PRIODFCSTLDF_SY */


/* DSCHED_PRIODFCSTLDF_SY Typ=sw */
#ifndef DSCHED_PRIODFCSTLDF_SY
  #define DSCHED_PRIODFCSTLDF_SY 1L
#elif (DSCHED_PRIODFCSTLDF_SY != 1L)
  #error >>>> 'DSCHED_PRIODFCSTLDF_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_PRIODFCSTTST_SY */


/* DSCHED_PRIODFCSTTST_SY Typ=sw */
#ifndef DSCHED_PRIODFCSTTST_SY
  #define DSCHED_PRIODFCSTTST_SY 1L
#elif (DSCHED_PRIODFCSTTST_SY != 1L)
  #error >>>> 'DSCHED_PRIODFCSTTST_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_PRIOPHYSURGENCY_SY */


/* DSCHED_PRIOPHYSURGENCY_SY Typ=ub */
#ifndef DSCHED_PRIOPHYSURGENCY_SY
  #define DSCHED_PRIOPHYSURGENCY_SY 1L
#elif (DSCHED_PRIOPHYSURGENCY_SY != 1L)
  #error >>>> 'DSCHED_PRIOPHYSURGENCY_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_PRIORMPCALC_SY */


/* DSCHED_PRIORMPCALC_SY Typ=ub */
#ifndef DSCHED_PRIORMPCALC_SY
  #define DSCHED_PRIORMPCALC_SY 0L
#elif (DSCHED_PRIORMPCALC_SY != 0L)
  #error >>>> 'DSCHED_PRIORMPCALC_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_RATECALC_SY */


/* DSCHED_RATECALC_SY Typ=ub */
#ifndef DSCHED_RATECALC_SY
  #define DSCHED_RATECALC_SY 0L
#elif (DSCHED_RATECALC_SY != 0L)
  #error >>>> 'DSCHED_RATECALC_SY' multiple defined
#endif


/* Referenced System Constant DSCHED_WTT_SY */


/* DSCHED_WTT_SY Typ=ub */
#ifndef DSCHED_WTT_SY
  #define DSCHED_WTT_SY 0L
#elif (DSCHED_WTT_SY != 0L)
  #error >>>> 'DSCHED_WTT_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: DSCHED_DynPrio */


/* Exported Variable: DSCHED_PhysPrio */



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
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DSCHED_CAL_ADS_PTA_02_T_DEF
#define DATA_DSCHED_CAL_ADS_PTA_02_T_DEF
typedef struct
{
    /* ----- Parameter DSCHED_AsgnCheck ----- */
    DSCHED_AsgnCheck_str _DSCHED_AsgnCheck;
    /* ----- Parameter DSCHED_BsPrio ----- */
    DSCHED_BsPrio_str _DSCHED_BsPrio;
    /* ----- Parameter DSCHED_FacPhys ----- */
    DSCHED_FacPhys_str _DSCHED_FacPhys;
    /* ----- Parameter DSCHED_JmpActvPrio ----- */
    DSCHED_JmpActvPrio_str _DSCHED_JmpActvPrio;
    /* ----- Parameter DSCHED_LimPrio ----- */
    DSCHED_LimPrio_str _DSCHED_LimPrio;
    /* ----- Parameter DSCHED_valOfsPrioNoTst_C ----- */
    uint16 _DSCHED_valOfsPrioNoTst_C;
    /* ----- Parameter DSCHED_valOfsPrioOpMode_C ----- */
    uint16 _DSCHED_valOfsPrioOpMode_C;
    /* ----- Parameter DSCHED_valOfsPrioTst_C ----- */
    uint16 _DSCHED_valOfsPrioTst_C;
    /* ----- Parameter DSCHED_xFctTstFId_CA ----- */
    uint8 _DSCHED_xFctTstFId_CA[20];
} DATA_DSCHED_Cal_ADS_PTA_02_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DSCHED_Cal_ADS_PTA_02_t DATA_DSCHED_Cal_ADS_PTA_02
    __attribute__ ((asection (".pta_dataADS_PTA_02_DSCHED_Cal","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DSCHED_Cal_ADS_PTA_02_t * const VECT_DSCHED_Cal_ADS_PTA_02
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_02_DSCHED_Cal","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Macro for local Parameter DSCHED_AsgnCheck -- */
#ifndef DSCHED_AsgnCheck
#define DSCHED_AsgnCheck (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_AsgnCheck)
#endif

#ifndef RP_DSCHED_AsgnCheck
#define RP_DSCHED_AsgnCheck (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_AsgnCheck)
#endif

#ifndef __DSCHED_AsgnCheck
#define __DSCHED_AsgnCheck (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_AsgnCheck)
#endif

/* -- Macro for local Parameter DSCHED_BsPrio -- */
#ifndef DSCHED_BsPrio
#define DSCHED_BsPrio (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_BsPrio)
#endif

#ifndef RP_DSCHED_BsPrio
#define RP_DSCHED_BsPrio (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_BsPrio)
#endif

#ifndef __DSCHED_BsPrio
#define __DSCHED_BsPrio (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_BsPrio)
#endif

/* -- Macro for local Parameter DSCHED_FacPhys -- */
#ifndef DSCHED_FacPhys
#define DSCHED_FacPhys (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_FacPhys)
#endif

#ifndef RP_DSCHED_FacPhys
#define RP_DSCHED_FacPhys (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_FacPhys)
#endif

#ifndef __DSCHED_FacPhys
#define __DSCHED_FacPhys (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_FacPhys)
#endif

/* -- Macro for local Parameter DSCHED_JmpActvPrio -- */
#ifndef DSCHED_JmpActvPrio
#define DSCHED_JmpActvPrio (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_JmpActvPrio)
#endif

#ifndef RP_DSCHED_JmpActvPrio
#define RP_DSCHED_JmpActvPrio (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_JmpActvPrio)
#endif

#ifndef __DSCHED_JmpActvPrio
#define __DSCHED_JmpActvPrio (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_JmpActvPrio)
#endif

/* -- Macro for local Parameter DSCHED_LimPrio -- */
#ifndef DSCHED_LimPrio
#define DSCHED_LimPrio (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_LimPrio)
#endif

#ifndef RP_DSCHED_LimPrio
#define RP_DSCHED_LimPrio (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_LimPrio)
#endif

#ifndef __DSCHED_LimPrio
#define __DSCHED_LimPrio (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_LimPrio)
#endif

/* -- Macro for local Parameter DSCHED_valOfsPrioNoTst_C -- */
#ifndef DSCHED_valOfsPrioNoTst_C
#define DSCHED_valOfsPrioNoTst_C (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_valOfsPrioNoTst_C)
#endif

#ifndef RP_DSCHED_valOfsPrioNoTst_C
#define RP_DSCHED_valOfsPrioNoTst_C (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_valOfsPrioNoTst_C)
#endif

#ifndef __DSCHED_valOfsPrioNoTst_C
#define __DSCHED_valOfsPrioNoTst_C (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_valOfsPrioNoTst_C)
#endif

/* -- Macro for local Parameter DSCHED_valOfsPrioOpMode_C -- */
#ifndef DSCHED_valOfsPrioOpMode_C
#define DSCHED_valOfsPrioOpMode_C (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_valOfsPrioOpMode_C)
#endif

#ifndef RP_DSCHED_valOfsPrioOpMode_C
#define RP_DSCHED_valOfsPrioOpMode_C (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_valOfsPrioOpMode_C)
#endif

#ifndef __DSCHED_valOfsPrioOpMode_C
#define __DSCHED_valOfsPrioOpMode_C (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_valOfsPrioOpMode_C)
#endif

/* -- Macro for local Parameter DSCHED_valOfsPrioTst_C -- */
#ifndef DSCHED_valOfsPrioTst_C
#define DSCHED_valOfsPrioTst_C (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_valOfsPrioTst_C)
#endif

#ifndef RP_DSCHED_valOfsPrioTst_C
#define RP_DSCHED_valOfsPrioTst_C (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_valOfsPrioTst_C)
#endif

#ifndef __DSCHED_valOfsPrioTst_C
#define __DSCHED_valOfsPrioTst_C (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_valOfsPrioTst_C)
#endif

/* -- Macro for local Parameter DSCHED_xFctTstFId_CA -- */
#ifndef DSCHED_xFctTstFId_CA
#define DSCHED_xFctTstFId_CA (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_xFctTstFId_CA)
#endif

#ifndef RP_DSCHED_xFctTstFId_CA
#define RP_DSCHED_xFctTstFId_CA (DATA_DSCHED_Cal_ADS_PTA_02._DSCHED_xFctTstFId_CA)
#endif

#ifndef __DSCHED_xFctTstFId_CA
#define __DSCHED_xFctTstFId_CA (VECT_DSCHED_Cal_ADS_PTA_02->_DSCHED_xFctTstFId_CA)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DSCHED_CAL_DAT_H */
