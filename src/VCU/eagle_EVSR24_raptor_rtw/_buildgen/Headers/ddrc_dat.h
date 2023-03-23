#ifndef _DDRC_DAT_H
#define _DDRC_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter DDRC_DurDeb */
#ifndef _DDRC_DurDeb_DEF
#define _DDRC_DurDeb_DEF
#ifndef DDRC_DURDEB_STR_DEF
#define DDRC_DURDEB_STR_DEF
typedef struct
{
    uint16 DevLib_tiBattUHiDebOk_C;
    uint16 DevLib_tiBattUHiDebDef_C;
    uint16 DevLib_tiBattULoDebOk_C;
    uint16 DevLib_tiBattULoDebDef_C;
    uint16 MRly_numSCGDebOk_C;
    uint16 MRly_numSCGDebDef_C;
    uint16 CY327_tiSSpMon1DebOk_C;
    uint16 CY327_tiSSpMon1DebDef_C;
    uint16 CY327_tiSSpMon1OVDebOk_C;
    uint16 CY327_tiSSpMon1OVDebDef_C;
    uint16 CY327_tiSSpMon1SCGDebOk_C;
    uint16 CY327_tiSSpMon1SCGDebDef_C;
    uint16 CY327_tiSSpMon1UVDebOk_C;
    uint16 CY327_tiSSpMon1UVDebDef_C;
    uint16 CY327_tiSSpMon2DebOk_C;
    uint16 CY327_tiSSpMon2DebDef_C;
    uint16 CY327_tiSSpMon2OVDebOk_C;
    uint16 CY327_tiSSpMon2OVDebDef_C;
    uint16 CY327_tiSSpMon2SCGDebOk_C;
    uint16 CY327_tiSSpMon2SCGDebDef_C;
    uint16 CY327_tiSSpMon2UVDebOk_C;
    uint16 CY327_tiSSpMon2UVDebDef_C;
    uint16 CY327_tiSSpMon3DebOk_C;
    uint16 CY327_tiSSpMon3DebDef_C;
    uint16 CY327_tiSSpMon3OVDebOk_C;
    uint16 CY327_tiSSpMon3OVDebDef_C;
    uint16 CY327_tiSSpMon3SCGDebOk_C;
    uint16 CY327_tiSSpMon3SCGDebDef_C;
    uint16 CY327_tiSSpMon3UVDebOk_C;
    uint16 CY327_tiSSpMon3UVDebDef_C;
    uint16 CY327_tiSSpMonOTDebOk_C;
    uint16 CY327_tiSSpMonOTDebDef_C;
    uint16 CY327_tiSpiComDebOk_C;
    uint16 CY327_tiSpiComDebDef_C;
    uint16 MonUMaxSupply1DebOk_C;
    uint16 MonUMaxSupply1DebDef_C;
    uint16 MonUMinSupply1DebOk_C;
    uint16 MonUMinSupply1DebDef_C;
    uint16 IgnClPs_numClBenchErr1DebOk_C;
    uint16 IgnClPs_numClBenchErr1DebDef_C;
    uint16 IgnClPs_numClBenchErr2DebOk_C;
    uint16 IgnClPs_numClBenchErr2DebDef_C;
    uint16 IgnClPs_numDevIdentErr1DebOk_C;
    uint16 IgnClPs_numDevIdentErr1DebDef_C;
    uint16 IgnClPs_numDevIdentErr2DebOk_C;
    uint16 IgnClPs_numDevIdentErr2DebDef_C;
    uint16 IgnClPs_numDevInitErr1DebOk_C;
    uint16 IgnClPs_numDevInitErr1DebDef_C;
    uint16 IgnClPs_numDevInitErr2DebOk_C;
    uint16 IgnClPs_numDevInitErr2DebDef_C;
    uint16 IgnClPs_numDevSpiErr1DebOk_C;
    uint16 IgnClPs_numDevSpiErr1DebDef_C;
    uint16 IgnClPs_numDevSpiErr2DebOk_C;
    uint16 IgnClPs_numDevSpiErr2DebDef_C;
    uint16 IgnClPs_numOpenLoad0DebOk_C;
    uint16 IgnClPs_numOpenLoad0DebDef_C;
    uint16 IgnClPs_numOpenLoad1DebOk_C;
    uint16 IgnClPs_numOpenLoad1DebDef_C;
    uint16 IgnClPs_numOpenLoad2DebOk_C;
    uint16 IgnClPs_numOpenLoad2DebDef_C;
    uint16 IgnClPs_numOpenLoad3DebOk_C;
    uint16 IgnClPs_numOpenLoad3DebDef_C;
    uint16 IgnClPs_numOpenLoad4DebOk_C;
    uint16 IgnClPs_numOpenLoad4DebDef_C;
    uint16 IgnClPs_numOpenLoad5DebOk_C;
    uint16 IgnClPs_numOpenLoad5DebDef_C;
    uint16 IgnClPs_numOpenLoad6DebOk_C;
    uint16 IgnClPs_numOpenLoad6DebDef_C;
    uint16 IgnClPs_numOpenLoad7DebOk_C;
    uint16 IgnClPs_numOpenLoad7DebDef_C;
    uint16 IgnClPs_numShCirBatt0DebOk_C;
    uint16 IgnClPs_numShCirBatt0DebDef_C;
    uint16 IgnClPs_numShCirBatt1DebOk_C;
    uint16 IgnClPs_numShCirBatt1DebDef_C;
    uint16 IgnClPs_numShCirBatt2DebOk_C;
    uint16 IgnClPs_numShCirBatt2DebDef_C;
    uint16 IgnClPs_numShCirBatt3DebOk_C;
    uint16 IgnClPs_numShCirBatt3DebDef_C;
    uint16 IgnClPs_numShCirBatt4DebOk_C;
    uint16 IgnClPs_numShCirBatt4DebDef_C;
    uint16 IgnClPs_numShCirBatt5DebOk_C;
    uint16 IgnClPs_numShCirBatt5DebDef_C;
    uint16 IgnClPs_numShCirBatt6DebOk_C;
    uint16 IgnClPs_numShCirBatt6DebDef_C;
    uint16 IgnClPs_numShCirBatt7DebOk_C;
    uint16 IgnClPs_numShCirBatt7DebDef_C;
    uint16 IgnClPs_numShCirGnd0DebOk_C;
    uint16 IgnClPs_numShCirGnd0DebDef_C;
    uint16 IgnClPs_numShCirGnd1DebOk_C;
    uint16 IgnClPs_numShCirGnd1DebDef_C;
    uint16 IgnClPs_numShCirGnd2DebOk_C;
    uint16 IgnClPs_numShCirGnd2DebDef_C;
    uint16 IgnClPs_numShCirGnd3DebOk_C;
    uint16 IgnClPs_numShCirGnd3DebDef_C;
    uint16 IgnClPs_numShCirGnd4DebOk_C;
    uint16 IgnClPs_numShCirGnd4DebDef_C;
    uint16 IgnClPs_numShCirGnd5DebOk_C;
    uint16 IgnClPs_numShCirGnd5DebDef_C;
    uint16 IgnClPs_numShCirGnd6DebOk_C;
    uint16 IgnClPs_numShCirGnd6DebDef_C;
    uint16 IgnClPs_numShCirGnd7DebOk_C;
    uint16 IgnClPs_numShCirGnd7DebDef_C;
    uint16 UEGO_numASICDebOk_C;
    uint16 UEGO_numASICDebDef_C;
    uint16 UEGO_numDiagSnsrDebOk_C;
    uint16 UEGO_numDiagSnsrDebDef_C;
    uint16 UEGO_numOLDebOk_C;
    uint16 UEGO_numOLDebDef_C;
    uint16 UEGO_numSCBDebOk_C;
    uint16 UEGO_numSCBDebDef_C;
    uint16 UEGO_numSCGDebOk_C;
    uint16 UEGO_numSCGDebDef_C;
    uint16 UEGO_numSPIDebOk_C;
    uint16 UEGO_numSPIDebDef_C;
    uint16 KnDet_numShCirDebOk_C;
    uint16 KnDet_numShCirDebDef_C;
} DDRC_DurDeb_str;
#endif
#endif /* _DDRC_DurDeb_DEF */

/* Defined Parameter DDRC_RatDeb */
#ifndef _DDRC_RatDeb_DEF
#define _DDRC_RatDeb_DEF
#ifndef DDRC_RATDEB_STR_DEF
#define DDRC_RATDEB_STR_DEF
typedef struct
{
    uint8 DevLib_tiBattUHiUDRat_C;
    uint8 DevLib_tiBattULoUDRat_C;
    uint8 MRly_numSCGUDRat_C;
} DDRC_RatDeb_str;
#endif
#endif /* _DDRC_RatDeb_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant DDRC_DTRFRZINFHEALDEB_SY */


/* DDRC_DTRFRZINFHEALDEB_SY Typ=ub */
#ifndef DDRC_DTRFRZINFHEALDEB_SY
  #define DDRC_DTRFRZINFHEALDEB_SY 0L
#elif (DDRC_DTRFRZINFHEALDEB_SY != 0L)
  #error >>>> 'DDRC_DTRFRZINFHEALDEB_SY' multiple defined
#endif


/* Referenced System Constant DDRC_DTRUPDSUP_SY */


/* DDRC_DTRUPDSUP_SY Typ=ub */
#ifndef DDRC_DTRUPDSUP_SY
  #define DDRC_DTRUPDSUP_SY 0L
#elif (DDRC_DTRUPDSUP_SY != 0L)
  #error >>>> 'DDRC_DTRUPDSUP_SY' multiple defined
#endif


/* Local System Constant DDRC_NUM_DFC_EVTROW */


/* DDRC_NUM_DFC_EVTROW Typ=sl */
#ifndef DDRC_NUM_DFC_EVTROW
  #define DDRC_NUM_DFC_EVTROW 52L
#elif (DDRC_NUM_DFC_EVTROW != 52L)
  #error >>>> 'DDRC_NUM_DFC_EVTROW' multiple defined
#endif


/* Local System Constant DDRC_NUM_DFC_EVTROW_SML */


/* DDRC_NUM_DFC_EVTROW_SML Typ=sl */
#ifndef DDRC_NUM_DFC_EVTROW_SML
  #define DDRC_NUM_DFC_EVTROW_SML 16L
#elif (DDRC_NUM_DFC_EVTROW_SML != 16L)
  #error >>>> 'DDRC_NUM_DFC_EVTROW_SML' multiple defined
#endif


/* Local System Constant DDRC_NUM_DFC_EVTUD */


/* DDRC_NUM_DFC_EVTUD Typ=sl */
#ifndef DDRC_NUM_DFC_EVTUD
  #define DDRC_NUM_DFC_EVTUD 0L
#elif (DDRC_NUM_DFC_EVTUD != 0L)
  #error >>>> 'DDRC_NUM_DFC_EVTUD' multiple defined
#endif


/* Local System Constant DDRC_NUM_DFC_EVTUD_SML */


/* DDRC_NUM_DFC_EVTUD_SML Typ=sl */
#ifndef DDRC_NUM_DFC_EVTUD_SML
  #define DDRC_NUM_DFC_EVTUD_SML 1L
#elif (DDRC_NUM_DFC_EVTUD_SML != 1L)
  #error >>>> 'DDRC_NUM_DFC_EVTUD_SML' multiple defined
#endif


/* Local System Constant DDRC_NUM_DFC_TIROW */


/* DDRC_NUM_DFC_TIROW Typ=sl */
#ifndef DDRC_NUM_DFC_TIROW
  #define DDRC_NUM_DFC_TIROW 16L
#elif (DDRC_NUM_DFC_TIROW != 16L)
  #error >>>> 'DDRC_NUM_DFC_TIROW' multiple defined
#endif


/* Local System Constant DDRC_NUM_DFC_TIROW_SML */


/* DDRC_NUM_DFC_TIROW_SML Typ=sl */
#ifndef DDRC_NUM_DFC_TIROW_SML
  #define DDRC_NUM_DFC_TIROW_SML 0L
#elif (DDRC_NUM_DFC_TIROW_SML != 0L)
  #error >>>> 'DDRC_NUM_DFC_TIROW_SML' multiple defined
#endif


/* Local System Constant DDRC_NUM_DFC_TIUD */


/* DDRC_NUM_DFC_TIUD Typ=sl */
#ifndef DDRC_NUM_DFC_TIUD
  #define DDRC_NUM_DFC_TIUD 2L
#elif (DDRC_NUM_DFC_TIUD != 2L)
  #error >>>> 'DDRC_NUM_DFC_TIUD' multiple defined
#endif


/* Local System Constant DDRC_NUM_DFC_TIUD_SML */


/* DDRC_NUM_DFC_TIUD_SML Typ=sl */
#ifndef DDRC_NUM_DFC_TIUD_SML
  #define DDRC_NUM_DFC_TIUD_SML 0L
#elif (DDRC_NUM_DFC_TIUD_SML != 0L)
  #error >>>> 'DDRC_NUM_DFC_TIUD_SML' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema dir +++++ */


/* Local Variable: DDRC_St */


/* +++++ Addressschema intRam +++++ */


/* Local Variable: DSM_ctPreDeb */


/* Local Variable: DSM_ctPreDebSm */


/* Local Variable: DSM_xTabVersion */



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

/* -- No referenced PTA Structures of GConf_Sy -- */

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DDRC_ADS_PTA_01_T_DEF
#define DATA_DDRC_ADS_PTA_01_T_DEF
typedef struct
{
    /* ----- Parameter DDRC_DurDeb ----- */
    DDRC_DurDeb_str _DDRC_DurDeb;
} DATA_DDRC_ADS_PTA_01_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DDRC_ADS_PTA_01_t DATA_DDRC_ADS_PTA_01
    __attribute__ ((asection (".pta_dataADS_PTA_01_DDRC","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DDRC_ADS_PTA_01_t * const VECT_DDRC_ADS_PTA_01
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_01_DDRC","f=as")));
#endif

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_DDRC_ADS_PTA_02_T_DEF
#define DATA_DDRC_ADS_PTA_02_T_DEF
typedef struct
{
    /* ----- Parameter DDRC_RatDeb ----- */
    DDRC_RatDeb_str _DDRC_RatDeb;
} DATA_DDRC_ADS_PTA_02_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_DDRC_ADS_PTA_02_t DATA_DDRC_ADS_PTA_02
    __attribute__ ((asection (".pta_dataADS_PTA_02_DDRC","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_DDRC_ADS_PTA_02_t * const VECT_DDRC_ADS_PTA_02
    __attribute__ ((asection (".sdata.pta_vectADS_PTA_02_DDRC","f=as")));
#endif

/* +++++ Addressschema dir +++++ */

/* +++++ Addressschema intRam +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */

/* +++++ Addressschema ADS_PTA_01 +++++ */

/* -- Macro for local Parameter DDRC_DurDeb -- */
#ifndef DDRC_DurDeb
#define DDRC_DurDeb (VECT_DDRC_ADS_PTA_01->_DDRC_DurDeb)
#endif

#ifndef RP_DDRC_DurDeb
#define RP_DDRC_DurDeb (DATA_DDRC_ADS_PTA_01._DDRC_DurDeb)
#endif

#ifndef __DDRC_DurDeb
#define __DDRC_DurDeb (VECT_DDRC_ADS_PTA_01->_DDRC_DurDeb)
#endif

/* +++++ Addressschema ADS_PTA_02 +++++ */

/* -- Macro for local Parameter DDRC_RatDeb -- */
#ifndef DDRC_RatDeb
#define DDRC_RatDeb (VECT_DDRC_ADS_PTA_02->_DDRC_RatDeb)
#endif

#ifndef RP_DDRC_RatDeb
#define RP_DDRC_RatDeb (DATA_DDRC_ADS_PTA_02._DDRC_RatDeb)
#endif

#ifndef __DDRC_RatDeb
#define __DDRC_RatDeb (VECT_DDRC_ADS_PTA_02->_DDRC_RatDeb)
#endif

/* +++++ Addressschema dir +++++ */

/* +++++ Addressschema intRam +++++ */


#undef _DAT_H
#endif /* _DDRC_DAT_H */
