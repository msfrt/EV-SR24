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
 * $Filename__:epm_opmode_pub.h$
 *
 * $Author____:TUC2SI$
 *
 * $Function__:Changing documentation of calibration-parameters$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PIE2SI$
 * $Date______:07.04.2010$
 * $Class_____:SWHDR$
 * $Name______:epm_opmode_pub$
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
 * 1.25.0; 0     07.04.2010 PIE2SI
 *   Update after testintegration
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPM_OPMODE_PUB_H                                      /* protect multiple includes              */
#define _EPM_OPMODE_PUB_H




/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

/** States of Message Epm_stSync */
#define EPM_NO_SYNC       0
#define EPM_ALE_SYNC      10
#define EPM_CAS_SYNC      20
#define EPM_DIRSTALE_SYNC 21
#define EPM_FULL_SYNC     30

/** States of Message Epm_strCmbTestReq */
#define EPM_NO_CMBTEST  0
#define EPM_CMBTEST     10

/** States of Message Epm_stOpMode */
#define EPM_MODE_WAIT           1
#define EPM_MODE_OFSERR         5
#define EPM_MODE_LOCKRESYNC     5
#define EPM_MODE_ALE            20
#define EPM_MODE_VERIFY         33
#define EPM_MODE_NOCAS          35
#define EPM_MODE_VERIFY_EXT     36
#define EPM_MODE_BACKUP_CAS     38
#define EPM_MODE_OK             48
#define EPM_MODE_BACKUP_CRS     60

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


__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void Epm_OpMode_Proc(void);
extern void Epm_OpMode_Proc_SyncIni(void);
extern void Epm_OpMode_Proc_SyncFirst(void);
extern void Epm_OpModeSync_Proc(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END


__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void Epm_OpMode_Proc_IniEnd(void);
extern void Epm_OpMode_Proc_IniDrv(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END


#endif
