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
 * $Filename__:srvx_rampswitch.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VKA2FE$ 
 * $Date______:29.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_rampswitch$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     29.08.2008 VKA2FE
 *   Component Toolbox-Import
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _SRVX_RAMPSWITCH_H
#define _SRVX_RAMPSWITCH_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      Rampswitch functionality - ramp that is able to switch (and ramp) between
 *                      two targets
 *
 * scope                API
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Bit positions in flag                                                                          */
#define SRVX_RAMPSWITCH_POS    0UL /**< Switch position (0 = B, 1 = A)                            */
#define SRVX_RAMPSWITCH_ACTIVE 1UL /**< Ramp active     (0 = inactive, 1 = active)                */
#define SRVX_RAMPSWITCH_DIR    2UL /**< Ramp direction  (00 = end, 01 = rising, 11 = falling)     */
#define SRVX_RAMPSWITCH_NUMDIR 2UL /**< Number of bits used for ramp direction                    */

/** Initialization method for SrvX_RampSwitch                                                     */
#define SrvX_RampSwitch_init(switchpos, flag) (*(flag) = (switchpos) ? TRUE : FALSE)

/** Query methods for SrvX_RampSwitch switch position                                             */
#define SrvX_RampSwitch_pos(flag)    (SrvB_GetBit(*(flag),SRVX_RAMPSWITCH_POS))
/** Query method for SrvX_Rampwitch active state                                                  */
#define SrvX_RampSwitch_active(flag) (SrvB_GetBit(*(flag),SRVX_RAMPSWITCH_ACTIVE))

/* Interface to initialize or deactivate direction function */
#define SrvX_RampSwitchDirInit(flag) (SrvB_SetBitField(*(flag),SRVX_RAMPSWITCH_DIR,SRVX_RAMPSWITCH_NUMDIR,0UL))

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */


#if   (SRVX_RAMPSWITCH_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_RampSwitch(sint32 Xa, sint32 Xb, bool Switch,
                                  const SrvX_RampParam_t *Param,
                                  sint32 *State, bit8 *Flag, sint32 Dt);

#elif (SRVX_RAMPSWITCH_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_RampSwitch can\'t be inlined: Configuration not supported'

#elif (SRVX_RAMPSWITCH_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_RampSwitch(sint32 Xa, sint32 Xb, bool Switch,
                                                        const SrvX_RampParam_t *Param,
                                                        sint32 *State, bit8 *Flag, sint32 Dt));

#else

    #error >>>> 'Configuration for SrvX_RampSwitch not supported'

/* SRVX_RAMPSWITCH_LOCATION */
#endif


/* _SRVX_RAMPSWITCH_H */
#endif
