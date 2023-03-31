#ifndef _MOCGPTA_CO_DAT_H
#define _MOCGPTA_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model TYP_Mo_DataCyclicCheckU8 instantiated in actual function MoCGPTA_Co */
#ifndef _TYP_Mo_DataCyclicCheckU8_DEF
#define _TYP_Mo_DataCyclicCheckU8_DEF

#endif /* _TYP_Mo_DataCyclicCheckU8_DEF */
/* Parameter-Model TYP_Mo_DataCyclicCheckU16 instantiated in actual function MoCGPTA_Co */
#ifndef _TYP_Mo_DataCyclicCheckU16_DEF
#define _TYP_Mo_DataCyclicCheckU16_DEF

#endif /* _TYP_Mo_DataCyclicCheckU16_DEF */


/* Defined Parameter MoCGPTA_numErr_C */
#ifndef _MoCGPTA_numErr_C_DEF
#define _MoCGPTA_numErr_C_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCGPTA_numErr_C_MAC
#define _MoCGPTA_numErr_C_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCGPTA_numErr_C __MoCGPTA_numErr_C
#define MoCGPTA_numErr_C __MoCGPTA_numErr_C
/* DS Macro referencing to GS PTA Element */
#define MoCGPTA_numErr_CM __MoCGPTA_numErr_C
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCGPTA_numErr_C MoCGPTA_numErr_C
/* DS Macro referencing to DS PTA Element */
#define MoCGPTA_numErr_CM MoCGPTA_numErr_C
#endif /* _DAT_H */
#endif /* _MoCGPTA_numErr_C_MAC */

#endif /* _MoCGPTA_numErr_C_DEF */

/* Defined Parameter MoCGPTA_tiDvtMax_C */
#ifndef _MoCGPTA_tiDvtMax_C_DEF
#define _MoCGPTA_tiDvtMax_C_DEF

/* Mo_Data( N_DclFm ) */

#ifndef _MoCGPTA_tiDvtMax_C_MAC
#define _MoCGPTA_tiDvtMax_C_MAC
/* Mo_Data( N_MacFmNoPTA_GS ) */
#ifndef _DAT_H /* GS Headerfile */
/* GS Macro referencing to GS PTA Element */
#define KW_MoCGPTA_tiDvtMax_C __MoCGPTA_tiDvtMax_C
#define MoCGPTA_tiDvtMax_C __MoCGPTA_tiDvtMax_C
/* DS Macro referencing to GS PTA Element */
#define MoCGPTA_tiDvtMax_CM __MoCGPTA_tiDvtMax_C
#else
/* GS Macro referencing to DS PTA Element */
#define KW_MoCGPTA_tiDvtMax_C MoCGPTA_tiDvtMax_C
/* DS Macro referencing to DS PTA Element */
#define MoCGPTA_tiDvtMax_CM MoCGPTA_tiDvtMax_C
#endif /* _DAT_H */
#endif /* _MoCGPTA_tiDvtMax_C_MAC */

#endif /* _MoCGPTA_tiDvtMax_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant ECU_TRICORE_SY */


/* ECU_TRICORE_SY Typ=sw */
#ifndef ECU_TRICORE_SY
  #define ECU_TRICORE_SY 14L
#elif (ECU_TRICORE_SY != 14L)
  #error >>>> 'ECU_TRICORE_SY' multiple defined
#endif


/* Referenced System Constant MO_MAXVALINDCR_SC */


/* MO_MAXVALINDCR_SC Typ=ub */
#ifndef MO_MAXVALINDCR_SC
  #define MO_MAXVALINDCR_SC 0L
#elif (MO_MAXVALINDCR_SC != 0L)
  #error >>>> 'MO_MAXVALINDCR_SC' multiple defined
#endif


/* Local System Constant MOCGPTA_NUM_GPTA_USED */


/* MOCGPTA_NUM_GPTA_USED Typ=ub */
#ifndef MOCGPTA_NUM_GPTA_USED
  #define MOCGPTA_NUM_GPTA_USED 2u
#endif


/* Local System Constant MOCGPTA_USED_GPTA_1 */


/* MOCGPTA_USED_GPTA_1 Typ=ub */
#ifndef MOCGPTA_USED_GPTA_1
  #define MOCGPTA_USED_GPTA_1 1u
#endif


/* Local System Constant MOCGPTA_USED_GPTA_2 */


/* MOCGPTA_USED_GPTA_2 Typ=ub */
#ifndef MOCGPTA_USED_GPTA_2
  #define MOCGPTA_USED_GPTA_2 2u
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Imported Variable: Mo_bCplChk */
#define IMPORTED
#ifndef _D_FILE_ 

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema Mo_RamComLong +++++ */

/* ########################### */
/* START MoRamComLong          */
/* ########################### */
#pragma section .bss.Mo_RamCom aw 


/* Imported Variable: Mo_stCplChk */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MO_STCPLCHK_EXT__
#define __MO_STCPLCHK_EXT__
/* N_DclFm: Mo_stCplChk */
extern uint32 Mo_stCplChk
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED
/* MoRamComLongFooter */
#pragma section   
/* ########################### */
/* END MoRamComLong            */
/* ########################### */

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* ########################### */
/* START MoRamCplByte          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Local Variable: MoCGPTA_ctErrCpl */
/* Mo_RamArrayU8( N_DclFm ) */
#ifdef _DAT_H
#ifndef __MOCGPTA_CTERRCPL_EXT__
#define __MOCGPTA_CTERRCPL_EXT__
extern uint8 MoCGPTA_ctErrCpl[2]
;
#endif
#endif


/* Imported Variable: Mo_stMoCCpl */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MO_STMOCCPL_EXT__
#define __MO_STMOCCPL_EXT__
/* N_DclFm: Mo_stMoCCpl */
extern uint8 Mo_stMoCCpl
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamCplByte            */
/* ########################### */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* ########################### */
/* START MoRamCplLong          */
/* ########################### */
#pragma section .bss.Mo_RamCpl aw 


/* Local Variable: MoCGPTA_tiGT0LstCpl */
/* Mo_RamArrayU32( N_DclFm ) */
#ifdef _DAT_H
#ifndef __MOCGPTA_TIGT0LSTCPL_EXT__
#define __MOCGPTA_TIGT0LSTCPL_EXT__
extern uint32 MoCGPTA_tiGT0LstCpl[2]
;
#endif
#endif


/* Local Variable: MoCGPTA_tiSTMLstCpl */
#ifdef _DAT_H
#ifndef __MOCGPTA_TISTMLSTCPL_EXT__
#define __MOCGPTA_TISTMLSTCPL_EXT__
/* N_DclFm: MoCGPTA_tiSTMLstCpl */
extern uint32 MoCGPTA_tiSTMLstCpl
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoRamCplLong            */
/* ########################### */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* ########################### */
/* START MoRamCyclicCheckByte  */
/* ########################### */
#pragma section .bss.Mo_RamCyclicCheck aw 


/* Local Variable: MoCGPTA_ctErr */
/* Mo_RamArrayU8( N_DclFm ) */
#ifdef _DAT_H
#ifndef __MOCGPTA_CTERR_EXT__
#define __MOCGPTA_CTERR_EXT__
extern uint8 MoCGPTA_ctErr[2]
;
#endif
#endif


/* Imported Variable: Mo_stMoC */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __MO_STMOC_EXT__
#define __MO_STMOC_EXT__
/* N_DclFm: Mo_stMoC */
extern uint8 Mo_stMoC
;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

#pragma section   
/* ########################### */
/* END MoRamCyclicCheckByte    */
/* ########################### */

/* +++++ Addressschema Mo_RamCyclicCheckLong +++++ */

/* ########################### */
/* START MoRamCyclicCheckLong  */
/* ########################### */
#pragma section .bss.Mo_RamCyclicCheck aw 


/* Local Variable: MoCGPTA_tiGT0Lst */
/* Mo_RamArrayU32( N_DclFm ) */
#ifdef _DAT_H
#ifndef __MOCGPTA_TIGT0LST_EXT__
#define __MOCGPTA_TIGT0LST_EXT__
extern uint32 MoCGPTA_tiGT0Lst[2]
;
#endif
#endif


/* Local Variable: MoCGPTA_tiSTMLst */
#ifdef _DAT_H
#ifndef __MOCGPTA_TISTMLST_EXT__
#define __MOCGPTA_TISTMLST_EXT__
/* N_DclFm: MoCGPTA_tiSTMLst */
extern uint32 MoCGPTA_tiSTMLst
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoRamCyclicCheckLong    */
/* ########################### */


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
/* -- No referenced PTA Structures of Mo_Glbl -- */
/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_MOCGPTA_CO_MO_DATACYCLICCHECKBYTE_T_DEF
#define DATA_MOCGPTA_CO_MO_DATACYCLICCHECKBYTE_T_DEF
typedef struct
{
    /* ----- Parameter MoCGPTA_numErr_C ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint8 _MoCGPTA_numErr_C;
} DATA_MoCGPTA_Co_Mo_DataCyclicCheckByte_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_MoCGPTA_Co_Mo_DataCyclicCheckByte_t DATA_MoCGPTA_Co_Mo_DataCyclicCheckByte
    __attribute__ ((asection (".pta_dataMo_DataCyclicCheckByte_MoCGPTA_Co","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_MoCGPTA_Co_Mo_DataCyclicCheckByte_t * const VECT_MoCGPTA_Co_Mo_DataCyclicCheckByte
    __attribute__ ((asection (".sdata.pta_vectMo_DataCyclicCheckByte_MoCGPTA_Co","f=as")));
#endif

/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_MOCGPTA_CO_MO_DATACYCLICCHECKWORD_T_DEF
#define DATA_MOCGPTA_CO_MO_DATACYCLICCHECKWORD_T_DEF
typedef struct
{
    /* ----- Parameter MoCGPTA_tiDvtMax_C ----- */
    
    /* Mo_Data( N_DefFm ) */
    uint16 _MoCGPTA_tiDvtMax_C;
} DATA_MoCGPTA_Co_Mo_DataCyclicCheckWord_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_MoCGPTA_Co_Mo_DataCyclicCheckWord_t DATA_MoCGPTA_Co_Mo_DataCyclicCheckWord
    __attribute__ ((asection (".pta_dataMo_DataCyclicCheckWord_MoCGPTA_Co","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_MoCGPTA_Co_Mo_DataCyclicCheckWord_t * const VECT_MoCGPTA_Co_Mo_DataCyclicCheckWord
    __attribute__ ((asection (".sdata.pta_vectMo_DataCyclicCheckWord_MoCGPTA_Co","f=as")));
#endif

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckLong +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema Mo_DataCyclicCheckByte +++++ */

/* -- Macro for local Parameter MoCGPTA_numErr_C -- */
#ifndef MoCGPTA_numErr_C
#define MoCGPTA_numErr_C (VECT_MoCGPTA_Co_Mo_DataCyclicCheckByte->_MoCGPTA_numErr_C)
#endif

#ifndef RP_MoCGPTA_numErr_C
#define RP_MoCGPTA_numErr_C (DATA_MoCGPTA_Co_Mo_DataCyclicCheckByte._MoCGPTA_numErr_C)
#endif

#ifndef __MoCGPTA_numErr_C
#define __MoCGPTA_numErr_C (VECT_MoCGPTA_Co_Mo_DataCyclicCheckByte->_MoCGPTA_numErr_C)
#endif

/* +++++ Addressschema Mo_DataCyclicCheckWord +++++ */

/* -- Macro for local Parameter MoCGPTA_tiDvtMax_C -- */
#ifndef MoCGPTA_tiDvtMax_C
#define MoCGPTA_tiDvtMax_C (VECT_MoCGPTA_Co_Mo_DataCyclicCheckWord->_MoCGPTA_tiDvtMax_C)
#endif

#ifndef RP_MoCGPTA_tiDvtMax_C
#define RP_MoCGPTA_tiDvtMax_C (DATA_MoCGPTA_Co_Mo_DataCyclicCheckWord._MoCGPTA_tiDvtMax_C)
#endif

#ifndef __MoCGPTA_tiDvtMax_C
#define __MoCGPTA_tiDvtMax_C (VECT_MoCGPTA_Co_Mo_DataCyclicCheckWord->_MoCGPTA_tiDvtMax_C)
#endif

/* +++++ Addressschema Mo_RamCplByte +++++ */

/* +++++ Addressschema Mo_RamCplLong +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckLong +++++ */


#undef _DAT_H
#endif /* _MOCGPTA_CO_DAT_H */
