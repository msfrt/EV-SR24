#ifndef _EEPHAL_DAT_H
#define _EEPHAL_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EEPRdErr_Datalost_CW */
#ifndef _EEPRdErr_Datalost_CW_DEF
#define _EEPRdErr_Datalost_CW_DEF
#define EEPRdErr_Datalost_CWM EEPRdErr_Datalost_CW
#endif /* _EEPRdErr_Datalost_CW_DEF */

/* Defined Parameter EEPRdErr_Redundant_CW */
#ifndef _EEPRdErr_Redundant_CW_DEF
#define _EEPRdErr_Redundant_CW_DEF
#define EEPRdErr_Redundant_CWM EEPRdErr_Redundant_CW
#endif /* _EEPRdErr_Redundant_CW_DEF */

/* Defined Parameter Eep_ClrWrCounter_CW */
#ifndef _Eep_ClrWrCounter_CW_DEF
#define _Eep_ClrWrCounter_CW_DEF
#define Eep_ClrWrCounter_CWM Eep_ClrWrCounter_CW
#endif /* _Eep_ClrWrCounter_CW_DEF */

/* Defined Parameter Eep_DFCRdErrCnt_CW */
#ifndef _Eep_DFCRdErrCnt_CW_DEF
#define _Eep_DFCRdErrCnt_CW_DEF
#define Eep_DFCRdErrCnt_CWM Eep_DFCRdErrCnt_CW
#endif /* _Eep_DFCRdErrCnt_CW_DEF */

/* Defined Parameter Eep_EnDeactivateBlocks_CW */
#ifndef _Eep_EnDeactivateBlocks_CW_DEF
#define _Eep_EnDeactivateBlocks_CW_DEF
#define Eep_EnDeactivateBlocks_CWM Eep_EnDeactivateBlocks_CW
#endif /* _Eep_EnDeactivateBlocks_CW_DEF */

/* Defined Parameter Eep_EnFirstFactoryMark_CW */
#ifndef _Eep_EnFirstFactoryMark_CW_DEF
#define _Eep_EnFirstFactoryMark_CW_DEF
#define Eep_EnFirstFactoryMark_CWM Eep_EnFirstFactoryMark_CW
#endif /* _Eep_EnFirstFactoryMark_CW_DEF */

/* Defined Parameter Eep_EnFirstInit_CW */
#ifndef _Eep_EnFirstInit_CW_DEF
#define _Eep_EnFirstInit_CW_DEF
#define Eep_EnFirstInit_CWM Eep_EnFirstInit_CW
#endif /* _Eep_EnFirstInit_CW_DEF */

/* Defined Parameter Eep_EnvRamClr_CW */
#ifndef _Eep_EnvRamClr_CW_DEF
#define _Eep_EnvRamClr_CW_DEF
#define Eep_EnvRamClr_CWM Eep_EnvRamClr_CW
#endif /* _Eep_EnvRamClr_CW_DEF */

/* Defined Parameter Eep_swtStopStrtStoreEn_C */
#ifndef _Eep_swtStopStrtStoreEn_C_DEF
#define _Eep_swtStopStrtStoreEn_C_DEF
#define Eep_swtStopStrtStoreEn_CM Eep_swtStopStrtStoreEn_C
#endif /* _Eep_swtStopStrtStoreEn_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant EEP_TYPE_SC */


/* EEP_TYPE_SC Typ=sw */
#ifndef EEP_TYPE_SC
  #define EEP_TYPE_SC 1L
#elif (EEP_TYPE_SC != 1L)
  #error >>>> 'EEP_TYPE_SC' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: Eep_ctAbsCallWrFkt */


/* Exported Variable: Eep_ctAbsWrFkt */


/* Exported Variable: Eep_ctCallWrFkt */


/* Exported Variable: Eep_ctCallWrFktT15Clear */


/* Exported Variable: Eep_ctMaxCallWrFkt */


/* Exported Variable: Eep_ctMaxCallWrFktT15Clear */


/* Exported Variable: Eep_ctMaxWrFkt */


/* Exported Variable: Eep_ctWrFkt */


/* Exported Variable: Eep_EnvRamHist */


/* Exported Variable: Eep_EnvRamInvld */


/* Exported Variable: Eep_EraseMaxTimems */


/* Exported Variable: Eep_EraseTimems */


/* Exported Variable: Eep_MaxQueueOccupied */


/* Exported Variable: Eep_numEnvRamLength */


/* Exported Variable: Eep_ReadMaxTimeus */


/* Exported Variable: Eep_ReadTimeus */


/* Exported Variable: Eep_SectorChangeMaxTimems */


/* Exported Variable: Eep_SectorChangeTimems */


/* Exported Variable: Eep_stBlk */


/* Exported Variable: Eep_stBlockFail */


/* Exported Variable: Eep_stMain */


/* Exported Variable: Eep_stPostDrv */


/* Exported Variable: Eep_WriteMaxTimems */


/* Exported Variable: Eep_WriteTimems */


/* Exported Variable: Eep_xIniTimeus */


/* Exported Variable: Fee_ByteCounter */


/* Exported Variable: Fee_LifeTimeMonitoring */


/* Imported Variable: SyC_stMn */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stMn is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stSub */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSub is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: SyC_stSubOld */
#define IMPORTED
#ifndef _D_FILE_ 
/* SyC_stSubOld is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of SyC_Main -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EEPHAL_DIR_T_DEF
#define DATA_EEPHAL_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EEPRdErr_Datalost_CW ----- */
    uint8 _EEPRdErr_Datalost_CW;
    /* ----- Parameter EEPRdErr_Redundant_CW ----- */
    uint8 _EEPRdErr_Redundant_CW;
    /* ----- Parameter Eep_ClrWrCounter_CW ----- */
    uint8 _Eep_ClrWrCounter_CW;
    /* ----- Parameter Eep_DFCRdErrCnt_CW ----- */
    uint8 _Eep_DFCRdErrCnt_CW;
    /* ----- Parameter Eep_EnDeactivateBlocks_CW ----- */
    uint8 _Eep_EnDeactivateBlocks_CW;
    /* ----- Parameter Eep_EnFirstFactoryMark_CW ----- */
    uint8 _Eep_EnFirstFactoryMark_CW;
    /* ----- Parameter Eep_EnFirstInit_CW ----- */
    uint8 _Eep_EnFirstInit_CW;
    /* ----- Parameter Eep_EnvRamClr_CW ----- */
    uint8 _Eep_EnvRamClr_CW;
    /* ----- Parameter Eep_swtStopStrtStoreEn_C ----- */
    uint8 _Eep_swtStopStrtStoreEn_C;
} DATA_EepHal_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EepHal_dir_t DATA_EepHal_dir
    __attribute__ ((asection (".pta_datadir_EepHal","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EepHal_dir_t * const VECT_EepHal_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EepHal","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EEPRdErr_Datalost_CW -- */
#ifndef EEPRdErr_Datalost_CW
#define EEPRdErr_Datalost_CW (VECT_EepHal_dir->_EEPRdErr_Datalost_CW)
#endif

#ifndef RP_EEPRdErr_Datalost_CW
#define RP_EEPRdErr_Datalost_CW (DATA_EepHal_dir._EEPRdErr_Datalost_CW)
#endif

#ifndef __EEPRdErr_Datalost_CW
#define __EEPRdErr_Datalost_CW (VECT_EepHal_dir->_EEPRdErr_Datalost_CW)
#endif

/* -- Macro for local Parameter EEPRdErr_Redundant_CW -- */
#ifndef EEPRdErr_Redundant_CW
#define EEPRdErr_Redundant_CW (VECT_EepHal_dir->_EEPRdErr_Redundant_CW)
#endif

#ifndef RP_EEPRdErr_Redundant_CW
#define RP_EEPRdErr_Redundant_CW (DATA_EepHal_dir._EEPRdErr_Redundant_CW)
#endif

#ifndef __EEPRdErr_Redundant_CW
#define __EEPRdErr_Redundant_CW (VECT_EepHal_dir->_EEPRdErr_Redundant_CW)
#endif

/* -- Macro for local Parameter Eep_ClrWrCounter_CW -- */
#ifndef Eep_ClrWrCounter_CW
#define Eep_ClrWrCounter_CW (VECT_EepHal_dir->_Eep_ClrWrCounter_CW)
#endif

#ifndef RP_Eep_ClrWrCounter_CW
#define RP_Eep_ClrWrCounter_CW (DATA_EepHal_dir._Eep_ClrWrCounter_CW)
#endif

#ifndef __Eep_ClrWrCounter_CW
#define __Eep_ClrWrCounter_CW (VECT_EepHal_dir->_Eep_ClrWrCounter_CW)
#endif

/* -- Macro for local Parameter Eep_DFCRdErrCnt_CW -- */
#ifndef Eep_DFCRdErrCnt_CW
#define Eep_DFCRdErrCnt_CW (VECT_EepHal_dir->_Eep_DFCRdErrCnt_CW)
#endif

#ifndef RP_Eep_DFCRdErrCnt_CW
#define RP_Eep_DFCRdErrCnt_CW (DATA_EepHal_dir._Eep_DFCRdErrCnt_CW)
#endif

#ifndef __Eep_DFCRdErrCnt_CW
#define __Eep_DFCRdErrCnt_CW (VECT_EepHal_dir->_Eep_DFCRdErrCnt_CW)
#endif

/* -- Macro for local Parameter Eep_EnDeactivateBlocks_CW -- */
#ifndef Eep_EnDeactivateBlocks_CW
#define Eep_EnDeactivateBlocks_CW (VECT_EepHal_dir->_Eep_EnDeactivateBlocks_CW)
#endif

#ifndef RP_Eep_EnDeactivateBlocks_CW
#define RP_Eep_EnDeactivateBlocks_CW (DATA_EepHal_dir._Eep_EnDeactivateBlocks_CW)
#endif

#ifndef __Eep_EnDeactivateBlocks_CW
#define __Eep_EnDeactivateBlocks_CW (VECT_EepHal_dir->_Eep_EnDeactivateBlocks_CW)
#endif

/* -- Macro for local Parameter Eep_EnFirstFactoryMark_CW -- */
#ifndef Eep_EnFirstFactoryMark_CW
#define Eep_EnFirstFactoryMark_CW (VECT_EepHal_dir->_Eep_EnFirstFactoryMark_CW)
#endif

#ifndef RP_Eep_EnFirstFactoryMark_CW
#define RP_Eep_EnFirstFactoryMark_CW (DATA_EepHal_dir._Eep_EnFirstFactoryMark_CW)
#endif

#ifndef __Eep_EnFirstFactoryMark_CW
#define __Eep_EnFirstFactoryMark_CW (VECT_EepHal_dir->_Eep_EnFirstFactoryMark_CW)
#endif

/* -- Macro for local Parameter Eep_EnFirstInit_CW -- */
#ifndef Eep_EnFirstInit_CW
#define Eep_EnFirstInit_CW (VECT_EepHal_dir->_Eep_EnFirstInit_CW)
#endif

#ifndef RP_Eep_EnFirstInit_CW
#define RP_Eep_EnFirstInit_CW (DATA_EepHal_dir._Eep_EnFirstInit_CW)
#endif

#ifndef __Eep_EnFirstInit_CW
#define __Eep_EnFirstInit_CW (VECT_EepHal_dir->_Eep_EnFirstInit_CW)
#endif

/* -- Macro for local Parameter Eep_EnvRamClr_CW -- */
#ifndef Eep_EnvRamClr_CW
#define Eep_EnvRamClr_CW (VECT_EepHal_dir->_Eep_EnvRamClr_CW)
#endif

#ifndef RP_Eep_EnvRamClr_CW
#define RP_Eep_EnvRamClr_CW (DATA_EepHal_dir._Eep_EnvRamClr_CW)
#endif

#ifndef __Eep_EnvRamClr_CW
#define __Eep_EnvRamClr_CW (VECT_EepHal_dir->_Eep_EnvRamClr_CW)
#endif

/* -- Macro for local Parameter Eep_swtStopStrtStoreEn_C -- */
#ifndef Eep_swtStopStrtStoreEn_C
#define Eep_swtStopStrtStoreEn_C (VECT_EepHal_dir->_Eep_swtStopStrtStoreEn_C)
#endif

#ifndef RP_Eep_swtStopStrtStoreEn_C
#define RP_Eep_swtStopStrtStoreEn_C (DATA_EepHal_dir._Eep_swtStopStrtStoreEn_C)
#endif

#ifndef __Eep_swtStopStrtStoreEn_C
#define __Eep_swtStopStrtStoreEn_C (VECT_EepHal_dir->_Eep_swtStopStrtStoreEn_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EEPHAL_DAT_H */
