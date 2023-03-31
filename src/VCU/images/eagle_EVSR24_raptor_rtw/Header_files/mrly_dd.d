#ifndef _MRLY_DD_D
#define _MRLY_DD_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "mrly_dd_dat.h"
/* --- Include Message Declarations from exporting FC SyC_Main ----- */
#include "syc_msg.h"
/* --- Include Message Declarations from exporting FC T15_VD ----- */
#include "t15_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */

/* Exported variables */

/* Imported variables */


/* -- AdS IramI32 ----- */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 

/* Local variables */
static uint32 MRly_TstImpRslt;
static uint32 MRly_TstImpRsltCurr;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */
static uint8 MRly_ctTstImp;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

#ifndef __MRLY_BTSTIMP_EXT__
#define __MRLY_BTSTIMP_EXT__
static _bit MRly_bTstImp;
#define SET_MRly_bTstImp (MRly_bTstImp = TRUE)
#define CLR_MRly_bTstImp (MRly_bTstImp = FALSE)
#define GET_MRly_bTstImp (MRly_bTstImp)
#define PUT_MRly_bTstImp(val) ((val) ? SET_MRly_bTstImp : CLR_MRly_bTstImp)
#endif

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 


/* Class instances */
/* =============== */

/* --------------- */
/* Exported OML-Class MRly_Set,  Instance MRly_Set */
/* --------------- */

/* Instance MRly_Set is not generated because OML-Class has no Attributes -> No wrapper to instantiate */

/* Parameters */
/* ++++++++++ */
/* Definition and initialization of PTA structures,             */
/*    PTA macros for defined parameters and class instances,    */
/*    and RP macros (reference page, only for special use)      */
/* ------------------------------------------------------------ */
/* +++++ Addressschema DataFar +++++ */
/* -- AdS DataFar ----- */
const DATA_MRly_DD_DataFar_t DATA_MRly_DD_DataFar __attribute__
                                       ((asection (".pta_data_MRly_DD_DataFar", "f=a"))) =
{

    /*  ----- Parameter MRly_numTstImp_C ----- */ 
255U,

};

#define __MRly_numTstImp_C (VECT_MRly_DD_DataFar->_MRly_numTstImp_C)
#define RP_MRly_numTstImp_C (DATA_MRly_DD_DataFar._MRly_numTstImp_C)

/* +++++ Addressschema IramI32 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* +++++ Addressschema Xram +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_MRly_numTstImp_C __MRly_numTstImp_C
#define MRly_numTstImp_C __MRly_numTstImp_C


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



/* PERMSPLYSYS_SY Typ=ub */
#ifndef PERMSPLYSYS_SY
  #define PERMSPLYSYS_SY 0L
#elif (PERMSPLYSYS_SY != 0L)
  #error >>>> 'PERMSPLYSYS_SY' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _MRLY_DD_D */
