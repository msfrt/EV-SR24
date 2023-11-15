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
 * $Filename__:sbreset.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MZT2FE$ 
 * $Date______:25.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:sbreset$ 
 * $Variant___:1.16.0$ 
 * $Revision__:1$ 
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
 * 1.16.0; 1     25.06.2010 MZT2FE
 *   Update for release.
 * 
 * 1.16.0; 0     28.05.2010 MZT2FE
 *   Update for TC1793.
 * 
 * 1.14.0; 0     23.11.2009 AWL2SI
 *   B_SB.14.0.0
 * 
 * 1.13.1; 0     06.11.2009 AWL2SI
 *   Right version of SB 13.0.0 migrated from ClearCase
 * 
 * 1.13.0; 0     03.08.2009 AWL2SI
 *   B_SB.13.0..0
 * 
 * 1.11.0; 0     27.01.2009 KLMEYER
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SBRESET_H
#define _SBRESET_H


/**
 ***************************************************************************************************
 * \moduledescription
 *          Interface header file for SoftwareResets
 *
 * \scope           [API]
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* number of entries in SWReset history buffer */
#define SBRESET_SWRESETHIST_SIZE 0x08

/* value if loopcondition are true */
#define SBRESET_LOOPCOND_TRUE    0xDA
/* value if loopcondition are false */
#define SBRESET_LOOPCOND_FALSE   0x00
/* define for CALWUP programming for PIN-Wakeup (WAK2 of CY327) */
#define SBRESET_USERID_CALWUP   0xECCECEECul
/* define for CALWUP programming for PIN-Wakeup WAK1 of CY327 */
#define SBRESET_USERID_WAK1     0xACCACAACul
/* define for CALWUP programming for PIN-Wakeup WAK2 of CY327  */
#define SBRESET_USERID_WAK2     0xBCCBCBBCul
/* define for CALWUP programming for CAN-Wakeup */
#define SBRESET_USERID_CANWAKEUP   0xCA11CA11ul
/* define for CALWUP programming for STC-Wakeup */
#define SBRESET_USERID_STCWAKEUP   0x270B270Bul
/* protected RAM should be initialised */
#define SBRESET_PROTRAM_CLEAR   0xA1B2
/* version of Reset in SB */
/* version 7 because handling of memory protection (memlay-package) must detect a new SB-Version */
#define SBRESET_VERSION         0x0007
/* Pattern for marker which indicate after watchdog trap the system should be shut off */
#define SBRESET_WDT_SHUTOFF     0xED78

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* typedef for array of function pointers */
typedef void (*SBReset_CallbackFctPtr_t)(void);


/* SoftwareReset environment structure */
typedef struct
{
    uint64 tiStampCurr_u64;                                 /* timestamp of current SoftwareReset */
    uint64 tiStampLast_u64;                                    /* timestamp of last SoftwareReset */
    uint32 dUserDefined_u32;                                                /* user specific data */
    uint32 regLoc_u32;                                  /* location where SoftwareReset is issued */
    uint16 dResetType_u16;                                             /* SoftwareReset Type (ID) */
    uint16 dResetTypeCompl_u16;            /* SoftwareReset complement of SoftwareReset Type (ID) */
    uint8  dSysState_u8[3];                                               /* current system state */
    uint8  dResetGrp_u8;                                           /* Reset-Gruppe (HW,WDT,SB,... */
    uint8  ctReset_u8;                                                   /* SoftwareReset counter */
    uint8  dLoopCond_u8;                                                /* loopconditions reached */
    uint16 dComplConfigPtr_u16;           /* complement of lower 16 bit of swreset config pointer */
}SBReset_EnvSWReset_t;


/* SoftwareReset history buffer structure */
typedef struct
{
    uint16 dBuffer_u16[SBRESET_SWRESETHIST_SIZE];           /* stores the last SoftwareReset-ID's */
    uint8  ctIndex_u8;                                                 /* index to the next entry */
}SBReset_SWResetHist_t;


/* SoftwareReset loop conditions */
typedef struct
{
    uint32 tiMinCyc_u32;                                            /* minimum SWReset cycle time */
    uint8  ctMax_u8;              /* maximum number of SWReset that may occur within tiMinCyc_u32 */
}SBReset_LoopCondSWReset_t;

/* SoftwareReset configuration info */
#if ( (MACHINE_TYPE == TC_1796) || (MACHINE_TYPE == TC_1766) || (defined(TC_1762) && (MACHINE_TYPE == TC_1762)) )
typedef struct
{
    const SBReset_CallbackFctPtr_t *dCallbackFctPtrTable_pcpfn; /* callback function pointer table*/
    const uint16 *dConfMaskTable_pcu16;            /* table of bitmasks for tests, loopconditions */
                                                   /* and visibility in DSM                       */
    const SBReset_LoopCondSWReset_t *dLoopCondTable_pcs;    /* table of different loop conditions */
}SBReset_ConfSWReset_t;
#else
typedef struct
{
    const SBReset_CallbackFctPtr_t *dCallbackFctPtrTable_pcpfn; /* callback function pointer table */
    const uint32 *dConfTable_pcu32;   /* table of bitmasks for loopcondition and visibility in DSM */
    const SBReset_LoopCondSWReset_t *dLoopCondTable_pcs;     /* table of different loop conditions */
}SBReset_ConfSWReset_t;
#endif

/* Resetversion and pattern for ProtectedRAM initialising */
typedef struct
{
    uint16 dVersion_u16;
    uint16 dProtRAMClear_u16;
    uint16 xWDTShutOff_u16;
    uint16 xWDTShutOffCmpl_u16;
}SBReset_AddInfo_t;


#endif
