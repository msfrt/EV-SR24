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
 * $Filename__:srvx_pt1u8.h$ 
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
 * $Name______:srvx_pt1u8$ 
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

#ifndef _SRVX_PT1U8_H
#define _SRVX_PT1U8_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        PT1 element with U8 output
 *
 * \scope                 API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


#if   (SRVX_PT1U8_LOCATION == SRVX_LOCATION_CACHED)

    extern uint8  SrvX_PT1U8(sint32 X, sint32 *State, sint32 T1Rec, sint32 Dt);

#elif (SRVX_PT1U8_LOCATION == SRVX_LOCATION_INLINE)

    #error >>> 'The function SrvX_PT1U8 can\'t be inlined: Configuration not supported'

#elif (SRVX_PT1U8_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern uint8  SrvX_PT1U8(sint32 X, sint32 *State,
                          sint32 T1Rec, sint32 Dt));

#else

    #error >>>> 'Configuration for SrvX_PT1U8 not supported'

/* SRVX_PT1U8_LOCATION */
#endif

/* _SRVX_PT1U8_H */
#endif
