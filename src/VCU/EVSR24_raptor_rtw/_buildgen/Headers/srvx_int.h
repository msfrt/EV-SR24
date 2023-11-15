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
 * $Filename__:srvx_int.h$ 
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
 * $Name______:srvx_int$ 
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
 *      Version: \main\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 *                        Integrator module
 *
 * \scope                 API
 ***************************************************************************************************
 */
#ifndef _SRVX_INT_H
#define _SRVX_INT_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/**
    Macro for setting the Min and Max value for the limited integrator.
    This macro is used to set the minumum and maximum output value for an limited integrator.
    Param has to be passed as a pointer.
*/
#define SrvX_IntLimSetParam(Param, MinVal, MaxVal)                      \
        ((Param)->Min = (MinVal),(Param)->Max = (MaxVal))

#else
/** define structure type according to ASW naming convention */

/**
    Macro for setting the Min and Max value for the limited integrator.
    This macro is used to set the minumum and maximum output value for an limited integrator.
    Param has to be passed as a pointer.
*/
#define SrvX_IntLimSetParam(Param, MinVal, MaxVal)                      \
        ((Param)->Min_C = (MinVal),(Param)->Max_C = (MaxVal))

/* __ASW_NAMES__ */
#endif

/**
    SrvX_IntSetState: Macro for setting the internal state of all integrators.

    Sets the internal state of an integrator to the given value. The internal state is stored
    as (value << 16). State has to be passed as a pointer.
*/
#define SrvX_IntSetState(State, Val)   ( (*(State)) = ((Val) * 65536l) )




/**
    SrvX_IntU8Out: Returns the internal value of uint8 integrators (limited and unlimited).

    Returns the internal value of an uint8 integrator. The internal state is stored as
    state << 16, but is returned as the real value by the macro.
*/
#define SrvX_IntU8Out(State)  ( (uint8)(SrvB_Limit((State) / 65536l, 0, MAXUINT8))  )




/**
    SrvX_IntS16Out: Returns the internal value of sint16 integrators (limited and unlimited).

    Returns the internal value of a sint16 integrator. The internal state is stored as
    state << 16, but is returned as the real value by the macro.
*/
#define SrvX_IntS16Out(State) ( (sint16)(SrvB_Limit((State) / 65536l, MINSINT16, MAXSINT16)))




/*
 ***************************************************************************************************
 * Typedefs
 ***************************************************************************************************
 */

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

/**
    SrvX_IntLimU8Param_t: Parameter struct for limited U8 integrator.
*/
typedef struct
{
   uint8 Min;          /**< Min is the minimum value that the integrator state can achieve.      */
   uint8 Max;          /**< Max is the maximum value.                                            */
} SrvX_IntLimU8Param_t;

/**
    SrvX_IntLimS16Param_t: Parameter struct for limited S16 integrator.
*/
typedef struct
{
   sint16 Min;          /**< Min is the minimum value that the integrator state can achieve.      */
   sint16 Max;          /**< Max is the maximum value.                                            */
} SrvX_IntLimS16Param_t;


#else
/** define structure type according to ASW naming convention */

/**
    SrvX_IntLimU8Param_t: Parameter struct for limited U8 integrator.
*/
typedef struct
{
   uint8 Min_C;          /**< Min is the minimum value that the integrator state can achieve.     */
   uint8 Max_C;          /**< Max is the maximum value.                                           */
} SrvX_IntLimU8Param_t;

/**
    SrvX_IntLimS16Param_t: Parameter struct for limited S16 integrator.
*/
typedef struct
{
   sint16 Min_C;          /**< Min is the minimum value that the integrator state can achieve.    */
   sint16 Max_C;          /**< Max is the maximum value.                                          */
} SrvX_IntLimS16Param_t;

/* __ASW_NAMES__*/
#endif



/*
 ***************************************************************************************************
 * Prototypes   or unlimited integrators
 ***************************************************************************************************
 */

#if   (SRVX_INTU8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8  SrvX_IntU8(sint32 X, sint32 *State, sint32 T1Rec, sint32 Dt);

#elif (SRVX_INTU8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_IntU8 can\'t be inlined: Configuration not supported'

#elif (SRVX_INTU8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8  SrvX_IntU8(sint32 X, sint32 *State, sint32 T1Rec,
                                                   sint32 Dt));

#else

    #error >>>>'Configuration for SrvX_IntU8 not supported'

/* SRVX_INTU8_LOCATION */
#endif


#if   (SRVX_INTS16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IntS16(sint32 X, sint32 *State, sint32 T1Rec, sint32 Dt);

#elif (SRVX_INTS16_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_IntS16 can\'t be inlined: Configuration not supported'

#elif (SRVX_INTS16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IntS16(sint32 X, sint32 *State, sint32 T1Rec,
                                                    sint32 Dt));

#else

    #error >>>> 'Configuration for SrvX_IntS16 not supported'

/* SRVX_INTS16_LOCATION */
#endif



/*
 ***************************************************************************************************
 * Prototypes   or limited integrators
 ***************************************************************************************************
 */

#if   (SRVX_INTLIMS16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_IntLimS16(sint32 X, sint32 *State,
                                 const SrvX_IntLimS16Param_t *Param, sint32 T1Rec, sint32 Dt);

#elif (SRVX_INTLIMS16_LOCATION == SRVX_LOCATION_INLINE)

    #error '>>>> The function SrvX_IntLimS16 can\'t be inlined: Configuration not supported'

#elif (SRVX_INTLIMS16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_IntLimS16(sint32 X, sint32 *State,
                         const SrvX_IntLimS16Param_t *Param, sint32 T1Rec, sint32 Dt));

#else

    #error >>>>'Configuration for SrvX_IntLimS16 not supported'

 /* SRVX_INTLIMS16_LOCATION */
#endif

#if   (SRVX_INTLIMU8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8  SrvX_IntLimU8(sint32 X, sint32 *State, const SrvX_IntLimU8Param_t *Param,
                                sint32 T1Rec, sint32 Dt);

#elif (SRVX_INTLIMU8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>'The function SrvX_IntLimU8 can\'t be inlined: Configuration not supported'

#elif (SRVX_INTLIMU8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8  SrvX_IntLimU8(sint32 X, sint32 *State,
                         const SrvX_IntLimU8Param_t *Param,sint32 T1Rec, sint32 Dt));

#else

    #error >>>>'Configuration for SrvX_IntLimU8 not supported'

/* SRVX_INTLIMU8_LOCATION */
#endif


/* _SRVX_INT_H */
#endif
