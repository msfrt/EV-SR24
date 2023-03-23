#ifndef _DSMAUX_DAT_H
#define _DSMAUX_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DSMAUX_dtWUCMin_C */
#ifndef _DSMAUX_dtWUCMin_C_DEF
#define _DSMAUX_dtWUCMin_C_DEF
#define DSMAUX_dtWUCMin_CM DSMAUX_dtWUCMin_C
#endif /* _DSMAUX_dtWUCMin_C_DEF */

/* Defined Parameter DSMAUX_tWUCMin_C */
#ifndef _DSMAUX_tWUCMin_C_DEF
#define _DSMAUX_tWUCMin_C_DEF
#define DSMAUX_tWUCMin_CM DSMAUX_tWUCMin_C
#endif /* _DSMAUX_tWUCMin_C_DEF */

/* Defined Parameter DSMAUX_xClearMode_C */
#ifndef _DSMAUX_xClearMode_C_DEF
#define _DSMAUX_xClearMode_C_DEF
#define DSMAUX_xClearMode_CM DSMAUX_xClearMode_C
#endif /* _DSMAUX_xClearMode_C_DEF */

/* Defined Parameter DSMAUX_xClearTrg_C */
#ifndef _DSMAUX_xClearTrg_C_DEF
#define _DSMAUX_xClearTrg_C_DEF
#define DSMAUX_xClearTrg_CM DSMAUX_xClearTrg_C
#endif /* _DSMAUX_xClearTrg_C_DEF */

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


/* Referenced System Constant DFES_EOLCLR_SY */


/* DFES_EOLCLR_SY Typ=ub */
#ifndef DFES_EOLCLR_SY
  #define DFES_EOLCLR_SY 1L
#elif (DFES_EOLCLR_SY != 1L)
  #error >>>> 'DFES_EOLCLR_SY' multiple defined
#endif


/* Referenced System Constant DFES_EXTDFLT_SY */


/* DFES_EXTDFLT_SY Typ=ub */
#ifndef DFES_EXTDFLT_SY
  #define DFES_EXTDFLT_SY 0L
#elif (DFES_EXTDFLT_SY != 0L)
  #error >>>> 'DFES_EXTDFLT_SY' multiple defined
#endif


/* Referenced System Constant DFES_PDTC_SY */


/* DFES_PDTC_SY Typ=ub */
#ifndef DFES_PDTC_SY
  #define DFES_PDTC_SY 0L
#elif (DFES_PDTC_SY != 0L)
  #error >>>> 'DFES_PDTC_SY' multiple defined
#endif


/* Referenced System Constant DFES_PRVTSTRDLT_SY */


/* DFES_PRVTSTRDLT_SY Typ=ub */
#ifndef DFES_PRVTSTRDLT_SY
  #define DFES_PRVTSTRDLT_SY 0L
#elif (DFES_PRVTSTRDLT_SY != 0L)
  #error >>>> 'DFES_PRVTSTRDLT_SY' multiple defined
#endif


/* Referenced System Constant DFES_VIS_BUF_SY */


/* DFES_VIS_BUF_SY Typ=sw */
#ifndef DFES_VIS_BUF_SY
  #define DFES_VIS_BUF_SY 0L
#elif (DFES_VIS_BUF_SY != 0L)
  #error >>>> 'DFES_VIS_BUF_SY' multiple defined
#endif


/* Referenced System Constant DSM2SG_EXCH_SC */


/* DSM2SG_EXCH_SC Typ=ub */
#ifndef DSM2SG_EXCH_SC
  #define DSM2SG_EXCH_SC 0L
#elif (DSM2SG_EXCH_SC != 0L)
  #error >>>> 'DSM2SG_EXCH_SC' multiple defined
#endif


/* Referenced System Constant DSMAUX_TCSORT_SY */


/* DSMAUX_TCSORT_SY Typ=ub */
#ifndef DSMAUX_TCSORT_SY
  #define DSMAUX_TCSORT_SY 0L
#elif (DSMAUX_TCSORT_SY != 0L)
  #error >>>> 'DSMAUX_TCSORT_SY' multiple defined
#endif


/* Referenced System Constant DSM_DSM2SG_SY */


/* DSM_DSM2SG_SY Typ=ub */
#ifndef DSM_DSM2SG_SY
  #define DSM_DSM2SG_SY 0L
#elif (DSM_DSM2SG_SY != 0L)
  #error >>>> 'DSM_DSM2SG_SY' multiple defined
#endif


/* Referenced System Constant DSM_WUCDET_SY */


/* DSM_WUCDET_SY Typ=sw */
#ifndef DSM_WUCDET_SY
  #define DSM_WUCDET_SY 1L
#elif (DSM_WUCDET_SY != 1L)
  #error >>>> 'DSM_WUCDET_SY' multiple defined
#endif


/* Referenced System Constant SY_MDMXEXC */


/* SY_MDMXEXC Typ=ub */
#ifndef SY_MDMXEXC
  #define SY_MDMXEXC 1L
#elif (SY_MDMXEXC != 1L)
  #error >>>> 'SY_MDMXEXC' multiple defined
#endif


/* Referenced System Constant SY_PTO */


/* SY_PTO Typ=ub */
#ifndef SY_PTO
  #define SY_PTO 0L
#elif (SY_PTO != 0L)
  #error >>>> 'SY_PTO' multiple defined
#endif


/* Referenced System Constant SY_ZYLZG */


/* SY_ZYLZG Typ=ub */
#ifndef SY_ZYLZG
  #define SY_ZYLZG 8L
#elif (SY_ZYLZG != 8L)
  #error >>>> 'SY_ZYLZG' multiple defined
#endif


/* Referenced System Constant XDI_SC */


/* XDI_SC Typ=ub */
#ifndef XDI_SC
  #define XDI_SC 0L
#elif (XDI_SC != 0L)
  #error >>>> 'XDI_SC' multiple defined
#endif


/* Local System Constant DSMAUX_READONLY */


/* DSMAUX_READONLY Typ=sl */
#ifndef DSMAUX_READONLY
  #define DSMAUX_READONLY 1L
#elif (DSMAUX_READONLY != 1L)
  #error >>>> 'DSMAUX_READONLY' multiple defined
#endif


/* Local System Constant DSMAUX_ROEBUFLEN */


/* DSMAUX_ROEBUFLEN Typ=sl */
#ifndef DSMAUX_ROEBUFLEN
  #define DSMAUX_ROEBUFLEN 0L
#elif (DSMAUX_ROEBUFLEN != 0L)
  #error >>>> 'DSMAUX_ROEBUFLEN' multiple defined
#endif


/* Local System Constant DSMAUX_ROEBUFUSEENVRAM */


/* DSMAUX_ROEBUFUSEENVRAM Typ=sl */
#ifndef DSMAUX_ROEBUFUSEENVRAM
  #define DSMAUX_ROEBUFUSEENVRAM 0L
#elif (DSMAUX_ROEBUFUSEENVRAM != 0L)
  #error >>>> 'DSMAUX_ROEBUFUSEENVRAM' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Local Variable: DSMAUX_ctWUC */


/* Local Variable: DSMAUX_stStrtEnd */


/* Local Variable: DSMAUX_tClntStrt */


/* Local Variable: DSM_stPostDrive */


/* Local Variable: DSM_stReInit */


/* Exported Variable: DSMAUX_DTRG */


/* Exported Variable: DSMAUX_stDCy */



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
#ifndef DATA_DSMAUX_ADS_PTA_01_T_DEF
#define DATA_DSMAUX_ADS_PTA_01_T_DEF
typedef struct
{
    /* ----- Parameter DSMAUX_dtWUCMin_C ----- */
    sint16 _DSMAUX_dtWUCMin_C;
    /* ----- Parameter DSMAUX_tWUCMin_C ----- */
    sint16 _DSMAUX_tWUCMin_C;
    /* ----- Parameter DSMAUX_xClearMode_C ----- */
    uint16 _DSMAUX_xClearMode_C;
    /* ----- Parameter DSMAUX_xClearTrg_C ----- */
    uint8 _DSMAUX_xClearTrg_C;
} DATA_DSMAux_ADS_PTA_01_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DSMAux_ADS_PTA_01_t DATA_DSMAux_ADS_PTA_01
    __attribute__ ((asection (".pta_dataADS_PTA_01_DSMAux","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DSMAux_ADS_PTA_01_t * const VECT_DSMAux_ADS_PTA_01
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_01_DSMAux","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Macro for local Parameter DSMAUX_dtWUCMin_C -- */
#ifndef DSMAUX_dtWUCMin_C
#define DSMAUX_dtWUCMin_C (VECT_DSMAux_ADS_PTA_01->_DSMAUX_dtWUCMin_C)
#endif

#ifndef RP_DSMAUX_dtWUCMin_C
#define RP_DSMAUX_dtWUCMin_C (DATA_DSMAux_ADS_PTA_01._DSMAUX_dtWUCMin_C)
#endif

#ifndef __DSMAUX_dtWUCMin_C
#define __DSMAUX_dtWUCMin_C (VECT_DSMAux_ADS_PTA_01->_DSMAUX_dtWUCMin_C)
#endif

/* -- Macro for local Parameter DSMAUX_tWUCMin_C -- */
#ifndef DSMAUX_tWUCMin_C
#define DSMAUX_tWUCMin_C (VECT_DSMAux_ADS_PTA_01->_DSMAUX_tWUCMin_C)
#endif

#ifndef RP_DSMAUX_tWUCMin_C
#define RP_DSMAUX_tWUCMin_C (DATA_DSMAux_ADS_PTA_01._DSMAUX_tWUCMin_C)
#endif

#ifndef __DSMAUX_tWUCMin_C
#define __DSMAUX_tWUCMin_C (VECT_DSMAux_ADS_PTA_01->_DSMAUX_tWUCMin_C)
#endif

/* -- Macro for local Parameter DSMAUX_xClearMode_C -- */
#ifndef DSMAUX_xClearMode_C
#define DSMAUX_xClearMode_C (VECT_DSMAux_ADS_PTA_01->_DSMAUX_xClearMode_C)
#endif

#ifndef RP_DSMAUX_xClearMode_C
#define RP_DSMAUX_xClearMode_C (DATA_DSMAux_ADS_PTA_01._DSMAUX_xClearMode_C)
#endif

#ifndef __DSMAUX_xClearMode_C
#define __DSMAUX_xClearMode_C (VECT_DSMAux_ADS_PTA_01->_DSMAUX_xClearMode_C)
#endif

/* -- Macro for local Parameter DSMAUX_xClearTrg_C -- */
#ifndef DSMAUX_xClearTrg_C
#define DSMAUX_xClearTrg_C (VECT_DSMAux_ADS_PTA_01->_DSMAUX_xClearTrg_C)
#endif

#ifndef RP_DSMAUX_xClearTrg_C
#define RP_DSMAUX_xClearTrg_C (DATA_DSMAux_ADS_PTA_01._DSMAUX_xClearTrg_C)
#endif

#ifndef __DSMAUX_xClearTrg_C
#define __DSMAUX_xClearTrg_C (VECT_DSMAux_ADS_PTA_01->_DSMAUX_xClearTrg_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DSMAUX_DAT_H */
