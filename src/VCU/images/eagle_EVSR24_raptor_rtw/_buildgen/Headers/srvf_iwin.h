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
 * $Filename__:srvf_iwin.h$ 
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
 * $Name______:srvf_iwin$ 
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

#ifndef _SRVF_IWIN_H
#define _SRVF_IWIN_H

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
#define SrvF_IWinInit(X, State) (*(State) = (X))

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/** Parameter struct for integral component */
typedef struct
{
    real32 Ki;      /**< Integral factor Ki = 1/Ti within window                                  */
    real32 KiPos;   /**< Integral factor Ki = 1/Ti above positive window border                   */
    real32 KiNeg;   /**< Integral factor Ki = 1/Ti below negative window border                   */
    real32 WinPos;  /**< Positive window border                                                   */
    real32 WinNeg;  /**< Negative window border                                                   */
} SrvF_IWinParam_t;


#else
/** define structure type according to ASW naming convention */

/** Parameter struct for integral component */
typedef struct
{
    real32 Ki_C;      /**< Integral factor Ki = 1/Ti within window                                */
    real32 KiPos_C;   /**< Integral factor Ki = 1/Ti above positive window border                 */
    real32 KiNeg_C;   /**< Integral factor Ki = 1/Ti below negative window border                 */
    real32 WinPos_C;  /**< Positive window border                                                 */
    real32 WinNeg_C;  /**< Negative window border                                                 */
} SrvF_IWinParam_t;

/*__ASW_NAMES__*/
#endif

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__srv__HighSpeed__START

extern real32 SrvF_IWin(real32 X, const SrvF_IWinParam_t *Param, real32 *State, real32 Dt);

__PRAGMA_USE__CODE__srv__HighSpeed__END

/* _SRVF_IWIN_H */
#endif
