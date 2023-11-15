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
 * $Filename__:hbr.h$
 *
 * $Author____:PMR2KOR$
 *
 * $Function__:Header files$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:KHL1HC$
 * $Date______:16.05.2012$
 * $Class_____:SWHDR$
 * $Name______:hbr$
 * $Variant___:1.5.0$
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
 * 1.5.0; 0     16.05.2012 KHL1HC
 *   Include the SrvB library
 * 
 * 1.0.0; 1     22.09.2011 BIL1HC
 *   Hbr update: remove macro interface definition, using function pointer 
 *   interface.
 * 
 * 1.0.0; 0     04.08.2010 PMR2KOR
 *   HBR Header files
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _HBR_H
#define _HBR_H
/**
 ***************************************************************************************************
 * \moduledescription
 *                  Peripheral module driver for the Monitoring module of the Cy315/Cy320
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * FCT Section: include public header of the atomic component Y
 ***************************************************************************************************
 */

#ifndef _LIBRARYABILITY_H
#include "hbr_auto_conf.h"
#endif
#include "hbr_pub.h"
#include "srvb.h"         /* extended service library header                                      */

#endif   /* _HBR_H */
