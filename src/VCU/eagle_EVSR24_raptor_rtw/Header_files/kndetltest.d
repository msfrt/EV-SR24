#ifndef _KNDETLTEST_D
#define _KNDETLTEST_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "kndetltest_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS IramI16 ----- */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 

/* Local variables */
static sint16 KnDet_vValDia;

/* Exported variables */

/* Imported variables */

#ifndef __KNDET_VNEWINTEGDIA_EXT__
#define __KNDET_VNEWINTEGDIA_EXT__
extern const sint16 KnDet_vNewIntegDia;
#endif


/* Footer */
#pragma section 
/* -- AdS IramI32 ----- */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 

/* Local variables */
static uint32 KnDet_DebDiagVal1;
static uint32 KnDet_DebDiagVal2;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */

/* Exported variables */
uint8 KnDet_DiaRes;

/* Imported variables */

#ifndef __KNDET_CTDIA_EXT__
#define __KNDET_CTDIA_EXT__
extern const uint8 KnDet_ctDia;
#endif

#ifndef __KNDET_SENSMODE_EXT__
#define __KNDET_SENSMODE_EXT__
extern const uint8 KnDet_SensMode;
#endif

#ifndef __KNDET_STDIACTL_EXT__
#define __KNDET_STDIACTL_EXT__
extern const uint8 KnDet_stDiaCtl;
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

#ifndef __KNDET_FLGSNSRMAXERR_EXT__
#define __KNDET_FLGSNSRMAXERR_EXT__
static _bit KnDet_flgSnsrMaxErr;
#define SET_KnDet_flgSnsrMaxErr (KnDet_flgSnsrMaxErr = TRUE)
#define CLR_KnDet_flgSnsrMaxErr (KnDet_flgSnsrMaxErr = FALSE)
#define GET_KnDet_flgSnsrMaxErr (KnDet_flgSnsrMaxErr)
#define PUT_KnDet_flgSnsrMaxErr(val) ((val) ? SET_KnDet_flgSnsrMaxErr : CLR_KnDet_flgSnsrMaxErr)
#endif

#ifndef __KNDET_FLGSNSRMINERR_EXT__
#define __KNDET_FLGSNSRMINERR_EXT__
static _bit KnDet_flgSnsrMinErr;
#define SET_KnDet_flgSnsrMinErr (KnDet_flgSnsrMinErr = TRUE)
#define CLR_KnDet_flgSnsrMinErr (KnDet_flgSnsrMinErr = FALSE)
#define GET_KnDet_flgSnsrMinErr (KnDet_flgSnsrMinErr)
#define PUT_KnDet_flgSnsrMinErr(val) ((val) ? SET_KnDet_flgSnsrMinErr : CLR_KnDet_flgSnsrMinErr)
#endif

/* Exported variables */
_bit KnDet_bDiaDeb;
#define SET_KnDet_bDiaDeb (KnDet_bDiaDeb = TRUE)
#define CLR_KnDet_bDiaDeb (KnDet_bDiaDeb = FALSE)
#define GET_KnDet_bDiaDeb (KnDet_bDiaDeb)
#define PUT_KnDet_bDiaDeb(val) ((val) ? SET_KnDet_bDiaDeb : CLR_KnDet_bDiaDeb)


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
const DATA_KnDetLTest_DataFar_t DATA_KnDetLTest_DataFar __attribute__
                                       ((asection (".pta_data_KnDetLTest_DataFar", "f=a"))) =
{

    /*  ----- Parameter KnDet_SensMaxErr_C ----- */ 
9930,


    /*  ----- Parameter KnDet_SensMinErr_C ----- */ 
-6951,

};

#define __KnDet_SensMaxErr_C (VECT_KnDetLTest_DataFar->_KnDet_SensMaxErr_C)
#define RP_KnDet_SensMaxErr_C (DATA_KnDetLTest_DataFar._KnDet_SensMaxErr_C)
#define __KnDet_SensMinErr_C (VECT_KnDetLTest_DataFar->_KnDet_SensMinErr_C)
#define RP_KnDet_SensMinErr_C (DATA_KnDetLTest_DataFar._KnDet_SensMinErr_C)

/* +++++ Addressschema IramI16 +++++ */
/* +++++ Addressschema IramI32 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_KnDet_SensMaxErr_C __KnDet_SensMaxErr_C
#define KnDet_SensMaxErr_C __KnDet_SensMaxErr_C

#define KW_KnDet_SensMinErr_C __KnDet_SensMinErr_C
#define KnDet_SensMinErr_C __KnDet_SensMinErr_C


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



/* SY_KSZA Typ=sw */
#ifndef SY_KSZA
  #define SY_KSZA 4L
#elif (SY_KSZA != 4L)
  #error >>>> 'SY_KSZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _KNDETLTEST_D */
