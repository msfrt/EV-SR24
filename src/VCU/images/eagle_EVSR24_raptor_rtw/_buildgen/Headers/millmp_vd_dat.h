#ifndef _MILLMP_VD_DAT_H
#define _MILLMP_VD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter MILLmp_stMILCfg_CW */
#ifndef _MILLmp_stMILCfg_CW_DEF
#define _MILLmp_stMILCfg_CW_DEF
#define MILLmp_stMILCfg_CWM MILLmp_stMILCfg_CW
#endif /* _MILLmp_stMILCfg_CW_DEF */

/* Defined Parameter MILLmp_tiAftStrt_C */
#ifndef _MILLmp_tiAftStrt_C_DEF
#define _MILLmp_tiAftStrt_C_DEF
#define MILLmp_tiAftStrt_CM MILLmp_tiAftStrt_C
#endif /* _MILLmp_tiAftStrt_C_DEF */

/* Defined Parameter MILLmp_tiRdnBln_C */
#ifndef _MILLmp_tiRdnBln_C_DEF
#define _MILLmp_tiRdnBln_C_DEF
#define MILLmp_tiRdnBln_CM MILLmp_tiRdnBln_C
#endif /* _MILLmp_tiRdnBln_C_DEF */

/* Defined Parameter MILLmp_tiVisTst_C */
#ifndef _MILLmp_tiVisTst_C_DEF
#define _MILLmp_tiVisTst_C_DEF
#define MILLmp_tiVisTst_CM MILLmp_tiVisTst_C
#endif /* _MILLmp_tiVisTst_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DSMBAS_VAR_SY */


/* DSMBAS_VAR_SY Typ=sw */
#ifndef DSMBAS_VAR_SY
  #define DSMBAS_VAR_SY 999L
#elif (DSMBAS_VAR_SY != 999L)
  #error >>>> 'DSMBAS_VAR_SY' multiple defined
#endif


/* Referenced System Constant DSM_TESTMODDIAGCODLAMP_SC */


/* DSM_TESTMODDIAGCODLAMP_SC Typ=ub */
#ifndef DSM_TESTMODDIAGCODLAMP_SC
  #define DSM_TESTMODDIAGCODLAMP_SC 0L
#elif (DSM_TESTMODDIAGCODLAMP_SC != 0L)
  #error >>>> 'DSM_TESTMODDIAGCODLAMP_SC' multiple defined
#endif


/* Referenced System Constant MILLMP_2HZBLINK_SC */


/* MILLMP_2HZBLINK_SC Typ=ub */
#ifndef MILLMP_2HZBLINK_SC
  #define MILLMP_2HZBLINK_SC 0L
#elif (MILLMP_2HZBLINK_SC != 0L)
  #error >>>> 'MILLMP_2HZBLINK_SC' multiple defined
#endif


/* Referenced System Constant MILLMP_ENGSTRTWITH2SECCDN_SC */


/* MILLMP_ENGSTRTWITH2SECCDN_SC Typ=ub */
#ifndef MILLMP_ENGSTRTWITH2SECCDN_SC
  #define MILLMP_ENGSTRTWITH2SECCDN_SC 1L
#elif (MILLMP_ENGSTRTWITH2SECCDN_SC != 1L)
  #error >>>> 'MILLMP_ENGSTRTWITH2SECCDN_SC' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema dir +++++ */


/* Local Variable: MILLmp_stMILWoTstr */


/* Local Variable: MILLmp_stSt */


/* Local Variable: MILLmp_tiRmnSt */


/* Exported Variable: MILLmp_stReqBln */


/* Exported Variable: MILLmp_stReqOn */



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

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_MILLMP_VD_DIR_T_DEF
#define DATA_MILLMP_VD_DIR_T_DEF
typedef struct
{
    /* ----- Parameter MILLmp_stMILCfg_CW ----- */
    uint8 _MILLmp_stMILCfg_CW;
    /* ----- Parameter MILLmp_tiAftStrt_C ----- */
    uint8 _MILLmp_tiAftStrt_C;
    /* ----- Parameter MILLmp_tiRdnBln_C ----- */
    uint8 _MILLmp_tiRdnBln_C;
    /* ----- Parameter MILLmp_tiVisTst_C ----- */
    uint8 _MILLmp_tiVisTst_C;
} DATA_MILLmp_VD_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_MILLmp_VD_dir_t DATA_MILLmp_VD_dir
    __attribute__ ((asection (".pta_datadir_MILLmp_VD","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_MILLmp_VD_dir_t * const VECT_MILLmp_VD_dir
    __attribute__ ((asection (".sdata.pta_vectdir_MILLmp_VD","f=as")));
#endif


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter MILLmp_stMILCfg_CW -- */
#ifndef MILLmp_stMILCfg_CW
#define MILLmp_stMILCfg_CW (VECT_MILLmp_VD_dir->_MILLmp_stMILCfg_CW)
#endif

#ifndef RP_MILLmp_stMILCfg_CW
#define RP_MILLmp_stMILCfg_CW (DATA_MILLmp_VD_dir._MILLmp_stMILCfg_CW)
#endif

#ifndef __MILLmp_stMILCfg_CW
#define __MILLmp_stMILCfg_CW (VECT_MILLmp_VD_dir->_MILLmp_stMILCfg_CW)
#endif

/* -- Macro for local Parameter MILLmp_tiAftStrt_C -- */
#ifndef MILLmp_tiAftStrt_C
#define MILLmp_tiAftStrt_C (VECT_MILLmp_VD_dir->_MILLmp_tiAftStrt_C)
#endif

#ifndef RP_MILLmp_tiAftStrt_C
#define RP_MILLmp_tiAftStrt_C (DATA_MILLmp_VD_dir._MILLmp_tiAftStrt_C)
#endif

#ifndef __MILLmp_tiAftStrt_C
#define __MILLmp_tiAftStrt_C (VECT_MILLmp_VD_dir->_MILLmp_tiAftStrt_C)
#endif

/* -- Macro for local Parameter MILLmp_tiRdnBln_C -- */
#ifndef MILLmp_tiRdnBln_C
#define MILLmp_tiRdnBln_C (VECT_MILLmp_VD_dir->_MILLmp_tiRdnBln_C)
#endif

#ifndef RP_MILLmp_tiRdnBln_C
#define RP_MILLmp_tiRdnBln_C (DATA_MILLmp_VD_dir._MILLmp_tiRdnBln_C)
#endif

#ifndef __MILLmp_tiRdnBln_C
#define __MILLmp_tiRdnBln_C (VECT_MILLmp_VD_dir->_MILLmp_tiRdnBln_C)
#endif

/* -- Macro for local Parameter MILLmp_tiVisTst_C -- */
#ifndef MILLmp_tiVisTst_C
#define MILLmp_tiVisTst_C (VECT_MILLmp_VD_dir->_MILLmp_tiVisTst_C)
#endif

#ifndef RP_MILLmp_tiVisTst_C
#define RP_MILLmp_tiVisTst_C (DATA_MILLmp_VD_dir._MILLmp_tiVisTst_C)
#endif

#ifndef __MILLmp_tiVisTst_C
#define __MILLmp_tiVisTst_C (VECT_MILLmp_VD_dir->_MILLmp_tiVisTst_C)
#endif


#undef _DAT_H
#endif /* _MILLMP_VD_DAT_H */
