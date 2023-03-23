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
 * $Filename__:srvx_pt1s16.h$ 
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
 * $Name______:srvx_pt1s16$ 
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
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_PT1S16_H
#define _SRVX_PT1S16_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        PT1 element with S16 output
 *
 * \scope                 API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
    SrvX_PT1SetState: Macro for setting the internal state of the sint16 AND uint8 PT1 element.
    The internal state of the PT1 element is stored as (Val << 16).
    State has to be passed as a pointer.
*/
#define SrvX_PT1SetState(State, Val)     ( (*(State)) = ((Val) * 65536l) )

/**
    SrvX_PT1Out: Macro for returning the internal state of a PT1 filter with external quantisation.
    The internal state of the PT1 element is stored as (State << 16). State is NOT passed as a
    pointer!!.
*/
#define SrvX_PT1Out(State)  ((State) / 65536L)


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


#if   (SRVX_PT1S16_LOCATION == SRVX_LOCATION_CACHED)

    extern sint16 SrvX_PT1S16(sint32 X_s32, sint32 *State_ps32, sint32 T1Rec_s32, sint32 Dt_s32);

#elif (SRVX_PT1S16_LOCATION == SRVX_LOCATION_INLINE)

    #error 'The function SrvX_PT1S16 can\'t be inlined: Configuration not supported'

#elif (SRVX_PT1S16_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint16 SrvX_PT1S16(sint32 X_s32, sint32 *State_ps32,
                                                    sint32 T1Rec_s32, sint32 Dt_s32));
#else

    #error 'Configuration for SrvX_PT1S16 not supported'

#endif  /* SRVX_PT1S16_LOCATION */


#endif /* _SRVX_PT1S16_H */
