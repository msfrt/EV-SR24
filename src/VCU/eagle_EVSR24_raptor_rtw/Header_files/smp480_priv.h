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
 * $Filename__:smp480_priv.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MZW2FE$ 
 * $Date______:08.04.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:smp480_priv$ 
 * $Variant___:1.3.4$ 
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
 * 1.3.4; 0     08.04.2013 MZW2FE
 *   adaption of 7FFF-Bugfix for revision 1 devices
 * 
 * 1.3.3; 0     12.12.2012 MZW2FE
 *   bugfix for 7FFF-value-Bug done
 * 
 * 1.3.2; 0     30.11.2012 MZW2FE
 *   bugfix implemented
 * 
 * 1.3.1; 0     05.05.2011 MZW2FE
 *   bugfix done
 *   Bugfix for Handling SMP480-HW-Bug in case a SPI-Reset is requested. 
 *   The Bugfix reserves the SPI-Bus for a minimum of 50us after the reset-cmds.
 * 
 * 1.3.0; 0     19.01.2011 MZW2FE
 *   First step of implementation of bond-break detection
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

#ifndef _SMP480_PRIV_H
#define _SMP480_PRIV_H

/**
 ***************************************************************************************************
 * moduledescription  :  private header for SMP480 device driver
 *
 * scope              :  INTERN (SMP480)
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define SMP480_CHIPERROR_COM            0x01u   /* wrong receive data            bit0   */
#define SMP480_CHIPERROR_SPI            0x02u   /* no spi send possible          bit1   */

/**************************************************************************************************/
/* commands                                                                                       */
/**************************************************************************************************/
/* macros for setting up SPI-Frame */
#define SMP480_EXTENDED_CHIP_ADDR ( ((uint32)0x2)               << 30 )
#define SMP480_C2_C0              ( ((uint32)0x5)               << 27 )
#define SMP480_READ_FLAG          ( ((uint32)0x0)               << 26 )
#define SMP480_WRITE_FLAG         ( ((uint32)0x1)               << 26 )
#define SMP480_SET_CMD_CODE(cmd)  ( ((uint32)((cmd)  &    0xF)) << 22 )
#define SMP480_DATA_LENGTH        ( ((uint32)0x0)               << 20 )
#define SMP480_SET_DATA(data)     ( ((uint32)((data) & 0xFFFF)) <<  4 )
#define SMP480_SET_CRC(crc)       ( ((uint32)((crc)  &    0xF)) <<  0 )

/* SPI command codes */
#define SMP480_READ_DEVICE_ID_AND_REV_CMD_CODE  0x0
#define SMP480_READ_PRESS_DATA_CMD_CODE         0x1
#define SMP480_READ_TEMP_DATA_CMD_CODE          0x2

#define SMP480_WRITE_STATUS_REG_CMD_CODE        0xF
#define SMP480_READ_STATUS_REG_CMD_CODE         0xF

#define SMP480_WRITE_INDEX1_REG_CMD_CODE        0x3
#define SMP480_WRITE_INDEX1_VAL_CMD_CODE        0x5

/* SPI-Frames */

#define SMP480_READ_DEVICEIDANDREV  \
                                 ( SMP480_EXTENDED_CHIP_ADDR | SMP480_C2_C0 | SMP480_READ_FLAG  \
                                 | SMP480_SET_CMD_CODE( SMP480_READ_DEVICE_ID_AND_REV_CMD_CODE ) \
                                 | SMP480_DATA_LENGTH \
                                 | SMP480_SET_CRC( 0xD ) \
                                 )

#if 0
// SPI-Command as described in the device documentation, commented out because of 7FFF-Error
#define SMP480_READ_PRESSURE     \
                                 ( SMP480_EXTENDED_CHIP_ADDR | SMP480_C2_C0 | SMP480_READ_FLAG  \
                                 | SMP480_SET_CMD_CODE( SMP480_READ_PRESS_DATA_CMD_CODE ) \
                                 | SMP480_DATA_LENGTH \
                                 | SMP480_SET_CRC( 0x6 ) \
                                 )
#else
/* direct reading of pressure-value from the internal DSP-Port-Address to avoid 7FFF-Error        */
/* Therefore the SPI-Command 0xACC0E10D has to be sent twice, one after another                   */
/*    First  sending transfers pressure value from internal DSP-Port-Address to the SPI-Transmit- */
/*                                                          Buffer, received value is undefined   */
/*    Second sending receives value from SPI-Transmit-Buffer, response to this second command     */
/*                                                            contains the pressure value         */
/* --> Command-Definition gotten from AE                                                          */
/* --> about details, see E-Mail from Ermin Esch (AE/EID2), 10.12.2012                            */
#define SMP480_REQUESTPRESSURE    0xACC0E10D
#define SMP480_READ_PRESSURE      SMP480_REQUESTPRESSURE
#endif

#if 0
#define SMP480_READ_TEMPERATURE  \
                                 ( SMP480_EXTENDED_CHIP_ADDR | SMP480_C2_C0 | SMP480_READ_FLAG  \
                                 | SMP480_SET_CMD_CODE( SMP480_READ_TEMP_DATA_CMD_CODE ) \
                                 | SMP480_DATA_LENGTH \
                                 | SMP480_SET_CRC( 0x8 ) \
                                 )
#else
/* direct reading of temperature-value from the internal DSP-Port-Address to avoid 7FFF-Error     */
/* Therefore the SPI-Command 0xACC0E11E has to be sent twice, one after another                   */
/*    First  sending transfers temperature value from internal DSP-Port-Address to the SPI-       */
/*                                             Transmit-Buffer, received value is undefined       */
/*    Second sending receives value from SPI-Transmit-Buffer, response to this second command     */
/*                                                            contains the temperature value      */
/* --> Command-Definition gotten from AE                                                          */
/* --> about details, see E-Mail from Ermin Esch (AE/EID2), 10.12.2012                            */
#define SMP480_REQUESTTEMPERATURE    0xACC0E11E
#define SMP480_READ_TEMPERATURE      SMP480_REQUESTTEMPERATURE
#endif

/* default-data == 0x00 --> reset all status-bits. Bits, which can't be reset ignored by SMP480   */
/*                      --> if specific bits should be reset, set different DATA and CRC          */
/*                          before sending this sequence                                          */
#define SMP480_WRITE_STATUSREG  \
                                 ( SMP480_EXTENDED_CHIP_ADDR | SMP480_C2_C0 | SMP480_WRITE_FLAG \
                                 | SMP480_SET_CMD_CODE( SMP480_WRITE_STATUS_REG_CMD_CODE ) \
                                 | SMP480_DATA_LENGTH \
                                 | SMP480_SET_DATA( 0x0 ) \
                                 | SMP480_SET_CRC( 0x0 ) \
                                 )

#define SMP480_READ_STATUSREG  \
                                 ( SMP480_EXTENDED_CHIP_ADDR | SMP480_C2_C0 | SMP480_READ_FLAG \
                                 | SMP480_SET_CMD_CODE( SMP480_READ_STATUS_REG_CMD_CODE ) \
                                 | SMP480_DATA_LENGTH \
                                 | SMP480_SET_DATA( 0x0 ) \
                                 | SMP480_SET_CRC( 0xE ) \
                                 )

/* value gotten from technical customer specification */
/* #define SMP480_PREKEYRESET     0xACC002F5          */
#define SMP480_RESETCMDPART1     \
                                 ( SMP480_EXTENDED_CHIP_ADDR | SMP480_C2_C0 | SMP480_WRITE_FLAG \
                                 | SMP480_SET_CMD_CODE( SMP480_WRITE_INDEX1_REG_CMD_CODE ) \
                                 | SMP480_DATA_LENGTH \
                                 | SMP480_SET_DATA( 0x2F ) \
                                 | SMP480_SET_CRC( 0x5 ) \
                                 )

/* value gotten from technical customer specification */
/* #define SMP480_RESET           0xAD4AD0AF          */
#define SMP480_RESETCMDPART2     \
                                 ( SMP480_EXTENDED_CHIP_ADDR | SMP480_C2_C0 | SMP480_WRITE_FLAG \
                                 | SMP480_SET_CMD_CODE( SMP480_WRITE_INDEX1_VAL_CMD_CODE ) \
                                 | SMP480_DATA_LENGTH \
                                 | SMP480_SET_DATA( 0xAD0A ) \
                                 | SMP480_SET_CRC( 0xF ) \
                                 )

/* value for bus-reservation only, sent to DUMMY-Device after second part of reset-command */
#define SMP480_RESERVEBUS        (0x80AA), (0xAAAA), (0xAA01)

/* commands to mask out the "Internal Bus Error", will be done for newer devices after production */
/* commands not documented, gotten via E-Mail from Andreas Domdey (AE/ESC1), 23. November 2012    */
#define SMP480_MASKINTBUSERRPART1 (0xACC00108)
#define SMP480_MASKINTBUSERRPART2 (0xAD400887)

/* for revision 1 devices there has to be set a different mask (bugfix for the previous bugfix)   */
/* command gotten via E-Mail from Andreas Domdey (AE/ESC1), 26. March 2013                        */
#define SMP480_MASKINTBUSERRPART2_FOR_REV1 (0xAD480A8E)

/* commands to read status mask register */
/* sequence currently not defined (30.11.2012 */
#define SMP480_READ_STATUSMASKPART1 (0xACC00108)
#define SMP480_READ_STATUSMASKPART2 (0xA9000007)

/**************************************************************************************************/
/* macros for accessing response-data                                                             */
/**************************************************************************************************/
#define SMP480_GET_RESPONSE_FRAME_U32(data_pu16) \
        ((((uint32)(data_pu16)[0]) << 16) + ((uint32)(data_pu16)[1]))

/* get the bits D0 to D7 */
#define SMP480_GET_DATA_LOW_BYTE_U8(data_u32) \
        ((uint8)(((data_u32) >> 4) & 0xFF))

/* get the bits D8 to D15 */
#define SMP480_GET_DATA_HIGH_BYTE_U8(data_u32) \
        ((uint8)(((data_u32) >> 12) & 0xFF))

/* get the bits D0 to D15 */
#define SMP480_GET_DATA_U16(data_u32) \
        ((uint16)(((data_u32) >> 4) & 0xFFFF))

/* get the CRC bits */
#define SMP480_GET_CRC_BITS_U8(data_u32) \
        ((uint8)((data_u32) & 0xF))

/* get the DIAG bits */
#define SMP480_GET_DIAG_BITS_U8(data_u32) \
        ((uint8)(((data_u32) >> 25) & 0x1F))


/**************************************************************************************************/
/* macros for handling DIAG-Bits                                                                  */
/**************************************************************************************************/
/*                                              DIAG    4 3 2 1 0 */
#define SMP480_DIAG__GENERAL_ERROR              0x00 /* 0 0 0 0 0 */
#define SMP480_DIAG__BOOT_ERROR                 0x03 /* 0 0 0 1 1 */
#define SMP480_DIAG__SENSOR_MEMORY_ERROR        0x0F /* 0 1 1 1 1 */
#define SMP480_DIAG__ACQUISITION_CHAIN_FAILURE  0x17 /* 1 0 1 1 1 */
#define SMP480_DIAG__SENSOR_ELEMENT_FAILURE     0x15 /* 1 0 1 0 1 */
#define SMP480_DIAG__PRESSURE_TOO_HIGH          0x1D /* 1 1 1 0 1 */
#define SMP480_DIAG__PRESSURE_TOO_LOW           0x1E /* 1 1 1 1 0 */
#define SMP480_DIAG__SIGNAL_INPUT_TOO_HIGH      0x1B /* 1 1 0 1 1 */
#define SMP480_DIAG__SIGNAL_INPUT_TOO_LOW       0x13 /* 1 0 0 1 1 */
#define SMP480_DIAG__NO_ERROR                   0x0A /* 0 1 0 1 0 */


/**************************************************************************************************/
/* status-register-values                                                                         */
/**************************************************************************************************/
#define SMP480_STATUS_REG__P_CM_ERROR        ( 1 <<  6 ) /* bit  6: Bond-Break of signal/power    */
#define SMP480_STATUS_REG__RST_FLAG          ( 1 << 12 ) /* bit 12: reset detect since last clear */


/**************************************************************************************************/
/* min/max defines                                                                                */
/**************************************************************************************************/
#define SMP480_PRESSURE_MIN          0
#define SMP480_PRESSURE_MAX       4095

#define SMP480_TEMPERATURE_MIN       0
#define SMP480_TEMPERATURE_MAX    4095


/**************************************************************************************************/
/* other macros like device-driver states                                                                           */
/**************************************************************************************************/
/* time for waiting that the device is ready after reset (value gotten from Gencol/AE) */
#define SMP480_PRV_DD_WAIT_TIME  4

/* number of retries for sending/receiving spi-sequences inside init-function */
#define SMP480_PRV_DD_RETRIES_IN_INIT  10

/* global state */
typedef enum
{
    Smp480_Prv_stStateInit_e = 0,
    Smp480_Prv_stStateWaitForInitDoneOfDevice_e,
    Smp480_Prv_stStateDeviceResetRequested_e,
    Smp480_Prv_stStateDeviceResetStarted_e,
    Smp480_Prv_stStateReceiveStatusAfterDeviceReset_e,
    Smp480_Prv_stStateBondBreak_e,
    Smp480_Prv_stStateNormalOperation_e
} Smp480_Prv_stState_t_en;


/**************************************************************************************************/
/* use of global variables                                                                        */
/**************************************************************************************************/
__PRAGMA_USE__hwe__10ms__RAM__arr32__START
extern        bit32  Smp480_stIniErr_b32[];
extern        Smp480_Prv_stState_t_en  Smp480_Prv_stState_en[];
__PRAGMA_USE__hwe__10ms__RAM__arr32__END

__PRAGMA_USE__hwe__10ms__RAM__arr8__START
extern        uint8  Smp480_ctComErr_u8[];
extern        uint8  Smp480_ctChipErr_u8[];

extern        uint8  Smp480_ctDeviceId_u8[];
extern        uint8  Smp480_ctRevision_u8[];
extern        uint8  Smp480_Prv_cntrWaitDeviceReady_au8[];
extern        bool   Smp480_Prv_stResetRequest_ab[];
__PRAGMA_USE__hwe__10ms__RAM__arr8__END

__PRAGMA_USE__hwe__10ms__RAM__arr16__START
extern        uint16 Smp480_Pressure_u16[];
extern        uint16 Smp480_Temperature_u16[];
__PRAGMA_USE__hwe__10ms__RAM__arr16__END

__PRAGMA_USE__hwe__10ms__RAM__arr8__START
extern        bool   Smp480_PressureValueOk_b[];
extern        bool   Smp480_TemperatureValueOk_b[];
__PRAGMA_USE__hwe__10ms__RAM__arr8__END

__PRAGMA_USE__hwe__10ms__RAM__arr32__START
extern        bit32  Smp480_PressureErr_b32[];
extern        bit32  Smp480_TemperatureErr_b32[];
__PRAGMA_USE__hwe__10ms__RAM__arr32__END


/**************************************************************************************************/
/* Function declarations for internal use of device driver                                        */
/**************************************************************************************************/
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool    Smp480_CheckCRC4( uint32 data_u32 );
extern uint32  Smp480_CalcCRC4( uint32 data_u32 );

extern bool    Smp480_ReadPressure( uint16 numChip_u16 );
extern bool    Smp480_ReadTemperature( uint16 numChip_u16 );
__PRAGMA_USE__CODE__hwe__NormalSpeed__END



#endif /* _SMP480_PRIV_H */
