/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:syc_stopcnt_inf.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:PMR1KOR$
 * $Date______:02.07.2012$
 * $Class_____:SWHDR$
 * $Name______:syc_stopcnt_inf$
 * $Variant___:1.17.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.17.0; 0     02.07.2012 PMR1KOR
 *   Test improvements and Review Points are Added
 * 
 * 1.15.0; 1     05.05.2011 MHD2KOR
 *   Changes done after initial testing and review
 * 
 * 1.15.0; 0     28.04.2011 MHD2KOR
 *   Supporting the calculation of ECU off time based on external COM message
 * 
 * 1.10.0; 0     19.05.2009 SETATIYO
 *   Calculation of ECU off time based on ESC-151, Consideration of Calibration 
 *   Wakeup and T15 reset in calculation of ECU off time for CY320
 * 
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_SYC\4
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/
#ifndef _SYC_STOPCNT_INF_H
#define _SYC_STOPCNT_INF_H

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "syc.h"
#include "reset.h"
#include "pwr.h"
#include "srvb.h"
#include "dsm.h"
#include "pwm.h"
#include "eep.h"
#include "memlay.h"
#include "syc_stopcnt_priv.h"


/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "syc_stopcnt_dat.h" /* DAMOS-header */
#include "syc_msg.h" /* auto-generated MCOP-header */

/* The system constants are available after syc_stopcnt_dat.h. As the eeot modul is only existent, if
the ECUOFF_TMR_SY equals 3, the inclusion of eeot.h can only be placed here */
#if (ECUOFF_TMR_SY==3)
#include "eeot.h"
#endif

#endif /* _SYC_STOPCNT_INF_H */
