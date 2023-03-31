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
 * $Filename__:srvf_piwin.h$ 
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
 * $Name______:srvf_piwin$ 
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
 *      Version: \main\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_PIWIN_H
#define _SRVF_PIWIN_H

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
#define SrvF_PIInit(Val, State) ((State)->Yp = 0, (State)->Yi = (Val))

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/* Struct containing limits for proportional and integral component                               */
typedef struct
{
    real32 Max;
    real32 Min;
} SrvF_LimitParam_t;

#else
/** define structure type according to ASW naming convention */

/* Struct containing limits for proportional and integral component                               */
typedef struct
{
    real32 Max_C;
    real32 Min_C;
} SrvF_LimitParam_t;


/*__ASW_NAMES__*/
#endif


/* Struct containing state of proportional and integral component                                 */
typedef struct
{
    real32 Yp;
    real32 Yi;
} SrvF_PIWinState_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__srv__HighSpeed__START

extern real32 SrvF_PIWin(real32 X, real32 Pv,
              const SrvF_PWinParam_t *Pparam, const SrvF_IWinParam_t *Iparam,
              const SrvF_LimitParam_t *Limits, SrvF_PIWinState_t *State, real32 Dt);

__PRAGMA_USE__CODE__srv__HighSpeed__END

/* _SRVF_PIWIN_H */
#endif
