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
 * $Filename__:srvx_ramp.h$ 
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
 * $Name______:srvx_ramp$ 
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

#ifndef _SRVX_RAMP_H
#define _SRVX_RAMP_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Ramp element
 * scope                API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


#define RAMP_RISING   (1)           /**< definition for a rising ramp.                            */
#define RAMP_FALLING  (-1)          /**< definition for a fallin ramp.                            */
#define RAMP_END      (0)           /**< definition for a ramp that has reached its end value.    */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use  */

/**
    SrvX_RampSetSlope: Set the slope parameter for the ramp Param has to be passed as a pointer.
    Param has to be passed as a pointer
*/
#define SrvX_RampSetSlope(Param, SlopePosVal, SlopeNegVal)  \
        ((Param)->SlopePos = (SlopePosVal),(Param)->SlopeNeg = (SlopeNegVal))

#else
/** define structure type according to ASW naming convention                     */

/**
    SrvX_RampSetSlope: Set the slope parameter for the ramp Param has to be passed as a pointer.
    Param has to be passed as a pointer
*/
#define SrvX_RampSetSlope(Param, SlopePosVal, SlopeNegVal)  \
        ((Param)->Pos_C = (SlopePosVal),(Param)->Neg_C = (SlopeNegVal))

/* __ASW_NAMES__ */
#endif



/**
    SrvX_RampTargetReached: Returns if the target of the ramp has been reached.
*/
#define SrvX_RampTargetReached(State, Target)               \
        (                                                   \
            (bool)((State) == (Target))                     \
        )

/**
    SrvX_RampSetState: Macro for setting the internal state of the ramp element.
    Param has to be passed as a pointer.
*/
#define SrvX_RampSetState(State, Val)                       \
        (                                                   \
            (*(State)) = (Val)                              \
        )

/**
    SrvX_RampDirIni: Initialize the Direction parameter for the ramp.
    Dir has to be passed as a pointer.
*/
#define SrvX_RampDirInit(Dir)    ((*(Dir)) =  RAMP_END)




/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/**
    SrvX_RampParam_t: Container for SrvX_Ramp.
    Here the slopes for falling and rising ramp are stored.
    The slope parameters are stored multiplied with 2^16
*/

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

typedef struct
{
    sint32 SlopePos;        /**< slope if the ramp has to be increased                          */
    sint32 SlopeNeg;        /**< slope if the ramp has to be decreased                          */
}SrvX_RampParam_t;


#else
/** define structure type according to ASW naming convention */

typedef struct
{
    sint32 Pos_C;            /**< slope if the ramp has to be increased                         */
    sint32 Neg_C;            /**< slope if the ramp has to be decreased                         */
}SrvX_RampParam_t;

/*__ASW_NAMES__*/
#endif

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


#if   (SRVX_RAMP_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_Ramp(sint32 Target, sint32 *State, sint16 *Dir,
                            const SrvX_RampParam_t *Param, sint32 Dt);

#elif (SRVX_RAMP_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>> 'The function SrvX_Ramp can\'t be inlined: Configuration not supported'

#elif (SRVX_RAMP_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_Ramp(sint32 Target, sint32 *State, sint16 *Dir,
                                                  const SrvX_RampParam_t *Param, sint32 Dt));

#else

    #error >>>> 'Configuration for SrvX_Ramp not supported'

/* SRVX_RAMP_LOCATION */
#endif


/* _SRVX_RAMP_H */
#endif
