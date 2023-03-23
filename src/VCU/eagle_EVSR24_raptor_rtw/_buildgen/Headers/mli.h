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
 * $Filename__:mli.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:28.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:mli$ 
 * $Variant___:1.7.0$ 
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
 * 1.7.0; 0     28.08.2008 LENZSI
 *   Initial import from Clearcase 
 *      File name: mli.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MLI_H
#define _MLI_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                  Header file for MLI.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

#include "cpu.h"

#include "reg.h"
#include REG_MLI_H

/*
 ***************************************************************************************************
 * FCT Section: include public header of the atomic component mli
 ***************************************************************************************************
 */

#include "mli_pub.h"

/* auto-generated configuration headerfile */
/* MLI module is not library-able, so no #ifndef _LIBRARYABILITY_H here */
#include "mli_auto_conf.h"

/*
 ***************************************************************************************************
 * INL Section: include all inline functions of the atomic components which shall be exported
 ***************************************************************************************************
 */

#include "mli_inl.h"

/* _MLI_H                                                                                         */
#endif
