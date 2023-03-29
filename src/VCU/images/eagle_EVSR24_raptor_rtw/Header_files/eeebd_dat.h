#ifndef _EEEBD_DAT_H
#define _EEEBD_DAT_H

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

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: Eeebd_numSectChg */


/* Exported Variable: Eeebd_stEee */



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

 					
/* -- Referenced PTA Structures of EepHal -- */
/* -- Typedeclarations of Referenced Functions -- */



/* Referenced Parameter EEPRdErr_Datalost_CW */


#ifndef _EEPRdErr_Datalost_CW_DEF
#define _EEPRdErr_Datalost_CW_DEF
#define EEPRdErr_Datalost_CWM EEPRdErr_Datalost_CW
#endif /* _EEPRDERR_DATALOST_CW_DEF */

/* Referenced Parameter EEPRdErr_Redundant_CW */


#ifndef _EEPRdErr_Redundant_CW_DEF
#define _EEPRdErr_Redundant_CW_DEF
#define EEPRdErr_Redundant_CWM EEPRdErr_Redundant_CW
#endif /* _EEPRDERR_REDUNDANT_CW_DEF */

/* Referenced Parameter Eep_ClrWrCounter_CW */


#ifndef _Eep_ClrWrCounter_CW_DEF
#define _Eep_ClrWrCounter_CW_DEF
#define Eep_ClrWrCounter_CWM Eep_ClrWrCounter_CW
#endif /* _EEP_CLRWRCOUNTER_CW_DEF */

/* Referenced Parameter Eep_DFCRdErrCnt_CW */


#ifndef _Eep_DFCRdErrCnt_CW_DEF
#define _Eep_DFCRdErrCnt_CW_DEF
#define Eep_DFCRdErrCnt_CWM Eep_DFCRdErrCnt_CW
#endif /* _EEP_DFCRDERRCNT_CW_DEF */

/* Referenced Parameter Eep_EnDeactivateBlocks_CW */


#ifndef _Eep_EnDeactivateBlocks_CW_DEF
#define _Eep_EnDeactivateBlocks_CW_DEF
#define Eep_EnDeactivateBlocks_CWM Eep_EnDeactivateBlocks_CW
#endif /* _EEP_ENDEACTIVATEBLOCKS_CW_DEF */

/* Referenced Parameter Eep_EnFirstFactoryMark_CW */


#ifndef _Eep_EnFirstFactoryMark_CW_DEF
#define _Eep_EnFirstFactoryMark_CW_DEF
#define Eep_EnFirstFactoryMark_CWM Eep_EnFirstFactoryMark_CW
#endif /* _EEP_ENFIRSTFACTORYMARK_CW_DEF */

/* Referenced Parameter Eep_EnFirstInit_CW */


#ifndef _Eep_EnFirstInit_CW_DEF
#define _Eep_EnFirstInit_CW_DEF
#define Eep_EnFirstInit_CWM Eep_EnFirstInit_CW
#endif /* _EEP_ENFIRSTINIT_CW_DEF */

/* Referenced Parameter Eep_EnvRamClr_CW */


#ifndef _Eep_EnvRamClr_CW_DEF
#define _Eep_EnvRamClr_CW_DEF
#define Eep_EnvRamClr_CWM Eep_EnvRamClr_CW
#endif /* _EEP_ENVRAMCLR_CW_DEF */

/* Referenced Parameter Eep_swtStopStrtStoreEn_C */


#ifndef _Eep_swtStopStrtStoreEn_C_DEF
#define _Eep_swtStopStrtStoreEn_C_DEF
#define Eep_swtStopStrtStoreEn_CM Eep_swtStopStrtStoreEn_C
#endif /* _EEP_SWTSTOPSTRTSTOREEN_C_DEF */
/* +++++ Addressschema dir +++++ */
			
/* Parameter Eep_EnDeactivateBlocks_CW in Addressschema dir is referenced from function EepHal */ 

		
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


/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for referenced Parameter Eep_EnDeactivateBlocks_CW -- */
#ifndef Eep_EnDeactivateBlocks_CW
#define Eep_EnDeactivateBlocks_CW\
    (VECT_EepHal_dir->_Eep_EnDeactivateBlocks_CW)
#endif

#ifndef RP_Eep_EnDeactivateBlocks_CW
#define RP_Eep_EnDeactivateBlocks_CW\
    (DATA_EepHal_dir._Eep_EnDeactivateBlocks_CW)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EEEBD_DAT_H */
