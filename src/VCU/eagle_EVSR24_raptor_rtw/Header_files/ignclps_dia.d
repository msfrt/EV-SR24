#ifndef _IGNCLPS_DIA_D
#define _IGNCLPS_DIA_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "ignclps_dia_dat.h"
/* --- Include Message Declarations from exporting FC SyC_Main ----- */
#include "syc_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */
#define SET_B_ignpsok ((IgnClPs_DiaLokBitsKoop0 |= (b_BBasT)1u << 3))
#define CLR_B_ignpsok ((IgnClPs_DiaLokBitsKoop0 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_B_ignpsok ((IgnClPs_DiaLokBitsKoop0 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_B_ignpsok(val) ((val) ? SET_B_ignpsok : CLR_B_ignpsok)

#define SET_B_ignpsol ((IgnClPs_DiaLokBitsKoop0 |= (b_BBasT)1u << 2))
#define CLR_B_ignpsol ((IgnClPs_DiaLokBitsKoop0 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_B_ignpsol ((IgnClPs_DiaLokBitsKoop0 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_B_ignpsol(val) ((val) ? SET_B_ignpsol : CLR_B_ignpsol)

#define SET_B_ignpsscb ((IgnClPs_DiaLokBitsKoop0 |= (b_BBasT)1u << 0))
#define CLR_B_ignpsscb ((IgnClPs_DiaLokBitsKoop0 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_B_ignpsscb ((IgnClPs_DiaLokBitsKoop0 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_B_ignpsscb(val) ((val) ? SET_B_ignpsscb : CLR_B_ignpsscb)

#define SET_B_ignpsscg ((IgnClPs_DiaLokBitsKoop0 |= (b_BBasT)1u << 1))
#define CLR_B_ignpsscg ((IgnClPs_DiaLokBitsKoop0 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_B_ignpsscg ((IgnClPs_DiaLokBitsKoop0 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_B_ignpsscg(val) ((val) ? SET_B_ignpsscg : CLR_B_ignpsscg)


/* Exported variables */

/* Imported variables */


/* -- AdS IramI16 ----- */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 

/* Local variables */
uint16 IgnClPs_valDiaExec_u16;
uint16 IgnClPs_valDiaResBenchErr_u16;
uint16 IgnClPs_valDiaResNoDeb_u16;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */
uint8 IgnClPs_DiaLokBitsKoop0;

/* Exported variables */
uint8 abmznd;
uint8 IgnClPs_valDiaRes_u8;

/* Imported variables */

#ifndef __IGNCLPS_ERRCONF_U8_EXT__
#define __IGNCLPS_ERRCONF_U8_EXT__
extern const uint8 IgnClPs_errConf_u8;
#endif

#ifndef __IGNCLPS_ERROSC_U8_EXT__
#define __IGNCLPS_ERROSC_U8_EXT__
extern const uint8 IgnClPs_errOsc_u8;
#endif

#ifndef __IGNCLPS_NUMCLERR_A8_EXT__
#define __IGNCLPS_NUMCLERR_A8_EXT__
extern uint8 IgnClPs_numClErr_a8[8];
#endif

#ifndef __IGNCLPS_NUMIDERR_U8_EXT__
#define __IGNCLPS_NUMIDERR_U8_EXT__
extern const uint8 IgnClPs_numIdErr_u8;
#endif

#ifndef __IGNCLPS_NUMIGNCH_A8_EXT__
#define __IGNCLPS_NUMIGNCH_A8_EXT__
extern uint8 IgnClPs_numIgnCh_a8[8];
#endif

#ifndef __IGNCLPS_NUMIGNIC_A8_EXT__
#define __IGNCLPS_NUMIGNIC_A8_EXT__
extern uint8 IgnClPs_numIgnIc_a8[8];
#endif

#ifndef __IGNCLPS_NUMPSERR_A8_EXT__
#define __IGNCLPS_NUMPSERR_A8_EXT__
extern uint8 IgnClPs_numPsErr_a8[8];
#endif

#ifndef __IGNCLPS_NUMSPIERR_U8_EXT__
#define __IGNCLPS_NUMSPIERR_U8_EXT__
extern const uint8 IgnClPs_numSpiErr_u8;
#endif


/* Footer */
#pragma section 
/* -- AdS IramNoReIniI16 ----- */
/* IramNoReIniI16Header */
#pragma section .sbss.a2 aws 

/* Local variables */

/* Exported variables */

/* Imported variables */

#ifndef __AZOFFMSK_W_EXT__
#define __AZOFFMSK_W_EXT__
extern const uint16 azoffmsk_w;
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_aevamz;
#define SET_B_aevamz (B_aevamz = TRUE)
#define CLR_B_aevamz (B_aevamz = FALSE)
#define GET_B_aevamz (B_aevamz)
#define PUT_B_aevamz(val) ((val) ? SET_B_aevamz : CLR_B_aevamz)

_bit IgnClPs_bConfErrReported;
#define SET_IgnClPs_bConfErrReported (IgnClPs_bConfErrReported = TRUE)
#define CLR_IgnClPs_bConfErrReported (IgnClPs_bConfErrReported = FALSE)
#define GET_IgnClPs_bConfErrReported (IgnClPs_bConfErrReported)
#define PUT_IgnClPs_bConfErrReported(val) ((val) ? SET_IgnClPs_bConfErrReported : CLR_IgnClPs_bConfErrReported)


/* Imported variables */

#ifndef __IGNCLPS_BDIAGENA_EXT__
#define __IGNCLPS_BDIAGENA_EXT__
extern const _bit IgnClPs_bDiagEna;
#define GET_IgnClPs_bDiagEna (IgnClPs_bDiagEna)
#endif

#ifndef __IGNCLPS_BDIAGHANDLE_EXT__
#define __IGNCLPS_BDIAGHANDLE_EXT__
extern const _bit IgnClPs_bDiagHandle;
#define GET_IgnClPs_bDiagHandle (IgnClPs_bDiagHandle)
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
const DATA_IgnClPs_Dia_DataFar_t DATA_IgnClPs_Dia_DataFar __attribute__
                                       ((asection (".pta_data_IgnClPs_Dia_DataFar", "f=a"))) =
{

    /*  ----- Parameter IgnClPs_ignChlsBench1_C ----- */ 
85U,


    /*  ----- Parameter IgnClPs_ignChlsBench2_C ----- */ 
170U,


    /*  ----- Parameter IgnClPs_mskInjOffBenchErr_CW ----- */ 
0U,


    /*  ----- Parameter IgnClPs_mskInjOff_CW ----- */ 
2U,

};

#define __IgnClPs_ignChlsBench1_C (VECT_IgnClPs_Dia_DataFar->_IgnClPs_ignChlsBench1_C)
#define RP_IgnClPs_ignChlsBench1_C (DATA_IgnClPs_Dia_DataFar._IgnClPs_ignChlsBench1_C)
#define __IgnClPs_ignChlsBench2_C (VECT_IgnClPs_Dia_DataFar->_IgnClPs_ignChlsBench2_C)
#define RP_IgnClPs_ignChlsBench2_C (DATA_IgnClPs_Dia_DataFar._IgnClPs_ignChlsBench2_C)
#define __IgnClPs_mskInjOffBenchErr_CW (VECT_IgnClPs_Dia_DataFar->_IgnClPs_mskInjOffBenchErr_CW)
#define RP_IgnClPs_mskInjOffBenchErr_CW (DATA_IgnClPs_Dia_DataFar._IgnClPs_mskInjOffBenchErr_CW)
#define __IgnClPs_mskInjOff_CW (VECT_IgnClPs_Dia_DataFar->_IgnClPs_mskInjOff_CW)
#define RP_IgnClPs_mskInjOff_CW (DATA_IgnClPs_Dia_DataFar._IgnClPs_mskInjOff_CW)

/* +++++ Addressschema intRam +++++ */
/* +++++ Addressschema IramI16 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_IgnClPs_ignChlsBench1_C __IgnClPs_ignChlsBench1_C
#define IgnClPs_ignChlsBench1_C __IgnClPs_ignChlsBench1_C

#define KW_IgnClPs_ignChlsBench2_C __IgnClPs_ignChlsBench2_C
#define IgnClPs_ignChlsBench2_C __IgnClPs_ignChlsBench2_C

#define KW_IgnClPs_mskInjOffBenchErr_CW __IgnClPs_mskInjOffBenchErr_CW
#define IgnClPs_mskInjOffBenchErr_CW __IgnClPs_mskInjOffBenchErr_CW

#define KW_IgnClPs_mskInjOff_CW __IgnClPs_mskInjOff_CW
#define IgnClPs_mskInjOff_CW __IgnClPs_mskInjOff_CW


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* IGNCLPS_BENCHERR_SC Typ=sw */
#ifndef IGNCLPS_BENCHERR_SC
  #define IGNCLPS_BENCHERR_SC 2L
#elif (IGNCLPS_BENCHERR_SC != 2L)
  #error >>>> 'IGNCLPS_BENCHERR_SC' multiple defined
#endif



/* MSI_SY Typ=ub */
#ifndef MSI_SY
  #define MSI_SY 0L
#elif (MSI_SY != 0L)
  #error >>>> 'MSI_SY' multiple defined
#endif



/* SY_ABMZND Typ=ub */
#ifndef SY_ABMZND
  #define SY_ABMZND 1L
#elif (SY_ABMZND != 1L)
  #error >>>> 'SY_ABMZND' multiple defined
#endif



/* SY_CK200 Typ=ub */
#ifndef SY_CK200
  #define SY_CK200 2L
#elif (SY_CK200 != 2L)
  #error >>>> 'SY_CK200' multiple defined
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



/* SY_FFZ Typ=ub */
#ifndef SY_FFZ
  #define SY_FFZ 1L
#elif (SY_FFZ != 1L)
  #error >>>> 'SY_FFZ' multiple defined
#endif



/* SY_IGIFLAG Typ=ub */
#ifndef SY_IGIFLAG
  #define SY_IGIFLAG 0L
#elif (SY_IGIFLAG != 0L)
  #error >>>> 'SY_IGIFLAG' multiple defined
#endif



/* SY_ZYLZA Typ=sw */
#ifndef SY_ZYLZA
  #define SY_ZYLZA 8L
#elif (SY_ZYLZA != 8L)
  #error >>>> 'SY_ZYLZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _IGNCLPS_DIA_D */
