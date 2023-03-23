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
 * $Filename__:srvf_pwin.h$ 
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
 * $Name______:srvf_pwin$ 
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

#ifndef _SRVF_PWIN_H
#define _SRVF_PWIN_H

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


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

typedef struct
{
    real32 Kp;          /**< Proportional factor Kp within window                                 */
    real32 KpPos;       /**< Proportional factor Kp above positive window border                  */
    real32 KpNeg;       /**< Proportional factor Kp below negative window border                  */
    real32 WinPos;      /**< Positive window border                                               */
    real32 WinNeg;      /**< Negative window border                                               */
} SrvF_PWinParam_t;


#else
/** define structure type according to ASW naming convention */

typedef struct
{
    real32 Kp_C;          /**< Proportional factor Kp_C within window                             */
    real32 KpPos_C;       /**< Proportional factor Kp_C above positive window border              */
    real32 KpNeg_C;       /**< Proportional factor Kp_C below negative window border              */
    real32 WinPos_C;      /**< Positive window border                                             */
    real32 WinNeg_C;      /**< Negative window border                                             */
} SrvF_PWinParam_t;

/*__ASW_NAMES__*/
#endif
/** Parameter struct for proportional component                                                   */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__srv__HighSpeed__START

extern real32 SrvF_PWin(real32 X, const SrvF_PWinParam_t *Param);

__PRAGMA_USE__CODE__srv__HighSpeed__END

/* _SRVF_PWIN_H */
#endif
