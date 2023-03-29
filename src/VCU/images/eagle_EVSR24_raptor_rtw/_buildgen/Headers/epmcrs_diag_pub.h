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
 * $Filename__:epmcrs_diag_pub.h$
 *
 * $Author____:TUC2SI$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:NF72FE$
 * $Date______:31.05.2010$
 * $Class_____:SWHDR$
 * $Name______:epmcrs_diag_pub$
 * $Variant___:1.25.0$
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
 * 1.25.0; 0     31.05.2010 NF72FE
 *   changes for Master-Slave
 * 
 * 1.23.0; 0     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMCRS_DIAG_PUB_H                                  /* protect multiple includes              */
#define _EPMCRS_DIAG_PUB_H


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

/**  states for EpmCrS_stDiagNoSig and EpmCrS_stDiagErrSig */
enum
{
    EPMCRS_DIAG_PENDING,
    EPMCRS_DIAG_DEBHEAL,
    EPMCRS_DIAG_HEAL,
    EPMCRS_DIAG_DEBSET,
    EPMCRS_DIAG_SET

};

/**  states for EpmCrS_stDiagNoSigCan */
enum
{
    EPMCRS_DIAG_NOSIGCAN_RESET,
    EPMCRS_DIAG_NOSIGCAN_DEB

};


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void EpmCrS_Diag_100ms_Proc(void);
extern void EpmCrS_Diag_Proc_IniEnd(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCrS_Diag_Proc_SyncIni(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

__PRAGMA_USE__CODE__epm__LowSpeed__START
extern void EpmCrS_Diag_fcmclr(void);
__PRAGMA_USE__CODE__epm__LowSpeed__END

#endif
