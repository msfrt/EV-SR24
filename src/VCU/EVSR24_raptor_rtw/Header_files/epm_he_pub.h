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
 * $Filename__:epm_he_pub.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:Pragmas from  c files removed$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SCU3KOR$
 * $Date______:20.07.2013$
 * $Class_____:SWHDR$
 * $Name______:epm_he_pub$
 * $Variant___:1.48.1$
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
 * 1.48.1; 1     20.07.2013 SCU3KOR
 *   Warning removal
 * 
 * 1.48.1; 0     09.07.2013 SCU3KOR
 *   Warning removal RQONE00212004
 * 
 * 1.46.1; 0     17.12.2012 WHT2SI
 *   correct epm_he_pub.h, Otherwiese EPMHE_SYNCREADY and EPMHE_SYNCDONE 
 *   missing.
 * 
 * 1.23.0; 0     14.12.2009 OMO2FE
 *   Pragmas from  c files removed
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPM_HE_PUB_H
#define _EPM_HE_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  public interface of EPM Hardware Encapsulation
 *
 * \scope
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

#define EPMHE_SYNCREADY 1
#define EPMHE_SYNCDONE  0


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void Epm_SwtTdcInt_Proc_IniSyn(void);
extern void Epm_HE_TxEpmData_Proc(void);
extern void Epm_HE_RxEpmData_Proc(void);
extern void Epm_SwtSeg_Proc(void);
extern void Epm_SwtTdcInt_Proc(void);
extern void Epm_SwtTdcIntSlave_Proc(void);
extern void Epm_SwtCylSlv_Proc(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void Epm_HE_Proc_IniEnd(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END




/* _EPM_HE_PUB_H */
#endif
