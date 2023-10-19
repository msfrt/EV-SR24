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
 * $Filename__:obshal_pub.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MZW2FE$ 
 * $Date______:24.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:obshal_pub$ 
 * $Variant___:1.3.0$ 
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
 * 1.3.0; 0     24.06.2010 MZW2FE
 *   new interface for resetting an onboard sensor
 * 
 * 1.2.0; 0     18.02.2010 MZW2FE
 *   modifications for the support of TriCore die-temperature
 * 
 * 1.0.0; 0     23.10.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: obshal_pub.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _OBSHAL_PUB_H
#define _OBSHAL_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription : public header for OBSHAL device driver
 *
 * \scope             : API
 ***************************************************************************************************
 */

/* Diagnose-Info */
/**
 ***************************************************************************************************
 * "bit coding" for GetErrorInfo-Functions
 *
 *
 *                updated since last call
 *                |                                         sensor not present
 *                |                                         | queue full
 *                |                                         | | short to battery
 *                |                                         | | | short to ground
 *                |                                         | | | | crc error
 *                |                                         | | | | | value too low
 *                |                                         | | | | | | value too high
 *                |                                         | | | | | | | sensor defect
 *                |                                         | | | | | | | | value erroneous
 *                |                                         | | | | | | | | | not implemented
 *                |                                         | | | | | | | | | | undefined signal
 *                |                                         | | | | | | | | | | |
 *                V                                         v V V V V V V V V V V
 *               #-+-+-+-+-+-+-+-#-+-+-+-+-+-+-+-#-+-+-+-+-+-+-+-#-+-+-+-+-+-+-+-#
 *               | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |
 *               #-+-+-+-+-+-+-+-#-+-+-+-+-+-+-+-#-+-+-+-+-+-+-+-#-+-+-+-+-+-+-+-#
 *
 *
 * =================================================================================================
 *
 * uint32 bit coded error information
 *
 *                  bit0 : undefined signal
 *                  bit1 : not implemented
 *                  bit2 : value erroneous
 *                  bit3 : sensor defect
 *                  bit4 : value too high
 *                  bit5 : value too low
 *                  bit6 : crc error
 *                  bit7 : short to ground
 *                  bit8 : short to battery
 *                  bit9 : queue full
 *                  bit10: sensor not present
 *                  bit11: -
 *                  bit12: -
 *                  bit13: -
 *                  bit14: -
 *                  bit15: -
 *
 *                  bit16: -
 *                  bit17: -
 *                  bit18: -
 *                  bit19: -
 *                  bit20: -
 *                  bit21: -
 *                  bit22: -
 *                  bit23: -
 *
 *                  bit24: -
 *                  bit25: -
 *                  bit26: -
 *                  bit27: -
 *                  bit28: -
 *                  bit29: -
 *                  bit30: -
 *                  bit31: updated since last call
 *
 ***************************************************************************************************
 */
#define OBS_ERR_MASK__UPDATED              0x80000000u
#define OBS_ERR_MASK__ALL_OK               0x00000000u
#define OBS_ERR_MASK__UNDEFINED_SIGNAL     0x00000001u
#define OBS_ERR_MASK__NOT_IMPLEMENTED      0x00000002u
#define OBS_ERR_MASK__VALUE_ERRONEOUS      0x00000004u
#define OBS_ERR_MASK__SENSOR_DEFECT        0x00000008u
#define OBS_ERR_MASK__VALUE_TOO_HIGH       0x00000010u
#define OBS_ERR_MASK__VALUE_TOO_LOW        0x00000020u
#define OBS_SPI_ERR_MASK__CRC_ERROR        0x00000040u
#define OBS_SPI_ERR_MASK__SHORT_TO_GROUND  0x00000080u
#define OBS_SPI_ERR_MASK__SHORT_TO_VDD     0x00000100u
#define OBS_SPI_ERR_MASK__QUEUE_FULL       0x00000200u
#define OBS_ERR_MASK__SENSOR_NOT_PRESENT   0x00000400u

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


#endif   /* _OBSHAL_PUB_H */
