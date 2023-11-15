#ifndef _SIGNALS_STD_DAT_H
#define _SIGNALS_STD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model Signals_CnvFormBinAppl_s defined by actual function Signals_Std */
#ifndef _Signals_CnvFormBinAppl_s_DEF
#define _Signals_CnvFormBinAppl_s_DEF
typedef struct
{
    uint8 StrtPos_C;
    uint8 Lngth_C;
} Signals_CnvFormBinAppl_s;

#endif /* _Signals_CnvFormBinAppl_s_DEF */

/* Parameter-Model Signals_CnvFormLinAppl_s defined by actual function Signals_Std */
#ifndef _Signals_CnvFormLinAppl_s_DEF
#define _Signals_CnvFormLinAppl_s_DEF
typedef struct
{
    sint32 Fac_C;
    uint8 Norm_C;
    sint16 Ofs_C;
} Signals_CnvFormLinAppl_s;

#endif /* _Signals_CnvFormLinAppl_s_DEF */



/* Defined Parameter Signals_Mode1Pid_CA */
#ifndef _Signals_Mode1Pid_CA_DEF
#define _Signals_Mode1Pid_CA_DEF
#define Signals_Mode1Pid_CAM Signals_Mode1Pid_CA
#endif /* _Signals_Mode1Pid_CA_DEF */

/* Defined Parameter Signals_Mode1SigNum_CA */
#ifndef _Signals_Mode1SigNum_CA_DEF
#define _Signals_Mode1SigNum_CA_DEF
#define Signals_Mode1SigNum_CAM Signals_Mode1SigNum_CA
#endif /* _Signals_Mode1SigNum_CA_DEF */

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


/* Referenced System Constant DIABAS_VAR_SY */


/* DIABAS_VAR_SY Typ=sw */
#ifndef DIABAS_VAR_SY
  #define DIABAS_VAR_SY 0L
#elif (DIABAS_VAR_SY != 0L)
  #error >>>> 'DIABAS_VAR_SY' multiple defined
#endif


/* Local System Constant Signals_Mode1PidSize_SY */


/* Signals_Mode1PidSize_SY Typ=uw */
#ifndef Signals_Mode1PidSize_SY
  #define Signals_Mode1PidSize_SY 5L
#elif (Signals_Mode1PidSize_SY != 5L)
  #error >>>> 'Signals_Mode1PidSize_SY' multiple defined
#endif


/* Local System Constant Signals_NumberPID_SY */


/* Signals_NumberPID_SY Typ=uw */
#ifndef Signals_NumberPID_SY
  #define Signals_NumberPID_SY 5L
#elif (Signals_NumberPID_SY != 5L)
  #error >>>> 'Signals_NumberPID_SY' multiple defined
#endif


/* Local System Constant Signals_NumberSigNumExt_SY */


/* Signals_NumberSigNumExt_SY Typ=uw */
#ifndef Signals_NumberSigNumExt_SY
  #define Signals_NumberSigNumExt_SY 3L
#elif (Signals_NumberSigNumExt_SY != 3L)
  #error >>>> 'Signals_NumberSigNumExt_SY' multiple defined
#endif


/* Local System Constant Signals_NumberSigNumIntStd_SY */


/* Signals_NumberSigNumIntStd_SY Typ=uw */
#ifndef Signals_NumberSigNumIntStd_SY
  #define Signals_NumberSigNumIntStd_SY 20L
#elif (Signals_NumberSigNumIntStd_SY != 20L)
  #error >>>> 'Signals_NumberSigNumIntStd_SY' multiple defined
#endif


/* Local System Constant Signals_NumberSigNumInt_SY */


/* Signals_NumberSigNumInt_SY Typ=uw */
#ifndef Signals_NumberSigNumInt_SY
  #define Signals_NumberSigNumInt_SY 20L
#elif (Signals_NumberSigNumInt_SY != 20L)
  #error >>>> 'Signals_NumberSigNumInt_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: Signals_Default */
/* Signals_Default is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Local Variable: Signals_FillSigMess_u8 */
/* Signals_FillSigMess_u8 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */



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


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_SIGNALS_STD_DIR_T_DEF
#define DATA_SIGNALS_STD_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Signals_Mode1Pid_CA ----- */
    uint8 _Signals_Mode1Pid_CA[5];
    /* ----- Parameter Signals_Mode1SigNum_CA ----- */
    uint16 _Signals_Mode1SigNum_CA[5];
} DATA_Signals_Std_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Signals_Std_dir_t DATA_Signals_Std_dir
    __attribute__ ((asection (".pta_datadir_Signals_Std","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Signals_Std_dir_t * const VECT_Signals_Std_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Signals_Std","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Signals_Mode1Pid_CA -- */
#ifndef Signals_Mode1Pid_CA
#define Signals_Mode1Pid_CA (VECT_Signals_Std_dir->_Signals_Mode1Pid_CA)
#endif

#ifndef RP_Signals_Mode1Pid_CA
#define RP_Signals_Mode1Pid_CA (DATA_Signals_Std_dir._Signals_Mode1Pid_CA)
#endif

#ifndef __Signals_Mode1Pid_CA
#define __Signals_Mode1Pid_CA (VECT_Signals_Std_dir->_Signals_Mode1Pid_CA)
#endif

/* -- Macro for local Parameter Signals_Mode1SigNum_CA -- */
#ifndef Signals_Mode1SigNum_CA
#define Signals_Mode1SigNum_CA (VECT_Signals_Std_dir->_Signals_Mode1SigNum_CA)
#endif

#ifndef RP_Signals_Mode1SigNum_CA
#define RP_Signals_Mode1SigNum_CA (DATA_Signals_Std_dir._Signals_Mode1SigNum_CA)
#endif

#ifndef __Signals_Mode1SigNum_CA
#define __Signals_Mode1SigNum_CA (VECT_Signals_Std_dir->_Signals_Mode1SigNum_CA)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _SIGNALS_STD_DAT_H */
