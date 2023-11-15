#ifndef _UACCAPPL_ECUID_DAT_H
#define _UACCAPPL_ECUID_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter MB_NUMBER_CUST */
#ifndef _MB_NUMBER_CUST_DEF
#define _MB_NUMBER_CUST_DEF
/* N_DclFm: MB_NUMBER_CUST */
#endif /* _MB_NUMBER_CUST_DEF */

/* Defined Parameter MB_NUMBER_DATA */
#ifndef _MB_NUMBER_DATA_DEF
#define _MB_NUMBER_DATA_DEF
/* N_DclFm: MB_NUMBER_DATA */
#endif /* _MB_NUMBER_DATA_DEF */

/* Defined Parameter MB_NUMBER_ECU */
#ifndef _MB_NUMBER_ECU_DEF
#define _MB_NUMBER_ECU_DEF
/* N_DclFm: MB_NUMBER_ECU */
#endif /* _MB_NUMBER_ECU_DEF */

/* Defined Parameter MB_NUMBER_PST */
#ifndef _MB_NUMBER_PST_DEF
#define _MB_NUMBER_PST_DEF
/* N_DclFm: MB_NUMBER_PST */
#endif /* _MB_NUMBER_PST_DEF */

/* Defined Parameter UAccAppl_ActvDiagInfo_CA */
#ifndef _UAccAppl_ActvDiagInfo_CA_DEF
#define _UAccAppl_ActvDiagInfo_CA_DEF
#define UAccAppl_ActvDiagInfo_CAM UAccAppl_ActvDiagInfo_CA
#endif /* _UAccAppl_ActvDiagInfo_CA_DEF */

/* Defined Parameter UAccAppl_FlowNumber_ASC */
#ifndef _UAccAppl_FlowNumber_ASC_DEF
#define _UAccAppl_FlowNumber_ASC_DEF
/* N_DclFm: UAccAppl_FlowNumber_ASC */
#endif /* _UAccAppl_FlowNumber_ASC_DEF */

/* Defined Parameter UAccAppl_SwSupplierDs_CA */
#ifndef _UAccAppl_SwSupplierDs_CA_DEF
#define _UAccAppl_SwSupplierDs_CA_DEF
#define UAccAppl_SwSupplierDs_CAM UAccAppl_SwSupplierDs_CA
#endif /* _UAccAppl_SwSupplierDs_CA_DEF */

/* Defined Parameter UAccAppl_SwVerInfoAsw_CA */
#ifndef _UAccAppl_SwVerInfoAsw_CA_DEF
#define _UAccAppl_SwVerInfoAsw_CA_DEF
#define UAccAppl_SwVerInfoAsw_CAM UAccAppl_SwVerInfoAsw_CA
#endif /* _UAccAppl_SwVerInfoAsw_CA_DEF */

/* Defined Parameter UAccAppl_SwVerInfoDs_CA */
#ifndef _UAccAppl_SwVerInfoDs_CA_DEF
#define _UAccAppl_SwVerInfoDs_CA_DEF
#define UAccAppl_SwVerInfoDs_CAM UAccAppl_SwVerInfoDs_CA
#endif /* _UAccAppl_SwVerInfoDs_CA_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant SY_CANVAR */


/* SY_CANVAR Typ=sw */
#ifndef SY_CANVAR
  #define SY_CANVAR 5L
#elif (SY_CANVAR != 5L)
  #error >>>> 'SY_CANVAR' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_

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


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_UACCAPPL_ECUID_DIR_T_DEF
#define DATA_UACCAPPL_ECUID_DIR_T_DEF
typedef struct
{
    /* ----- Parameter MB_NUMBER_CUST ----- */
    uint8 _MB_NUMBER_CUST[14];
    /* ----- Parameter MB_NUMBER_DATA ----- */
    uint8 _MB_NUMBER_DATA[11];
    /* ----- Parameter MB_NUMBER_ECU ----- */
    uint8 _MB_NUMBER_ECU[10];
    /* ----- Parameter MB_NUMBER_PST ----- */
    uint8 _MB_NUMBER_PST[11];
    /* ----- Parameter UAccAppl_ActvDiagInfo_CA ----- */
    uint8 _UAccAppl_ActvDiagInfo_CA[3];
    /* ----- Parameter UAccAppl_FlowNumber_ASC ----- */
    uint8 _UAccAppl_FlowNumber_ASC[11];
    /* ----- Parameter UAccAppl_SwSupplierDs_CA ----- */
    uint8 _UAccAppl_SwSupplierDs_CA[2];
    /* ----- Parameter UAccAppl_SwVerInfoAsw_CA ----- */
    uint8 _UAccAppl_SwVerInfoAsw_CA[3];
    /* ----- Parameter UAccAppl_SwVerInfoDs_CA ----- */
    uint8 _UAccAppl_SwVerInfoDs_CA[3];
} DATA_UAccAppl_Ecuid_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_UAccAppl_Ecuid_dir_t DATA_UAccAppl_Ecuid_dir
    __attribute__ ((asection (".pta_datadir_UAccAppl_Ecuid","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_UAccAppl_Ecuid_dir_t * const VECT_UAccAppl_Ecuid_dir
    __attribute__ ((asection (".sdata.pta_vectdir_UAccAppl_Ecuid","f=as")));
#endif


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter MB_NUMBER_CUST -- */
#ifndef MB_NUMBER_CUST
#define MB_NUMBER_CUST (VECT_UAccAppl_Ecuid_dir->_MB_NUMBER_CUST)
#endif

#ifndef RP_MB_NUMBER_CUST
#define RP_MB_NUMBER_CUST (DATA_UAccAppl_Ecuid_dir._MB_NUMBER_CUST)
#endif

#ifndef __MB_NUMBER_CUST
#define __MB_NUMBER_CUST (VECT_UAccAppl_Ecuid_dir->_MB_NUMBER_CUST)
#endif

/* -- Macro for local Parameter MB_NUMBER_DATA -- */
#ifndef MB_NUMBER_DATA
#define MB_NUMBER_DATA (VECT_UAccAppl_Ecuid_dir->_MB_NUMBER_DATA)
#endif

#ifndef RP_MB_NUMBER_DATA
#define RP_MB_NUMBER_DATA (DATA_UAccAppl_Ecuid_dir._MB_NUMBER_DATA)
#endif

#ifndef __MB_NUMBER_DATA
#define __MB_NUMBER_DATA (VECT_UAccAppl_Ecuid_dir->_MB_NUMBER_DATA)
#endif

/* -- Macro for local Parameter MB_NUMBER_ECU -- */
#ifndef MB_NUMBER_ECU
#define MB_NUMBER_ECU (VECT_UAccAppl_Ecuid_dir->_MB_NUMBER_ECU)
#endif

#ifndef RP_MB_NUMBER_ECU
#define RP_MB_NUMBER_ECU (DATA_UAccAppl_Ecuid_dir._MB_NUMBER_ECU)
#endif

#ifndef __MB_NUMBER_ECU
#define __MB_NUMBER_ECU (VECT_UAccAppl_Ecuid_dir->_MB_NUMBER_ECU)
#endif

/* -- Macro for local Parameter MB_NUMBER_PST -- */
#ifndef MB_NUMBER_PST
#define MB_NUMBER_PST (VECT_UAccAppl_Ecuid_dir->_MB_NUMBER_PST)
#endif

#ifndef RP_MB_NUMBER_PST
#define RP_MB_NUMBER_PST (DATA_UAccAppl_Ecuid_dir._MB_NUMBER_PST)
#endif

#ifndef __MB_NUMBER_PST
#define __MB_NUMBER_PST (VECT_UAccAppl_Ecuid_dir->_MB_NUMBER_PST)
#endif

/* -- Macro for local Parameter UAccAppl_ActvDiagInfo_CA -- */
#ifndef UAccAppl_ActvDiagInfo_CA
#define UAccAppl_ActvDiagInfo_CA (VECT_UAccAppl_Ecuid_dir->_UAccAppl_ActvDiagInfo_CA)
#endif

#ifndef RP_UAccAppl_ActvDiagInfo_CA
#define RP_UAccAppl_ActvDiagInfo_CA (DATA_UAccAppl_Ecuid_dir._UAccAppl_ActvDiagInfo_CA)
#endif

#ifndef __UAccAppl_ActvDiagInfo_CA
#define __UAccAppl_ActvDiagInfo_CA (VECT_UAccAppl_Ecuid_dir->_UAccAppl_ActvDiagInfo_CA)
#endif

/* -- Macro for local Parameter UAccAppl_FlowNumber_ASC -- */
#ifndef UAccAppl_FlowNumber_ASC
#define UAccAppl_FlowNumber_ASC (VECT_UAccAppl_Ecuid_dir->_UAccAppl_FlowNumber_ASC)
#endif

#ifndef RP_UAccAppl_FlowNumber_ASC
#define RP_UAccAppl_FlowNumber_ASC (DATA_UAccAppl_Ecuid_dir._UAccAppl_FlowNumber_ASC)
#endif

#ifndef __UAccAppl_FlowNumber_ASC
#define __UAccAppl_FlowNumber_ASC (VECT_UAccAppl_Ecuid_dir->_UAccAppl_FlowNumber_ASC)
#endif

/* -- Macro for local Parameter UAccAppl_SwSupplierDs_CA -- */
#ifndef UAccAppl_SwSupplierDs_CA
#define UAccAppl_SwSupplierDs_CA (VECT_UAccAppl_Ecuid_dir->_UAccAppl_SwSupplierDs_CA)
#endif

#ifndef RP_UAccAppl_SwSupplierDs_CA
#define RP_UAccAppl_SwSupplierDs_CA (DATA_UAccAppl_Ecuid_dir._UAccAppl_SwSupplierDs_CA)
#endif

#ifndef __UAccAppl_SwSupplierDs_CA
#define __UAccAppl_SwSupplierDs_CA (VECT_UAccAppl_Ecuid_dir->_UAccAppl_SwSupplierDs_CA)
#endif

/* -- Macro for local Parameter UAccAppl_SwVerInfoAsw_CA -- */
#ifndef UAccAppl_SwVerInfoAsw_CA
#define UAccAppl_SwVerInfoAsw_CA (VECT_UAccAppl_Ecuid_dir->_UAccAppl_SwVerInfoAsw_CA)
#endif

#ifndef RP_UAccAppl_SwVerInfoAsw_CA
#define RP_UAccAppl_SwVerInfoAsw_CA (DATA_UAccAppl_Ecuid_dir._UAccAppl_SwVerInfoAsw_CA)
#endif

#ifndef __UAccAppl_SwVerInfoAsw_CA
#define __UAccAppl_SwVerInfoAsw_CA (VECT_UAccAppl_Ecuid_dir->_UAccAppl_SwVerInfoAsw_CA)
#endif

/* -- Macro for local Parameter UAccAppl_SwVerInfoDs_CA -- */
#ifndef UAccAppl_SwVerInfoDs_CA
#define UAccAppl_SwVerInfoDs_CA (VECT_UAccAppl_Ecuid_dir->_UAccAppl_SwVerInfoDs_CA)
#endif

#ifndef RP_UAccAppl_SwVerInfoDs_CA
#define RP_UAccAppl_SwVerInfoDs_CA (DATA_UAccAppl_Ecuid_dir._UAccAppl_SwVerInfoDs_CA)
#endif

#ifndef __UAccAppl_SwVerInfoDs_CA
#define __UAccAppl_SwVerInfoDs_CA (VECT_UAccAppl_Ecuid_dir->_UAccAppl_SwVerInfoDs_CA)
#endif


#undef _DAT_H
#endif /* _UACCAPPL_ECUID_DAT_H */
