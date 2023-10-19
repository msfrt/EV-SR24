#ifndef _DSMDUR_DAT_H
#define _DSMDUR_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DSMDur_valEvntQntDist_C */
#ifndef _DSMDur_valEvntQntDist_C_DEF
#define _DSMDur_valEvntQntDist_C_DEF
#define DSMDur_valEvntQntDist_CM DSMDur_valEvntQntDist_C
#endif /* _DSMDur_valEvntQntDist_C_DEF */

/* Defined Parameter DSMDur_valEvntQntTi_C */
#ifndef _DSMDur_valEvntQntTi_C_DEF
#define _DSMDur_valEvntQntTi_C_DEF
#define DSMDur_valEvntQntTi_CM DSMDur_valEvntQntTi_C
#endif /* _DSMDur_valEvntQntTi_C_DEF */

/* Defined Parameter DSMDur_xEnaGlb_CA */
#ifndef _DSMDur_xEnaGlb_CA_DEF
#define _DSMDur_xEnaGlb_CA_DEF
#define DSMDur_xEnaGlb_CAM DSMDur_xEnaGlb_CA
#endif /* _DSMDur_xEnaGlb_CA_DEF */

/* Defined Parameter DSMDur_xRstGlb_CA */
#ifndef _DSMDur_xRstGlb_CA_DEF
#define _DSMDur_xRstGlb_CA_DEF
#define DSMDur_xRstGlb_CAM DSMDur_xRstGlb_CA
#endif /* _DSMDur_xRstGlb_CA_DEF */

/* Defined Parameter DSMDur_xSelEvntGlb_CA */
#ifndef _DSMDur_xSelEvntGlb_CA_DEF
#define _DSMDur_xSelEvntGlb_CA_DEF
#define DSMDur_xSelEvntGlb_CAM DSMDur_xSelEvntGlb_CA
#endif /* _DSMDur_xSelEvntGlb_CA_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DFES_VIS_BUF_SY */


/* DFES_VIS_BUF_SY Typ=sw */
#ifndef DFES_VIS_BUF_SY
  #define DFES_VIS_BUF_SY 0L
#elif (DFES_VIS_BUF_SY != 0L)
  #error >>>> 'DFES_VIS_BUF_SY' multiple defined
#endif


/* Referenced System Constant DSMDUR_MIL_GLB_SY */


/* DSMDUR_MIL_GLB_SY Typ=ub */
#ifndef DSMDUR_MIL_GLB_SY
  #define DSMDUR_MIL_GLB_SY 0L
#elif (DSMDUR_MIL_GLB_SY != 0L)
  #error >>>> 'DSMDUR_MIL_GLB_SY' multiple defined
#endif


/* Referenced System Constant DSMDUR_SUPPID4D_SC */


/* DSMDUR_SUPPID4D_SC Typ=ub */
#ifndef DSMDUR_SUPPID4D_SC
  #define DSMDUR_SUPPID4D_SC 0L
#elif (DSMDUR_SUPPID4D_SC != 0L)
  #error >>>> 'DSMDUR_SUPPID4D_SC' multiple defined
#endif


/* Referenced System Constant DSMDUR_SUPPID4E_SC */


/* DSMDUR_SUPPID4E_SC Typ=ub */
#ifndef DSMDUR_SUPPID4E_SC
  #define DSMDUR_SUPPID4E_SC 0L
#elif (DSMDUR_SUPPID4E_SC != 0L)
  #error >>>> 'DSMDUR_SUPPID4E_SC' multiple defined
#endif


/* Local System Constant DSMDUR_GLB_CNT_ENBL */


/* DSMDUR_GLB_CNT_ENBL Typ=sl */
#ifndef DSMDUR_GLB_CNT_ENBL
  #define DSMDUR_GLB_CNT_ENBL 1L
#elif (DSMDUR_GLB_CNT_ENBL != 1L)
  #error >>>> 'DSMDUR_GLB_CNT_ENBL' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema dir +++++ */


/* Local Variable: DSMDur_ctPID21h */


/* Local Variable: DSMDur_ctPID31h */


/* Local Variable: DSMDur_lRef */


/* Local Variable: DSMDur_lRef10m */


/* Local Variable: DSMDur_stPID21h */


/* Local Variable: DSMDur_stWUCLst */


/* Local Variable: DSMDur_tiRef */


/* +++++ Addressschema intRam +++++ */


/* Exported Variable: DSMDur_ctGlb */


/* Exported Variable: DSMDur_stGlb */



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


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DSMDUR_ADS_PTA_01_T_DEF
#define DATA_DSMDUR_ADS_PTA_01_T_DEF
typedef struct
{
    /* ----- Parameter DSMDur_valEvntQntDist_C ----- */
    uint16 _DSMDur_valEvntQntDist_C;
    /* ----- Parameter DSMDur_valEvntQntTi_C ----- */
    uint16 _DSMDur_valEvntQntTi_C;
    /* ----- Parameter DSMDur_xEnaGlb_CA ----- */
    uint16 _DSMDur_xEnaGlb_CA[1];
    /* ----- Parameter DSMDur_xRstGlb_CA ----- */
    uint8 _DSMDur_xRstGlb_CA[1];
    /* ----- Parameter DSMDur_xSelEvntGlb_CA ----- */
    uint8 _DSMDur_xSelEvntGlb_CA[1];
} DATA_DSMDur_ADS_PTA_01_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DSMDur_ADS_PTA_01_t DATA_DSMDur_ADS_PTA_01
    __attribute__ ((asection (".pta_dataADS_PTA_01_DSMDur","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DSMDur_ADS_PTA_01_t * const VECT_DSMDur_ADS_PTA_01
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_01_DSMDur","f=as")));
#endif

/* +++++ Addressschema dir +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Macro for local Parameter DSMDur_valEvntQntDist_C -- */
#ifndef DSMDur_valEvntQntDist_C
#define DSMDur_valEvntQntDist_C (VECT_DSMDur_ADS_PTA_01->_DSMDur_valEvntQntDist_C)
#endif

#ifndef RP_DSMDur_valEvntQntDist_C
#define RP_DSMDur_valEvntQntDist_C (DATA_DSMDur_ADS_PTA_01._DSMDur_valEvntQntDist_C)
#endif

#ifndef __DSMDur_valEvntQntDist_C
#define __DSMDur_valEvntQntDist_C (VECT_DSMDur_ADS_PTA_01->_DSMDur_valEvntQntDist_C)
#endif

/* -- Macro for local Parameter DSMDur_valEvntQntTi_C -- */
#ifndef DSMDur_valEvntQntTi_C
#define DSMDur_valEvntQntTi_C (VECT_DSMDur_ADS_PTA_01->_DSMDur_valEvntQntTi_C)
#endif

#ifndef RP_DSMDur_valEvntQntTi_C
#define RP_DSMDur_valEvntQntTi_C (DATA_DSMDur_ADS_PTA_01._DSMDur_valEvntQntTi_C)
#endif

#ifndef __DSMDur_valEvntQntTi_C
#define __DSMDur_valEvntQntTi_C (VECT_DSMDur_ADS_PTA_01->_DSMDur_valEvntQntTi_C)
#endif

/* -- Macro for local Parameter DSMDur_xEnaGlb_CA -- */
#ifndef DSMDur_xEnaGlb_CA
#define DSMDur_xEnaGlb_CA (VECT_DSMDur_ADS_PTA_01->_DSMDur_xEnaGlb_CA)
#endif

#ifndef RP_DSMDur_xEnaGlb_CA
#define RP_DSMDur_xEnaGlb_CA (DATA_DSMDur_ADS_PTA_01._DSMDur_xEnaGlb_CA)
#endif

#ifndef __DSMDur_xEnaGlb_CA
#define __DSMDur_xEnaGlb_CA (VECT_DSMDur_ADS_PTA_01->_DSMDur_xEnaGlb_CA)
#endif

/* -- Macro for local Parameter DSMDur_xRstGlb_CA -- */
#ifndef DSMDur_xRstGlb_CA
#define DSMDur_xRstGlb_CA (VECT_DSMDur_ADS_PTA_01->_DSMDur_xRstGlb_CA)
#endif

#ifndef RP_DSMDur_xRstGlb_CA
#define RP_DSMDur_xRstGlb_CA (DATA_DSMDur_ADS_PTA_01._DSMDur_xRstGlb_CA)
#endif

#ifndef __DSMDur_xRstGlb_CA
#define __DSMDur_xRstGlb_CA (VECT_DSMDur_ADS_PTA_01->_DSMDur_xRstGlb_CA)
#endif

/* -- Macro for local Parameter DSMDur_xSelEvntGlb_CA -- */
#ifndef DSMDur_xSelEvntGlb_CA
#define DSMDur_xSelEvntGlb_CA (VECT_DSMDur_ADS_PTA_01->_DSMDur_xSelEvntGlb_CA)
#endif

#ifndef RP_DSMDur_xSelEvntGlb_CA
#define RP_DSMDur_xSelEvntGlb_CA (DATA_DSMDur_ADS_PTA_01._DSMDur_xSelEvntGlb_CA)
#endif

#ifndef __DSMDur_xSelEvntGlb_CA
#define __DSMDur_xSelEvntGlb_CA (VECT_DSMDur_ADS_PTA_01->_DSMDur_xSelEvntGlb_CA)
#endif

/* +++++ Addressschema dir +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DSMDUR_DAT_H */
