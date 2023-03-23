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
 * $Filename__:eepoa_priv.h$
 * $Author____:HUS3KOR$
 * $Function__:for eepoa$
 * $Domain____:SDOM$
 * $User______:HUS3KOR$
 * $Date______:11.04.2012$
 * $Class_____:SWHDR$
 * $Name______:eepoa_priv$
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

#ifndef _EEPOA_PRIV_H
#define _EEPOA_PRIV_H

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

typedef enum
{
    EEPOA_INIT_READ,
    EEPOA_START_READ,
    EEPOA_START_READ_WAIT,
    EEPOA_COMPARE,
    EEPOA_CHECK_WRITE_STATUS,
    EEPOA_START_WRITE_WAIT,
    EEPOA_WRITE_FINISHED,
    EEPOA_READ_FINISHED,
    EEPOA_RW_IDLE
} EepOa_xInternalRWState_t;

typedef enum
{
    EEPOA_WR_IDLE                             = 0x01,
    EEPOA_RESERVE_QUEUE                       = 0x02,
    EEPOA_WR_FILL_START_PAGE_INIT             = 0x11,
    EEPOA_WR_FILL_START_PAGE                  = 0x12,
    EEPOA_WR_WAIT_AFTER_FILL_PAGE_WRITE       = 0x13,
    EEPOA_WR_PAGE_WRITE                       = 0x14,
    EEPOA_WR_WAIT_AFTER_PAGE_WRITE            = 0x15,
    EEPOA_WR_FILL_END_PAGE                    = 0x16,
    EEPOA_WR_WAIT_AFTER_FILL_PAGE_END_WRITE   = 0x17,
    EEPOA_RD_START_INIT                       = 0x20,         /* state not used in the moment     */
    EEPOA_RD_START                            = 0x21,
    EEPOA_RD_WAIT_AFTER_READ                  = 0x22,
	EEPOA_RD_WAIT_AFTER_READ_ADD			  = 0x23,
    EEPOA_WR_RD_INIT_0                        = 0x30,
    EEPOA_WR_RD_INIT_1                        = 0x31,
    EEPOA_WR_RD_INIT_2                        = 0x32
} EepOa_xMainState_t;

/* Function not needed for ISS functionality */
#if (0)
typedef enum
{
    EEPOA_INIT_READ_SEQ,
    EEPOA_TRANSMIT_READ_SEQ,
    EEPOA_WAIT_READ_END,
    EEPOA_ERROR_DETECTED
}EepOa_RamInitState_t;
#endif

typedef enum
{
    EEPOA_RAM_INIT_STARTED,
    EEPOA_RAM_INIT_FINISHED
}EepOa_ProcStateRI_t;

typedef struct
{
    EepOa_xInternalRWState_t  xInternalWriteState_e;
    uint8*  Data_pu8;
    uint16  StartAddr_u16;
    uint16  numBytes_u16;
    uint16  OrderType_u16;
    uint16  xStatus_u16;
}EepOa_CurrReadWriteOrder_t;


typedef struct
{
    EepOa_xMainState_t  xMainState_e;

    /* original data, it is not allowed to modify these elements!                                 */
    uint8*  Data_pu8;               /* pointer to the user-data-buffer                            */
    uint16  StartAddr_u16;          /* start-address in the eeprom                                */
    uint16  numBytes_u16;           /* number of bytes to read from or write to eeprom            */

    /* internal data, filled by interface-function                                                */
    uint16  copiedValues_u16;       /* copied values from / to the eeprom                         */
    uint16  StartWrite_u16;         /* number of values before switching to normal page-write-mode*/
    uint16  EndWrite_u16;           /* number of values after switching back from page-write-mode */
}EepOrder_t;


/*
 ***************************************************************************************************
   * Defines
 ***************************************************************************************************
 */
/* known commands for the eeprom                                                                  */
#define EEPOA_COMMAND_READ_D16      0x0300
#define EEPOA_COMMAND_WRITE_D16     0x0200

#define EEPOA_COMMAND_WRITE_EN_D8   0x06
#define EEPOA_COMMAND_RD_STATUS_D8  0x0500

/* matching sequences                                                                             */
#define EEPOA_WR_EN_LATCH_SEQ       EEPOA_COMMAND_WRITE_EN_D8
#define EEPOA_RD_STATUS_SEQ         EEPOA_COMMAND_RD_STATUS_D8

#define EEPOA_COMMAND_INDEX             0
#define EEPOA_SECOND_ADDRESS_INDEX      1
#define EEPOA_DATA_INDEX                1

#define EEPOA_PAGE_LEN        32      /* Page-Length in byte                                        */

#define EEPOA_WIP_BP          0


#define EEPOA_WRITE_ORDER     0
#define EEPOA_READ_ORDER      1

#define EEPOA_NON_SPI_RD_ACCESS_STEPS	0x04


/*
 ***************************************************************************************************
 * Externals
 ***************************************************************************************************
 */
extern Spi_SeqDef_t EepOa_WriteEn_cs;
extern Spi_SeqDef_t EepOa_WriteData_cs;
extern Spi_SeqDef_t EepOa_ReadData_cs;
extern Spi_SeqDef_t EepOa_RdStatusReg_cs;

extern EepOrder_t   EepOa_Order_s;

/* Externals of EEP internal functions  */
extern uint16 EepOa_DataAccess           (EepOa_CurrReadWriteOrder_t*);
extern void   EepOa_TrsRead              (uint16, uint16);
extern void   EepOa_TrsReadResult        (uint8*, uint16);
extern void   EepOa_TrsWrite             (const uint8*, uint16, uint16);
extern bool   EepOa_ComparePages         (const uint8*, uint16);
extern void   EepOa_AbortWithError       (uint16, EepOa_CurrReadWriteOrder_t*);
extern void   EepOa_CurrentOrderFinished (EepOa_CurrReadWriteOrder_t*);
extern const  uint16                     EepOa_MaxValTimeOutTimer_cu16;
extern const  uint16                     EepOa_xEepSize_cu16;
extern const  uint16                     EepOa_EepPageSize_cu16;
extern        uint8 *                    EepOa_adResultBuffer_pu8;
/* Function not needed for ISS functionality */
#if (0)
extern        uint16                     EepOa_RamInitState_u16;
#endif
/*_EEPOA_PRIV_H*/
#endif
#endif