/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:eepoa_pub.h$
 * $Author____:HUS3KOR$
 * $Function__:for eepoa$
 * $Domain____:SDOM$
 * $User______:HUS3KOR$
 * $Date______:11.04.2012$
 * $Class_____:SWHDR$
 * $Name______:eepoa_pub$
 * $Variant___:1.0.0$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.0.0; 1     11.04.2012 HUS3KOR
 *   Review changes
 * 
 * 1.0.0; 0     13.03.2012 HUS3KOR
 *   first version of eepoa
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _EEPOA_PUB_H
#define _EEPOA_PUB_H

#ifdef EEP_ISS_USED
/**
 ***************************************************************************************************
 * \moduledescription
 *                    EEP Eeprom and Emulation Handler
 *
 * \scope             INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Type definition and enums
 ***************************************************************************************************
 */

#define EEPOA_NO_ERROR                0x0000
#define EEPOA_SPI_ERROR_QUEUE_FULL    0x0100

enum
{
    EEPOA_IDLE          = 0x00,
    EEPOA_ORDER_PENDING = 0x01
};


/*

 |  15 |  14 |  13 |  12 |  11 |  10 |  9  |  8  |  7  |  6  |  5  |  4  |  3  |  2  |  1  |  0  |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
 | (4) | not | not | not | not | not | not | not | not | not | not | not | not | (3) | (2) | (1) |
 |     | used| used| used| used| used| used| used| used| used| used| used| used|     |     |     |
 |     |     |     |     |     |     |     |    .|     |     |     |     |     |     |     |     |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/
enum
{
    EEPOA_TMP_TIMEOUT_SPI_ACT               = 0x0001,   /* (1) */
    EEPOA_TIMEOUT_SPI_ACT                   = 0x0002,   /* (2) */
    EEPOA_TIMEOUT_SPI_RCV                   = 0x0004,   /* (3) */
    EEPOA_RAM_INIT_SUCCESSFULL_FINISHED     = 0x8000    /* (4) */
};

/*  Bit-Description of RamInit-Status
    (1) ... At least one time it was not possible to send the read data sequence
    (2) ... Ram-Init aborted because of to much sending of read data sequence failed
    (3) ... Ram-Init aborted because read data sequence was not received
    (4) ... Ram-Init finished successfully
*/



typedef enum
{
    EEPOA_WRITE_DATA,
    EEPOA_READ_DATA
} EepOa_xOrderType_t;

/*
 ***************************************************************************************************
   * Defines
 ***************************************************************************************************
 */

/* redefines for the requested interface-names                                                    */
#define Eep_WriteEeprom(START_ADR, DATA_PTR, NUM_BYTES)                                            \
                          (EepOa_RWAccess((START_ADR), (DATA_PTR), (NUM_BYTES), (EEPOA_WRITE_DATA)))
#define Eep_ReadEeprom(START_ADR, DATA_PTR, NUM_BYTES)                                             \
                           (EepOa_RWAccess((START_ADR), (DATA_PTR), (NUM_BYTES), (EEPOA_READ_DATA)))

#define Eep_EepromReady()  (EepOa_EepromReady())
/*
 ***************************************************************************************************
 * Externals
 ***************************************************************************************************
 */


/* Externals of EEPOA interface-functions  */
extern uint16   EepOa_EepromReady(void);
extern uint16   EepOa_RWAccess(uint16, uint8*, uint16, EepOa_xOrderType_t);

/* Externals of EEPOA processes  */
/* Function not needed for ISS functionality */
#if (0)
extern void     EepOa_RamInit (void);
#endif
extern void     EepOa_Proc_Ini(void);
extern void     EepOa_Main_Proc(void);

/* Function not needed for ISS functionality */
#if (0)
/* EEPROM mirror */
extern uint8    EepOa_EepMirror_au8[];

/* pointer to EEPROM mirror */
extern uint8   *EepOa_UserBuffer_pu8;
#endif

/* _EEPOA_PUB_H */
#endif
#endif