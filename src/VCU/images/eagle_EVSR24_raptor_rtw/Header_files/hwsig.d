#ifndef _HWSIG_D
#define _HWSIG_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "hwsig_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */
uint16 HWSIG_regSmp480t;
uint8 tsg;

/* Exported variables */
uint16 hwsig_uRawCatSnsr;
uint16 hwsig_uRawCatSnsr2;
uint16 Strt_uFdbk;
uint16 uA016_w;
uint16 uA017_w;
uint16 uA019_w;
uint16 uA038_w;
uint16 uA041_w;
uint16 uA055_w;
uint16 uA062_w;
uint16 uA082_w;
uint16 uA084_w;
uint16 uA097_w;
uint16 udk2p1v_w;
uint16 udk2p1_w;
uint16 udk2p2_w;
uint16 udkp1v_w;
uint16 udkp1_w;
uint16 udkp2_w;
uint16 udsbkv_w;
uint16 udss2_w;
uint16 udss_w;
uint16 udsvd2_w;
uint16 udsvd_w;
uint16 uK013_w;
uint16 uK030_w;
uint16 uK034_w;
uint16 uK035_w;
uint16 uK041_w;
uint16 uK042_w;
uint16 uK045_w;
uint16 uK051_w;
uint16 uK058_w;
uint16 uK065_w;
uint16 uK075_w;
uint16 uK082_w;
uint16 upr1ms2_w;
uint16 utosp_w;
uint8 wtka;
uint16 wtka2_w;
uint16 wtka_w;
uint16 wubr_w;
uint16 wub_w;

/* Imported variables */


/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_hybena;
#define SET_B_hybena (B_hybena = TRUE)
#define CLR_B_hybena (B_hybena = FALSE)
#define GET_B_hybena (B_hybena)
#define PUT_B_hybena(val) ((val) ? SET_B_hybena : CLR_B_hybena)


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
const DATA_HWSIG_DataFar_t DATA_HWSIG_DataFar __attribute__
                                       ((asection (".pta_data_HWSIG_DataFar", "f=a"))) =
{

    /*  ----- Parameter HWSIG_tSmp480_CUR ----- */ 
{ 18, 
 { 0, 216, 431, 647, 862, 1078, 1293, 1509, 1724, 1940, 2155, 2371, 2586, 2802, 3017, 3233, 3448, 3664
 }, 
 { 11, 24, 37, 51, 64, 77, 91, 104, 117, 131, 144, 157, 171, 184, 197, 211, 224, 237
 }
},

};

#define __HWSIG_tSmp480_CUR (VECT_HWSIG_DataFar->_HWSIG_tSmp480_CUR)
#define RP_HWSIG_tSmp480_CUR (DATA_HWSIG_DataFar._HWSIG_tSmp480_CUR)

/* +++++ Addressschema intRam +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KL_HWSIG_tSmp480_CUR kl_ipol_U16U8(__HWSIG_tSmp480_CUR.anzx, __HWSIG_tSmp480_CUR.sstx, __HWSIG_tSmp480_CUR.werte, HWSIG_regSmp480t)
#define HWSIG_tSmp480_CUR(input_x) kl_ipol_U16U8(__HWSIG_tSmp480_CUR.anzx, __HWSIG_tSmp480_CUR.sstx, __HWSIG_tSmp480_CUR.werte, input_x)


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* ECUNUM_SY Typ=sw */
#ifndef ECUNUM_SY
  #define ECUNUM_SY 1L
#elif (ECUNUM_SY != 1L)
  #error >>>> 'ECUNUM_SY' multiple defined
#endif



/* HEVTYP_SY Typ=sw */
#ifndef HEVTYP_SY
  #define HEVTYP_SY 0L
#elif (HEVTYP_SY != 0L)
  #error >>>> 'HEVTYP_SY' multiple defined
#endif



/* INJGDI_NUMPRESCIR_SY Typ=sw */
#ifndef INJGDI_NUMPRESCIR_SY
  #define INJGDI_NUMPRESCIR_SY 0L
#elif (INJGDI_NUMPRESCIR_SY != 0L)
  #error >>>> 'INJGDI_NUMPRESCIR_SY' multiple defined
#endif



/* SY_AEKPBI Typ=ub */
#ifndef SY_AEKPBI
  #define SY_AEKPBI 0L
#elif (SY_AEKPBI != 0L)
  #error >>>> 'SY_AEKPBI' multiple defined
#endif



/* SY_ANZEKP Typ=ub */
#ifndef SY_ANZEKP
  #define SY_ANZEKP 0L
#elif (SY_ANZEKP != 0L)
  #error >>>> 'SY_ANZEKP' multiple defined
#endif



/* SY_BKV Typ=sw */
#ifndef SY_BKV
  #define SY_BKV 0L
#elif (SY_BKV != 0L)
  #error >>>> 'SY_BKV' multiple defined
#endif



/* SY_DMDZAG Typ=sw */
#ifndef SY_DMDZAG
  #define SY_DMDZAG 0L
#elif (SY_DMDZAG != 0L)
  #error >>>> 'SY_DMDZAG' multiple defined
#endif



/* SY_DSS Typ=ub */
#ifndef SY_DSS
  #define SY_DSS 0L
#elif (SY_DSS != 0L)
  #error >>>> 'SY_DSS' multiple defined
#endif



/* SY_DSS2 Typ=ub */
#ifndef SY_DSS2
  #define SY_DSS2 0L
#elif (SY_DSS2 != 0L)
  #error >>>> 'SY_DSS2' multiple defined
#endif



/* SY_DSVDK Typ=ub */
#ifndef SY_DSVDK
  #define SY_DSVDK 0L
#elif (SY_DSVDK != 0L)
  #error >>>> 'SY_DSVDK' multiple defined
#endif



/* SY_DSVDK2 Typ=ub */
#ifndef SY_DSVDK2
  #define SY_DSVDK2 0L
#elif (SY_DSVDK2 != 0L)
  #error >>>> 'SY_DSVDK2' multiple defined
#endif



/* SY_DVEANZ Typ=ub */
#ifndef SY_DVEANZ
  #define SY_DVEANZ 2L
#elif (SY_DVEANZ != 2L)
  #error >>>> 'SY_DVEANZ' multiple defined
#endif



/* SY_TKA Typ=ub */
#ifndef SY_TKA
  #define SY_TKA 1L
#elif (SY_TKA != 1L)
  #error >>>> 'SY_TKA' multiple defined
#endif



/* SY_TOSPCN Typ=sw */
#ifndef SY_TOSPCN
  #define SY_TOSPCN 0L
#elif (SY_TOSPCN != 0L)
  #error >>>> 'SY_TOSPCN' multiple defined
#endif



/* VEHVRNT_SC Typ=ub */
#ifndef VEHVRNT_SC
  #define VEHVRNT_SC 50L
#elif (VEHVRNT_SC != 50L)
  #error >>>> 'VEHVRNT_SC' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _HWSIG_D */
