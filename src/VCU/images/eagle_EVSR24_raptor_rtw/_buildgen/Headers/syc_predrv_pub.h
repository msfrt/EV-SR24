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
 * $Filename__:syc_predrv_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MHD2KOR$
 * $Date______:09.09.2011$
 * $Class_____:SWHDR$
 * $Name______:syc_predrv_pub$
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
 * 1.14.0; 0     09.09.2011 MHD2KOR
 *   Support of Wake up for CJ930 projects
 * 
 * 1.12.0; 0     01.07.2010 TSS1FE
 *   RCMS00922901: Support of additional Wakeup-Pins in CY327
 * 
 * 1.11.0; 0     07.12.2009 SETATIYO
 *   Avoid short-term switching of main relay during initialisation for 
 *   PSS-systems
 * 
 * 1.10.0; 0     26.03.2009 SETATIYO
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
#ifndef _SYC_PREDRV_PUB_H
#define _SYC_PREDRV_PUB_H

/**
 *******************************************************************************
 * moduledescription
 *          PreDrive control
 *
 * scope    API
 *******************************************************************************
 */

/*
 *******************************************************************************
 * Defines
 *******************************************************************************
 */
/* drive states group */
#define SYC_PREDRV_INI_DRV      0
#define SYC_PREDRV_DONE         1


/* shutdown states group */
/*following defines must be > SYC_PREDRV_DONE */
#define SYC_PREDRV_INI_SHDWN    2
#define SYC_PREDRV_PROLONG      3
#define SYC_PREDRV_NWM          4
#define SYC_PREDRV_EEP          5
#define SYC_PREDRV_DSM          6
#define SYC_PREDRV_MR           7
#define SYC_PREDRV_MOM          8
#define SYC_PREDRV_EXIT         9

/* Conditions for PreDrive finish */
#define SYC_PREDRV_FIN_NOT         0  /* PreDrive not finished yet        */
#define SYC_PREDRV_FIN_REGULAR     1  /* PreDrive was finished regularly  */
#define SYC_PREDRV_FIN_TIMEOUT     2  /* PreDrive was finished by timeout */
#define SYC_PREDRV_FIN_RESVTIMEOUT 3  /* PreDrive was finished by timeout to consider the  reserved time  */


/*
 *******************************************************************************
 * Extern declarations
 *******************************************************************************
 */
__PRAGMA_USE__syc__10ms__RAM__x8__START
extern bool SyC_stPreDrvDel;
__PRAGMA_USE__syc__10ms__RAM__x8__END

__PRAGMA_USE__syc__10ms__RAM__x32__START
extern bool (*SyC_ptrNwmPreDrvFunc)(void);
__PRAGMA_USE__syc__10ms__RAM__x32__END

static inline void SyC_WaitPreDrv(void);
static inline void SyC_SetNwmPreDrvFunc(bool (*ptr)(void));

/* note: variables are declard in syc_predrv_dat.h (DAMOS genertaed header file) */


/**
 *******************************************************************************
 * Function for PreDrive delay.
 *
 * This functions serves as an interface for delaying PreDrive termination. It
 * has to be called cyclically by all processes that want to perform actions
 * during PreDrive. PreDrive is terminated only when there are no more calls
 * within a certain time window.
 *******************************************************************************
 */
static inline void SyC_WaitPreDrv(void)
{
    /* set PreDrive delay flag */
    SyC_stPreDrvDel = TRUE;
}

/**
 *******************************************************************************
 * Function for registering PreDrive prolong function of NWM.
 *
 * This function serves as an interface for registering an additional PreDrive
 * prolong function. It may be called by network management (NWM) if there is a
 * need to wait for NWM after all other functions in SYC_PREDRV_PROLONG are
 * finished and before the transition to Shutdown is performed.
 *******************************************************************************
 */
static inline void SyC_SetNwmPreDrvFunc(bool (*ptr)(void))
{
    /* set PreDrive prolong function of NWM */
    SyC_ptrNwmPreDrvFunc = ptr;
}

/*
******************************************************************************
* Function prototypes
******************************************************************************
*/
__PRAGMA_USE__CODE__syc__LowSpeed__START
extern void SyC_PreDrv_Proc_Ini (void) ;
extern void SyC_PreDrv_Proc_IniEnd (void) ;
extern void SyC_PreDrv_Proc_Ini_1 (void);

__PRAGMA_USE__CODE__syc__LowSpeed__END

__PRAGMA_USE__CODE__syc__NormalSpeed__START
extern void SyC_PreDrv_Proc_10ms (void);
extern void SyC_ShortenPreDrive(void);
extern void SyC_IgnoreNwmPreDrive(void);
__PRAGMA_USE__CODE__syc__NormalSpeed__END

__PRAGMA_USE__CODE__syc__HighSpeed__START
extern void SyC_PreDrvWakeEventReqRst(void);
__PRAGMA_USE__CODE__syc__HighSpeed__END

#endif /* _SYC_PREDRV_PUB_H */
