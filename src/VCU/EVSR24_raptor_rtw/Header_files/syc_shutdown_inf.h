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
 * $Filename__:syc_shutdown_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PMR1KOR$
 * $Date______:02.07.2012$
 * $Class_____:SWHDR$
 * $Name______:syc_shutdown_inf$
 * $Variant___:1.15.0$
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
 * 1.15.0; 0     02.07.2012 PMR1KOR
 *   Changes are Made w.r.t StopCounter Wakeup Changes.
 * 
 * 1.13.0; 0     05.09.2011 MHD2KOR
 *   Support of Wake up for CJ930 projects
 * 
 * 1.10.1; 0     26.08.2009 SETATIYO
 *   correct version of header files included
 * 
 * 1.10.0; 0     29.07.2009 SETATIYO
 *   support of additional wakeup possibility in Shutdown via service
 *   Consideration of measures to avoid RAM-overwriting
 *   
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
#ifndef _SYC_SHUTDOWN_INF_H
#define _SYC_SHUTDOWN_INF_H

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "syc.h"
#include "dio.h"
#include "moccom.h"
#include "mocram.h"
#include "pwr.h"
#include "cpu.h"
#include "eep.h"
#include "reset.h"
#include "t15.h"
#include "mrly.h"
#include "core_env.h"
#include "os.h"
#include "syc_stopcnt_priv.h"


/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "syc_shutdown_dat.h" /* DAMOS-header */


#endif /* _SYC_SHUTDOWN_INF_H */
