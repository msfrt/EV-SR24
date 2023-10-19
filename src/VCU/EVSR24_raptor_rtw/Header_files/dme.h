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
 * $Filename__:dme.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JOP1COB$ 
 * $Date______:03.08.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:dme$ 
 * $Variant___:1.17.0$ 
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
 * 1.17.0; 1     03.08.2011 JOP1COB
 *   -DME_NUM_MAX_BYTES_IN_BACKGND made configurable
 *   
 *   -Review changes
 * 
 * 1.17.0; 0     28.07.2011 JOP1COB
 *   CRC32 Checksum implementation is made configurable
 * 
 * 1.10.0; 0     15.08.2008 AWL2SI
 *   Ported from ClearCase
 * 
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   Checkin from ClearCase
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _DME_H
#define _DME_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              dme.h: calibration software - public header file for all users of dme driver
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Re-Export Section: include atomic comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

#include "memlay.h"

/*
 ***************************************************************************************************
 * FCT Section: include public header of the atomic component dme
 ***************************************************************************************************
 */

#include "dme_pub.h"
#ifndef _LIBRARYABILITY_H
#include "dme_auto_conf.h"
/* _LIBRARYABILITY_H */
#endif

/* _DME_H */
#endif
