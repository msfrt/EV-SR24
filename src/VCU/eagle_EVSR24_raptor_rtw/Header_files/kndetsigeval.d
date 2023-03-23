#ifndef _KNDETSIGEVAL_D
#define _KNDETSIGEVAL_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "kndetsigeval_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS IramI16 ----- */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 

/* Local variables */

/* Exported variables */
sint16 KnDet_vNewIntegDia;

/* Imported variables */

#ifndef __KNDET_NUMFLTNEW_EXT__
#define __KNDET_NUMFLTNEW_EXT__
extern const uint16 KnDet_numFltNew;
#endif


/* Footer */
#pragma section 
/* -- AdS IramI32 ----- */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 

/* Local variables */

/* Exported variables */
uint32 KnDet_numValMeasWin;
uint32 KnDet_vNewIntegWinEnd[3];

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */

/* Exported variables */
uint8 KnDet_stSigEval;

/* Imported variables */

#ifndef __KNDET_REQSIGEVALMODE_EXT__
#define __KNDET_REQSIGEVALMODE_EXT__
extern const uint8 KnDet_ReqSigEvalMode;
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

#ifndef __KNDET_BENASIGEVAL_EXT__
#define __KNDET_BENASIGEVAL_EXT__
static _bit KnDet_bEnaSigEval;
#define SET_KnDet_bEnaSigEval (KnDet_bEnaSigEval = TRUE)
#define CLR_KnDet_bEnaSigEval (KnDet_bEnaSigEval = FALSE)
#define GET_KnDet_bEnaSigEval (KnDet_bEnaSigEval)
#define PUT_KnDet_bEnaSigEval(val) ((val) ? SET_KnDet_bEnaSigEval : CLR_KnDet_bEnaSigEval)
#endif

/* Exported variables */
_bit KnDet_bNewEval;
#define SET_KnDet_bNewEval (KnDet_bNewEval = TRUE)
#define CLR_KnDet_bNewEval (KnDet_bNewEval = FALSE)
#define GET_KnDet_bNewEval (KnDet_bNewEval)
#define PUT_KnDet_bNewEval(val) ((val) ? SET_KnDet_bNewEval : CLR_KnDet_bNewEval)


/* Imported variables */


/* Footer */
#pragma section 


/* Class instances */
/* =============== */

/* Parameters */
/* ++++++++++ */
/* Definition and initialization of PTA structures,             */
/*    PTA macros for defined parameters and class instances,    */
/*    and RP macros (reference page, only for special use)      */
/* ------------------------------------------------------------ */
/* +++++ Addressschema DataFar +++++ */
/* -- AdS DataFar ----- */
const DATA_KnDetSigEval_DataFar_t DATA_KnDetSigEval_DataFar __attribute__
                                       ((asection (".pta_data_KnDetSigEval_DataFar", "f=a"))) =
{

    /*  ----- Parameter KnDet_CoefFlt_CA ----- */ 
{25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25, 25, 25,
 25, 25, 25, 25}, 

};

#define __KnDet_CoefFlt_CA (VECT_KnDetSigEval_DataFar->_KnDet_CoefFlt_CA)
#define RP_KnDet_CoefFlt_CA (DATA_KnDetSigEval_DataFar._KnDet_CoefFlt_CA)

/* +++++ Addressschema IramI16 +++++ */
/* +++++ Addressschema IramI32 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KWB_KnDet_CoefFlt_CA(index) __KnDet_CoefFlt_CA[index]
#define KnDet_CoefFlt_CA(index) __KnDet_CoefFlt_CA[index]
#define SIZE_KnDet_CoefFlt_CA (sizeof(__KnDet_CoefFlt_CA[0]) * 292)
#define ADR_KnDet_CoefFlt_CA __KnDet_CoefFlt_CA


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* POSTDRV_SOFTRST_SY Typ=ub */
#ifndef POSTDRV_SOFTRST_SY
  #define POSTDRV_SOFTRST_SY 0L
#elif (POSTDRV_SOFTRST_SY != 0L)
  #error >>>> 'POSTDRV_SOFTRST_SY' multiple defined
#endif



/* SY_KRZMF Typ=ub */
#ifndef SY_KRZMF
  #define SY_KRZMF 0L
#elif (SY_KRZMF != 0L)
  #error >>>> 'SY_KRZMF' multiple defined
#endif



/* SY_KSENCHN Typ=ub */
#ifndef SY_KSENCHN
  #define SY_KSENCHN 3L
#elif (SY_KSENCHN != 3L)
  #error >>>> 'SY_KSENCHN' multiple defined
#endif



/* SY_KSENFLT Typ=ub */
#ifndef SY_KSENFLT
  #define SY_KSENFLT 10L
#elif (SY_KSENFLT != 10L)
  #error >>>> 'SY_KSENFLT' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _KNDETSIGEVAL_D */
