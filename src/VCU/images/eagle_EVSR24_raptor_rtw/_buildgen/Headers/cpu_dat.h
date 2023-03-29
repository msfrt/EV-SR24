#ifndef _CPU_DAT_H
#define _CPU_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter Cpu_swtClrEnvRAMVals_C */
#ifndef _Cpu_swtClrEnvRAMVals_C_DEF
#define _Cpu_swtClrEnvRAMVals_C_DEF
#define Cpu_swtClrEnvRAMVals_CM Cpu_swtClrEnvRAMVals_C
#endif /* _Cpu_swtClrEnvRAMVals_C_DEF */

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
/* +++++ Addressschema extRam +++++ */


/* Local Variable: Cpu_rCurCSACons_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __CPU_RCURCSACONS_MP_EXT__
#define __CPU_RCURCSACONS_MP_EXT__
extern uint16 Cpu_rCurCSACons_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Cpu_rCurSysStackCons_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __CPU_RCURSYSSTACKCONS_MP_EXT__
#define __CPU_RCURSYSSTACKCONS_MP_EXT__
extern uint16 Cpu_rCurSysStackCons_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Cpu_rCurUsrStackCons_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __CPU_RCURUSRSTACKCONS_MP_EXT__
#define __CPU_RCURUSRSTACKCONS_MP_EXT__
extern uint16 Cpu_rCurUsrStackCons_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Cpu_rMaxCSACons_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __CPU_RMAXCSACONS_MP_EXT__
#define __CPU_RMAXCSACONS_MP_EXT__
extern uint16 Cpu_rMaxCSACons_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Cpu_rMaxSysStackCons_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __CPU_RMAXSYSSTACKCONS_MP_EXT__
#define __CPU_RMAXSYSSTACKCONS_MP_EXT__
extern uint16 Cpu_rMaxSysStackCons_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif


/* Local Variable: Cpu_rMaxUsrStackCons_mp */
/* Mp_u16( N_DclFm ) */
 
#ifdef _DAT_H
#ifndef __CPU_RMAXUSRSTACKCONS_MP_EXT__
#define __CPU_RMAXUSRSTACKCONS_MP_EXT__
extern uint16 Cpu_rMaxUsrStackCons_mp    __attribute__ ((asection (".bss.mpram.a2","f=aw")));
#endif
#endif



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


/* +++++ Addressschema dir +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_CPU_DIR_T_DEF
#define DATA_CPU_DIR_T_DEF
typedef struct
{
    /* ----- Parameter Cpu_swtClrEnvRAMVals_C ----- */
    uint8 _Cpu_swtClrEnvRAMVals_C;
} DATA_Cpu_dir_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_Cpu_dir_t DATA_Cpu_dir
    __attribute__ ((asection (".pta_datadir_Cpu","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_Cpu_dir_t * const VECT_Cpu_dir
    __attribute__ ((asection (".sdata.pta_vectdir_Cpu","f=as")));
#endif

/* +++++ Addressschema extRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema dir +++++ */

/* -- Macro for local Parameter Cpu_swtClrEnvRAMVals_C -- */
#ifndef Cpu_swtClrEnvRAMVals_C
#define Cpu_swtClrEnvRAMVals_C (VECT_Cpu_dir->_Cpu_swtClrEnvRAMVals_C)
#endif

#ifndef RP_Cpu_swtClrEnvRAMVals_C
#define RP_Cpu_swtClrEnvRAMVals_C (DATA_Cpu_dir._Cpu_swtClrEnvRAMVals_C)
#endif

#ifndef __Cpu_swtClrEnvRAMVals_C
#define __Cpu_swtClrEnvRAMVals_C (VECT_Cpu_dir->_Cpu_swtClrEnvRAMVals_C)
#endif

/* +++++ Addressschema extRam +++++ */


#undef _DAT_H
#endif /* _CPU_DAT_H */
