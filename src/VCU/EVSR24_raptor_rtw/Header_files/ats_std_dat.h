#ifndef _ATS_STD_DAT_H
#define _ATS_STD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model ATS_CfgData_s defined by actual function ATS_Std */
#ifndef _ATS_CfgData_s_DEF
#define _ATS_CfgData_s_DEF
typedef struct
{
    uint8 LimitTypeMsk_C;
    uint8 CnvNorm_C;
    sint16 LowLim_C;
    sint16 UpLim_C;
    sint32 CnvFac_C;
    sint16 CnvOfs_C;
    sint16 DfltVal_C;
} ATS_CfgData_s;

#endif /* _ATS_CfgData_s_DEF */



/* Defined Parameter ATS_Standby_Disabled_C */
#ifndef _ATS_Standby_Disabled_C_DEF
#define _ATS_Standby_Disabled_C_DEF
#define ATS_Standby_Disabled_CM ATS_Standby_Disabled_C
#endif /* _ATS_Standby_Disabled_C_DEF */

/* Defined Parameter ATS_tiTstDemHeal_C */
#ifndef _ATS_tiTstDemHeal_C_DEF
#define _ATS_tiTstDemHeal_C_DEF
#define ATS_tiTstDemHeal_CM ATS_tiTstDemHeal_C
#endif /* _ATS_tiTstDemHeal_C_DEF */

/* Defined Parameter ATS_tiTstDemMax_C */
#ifndef _ATS_tiTstDemMax_C_DEF
#define _ATS_tiTstDemMax_C_DEF
#define ATS_tiTstDemMax_CM ATS_tiTstDemMax_C
#endif /* _ATS_tiTstDemMax_C_DEF */

/* Defined Parameter ATS_TmrBehaviour_C */
#ifndef _ATS_TmrBehaviour_C_DEF
#define _ATS_TmrBehaviour_C_DEF
#define ATS_TmrBehaviour_CM ATS_TmrBehaviour_C
#endif /* _ATS_TmrBehaviour_C_DEF */

/* Defined Parameter ATS_TstDemMaxEngN_C */
#ifndef _ATS_TstDemMaxEngN_C_DEF
#define _ATS_TstDemMaxEngN_C_DEF
#define ATS_TstDemMaxEngN_CM ATS_TstDemMaxEngN_C
#endif /* _ATS_TstDemMaxEngN_C_DEF */

/* Defined Parameter ATS_TstDemMaxVSSCDV_C */
#ifndef _ATS_TstDemMaxVSSCDV_C_DEF
#define _ATS_TstDemMaxVSSCDV_C_DEF
#define ATS_TstDemMaxVSSCDV_CM ATS_TstDemMaxVSSCDV_C
#endif /* _ATS_TstDemMaxVSSCDV_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant ATS_BRK_APP_SC */


/* ATS_BRK_APP_SC Typ=ub */
#ifndef ATS_BRK_APP_SC
  #define ATS_BRK_APP_SC 0L
#elif (ATS_BRK_APP_SC != 0L)
  #error >>>> 'ATS_BRK_APP_SC' multiple defined
#endif


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


/* Referenced System Constant DIABAS_VAR_SY */


/* DIABAS_VAR_SY Typ=sw */
#ifndef DIABAS_VAR_SY
  #define DIABAS_VAR_SY 0L
#elif (DIABAS_VAR_SY != 0L)
  #error >>>> 'DIABAS_VAR_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: ATS_IntvVal_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __ATS_INTVVAL_MP_EXT__
#define __ATS_INTVVAL_MP_EXT__
extern sint16 ATS_IntvVal_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: ATS_TstStatus_mp */
/* Mp_u8( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __ATS_TSTSTATUS_MP_EXT__
#define __ATS_TSTSTATUS_MP_EXT__
extern uint8 ATS_TstStatus_mp    __attribute__ ((asection (".bss.mpram.a1","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Exported Variable: ATS_ctCurRunTst */
/* ATS_ctCurRunTst is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ATS_stMon */
/* ATS_stMon is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ATS_stMonTimeLimit */
/* ATS_stMonTimeLimit is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: Epm_nEngLRes */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEngLRes is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: VehV_v */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __VEHV_V_EXT__
#define __VEHV_V_EXT__
#ifdef IMPORTED /* imported variable - Only read access */
extern const sint16 VehV_v;
#else /* local or exported variable - write access */
extern sint16 VehV_v;
#endif /* IMPORTED */
#endif /* __VEHV_V_EXT__ */
#endif /* _DAT_H */

#endif /* _D_FILE_ */
#undef IMPORTED


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
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_ATS_STD_DIR_T_DEF
#define DATA_ATS_STD_DIR_T_DEF
typedef struct
{
    /* ----- Parameter ATS_Standby_Disabled_C ----- */
    uint8 _ATS_Standby_Disabled_C;
    /* ----- Parameter ATS_tiTstDemHeal_C ----- */
    uint16 _ATS_tiTstDemHeal_C;
    /* ----- Parameter ATS_tiTstDemMax_C ----- */
    uint16 _ATS_tiTstDemMax_C;
    /* ----- Parameter ATS_TmrBehaviour_C ----- */
    uint8 _ATS_TmrBehaviour_C;
    /* ----- Parameter ATS_TstDemMaxEngN_C ----- */
    uint8 _ATS_TstDemMaxEngN_C;
    /* ----- Parameter ATS_TstDemMaxVSSCDV_C ----- */
    sint16 _ATS_TstDemMaxVSSCDV_C;
} DATA_ATS_Std_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_ATS_Std_dir_t DATA_ATS_Std_dir
    __attribute__ ((asection (".pta_datadir_ATS_Std","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_ATS_Std_dir_t * const VECT_ATS_Std_dir
    __attribute__ ((asection (".sdata.pta_vectdir_ATS_Std","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter ATS_Standby_Disabled_C -- */
#ifndef ATS_Standby_Disabled_C
#define ATS_Standby_Disabled_C (VECT_ATS_Std_dir->_ATS_Standby_Disabled_C)
#endif

#ifndef RP_ATS_Standby_Disabled_C
#define RP_ATS_Standby_Disabled_C (DATA_ATS_Std_dir._ATS_Standby_Disabled_C)
#endif

#ifndef __ATS_Standby_Disabled_C
#define __ATS_Standby_Disabled_C (VECT_ATS_Std_dir->_ATS_Standby_Disabled_C)
#endif

/* -- Macro for local Parameter ATS_tiTstDemHeal_C -- */
#ifndef ATS_tiTstDemHeal_C
#define ATS_tiTstDemHeal_C (VECT_ATS_Std_dir->_ATS_tiTstDemHeal_C)
#endif

#ifndef RP_ATS_tiTstDemHeal_C
#define RP_ATS_tiTstDemHeal_C (DATA_ATS_Std_dir._ATS_tiTstDemHeal_C)
#endif

#ifndef __ATS_tiTstDemHeal_C
#define __ATS_tiTstDemHeal_C (VECT_ATS_Std_dir->_ATS_tiTstDemHeal_C)
#endif

/* -- Macro for local Parameter ATS_tiTstDemMax_C -- */
#ifndef ATS_tiTstDemMax_C
#define ATS_tiTstDemMax_C (VECT_ATS_Std_dir->_ATS_tiTstDemMax_C)
#endif

#ifndef RP_ATS_tiTstDemMax_C
#define RP_ATS_tiTstDemMax_C (DATA_ATS_Std_dir._ATS_tiTstDemMax_C)
#endif

#ifndef __ATS_tiTstDemMax_C
#define __ATS_tiTstDemMax_C (VECT_ATS_Std_dir->_ATS_tiTstDemMax_C)
#endif

/* -- Macro for local Parameter ATS_TmrBehaviour_C -- */
#ifndef ATS_TmrBehaviour_C
#define ATS_TmrBehaviour_C (VECT_ATS_Std_dir->_ATS_TmrBehaviour_C)
#endif

#ifndef RP_ATS_TmrBehaviour_C
#define RP_ATS_TmrBehaviour_C (DATA_ATS_Std_dir._ATS_TmrBehaviour_C)
#endif

#ifndef __ATS_TmrBehaviour_C
#define __ATS_TmrBehaviour_C (VECT_ATS_Std_dir->_ATS_TmrBehaviour_C)
#endif

/* -- Macro for local Parameter ATS_TstDemMaxEngN_C -- */
#ifndef ATS_TstDemMaxEngN_C
#define ATS_TstDemMaxEngN_C (VECT_ATS_Std_dir->_ATS_TstDemMaxEngN_C)
#endif

#ifndef RP_ATS_TstDemMaxEngN_C
#define RP_ATS_TstDemMaxEngN_C (DATA_ATS_Std_dir._ATS_TstDemMaxEngN_C)
#endif

#ifndef __ATS_TstDemMaxEngN_C
#define __ATS_TstDemMaxEngN_C (VECT_ATS_Std_dir->_ATS_TstDemMaxEngN_C)
#endif

/* -- Macro for local Parameter ATS_TstDemMaxVSSCDV_C -- */
#ifndef ATS_TstDemMaxVSSCDV_C
#define ATS_TstDemMaxVSSCDV_C (VECT_ATS_Std_dir->_ATS_TstDemMaxVSSCDV_C)
#endif

#ifndef RP_ATS_TstDemMaxVSSCDV_C
#define RP_ATS_TstDemMaxVSSCDV_C (DATA_ATS_Std_dir._ATS_TstDemMaxVSSCDV_C)
#endif

#ifndef __ATS_TstDemMaxVSSCDV_C
#define __ATS_TstDemMaxVSSCDV_C (VECT_ATS_Std_dir->_ATS_TstDemMaxVSSCDV_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _ATS_STD_DAT_H */
