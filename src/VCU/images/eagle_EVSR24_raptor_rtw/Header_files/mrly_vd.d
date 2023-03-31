#ifndef _MRLY_VD_D
#define _MRLY_VD_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "mrly_vd_dat.h"
/* --- Include Message Declarations from own FC MRly_VD ----- */
#include "mrly_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS IramI32 ----- */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 

/* Local variables */
static uint32 MRly_ErlyClrdRam_mp;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramNoReIniI8 ----- */
/* IramNoReIniI8Header */
#pragma section .sbss.a1 aws 

/* Local variables */
static uint8 MRly_ctErlyOpng_mp;
static uint8 MRly_ctStk_mp;
static uint8 MRly_stEep;
static uint8 MRly_stEep_mp;
static uint8 MRly_stOrder;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramNvI32 ----- */
/* IramNvI32Header */
#pragma section .bss.envram.a4 aw 

/* Local variables */
static uint32 MRly_WaitStk;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramNvI8 ----- */
/* IramNvI8Header */
#pragma section .bss.envram.a1 aw 

/* Local variables */
static uint8 MRly_EepInit;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS MsgRam ----- */
/* MsgRamHeader */
#pragma section .sbss aws 

/* Local variables */

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS MsgRamI16 ----- */
/* MsgRamI16Header */
#pragma section .sbss.a2 aws 

/* Local variables */

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 


/* Class instances */
/* =============== */

/* -------------------- */
/* Referenced OML-Class MRly_Set,  Instance MRly_Set */
/* -------------------- */

/* Instance MRly_Set is not generated because OML-Class has no Attributes -> No wrapper to instantiate */


/* --------------- */
/* Exported OML-Class MRly_VD_Pub,  Instance MRly_VD */
/* --------------- */

/* Instance MRly_VD is not generated because OML-Class has no Attributes -> No wrapper to instantiate */

/* Parameters */
/* ++++++++++ */
/* Definition and initialization of PTA structures,             */
/*    PTA macros for defined parameters and class instances,    */
/*    and RP macros (reference page, only for special use)      */
/* ------------------------------------------------------------ */
/* +++++ Addressschema DataFar +++++ */
/* -- AdS DataFar ----- */
const DATA_MRly_VD_DataFar_t DATA_MRly_VD_DataFar __attribute__
                                       ((asection (".pta_data_MRly_VD_DataFar", "f=a"))) =
{

    /*  ----- Parameter MRly_debCtrHeal_ErlyOpng_C ----- */ 
3U,


    /*  ----- Parameter MRly_debCtrHeal_Stk_C ----- */ 
2U,


    /*  ----- Parameter MRly_debCtr_ErlyOpng_C ----- */ 
3U,


    /*  ----- Parameter MRly_debCtr_Stk_C ----- */ 
2U,


    /*  ----- Parameter MRly_WaitStk_C ----- */ 
70U,

};

#define __MRly_debCtrHeal_ErlyOpng_C (VECT_MRly_VD_DataFar->_MRly_debCtrHeal_ErlyOpng_C)
#define RP_MRly_debCtrHeal_ErlyOpng_C (DATA_MRly_VD_DataFar._MRly_debCtrHeal_ErlyOpng_C)
#define __MRly_debCtrHeal_Stk_C (VECT_MRly_VD_DataFar->_MRly_debCtrHeal_Stk_C)
#define RP_MRly_debCtrHeal_Stk_C (DATA_MRly_VD_DataFar._MRly_debCtrHeal_Stk_C)
#define __MRly_debCtr_ErlyOpng_C (VECT_MRly_VD_DataFar->_MRly_debCtr_ErlyOpng_C)
#define RP_MRly_debCtr_ErlyOpng_C (DATA_MRly_VD_DataFar._MRly_debCtr_ErlyOpng_C)
#define __MRly_debCtr_Stk_C (VECT_MRly_VD_DataFar->_MRly_debCtr_Stk_C)
#define RP_MRly_debCtr_Stk_C (DATA_MRly_VD_DataFar._MRly_debCtr_Stk_C)
#define __MRly_WaitStk_C (VECT_MRly_VD_DataFar->_MRly_WaitStk_C)
#define RP_MRly_WaitStk_C (DATA_MRly_VD_DataFar._MRly_WaitStk_C)

/* +++++ Addressschema IramI32 +++++ */
/* +++++ Addressschema IramNoReIniI8 +++++ */
/* +++++ Addressschema IramNvI32 +++++ */
/* +++++ Addressschema IramNvI8 +++++ */
/* +++++ Addressschema MsgRam +++++ */
/* +++++ Addressschema MsgRamI16 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_MRly_debCtrHeal_ErlyOpng_C __MRly_debCtrHeal_ErlyOpng_C
#define MRly_debCtrHeal_ErlyOpng_C __MRly_debCtrHeal_ErlyOpng_C

#define KW_MRly_debCtrHeal_Stk_C __MRly_debCtrHeal_Stk_C
#define MRly_debCtrHeal_Stk_C __MRly_debCtrHeal_Stk_C

#define KW_MRly_debCtr_ErlyOpng_C __MRly_debCtr_ErlyOpng_C
#define MRly_debCtr_ErlyOpng_C __MRly_debCtr_ErlyOpng_C

#define KW_MRly_debCtr_Stk_C __MRly_debCtr_Stk_C
#define MRly_debCtr_Stk_C __MRly_debCtr_Stk_C

#define KW_MRly_WaitStk_C __MRly_WaitStk_C
#define MRly_WaitStk_C __MRly_WaitStk_C


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* MRLY_DIAG_ELEC_SY Typ=ub */
#ifndef MRLY_DIAG_ELEC_SY
  #define MRLY_DIAG_ELEC_SY 1L
#elif (MRLY_DIAG_ELEC_SY != 1L)
  #error >>>> 'MRLY_DIAG_ELEC_SY' multiple defined
#endif



/* MRLY_DIAG_MECH_SY Typ=ub */
#ifndef MRLY_DIAG_MECH_SY
  #define MRLY_DIAG_MECH_SY 1L
#elif (MRLY_DIAG_MECH_SY != 1L)
  #error >>>> 'MRLY_DIAG_MECH_SY' multiple defined
#endif



/* PERMSPLYSYS_SY Typ=ub */
#ifndef PERMSPLYSYS_SY
  #define PERMSPLYSYS_SY 0L
#elif (PERMSPLYSYS_SY != 0L)
  #error >>>> 'PERMSPLYSYS_SY' multiple defined
#endif



/* POSTDRV_SOFTRST_SY Typ=ub */
#ifndef POSTDRV_SOFTRST_SY
  #define POSTDRV_SOFTRST_SY 0L
#elif (POSTDRV_SOFTRST_SY != 0L)
  #error >>>> 'POSTDRV_SOFTRST_SY' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _MRLY_VD_D */
