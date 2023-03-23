#ifndef _MOFSRV_LIB_DAT_H
#define _MOFSRV_LIB_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */


/* ++++++++++++++++++++ Class MoFSrv_IntegralDebS32Data ++++++++++++++++++++++ */
 
/* -- Implementation LVL2 -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_INTEGRALDEBS32DATA_LVL2_
#define _MOFSRV_INTEGRALDEBS32DATA_LVL2_

/* -- Wrapper of Class MoFSrv_IntegralDebS32Data in Addressschema Mo_RamCyclicCheck -- */
typedef struct
{
   /* Variable Heal_S16 */
   sint16 Heal_S16;

   /* Variable tIntglMax_S32 */
   sint32 tIntglMax_S32;

   /* Variable tErrLim_S32 */
   sint32 tErrLim_S32;

} MOFSRV_INTEGRALDEBS32DATA_LVL2;

#endif /* _MOFSRV_INTEGRALDEBS32DATA_LVL2_ */


/* ++++++++++++++++++++ Class MoFSrv_IrrvErrHndlgU32Data ++++++++++++++++++++++ */
 
/* -- Implementation LVL2 -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_IRRVERRHNDLGU32DATA_LVL2_
#define _MOFSRV_IRRVERRHNDLGU32DATA_LVL2_

/* -- Wrapper of Class MoFSrv_IrrvErrHndlgU32Data in Addressschema Mo_RamCyclicCheck -- */
typedef struct
{
   /* Variable irrvMask_U32 */
   uint32 irrvMask_U32;

   /* Variable errMask_U32 */
   uint32 errMask_U32;

   /* Variable ptdMask_U32 */
   uint32 ptdMask_U32;

} MOFSRV_IRRVERRHNDLGU32DATA_LVL2;

#endif /* _MOFSRV_IRRVERRHNDLGU32DATA_LVL2_ */


/* ++++++++++++++++++++ Class MoFSrv_TotLowPassS16Data ++++++++++++++++++++++ */
 
/* -- Implementation IT -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSS16DATA_IT_
#define _MOFSRV_TOTLOWPASSS16DATA_IT_

/* -- Wrapper of Class MoFSrv_TotLowPassS16Data in Addressschema Mo_RamItWord -- */
typedef struct
{
   /* Variable FltLo_U16 */
   uint16 FltLo_U16;

   /* Variable idx_U8 */
   uint8 idx_U8;

   /* Variable totFld_S16 */
   sint16 totFld_S16[8];

} MOFSRV_TOTLOWPASSS16DATA_IT;

#endif /* _MOFSRV_TOTLOWPASSS16DATA_IT_ */

/* -- Implementation LVL2 -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSS16DATA_LVL2_
#define _MOFSRV_TOTLOWPASSS16DATA_LVL2_

/* -- Wrapper of Class MoFSrv_TotLowPassS16Data in Addressschema Mo_RamCyclicCheckWord -- */
typedef struct
{
   /* Variable FltLo_U16 */
   uint16 FltLo_U16;

   /* Variable idx_U8 */
   uint8 idx_U8;

   /* Variable totFld_S16 */
   sint16 totFld_S16[8];

} MOFSRV_TOTLOWPASSS16DATA_LVL2;

#endif /* _MOFSRV_TOTLOWPASSS16DATA_LVL2_ */


/* ++++++++++++++++++++ Class MoFSrv_TotLowPassS16DataCpl ++++++++++++++++++++++ */
 
/* -- Implementation CPL -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSS16DATACPL_CPL_
#define _MOFSRV_TOTLOWPASSS16DATACPL_CPL_

/* -- Wrapper of Class MoFSrv_TotLowPassS16DataCpl in Addressschema Mo_RamCplWord -- */
typedef struct
{
   /* Variable FltLoCpl_U16 */
   uint16 FltLoCpl_U16;

   /* Variable idxCpl_U8 */
   uint8 idxCpl_U8;

   /* Variable totFldCpl_U16 */
   uint16 totFldCpl_U16[8];

} MOFSRV_TOTLOWPASSS16DATACPL_CPL;

#endif /* _MOFSRV_TOTLOWPASSS16DATACPL_CPL_ */


/* ++++++++++++++++++++ Class MoFSrv_TotLowPassS8Data ++++++++++++++++++++++ */
 
/* -- Implementation IT -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSS8DATA_IT_
#define _MOFSRV_TOTLOWPASSS8DATA_IT_

/* -- Wrapper of Class MoFSrv_TotLowPassS8Data in Addressschema Mo_RamItByte -- */
typedef struct
{
   /* Variable FltLo_U8 */
   uint8 FltLo_U8;

   /* Variable idx_U8 */
   uint8 idx_U8;

   /* Variable totFld_S8 */
   sint8 totFld_S8[8];

} MOFSRV_TOTLOWPASSS8DATA_IT;

#endif /* _MOFSRV_TOTLOWPASSS8DATA_IT_ */

/* -- Implementation LVL2 -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSS8DATA_LVL2_
#define _MOFSRV_TOTLOWPASSS8DATA_LVL2_

/* -- Wrapper of Class MoFSrv_TotLowPassS8Data in Addressschema Mo_RamCyclicCheckByte -- */
typedef struct
{
   /* Variable FltLo_U8 */
   uint8 FltLo_U8;

   /* Variable idx_U8 */
   uint8 idx_U8;

   /* Variable totFld_S8 */
   sint8 totFld_S8[8];

} MOFSRV_TOTLOWPASSS8DATA_LVL2;

#endif /* _MOFSRV_TOTLOWPASSS8DATA_LVL2_ */


/* ++++++++++++++++++++ Class MoFSrv_TotLowPassS8DataCpl ++++++++++++++++++++++ */
 
/* -- Implementation CPL -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSS8DATACPL_CPL_
#define _MOFSRV_TOTLOWPASSS8DATACPL_CPL_

/* -- Wrapper of Class MoFSrv_TotLowPassS8DataCpl in Addressschema Mo_RamCplByte -- */
typedef struct
{
   /* Variable FltLoCpl_U8 */
   uint8 FltLoCpl_U8;

   /* Variable idxCpl_U8 */
   uint8 idxCpl_U8;

   /* Variable totFldCpl_U8 */
   uint8 totFldCpl_U8[8];

} MOFSRV_TOTLOWPASSS8DATACPL_CPL;

#endif /* _MOFSRV_TOTLOWPASSS8DATACPL_CPL_ */


/* ++++++++++++++++++++ Class MoFSrv_TotLowPassU16Data ++++++++++++++++++++++ */
 
/* -- Implementation IT -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSU16DATA_IT_
#define _MOFSRV_TOTLOWPASSU16DATA_IT_

/* -- Wrapper of Class MoFSrv_TotLowPassU16Data in Addressschema Mo_RamItWord -- */
typedef struct
{
   /* Variable FltLo_U16 */
   uint16 FltLo_U16;

   /* Variable idx_U8 */
   uint8 idx_U8;

   /* Variable totFld_U16 */
   uint16 totFld_U16[8];

} MOFSRV_TOTLOWPASSU16DATA_IT;

#endif /* _MOFSRV_TOTLOWPASSU16DATA_IT_ */

/* -- Implementation LVL2 -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSU16DATA_LVL2_
#define _MOFSRV_TOTLOWPASSU16DATA_LVL2_

/* -- Wrapper of Class MoFSrv_TotLowPassU16Data in Addressschema Mo_RamCyclicCheckWord -- */
typedef struct
{
   /* Variable FltLo_U16 */
   uint16 FltLo_U16;

   /* Variable idx_U8 */
   uint8 idx_U8;

   /* Variable totFld_U16 */
   uint16 totFld_U16[8];

} MOFSRV_TOTLOWPASSU16DATA_LVL2;

#endif /* _MOFSRV_TOTLOWPASSU16DATA_LVL2_ */


/* ++++++++++++++++++++ Class MoFSrv_TotLowPassU16DataCpl ++++++++++++++++++++++ */
 
/* -- Implementation CPL -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSU16DATACPL_CPL_
#define _MOFSRV_TOTLOWPASSU16DATACPL_CPL_

/* -- Wrapper of Class MoFSrv_TotLowPassU16DataCpl in Addressschema Mo_RamCplWord -- */
typedef struct
{
   /* Variable FltLoCpl_U16 */
   uint16 FltLoCpl_U16;

   /* Variable idxCpl_U8 */
   uint8 idxCpl_U8;

   /* Variable totFldCpl_U16 */
   uint16 totFldCpl_U16[8];

} MOFSRV_TOTLOWPASSU16DATACPL_CPL;

#endif /* _MOFSRV_TOTLOWPASSU16DATACPL_CPL_ */


/* ++++++++++++++++++++ Class MoFSrv_TotLowPassU8Data ++++++++++++++++++++++ */
 
/* -- Implementation IT -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSU8DATA_IT_
#define _MOFSRV_TOTLOWPASSU8DATA_IT_

/* -- Wrapper of Class MoFSrv_TotLowPassU8Data in Addressschema Mo_RamItByte -- */
typedef struct
{
   /* Variable FltLo_U8 */
   uint8 FltLo_U8;

   /* Variable idx_U8 */
   uint8 idx_U8;

   /* Variable totFld_U8 */
   uint8 totFld_U8[8];

} MOFSRV_TOTLOWPASSU8DATA_IT;

#endif /* _MOFSRV_TOTLOWPASSU8DATA_IT_ */

/* -- Implementation LVL2 -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSU8DATA_LVL2_
#define _MOFSRV_TOTLOWPASSU8DATA_LVL2_

/* -- Wrapper of Class MoFSrv_TotLowPassU8Data in Addressschema Mo_RamCyclicCheckByte -- */
typedef struct
{
   /* Variable FltLo_U8 */
   uint8 FltLo_U8;

   /* Variable idx_U8 */
   uint8 idx_U8;

   /* Variable totFld_U8 */
   uint8 totFld_U8[8];

} MOFSRV_TOTLOWPASSU8DATA_LVL2;

#endif /* _MOFSRV_TOTLOWPASSU8DATA_LVL2_ */


/* ++++++++++++++++++++ Class MoFSrv_TotLowPassU8DataCpl ++++++++++++++++++++++ */
 
/* -- Implementation CPL -- */
/* -- OML-N-Class -- */
#ifndef _MOFSRV_TOTLOWPASSU8DATACPL_CPL_
#define _MOFSRV_TOTLOWPASSU8DATACPL_CPL_

/* -- Wrapper of Class MoFSrv_TotLowPassU8DataCpl in Addressschema Mo_RamCplByte -- */
typedef struct
{
   /* Variable FltLoCpl_U8 */
   uint8 FltLoCpl_U8;

   /* Variable idxCpl_U8 */
   uint8 idxCpl_U8;

   /* Variable totFldCpl_U8 */
   uint8 totFldCpl_U8[8];

} MOFSRV_TOTLOWPASSU8DATACPL_CPL;

#endif /* _MOFSRV_TOTLOWPASSU8DATACPL_CPL_ */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
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

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* ########################### */
/* START MoRamCyclicCheckByte  */
/* ########################### */
#pragma section .bss.Mo_RamCyclicCheck aw 


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


#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */


/* ++++++++++++++++++++ Class MoFSrv_IntegralDebS32Data ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_IrrvErrHndlgU32Data ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_TotLowPassS16Data ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_TotLowPassS16DataCpl ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_TotLowPassS8Data ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_TotLowPassS8DataCpl ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_TotLowPassU16Data ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_TotLowPassU16DataCpl ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_TotLowPassU8Data ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class MoFSrv_TotLowPassU8DataCpl ++++++++++++++++++++++ */
/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

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



/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */


#undef _DAT_H
#endif /* _MOFSRV_LIB_DAT_H */
