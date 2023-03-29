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
 * $Filename__:dsmaux_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:25.09.2012$
 * $Class_____:SWHDR$
 * $Name______:dsmaux_pub$
 * $Variant___:2.21.0$
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
 * 2.21.0; 0     25.09.2012 MMO2FE
 *   New ROE Event ERR2OK_ACT that only comes in Ini-ReIni if LDF is set and 
 *   ResetAtIni is calibrated.
 * 
 * 2.20.0; 0     29.08.2012 MSL1COB
 *   to introduce response on event trigger for sporadic errors
 * 
 * 2.19.0; 0     06.07.2012 MMO2FE
 *   OBDII_054_01 LEVIII Harmonisation Engine Start - New OBD Driving Cycle
 * 
 * 2.16.0; 0     19.03.2012 RMP2SI
 *   DSM compiler independency task.
 * 
 * 2.13.0; 0     18.08.2011 ROA2KOR
 *   RCMS01211729 and RCMS01211743:Response on Event support for DFP who request
 *    for Suspected freezeframe
 * 
 * 2.3.0; 0     16.06.2009 PKA2SI
 *   CC-LABEL B_DSM.14.1.0
 *   ResponseOnEvent extension
 *   TCSORT freezeframe timing
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmaux_pub.h
 *      Version: \main\14
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DSMAUX_PUB_H
#define _DSMAUX_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - Auxiliary functions (Trigger interface, ... )
 *              Definition of public interfaces
 *
 *
 * \scope           API
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Makro for query of a trigger state */
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSM_GetTrigger(xTrig)       (DSMAUX_DTRG[(xTrig).id] > 0)

/* Makro for setting a trigger state */
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSM_SetTrigger(xTrig)       (DSMAUX_DTRG[(xTrig).id] = 1)

/* Macro for resetting a trigger state */
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSM_ResetTrigger(xTrig)     (DSMAUX_DTRG[(xTrig).id] = 0)

/* Makro for query of a trigger state with trigger number without structure */
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSM_GetTrgInt(xTrig)   (DSMAUX_DTRG[xTrig] > 0)

#define DSM_SYC_PSTDRV_BGN      1u
#define DSM_SYC_PSTDRV_END      2u
#define DSM_SYC_PREDRV          3u


/***************************************************************************************************
 interface functions translations for Postdrive
***************************************************************************************************/

/* afterrun handling of DSM */
#define DSM_Postdrive_Bgn()       DSM_Postdrive(DSM_SYC_PSTDRV_BGN)
#define DSM_Postdrive_End()       DSM_Postdrive(DSM_SYC_PSTDRV_END)
#define DSM_Predrive_Bgn()        DSM_Postdrive(DSM_SYC_PREDRV)
#define DSM_Predrive_End()        DSM_Postdrive(DSM_SYC_PREDRV)

/* and alternative names */
#define DSM_PostDrive_Bgn()       DSM_Postdrive(DSM_SYC_PSTDRV_BGN)
#define DSM_PostDrive_End()       DSM_Postdrive(DSM_SYC_PSTDRV_END)
#define DSM_PreDrive_Bgn()        DSM_Postdrive(DSM_SYC_PREDRV)
#define DSM_PreDrive_End()        DSM_Postdrive(DSM_SYC_PREDRV)


/* supported response on event types */
/***********************************/

#define DSM_EVT_TYP_NEW_ENTRY               1u
#define DSM_EVT_TYP_TSTFLAG_ERR             2u
#define DSM_EVT_TYP_TSTFLAG_OK              3u
#define DSM_EVT_TYP_STCHNG_OK2ERR           4u
#define DSM_EVT_TYP_STCHNG_ERR2OK           5u
#define DSM_EVT_TYP_STCHNG_HEAL2DLT         6u
#define DSM_EVT_TYP_RESTORE_PDTC            7u
#define DSM_EVT_TYP_STENTRY_CONFIRMED       8u
#define DSM_EVT_TYP_FRZTAKE                 9u
#define DSM_EVT_TYP_ENVTAKE                 10u
#define DSM_EVT_TYP_STCHK_OK                11u
#define DSM_EVT_TYP_STCHK_ERR               12u
#define DSM_EVT_TYP_STCHK_OKHEALED_2_ERRDEB 13u
#define DSM_EVT_TYP_STCHK_ERRDEB            14u
#define DSM_EVT_TYP_STCHK_OKHEALED          15u
#define DSM_EVT_TYP_DFP_SUSFRZTAKE          16u
#define DSM_EVT_TYP_DFP_SUSFRZ_CPYFRM       17u
#define DSM_EVT_TYP_DFP_SUSFRZ_CPYTO        18u
#define DSM_EVT_TYP_IMDTDETN_ERR            19u
#define DSM_EVT_TYP_STCHNG_ERR2OK_ACT       20u
/* if no DFES entry is assigned to DSMAUX_EvtType.LstEvtIdxFES */
#define IDXFES_NOT_VALID    0xFF

/* supported return values of function  DSM_GetInitState() (to compare with) */
#define DSM_INITIALIZING            1u
#define DSM_DONE_INIT               2u


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* Definition of a structure to describe events for customer specific call back functions */
typedef struct
{
    uint8   LstEvtTyp;
    uint8   LstEvtIdxFES;
    uint16  Lst_idxDFC;
} DSMAUX_EvtType;


/**
 TRG = Trigger reference type.
 Integer packed into structure to enable parameter checking */
/***********************************/
typedef struct
{
    uint16 id; /* reference number  */
} DSM_TRGType;



/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

MEMLAY_USE_ENVRAM(extern uint8, DSMAUX_ctWUC);
MEMLAY_USE_ENVRAM(extern uint8, DSMAUX_stDCy);

/* declaration of Trigger state variables array */
MEMLAY_USE_ENVRAM(extern uint8, DSMAUX_DTRG[]);

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSMAUX_Proc_Ini(void);
void DSMAUX_Proc(void);
void DSMAUX_Postdrive(void);
void DSMAUX_Clear(void);

uint DSM_Postdrive(uint stMode);
uint DSM_ReInit(void);
void DSMAUX_ReInit_Proc(void);
void DSM_Proc_IniDrv(void);

uint8   DSMAUX_RdLstEvtVal(DSMAUX_EvtType *valBuffer, uint16 *valRdCnt);
uint16  DSMAUX_GetEvtWrtCnt(void);
uint    DSMAUX_ChkEvtValid(DSMAUX_EvtType evt);

uint DSM_GetInitState(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

#endif
