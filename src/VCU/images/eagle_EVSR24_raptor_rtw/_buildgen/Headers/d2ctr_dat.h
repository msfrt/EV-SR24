#ifndef _D2CTR_DAT_H
#define _D2CTR_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter D2Ctr_FltDFC_CA */
#ifndef _D2Ctr_FltDFC_CA_DEF
#define _D2Ctr_FltDFC_CA_DEF
#define D2Ctr_FltDFC_CAM D2Ctr_FltDFC_CA
#endif /* _D2Ctr_FltDFC_CA_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant SY_D2CTRFLT */


/* SY_D2CTRFLT Typ=ub */
#ifndef SY_D2CTRFLT
  #define SY_D2CTRFLT 10L
#elif (SY_D2CTRFLT != 10L)
  #error >>>> 'SY_D2CTRFLT' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: DFES_ctSrv */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema MsgRam +++++ */
/* MsgRamHeader */
#pragma section .sbss aws 


/* Exported Variable: B_syserr */
/* B_syserr is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: B_syserrk */
/* B_syserrk is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: B_trip */
/* B_trip is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ctrerf1 */
/* ctrerf1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ctrerfk1 */
/* ctrerfk1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ctrrdy1 */
/* ctrrdy1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ctrsfp */
/* ctrsfp is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ctrzyf0 */
/* ctrzyf0 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: ctrzyf1 */
/* ctrzyf1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

/* Footer */
#pragma section 


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

/* -- No referenced PTA Structures of DFES -- */
/* +++++ Addressschema ADS_PTA_01 +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema ADS_PTA_03 +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema ADS_PTA_06 +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema ADS_PTA_08 +++++ */

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
#ifndef DATA_D2CTR_DIR_T_DEF
#define DATA_D2CTR_DIR_T_DEF
typedef struct
{
    /* ----- Parameter D2Ctr_FltDFC_CA ----- */
    uint16 _D2Ctr_FltDFC_CA[10];
} DATA_D2CTR_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_D2CTR_dir_t DATA_D2CTR_dir
    __attribute__ ((asection (".pta_datadir_D2CTR","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_D2CTR_dir_t * const VECT_D2CTR_dir
    __attribute__ ((asection (".sdata.pta_vectdir_D2CTR","f=as")));
#endif

/* +++++ Addressschema MsgRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter D2Ctr_FltDFC_CA -- */
#ifndef D2Ctr_FltDFC_CA
#define D2Ctr_FltDFC_CA (VECT_D2CTR_dir->_D2Ctr_FltDFC_CA)
#endif

#ifndef RP_D2Ctr_FltDFC_CA
#define RP_D2Ctr_FltDFC_CA (DATA_D2CTR_dir._D2Ctr_FltDFC_CA)
#endif

#ifndef __D2Ctr_FltDFC_CA
#define __D2Ctr_FltDFC_CA (VECT_D2CTR_dir->_D2Ctr_FltDFC_CA)
#endif

/* +++++ Addressschema MsgRam +++++ */


#undef _DAT_H
#endif /* _D2CTR_DAT_H */
