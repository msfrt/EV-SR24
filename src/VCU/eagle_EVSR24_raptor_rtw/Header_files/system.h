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
 * $Filename__:system.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:03.07.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:system$ 
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
 * 1.7.0; 0     03.07.2009 VKA2FE
 *   Derived from B_SRVA.7.0.0
 * 
 * 1.6.0_DS; 0     17.12.2008 KDD2FE
 *   File ported from CC with label B_SRVA.6.0.0
 * 
 * 1.4.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SYSTEM_H
#define _SYSTEM_H

/*                                                                              */
/********************************************************************************/

/********************************************************************************/
/*                                                                              */
/*      Standard definitions: some typedefs, NULL, TRUE, FALSE ...              */

#include    "COMMON.H"              /* The Core common include                  */
    /* This file includes:                                                      */
    /*       std_type.h     : Typedefs...                                       */
    /*       Core_Env.h     : Core environment                                  */
    /*       compiler.h     : The compiler specific macros                      */
    /*       machine.h      : the machine properties                            */

/*                                                                              */
/********************************************************************************/

/********************************************************************************/
/*                                                                              */
/*      Others typedefs for GS                                                  */

#include    "STDDEFME.H"            /* ME specific definitions                  */
#include    "BITUTIL.H"             /* Macros for Bit Processing                */

/*                                                                              */
/********************************************************************************/


/********************************************************************************/
/*                                                                              */
/*      Include of Service library                                              */

#include    "srv.h"                 /* Service library                          */


/*                                                                              */
/********************************************************************************/


/********************************************************************************/
/*                                                                              */
/*      Include of ascet adapters                                               */

#include    "cdgen.h"               /* Ascet adapter                            */

/*                                                                              */
/********************************************************************************/

/********************************************************************************/
/*                                                                              */
/*      Project's specific header (this file doesn't belong to this FS)         */

#include    "PROJECTSPECIFIC.H"     /* customer/project specific part           */

/*                                                                              */
/********************************************************************************/

/* _SYSTEM_H */
#endif
