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
 * $Filename__:dfp_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:09.03.2012$
 * $Class_____:SWHDR$
 * $Name______:dfp_pub$
 * $Variant___:2.3.0$
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
 * 2.3.0; 0     09.03.2012 MMO2FE
 *   Compiler Independence warnings removal
 * 
 * 2.1.0; 2     26.11.2010 RRS3KOR
 *   Removal of critical MISRA warnings
 * 
 * 2.1.0; 1     23.09.2009 PKA2SI
 *   support _LIBRARYABILITY_H within dfc_pub.h
 * 
 * 2.1.0; 0     16.06.2009 PKA2SI
 *   CC-LABEL B_DSM.14.1.0
 *   support remove of legacy interface by configuration
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfp_pub.h
 *      Version: \main\11
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DFP_PUB_H
#define _DFP_PUB_H

/**
 *********************************************************************
 * \moduledescription
 *  Interface description of DSM for legacy fault paths.
 *
 * \scope           API
 *********************************************************************
 */



/*
 *********************************************************************
 * Defines
 *********************************************************************
 */
 /* fault type definitions */
#define DSM_MAX                0x01
#define DSM_SHORT_CIRC_BAT     0x01
#define DSM_SRC_HIGH           0x01

#define DSM_MIN                0x02
#define DSM_SHORT_CIRC_GND     0x02
#define DSM_SRC_LOW            0x02

#define DSM_SIG                0x04
#define DSM_NO_LOAD            0x04

#define DSM_NPL                0x08
#define DSM_PLA                0x08
#define DSM_EXC_TEMP           0x08

/* fault type bit position definitions */
#define DSM_MAX_BIT_POS        0u
#define DSM_MIN_BIT_POS        1u
#define DSM_SIG_BIT_POS        2u
#define DSM_NPL_BIT_POS        3u

/* Debounce modes */
#define DSM_TIME_DEB           0x00
#define DSM_EVENT_DEB          0x01
#define DSM_UP_DWN_CNT_DEB     0x08
#define DSM_UP_MSK             0x30
#define DSM_UP_SHIFT           4
#define DSM_DWN_MSK            0xC0
#define DSM_DWN_SHIFT          6

/* Debounce states, Return Values of DoDebounce */
#define DSM_DFP_TYP_OK          0x0 /* Type ok, no debouncing in progress                       */
#define DSM_DFP_TYP_PROV_DEF    0x1 /* Type provisional defect, debouncing still in progress    */
#define DSM_DFP_TYP_DEF         0x2 /* Type defect, no debouncing in progress                   */
#define DSM_DFP_TYP_PROV_OK     0x4 /* Type provisional ok, debouncing still in progress        */



/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */


/**
 DFP = Diagnostic fault path reference type.
 Integer packed into structure to enable parameter checking*/
/*******************************/
typedef uint16 DfpType;     /* for compatibility with old version only simple scalar value */
typedef uint16 DSM_DfpType; /* the same with a complete typename containing Modul name
                               intended for new usage                                           */


typedef struct DFP_Status
{
/********************************************/
/* !!!  bit location as in FCM entry    !!! */
/********************************************/
    uint Erf  : 1;    /*  error bit CARB                                  */
                        /*  most significant bit in word                    */
    uint Zyf  : 1;    /*  cycle bit CARB                                  */
   /* order of Fa, Be and Ekd Zkd was exchanged, because in fcm ored type
      was added                                                             */
    uint FFR   : 1;   /*  Freeze Frame Request                            */
    uint Be   : 1;    /*  production tester connected                     */
    uint Ekd  : 1;    /*  error bit service                               */
    uint Zkd  : 1;    /*  cycle bit service                               */
    uint Bak  : 1;    /*  checking with backup value                      */
    uint Clr  : 1;    /*  request to clear error path                     */

    uint Typ  : 4;    /*  error type: max, min, sig, npl                  */
                        /*  for easier and run time optimized type handling */
    uint Mem  : 1;    /*  dfp in FCM                                      */
    uint Zpf  : 1;    /*  cycle bit since power fail / fcmclr             */
    uint Run  : 1;    /*  cycle bit set in last process call              */
    uint Chg  : 1;    /*  status has changed in preemptive process        */
/*  !!!!!!! this bit Chg could be overlayed with an other status-Bit !!!!!!!*/
                        /*  least significant bit in word                   */
} DSM_DFPStatusType;


/* make type accessible via SfpType DSM_SfpType*/
#define SfpType DSM_DFPStatusType
#define DSM_SfpType DSM_DFPStatusType

struct DSM_ctDeb_STR
{
    uint32 val;
};

typedef struct DSM_ctDeb_STR DSM_ctDeb_Type;


typedef struct DSM_DebStruct{    SfpType DfpStatusFlags
                                ; bit8    TstFlg
                                ; bool    CurTstRes
                                ; bit8    TypMsk
                                ; bit8    DebMode;
                             }DSM_Deb_Type;


typedef struct DSM_DebDuration{   uint16  DebToDef
                                 ; uint16  DebToOk;
                               }DSM_DebDur_Type;

/* GS adapter for type extended fault path encoding */

typedef     uint16      DfpTypType; /* internal error path and type number */

#define GET_DFPTYP_DFP(dfptyp)      (((dfptyp) & 0x3FFF) >>2)
/* Type - encoding:
    Max - 0; Min - 1; Sig - 2; Npl - 3;     */
#define GET_DFPTYP_TYPINDEX(dfptyp) ((dfptyp) & 0x0003)


/* GS adapter for FCM status (status of DFES entries) */
typedef uint32 InfoType;                  /* characteristic status of DFES entry */

#define FCM_OUT_DAUER          ((InfoType)0x0001)
#define FCM_OUT_MIL_ON         ((InfoType)0x0002)
#define FCM_OUT_EPRL           ((InfoType)0x0004)
#define FCM_OUT_SCATT          ((InfoType)0x0008)
#define FCM_OUT_VAL_EVER       ((InfoType)0x0010)
#define FCM_OUT_VAL_LAST       ((InfoType)0x0020)
#define FCM_OUT_ZYF_ACT        ((InfoType)0x0100)
#define FCM_OUT_ERF_ACT        ((InfoType)0x0200)

#define getInfoDauer(info)   ((info) & FCM_OUT_DAUER)
#define getInfoMil(info)     ((info) & FCM_OUT_MIL_ON)
#define getInfoErfPrl(info)  ((info) & FCM_OUT_EPRL)
#define getInfoScatt(info)   ((info) & FCM_OUT_SCATT)
#define getInfoValEver(info) ((info) & FCM_OUT_VAL_EVER)
#define getInfoValLast(info) ((info) & FCM_OUT_VAL_LAST)
#define getInfoZyfAct(info)  ((info) & FCM_OUT_ZYF_ACT)
#define getInfoErfAct(info)  ((info) & FCM_OUT_ERF_ACT)

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */

/**
********************************************************************
* default Value of SfpType as long as no functionallity is available
* because the value is static, it is possible to define it in every
* C-File */
/*static SfpType stDefault;  up to now not used  */




/*
 *********************************************************************
 * Prototypes
 *********************************************************************
 */

/*
 *********************************************************************
 * Mapping of adapter functions to previous GS names
 *********************************************************************
 */
#define getFcmFrzExists(numPath, ctTyp)       DSM_getFcmFrzExists((numPath), (ctTyp))
#define getFcmEngineSpeedP0C(numPath, ctTyp)  DSM_getFcmEngineSpeedP0C((numPath), (ctTyp))
#define getFcmLoadCondP04(numPath, ctTyp)     DSM_getFcmLoadCondP04((numPath), (ctTyp))
#define getFcmCoolTempP05(numPath, ctTyp)     DSM_getFcmCoolTempP05((numPath), (ctTyp))

#define getInfoDfpTyp(numPath, Buff)          DSM_GetInfoDfpTyp(numPath, Buff)
#define getInfoDfp(numPath, Buff)             DSM_GetInfoDfp(numPath, Buff)

/*
 *********************************************************************
 * Renaming of functions to be compatible with GS and DS fault paths
 *********************************************************************
 */

/* GS GetSfp: map name to DSM_GetSfp */
#define getSfp( Dfp_Name )                     (DSM_GetSfp( Dfp_Name ))
/* GS RepSfp */
#define reportSfp( Dfp_Name , stDfp)          (DSM_RepSfp( (Dfp_Name) , (stDfp)))
#define repSfp( Dfp_Name , stDfp)             (reportSfp( Dfp_Name , stDfp))


/* Macros for direct access to status information (must be converted into functions!) */
/**************************************************************************************/
/* Get error flag of path Index                                                */
#define DSM_GetErf(Index)          (DSM_GetSfpErf(DSM_GetSfp(Index)))
#define getErf(Index)              (DSM_GetErf(Index))
/* Get cycle flag (tested) of path Index                                       */
#define DSM_GetZyf(Index)          (DSM_GetSfpZyf(DSM_GetSfp(Index)))
#define getZyf(Index)              (DSM_GetZyf(Index))
/* Get clear flag of path Index                                                */
#define DSM_GetClf(Index)          (dfp_GetClf(Index))
#define getClf(Index)              (dfp_GetClf(Index))
/* Get fault type (4 bits!) of path Index                                      */
#define DSM_GetTyp(Index)          (DSM_GetSfpTyp(DSM_GetSfp(Index)))
#define getTyp(Index)              (DSM_GetSfpTyp(DSM_GetSfp(Index)))
/* Get Backup flag (= default value used) of path Index                        */
#define DSM_GetBak(Index)          (0u)
/* Get Mem flag (path has entry in fcm) of path Index                          */
#define DSM_GetMem(Index)          (DSM_GetSfpMem(DSM_GetSfp(Index)))
/* Get the Zpf flag (cycle since fcm clear) of path Index                      */
#define DSM_GetZpf(Index)          (DSM_GetSfpZpf(DSM_GetSfp(Index)))


/* Macros for query and manipulation of status information  */
/**************************************************************************************/
/* Methods for getting values:*/

/* Get the fault type (4bits, all types at once!) from Status (SfpType)        */
#define DSM_GetSfpTyp(Status)      ((Status).Typ)
#define getSfpTyp(Status)          (DSM_GetSfpTyp(Status))
/* fault type (4bits, all types at once!) from Status (SfpType)
   same define as DSM_GetSfpTyp(Status) , useful for write access              */
#define DSM_SfpTyp(Status)         ((Status).Typ)

/* Get the fault type Maximum (1bit) state from Status (SfpType)               */
#define DSM_GetSfpMax(Status)      ((Status).Typ == DSM_MAX)
#define getSfpMax(Status)          (DSM_GetSfpMax(Status))
/* Get the fault type Minimum (1bit) state from Status (SfpType)               */
#define DSM_GetSfpMin(Status)      ((Status).Typ == DSM_MIN)
#define getSfpMin(Status)          (DSM_GetSfpMin(Status))
/* Get the fault type Signal (1bit) state from Status (SfpType)                */
#define DSM_GetSfpSig(Status)      ((Status).Typ == DSM_SIG)
#define getSfpSig(Status)          (DSM_GetSfpSig(Status))
/* Get the fault type not plausible (1bit) state  from Status (SfpType)        */
#define DSM_GetSfpNpl(Status)      ((Status).Typ == DSM_NPL)
#define getSfpNpl(Status)          (DSM_GetSfpNpl(Status))
/* Get the error flag state from Status (SfpType)                              */
#define DSM_GetSfpErf(Status)      ((Status).Erf)
#define getSfpErf(Status)          (DSM_GetSfpErf(Status))
/* Get the cycle flag state (Path tested flag) from Status (SfpType)           */
#define DSM_GetSfpZyf(Status)      ((Status).Zyf)
#define getSfpZyf(Status)          (DSM_GetSfpZyf(Status))
/* non functional access functions deleted to discover inconsistencies */
/* Get the Backup flag : No more functional!!                                  */
/* #define DSM_GetSfpBak(Status)      ((Status).Bak) */
/* Backup-flag should be replaced by DSQ! */
/* #define getSfpBak(Status)          (DSM_GetSfpBak(Status)) */
/* Get the clear flag (= not functional up to now)                             */
/* #define DSM_GetSfpClr(Status)      ((Status).Clr) */
/* #define getSfpClr(Status)          (DSM_GetSfpClr(Status)) */
/* Get the debounce active flag (= debouncing for one ore more fault types
   in progress) from Status (SfpType), the unused customer specific error flag
   is used for this purpose                                                    */
#define DSM_GetSfpDa(Status)       ((Status).Ekd)
/* Get the Fa flag (= function from tester required) from Status (SfpType)     */
#define DSM_GetSfpFa(Status)       ((Status).Fa)
#define getSfpFa(Status)           (DSM_GetSfpFa(Status))
/* Get the Be flag (= Bandende= end of line active) from Status (SfpType)      */
#define DSM_GetSfpBe(Status)       ((Status).Be)
#define getSfpBe(Status)           (DSM_GetSfpBe(Status))
/* Get the Dat flag (= debounce active temp., Helpflag for generation Da) from
   Status (SfpType) , Flag is overlayed to unused customer specific cycle flag */
#define DSM_GetSfpPhf(Status)      ((Status).Chg)
/* Get the Mem flag (= path has entry in fcm) not functional up to now         */
#define DSM_GetSfpMem(Status)      ((Status).Mem)
#define getSfpMem(Status)          (DSM_GetSfpMem(Status))
/* Get the Zpf flag (= Cycle since power fail = cycle since fcm clear)
   from Status (SfpType)                                                       */
#define DSM_GetSfpZpf(Status)      ((Status).Zpf)
#define getSfpZpf(Status)          (DSM_GetSfpZpf(Status))
/* Keep Alive Flag */
#define DSM_GetSfpAli(Status)      ((Status).Zkd)
/* get current suspected freeze frame status (freeze frame entry exists?) */
#define getSfpFFR(Status)           ((Status).FFR)


/* Methods for setting the bits (bit functions see query methods above):*/

#define setErfMax(Status)          ((Status).Erf =1, (Status).Typ = DSM_MAX)
#define setErfMin(Status)          ((Status).Erf =1, (Status).Typ = DSM_MIN)
#define setErfSig(Status)          ((Status).Erf =1, (Status).Typ = DSM_SIG)
#define setErfNpl(Status)          ((Status).Erf =1, (Status).Typ = DSM_NPL)




#define DSM_SetSfpMax(Status)      ((Status).Typ  = DSM_MAX)
#define setSfpMax(Status)          (DSM_SetSfpMax(Status))

#define DSM_SetSfpMin(Status)      ((Status).Typ  = DSM_MIN)
#define setSfpMin(Status)          (DSM_SetSfpMin(Status))

#define DSM_SetSfpSig(Status)      ((Status).Typ  = DSM_SIG)
#define setSfpSig(Status)          (DSM_SetSfpSig(Status))

#define DSM_SetSfpNpl(Status)      ((Status).Typ  = DSM_NPL)
#define setSfpNpl(Status)          (DSM_SetSfpNpl(Status))

#define DSM_SetSfpZyf(Status)      ((Status).Zyf  = 1u)
#define setSfpZyf(Status)          (DSM_SetSfpZyf(Status)) /*GS translation */

#define DSM_SetSfpErf(Status)      ((Status).Erf  = 1u)
#define setSfpErf(Status)          (DSM_SetSfpErf(Status)) /*GS translation */

/* #define DSM_SetSfpBak(Status)      ((Status).Bak  = 1u)
#define setSfpBak(Status)          (DSM_SetSfpBak(Status)) */

/* #define DSM_SetSfpClr(Status)      ((Status).Clr  = 1u)
#define setSfpClr(Status)          (DSM_SetSfpClr(Status)) */

/*#define DSM_SetSfpFa(Status)       ((Status).Fa   = 1u)
#define setSfpFa(Status)           (DSM_SetSfpFa(Status))

#define DSM_SetSfpBe(Status)       ((Status).Be   = 1u)
#define setSfpBe(Status)           (DSM_SetSfpBe(Status)) */


#define DSM_SetSfpDa(Status)       ((Status).Ekd  = 1u)
#define DSM_SetSfpPhf(Status)      ((Status).Chg  = 1u)
/* Keep Alive Flag */
#define DSM_SetSfpAli(Status)      ((Status).Zkd  = 1u)

#ifndef _LIBRARYABILITY_H
#if (DSM_SUP_DFP_FFR > 0 )
/* set current suspected freeze frame status (freeze frame entry request) */
#define setSfpFFR(Status)          ((Status).FFR = 1u)
#endif
#endif

/* Methods for resetting the bits (bit functions see query methods above):*/

#define clrErfTyp(Status)          ((Status).Erf =0, (Status).Typ = 0)


#define clrSfpTyp(Status)          ((Status).Typ = 0)

#define DSM_ClrSfpMax(Status)      ((Status).Typ&=(DSM_MAX^0xFu))
#define clrSfpMax(Status)          (DSM_ClrSfpMax(Status))


#define DSM_ClrSfpMin(Status)      ((Status).Typ&=(DSM_MIN^0xFu))
#define clrSfpMin(Status)          (DSM_ClrSfpMin(Status))


#define DSM_ClrSfpSig(Status)      ((Status).Typ&=(DSM_SIG^0xFu))
#define clrSfpSig(Status)          (DSM_ClrSfpSig(Status))


#define DSM_ClrSfpNpl(Status)      ((Status).Typ&=(DSM_NPL^0xFu))
#define clrSfpNpl(Status)          (DSM_ClrSfpNpl(Status))


#define DSM_ClrSfpErf(Status)      ((Status).Erf  = 0u)
#define clrSfpErf(Status)          (DSM_ClrSfpErf(Status))


#define DSM_ClrSfpZyf(Status)      ((Status).Zyf  = 0u)
#define clrSfpZyf(Status)          (DSM_ClrSfpZyf(Status))

/* non functional */
#define DSM_ClrSfpBak(Status)      ((Status).Bak  = 0u)
#define clrSfpBak(Status)          (DSM_ClrSfpBak(Status))

/* non functional */
#define DSM_ClrSfpClr(Status)      ((Status).Clr  = 0u)
#define clrSfpClr(Status)          (DSM_ClrSfpClr(Status))

/* non functional */
#define DSM_ClrSfpFa(Status)       ((Status).Fa   = 0u)
#define clrSfpFa(Status)           (DSM_ClrSfpFa(Status))

/* non functional */
#define DSM_ClrSfpBe(Status)       ((Status).Be   = 0u)
#define clrSfpBe(Status)           (DSM_ClrSfpBe(Status))

/* non functional */
#define DSM_ClrSfpDa(Status)       ((Status).Ekd  = 0u)
#define DSM_ClrSfpDat(Status)      ((Status).Ekd  = 0u)                     /* now only dummy */
#define DSM_ClrSfpPhf(Status)      ((Status).Chg  = 0u)
/* Keep Alive Flag */
#define DSM_ClrSfpAli(Status)      ((Status).Zkd  = 0u)
/* set current suspected freeze frame status (freeze frame entry erease request) */
#define clrSfpFFR(Status)          ((Status).FFR = 0u)

/* Methods for direct assigning of values (Copy Bits, Bitfunctions see above):  */
/* The value (second argument) is directly assigned to the corresponding Bit in
   Status (first argument)                                                      */
#define DSM_CpySfpErf(Status,Value)  ((Status).Erf= ((Value)>0))
#define DSM_CpySfpZyf(Status,Value)  ((Status).Zyf= ((Value)>0))
#define DSM_CpySfpBak(Status,Value)  ((Status).Bak= ((Value)>0))
#define DSM_CpySfpClr(Status,Value)  ((Status).Clr= ((Value)>0))
#define DSM_CpySfpDa(Status,Value)   ((Status).Ekd= ((Value)>0))
#define DSM_CpySfpFa(Status,Value)   ((Status).Fa = ((Value)>0))
#define DSM_CpySfpBe(Status,Value)   ((Status).Be = ((Value)>0))
#define DSM_CpySfpPhf(Status,Value)  ((Status).Chg= ((Value)>0))
#define DSM_CpySfpFFR(Status,Value)  ((Status).FFR= ((Value)>0))


/* Define Makros for Flag Access in Pointers , maybe enhanced on demand in future*/
#define DSM_SetSfpPtPhf(Status)  ((Status)->Chg  = 1u)
#define DSM_GetSfpPtPhf(Status)  ((Status)->Chg)
#define DSM_SetSfpPtZyf(Status)  ((Status)->Zyf  = 1u, \
                                  (Status)->Zpf = 1u,  \
                                  (Status)->Run = 1u)

#define DSM_SetSfpPtDa(Status)   ((Status)->Ekd  = 1u )
#define DSM_SetSfpPtAli(Status)  ((Status)->Zkd  = 1u )
#define DSM_GetSfpPtBe(Status)   ((Status)->Be)

/* trigger interface - adaption to allow existing local boolean trigger states in functions */
/* name modification at end only since invocation like      fcmTrig( &trig_hugo);      used */
#define fcmTrig( numTrigger)      (DSM_SetTrigger(*(numTrigger##_17)))

/* sum of faults */
#define repSumDfp( pSFArray)      (dfp_repSum( &KWB_##pSFArray(0)))

/* adaptation GS naming */
#define setDis41(Index)           (DSM_pid41(Index))

#define SFPTYP_TO_INDEX(typ)      (sfpTypToIndex[typ])
#define INDEX_TO_SFPTYP(index)    (indexToSfpTyp[index])


/* legacy type definitions (no longer functional - compatibility only) */
typedef uint8   TrigType;

/*
 ****************************************************************************************************
 * Prototypes for future application parameters
 ****************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_pid41(uint numPath);

DSM_SfpType DSM_GetSfp(uint numPath);

void DSM_RepSfp(  uint         numPath
                 ,DSM_SfpType  stPath     );


bool dfp_GetClf(uint numPath);

bool DSM_getFcmFrzExists(DfpType numPath, uint8 ctTyp);
uint16 DSM_getFcmEngineSpeedP0C(DfpType numPath, uint8 ctTyp);
uint8 DSM_getFcmLoadCondP04(DfpType numPath, uint8 ctTyp);
uint8 DSM_getFcmCoolTempP05(DfpType numPath, uint8 ctTyp);


bool DSM_GetInfoDfpTyp(uint numPath, InfoType * Buff);
bool DSM_GetInfoDfp(uint numPath, InfoType * Buff);
InfoType DSM_InfoMerge(InfoType InfoBase, InfoType Info2add);

void dfp_repSum(const uint16 *pSFArray);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__dsm__1_5ms__constant__arr8__START
extern const uint8 sfpTypToIndex[];
extern const uint8 indexToSfpTyp[];
__PRAGMA_USE__dsm__1_5ms__constant__arr8__END

#endif
