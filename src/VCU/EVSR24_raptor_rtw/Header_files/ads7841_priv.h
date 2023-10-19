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
 * $Filename__:ads7841_priv.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:ads7841_priv$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: ads7841_priv.h
 *      Version: \main\basis\b_CORE\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ADS7841_PRIV_H
#define _ADS7841_PRIV_H

#ifndef ADS7841_NOT_USED

/**
 ***************************************************************************************************
 * moduledescription  :  private header for ADS7841 device driver
 *
 * scope              :  INTERN (ADS7841)
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define ADS7841_NUM_CHAN   4


/**************************************************************************************************/
/* SPI Command : the command is 8 bit                                                             */
/*                                                                                                */
/*                          +-------+-------+-------+-------+-------+-------+-------+-------+     */
/*                          |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |     */
/*                          +-------+-------+-------+-------+-------+-------+-------+-------+     */
/*                          | START |  A2   |  A1   |  A0   | MODE  |SGL/DIF|     POWER     |     */
/*                          |       |       |       |       |       |       |       |       |     */
/*                          |       |       |       |       |0=12Bit|0=DIFF | 00=PWR Down   |     */
/*                          |       |       |       |       |1= 8Bit|1=GND  | 11=PWR Up     |     */
/*                          +-------+-------+-------+-------+-------+-------+-------+-------+     */
/*                                                                                                */
/* -> single ended                                                                                */
/* ADS7841_RD_CH0    0x94   |   1   |   0   |   0   |   1   |  (0)  |   1   |  (0)  |  (0)  |     */
/* ADS7841_RD_CH1    0xD4   |   1   |   1   |   0   |   1   |  (0)  |   1   |  (0)  |  (0)  |     */
/* ADS7841_RD_CH2    0xA4   |   1   |   0   |   1   |   0   |  (0)  |   1   |  (0)  |  (0)  |     */
/* ADS7841_RD_CH3    0xE4   |   1   |   1   |   1   |   0   |  (0)  |   1   |  (0)  |  (0)  |     */
/* -> differential                                                                                */
/* ADS7841_RD_CH01   0x90   |   1   |   0   |   0   |   1   |  (0)  |   0   |  (0)  |  (0)  |     */
/* ADS7841_RD_CH10   0xD0   |   1   |   1   |   0   |   1   |  (0)  |   0   |  (0)  |  (0)  |     */
/* ADS7841_RD_CH23   0xA0   |   1   |   0   |   1   |   0   |  (0)  |   0   |  (0)  |  (0)  |     */
/* ADS7841_RD_CH32   0xE0   |   1   |   1   |   1   |   0   |  (0)  |   0   |  (0)  |  (0)  |     */
/*                                                                                                */
/* --> NULL will not evaluated from chip (used during data part of comunication)                  */
/* ADS7841_RD_NULL   0x00   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |     */
/*                                                                                                */
/**************************************************************************************************/

/* SPI commands for the ADS7841   (some bits must be cleared later one if nort used as default)   */
#define ADS7841_CH0GND                 0x9400
#define ADS7841_CH1GND                 0xD400
#define ADS7841_CH2GND                 0xA400
#define ADS7841_CH3GND                 0xE400
#define ADS7841_CH0CH1                 0x9000
#define ADS7841_CH1CH0                 0xD000
#define ADS7841_CH2CH3                 0xA000
#define ADS7841_CH3CH2                 0xE000
#define ADS7841_NULL                   0x0000

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
/*----------------------------------------------------------------------------------------*/
/* CHIP relevant data part  (1 element for each chip)                                     */
/*----------------------------------------------------------------------------------------*/
typedef struct
{
    uint8  cntNotReceived_u8;                   /* counter for probably not received sequences    */
    uint8  cntNotSent_u8;                       /* counter for probably not sent sequences        */
} Ads7841_Chip_t;
#define Ads7841_Chip_t_NULL   0,0

typedef struct
{
    sint16  refVoltage_s16;                     /* reference Voltage of Chip  (cont of 200µV)     */
    uint8   nbrChannel_u8;                      /* number of channels                             */
} Ads7841_Chip_ct;
#define Ads7841_Chip_ct_NULL   0,0

/*----------------------------------------------------------------------------------------*/
/* CHANNEL relevant data part (4 elements for each chip)                                  */
/*----------------------------------------------------------------------------------------*/
typedef struct
{
    uint16 adcRaw_u16;                          /* counter for probably not received sequences    */
} Ads7841_Channel_t;
#define Ads7841_Channel_t_NULL   0

/*
 ***************************************************************************************************
 * Extern procedures
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Ads7841_Chip_ct         Ads7841_Chip_cs     [ADS7841_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END


__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START
extern       Ads7841_Chip_t          Ads7841_Chip_s      [ADS7841_NUM_ICS];
extern       Ads7841_Channel_t       Ads7841_Channel_s   [ADS7841_NUM_ICS][ADS7841_NUM_CHAN];
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END


/* ADS7841_NOT_USED */
#endif

/* _ADS7841_PRIV_H */
#endif
