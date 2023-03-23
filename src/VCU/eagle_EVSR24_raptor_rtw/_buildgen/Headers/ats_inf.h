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
 * $Filename__:ats_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AID3KOR$
 * $Date______:26.05.2011$
 * $Class_____:SWHDR$
 * $Name______:ats_inf$
 * $Variant___:1.20.0$
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
 * 1.20.0; 1     26.05.2011 AID3KOR
 *   review changes
 * 
 * 1.20.0; 0     25.05.2011 AID3KOR
 *   Encapsulation of brake and acceleration monitoring using a new system 
 *   constant
 * 
 * 1.17.0; 0     22.02.2011 KUN5COB
 *   CRQ361056: Encapsulation of brk status,Acc pedal status and eng speed 
 *   status.
 * 
 * 1.16.0; 0     13.01.2011 AID3KOR
 *   Warnings Removal
 * 
 * 1.14.0; 0     18.02.2010 MNG2SI
 *   system constant check included
 * 
 * 1.13.0; 0     19.01.2010 MNG2SI
 *   Migration of BMW DS
 * 
 * 1.12.0; 0     19.06.2009 PRA2KOR
 *   1) New monitoring of brake status, accelerator staus and engine not zero 
 *   condition are added.
 *   2) ATS script changes to have default value, in case ats_std_confdata.xml 
 *   is not present.
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ats_inf.h
 *      Version: \main\3
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ats_inf.h
 *      Version: \main\3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for ATS
 *
 * \scope   API
 *********************************************************************
 */

#ifndef _ATS_INF_H
#define _ATS_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "srvb.h"
#include "ats.h"


#ifndef DIABAS_VAR_SY
    #error >>>> 'DIABAS_VAR_SY' undefined!
#endif

/* Brake,acceleration and engine speed not less than zero monitoring is enabled */
#if (ATS_BRK_APP_SC== 1)  
#include "brk.h"
#endif
#if ((DIABAS_VAR_SY == 11) && (CMBTYP_SY == CMBTYP_DS))
#include "t15.h"
#endif
 

#ifndef  _LIBRARYABILITY_H
#include "ats_std_dat.h"      /*  includes of DAMOS-header        */
#include "ats_msg.h"          /*  include  of MCOP-header         */
#endif

#endif /* _ATS_INF_H */
