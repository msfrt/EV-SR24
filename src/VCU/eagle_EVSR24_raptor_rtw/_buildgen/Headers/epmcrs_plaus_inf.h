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
 * $Filename__:epmcrs_plaus_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MRC2FE$ 
 * $Date______:29.10.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcrs_plaus_inf$ 
 * $Variant___:1.28.0$ 
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
 * 1.28.0; 0     29.10.2012 MRC2FE
 *   RQONE00103825: Removal of changes done in RQONE00070943 from the platform 
 *   line
 * 
 * 1.27.0; 0     20.09.2012 GSU2KOR
 *   RQONE00070943: Compensate the battery voltage consequences in the 
 *   calibrations used to detemine the engine direction for DGI Sensor
 * 
 * 1.23.0; 0     03.08.2010 PIE2SI
 *   KEEPDGISYNC
 * 
 * 1.18.1; 0     31.10.2008 PED1COB
 *   Initial import from Clearcase 
 *      File name: epmcrs_plaus_inf.h
 *      Version: \main\basis\b_Epm\2
 * 
 * 1.18.0; 0     31.07.2008 NESTORADMINSDOM
 *   EPM 18 migrated from CC
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMCRS_PLAUS_INF_H
#define _EPMCRS_PLAUS_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *
 * interface header for plausibilisation of crankshaft-signal and calculation of meanvalue for
 * enginespeed-depending number of teeth
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "epm.h"
#include "srvb.h"

/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "epm_prot.h"


#ifndef _LIBRARYABILITY_H
#include "epmcrs_plaus_dat.h"
#include "epmcrs_msg.h"
#endif

/*
 ***************************************************************************************************
 * Other Inline Function s
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Library functions with inline/no-inline implementation (always include the code)
 ***************************************************************************************************
 */


/* _EPMCRS_PLAUS_INF_H                                                                            */
#endif
