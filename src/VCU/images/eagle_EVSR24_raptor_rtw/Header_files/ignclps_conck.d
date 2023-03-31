#ifndef _IGNCLPS_CONCK_D
#define _IGNCLPS_CONCK_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "ignclps_conck_dat.h"
/* --- Include Message Declarations from exporting FC Epm_Spd ----- */
#include "epm_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */
#define SET_IgnClPs_bConf ((IgnClPs_Conck200LokBitsKoop0 |= (b_BBasT)1u << 2))
#define CLR_IgnClPs_bConf ((IgnClPs_Conck200LokBitsKoop0 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_IgnClPs_bConf ((IgnClPs_Conck200LokBitsKoop0 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_IgnClPs_bConf(val) ((val) ? SET_IgnClPs_bConf : CLR_IgnClPs_bConf)

#define SET_IgnClPs_bHwReset ((IgnClPs_Conck200LokBitsKoop0 |= (b_BBasT)1u << 0))
#define CLR_IgnClPs_bHwReset ((IgnClPs_Conck200LokBitsKoop0 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_IgnClPs_bHwReset ((IgnClPs_Conck200LokBitsKoop0 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_IgnClPs_bHwReset(val) ((val) ? SET_IgnClPs_bHwReset : CLR_IgnClPs_bHwReset)

#define SET_IgnClPs_bHwReset_old ((IgnClPs_Conck200LokBitsKoop0 |= (b_BBasT)1u << 1))
#define CLR_IgnClPs_bHwReset_old ((IgnClPs_Conck200LokBitsKoop0 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_IgnClPs_bHwReset_old ((IgnClPs_Conck200LokBitsKoop0 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_IgnClPs_bHwReset_old(val) ((val) ? SET_IgnClPs_bHwReset_old : CLR_IgnClPs_bHwReset_old)

#define SET_IgnClPs_bOscCal ((IgnClPs_Conck200LokBitsKoop0 |= (b_BBasT)1u << 3))
#define CLR_IgnClPs_bOscCal ((IgnClPs_Conck200LokBitsKoop0 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_IgnClPs_bOscCal ((IgnClPs_Conck200LokBitsKoop0 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_IgnClPs_bOscCal(val) ((val) ? SET_IgnClPs_bOscCal : CLR_IgnClPs_bOscCal)


/* Exported variables */

/* Imported variables */


/* -- AdS IramI16 ----- */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 

/* Local variables */
uint16 IgnClPs_cntOscCal_u16;

#ifndef __IGNCLPS_INITVAL_AU16_EXT__
#define __IGNCLPS_INITVAL_AU16_EXT__
static uint16 IgnClPs_Initval_au16[2];
#endif

/* Exported variables */
uint16 IgnClPs_cntIgnOld_u16;
uint16 IgnClPs_cntIgn_u16;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI32 ----- */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 

/* Local variables */

#ifndef __IGNCLPS_IDENTVAL_AU32_EXT__
#define __IGNCLPS_IDENTVAL_AU32_EXT__
static uint32 IgnClPs_Identval_au32[2];
#endif
uint32 IgnClPs_Initreg_au32[2];

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */
uint8 IgnClPs_Clock_a8[2];
uint8 IgnClPs_Conck200LokBitsKoop0;
uint8 IgnClPs_ConckLokBitsKoop0;

#ifndef __IGNCLPS_NUMCONF_AU8_EXT__
#define __IGNCLPS_NUMCONF_AU8_EXT__
static uint8 IgnClPs_numConf_au8[2];
#endif

#ifndef __IGNCLPS_NUMOSC_AU8_EXT__
#define __IGNCLPS_NUMOSC_AU8_EXT__
static uint8 IgnClPs_numOsc_au8[2];
#endif
static uint8 MoCSOP_stRdy_old;
uint8 IgnClPs_Osc_a8[2];

/* Exported variables */
uint8 IgnClPs_errConf_u8;
uint8 IgnClPs_errOsc_u8;
uint8 IgnClPs_numClErr_a8[8];
uint8 IgnClPs_numDiagReg_au8[8];
uint8 IgnClPs_numIdErr_u8;
uint8 IgnClPs_numIgnCh_a8[8];
uint8 IgnClPs_numIgnIc_a8[8];
uint8 IgnClPs_numPsErr_a8[8];
uint8 IgnClPs_numSpiErr_u8;

/* Imported variables */

#ifndef __UBSQ_EXT__
#define __UBSQ_EXT__
extern const uint8 ubsq;
#endif


/* Footer */
#pragma section 
/* -- AdS IramNoReIniI8 ----- */
/* IramNoReIniI8Header */
#pragma section .sbss.a1 aws 

/* Local variables */

/* Exported variables */

/* Imported variables */

#ifndef __MOCSOP_STRDY_EXT__
#define __MOCSOP_STRDY_EXT__
extern const uint8 MoCSOP_stRdy;
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_ignhwr;
#define SET_B_ignhwr (B_ignhwr = TRUE)
#define CLR_B_ignhwr (B_ignhwr = FALSE)
#define GET_B_ignhwr (B_ignhwr)
#define PUT_B_ignhwr(val) ((val) ? SET_B_ignhwr : CLR_B_ignhwr)

_bit IgnClPs_bDiagEna;
#define SET_IgnClPs_bDiagEna (IgnClPs_bDiagEna = TRUE)
#define CLR_IgnClPs_bDiagEna (IgnClPs_bDiagEna = FALSE)
#define GET_IgnClPs_bDiagEna (IgnClPs_bDiagEna)
#define PUT_IgnClPs_bDiagEna(val) ((val) ? SET_IgnClPs_bDiagEna : CLR_IgnClPs_bDiagEna)

_bit IgnClPs_bDiagHandle;
#define SET_IgnClPs_bDiagHandle (IgnClPs_bDiagHandle = TRUE)
#define CLR_IgnClPs_bDiagHandle (IgnClPs_bDiagHandle = FALSE)
#define GET_IgnClPs_bDiagHandle (IgnClPs_bDiagHandle)
#define PUT_IgnClPs_bDiagHandle(val) ((val) ? SET_IgnClPs_bDiagHandle : CLR_IgnClPs_bDiagHandle)

_bit IgnClPs_bHealInitErr;
#define SET_IgnClPs_bHealInitErr (IgnClPs_bHealInitErr = TRUE)
#define CLR_IgnClPs_bHealInitErr (IgnClPs_bHealInitErr = FALSE)
#define GET_IgnClPs_bHealInitErr (IgnClPs_bHealInitErr)
#define PUT_IgnClPs_bHealInitErr(val) ((val) ? SET_IgnClPs_bHealInitErr : CLR_IgnClPs_bHealInitErr)


/* Imported variables */

#ifndef __IGNCLPS_BCONFERRREPORTED_EXT__
#define __IGNCLPS_BCONFERRREPORTED_EXT__
extern const _bit IgnClPs_bConfErrReported;
#define GET_IgnClPs_bConfErrReported (IgnClPs_bConfErrReported)
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitNoReIniI1 ----- */
/* IramNoReIniI1Header */
#pragma section .bbss awbz 

/* Local variables */

/* Exported variables */

/* Imported variables */

#ifndef __B_ZESYNC_EXT__
#define __B_ZESYNC_EXT__
extern const _bit B_zesync;
#define GET_B_zesync (B_zesync)
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
const DATA_IgnClPs_ConCK_DataFar_t DATA_IgnClPs_ConCK_DataFar __attribute__
                                       ((asection (".pta_data_IgnClPs_ConCK_DataFar", "f=a"))) =
{

    /*  ----- Parameter IgnClPs_Count ----- */ 
9U,


    /*  ----- Parameter IgnClPs_iTh_C ----- */ 
47U,


    /*  ----- Parameter IgnClPs_nEng_C ----- */ 
1360,


    /*  ----- Parameter IgnClPs_tComp_C ----- */ 
19U,


    /*  ----- Parameter IgnClPs_uBattMax_C ----- */ 
160U,


    /*  ----- Parameter IgnClPs_uBattMin_C ----- */ 
90U,

};

#define __IgnClPs_Count (VECT_IgnClPs_ConCK_DataFar->_IgnClPs_Count)
#define RP_IgnClPs_Count (DATA_IgnClPs_ConCK_DataFar._IgnClPs_Count)
#define __IgnClPs_iTh_C (VECT_IgnClPs_ConCK_DataFar->_IgnClPs_iTh_C)
#define RP_IgnClPs_iTh_C (DATA_IgnClPs_ConCK_DataFar._IgnClPs_iTh_C)
#define __IgnClPs_nEng_C (VECT_IgnClPs_ConCK_DataFar->_IgnClPs_nEng_C)
#define RP_IgnClPs_nEng_C (DATA_IgnClPs_ConCK_DataFar._IgnClPs_nEng_C)
#define __IgnClPs_tComp_C (VECT_IgnClPs_ConCK_DataFar->_IgnClPs_tComp_C)
#define RP_IgnClPs_tComp_C (DATA_IgnClPs_ConCK_DataFar._IgnClPs_tComp_C)
#define __IgnClPs_uBattMax_C (VECT_IgnClPs_ConCK_DataFar->_IgnClPs_uBattMax_C)
#define RP_IgnClPs_uBattMax_C (DATA_IgnClPs_ConCK_DataFar._IgnClPs_uBattMax_C)
#define __IgnClPs_uBattMin_C (VECT_IgnClPs_ConCK_DataFar->_IgnClPs_uBattMin_C)
#define RP_IgnClPs_uBattMin_C (DATA_IgnClPs_ConCK_DataFar._IgnClPs_uBattMin_C)

/* +++++ Addressschema intRam +++++ */
/* +++++ Addressschema IramI16 +++++ */
/* +++++ Addressschema IramI32 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_IgnClPs_Count __IgnClPs_Count
#define IgnClPs_Count __IgnClPs_Count

#define KW_IgnClPs_iTh_C __IgnClPs_iTh_C
#define IgnClPs_iTh_C __IgnClPs_iTh_C

#define KW_IgnClPs_nEng_C __IgnClPs_nEng_C
#define IgnClPs_nEng_C __IgnClPs_nEng_C

#define KW_IgnClPs_tComp_C __IgnClPs_tComp_C
#define IgnClPs_tComp_C __IgnClPs_tComp_C

#define KW_IgnClPs_uBattMax_C __IgnClPs_uBattMax_C
#define IgnClPs_uBattMax_C __IgnClPs_uBattMax_C

#define KW_IgnClPs_uBattMin_C __IgnClPs_uBattMin_C
#define IgnClPs_uBattMin_C __IgnClPs_uBattMin_C


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* IGNCLPS_STADIAENBL_SY Typ=ub */
#ifndef IGNCLPS_STADIAENBL_SY
  #define IGNCLPS_STADIAENBL_SY 0L
#elif (IGNCLPS_STADIAENBL_SY != 0L)
  #error >>>> 'IGNCLPS_STADIAENBL_SY' multiple defined
#endif



/* SY_CK200 Typ=ub */
#ifndef SY_CK200
  #define SY_CK200 2L
#elif (SY_CK200 != 2L)
  #error >>>> 'SY_CK200' multiple defined
#endif



/* SY_CK200LS Typ=ub */
#ifndef SY_CK200LS
  #define SY_CK200LS 1L
#elif (SY_CK200LS != 1L)
  #error >>>> 'SY_CK200LS' multiple defined
#endif



/* SY_CK200MO Typ=ub */
#ifndef SY_CK200MO
  #define SY_CK200MO 0L
#elif (SY_CK200MO != 0L)
  #error >>>> 'SY_CK200MO' multiple defined
#endif



/* SY_CK240 Typ=ub */
#ifndef SY_CK240
  #define SY_CK240 0L
#elif (SY_CK240 != 0L)
  #error >>>> 'SY_CK240' multiple defined
#endif



/* SY_IGICCH1 Typ=ub */
#ifndef SY_IGICCH1
  #define SY_IGICCH1 0L
#elif (SY_IGICCH1 != 0L)
  #error >>>> 'SY_IGICCH1' multiple defined
#endif



/* SY_IGICCH2 Typ=ub */
#ifndef SY_IGICCH2
  #define SY_IGICCH2 0L
#elif (SY_IGICCH2 != 0L)
  #error >>>> 'SY_IGICCH2' multiple defined
#endif



/* SY_IGICCH3 Typ=ub */
#ifndef SY_IGICCH3
  #define SY_IGICCH3 0L
#elif (SY_IGICCH3 != 0L)
  #error >>>> 'SY_IGICCH3' multiple defined
#endif



/* SY_IGICCH4 Typ=ub */
#ifndef SY_IGICCH4
  #define SY_IGICCH4 0L
#elif (SY_IGICCH4 != 0L)
  #error >>>> 'SY_IGICCH4' multiple defined
#endif



/* SY_IGICCH5 Typ=ub */
#ifndef SY_IGICCH5
  #define SY_IGICCH5 1L
#elif (SY_IGICCH5 != 1L)
  #error >>>> 'SY_IGICCH5' multiple defined
#endif



/* SY_IGICCH6 Typ=ub */
#ifndef SY_IGICCH6
  #define SY_IGICCH6 1L
#elif (SY_IGICCH6 != 1L)
  #error >>>> 'SY_IGICCH6' multiple defined
#endif



/* SY_IGICCH7 Typ=ub */
#ifndef SY_IGICCH7
  #define SY_IGICCH7 1L
#elif (SY_IGICCH7 != 1L)
  #error >>>> 'SY_IGICCH7' multiple defined
#endif



/* SY_IGICCH8 Typ=ub */
#ifndef SY_IGICCH8
  #define SY_IGICCH8 1L
#elif (SY_IGICCH8 != 1L)
  #error >>>> 'SY_IGICCH8' multiple defined
#endif



/* SY_IGIFLAG Typ=ub */
#ifndef SY_IGIFLAG
  #define SY_IGIFLAG 0L
#elif (SY_IGIFLAG != 0L)
  #error >>>> 'SY_IGIFLAG' multiple defined
#endif



/* SY_IGNCHN1 Typ=ub */
#ifndef SY_IGNCHN1
  #define SY_IGNCHN1 0L
#elif (SY_IGNCHN1 != 0L)
  #error >>>> 'SY_IGNCHN1' multiple defined
#endif



/* SY_IGNCHN2 Typ=ub */
#ifndef SY_IGNCHN2
  #define SY_IGNCHN2 1L
#elif (SY_IGNCHN2 != 1L)
  #error >>>> 'SY_IGNCHN2' multiple defined
#endif



/* SY_IGNCHN3 Typ=ub */
#ifndef SY_IGNCHN3
  #define SY_IGNCHN3 2L
#elif (SY_IGNCHN3 != 2L)
  #error >>>> 'SY_IGNCHN3' multiple defined
#endif



/* SY_IGNCHN4 Typ=ub */
#ifndef SY_IGNCHN4
  #define SY_IGNCHN4 3L
#elif (SY_IGNCHN4 != 3L)
  #error >>>> 'SY_IGNCHN4' multiple defined
#endif



/* SY_IGNCHN5 Typ=ub */
#ifndef SY_IGNCHN5
  #define SY_IGNCHN5 0L
#elif (SY_IGNCHN5 != 0L)
  #error >>>> 'SY_IGNCHN5' multiple defined
#endif



/* SY_IGNCHN6 Typ=ub */
#ifndef SY_IGNCHN6
  #define SY_IGNCHN6 1L
#elif (SY_IGNCHN6 != 1L)
  #error >>>> 'SY_IGNCHN6' multiple defined
#endif



/* SY_IGNCHN7 Typ=ub */
#ifndef SY_IGNCHN7
  #define SY_IGNCHN7 2L
#elif (SY_IGNCHN7 != 2L)
  #error >>>> 'SY_IGNCHN7' multiple defined
#endif



/* SY_IGNCHN8 Typ=ub */
#ifndef SY_IGNCHN8
  #define SY_IGNCHN8 3L
#elif (SY_IGNCHN8 != 3L)
  #error >>>> 'SY_IGNCHN8' multiple defined
#endif



/* SY_ZYLZA Typ=sw */
#ifndef SY_ZYLZA
  #define SY_ZYLZA 8L
#elif (SY_ZYLZA != 8L)
  #error >>>> 'SY_ZYLZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _IGNCLPS_CONCK_D */
