#ifndef _DTR_DAT_H
#define _DTR_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DTR_numCANOBDId_CA */
#ifndef _DTR_numCANOBDId_CA_DEF
#define _DTR_numCANOBDId_CA_DEF
#define DTR_numCANOBDId_CAM DTR_numCANOBDId_CA
#endif /* _DTR_numCANOBDId_CA_DEF */

/* Defined Parameter DTR_numCANTstId_CA */
#ifndef _DTR_numCANTstId_CA_DEF
#define _DTR_numCANTstId_CA_DEF
#define DTR_numCANTstId_CAM DTR_numCANTstId_CA
#endif /* _DTR_numCANTstId_CA_DEF */

/* Defined Parameter DTR_xAsgnCANRslt_CA */
#ifndef _DTR_xAsgnCANRslt_CA_DEF
#define _DTR_xAsgnCANRslt_CA_DEF
#define DTR_xAsgnCANRslt_CAM DTR_xAsgnCANRslt_CA
#endif /* _DTR_xAsgnCANRslt_CA_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DFES_BLKENTRY_SY */


/* DFES_BLKENTRY_SY Typ=ub */
#ifndef DFES_BLKENTRY_SY
  #define DFES_BLKENTRY_SY 0L
#elif (DFES_BLKENTRY_SY != 0L)
  #error >>>> 'DFES_BLKENTRY_SY' multiple defined
#endif


/* Referenced System Constant DTR_LEGIFC_SY */


/* DTR_LEGIFC_SY Typ=ub */
#ifndef DTR_LEGIFC_SY
  #define DTR_LEGIFC_SY 0L
#elif (DTR_LEGIFC_SY != 0L)
  #error >>>> 'DTR_LEGIFC_SY' multiple defined
#endif


/* Referenced System Constant OBD_PHYSMEDM_SY */


/* OBD_PHYSMEDM_SY Typ=sw */
#ifndef OBD_PHYSMEDM_SY
  #define OBD_PHYSMEDM_SY 0L
#elif (OBD_PHYSMEDM_SY != 0L)
  #error >>>> 'OBD_PHYSMEDM_SY' multiple defined
#endif


/* Local System Constant DTR_FACTKLINE */


/* DTR_FACTKLINE Typ=sl */
#ifndef DTR_FACTKLINE
  #define DTR_FACTKLINE 13L
#elif (DTR_FACTKLINE != 13L)
  #error >>>> 'DTR_FACTKLINE' multiple defined
#endif


/* Local System Constant DTR_FACT_RES_REV */
/* N_DefFm: DTR_FACT_RES_REV */
#ifndef DTR_FACT_RES_REV
  #define DTR_FACT_RES_REV 8192.00000000f
#endif
/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: DTR_valLoLim */


/* Exported Variable: DTR_valTst */


/* Exported Variable: DTR_valUpLim */



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
#ifndef DATA_DTR_ADS_PTA_01_T_DEF
#define DATA_DTR_ADS_PTA_01_T_DEF
typedef struct
{
    /* ----- Parameter DTR_numCANOBDId_CA ----- */
    uint8 _DTR_numCANOBDId_CA[10];
    /* ----- Parameter DTR_numCANTstId_CA ----- */
    uint8 _DTR_numCANTstId_CA[10];
    /* ----- Parameter DTR_xAsgnCANRslt_CA ----- */
    uint8 _DTR_xAsgnCANRslt_CA[10];
} DATA_DTR_ADS_PTA_01_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DTR_ADS_PTA_01_t DATA_DTR_ADS_PTA_01
    __attribute__ ((asection (".pta_dataADS_PTA_01_DTR","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DTR_ADS_PTA_01_t * const VECT_DTR_ADS_PTA_01
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_01_DTR","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Macro for local Parameter DTR_numCANOBDId_CA -- */
#ifndef DTR_numCANOBDId_CA
#define DTR_numCANOBDId_CA (VECT_DTR_ADS_PTA_01->_DTR_numCANOBDId_CA)
#endif

#ifndef RP_DTR_numCANOBDId_CA
#define RP_DTR_numCANOBDId_CA (DATA_DTR_ADS_PTA_01._DTR_numCANOBDId_CA)
#endif

#ifndef __DTR_numCANOBDId_CA
#define __DTR_numCANOBDId_CA (VECT_DTR_ADS_PTA_01->_DTR_numCANOBDId_CA)
#endif

/* -- Macro for local Parameter DTR_numCANTstId_CA -- */
#ifndef DTR_numCANTstId_CA
#define DTR_numCANTstId_CA (VECT_DTR_ADS_PTA_01->_DTR_numCANTstId_CA)
#endif

#ifndef RP_DTR_numCANTstId_CA
#define RP_DTR_numCANTstId_CA (DATA_DTR_ADS_PTA_01._DTR_numCANTstId_CA)
#endif

#ifndef __DTR_numCANTstId_CA
#define __DTR_numCANTstId_CA (VECT_DTR_ADS_PTA_01->_DTR_numCANTstId_CA)
#endif

/* -- Macro for local Parameter DTR_xAsgnCANRslt_CA -- */
#ifndef DTR_xAsgnCANRslt_CA
#define DTR_xAsgnCANRslt_CA (VECT_DTR_ADS_PTA_01->_DTR_xAsgnCANRslt_CA)
#endif

#ifndef RP_DTR_xAsgnCANRslt_CA
#define RP_DTR_xAsgnCANRslt_CA (DATA_DTR_ADS_PTA_01._DTR_xAsgnCANRslt_CA)
#endif

#ifndef __DTR_xAsgnCANRslt_CA
#define __DTR_xAsgnCANRslt_CA (VECT_DTR_ADS_PTA_01->_DTR_xAsgnCANRslt_CA)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DTR_DAT_H */
