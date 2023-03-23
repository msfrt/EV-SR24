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
 * $Filename__:srvf_ramp.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SYA2COB$ 
 * $Date______:07.11.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_ramp$ 
 * $Variant___:1.15.0$ 
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
 * 1.15.0; 0     07.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_RAMP_H
#define _SRVF_RAMP_H

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

#define SRVF_RAMP_RISING   (1L)     /* definition for a rising ramp.                          */
#define SRVF_RAMP_FALLING (-1L)     /* definition for a fallin ramp.                          */
#define SRVF_RAMP_END      (0L)     /* definition for a ramp that has reached its end value.  */


/** SrvF_RampSetSlope: Set the slope parameter for the ramp Param has to be passed as a pointer.
    Param has to be passed as a pointer */
#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use  */
#define SrvF_RampSetSlope(Param, SlopePosVal, SlopeNegVal)  \
        ((Param)->SlopePos = (SlopePosVal), (Param)->SlopeNeg = (SlopeNegVal))
#else
/** define structure type according to ASW naming convention                     */
#define SrvF_RampSetSlope(Param, SlopePosVal, SlopeNegVal)  \
        ((Param)->Pos_C = (SlopePosVal), (Param)->Neg_C = (SlopeNegVal))
/* __ASW_NAMES__ */
#endif


/** SrvF_RampSetState: Macro for setting the internal state of the ramp element.
    Param has to be passed as a pointer.  */
#define SrvF_RampSetState(State, Val)         ((*(State)) = (Val))

/** SrvF_RampDirIni: Initialize the Direction parameter for the ramp.
    Dir has to be passed as a pointer. */
#define SrvF_RampDirInit(Dir)                 ((*(Dir)) =  SRVF_RAMP_END)

/** SrvF_RampTargetReached: Returns if the target of the ramp has been reached. */
#define SrvF_RampTargetReached(State, Target) (bool)((State) == (Target))


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

typedef struct
{
    real32 SlopePos;        /**< Positive ramp slope dy/dt for y < x                              */
    real32 SlopeNeg;        /**< Negative ramp slope dy/dt for y > x                              */
} SrvF_RampParam_t;

#else
/** define structure type according to ASW naming convention */

typedef struct
{
    real32 Pos_C;           /**< Positive ramp slope dy/dt for y < x                              */
    real32 Neg_C;           /**< Negative ramp slope dy/dt for y > x                              */
} SrvF_RampParam_t;

/*__ASW_NAMES__*/
#endif

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__srv__HighSpeed__START

extern bool SrvF_Ramp(real32 X, const SrvF_RampParam_t *Param, real32 *State, sint8 *Direction,
                      real32 Dt);

__PRAGMA_USE__CODE__srv__HighSpeed__END

/* _SRVF_RAMP_H */
#endif
