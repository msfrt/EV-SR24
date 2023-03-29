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
 * $Filename__:srvf_pt1.h$ 
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
 * $Name______:srvf_pt1$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_PT1_H
#define _SRVF_PT1_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/** Initialization method                                                                         */
#define SrvF_PT1Init(X, State) (*(State) = (X))

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/** Parameter struct for proportional component with time delay                                   */
typedef struct
{
    real32 T1;          /**< Time delay T1                                                        */
                        /**< Proportional factor Kp = 1                                           */
} SrvF_PT1Param_t;

#else
/** define structure type according to ASW naming convention */

/** Parameter struct for proportional component with time delay                                   */
typedef struct
{
    real32 T1_C;        /**< Time delay T1                                                        */
                        /**< Proportional factor Kp = 1                                           */
} SrvF_PT1Param_t;

/*__ASW_NAMES__*/
#endif

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__srv__HighSpeed__START

extern real32 SrvF_PT1(real32 X, const SrvF_PT1Param_t *Param, real32 *State, real32 Dt);

__PRAGMA_USE__CODE__srv__HighSpeed__END

/* _SRVF_PT1_H */
#endif
