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
 * $Filename__:smp480_pub.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MZW2FE$ 
 * $Date______:05.05.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:smp480_pub$ 
 * $Variant___:1.3.1$ 
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
 * 1.3.1; 0     05.05.2011 MZW2FE
 *   bugfix done
 *   Bugfix for Handling SMP480-HW-Bug in case a SPI-Reset is requested. 
 *   The Bugfix reserves the SPI-Bus for a minimum of 50us after the reset-cmds.
 * 
 * 1.2.0; 0     24.06.2010 MZW2FE
 *   - enhancement of error-handling
 *   - new init-behaviour. changes: now after init valid values for pressure and
 *    temperature available
 *   - new interface for resetting an onboard sensor
 * 
 * 1.1.0; 0     27.11.2009 JWI2SI
 *   b_obs.1.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SMP480_PUB_H
#define _SMP480_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription : public header for SMP480 device driver
 *
 * \scope             : API
 ***************************************************************************************************
 */

#define SMP480_ERR__ALL_OK              0
#define SMP480_ERR__NOT_IMPLEMENTED     1

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Typedef
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/*------------------------------------------------------------------------------------------------*/
/* offer an interface as expected from OBS (additional channel-parameter) */
#define Smp480_ObsGetPressure(device,channel,val)         Smp480_GetPressure(device,val)
#define Smp480_ObsGetPressureRaw(device,channel,val)      Smp480_GetPressureRaw(device,val)

#define Smp480_ObsGetTemperature(device,channel,val)      Smp480_GetTemperature(device,val)
#define Smp480_ObsGetTemperatureRaw(device,channel,val)   Smp480_GetTemperatureRaw(device,val)

#define Smp480_ObsGetErrorInfoPressure(device,channel)    Smp480_GetErrorInfoPressure(device)
#define Smp480_ObsGetErrorInfoTemperature(device,channel) Smp480_GetErrorInfoTemperature(device)

#define Smp480_ObsResetPressure(device,channel)    Smp480_Reset(device)
#define Smp480_ObsResetTemperature(device,channel) Smp480_Reset(device)

/*------------------------------------------------------------------------------------------------*/
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool   Smp480_GetPressure             ( uint16 numChip_u16, sint32* val_ps32 );
extern bool   Smp480_GetPressureRaw          ( uint16 numChip_u16, uint32* val_pu32 );

extern bool   Smp480_GetTemperature          ( uint16 numChip_u16, sint32* val_ps32 );
extern bool   Smp480_GetTemperatureRaw       ( uint16 numChip_u16, uint32* val_pu32 );

extern uint32 Smp480_GetErrorInfoPressure    ( uint16 numChip_u16 );
extern uint32 Smp480_GetErrorInfoTemperature ( uint16 numChip_u16 );

extern bool   Smp480_Reset                   ( uint16 numChip_u16 );

/* Prototypes of the processes                                                                    */
extern void     Smp480_Proc( void );

__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/*------------------------------------------------------------------------------------------------*/
__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void     Smp480_Proc_Ini( void );
__PRAGMA_USE__CODE__hwe__LowSpeed__END


#endif   /* _SMP480_PUB_H */
