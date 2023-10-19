/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************

 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:dfes_dia_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:OLA4COB$
 * $Date______:19.09.2014$
 * $Class_____:SWHDR$
 * $Name______:dfes_dia_pub$
 * $Variant___:2.33.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 2.33.0; 0     19.09.2014 OLA4COB
 *   Freeze frame data for pending faults in Service02
 * 
 * 2.22.0; 0     01.08.2012 PKA2SI
 *   common env block calibration
 * 
 * 2.19.0; 0     16.05.2012 PKA2SI
 *   3 level OBD freezeframe priority
 * 
 * 2.17.0; 0     16.03.2012 MMO2FE
 *   Compiler Independence warnings removal.
 * 
 * 2.15.0; 0     21.12.2011 PKA2SI
 *   DCM DID support for environment data
 * 
 * 2.11.0; 0     04.03.2011 PKA2SI
 *   support of AUTOSAR DTCGroups
 * 
 * 2.7.0; 0     19.03.2010 PKA2SI
 *   suppress temporary FID releases caused by NotTested inhibit limits
 * 
 * 2.5.0; 1     25.08.2009 ILK2SI
 *   new misra warnings removed
 * 
 * 2.5.0; 0     10.08.2009 ILK2SI
 *   decentral visiblity buffer
 * 
 * 2.1.0; 0     26.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DFES_DIA_PUB_H
#define _DFES_DIA_PUB_H

#include "dfes_auto_pub.h" /* needed for DFES_CNF_NUM_ENTRIES */

/**
 ***************************************************************************************************
 * moduledescription
 *                      public prototypes and definitions for the diagnostic interface
 *                      access to DFES
 *
 * scope               API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Definition of visiblity filters */
/***********************************/
/* The assignment is only preliminary, because the output definition does not fit to
   the filter requirements */

/* Entries visible for mode 7 diagnosis */
#define DFES_FLT_OBD_MODE7          DFES_ST_DIA_OUT_OBDPENDING
/* Entries visible for mode 3 diagnosis */
#define DFES_FLT_OBD_MODE3          (DFES_ST_DIA_OUT_OBD_LOW | DFES_ST_DIA_OUT_OBD_HIGH \
                                    | DFES_ST_DIA_OUT_OBD_HIGHPLUS)
/* Entries visible in mode 3 or mode 7 */
#define DFES_FLT_OBD_MODE3_7        (DFES_FLT_OBD_MODE3 | DFES_FLT_OBD_MODE7)

/* All existing entries of OBD relevant checks regardless of visibility. */
#define DFES_FLT_OBD_MODE_ALL       ( DFES_ST_DIA_OUT_RELEVANT )

/* Freeze frames with high misfire priority */
#define DFES_FLT_OBD_FRZFR_HIGHPLUS (DFES_ST_DIA_OUT_OBD_HIGHPLUS)

/* Freeze frames with high priority */
/* Split of OBD_HIGH into OBD_HIGH, OBD_HIGHPLUS should be downwards compatible for users, so
 * DFES_FLT_OBD_FRZFR_HIGH request returns merged result of OBD_HIGH / OBD_HIGHPLUS calibrated DFCs
 */
#define DFES_FLT_OBD_FRZFR_HIGH     (DFES_ST_DIA_OUT_OBD_HIGH | DFES_ST_DIA_OUT_OBD_HIGHPLUS)

/* Freeze frames with low priority */
#define DFES_FLT_OBD_FRZFR_LOW      DFES_ST_DIA_OUT_OBD_LOW

/* Service relevant faults with high visibility */
#define DFES_FLT_SERVICE_HIGH       DFES_ST_DIA_OUT_SERVICE_HIGH
/* Service relevant faults with low visibility */
#define DFES_FLT_SERVICE_LOW        DFES_ST_DIA_OUT_SERVICE_LOW
/* Manufacturer faults with high visibility */
#define DFES_FLT_MANUF_HIGH         DFES_ST_DIA_OUT_MANUF_HIGH
/* Manufacturer faults with low visibility */
#define DFES_FLT_MANUF_LOW          DFES_ST_DIA_OUT_MANUF_LOW
/* All entries which contain information exclusive history cleared entries */
#define DFES_FLT_ALL                0xE
/* All diagnostic platform relevant faults */
#define DFES_FLT_DIAP               (DFES_ST_DIA_OUT_SERVICE_HIGH | DFES_ST_DIA_OUT_SERVICE_LOW)

/* All faults in status "delayed deleted" */
#define DFES_FLT_DELAYED_DEL        DFES_ST_DIA_OUT_DELAY_DEL
/* All faults in status "healed deleted" */
#define DFES_FLT_HEALED_DEL         DFES_ST_DIA_OUT_HEAL_DEL

/* Entries visible for mode A diagnosis */
#define DFES_FLT_OBD_MODEA          DFES_ST_DIA_OUT_PDTC



/* Definitions for decentral visibility buffer */
/* =========================================== */

/*  Layout of class visibility
15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
|  |  |  |  |  |  | | | | | | | | |  \_ INVISIBLE
|  |  |  |  |  |  | | | | | | | |  \___ SERVICE_LOW
|  |  |  |  |  |  | | | | | | |  \_____ SERVICE_HIGH
|  |  |  |  |  |  | | | | | |  \_______
|  |  |  |  |  |  | | | | |  \_________
|  |  |  |  |  |  | | | |  \___________ OBD_LOW
|  |  |  |  |  |  | | |  \_____________ OBD_HIGH
|  |  |  |  |  |  | |  \_______________ OBD_HIGHPLUS
|  |  |  |  |  |  |  \_________________
|  |  |  |  |  |   \___________________
|  |  |  |  |   \______________________
|  |  |  |   \_________________________
|  |  |   \____________________________
|  |   \_______________________________
|   \__________________________________
 \_____________________________________

*/


#define DFES_VIS_CLS_INVISIBLE         0x0001
#define DFES_VIS_CLS_SERVICE_LOW       0x0002
#define DFES_VIS_CLS_SERVICE_HIGH      0x0004
#define DFES_VIS_CLS_OBD_LOW           0x0020
#define DFES_VIS_CLS_OBD_HIGH_MSK      0x0040
#define DFES_VIS_CLS_OBD_HIGHPLUS      0x0080

/*******************/
/* complex defines */
/*******************/
/* Split of OBD_HIGH into OBD_HIGH, OBD_HIGHPLUS should be downwards compatible for users, so
 * DFES_VIS_CLS_OBD_HIGH request returns merged result of OBD_HIGH / OBD_HIGHPLUS calibrated DFCs
 */
#define DFES_VIS_CLS_OBD_HIGH          (DFES_VIS_CLS_OBD_HIGH_MSK | DFES_VIS_CLS_OBD_HIGHPLUS)
/* all classes which are only visible on service tester (i.e. not visible on OBD tester) */
#define DFES_VIS_CLS_SERVICE          ( DFES_VIS_CLS_SERVICE_LOW | DFES_VIS_CLS_SERVICE_HIGH )
/* all OBD visible classes */
#define DFES_VIS_CLS_OBD              ( DFES_VIS_CLS_OBD_LOW | DFES_VIS_CLS_OBD_HIGH)
/* all tester visible classes */
#define DFES_VIS_CLS_ALL              ( DFES_VIS_CLS_SERVICE | DFES_VIS_CLS_OBD)
/* Only for OBD High Classes*/
#define DFES_VIS_CLS_OBD_HIGH_ONLY 	    DFES_VIS_CLS_OBD_HIGH_MSK


/*  Layout of DFES state visibility
DFES_StateVisibility:
=====================

15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
|  |  |  |  |  |  | | | | | | | | |  \_ DELAYED_DEL     all delayed delete DTC, which should be
|  |  |  |  |  |  | | | | | | | | |                     confirmed by a healing DC are visible
|  |  |  |  |  |  | | | | | | | |  \___ DELETED         entry deleted by self healing
|  |  |  |  |  |  | | | | | | |  \_____ SHADOW          shadow entry
|  |  |  |  |  |  | | | | | |  \_______ SERVICE_HISTORY only visible for service testers
|  |  |  |  |  |  | | | | |  \_________ PDTC            visible in service A
|  |  |  |  |  |  | | | |  \___________ SERVICE03       visible in service 3
|  |  |  |  |  |  | | |  \_____________ DEBOUNCE        visible in service 7
|  |  |  |  |  |  | |  \_______________ PENDING         visible in service 7
|  |  |  |  |  |  |  \_________________
|  |  |  |  |  |   \___________________
|  |  |  |  |   \______________________
|  |  |  |   \_________________________
|  |  |   \____________________________
|  |   \_______________________________
|   \__________________________________
 \_____________________________________

*/


#define DFES_VIS_ST_DELAYED_DEL       0x0001
#define DFES_VIS_ST_DELETED           0x0002
#define DFES_VIS_ST_SHADOW            0x0004
#define DFES_VIS_ST_SERVICE_HISTORY   0x0008
#define DFES_VIS_ST_PDTC              0x0010
#define DFES_VIS_ST_SERVICE03         0x0020
#define DFES_VIS_ST_DEBOUNCE          0x0040
#define DFES_VIS_ST_PENDING           0x0080

/*******************/
/* complex defines */
/*******************/

/* entry service 7 visible */
#define DFES_VIS_ST_SERVICE07         ( DFES_VIS_ST_DEBOUNCE | DFES_VIS_ST_PENDING )
/* all states beside deleted entries */
#define DFES_VIS_ST_ALL               ( DFES_VIS_ST_SHADOW |\
                                        DFES_VIS_ST_SERVICE_HISTORY |\
                                        DFES_VIS_ST_PDTC |\
                                        DFES_VIS_ST_SERVICE03 |\
                                        DFES_VIS_ST_DEBOUNCE |\
                                        DFES_VIS_ST_PENDING )
/* all states including deleted entries */
#define DFES_VIS_ST_ALL_DEL           ( DFES_VIS_ST_DELETED |\
                                        DFES_VIS_ST_SHADOW |\
                                        DFES_VIS_ST_SERVICE_HISTORY |\
                                        DFES_VIS_ST_PDTC |\
                                        DFES_VIS_ST_SERVICE03 |\
                                        DFES_VIS_ST_DEBOUNCE |\
                                        DFES_VIS_ST_PENDING )
/* all states which are visible on service tester */
#define DFES_VIS_ST_SERVICE_ALL       ( DFES_VIS_ST_SERVICE_HISTORY |\
                                        DFES_VIS_ST_PDTC |\
                                        DFES_VIS_ST_SERVICE03 |\
                                        DFES_VIS_ST_DEBOUNCE |\
                                        DFES_VIS_ST_PENDING )




/*  Layout of filter visibility
8 7 6 5 4 3 2 1 0
| | | | | | | |  \_ TCSORT
| | | | | | |  \___
| | | | | |  \_____
| | | | |  \_______
| | | |  \_________
| | |  \___________
| |  \_____________
|  \_______________
 \_________________

*/

#define DFES_VIS_FLT_NO               0x00
#define DFES_VIS_FLT_TCSORT           0x01
#define DFES_VIS_FLT_ALL              0xFF

/* Definition of DTC Table selections */
/**************************************/
#define DFES_DTC_TAB_CARB           0       /* for the CARB relevant DTC                          */
#define DFES_DTC_TAB_EPA            1       /* for the EPA relevant DTC                           */
#define DFES_DTC_TAB_EOBD           2       /* for the European table                             */
#define DFES_DTC_TAB_CUST           3       /* for the customer specific table                    */
#define DFES_DTC_TAB_EXTD           4       /* for the extended customer specific table           */
#define DFES_DTC_TAB_DIAP           5       /* for the DiaP specific table                        */

#define DFES_DTC_NO_ENTRY           255     /* no entry is available for DTC                      */


/* define freeze frame access mode */
/***********************************/
#define DFES_FRZFR_TEST_EXISTENCE   0
#define DFES_FRZFR_GET_OBD_DATA     1
#define DFES_FRZFR_GET_PDIA_DATA    2

#define DFES_DIA_LEGAL_FRZFR        0       /* access to OBD freeze frame                         */
#define DFES_DIA_MANU_FRZFR         1       /* access to manufacturer specific freeze frame       */


/* additional security parameter for DFES_ClrAllAndInit()  */
/***********************************/
#define DFES_CLR_USE_EOL_ONLY       0x2A


/* defines for return value of the function DFES_GetActEnvData */
#define DFES_ENVDATA_OK             0u      /* All OK                                             */
#define DFES_ENVDATA_BUF_OVRFLW     1u      /* Buffer size not enough, buffer overflow            */
#define DFES_ENVDATA_CLS_INVLD      2u      /* Invalid Environmental class number                 */

/*
 ***************************************************************************************************
 * Access macro definitions
 ***************************************************************************************************
 */
 /* macros can be defined even for not available information. The macros may be used only if the
    information is present in the system */


#define DFES_GetEntryDFC(idxEntry, Dummy)         (DFES_numDFC[DFES_idxVisible[(idxEntry)]])

/* the following macros are only available because this interfaces have been announced before.
   since the DSMDur realisation is now fully generic, the macro DFES_GetEntryCtDur should be used.*/
#define DFES_GetEntryMileage(idxEntry, idxValue)  (DSMDur_GetDFESCnt(idxEntry, idxValue))
#define DFES_GetEntryOpTime(idxEntry, idxValue)   (DSMDur_GetDFESCnt(idxEntry, idxValue))


#define DFES_GetEntryCtDur(idxEntry, idxValue)    (DSMDur_GetDFESCnt(idxEntry, idxValue))


#define DFES_GetClassFromDFC(idxDFC)              (DFES_numClass(idxDFC))

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef struct
{
    uint8   stCheck;
    uint8   stEntry;
    uint8   stDia;
    uint8   stLamp;
    uint8   stCnt;
    uint8   stOBDCV;
    uint8   ctFreq;
    uint8   ctDel;
    uint8   ctFLC;
    uint8   ctHLC;
    uint8   ctFLCSvc;
    uint8   ctHLCSvc;
    uint8   ctAging;
    uint8   ctFail;
    uint8   ctPass;
    uint8   ctNoTst;
    uint8   faultSeq;
} DFES_stEntryType;

typedef struct
{
    uint8   stCheck;
    uint8   stEntry;
    uint16  stVis;
    uint8   stLamp;
    uint8   stCnt;
    uint8   stOBDCV;
    uint8   ctFreq;
    uint8   ctDel;
    uint8   ctFLC;
    uint8   ctHLC;
    uint8   ctFLCSvc;
    uint8   ctHLCSvc;
    uint8   ctAging;
    uint8   ctFail;
    uint8   ctPass;
    uint8   ctNoTst;
    uint8   faultSeq;
} DFES_stEntryType2;

/* Definition of the Bitfield */
/* MISRA RULE 111 VIOLATION: bit field of uint8 required to spare ressources */
struct ConditionType
{
    uint entryReplaced  : 1;   /* existing entry replaced by another with higher priority */
    uint entryRejected  : 1;   /* new entry denied, no free line or entry with less priority */
};

typedef struct
{
    struct ConditionType stCondition;
} DFES_stFESType;


/* decentral visibility buffer */
/* I is not allowed to access the local variables directly! Please use the defined access functions! */
typedef struct
{
    uint8 buffer[DFES_CNF_NUM_ENTRIES];
    uint8 count;
} DFES_VisType;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8            DFES_idxVisible[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END



/* Prototypes */
/**************/

/* visiblity filtering */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_SetFltVisibility(uint idFlt);

uint DFES_GetFltVisibility(void);

uint DFES_GetCnt(void);

/* Raw DFES-entry status request */
uint DFES_GetStEntryIntIdx(uint idxDFES, /* CAUTION: Internal Index of DFES */
                           uint * DFCId,
                           DFES_stEntryType * stEntry);

uint DFES_GetStEntryIntIdx2(uint idxDFES, /* CAUTION: Internal Index of DFES */
                           uint * DFCId,
                           DFES_stEntryType2 * stEntry);

/* DTC handling */
uint DFES_GetDTCEntry(       uint      idxVisible
                           , uint      idxTable);

uint DFES_GetDTCDFC(         uint      idxDFC
                           , uint      idxTable);

uint DFES_GetDTCDiaP(        uint      idxVisible);


uint DFES_GetIdxFromDTC(     uint      valDTC
                           , uint      idxDFCStart
                           , uint      idxTable
                           , uint  *   idxVisible
                           , uint  *   idxDFC);

uint DFES_GetDFCTyp(         uint      idxDFC );



/* freeze frame and extended freeze frame handling */
uint DFES_GetFrzFrEnvAvl(       const uint16 ** adAvlElm,
                                uint            numSelFrzFr);

uint DFES_GetFrzFrEnvAvlDid(    const uint16 ** adAvlElm,
                                uint            numSelFrzFr);

uint DFES_GetFrzFrEnvData(   uint      idxEntry
                           , uint      idxEnv
                           , uint      numSelFrzFr
                           , uint      stMode
                           , uint32 *  SignalData );

uint DFES_GetFrzFrSigData(   uint      numSignal
                           , uint      numEntry
                           , uint      numSelFrzFr
                           , uint      stMode
                           , uint32 *  SignalData );


/* check specific environment blocks */
uint DFES_GetSvcEnvAvl(      uint            idxEntry
                           , const uint16 ** adAvlElm );

uint DFES_VisGetSvcEnvAvl(   const DFES_VisType* ptVis
                           , uint            idxVis
                           , const uint16 ** adAvlElm );

uint DFES_VisGetSvcEnvAvlDid(const DFES_VisType* ptVis,
                             uint                idxVis,
                             const uint16 **     adAvlElm);

uint DFES_VisGetSvcEnvAvlDfc(const DFES_VisType* ptVis
                           , uint            idxVis
                           , const uint16 ** adAvlElm );

uint DFES_VisGetSvcEnvAvlDfcDid(const DFES_VisType* ptVis,
                                uint                idxVis,
                                const uint16 **     adAvlElm);

uint DFES_VisGetSvcEnvAvlCmn(const DFES_VisType* ptVis
                          , uint            idxVis
                          , const uint16 ** adAvlElm );

uint DFES_VisGetSvcEnvAvlCmnDid(const DFES_VisType* ptVis,
                               uint                idxVis,
                               const uint16 **     adAvlElm);

uint DFES_GetSvcEnvBlkAvl( void );

uint DFES_GetSvcEnvData(     uint      idxEntry
                           , uint      numBlk
                           , uint      idxBlk
                           , uint      stMode
                           , uint32 *  SignalData );

uint DFES_VisGetSvcEnvData(const DFES_VisType* ptVis
                           , uint      idxVis
                           , uint      numBlk
                           , uint      idxBlk
                           , uint      stMode
                           , uint32 *  SignalData );

uint DFES_VisGetSvcEnvDataDid(const DFES_VisType* ptVis,
                              uint                idxVis,
                              uint                numBlk,
                              uint                idxBlk,
                              uint8*              Data);

uint DFES_VisGetSvcEnvDataDfc(const DFES_VisType* ptVis
                           , uint      idxVis
                           , uint      numBlk
                           , uint      idxBlk
                           , uint      stMode
                           , uint32 *  SignalData );

uint DFES_VisGetSvcEnvDataDfcDid(const DFES_VisType*   ptVis,
                              uint                  idxVis,
                              uint                  numBlk,
                              uint                  idxBlk,
                              uint8*                Data);

uint DFES_VisGetSvcEnvDataCmn(const DFES_VisType* ptVis
                         , uint      idxVis
                         , uint      numBlk
                         , uint      idxBlk
                         , uint      stMode
                         , uint32 *  SignalData );

uint DFES_VisGetSvcEnvDataCmnDid(const DFES_VisType*   ptVis,
                            uint                  idxVis,
                            uint                  numBlk,
                            uint                  idxBlk,
                            uint8*                Data);

uint DFES_GetActEnvData(        uint        xSet
                        ,       uint8  *    adBuffer
                        ,       uint8       sizeBuffer
                        ,       uint8  *    numSignals
                        , const uint16 **   adAvlSignals
                       );

uint DFES_GetActEnvDataDfc(     uint        xSet
                        ,       uint8  *    adBuffer
                        ,       uint8       sizeBuffer
                        ,       uint8  *    numSignals
                        , const uint16 **   adAvlSignals
                       );

uint DFES_GetActEnvDataCmn(     uint8  *    adBuffer
                        ,       uint8       sizeBuffer
                        ,       uint8  *    numSignals
                        , const uint16 **   adAvlSignals
                       );

/* access to raw information of DFC status and DFES entry*/
uint DFES_GetAddEntryStatus( uint      idxVisible
                           , DFES_stEntryType * stEntry);

/* Fetch the current state of the fault event storage */
uint DFES_GetFESStatus(DFES_stFESType * stFES);

/* handling of clear */
uint DFES_ClrEntry(          uint      idxDFC);

uint DFES_ClrAll(void);

uint DFES_VisClr(uint clsMsk, uint stMsk);

uint DFES_ClrAllAndInit(uint code);

uint DFES_GetStClr(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
uint DFES_AddClrEntry(uint idxDFC);

uint DFES_ClearListedEntry(void);

uint DFES_ClearListedDTCGroup(uint8 DTCGroupMsk);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_ClrRdyOnly(void);

uint DFES_GetOBDRelevance(uint numCheck);

uint DFES_GetMILRelevance(uint numCheck);

uint DFES_numClass(uint numCheck);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END





/* =========================== */
/* decentral visibility buffer */
/* =========================== */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_VisSet (DFES_VisType* ptVis, uint clsMsk, uint stMsk, uint fltMsk);
/* sort functions */
void DFES_VisSortHistOld2New (DFES_VisType* ptVis);
void DFES_VisSortDFES (DFES_VisType* ptVis);
/* delete function */
void DFES_VisDelEntry(DFES_VisType* ptVis, uint idxVis);
/* set functions */
void DFES_VisUnion(DFES_VisType* ptVis1, DFES_VisType* ptVis2);
void DFES_VisDifference(DFES_VisType* ptVis1, DFES_VisType* ptVis2);
void DFES_VisIntersection(DFES_VisType* ptVis1, DFES_VisType* ptVis2);
/* access functions */
#define DFES_VisGetCnt(ptVis)                  ((ptVis)->count)
#define DFES_VisGetEntry(ptVis,idxVis)         ((ptVis)->buffer[idxVis])
#define DFES_VisGetEntryDFC(ptVis,idxVis)      (DFES_numDFC[(ptVis)->buffer[idxVis]])

uint DFES_VisGetDTCEntry(const DFES_VisType* ptVis, uint idxVisible, uint idxTable);

uint DFES_VisGetDTCDiaP(const DFES_VisType* ptVis, uint idxVisible);

uint DFES_VisGetIdxFromDTC(const DFES_VisType* ptVis
                           , uint      valDTC
                           , uint      idxDFCStart
                           , uint      idxTable
                           , uint  *   idxVisible
                           , uint  *   idxDFC);

uint DFES_VisGetFrzFrEnvData(const DFES_VisType* ptVis
                           , uint      idxVis
                           , uint      idxEnv
                           , uint      numSelFrzFr
                           , uint      stMode
                           , uint32 *  SignalData );


uint DFES_VisGetFrzFrEnvDataDid(const DFES_VisType* ptVis,
                                uint            idxVis,
                                uint            idxEnv,
                                uint            numSelFrzFr,
                                uint8*          Data);

uint DFES_VisGetFrzFrSigData(const DFES_VisType* ptVis
                           , uint      numSignal
                           , uint      idxVis
                           , uint      numSelFrzFr
                           , uint      stMode
                           , uint32 *  SignalData );

uint DFES_VisGetFrzFrDidData(const DFES_VisType* ptVis,
                             uint               numDid,
                             uint               idxVis,
                             uint               numSelFrzFr,
                             uint8*             Data);

uint DFES_VisGetAddEntryStatus(const DFES_VisType*   ptVis
                           , uint      idxVisible
                           , DFES_stEntryType2 * stEntry);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


#endif /* _DFES_DIA_PUB_H */
