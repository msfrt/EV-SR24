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
 * $Filename__:devlib.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JON6KOR$
 * $Date______:24.10.2012$
 * $Class_____:SWHDR$
 * $Name______:devlib$
 * $Variant___:1.145.0$
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
 * 1.145.0; 0     24.10.2012 JON6KOR
 *   sc
 * 
 * 1.6.0; 0     05.08.2008 KLN1SI
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _DEVLIB_H                                        /* protect multiple includes             */
#define _DEVLIB_H

/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

#include "adc.h"          /* ADC module header                                                    */
#include "dsm.h"          /* diagnostic systems manager header file                               */
#include "pwm.h"          /* PWM input output module header                                       */
#include "dio.h"          /* digital input output module header file                              */
#include "srvb.h"         /* extended service library header                                      */
#include "srvx.h"         /* extended service library header                                      */

/*
 ***************************************************************************************************
 * FCT Section: include all atomic components inside the structural component
 ***************************************************************************************************
 */
#include "common.h"                            /* Common header for the project                   */

#if ((DEDIA_VRNTCONF_SY == 0) || (DEDIA_VRNTCONF_SY == 1))
#include "devlib_pwrstgstate_pub.h"            /* power stage state calculation module            */
#include "devlib_src_pub.h"                    /* SRC module                                      */
#include "devlib_transstage_pub.h"             /* TransStage module                               */
#include "devlib_digouterrhndlr_pub.h"         /* digital outputs error handling module           */
#include "devlib_pwmouterrhndlr_pub.h"         /* pwm outputs error handling module               */
#include "devlib_psdiag_pub.h"                 /* common for error handling of pwm and Digital
                                                  powerstages                                     */
#include "devlib_digout_pub.h"                 /* digital outputs error handling module           */
#include "devlib_pwmout_pub.h"                 /* pwm outputs error handling module               */
#include "rmtc.h"


#if (DEVLIB_HBRGENA_SY == 1)
#include "devlib_hbrg_pub.h"                   /* H-Bridge diagnosis functionality                */
#endif /*DEVLIB_HBRGENA_SY*/

#if (DEVLIB_ACTRPRTCMPNENA_SY == 1)
#include "devlib_actrprt_pub.h"                /* actuator protection module                      */
#endif /*DEVLIB_ACTRPRTCMPNENA_SY*/

#if (DEVLIB_DIACTLLINECMPNENA_SY == 1)
#include "devlib_diactlline_pub.h"             /* Diagnostic Error detection module               */
#endif /*DEVLIB_DIACTLLINECMPNENA_SY*/

#if (DEVLIB_4WINDIACMPNENA_SY == 1)
#include "devlib_4windia_pub.h"                /* Public header for 4 window diagnosis            */
#endif /*DEVLIB_4WINDIACMPNENA_SY*/

#if (DEVLIB_PHYSRNGCHK_SY == 1)
#include "devlib_physrngchk_pub.h"             /* Physical range check functionality              */
#endif /*DEVLIB_PHYSRNGCHK_SY*/


#endif /*END DEDIA_VRNTCONF_SY*/

#endif
