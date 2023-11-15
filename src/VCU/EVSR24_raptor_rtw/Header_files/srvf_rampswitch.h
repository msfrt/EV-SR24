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
 * $Filename__:srvf_rampswitch.h$ 
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
 * $Name______:srvf_rampswitch$ 
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
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _SRVF_RAMPSWITCH_H
#define _SRVF_RAMPSWITCH_H

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
#define SRVF_RAMPSWITCH_POS    0UL /* Switch position (0 = B, 1 = A)                              */
#define SRVF_RAMPSWITCH_ACTIVE 1UL /* Ramp active     (0 = inactive, 1 = active)                  */
#define SRVF_RAMPSWITCH_DIR    2UL /* Ramp direction  (00 = end, 01 = rising, 11 = falling)       */
#define SRVF_RAMPSWITCH_NUMDIR 2UL /* Number of bits used for ramp direction                      */

/** Initialization method for SrvF_RampSwitch                                                     */
#define SrvF_RampSwitch_init(switchpos, flag) (*(flag) = (switchpos) ? TRUE : FALSE)

/** Query methods for SrvF_RampSwitch switch position                                             */
#define SrvF_RampSwitch_pos(flag)    (SrvB_GetBit(*(flag),SRVF_RAMPSWITCH_POS))

/** Query method for SrvF_Rampwitch active state                                                  */
#define SrvF_RampSwitch_active(flag) (SrvB_GetBit(*(flag),SRVF_RAMPSWITCH_ACTIVE))

/* Interface to initialize or deactivate direction function */
#define SrvF_RampSwitchDirInit(flag) (SrvB_SetBitField(*(flag),SRVF_RAMPSWITCH_DIR,SRVF_RAMPSWITCH_NUMDIR,0))

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__srv__HighSpeed__START

extern real32 SrvF_RampSwitch(real32 Xa, real32 Xb, bool Switch, const SrvF_RampParam_t *Param,
                              real32 *State, bit8 *Flag, real32 Dt);

__PRAGMA_USE__CODE__srv__HighSpeed__END


/* _SRVF_RAMPSWITCH_H */
#endif
