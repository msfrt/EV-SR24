#ifndef _DME_DAT_H
#define _DME_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Dme_stOverlayMethodOnly_C */
#ifndef _Dme_stOverlayMethodOnly_C_DEF
#define _Dme_stOverlayMethodOnly_C_DEF
#define Dme_stOverlayMethodOnly_CM Dme_stOverlayMethodOnly_C
#endif /* _Dme_stOverlayMethodOnly_C_DEF */

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


/* Exported Variable: Dme_ctDataSetVariant */


/* Exported Variable: Dme_numBytesAvailable */


/* Exported Variable: Dme_numBytesAvailableOvl */



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


/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema ADS_noPTA +++++ */


/* noPTA data */
/* ----- Dme_stOverlayMethodOnly_C ----- */
#ifndef Dme_stOverlayMethodOnly_C_DEF
#define Dme_stOverlayMethodOnly_C_DEF
extern const uint8 Dme_stOverlayMethodOnly_C
    __attribute__ ((asection (".caldataADS_noPTA_Dme","f=a")));
#endif

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema ADS_noPTA +++++ */

/* -- Macro for local Parameter Dme_stOverlayMethodOnly_C -- */

#ifndef RP_Dme_stOverlayMethodOnly_C
#define RP_Dme_stOverlayMethodOnly_C (Dme_stOverlayMethodOnly_C)
#endif

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DME_DAT_H */
