#ifndef _MEDC_FIXCONST_CUSTOM_DAT_H
#define _MEDC_FIXCONST_CUSTOM_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Local System Constant ACTYP_ELEC */


/* ACTYP_ELEC Typ=ub */
#ifndef ACTYP_ELEC
  #define ACTYP_ELEC 3L
#elif (ACTYP_ELEC != 3L)
  #error >>>> 'ACTYP_ELEC' multiple defined
#endif


/* Local System Constant ACTYP_MECH_FIX */


/* ACTYP_MECH_FIX Typ=ub */
#ifndef ACTYP_MECH_FIX
  #define ACTYP_MECH_FIX 1L
#elif (ACTYP_MECH_FIX != 1L)
  #error >>>> 'ACTYP_MECH_FIX' multiple defined
#endif


/* Local System Constant ACTYP_MECH_VAR */


/* ACTYP_MECH_VAR Typ=ub */
#ifndef ACTYP_MECH_VAR
  #define ACTYP_MECH_VAR 2L
#elif (ACTYP_MECH_VAR != 2L)
  #error >>>> 'ACTYP_MECH_VAR' multiple defined
#endif


/* Local System Constant APPLIMP_BP */


#ifndef APPLIMP_BP
  #define APPLIMP_BP 3  
  #define APPLIMP_BP_F 3.00000000000   
#elif (APPLIMP_BP != 3) 
  #error >>>> 'APPLIMP_BP' = APPLIMP_BP multiple defined  
#endif 
#if (APPLIMP_BP > 255) || (APPLIMP_BP < 0) 
    #error >>>> Systemconstant 'APPLIMP_BP' out of range 
#endif 



/* Local System Constant COEFFA_RES */


/* COEFFA_RES Typ=fl4 */
#ifndef COEFFA_RES
  #define COEFFA_RES 1L
#elif (COEFFA_RES != 1L)
  #error >>>> 'COEFFA_RES' multiple defined
#endif


/* Local System Constant COM_STCANVERMSK_V4 */


/* COM_STCANVERMSK_V4 Typ=uw */
#ifndef COM_STCANVERMSK_V4
  #define COM_STCANVERMSK_V4 1L
#elif (COM_STCANVERMSK_V4 != 1L)
  #error >>>> 'COM_STCANVERMSK_V4' multiple defined
#endif


/* Local System Constant COM_STCANVERMSK_V6 */


/* COM_STCANVERMSK_V6 Typ=uw */
#ifndef COM_STCANVERMSK_V6
  #define COM_STCANVERMSK_V6 1552L
#elif (COM_STCANVERMSK_V6 != 1552L)
  #error >>>> 'COM_STCANVERMSK_V6' multiple defined
#endif


/* Local System Constant COPOM_HYBSER */


#ifndef COPOM_HYBSER
  #define COPOM_HYBSER 1L
#elif (COPOM_HYBSER != 1L)
  #error >>>> 'COPOM_HYBSER' = COPOM_HYBSER multiple defined
#endif



/* Local System Constant COPT_TCS_BP */


#ifndef COPT_TCS_BP
  #define COPT_TCS_BP 0L
#elif (COPT_TCS_BP != 0L)
  #error >>>> 'COPT_TCS_BP' = COPT_TCS_BP multiple defined
#endif



/* Local System Constant CPP_HT_RLS_RATE_FLT_OFS */


/* CPP_HT_RLS_RATE_FLT_OFS Typ=sl */
#ifndef CPP_HT_RLS_RATE_FLT_OFS
  #define CPP_HT_RLS_RATE_FLT_OFS -5L
#elif (CPP_HT_RLS_RATE_FLT_OFS != -5L)
  #error >>>> 'CPP_HT_RLS_RATE_FLT_OFS' multiple defined
#endif


/* Local System Constant CTTMON_AIRMASS */


/* CTTMON_AIRMASS Typ=ub */
#ifndef CTTMON_AIRMASS
  #define CTTMON_AIRMASS 1L
#elif (CTTMON_AIRMASS != 1L)
  #error >>>> 'CTTMON_AIRMASS' multiple defined
#endif


/* Local System Constant CTTMON_TEMP */


/* CTTMON_TEMP Typ=ub */
#ifndef CTTMON_TEMP
  #define CTTMON_TEMP 2L
#elif (CTTMON_TEMP != 2L)
  #error >>>> 'CTTMON_TEMP' multiple defined
#endif


/* Local System Constant CURR_RMP_RES_SY */


/* CURR_RMP_RES_SY Typ=ul */
#ifndef CURR_RMP_RES_SY
  #define CURR_RMP_RES_SY 6554L
#elif (CURR_RMP_RES_SY != 6554L)
  #error >>>> 'CURR_RMP_RES_SY' multiple defined
#endif


/* Local System Constant CVCTYP_SY */


/* CVCTYP_SY Typ=ub */
#ifndef CVCTYP_SY
  #define CVCTYP_SY 0L
#elif (CVCTYP_SY != 0L)
  #error >>>> 'CVCTYP_SY' multiple defined
#endif


/* Local System Constant CYLK2_REC_RES */

/* Local System Constant GEAR8 */


/* GEAR8 Typ=ub */
#ifndef GEAR8
  #define GEAR8 8L
#elif (GEAR8 != 8L)
  #error >>>> 'GEAR8' multiple defined
#endif


/* Local System Constant LENGTH_MM_RES */


/* LENGTH_MM_RES Typ=sl */
#ifndef LENGTH_MM_RES
  #define LENGTH_MM_RES 1L
#elif (LENGTH_MM_RES != 1L)
  #error >>>> 'LENGTH_MM_RES' multiple defined
#endif


/* Local System Constant MOFEXTINT_TSCPTD_BP */


/* MOFEXTINT_TSCPTD_BP Typ=ub */
#ifndef MOFEXTINT_TSCPTD_BP
  #define MOFEXTINT_TSCPTD_BP 0L
#elif (MOFEXTINT_TSCPTD_BP != 0L)
  #error >>>> 'MOFEXTINT_TSCPTD_BP' multiple defined
#endif


/* Local System Constant NO_AC */


/* NO_AC Typ=ub */
#ifndef NO_AC
  #define NO_AC 0L
#elif (NO_AC != 0L)
  #error >>>> 'NO_AC' multiple defined
#endif


/* Local System Constant SPDGOV_TRQDEM */


/* SPDGOV_TRQDEM Typ=ub */
#ifndef SPDGOV_TRQDEM
  #define SPDGOV_TRQDEM 4L
#elif (SPDGOV_TRQDEM != 4L)
  #error >>>> 'SPDGOV_TRQDEM' multiple defined
#endif


/* Local System Constant STRT_ACTV */


/* STRT_ACTV Typ=ub */
#ifndef STRT_ACTV
  #define STRT_ACTV 1L
#elif (STRT_ACTV != 1L)
  #error >>>> 'STRT_ACTV' multiple defined
#endif


/* Local System Constant STRT_FIN */


/* STRT_FIN Typ=ub */
#ifndef STRT_FIN
  #define STRT_FIN 2L
#elif (STRT_FIN != 2L)
  #error >>>> 'STRT_FIN' multiple defined
#endif


/* Local System Constant SY_EBRAKT */


/* SY_EBRAKT Typ=ub */
#ifndef SY_EBRAKT
  #define SY_EBRAKT 0L
#elif (SY_EBRAKT != 0L)
  #error >>>> 'SY_EBRAKT' multiple defined
#endif


/* Local System Constant T50_STRTREQRST_BP */


/* T50_STRTREQRST_BP Typ=ub */
#ifndef T50_STRTREQRST_BP
  #define T50_STRTREQRST_BP 1L
#elif (T50_STRTREQRST_BP != 1L)
  #error >>>> 'T50_STRTREQRST_BP' multiple defined
#endif


/* Local System Constant T50_STRTREQ_BP */


/* T50_STRTREQ_BP Typ=ub */
#ifndef T50_STRTREQ_BP
  #define T50_STRTREQ_BP 0L
#elif (T50_STRTREQ_BP != 0L)
  #error >>>> 'T50_STRTREQ_BP' multiple defined
#endif


/* Local System Constant TIMESYS_MS_RES */


/* TIMESYS_MS_RES Typ=sl */
#ifndef TIMESYS_MS_RES
  #define TIMESYS_MS_RES 0L
#elif (TIMESYS_MS_RES != 0L)
  #error >>>> 'TIMESYS_MS_RES' multiple defined
#endif


/* Local System Constant TIME_10ms_CYCLE */


/* TIME_10ms_CYCLE Typ=sl */
#ifndef TIME_10ms_CYCLE
  #define TIME_10ms_CYCLE 10000L
#elif (TIME_10ms_CYCLE != 10000L)
  #error >>>> 'TIME_10ms_CYCLE' multiple defined
#endif


/* Local System Constant TIME_DT_1MS */


/* TIME_DT_1MS Typ=fl4 */
#ifndef TIME_DT_1MS
  #define TIME_DT_1MS 1000L
#elif (TIME_DT_1MS != 1000L)
  #error >>>> 'TIME_DT_1MS' multiple defined
#endif


/* Local System Constant TIME_DT_20MS */


/* TIME_DT_20MS Typ=fl4 */
#ifndef TIME_DT_20MS
  #define TIME_DT_20MS 20000L
#elif (TIME_DT_20MS != 20000L)
  #error >>>> 'TIME_DT_20MS' multiple defined
#endif


/* Local System Constant TRATYPE_CVT_SY */


/* TRATYPE_CVT_SY Typ=ub */
#ifndef TRATYPE_CVT_SY
  #define TRATYPE_CVT_SY 0L
#elif (TRATYPE_CVT_SY != 0L)
  #error >>>> 'TRATYPE_CVT_SY' multiple defined
#endif


/* Local System Constant TRQ_MAX */


/* TRQ_MAX Typ=sl */
#ifndef TRQ_MAX
  #define TRQ_MAX 10000L
#elif (TRQ_MAX != 10000L)
  #error >>>> 'TRQ_MAX' multiple defined
#endif


/* Local System Constant TRQ_MIN */


/* TRQ_MIN Typ=sl */
#ifndef TRQ_MIN
  #define TRQ_MIN -32768L
#elif (TRQ_MIN != -32768L)
  #error >>>> 'TRQ_MIN' multiple defined
#endif


/* Local System Constant VLTG_PA_RES */


/* VLTG_PA_RES Typ=sl */
#ifndef VLTG_PA_RES
  #define VLTG_PA_RES 100L
#elif (VLTG_PA_RES != 100L)
  #error >>>> 'VLTG_PA_RES' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_

#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */


#undef _DAT_H
#endif /* _MEDC_FIXCONST_CUSTOM_DAT_H */
