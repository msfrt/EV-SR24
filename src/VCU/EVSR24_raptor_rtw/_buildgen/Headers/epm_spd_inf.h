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
 * $Filename__:epm_spd_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:IOM2FE$
 * $Date______:13.06.2012$
 * $Class_____:SWHDR$
 * $Name______:epm_spd_inf$
 * $Variant___:1.36.0$
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
 * 1.36.0; 0     13.06.2012 IOM2FE
 *   Compiler Independence
 * 
 * 1.35.0; 0     11.05.2012 OMO2FE
 *   software break because of missig  gpta makros in the function 
 *   Epm_Spd_1ms_Proc
 * 
 * 1.33.0; 0     31.08.2011 PIE2SI
 *   Update after vehicle test
 * 
 * 1.22.1; 0     05.10.2009 TUC2SI
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :epm_spd_inf
 *        Variant :1.150
 *        Revision :1
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPM_SPD_INF_H
#define _EPM_SPD_INF_H

/**
 ***************************************************************************************************
 * \moduledescription
 * interface header for epm_spd, includes all necessary headers
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "epm.h"
#include "srvb.h"
#include "dsm.h"

/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */
#include "epm_prot.h"
#ifndef _LIBRARYABILITY_H
#include "epm_spd_dat.h"
#include "epm_msg.h"
#if (EPM_ATS_SY == 1)
#include "ats.h"
#endif
#endif

/* _EPM_SPD_INF_H                                                                                 */
#endif
