#ifndef _MOEXE_CO_DAT_H
#define _MOEXE_CO_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant POSTDRV_SOFTRST_SY */


/* POSTDRV_SOFTRST_SY Typ=ub */
#ifndef POSTDRV_SOFTRST_SY
  #define POSTDRV_SOFTRST_SY 0L
#elif (POSTDRV_SOFTRST_SY != 0L)
  #error >>>> 'POSTDRV_SOFTRST_SY' multiple defined
#endif


/* Local System Constant MOEXE_CO_NUM_CPUSEQ */


/* MOEXE_CO_NUM_CPUSEQ Typ=ul */
#ifndef MOEXE_CO_NUM_CPUSEQ
  #define MOEXE_CO_NUM_CPUSEQ 1ul
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */

/* ########################### */
/* START MoRamCyclicCheckByte  */
/* ########################### */
#pragma section .bss.Mo_RamCyclicCheck aw 


/* Exported Variable: MoExe_ctCyc */
#ifdef _DAT_H
#ifndef __MOEXE_CTCYC_EXT__
#define __MOEXE_CTCYC_EXT__
/* N_DclFm: MoExe_ctCyc */
extern uint8 MoExe_ctCyc
;
#endif
#endif


#pragma section   
/* ########################### */
/* END MoRamCyclicCheckByte    */
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

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema Mo_RamCyclicCheckByte +++++ */


#undef _DAT_H
#endif /* _MOEXE_CO_DAT_H */
