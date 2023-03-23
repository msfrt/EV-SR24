#ifndef _INJDDPFI_D
#define _INJDDPFI_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "injddpfi_dat.h"
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
uint16 anzesab_w;
uint16 anztib_w;
uint16 anzti_w;
uint16 InjDDPfi_injEnadCylMsk;
uint16 InjDDPfi_injTrigCylMsk;

/* Imported variables */

#ifndef __DTEMNKT_W_EXT__
#define __DTEMNKT_W_EXT__
extern const uint16 dtemnkt_w;
#endif

#ifndef __TVUB_W_EXT__
#define __TVUB_W_EXT__
extern const uint16 tvub_w;
#endif


/* Footer */
#pragma section 
/* -- AdS IramI32 ----- */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 

/* Local variables */

#ifndef __ANGZOTTICKS_EXT__
#define __ANGZOTTICKS_EXT__
static uint32 AngZotTicks[8];
#endif

/* Exported variables */
uint32 injddpfi_agFrstTdc;

/* Imported variables */

#ifndef __TEZ_L_EXT__
#define __TEZ_L_EXT__
extern uint32 tez_l[8];
#endif

#ifndef __TE_L_EXT__
#define __TE_L_EXT__
extern const uint32 te_l;
#endif


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */
uint8 ATS_InjTstFlg_u8;

/* Exported variables */
uint8 anzti;
uint8 anztib;
uint8 frstinjcyl;
uint8 injddpfi_frstinjcyl;
uint8 lastzyl;
uint8 nexttizyl[3];

/* Imported variables */

#ifndef __EVZ_AUSTOT_EXT__
#define __EVZ_AUSTOT_EXT__
extern const uint8 evz_austot;
#endif

#ifndef __WEA_EXT__
#define __WEA_EXT__
extern const uint8 wea;
#endif

#ifndef __WEEA_EXT__
#define __WEEA_EXT__
extern uint8 weea[8];
#endif

#ifndef __WEESTSIM_EXT__
#define __WEESTSIM_EXT__
extern const uint8 weestsim;
#endif

#ifndef __WES_EXT__
#define __WES_EXT__
extern const uint8 wes;
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */
_bit B_firstSyn;
#define SET_B_firstSyn (B_firstSyn = TRUE)
#define CLR_B_firstSyn (B_firstSyn = FALSE)
#define GET_B_firstSyn (B_firstSyn)
#define PUT_B_firstSyn(val) ((val) ? SET_B_firstSyn : CLR_B_firstSyn)


/* Exported variables */

/* Imported variables */

#ifndef __B_NSP_EXT__
#define __B_NSP_EXT__
extern const _bit B_nsp;
#define GET_B_nsp (B_nsp)
#endif

#ifndef __B_STENDES_EXT__
#define __B_STENDES_EXT__
extern const _bit B_stendes;
#define GET_B_stendes (B_stendes)
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
const DATA_InjDDPfi_DataFar_t DATA_InjDDPfi_DataFar __attribute__
                                       ((asection (".pta_data_InjDDPfi_DataFar", "f=a"))) =
{

    /*  ----- Parameter ATS_numInjImp_C ----- */ 
10U,


    /*  ----- Parameter ATS_tiInjLngth_C ----- */ 
2000UL,


    /*  ----- Parameter ATS_tiInjPer_C ----- */ 
1000000UL,

};

#define __ATS_numInjImp_C (VECT_InjDDPfi_DataFar->_ATS_numInjImp_C)
#define RP_ATS_numInjImp_C (DATA_InjDDPfi_DataFar._ATS_numInjImp_C)
#define __ATS_tiInjLngth_C (VECT_InjDDPfi_DataFar->_ATS_tiInjLngth_C)
#define RP_ATS_tiInjLngth_C (DATA_InjDDPfi_DataFar._ATS_tiInjLngth_C)
#define __ATS_tiInjPer_C (VECT_InjDDPfi_DataFar->_ATS_tiInjPer_C)
#define RP_ATS_tiInjPer_C (DATA_InjDDPfi_DataFar._ATS_tiInjPer_C)

/* +++++ Addressschema IramI16 +++++ */
/* +++++ Addressschema IramI32 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_ATS_numInjImp_C __ATS_numInjImp_C
#define ATS_numInjImp_C __ATS_numInjImp_C

#define KW_ATS_tiInjLngth_C __ATS_tiInjLngth_C
#define ATS_tiInjLngth_C __ATS_tiInjLngth_C

#define KW_ATS_tiInjPer_C __ATS_tiInjPer_C
#define ATS_tiInjPer_C __ATS_tiInjPer_C


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* BBSTVE_SY Typ=ub */
#ifndef BBSTVE_SY
  #define BBSTVE_SY 0L
#elif (BBSTVE_SY != 0L)
  #error >>>> 'BBSTVE_SY' multiple defined
#endif



/* CAS_BACKUP_SY Typ=sw */
#ifndef CAS_BACKUP_SY
  #define CAS_BACKUP_SY 2L
#elif (CAS_BACKUP_SY != 2L)
  #error >>>> 'CAS_BACKUP_SY' multiple defined
#endif



/* EPMHCRS_NUMINC Typ=sl */
#ifndef EPMHCRS_NUMINC
  #define EPMHCRS_NUMINC 60L
#elif (EPMHCRS_NUMINC != 60L)
  #error >>>> 'EPMHCRS_NUMINC' multiple defined
#endif



/* INJVLV_ATS_SY Typ=ub */
#ifndef INJVLV_ATS_SY
  #define INJVLV_ATS_SY 1L
#elif (INJVLV_ATS_SY != 1L)
  #error >>>> 'INJVLV_ATS_SY' multiple defined
#endif



/* INJVLV_ONOFF_ATS_SC Typ=ub */
#ifndef INJVLV_ONOFF_ATS_SC
  #define INJVLV_ONOFF_ATS_SC 0L
#elif (INJVLV_ONOFF_ATS_SC != 0L)
  #error >>>> 'INJVLV_ONOFF_ATS_SC' multiple defined
#endif



/* SY_BDE Typ=ub */
#ifndef SY_BDE
  #define SY_BDE 0L
#elif (SY_BDE != 0L)
  #error >>>> 'SY_BDE' multiple defined
#endif



/* SY_CNG Typ=sw */
#ifndef SY_CNG
  #define SY_CNG 0L
#elif (SY_CNG != 0L)
  #error >>>> 'SY_CNG' multiple defined
#endif



/* SY_DMDZAG Typ=sw */
#ifndef SY_DMDZAG
  #define SY_DMDZAG 0L
#elif (SY_DMDZAG != 0L)
  #error >>>> 'SY_DMDZAG' multiple defined
#endif



/* SY_GDIPFI Typ=ub */
#ifndef SY_GDIPFI
  #define SY_GDIPFI 0L
#elif (SY_GDIPFI != 0L)
  #error >>>> 'SY_GDIPFI' multiple defined
#endif



/* SY_IPRCRSH Typ=ub */
#ifndef SY_IPRCRSH
  #define SY_IPRCRSH 0L
#elif (SY_IPRCRSH != 0L)
  #error >>>> 'SY_IPRCRSH' multiple defined
#endif



/* SY_SGANZ Typ=sw */
#ifndef SY_SGANZ
  #define SY_SGANZ 1L
#elif (SY_SGANZ != 1L)
  #error >>>> 'SY_SGANZ' multiple defined
#endif



/* SY_STERVK Typ=ub */
#ifndef SY_STERVK
  #define SY_STERVK 0L
#elif (SY_STERVK != 0L)
  #error >>>> 'SY_STERVK' multiple defined
#endif



/* SY_ZYLZA Typ=sw */
#ifndef SY_ZYLZA
  #define SY_ZYLZA 8L
#elif (SY_ZYLZA != 8L)
  #error >>>> 'SY_ZYLZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _INJDDPFI_D */
