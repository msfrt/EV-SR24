#ifndef _EPMCAS_MEAS_DAT_H
#define _EPMCAS_MEAS_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter EpmCaS_swtMeasCaS_C */
#ifndef _EpmCaS_swtMeasCaS_C_DEF
#define _EpmCaS_swtMeasCaS_C_DEF
#define EpmCaS_swtMeasCaS_CM EpmCaS_swtMeasCaS_C
#endif /* _EpmCaS_swtMeasCaS_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant CAS_I1_SY */


/* CAS_I1_SY Typ=sw */
#ifndef CAS_I1_SY
  #define CAS_I1_SY 1L
#elif (CAS_I1_SY != 1L)
  #error >>>> 'CAS_I1_SY' multiple defined
#endif


/* Referenced System Constant CAS_I2_SY */


/* CAS_I2_SY Typ=sw */
#ifndef CAS_I2_SY
  #define CAS_I2_SY 0L
#elif (CAS_I2_SY != 0L)
  #error >>>> 'CAS_I2_SY' multiple defined
#endif


/* Referenced System Constant CAS_O1_SY */


/* CAS_O1_SY Typ=sw */
#ifndef CAS_O1_SY
  #define CAS_O1_SY 0L
#elif (CAS_O1_SY != 0L)
  #error >>>> 'CAS_O1_SY' multiple defined
#endif


/* Referenced System Constant CAS_O2_SY */


/* CAS_O2_SY Typ=sw */
#ifndef CAS_O2_SY
  #define CAS_O2_SY 0L
#elif (CAS_O2_SY != 0L)
  #error >>>> 'CAS_O2_SY' multiple defined
#endif


/* Referenced System Constant EPMCAS_NUMSEG_SC */


/* EPMCAS_NUMSEG_SC Typ=ub */
#ifndef EPMCAS_NUMSEG_SC
  #define EPMCAS_NUMSEG_SC 10L
#elif (EPMCAS_NUMSEG_SC != 10L)
  #error >>>> 'EPMCAS_NUMSEG_SC' multiple defined
#endif


/* Referenced System Constant EPM_MEASURE_SY */


/* EPM_MEASURE_SY Typ=sw */
#ifndef EPM_MEASURE_SY
  #define EPM_MEASURE_SY 2L
#elif (EPM_MEASURE_SY != 2L)
  #error >>>> 'EPM_MEASURE_SY' multiple defined
#endif


/* Referenced System Constant NUMCASMAX */


/* NUMCASMAX Typ=sl */
#ifndef NUMCASMAX
  #define NUMCASMAX 1L
#elif (NUMCASMAX != 1L)
  #error >>>> 'NUMCASMAX' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: EpmCaS_ctMeasEdgeLstI1 */
#ifdef _DAT_H
#ifndef __EPMCAS_CTMEASEDGELSTI1_EXT__
#define __EPMCAS_CTMEASEDGELSTI1_EXT__
extern sint16 EpmCaS_ctMeasEdgeLstI1;
#endif
#endif


/* Local Variable: EpmCaS_numRawValueI1 */
#ifdef _DAT_H
#ifndef __EPMCAS_NUMRAWVALUEI1_EXT__
#define __EPMCAS_NUMRAWVALUEI1_EXT__
extern sint8 EpmCaS_numRawValueI1;
#endif
#endif


/* Local Variable: EpmCaS_phiRawValueI1_mp */
/* MpA_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPMCAS_PHIRAWVALUEI1_MP_EXT__
#define __EPMCAS_PHIRAWVALUEI1_MP_EXT__
extern sint16 EpmCaS_phiRawValueI1_mp[10]    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: EpmCaS_stMeasCllsn */
#ifdef _DAT_H
#ifndef __EPMCAS_STMEASCLLSN_EXT__
#define __EPMCAS_STMEASCLLSN_EXT__
extern bool EpmCaS_stMeasCllsn;
#endif
#endif


/* Local Variable: EpmCaS_stMeasUnLckd */
#ifdef _DAT_H
#ifndef __EPMCAS_STMEASUNLCKD_EXT__
#define __EPMCAS_STMEASUNLCKD_EXT__
extern bool EpmCaS_stMeasUnLckd;
#endif
#endif


/* Imported Variable: EpmCrS_stSigMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_stSigMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_stOpMode */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_stOpMode is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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

/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Ini -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_OpMode -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_EPMCAS_MEAS_DIR_T_DEF
#define DATA_EPMCAS_MEAS_DIR_T_DEF
typedef struct
{
    /* ----- Parameter EpmCaS_swtMeasCaS_C ----- */
    uint8 _EpmCaS_swtMeasCaS_C;
} DATA_EpmCaS_Meas_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_EpmCaS_Meas_dir_t DATA_EpmCaS_Meas_dir
    __attribute__ ((asection (".pta_datadir_EpmCaS_Meas","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_EpmCaS_Meas_dir_t * const VECT_EpmCaS_Meas_dir
    __attribute__ ((asection (".sdata.pta_vectdir_EpmCaS_Meas","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter EpmCaS_swtMeasCaS_C -- */
#ifndef EpmCaS_swtMeasCaS_C
#define EpmCaS_swtMeasCaS_C (VECT_EpmCaS_Meas_dir->_EpmCaS_swtMeasCaS_C)
#endif

#ifndef RP_EpmCaS_swtMeasCaS_C
#define RP_EpmCaS_swtMeasCaS_C (DATA_EpmCaS_Meas_dir._EpmCaS_swtMeasCaS_C)
#endif

#ifndef __EpmCaS_swtMeasCaS_C
#define __EpmCaS_swtMeasCaS_C (VECT_EpmCaS_Meas_dir->_EpmCaS_swtMeasCaS_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPMCAS_MEAS_DAT_H */
