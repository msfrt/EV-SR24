#ifndef _IGNDD_D
#define _IGNDD_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "igndd_dat.h"
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

/* Exported variables */

/* Imported variables */

#ifndef __OFFZ_W_EXT__
#define __OFFZ_W_EXT__
extern const uint16 offz_w;
#endif

#ifndef __SZFUBA_W_EXT__
#define __SZFUBA_W_EXT__
extern const uint16 szfuba_w;
#endif

#ifndef __SZOUT_W_EXT__
#define __SZOUT_W_EXT__
extern const uint16 szout_w;
#endif


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */

/* Exported variables */

/* Imported variables */

#ifndef __FRSTINJCYL_EXT__
#define __FRSTINJCYL_EXT__
extern const uint8 frstinjcyl;
#endif

#ifndef __FUBAANZ_EXT__
#define __FUBAANZ_EXT__
extern const uint8 fubaanz;
#endif

#ifndef __ZWCALCAR_EXT__
#define __ZWCALCAR_EXT__
extern sint8 zwcalcar[8];
#endif

#ifndef __ZZYLZUEAR_EXT__
#define __ZZYLZUEAR_EXT__
extern uint8 zzylzuear[2];
#endif


/* Footer */
#pragma section 
/* -- AdS IramNoReIniI16 ----- */
/* IramNoReIniI16Header */
#pragma section .sbss.a2 aws 

/* Local variables */

/* Exported variables */
uint16 azoffmsk_w;
uint16 zzaehl_w;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramNoReIniI8 ----- */
/* IramNoReIniI8Header */
#pragma section .sbss.a1 aws 

/* Local variables */

/* Exported variables */
uint8 ovlctr;
sint8 zwoutakt;
uint8 zzaehl;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */

/* Imported variables */

#ifndef __B_AIRBAG_EXT__
#define __B_AIRBAG_EXT__
extern const _bit B_airbag;
#define GET_B_airbag (B_airbag)
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitNoReIniI1 ----- */
/* IramNoReIniI1Header */
#pragma section .bbss awbz 

/* Local variables */

/* Exported variables */
_bit B_zesync;
#define SET_B_zesync (B_zesync = TRUE)
#define CLR_B_zesync (B_zesync = FALSE)
#define GET_B_zesync (B_zesync)
#define PUT_B_zesync(val) ((val) ? SET_B_zesync : CLR_B_zesync)


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
const DATA_IgnDD_DataFar_t DATA_IgnDD_DataFar __attribute__
                                       ((asection (".pta_data_IgnDD_DataFar", "f=a"))) =
{

    /*  ----- Parameter CWZUEAB ----- */ 
0U,

};

#define __CWZUEAB (VECT_IgnDD_DataFar->_CWZUEAB)
#define RP_CWZUEAB (DATA_IgnDD_DataFar._CWZUEAB)

/* +++++ Addressschema intRam +++++ */
/* +++++ Addressschema IramNoReIniI16 +++++ */
/* +++++ Addressschema IramNoReIniI8 +++++ */
/* +++++ Addressschema SingleBitNoReIniI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_CWZUEAB __CWZUEAB
#define CWZUEAB __CWZUEAB


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* DRCTSTRT_SY Typ=sw */
#ifndef DRCTSTRT_SY
  #define DRCTSTRT_SY 0L
#elif (DRCTSTRT_SY != 0L)
  #error >>>> 'DRCTSTRT_SY' multiple defined
#endif



/* IGNCL_QAG_SY Typ=sw */
#ifndef IGNCL_QAG_SY
  #define IGNCL_QAG_SY 1L
#elif (IGNCL_QAG_SY != 1L)
  #error >>>> 'IGNCL_QAG_SY' multiple defined
#endif



/* IGNINCIR_SY Typ=ub */
#ifndef IGNINCIR_SY
  #define IGNINCIR_SY 1L
#elif (IGNINCIR_SY != 1L)
  #error >>>> 'IGNINCIR_SY' multiple defined
#endif



/* MSI_SY Typ=ub */
#ifndef MSI_SY
  #define MSI_SY 0L
#elif (MSI_SY != 0L)
  #error >>>> 'MSI_SY' multiple defined
#endif



/* SY_AIRBAG Typ=ub */
#ifndef SY_AIRBAG
  #define SY_AIRBAG 1L
#elif (SY_AIRBAG != 1L)
  #error >>>> 'SY_AIRBAG' multiple defined
#endif



/* SY_BDE Typ=ub */
#ifndef SY_BDE
  #define SY_BDE 0L
#elif (SY_BDE != 0L)
  #error >>>> 'SY_BDE' multiple defined
#endif



/* SY_DMDZAG Typ=sw */
#ifndef SY_DMDZAG
  #define SY_DMDZAG 0L
#elif (SY_DMDZAG != 0L)
  #error >>>> 'SY_DMDZAG' multiple defined
#endif



/* SY_DOPZW Typ=ub */
#ifndef SY_DOPZW
  #define SY_DOPZW 1L
#elif (SY_DOPZW != 1L)
  #error >>>> 'SY_DOPZW' multiple defined
#endif



/* SY_FFZ Typ=ub */
#ifndef SY_FFZ
  #define SY_FFZ 1L
#elif (SY_FFZ != 1L)
  #error >>>> 'SY_FFZ' multiple defined
#endif



/* SY_KT Typ=ub */
#ifndef SY_KT
  #define SY_KT 0L
#elif (SY_KT != 0L)
  #error >>>> 'SY_KT' multiple defined
#endif



/* SY_KTIGNBI Typ=ub */
#ifndef SY_KTIGNBI
  #define SY_KTIGNBI 0L
#elif (SY_KTIGNBI != 0L)
  #error >>>> 'SY_KTIGNBI' multiple defined
#endif



/* SY_NLZOFF Typ=ub */
#ifndef SY_NLZOFF
  #define SY_NLZOFF 0L
#elif (SY_NLZOFF != 0L)
  #error >>>> 'SY_NLZOFF' multiple defined
#endif



/* SY_SGANZ Typ=sw */
#ifndef SY_SGANZ
  #define SY_SGANZ 1L
#elif (SY_SGANZ != 1L)
  #error >>>> 'SY_SGANZ' multiple defined
#endif



/* SY_WMIN Typ=sb */
#ifndef SY_WMIN
  #define SY_WMIN -72L
#elif (SY_WMIN != -72L)
  #error >>>> 'SY_WMIN' multiple defined
#endif



/* SY_ZNDAUS Typ=sw */
#ifndef SY_ZNDAUS
  #define SY_ZNDAUS 1L
#elif (SY_ZNDAUS != 1L)
  #error >>>> 'SY_ZNDAUS' multiple defined
#endif



/* SY_ZYLZA Typ=sw */
#ifndef SY_ZYLZA
  #define SY_ZYLZA 8L
#elif (SY_ZYLZA != 8L)
  #error >>>> 'SY_ZYLZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _IGNDD_D */
