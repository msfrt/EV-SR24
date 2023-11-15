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
 * $Filename__:diag.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:diag$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diag.h
 *      Version: \main\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 


#ifndef _DIAG_H
#define _DIAG_H

/**
 *********************************************************************
 * \moduldescription
 *          package header for diag module
 *
 * \scope  API
 *********************************************************************
 */


/*
 *******************************************************************************
 * Includes
 *******************************************************************************
 */

#include "diagcom.h" /* Implicitily required to include this to avoid make errors
                        during compilation as the header files below needs typedefintions
                        from diagcom module */
#include "diag_pub.h"
#include "diag_sess_pub.h"

#include "diagappl.h"

#include "cpu.h" /* Implicitily required to include this to avoid make errors
                    during compilation as the header files below needs CPU_MS_TO_TICKS
                    typedefintions from cpu module */
#include "diag_uhwe_pub.h"
#include "diag_distrib_pub.h"


#endif
