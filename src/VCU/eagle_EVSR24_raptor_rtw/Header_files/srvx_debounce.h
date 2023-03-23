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
 * $Filename__:srvx_debounce.h$ 
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
 * $Name______:srvx_debounce$ 
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
#ifndef _SRVX_DEBOUNCE_H
#define _SRVX_DEBOUNCE_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Debounce function.
 *
 * \scope               API
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

#define SrvX_DebounceSetparam(Struc, THighLow, TLowHigh)            \
        ((Struc)->TimeHighLow = (THighLow), (Struc)->TimeLowHigh = (TLowHigh))
#else
/** define structure type according to ASW naming convention */

#define SrvX_DebounceSetparam(Struc, THighLow, TLowHigh)            \
        ((Struc)->tiHiLo_C = (THighLow),(Struc)->tiLoHi_C = (TLowHigh))


/* __ASW_NAMES__ */
#endif

/**
    SrvX_DebounceSetParam: Macro for setting the timing parameters.
*/

/**
    SrvX_DebounceInit: Initialization method for debounce element.
    stop timer, set the input state to X
    parameter Y keept for compatibility reasons
*/                                                                  \
#define SrvX_DebounceInit(Struc, X, Y)                              \
        ((Struc)->Timer = 0L,(Struc)->XOld  = (X))


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/**
    SrvX_DebounceParam_t: Parameter struct for Debounce.
    Contains the times for Low and High transition.
*/

#ifndef __ASW_NAMES__
/** define structure type according to CORE naming convention for internal use */

typedef struct
{
    sint16 TimeHighLow;         /**< Time for a High to Low transition                            */
    sint16 TimeLowHigh;         /**< Time for a Low to High transition                            */
}SrvX_DebounceParam_t;

#else
/** define structure type according to ASW naming convention */

typedef struct
{
    sint16 tiHiLo_C;         /**< Time for a High to Low transition                               */
    sint16 tiLoHi_C;         /**< Time for a Low to High transition                               */
}SrvX_DebounceParam_t;

/*__ASW_NAMES__ */
#endif




/**
    SrvX_DebounceState_t: State struct for Debounce.
    Saves the internal state and the software timers that are needed for debouncing.
*/
typedef struct
{
    bool   XOld;                /**< Old input value from last call                               */
    sint32 Timer;               /**< Timer for internal state                                     */
}SrvX_DebounceState_t;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

#if   (SRVX_DEBOUNCE_LOCATION == SRVX_LOCATION_CACHED)

    extern bool SrvX_Debounce(bool X, SrvX_DebounceState_t *State, const SrvX_DebounceParam_t *Param,
                              sint32 Dt);

#elif (SRVX_DEBOUNCE_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_Debounce can\'t be inlined: Configuration not supported'

#elif (SRVX_DEBOUNCE_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern bool SrvX_Debounce(bool X, SrvX_DebounceState_t *State,
                                                    const SrvX_DebounceParam_t *Param, sint32 Dt));

#else

    #error >>>> 'Configuration for SrvX_Debounce not supported'

/* SRVX_DEBOUNCE_LOCATION */
#endif

/* _SRVX_DEBOUNCE_H */
#endif
