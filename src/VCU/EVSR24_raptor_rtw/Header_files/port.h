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
 * $Filename__:port.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MMO1SI$ 
 * $Date______:25.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:port$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 1     25.03.2010 MMO1SI
 *   Correct PORT TC1724 TC1793 and TC1797.
 *   Bugfix for TC1797 P10 P[3:0] PDR assignment.
 * 
 * 1.12.0; 0     18.03.2010 MMO1SI
 *   Added support for TC1793 and TC1724
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: port.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _PORT_H
#define _PORT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Public export headerfile of PORT module.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */
#include "reg.h"
#include REG_PORT_H

/*
 ***************************************************************************************************
 * FCT internal includes
 ***************************************************************************************************
 */
#include "port_pub.h"

#ifndef _LIBRARYABILITY_H
#include "port_auto_conf.h"
#endif

/*_PORT_H */
#endif
