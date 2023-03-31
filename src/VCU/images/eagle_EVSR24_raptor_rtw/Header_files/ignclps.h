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
 * $Filename__:ignclps.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:GUH1SI$ 
 * $Date______:19.04.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:ignclps$ 
 * $Variant___:1.5.1$ 
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
 * 1.5.1; 0     19.04.2011 GUH1SI
 *   removed DSM macro to FC: IgnClPs_Dia
 * 
 * 1.5.0; 0     23.11.2009 GUH1SI
 *   corrected makros for DSM access
 * 
 * 1.4.0; 0     30.10.2009 BUA2ABT
 *   changes for support of 12 cylinders
 * 
 * 1.3.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*--------------------------------------------------------------------------------------------------
 * Defines
 *--------------------------------------------------------------------------------------------------
 */
#ifndef IGNCLPS_H
#define IGNCLPS_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
#include <igcps_glbdef.d>
#include "cdrv_memlay.h"

/*--------------------------------------------------------------------------------------------------
 * Type definitions
 *--------------------------------------------------------------------------------------------------
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Number of CK240 or CK200 IC */
#if ((SY_CK200 > 0) && (SY_CK240 >0))
    #error >>>> Both systemconstants 'SY_CK200' and 'SY_CK240' are defined!
#elif (defined(SY_CK200) && ((SY_CK200 == 1) || (SY_CK200 == 2)))
   /* CK200 is used */
   #define IGNCLPS_NUM    SY_CK200

#elif (defined(SY_CK240) && ((SY_CK240 == 1) || (SY_CK240 == 2)))
   /* CK240 is used */
   #define IGNCLPS_NUM    SY_CK240

#else
    #error >>>> Neither 'SY_CK240' nor 'SY_CK200' are defined!
#endif


#if (!defined(SY_ZYLZA) || (SY_ZYLZA == 0) || (SY_ZYLZA > 12))
    #error >>>> 'SY_ZYLZA' is not defined or the assigned value is wrong!
#endif

/* Known Errors in Diagnostic Register of CK240 */
enum IGNCLPS_IC_Errors{
      IGNCLPS_SC_GROUND            = 0x0,
      IGNCLPS_OPEN_LOAD         = 0x1,
      IGNCLPS_SC_UBATT          = 0x2,
      IGNCLPS_ENDSTAGE_OK       = 0x3};


/* public functions */

/* Prototypes of the I/O functions                                                                */

/* Prototypes of the processes                                                                    */

#endif   /* IGNCLPS_H */
