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
 * $Filename__:cy327.h$
 * $Author____:BAP2KOR$
 * $Function__:initial version$
 * $Domain____:SDOM$
 * $User______:GOV6KOR$
 * $Date______:14.01.2012$
 * $Class_____:SWHDR$
 * $Name______:cy327$
 * $Variant___:1.8.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.8.0; 0     14.01.2012 GOV6KOR
 *   port.h is included for the implementation of EVT
 * 
 * 1.0.0; 0     08.06.2010 BAP2KOR
 *   initial version
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CY327_H
#define _CY327_H


/**
 ***************************************************************************************************
 * \moduledescription
 *
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

#include "dsm.h"
#include "spi.h"
#include "port.h"

/*
 ***************************************************************************************************
 * FCT Section: include public header of the atomic component Y
 ***************************************************************************************************
 */

#ifndef _LIBRARYABILITY_H
#include "cy327_auto_conf.h"
#endif

#include "cy327_pub.h"
#include "cy327_inl.h"

/* _CY327_H                                                                                       */
#endif
