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
 * $Filename__:syc_postdrv_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SETATIYO$ 
 * $Date______:07.12.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:syc_postdrv_pub$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     07.12.2009 SETATIYO
 *   MISRA warning reduction
 * 
 * 1.10.0; 0     25.03.2009 SETATIYO
 *   Component Toolbox-Import
 * 
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_SYC\10
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _SYC_POSTDRV_PUB_H
#define _SYC_POSTDRV_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 *          PostDrive control
 *
 * scope    API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* PostDrive states */
#define SYC_POSTDRV_INACTV   0
#define SYC_POSTDRV_DSM_BGN  1
#define SYC_POSTDRV_EEP_BGN  2
#define SYC_POSTDRV_WAIT     3
#define SYC_POSTDRV_NWM      4
#define SYC_POSTDRV_DSM_END  5
#define SYC_POSTDRV_EEP_END  6
#define SYC_POSTDRV_MIN_TIME 7
#define SYC_POSTDRV_DONE     8

/* Conditions for PostDrive finish */
#define SYC_POSTDRV_FIN_NOT         0  /* PostDrive not finished yet        */
#define SYC_POSTDRV_FIN_REGULAR     1  /* PostDrive was finished regularly  */
#define SYC_POSTDRV_FIN_TIMEOUT     2  /* PostDrive was finished by timeout */
#define SYC_POSTDRV_FIN_RESVTIMEOUT 3  /* PostDrive was finished by timeout to consider the */
                                       /* reserved time                                     */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__syc__10ms__RAM__x8__START
extern bool  SyC_stPostDrvDel;
__PRAGMA_USE__syc__10ms__RAM__x8__END

MEMLAY_USE_PROTRAM(extern uint8, SyC_stPostDrvFin);

__PRAGMA_USE__CODE__syc__LowSpeed__START
extern void  SyC_PostDrv_Proc_Ini(void);
__PRAGMA_USE__CODE__syc__LowSpeed__END

__PRAGMA_USE__CODE__syc__NormalSpeed__START
extern void  SyC_PostDrv_Proc_10ms(void);
extern void  SyC_ShortenPostDrive(void);
extern void SyC_IgnoreNwmPostDrive(void);
__PRAGMA_USE__CODE__syc__NormalSpeed__END

__PRAGMA_USE__syc__10ms__RAM__x32__START
extern bool (*SyC_ptrNwmPostDrvFunc)(void);
__PRAGMA_USE__syc__10ms__RAM__x32__END

static inline void SyC_SetNwmPostDrvFunc(bool (*ptr)(void));
static inline void SyC_WaitPostDrv(void);
static inline bool SyC_PostDrvFin(void);

MEMLAY_USE_ENVRAM(extern uint8,SyC_ctTiPostDrvMax);
MEMLAY_USE_ENVRAM(extern uint8,SyC_stHistTiPostDrvMax);

/**
 *******************************************************************************
 * Function for registering PreDrive prolong function of NWM.
 *
 * This function serves as an interface for registering an additional PostDrive
 * prolong function. It may be called by network management (NWM) if there is a
 * need to wait for NWM after all other functions in SYC_POSTDRV_PROLONG are  finished
 *******************************************************************************
 */
static inline void SyC_SetNwmPostDrvFunc(bool (*ptr)(void))
{
    /* set PreDrive prolong function of NWM */
    SyC_ptrNwmPostDrvFunc = ptr;
}



/**
 ***************************************************************************************************
 * Function for PostDrive delay.
 *
 * This functions serves as an interface for delaying PostDrive termination. It has to be called
 * cyclically by all processes that want to perform actions during PostDrive. PostDrive is
 * terminated only when there are no more calls within a certain time window.
 ***************************************************************************************************
 */
static inline void SyC_WaitPostDrv(void)
{
    /* set PostDrive delay flag */
    SyC_stPostDrvDel = TRUE;
}

/**
 ***************************************************************************************************
 * Function for indication of regularly finished PostDrive.
 *
 * This functions delivers the information whether PostDrive was regularly finished since the ECU
 * had been switched on.
 ***************************************************************************************************
 */
static inline bool SyC_PostDrvFin(void)
{
    return (bool)(SyC_stPostDrvFin == SYC_POSTDRV_FIN_REGULAR);
}

#endif /* _SYC_POSTDRV_PUB_H */
