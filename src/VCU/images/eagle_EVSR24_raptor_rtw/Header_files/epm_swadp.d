#ifndef _EPM_SWADP_D
#define _EPM_SWADP_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "epm_swadp_dat.h"
/* --- Funktion EpmCrS_Plaus ----- */
#include "epmcrs_plaus_dat.h"
/* --- Funktion EpmSeq_StateMn ----- */
#include "epmseq_statemn_dat.h"
/* --- Funktion SWAdp ----- */
#include "swadp_dat.h"
/* --- Include Message Declarations from exporting FC EpmCaS_Seg ----- */
#include "epmcas_msg.h"
/* --- Include Message Declarations from exporting FC EpmCrS_Seg ----- */
#include "epmcrs_msg.h"
/* --- Include Message Declarations from exporting FC EpmRRS_AgDetect ----- */
#include "epmrrs_msg.h"
/* --- Include Message Declarations from exporting FC EpmSeq_StateMn ----- */
#include "epmseq_msg.h"
/* --- Include Message Declarations from exporting FC Epm_OpMode ----- */
#include "epm_msg.h"

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
static sint16 nDiffWCy;
static sint16 phiOffsOld;

/* Exported variables */
sint16 dnmot_w;
sint16 ngas_w;
sint16 ngfil2_w;
sint16 ngfil_w;
uint16 nmotbi_w;
uint16 nmotst1t_w;
uint16 nmot_w;
uint16 phidelmx_w[2];
uint16 uzkw_w;
uint16 wkwale_w;
sint16 wkwkor_w;
uint16 wkwstop_w;
sint16 wnwadmne_w;
sint16 wnwadmxe_w;
sint16 wnwe_w;
uint16 wnwkwe_w;
uint16 zzkwas_w;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI32 ----- */
/* IramI32Header */
#pragma section .bss.ReIni.a4 aw 

/* Local variables */
static sint32 ngfil_FltAcc;

#ifndef __TISEGARRAY_EXT__
#define __TISEGARRAY_EXT__
static sint32 tiSegArray[8];
#endif

/* Exported variables */
uint32 tnwie_l;
uint32 tseg_l;
uint32 zrph_l;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */
static uint8 ngasctr;
static uint8 stSyncOld;

/* Exported variables */
sint8 ngfil;
sint8 ngfil2;
uint8 nmot;
uint8 nmotll;
uint8 nmotst;
uint8 nmotz;
uint8 s1fl3p0c[3];
uint8 synstate;
sint8 zphfl;
uint8 zzyl;
uint8 zzylbi;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramNvI16 ----- */
/* IramNvI16Header */
#pragma section .bss.envram.a2 aw 

/* Local variables */

/* Exported variables */
uint16 bmlosctr_w;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_bm;
#define SET_B_bm (B_bm = TRUE)
#define CLR_B_bm (B_bm = FALSE)
#define GET_B_bm (B_bm)
#define PUT_B_bm(val) ((val) ? SET_B_bm : CLR_B_bm)

_bit B_dirstale;
#define SET_B_dirstale (B_dirstale = TRUE)
#define CLR_B_dirstale (B_dirstale = FALSE)
#define GET_B_dirstale (B_dirstale)
#define PUT_B_dirstale(val) ((val) ? SET_B_dirstale : CLR_B_dirstale)

_bit B_dopzue;
#define SET_B_dopzue (B_dopzue = TRUE)
#define CLR_B_dopzue (B_dopzue = FALSE)
#define GET_B_dopzue (B_dopzue)
#define PUT_B_dopzue(val) ((val) ? SET_B_dopzue : CLR_B_dopzue)

_bit B_fbm;
#define SET_B_fbm (B_fbm = TRUE)
#define CLR_B_fbm (B_fbm = FALSE)
#define GET_B_fbm (B_fbm)
#define PUT_B_fbm(val) ((val) ? SET_B_fbm : CLR_B_fbm)

_bit B_motstop;
#define SET_B_motstop (B_motstop = TRUE)
#define CLR_B_motstop (B_motstop = FALSE)
#define GET_B_motstop (B_motstop)
#define PUT_B_motstop(val) ((val) ? SET_B_motstop : CLR_B_motstop)

_bit B_ngasok;
#define SET_B_ngasok (B_ngasok = TRUE)
#define CLR_B_ngasok (B_ngasok = FALSE)
#define GET_B_ngasok (B_ngasok)
#define PUT_B_ngasok(val) ((val) ? SET_B_ngasok : CLR_B_ngasok)

_bit B_nldg;
#define SET_B_nldg (B_nldg = TRUE)
#define CLR_B_nldg (B_nldg = FALSE)
#define GET_B_nldg (B_nldg)
#define PUT_B_nldg(val) ((val) ? SET_B_nldg : CLR_B_nldg)

_bit B_nlph;
#define SET_B_nlph (B_nlph = TRUE)
#define CLR_B_nlph (B_nlph = FALSE)
#define GET_B_nlph (B_nlph)
#define PUT_B_nlph(val) ((val) ? SET_B_nlph : CLR_B_nlph)

_bit B_nlphwe;
#define SET_B_nlphwe (B_nlphwe = TRUE)
#define CLR_B_nlphwe (B_nlphwe = FALSE)
#define GET_B_nlphwe (B_nlphwe)
#define PUT_B_nlphwe(val) ((val) ? SET_B_nlphwe : CLR_B_nlphwe)

_bit B_nmin;
#define SET_B_nmin (B_nmin = TRUE)
#define CLR_B_nmin (B_nmin = FALSE)
#define GET_B_nmin (B_nmin)
#define PUT_B_nmin(val) ((val) ? SET_B_nmin : CLR_B_nmin)

_bit B_nmot;
#define SET_B_nmot (B_nmot = TRUE)
#define CLR_B_nmot (B_nmot = FALSE)
#define GET_B_nmot (B_nmot)
#define PUT_B_nmot(val) ((val) ? SET_B_nmot : CLR_B_nmot)

_bit B_nwkv;
#define SET_B_nwkv (B_nwkv = TRUE)
#define CLR_B_nwkv (B_nwkv = FALSE)
#define GET_B_nwkv (B_nwkv)
#define PUT_B_nwkv(val) ((val) ? SET_B_nwkv : CLR_B_nwkv)

_bit B_optpherk;
#define SET_B_optpherk (B_optpherk = TRUE)
#define CLR_B_optpherk (B_optpherk = FALSE)
#define GET_B_optpherk (B_optpherk)
#define PUT_B_optpherk(val) ((val) ? SET_B_optpherk : CLR_B_optpherk)

_bit B_phade;
#define SET_B_phade (B_phade = TRUE)
#define CLR_B_phade (B_phade = FALSE)
#define GET_B_phade (B_phade)
#define PUT_B_phade(val) ((val) ? SET_B_phade : CLR_B_phade)

_bit B_phsinvst;
#define SET_B_phsinvst (B_phsinvst = TRUE)
#define CLR_B_phsinvst (B_phsinvst = FALSE)
#define GET_B_phsinvst (B_phsinvst)
#define PUT_B_phsinvst(val) ((val) ? SET_B_phsinvst : CLR_B_phsinvst)

_bit B_phsnl;
#define SET_B_phsnl (B_phsnl = TRUE)
#define CLR_B_phsnl (B_phsnl = FALSE)
#define GET_B_phsnl (B_phsnl)
#define PUT_B_phsnl(val) ((val) ? SET_B_phsnl : CLR_B_phsnl)

_bit B_stprel;
#define SET_B_stprel (B_stprel = TRUE)
#define CLR_B_stprel (B_stprel = FALSE)
#define GET_B_stprel (B_stprel)
#define PUT_B_stprel(val) ((val) ? SET_B_stprel : CLR_B_stprel)

_bit B_synnot;
#define SET_B_synnot (B_synnot = TRUE)
#define CLR_B_synnot (B_synnot = FALSE)
#define GET_B_synnot (B_synnot)
#define PUT_B_synnot(val) ((val) ? SET_B_synnot : CLR_B_synnot)

_bit B_synph;
#define SET_B_synph (B_synph = TRUE)
#define CLR_B_synph (B_synph = FALSE)
#define GET_B_synph (B_synph)
#define PUT_B_synph(val) ((val) ? SET_B_synph : CLR_B_synph)

_bit B_umsync;
#define SET_B_umsync (B_umsync = TRUE)
#define CLR_B_umsync (B_umsync = FALSE)
#define GET_B_umsync (B_umsync)
#define PUT_B_umsync(val) ((val) ? SET_B_umsync : CLR_B_umsync)

_bit B_wkwalevd;
#define SET_B_wkwalevd (B_wkwalevd = TRUE)
#define CLR_B_wkwalevd (B_wkwalevd = FALSE)
#define GET_B_wkwalevd (B_wkwalevd)
#define PUT_B_wkwalevd(val) ((val) ? SET_B_wkwalevd : CLR_B_wkwalevd)

_bit B_zprel;
#define SET_B_zprel (B_zprel = TRUE)
#define CLR_B_zprel (B_zprel = FALSE)
#define GET_B_zprel (B_zprel)
#define PUT_B_zprel(val) ((val) ? SET_B_zprel : CLR_B_zprel)


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
const DATA_Epm_SwAdp_DataFar_t DATA_Epm_SwAdp_DataFar __attribute__
                                       ((asection (".pta_data_Epm_SwAdp_DataFar", "f=a"))) =
{

    /*  ----- Parameter ZNGFIL ----- */ 
85899L,

};

#define __ZNGFIL (VECT_Epm_SwAdp_DataFar->_ZNGFIL)
#define RP_ZNGFIL (DATA_Epm_SwAdp_DataFar._ZNGFIL)

/* +++++ Addressschema IramI16 +++++ */
/* +++++ Addressschema IramI32 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema IramNvI16 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_ZNGFIL __ZNGFIL
#define ZNGFIL __ZNGFIL


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* -- AdS DataFar ----- */
#define __WNWREO (VECT_SWAdp_DataFar->_WNWREO)
#define RP_WNWREO (DATA_SWAdp_DataFar._WNWREO)

/* -- AdS dir ----- */
#define __EpmCrS_nMinInc_C (VECT_EpmCrS_Plaus_dir->_EpmCrS_nMinInc_C)
#define RP_EpmCrS_nMinInc_C (DATA_EpmCrS_Plaus_dir._EpmCrS_nMinInc_C)
#define __EpmSeq_phiDelayMax_CA (VECT_EpmSeq_StateMn_dir->_EpmSeq_phiDelayMax_CA)
#define RP_EpmSeq_phiDelayMax_CA (DATA_EpmSeq_StateMn_dir._EpmSeq_phiDelayMax_CA)

/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* -- AdS DataFar ----- */
#define KW_WNWREO __WNWREO
#define WNWREO __WNWREO

/* -- AdS dir ----- */


/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* CAS_ADAP_SY Typ=sw */
#ifndef CAS_ADAP_SY
  #define CAS_ADAP_SY 2L
#elif (CAS_ADAP_SY != 2L)
  #error >>>> 'CAS_ADAP_SY' multiple defined
#endif



/* CAS_ANGLE_SY Typ=sw */
#ifndef CAS_ANGLE_SY
  #define CAS_ANGLE_SY 1L
#elif (CAS_ANGLE_SY != 1L)
  #error >>>> 'CAS_ANGLE_SY' multiple defined
#endif



/* CAS_I1_SY Typ=sw */
#ifndef CAS_I1_SY
  #define CAS_I1_SY 1L
#elif (CAS_I1_SY != 1L)
  #error >>>> 'CAS_I1_SY' multiple defined
#endif



/* CAS_I2_SY Typ=sw */
#ifndef CAS_I2_SY
  #define CAS_I2_SY 0L
#elif (CAS_I2_SY != 0L)
  #error >>>> 'CAS_I2_SY' multiple defined
#endif



/* CAS_O1_SY Typ=sw */
#ifndef CAS_O1_SY
  #define CAS_O1_SY 0L
#elif (CAS_O1_SY != 0L)
  #error >>>> 'CAS_O1_SY' multiple defined
#endif



/* CAS_O2_SY Typ=sw */
#ifndef CAS_O2_SY
  #define CAS_O2_SY 0L
#elif (CAS_O2_SY != 0L)
  #error >>>> 'CAS_O2_SY' multiple defined
#endif



/* CRSSENSTYP_SY Typ=sw */
#ifndef CRSSENSTYP_SY
  #define CRSSENSTYP_SY 1L
#elif (CRSSENSTYP_SY != 1L)
  #error >>>> 'CRSSENSTYP_SY' multiple defined
#endif



/* CRS_BACKUP_SY Typ=sw */
#ifndef CRS_BACKUP_SY
  #define CRS_BACKUP_SY 0L
#elif (CRS_BACKUP_SY != 0L)
  #error >>>> 'CRS_BACKUP_SY' multiple defined
#endif



/* EPMRRS_SY Typ=sw */
#ifndef EPMRRS_SY
  #define EPMRRS_SY 2L
#elif (EPMRRS_SY != 2L)
  #error >>>> 'EPMRRS_SY' multiple defined
#endif



/* EPM_NENG10MSMAX Typ=sl */
#ifndef EPM_NENG10MSMAX
  #define EPM_NENG10MSMAX 5100L
#elif (EPM_NENG10MSMAX != 5100L)
  #error >>>> 'EPM_NENG10MSMAX' multiple defined
#endif



/* GDI_SY Typ=ub */
#ifndef GDI_SY
  #define GDI_SY 0L
#elif (GDI_SY != 0L)
  #error >>>> 'GDI_SY' multiple defined
#endif



/* NUMCASMAX Typ=sl */
#ifndef NUMCASMAX
  #define NUMCASMAX 1L
#elif (NUMCASMAX != 1L)
  #error >>>> 'NUMCASMAX' multiple defined
#endif



/* REVCNT_RES Typ=sl */
#ifndef REVCNT_RES
  #define REVCNT_RES 16L
#elif (REVCNT_RES != 16L)
  #error >>>> 'REVCNT_RES' multiple defined
#endif



/* SY_NWGA Typ=sw */
#ifndef SY_NWGA
  #define SY_NWGA 0L
#elif (SY_NWGA != 0L)
  #error >>>> 'SY_NWGA' multiple defined
#endif



/* SY_NWGA2 Typ=sw */
#ifndef SY_NWGA2
  #define SY_NWGA2 0L
#elif (SY_NWGA2 != 0L)
  #error >>>> 'SY_NWGA2' multiple defined
#endif



/* SY_NWGE Typ=sw */
#ifndef SY_NWGE
  #define SY_NWGE 1L
#elif (SY_NWGE != 1L)
  #error >>>> 'SY_NWGE' multiple defined
#endif



/* SY_NWGE2 Typ=sw */
#ifndef SY_NWGE2
  #define SY_NWGE2 0L
#elif (SY_NWGE2 != 0L)
  #error >>>> 'SY_NWGE2' multiple defined
#endif



/* SY_NWS Typ=sw */
#ifndef SY_NWS
  #define SY_NWS 2L
#elif (SY_NWS != 2L)
  #error >>>> 'SY_NWS' multiple defined
#endif



/* SY_NWSA Typ=sw */
#ifndef SY_NWSA
  #define SY_NWSA 0L
#elif (SY_NWSA != 0L)
  #error >>>> 'SY_NWSA' multiple defined
#endif



/* SY_WNWADM Typ=ub */
#ifndef SY_WNWADM
  #define SY_WNWADM 0L
#elif (SY_WNWADM != 0L)
  #error >>>> 'SY_WNWADM' multiple defined
#endif



/* SY_ZYLZA Typ=sw */
#ifndef SY_ZYLZA
  #define SY_ZYLZA 8L
#elif (SY_ZYLZA != 8L)
  #error >>>> 'SY_ZYLZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _EPM_SWADP_D */
