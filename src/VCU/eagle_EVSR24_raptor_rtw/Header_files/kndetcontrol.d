#ifndef _KNDETCONTROL_D
#define _KNDETCONTROL_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "kndetcontrol_dat.h"
/* --- Funktion SWAdp ----- */
#include "swadp_dat.h"
/* --- Include Message Declarations from exporting FC Epm_OpMode ----- */
#include "epm_msg.h"
/* --- Include Message Declarations from exporting FC SyC_Main ----- */
#include "syc_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */

/* Exported variables */

/* Imported variables */


/* -- AdS IramI16 ----- */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 

/* Local variables */
static uint16 KnDet_numFltNewTmp;
static uint16 KnDet_stClb;
static uint16 KnDet_numValMeasWinEst;
static uint16 KnDet_numValMeasWinTmp;
static sint16 KnDet_phiMeasWinBgn;
static sint16 KnDet_phiMeasWinLngth;
static sint16 KnDet_phiMeasWinLngthOld;

/* Exported variables */
uint16 KnDet_numFltNew;

/* Imported variables */

#ifndef __FMFKRNEW_W_EXT__
#define __FMFKRNEW_W_EXT__
extern const sint16 fmfkrnew_w;
#endif

#ifndef __WMFASEG_EXT__
#define __WMFASEG_EXT__
extern const sint16 wmfaseg;
#endif

#ifndef __WMFLCD_EXT__
#define __WMFLCD_EXT__
extern const sint16 wmflcd;
#endif


/* Footer */
#pragma section 
/* -- AdS IramI32 ----- */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 

/* Local variables */
static uint32 KnDet_stGetDigRawVal;

/* Exported variables */
uint32 KnDet_IntegWinEnd[3];
uint32 KnDet_stSigEvalCurrCmb;

/* Imported variables */

#ifndef __KNDET_NUMVALMEASWIN_EXT__
#define __KNDET_NUMVALMEASWIN_EXT__
extern const uint32 KnDet_numValMeasWin;
#endif

#ifndef __KNDET_VNEWINTEGWINEND_EXT__
#define __KNDET_VNEWINTEGWINEND_EXT__
extern uint32 KnDet_vNewIntegWinEnd[3];
#endif


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */

#ifndef __KNDET_NUMSENSPORT_EXT__
#define __KNDET_NUMSENSPORT_EXT__
static uint8 KnDet_numSensPort[4];
#endif
static uint8 KnDet_ctCylTmp;
static uint8 KnDet_HwDiaMode;
static uint8 KnDet_MaskPortCtrl;
static uint8 KnDet_stMeasWin;
static uint8 KnDet_stOfsClb;
static uint8 KnDet_stSubTmp;

/* Exported variables */
uint8 KnDet_ctDia;
uint8 KnDet_ctIntegRsltInvld;
uint8 KnDet_numSensDia;
uint8 KnDet_ReqSigEvalMode;
uint8 KnDet_RlsChkMeasWin;
uint8 KnDet_SensMode;
uint8 KnDet_stDiaCtl;

/* Imported variables */

#ifndef __DKRKSANF_EXT__
#define __DKRKSANF_EXT__
extern const uint8 dkrksanf;
#endif

#ifndef __KNDET_CTCYL_EXT__
#define __KNDET_CTCYL_EXT__
extern const uint8 KnDet_ctCyl;
#endif

#ifndef __KNDET_STSIGEVAL_EXT__
#define __KNDET_STSIGEVAL_EXT__
extern const uint8 KnDet_stSigEval;
#endif

#ifndef __KSNEW_EXT__
#define __KSNEW_EXT__
extern const uint8 ksnew;
#endif

#ifndef __VKR_EXT__
#define __VKR_EXT__
extern uint8 vkr[8];
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit KnDet_bStMeasWin;
#define SET_KnDet_bStMeasWin (KnDet_bStMeasWin = TRUE)
#define CLR_KnDet_bStMeasWin (KnDet_bStMeasWin = FALSE)
#define GET_KnDet_bStMeasWin (KnDet_bStMeasWin)
#define PUT_KnDet_bStMeasWin(val) ((val) ? SET_KnDet_bStMeasWin : CLR_KnDet_bStMeasWin)


/* Imported variables */

#ifndef __KNDET_BDIADEB_EXT__
#define __KNDET_BDIADEB_EXT__
extern const _bit KnDet_bDiaDeb;
#define GET_KnDet_bDiaDeb (KnDet_bDiaDeb)
#endif


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
const DATA_KnDetControl_DataFar_t DATA_KnDetControl_DataFar __attribute__
                                       ((asection (".pta_data_KnDetControl_DataFar", "f=a"))) =
{

    /*  ----- Parameter KnDet_ThresNGradMeasWin_C ----- */ 
2000,


    /*  ----- Parameter KnDet_ThresNumMeasWin_C ----- */ 
30,

};

#define __KnDet_ThresNGradMeasWin_C (VECT_KnDetControl_DataFar->_KnDet_ThresNGradMeasWin_C)
#define RP_KnDet_ThresNGradMeasWin_C (DATA_KnDetControl_DataFar._KnDet_ThresNGradMeasWin_C)
#define __KnDet_ThresNumMeasWin_C (VECT_KnDetControl_DataFar->_KnDet_ThresNumMeasWin_C)
#define RP_KnDet_ThresNumMeasWin_C (DATA_KnDetControl_DataFar._KnDet_ThresNumMeasWin_C)

/* +++++ Addressschema IramI16 +++++ */
/* +++++ Addressschema IramI32 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_KnDet_ThresNGradMeasWin_C __KnDet_ThresNGradMeasWin_C
#define KnDet_ThresNGradMeasWin_C __KnDet_ThresNGradMeasWin_C

#define KW_KnDet_ThresNumMeasWin_C __KnDet_ThresNumMeasWin_C
#define KnDet_ThresNumMeasWin_C __KnDet_ThresNumMeasWin_C


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* -- AdS DataFar ----- */
#define __SENZZYL (VECT_SWAdp_DataFar->_SENZZYL)
#define RP_SENZZYL (DATA_SWAdp_DataFar._SENZZYL)

/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* -- AdS DataFar ----- */
#define KWB_SENZZYL(index) __SENZZYL[index]
#define SENZZYL(index) __SENZZYL[index]
#define SIZE_SENZZYL (sizeof(__SENZZYL[0]) * 8)
#define ADR_SENZZYL __SENZZYL

/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* KNKMUXPORTACTVD_SC Typ=sw */
#ifndef KNKMUXPORTACTVD_SC
  #define KNKMUXPORTACTVD_SC 2L
#elif (KNKMUXPORTACTVD_SC != 2L)
  #error >>>> 'KNKMUXPORTACTVD_SC' multiple defined
#endif



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



/* SY_KS1 Typ=ub */
#ifndef SY_KS1
  #define SY_KS1 1L
#elif (SY_KS1 != 1L)
  #error >>>> 'SY_KS1' multiple defined
#endif



/* SY_KS2 Typ=ub */
#ifndef SY_KS2
  #define SY_KS2 1L
#elif (SY_KS2 != 1L)
  #error >>>> 'SY_KS2' multiple defined
#endif



/* SY_KS3 Typ=ub */
#ifndef SY_KS3
  #define SY_KS3 2L
#elif (SY_KS3 != 2L)
  #error >>>> 'SY_KS3' multiple defined
#endif



/* SY_KS4 Typ=ub */
#ifndef SY_KS4
  #define SY_KS4 3L
#elif (SY_KS4 != 3L)
  #error >>>> 'SY_KS4' multiple defined
#endif



/* SY_KSENCHN Typ=ub */
#ifndef SY_KSENCHN
  #define SY_KSENCHN 3L
#elif (SY_KSENCHN != 3L)
  #error >>>> 'SY_KSENCHN' multiple defined
#endif



/* SY_KSZA Typ=sw */
#ifndef SY_KSZA
  #define SY_KSZA 4L
#elif (SY_KSZA != 4L)
  #error >>>> 'SY_KSZA' multiple defined
#endif



/* SY_ZYLZA Typ=sw */
#ifndef SY_ZYLZA
  #define SY_ZYLZA 8L
#elif (SY_ZYLZA != 8L)
  #error >>>> 'SY_ZYLZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _KNDETCONTROL_D */
