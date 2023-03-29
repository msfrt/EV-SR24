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
 * $Filename__:epmcrs_diagsyncinjlost_pub.h$
 *
 * $Author____:IOM2FE$
 *
 * $Function__:public header file of epmcrs_diagsyncinjlost$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:IOM2FE$
 * $Date______:21.11.2011$
 * $Class_____:SWHDR$
 * $Name______:epmcrs_diagsyncinjlost_pub$
 * $Variant___:2.0.0$
 * $Revision__:2$
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
 * 2.0.0; 2     21.11.2011 IOM2FE
 *   Update after SW-review
 * 
 * 2.0.0; 1     10.11.2011 IOM2FE
 *   Update after sw-test
 * 
 * 2.0.0; 0     08.11.2011 IOM2FE
 *   
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMCRS_DIAGSYNCINJLOST_PUB_H                   /* protect multiple includes              */
#define _EPMCRS_DIAGSYNCINJLOST_PUB_H


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void EpmCrS_DiagSyncInjLost_100ms_Proc(void);
extern void EpmCrS_DiagSyncInjLost_Proc_IniEnd(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCrS_DiagSyncInjLost_Proc_SyncIni(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

__PRAGMA_USE__CODE__epm__LowSpeed__START
extern void EpmCrS_DiagSyncInjLost_fcmclr(void);
__PRAGMA_USE__CODE__epm__LowSpeed__END

#endif
