#ifndef _EPM_SPDGRD_DAT_H
#define _EPM_SPDGRD_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Epm_tiSpdGrdAvgFlt_C */
#ifndef _Epm_tiSpdGrdAvgFlt_C_DEF
#define _Epm_tiSpdGrdAvgFlt_C_DEF
#define Epm_tiSpdGrdAvgFlt_CM Epm_tiSpdGrdAvgFlt_C
#endif /* _Epm_tiSpdGrdAvgFlt_C_DEF */

/* Defined Parameter Epm_tiSpdGrdFlt_C */
#ifndef _Epm_tiSpdGrdFlt_C_DEF
#define _Epm_tiSpdGrdFlt_C_DEF
#define Epm_tiSpdGrdFlt_CM Epm_tiSpdGrdFlt_C
#endif /* _Epm_tiSpdGrdFlt_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant EPM_MEASURE_SY */


/* EPM_MEASURE_SY Typ=sw */
#ifndef EPM_MEASURE_SY
  #define EPM_MEASURE_SY 2L
#elif (EPM_MEASURE_SY != 2L)
  #error >>>> 'EPM_MEASURE_SY' multiple defined
#endif


/* Referenced System Constant EPM_TDCDSTCLB_SC */


/* EPM_TDCDSTCLB_SC Typ=sw */
#ifndef EPM_TDCDSTCLB_SC
  #define EPM_TDCDSTCLB_SC 0L
#elif (EPM_TDCDSTCLB_SC != 0L)
  #error >>>> 'EPM_TDCDSTCLB_SC' multiple defined
#endif


/* Referenced System Constant NUMCYLMAX_SY */


/* NUMCYLMAX_SY Typ=sw */
#ifndef NUMCYLMAX_SY
  #define NUMCYLMAX_SY 8L
#elif (NUMCYLMAX_SY != 8L)
  #error >>>> 'NUMCYLMAX_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema extRam +++++ */


/* Local Variable: Epm_nEngOldS0_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_NENGOLDS0_MP_EXT__
#define __EPM_NENGOLDS0_MP_EXT__
extern sint16 Epm_nEngOldS0_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Epm_nEngOldS1_mp */
/* Mp_s16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __EPM_NENGOLDS1_MP_EXT__
#define __EPM_NENGOLDS1_MP_EXT__
extern sint16 Epm_nEngOldS1_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* +++++ Addressschema intRam +++++ */


/* Exported Variable: Epm_dnEng */
/* Epm_dnEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_dnEngAvg */
/* Epm_dnEngAvg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_dnEngAvgFlt */
/* Epm_dnEngAvgFlt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_dnEngFlt */
/* Epm_dnEngFlt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_nEngDiff */
/* Epm_nEngDiff is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: Epm_nEngDiffAvg */
/* Epm_nEngDiffAvg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: EpmCrS_tiSeg */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_tiSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSeq_numInt */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSeq_numInt is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: EpmSeq_numIntTyp */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmSeq_numIntTyp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_ctCyl */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_ctCyl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_nEng */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_nEng is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_numCyl */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_numCyl is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: Epm_stSync */
#define IMPORTED
#ifndef _D_FILE_ 
/* Epm_stSync is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

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
 
/* -- No referenced PTA Structures of EpmSeq_StateMn -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Ini -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_OpMode -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of Epm_Spd -- */
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
#ifndef DATA_EPM_SPDGRD_DIR_T_DEF
#define DATA_EPM_SPDGRD_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Epm_tiSpdGrdAvgFlt_C ----- */
    sint32 _Epm_tiSpdGrdAvgFlt_C;
    /* ----- Parameter Epm_tiSpdGrdFlt_C ----- */
    sint32 _Epm_tiSpdGrdFlt_C;
} DATA_Epm_SpdGrd_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Epm_SpdGrd_dir_t DATA_Epm_SpdGrd_dir
    __attribute__ ((asection (".pta_datadir_Epm_SpdGrd","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Epm_SpdGrd_dir_t * const VECT_Epm_SpdGrd_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Epm_SpdGrd","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Epm_tiSpdGrdAvgFlt_C -- */
#ifndef Epm_tiSpdGrdAvgFlt_C
#define Epm_tiSpdGrdAvgFlt_C (VECT_Epm_SpdGrd_dir->_Epm_tiSpdGrdAvgFlt_C)
#endif

#ifndef RP_Epm_tiSpdGrdAvgFlt_C
#define RP_Epm_tiSpdGrdAvgFlt_C (DATA_Epm_SpdGrd_dir._Epm_tiSpdGrdAvgFlt_C)
#endif

#ifndef __Epm_tiSpdGrdAvgFlt_C
#define __Epm_tiSpdGrdAvgFlt_C (VECT_Epm_SpdGrd_dir->_Epm_tiSpdGrdAvgFlt_C)
#endif

/* -- Macro for local Parameter Epm_tiSpdGrdFlt_C -- */
#ifndef Epm_tiSpdGrdFlt_C
#define Epm_tiSpdGrdFlt_C (VECT_Epm_SpdGrd_dir->_Epm_tiSpdGrdFlt_C)
#endif

#ifndef RP_Epm_tiSpdGrdFlt_C
#define RP_Epm_tiSpdGrdFlt_C (DATA_Epm_SpdGrd_dir._Epm_tiSpdGrdFlt_C)
#endif

#ifndef __Epm_tiSpdGrdFlt_C
#define __Epm_tiSpdGrdFlt_C (VECT_Epm_SpdGrd_dir->_Epm_tiSpdGrdFlt_C)
#endif

/* +++++ Addressschema extRam +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _EPM_SPDGRD_DAT_H */
