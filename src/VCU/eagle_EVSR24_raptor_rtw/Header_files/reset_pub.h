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
 * $Filename__:reset_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:WIP2FE$
 * $Date______:07.05.2010$
 * $Class_____:SWHDR$
 * $Name______:reset_pub$
 * $Variant___:1.14.0$
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
 * 1.14.0; 0     07.05.2010 WIP2FE
 *   Misra, preparation for TC1793 and TC1724
 * 
 * 1.13.0; 0     23.11.2009 AWL2SI
 *   B_RESET.13.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

/**
 ***********************************************************************************************************************
 * \moduledescription
 *              global header file for reset modul
 *
 * \scope           API
 ***********************************************************************************************************************
 */
#ifndef _RESET_PUB_H
#define _RESET_PUB_H

/*
 ***********************************************************************************************************************
 * Includes
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */
/* to indicate that a reset shutdown function exists */
#define RESET_SHUTDOWN  1


  /* Bitmask for visibility in ResetHistoryBuffer */
#define RESET_HISTBUF_VISIBLE       0x00                         /* visible in resethistorybuffer */
#define RESET_HISTBUF_SUPPRESSED    0x01                     /* not visible in resethistorybuffer */


/* only for compatibility with older versions */
#define SWRESET_SOFTRESET_E     SWRESET_SOFTRESET_5VUNDERVOLTAGE_E

/* number of entries in resethistory buffer which is used from INCA */
#define RESET_HISTBUF_SIZE 8


/* for compatibility with older flash versions -> expand function calls to nothing */
/* MISRA RULE 90 VIOLATION: macros should be done for compatibility */
#define Reset_StoreErrorIntrInFlash(a, b, c, d, e);
#define Reset_InitErrorIntr();
#define Reset_IsrFlashError();
#define Reset_IsrMarginReadError();
#define Reset_DFlashSBitError();


/* *********************************************************************************************************************
 * Special defines for TC1796, TC1766, TC1792, TC1764  only for compatibility
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 * Variables and Constants
 ***********************************************************************************************************************
 */
/* points to the actual SWReset environment structure        */
#ifdef MEMLAY_USE_EARLY_CLEARED_RAM
MEMLAY_USE_EARLY_CLEARED_RAM(extern SBReset_EnvSWReset_t, *Reset_dActEnvSWReset_ps);
#else
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern SBReset_EnvSWReset_t *Reset_dActEnvSWReset_ps;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END
#endif

struct Reset_Environment
{
    uint32 adLoc;
    uint32 xUserValue;
    uint16 xId;
    uint8  xGrp;
    uint8  ctRst;
};
__PRAGMA_USE__eos__1_5ms__RAM__s32__START
extern struct Reset_Environment Reset_Env;   /* includes special environments of the actual reset */
                                             /* this structure regards the naming convention of   */
                                             /* ASW and should be used for get the reset reason.  */
__PRAGMA_USE__eos__1_5ms__RAM__s32__END

/* structures and enums for error interrupts */
/* number of entries in Reset_TrapErrIntrBuf */
#define RESET_TRAPERRINTRBUFSIZE    4
/* number of entries in Reset_FlMRErrBuf */
#define RESET_FLMRERRBUFSIZE   4

/* enum for Reset_ErrIntrInfo_s.state */
typedef enum
{
    RESET_ERRINTRSTATE_READY,             /* start storing in EEP possible, last storing is ready */
    RESET_ERRINTRSTATE_BUSY,              /* storing in EEP busy                                  */
    RESET_ERRINTRSTATE_START              /* start storing information in EEP                     */
}Reset_ErrIntrState_t;


/* structure for ErrorInterrupt informations */
typedef struct
{
    Reset_ErrIntrState_t state;            /* state of storing error interrupt information in EEP */
    Reset_ErrIntrID_t id;                  /* ID of error interrupt                               */
    uint32 usrval;                         /* user defined value for package specific information */
}Reset_ErrIntrInfo_t;


MEMLAY_USE_PROTRAM(extern Reset_ErrIntrInfo_t, Reset_ErrIntrInfo_s);  /* stores Trap/ErrorInterrupt informations */
__PRAGMA_USE__eos__1_5ms__RAM__arr8__START
extern uint8 Reset_TrapErrIntrBuf[RESET_TRAPERRINTRBUFSIZE]; /* buffer for Trap/ErrorInterrupt ID's */
__PRAGMA_USE__eos__1_5ms__RAM__arr8__END


MEMLAY_USE_EARLY_CLEARED_RAM(extern uint16, Reset_xHistBuf[RESET_HISTBUF_SIZE]);


/*
 ***********************************************************************************************************************
 * Prototypes
 ***********************************************************************************************************************
 */
__PRAGMA_USE__CODE__eos__HighSpeed__START
extern void Reset_SWResetRequest(uint8 dResetGrp_u8,
                                 uint16 dResetIdentifier_u16,
                                 uint32 dUserDefined_u32);
extern void Reset_SoftReset(uint8 dResetGrp_u8, uint16 dResetIdentifier_u16, uint32 dUserDefined_u32);
extern void Reset_SWResetHandler(void);
extern void Reset_SWResetInit(void);
extern void Reset_ProtRamInit(void);
extern void Reset_DSMHandling_Proc_Ini(void);
extern void Reset_SWResetMonitor_Proc(void);
extern void Reset_SWResetMonitor_Ini(void);
extern void Reset_SWResetMonitor_Shutdown(void);
extern bool Reset_EcuWasOff(void);
extern bool Reset_ProtRAMCleared(void);
extern bool Reset_ProtRAMTest(void);
extern void Reset_ProtRAMCheckIO(void);
extern void Reset_SetWdogMarker(void);

extern void Reset_ErrIntr(bool rst, Reset_ErrIntrID_t id, uint32 usrval);
extern void Reset_TrapErrIntr_Proc_Ini(void);
extern void Reset_TrapErrIntr_Proc(void);
__PRAGMA_USE__CODE__eos__HighSpeed__END


/* parts for Flash Margin Read Test */
__PRAGMA_USE__eos__1_5ms__RAM__arr8__START
extern uint8 Reset_FlMRErrBuf[RESET_FLMRERRBUFSIZE]; /* buffer for Flash Margin Read ErrorID's */
__PRAGMA_USE__eos__1_5ms__RAM__arr8__END

__PRAGMA_USE__CODE__eos__HighSpeed__START
extern void Reset_FlMarginReadErr(uint8 const *id);
__PRAGMA_USE__CODE__eos__HighSpeed__END


#endif
