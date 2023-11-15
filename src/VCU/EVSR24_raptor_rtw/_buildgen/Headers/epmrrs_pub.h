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
 * $Filename__:epmrrs_pub.h$
 *
 * $Author____:NF72FE$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SCU3KOR$
 * $Date______:12.07.2013$
 * $Class_____:SWHDR$
 * $Name______:epmrrs_pub$
 * $Variant___:1.25.1$
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
 * 1.25.1; 0     12.07.2013 SCU3KOR
 *   warning removal
 * 
 * 1.25.0; 0     12.10.2012 RTI2FE
 *   Reverse rotation prediction from tooth time
 * 
 * 1.23.0; 0     15.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * 1.20.0; 0     17.11.2008 NF72FE
 *   transfer of Epm.20.0.0 from CC to SDOM
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMRRS_PUB_H                                   /* protect multiple includes              */
#define _EPMRRS_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * public header for EpmRRS (engine position management reverse rotation stop)
 *
 ***************************************************************************************************
 */


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
extern void EpmRRS_AgDetect_Proc_IniEnd (void);
extern void EpmRRS_AgDetect_10ms_Proc (void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

__PRAGMA_USE__CODE__epm__LowSpeed__START
extern void EpmRRS_AgDetect_fcmclr (void);
__PRAGMA_USE__CODE__epm__LowSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START

extern void EpmRRS_AgDetect_2ms_Proc (void);

extern uint16 EpmRRS_GetEngPosTooth (void);
__PRAGMA_USE__CODE__epm__HighSpeed__END


/* _EPMRRS_PUB_H                                                                                  */
#endif
