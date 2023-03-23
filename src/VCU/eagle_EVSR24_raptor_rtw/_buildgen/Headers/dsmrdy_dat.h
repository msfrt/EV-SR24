#ifndef _DSMRDY_DAT_H
#define _DSMRDY_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DSMRdy_X */
#ifndef _DSMRdy_X_DEF
#define _DSMRdy_X_DEF
#ifndef DSMRDY_X_STR_DEF
#define DSMRDY_X_STR_DEF
typedef struct
{
    uint32 PID1ForceLowMsk_C;
    uint32 PID1ForceHighMsk_C;
    uint32 PID41ForceLowMsk_C;
    uint32 PID41ForceHighMsk_C;
} DSMRdy_X_str;
#endif
#endif /* _DSMRdy_X_DEF */

/* Defined Parameter DSMRdy_Grp */
#ifndef _DSMRdy_Grp_DEF
#define _DSMRdy_Grp_DEF
#ifndef DSMRDY_GRP_STR_DEF
#define DSMRDY_GRP_STR_DEF
typedef struct
{
    uint16 Misf_CA[1];
    uint16 FlSys_CA[1];
    uint16 ComprCmpnt_CA[1];
    uint16 Cat_CA[15];
    uint16 HtCat_CA[15];
    uint16 EvpSys_CA[15];
    uint16 SecAirSys_CA[15];
    uint16 AC_CA[1];
    uint16 O2Sens_CA[20];
    uint16 O2SensHt_CA[15];
    uint16 EGR_CA[15];
} DSMRdy_Grp_str;
#endif
#endif /* _DSMRdy_Grp_DEF */

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


/* Referenced System Constant DFES_BLKENTRY_SY */


/* DFES_BLKENTRY_SY Typ=ub */
#ifndef DFES_BLKENTRY_SY
  #define DFES_BLKENTRY_SY 0L
#elif (DFES_BLKENTRY_SY != 0L)
  #error >>>> 'DFES_BLKENTRY_SY' multiple defined
#endif


/* Referenced System Constant DFES_VIS_BUF_SY */


/* DFES_VIS_BUF_SY Typ=sw */
#ifndef DFES_VIS_BUF_SY
  #define DFES_VIS_BUF_SY 0L
#elif (DFES_VIS_BUF_SY != 0L)
  #error >>>> 'DFES_VIS_BUF_SY' multiple defined
#endif


/* Referenced System Constant DSMRDY_ENA_FLSYSFORCELABEL_SC */


/* DSMRDY_ENA_FLSYSFORCELABEL_SC Typ=ub */
#ifndef DSMRDY_ENA_FLSYSFORCELABEL_SC
  #define DSMRDY_ENA_FLSYSFORCELABEL_SC 0L
#elif (DSMRDY_ENA_FLSYSFORCELABEL_SC != 0L)
  #error >>>> 'DSMRDY_ENA_FLSYSFORCELABEL_SC' multiple defined
#endif


/* Referenced System Constant DSMRDY_ENGSPEC_SY */


/* DSMRDY_ENGSPEC_SY Typ=ub */
#ifndef DSMRDY_ENGSPEC_SY
  #define DSMRDY_ENGSPEC_SY 0L
#elif (DSMRDY_ENGSPEC_SY != 0L)
  #error >>>> 'DSMRDY_ENGSPEC_SY' multiple defined
#endif


/* Referenced System Constant DSMRDY_INHP41_SY */


/* DSMRDY_INHP41_SY Typ=ub */
#ifndef DSMRDY_INHP41_SY
  #define DSMRDY_INHP41_SY 0L
#elif (DSMRDY_INHP41_SY != 0L)
  #error >>>> 'DSMRDY_INHP41_SY' multiple defined
#endif


/* Referenced System Constant DSMRDY_SUPPID41_SY */


/* DSMRDY_SUPPID41_SY Typ=ub */
#ifndef DSMRDY_SUPPID41_SY
  #define DSMRDY_SUPPID41_SY 0L
#elif (DSMRDY_SUPPID41_SY != 0L)
  #error >>>> 'DSMRDY_SUPPID41_SY' multiple defined
#endif


/* Referenced System Constant DSMRDY_VERS_SC */


/* DSMRDY_VERS_SC Typ=sw */
#ifndef DSMRDY_VERS_SC
  #define DSMRDY_VERS_SC 0L
#elif (DSMRDY_VERS_SC != 0L)
  #error >>>> 'DSMRDY_VERS_SC' multiple defined
#endif


/* Referenced System Constant DSM_DISBLGRPSIZE_SY */


/* DSM_DISBLGRPSIZE_SY Typ=uw */
#ifndef DSM_DISBLGRPSIZE_SY
  #define DSM_DISBLGRPSIZE_SY 0L
#elif (DSM_DISBLGRPSIZE_SY != 0L)
  #error >>>> 'DSM_DISBLGRPSIZE_SY' multiple defined
#endif


/* Referenced System Constant ECUTYP_SC */


/* ECUTYP_SC Typ=sw */
#ifndef ECUTYP_SC
  #define ECUTYP_SC 0L
#elif (ECUTYP_SC != 0L)
  #error >>>> 'ECUTYP_SC' multiple defined
#endif


/* Referenced System Constant SY_PTO */


/* SY_PTO Typ=ub */
#ifndef SY_PTO
  #define SY_PTO 0L
#elif (SY_PTO != 0L)
  #error >>>> 'SY_PTO' multiple defined
#endif


/* Local System Constant DSMRDY_ENVCOND_SUP */


/* DSMRDY_ENVCOND_SUP Typ=sl */
#ifndef DSMRDY_ENVCOND_SUP
  #define DSMRDY_ENVCOND_SUP 0L
#elif (DSMRDY_ENVCOND_SUP != 0L)
  #error >>>> 'DSMRDY_ENVCOND_SUP' multiple defined
#endif


/* Local System Constant DSMRDY_FIDINH_SUP */


/* DSMRDY_FIDINH_SUP Typ=sl */
#ifndef DSMRDY_FIDINH_SUP
  #define DSMRDY_FIDINH_SUP 0L
#elif (DSMRDY_FIDINH_SUP != 0L)
  #error >>>> 'DSMRDY_FIDINH_SUP' multiple defined
#endif


/* Local System Constant DSMRDY_READONLY */


/* DSMRDY_READONLY Typ=sl */
#ifndef DSMRDY_READONLY
  #define DSMRDY_READONLY 0L
#elif (DSMRDY_READONLY != 0L)
  #error >>>> 'DSMRDY_READONLY' multiple defined
#endif


/* Local System Constant DSMRDY_READONLYGRP */


/* DSMRDY_READONLYGRP Typ=sl */
#ifndef DSMRDY_READONLYGRP
  #define DSMRDY_READONLYGRP 0L
#elif (DSMRDY_READONLYGRP != 0L)
  #error >>>> 'DSMRDY_READONLYGRP' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_AC */


/* DSMRDY_SIZE_LST_AC Typ=sl */
#ifndef DSMRDY_SIZE_LST_AC
  #define DSMRDY_SIZE_LST_AC 1L
#elif (DSMRDY_SIZE_LST_AC != 1L)
  #error >>>> 'DSMRDY_SIZE_LST_AC' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_Cat */


/* DSMRDY_SIZE_LST_Cat Typ=sl */
#ifndef DSMRDY_SIZE_LST_Cat
  #define DSMRDY_SIZE_LST_Cat 15L
#elif (DSMRDY_SIZE_LST_Cat != 15L)
  #error >>>> 'DSMRDY_SIZE_LST_Cat' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_ComprCmpnt */


/* DSMRDY_SIZE_LST_ComprCmpnt Typ=sl */
#ifndef DSMRDY_SIZE_LST_ComprCmpnt
  #define DSMRDY_SIZE_LST_ComprCmpnt 1L
#elif (DSMRDY_SIZE_LST_ComprCmpnt != 1L)
  #error >>>> 'DSMRDY_SIZE_LST_ComprCmpnt' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_EGR */


/* DSMRDY_SIZE_LST_EGR Typ=sl */
#ifndef DSMRDY_SIZE_LST_EGR
  #define DSMRDY_SIZE_LST_EGR 15L
#elif (DSMRDY_SIZE_LST_EGR != 15L)
  #error >>>> 'DSMRDY_SIZE_LST_EGR' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_EvpSys */


/* DSMRDY_SIZE_LST_EvpSys Typ=sl */
#ifndef DSMRDY_SIZE_LST_EvpSys
  #define DSMRDY_SIZE_LST_EvpSys 15L
#elif (DSMRDY_SIZE_LST_EvpSys != 15L)
  #error >>>> 'DSMRDY_SIZE_LST_EvpSys' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_FlSys */


/* DSMRDY_SIZE_LST_FlSys Typ=sl */
#ifndef DSMRDY_SIZE_LST_FlSys
  #define DSMRDY_SIZE_LST_FlSys 1L
#elif (DSMRDY_SIZE_LST_FlSys != 1L)
  #error >>>> 'DSMRDY_SIZE_LST_FlSys' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_HtCat */


/* DSMRDY_SIZE_LST_HtCat Typ=sl */
#ifndef DSMRDY_SIZE_LST_HtCat
  #define DSMRDY_SIZE_LST_HtCat 15L
#elif (DSMRDY_SIZE_LST_HtCat != 15L)
  #error >>>> 'DSMRDY_SIZE_LST_HtCat' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_Misf */


/* DSMRDY_SIZE_LST_Misf Typ=sl */
#ifndef DSMRDY_SIZE_LST_Misf
  #define DSMRDY_SIZE_LST_Misf 1L
#elif (DSMRDY_SIZE_LST_Misf != 1L)
  #error >>>> 'DSMRDY_SIZE_LST_Misf' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_O2Sens */


/* DSMRDY_SIZE_LST_O2Sens Typ=sl */
#ifndef DSMRDY_SIZE_LST_O2Sens
  #define DSMRDY_SIZE_LST_O2Sens 20L
#elif (DSMRDY_SIZE_LST_O2Sens != 20L)
  #error >>>> 'DSMRDY_SIZE_LST_O2Sens' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_O2SensHt */


/* DSMRDY_SIZE_LST_O2SensHt Typ=sl */
#ifndef DSMRDY_SIZE_LST_O2SensHt
  #define DSMRDY_SIZE_LST_O2SensHt 15L
#elif (DSMRDY_SIZE_LST_O2SensHt != 15L)
  #error >>>> 'DSMRDY_SIZE_LST_O2SensHt' multiple defined
#endif


/* Local System Constant DSMRDY_SIZE_LST_SecAirSys */


/* DSMRDY_SIZE_LST_SecAirSys Typ=sl */
#ifndef DSMRDY_SIZE_LST_SecAirSys
  #define DSMRDY_SIZE_LST_SecAirSys 15L
#elif (DSMRDY_SIZE_LST_SecAirSys != 15L)
  #error >>>> 'DSMRDY_SIZE_LST_SecAirSys' multiple defined
#endif


/* Local System Constant DSMRDY_STDCONFIG */


/* DSMRDY_STDCONFIG Typ=sl */
#ifndef DSMRDY_STDCONFIG
  #define DSMRDY_STDCONFIG 1L
#elif (DSMRDY_STDCONFIG != 1L)
  #error >>>> 'DSMRDY_STDCONFIG' multiple defined
#endif


/* Local System Constant DSM_CONF_SUP_DSMRDY_CT */


/* DSM_CONF_SUP_DSMRDY_CT Typ=sl */
#ifndef DSM_CONF_SUP_DSMRDY_CT
  #define DSM_CONF_SUP_DSMRDY_CT 0L
#elif (DSM_CONF_SUP_DSMRDY_CT != 0L)
  #error >>>> 'DSM_CONF_SUP_DSMRDY_CT' multiple defined
#endif


/* Local System Constant DSM_CONF_SUP_DSMRDY_XWHY */


/* DSM_CONF_SUP_DSMRDY_XWHY Typ=sl */
#ifndef DSM_CONF_SUP_DSMRDY_XWHY
  #define DSM_CONF_SUP_DSMRDY_XWHY 0L
#elif (DSM_CONF_SUP_DSMRDY_XWHY != 0L)
  #error >>>> 'DSM_CONF_SUP_DSMRDY_XWHY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: DSMRdy_stGrpRdy */


/* Local Variable: DSMRdy_stGrpRdyDFES */


/* Local Variable: DSMRdy_stGrpRdyScan */


/* Local Variable: DSMRdy_stGrpSup */


/* Local Variable: DSMRdy_xPId1 */



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

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DSMRDY_ADS_PTA_01_T_DEF
#define DATA_DSMRDY_ADS_PTA_01_T_DEF
typedef struct
{
    /* ----- Parameter DSMRdy_X ----- */
    DSMRdy_X_str _DSMRdy_X;
} DATA_DSMRdy_ADS_PTA_01_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DSMRdy_ADS_PTA_01_t DATA_DSMRdy_ADS_PTA_01
    __attribute__ ((asection (".pta_dataADS_PTA_01_DSMRdy","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DSMRdy_ADS_PTA_01_t * const VECT_DSMRdy_ADS_PTA_01
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_01_DSMRdy","f=as")));
#endif

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DSMRDY_ADS_PTA_02_T_DEF
#define DATA_DSMRDY_ADS_PTA_02_T_DEF
typedef struct
{
    /* ----- Parameter DSMRdy_Grp ----- */
    DSMRdy_Grp_str _DSMRdy_Grp;
} DATA_DSMRdy_ADS_PTA_02_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DSMRdy_ADS_PTA_02_t DATA_DSMRdy_ADS_PTA_02
    __attribute__ ((asection (".pta_dataADS_PTA_02_DSMRdy","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DSMRdy_ADS_PTA_02_t * const VECT_DSMRdy_ADS_PTA_02
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_02_DSMRdy","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Macro for local Parameter DSMRdy_X -- */
#ifndef DSMRdy_X
#define DSMRdy_X (VECT_DSMRdy_ADS_PTA_01->_DSMRdy_X)
#endif

#ifndef RP_DSMRdy_X
#define RP_DSMRdy_X (DATA_DSMRdy_ADS_PTA_01._DSMRdy_X)
#endif

#ifndef __DSMRdy_X
#define __DSMRdy_X (VECT_DSMRdy_ADS_PTA_01->_DSMRdy_X)
#endif

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Macro for local Parameter DSMRdy_Grp -- */
#ifndef DSMRdy_Grp
#define DSMRdy_Grp (VECT_DSMRdy_ADS_PTA_02->_DSMRdy_Grp)
#endif

#ifndef RP_DSMRdy_Grp
#define RP_DSMRdy_Grp (DATA_DSMRdy_ADS_PTA_02._DSMRdy_Grp)
#endif

#ifndef __DSMRdy_Grp
#define __DSMRdy_Grp (VECT_DSMRdy_ADS_PTA_02->_DSMRdy_Grp)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DSMRDY_DAT_H */
