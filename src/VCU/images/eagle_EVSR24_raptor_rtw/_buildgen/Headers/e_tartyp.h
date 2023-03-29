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
 * $Filename__:e_tartyp.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:26.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:e_tartyp$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     26.08.2008 KLMEYER
 *   Update: Core delivery 2008-07
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/**************************************************************************************************
 *  FILE:           E_TARTYP.H
 *
 *  DESCRIPTION:    target specific type definitions - external visible
 *
 *  AUTHOR:         ETAS/PSC1-Sz
 *
 *  CREATED:        24.01.2003            11:00:00
 *
 *  COPYRIGHT:      ETAS GmbH
 *                  Stuttgart / Germany
 *                  All rights reserved
**************************************************************************************************
 

 History:
 --------

who when        ver call    what
---------------------------------------------------------------------------------------------------
Sz  24.01.2003  1   42628   moved to line 03c and created a seperate file for each function
Vr  27.02.2003  2   42695   DD022 introduce prefix OS_ for all ERCOSEK- related symbols
*/


#ifndef __E_TARTYP_H
#define __E_TARTYP_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

/* datatypes for system time     
     
*****************************/
typedef T_os_uint                    TickType;
typedef T_os_uint64                  TimeType;

/* datatypes for timer services
********************************/
typedef T_os_sint32              DeltaTickType;

/* pointer datatypes for OSEK-API
***********************************/
typedef TickType *          TickRefType;
typedef TimeType *          TimeRefType;
typedef DeltaTickType *     DeltaTickRefType;

typedef T_os_uint                       IntDescriptorType;
typedef IntDescriptorType *             IntDescriptorRefType;

typedef struct os_targetCfgData {
     T_os_uint    _interruptStackTop;
     T_os_uint    _interruptStackBottom;
} T_os_targetCfgData;

/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */


#endif /* __E_TARTYP_H */

/***************************************************************************************/
