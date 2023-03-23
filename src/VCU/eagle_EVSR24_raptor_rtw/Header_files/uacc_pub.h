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
 * $Filename__:uacc_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:10.08.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:uacc_pub$ 
 * $Variant___:2.8.0$ 
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
 * 2.8.0; 0     10.08.2009 MXA2SI
 *   Platform 
 *   
 *   Migrated from Clearcase 
 *   B_UACC.8.0.0
 *   B_UACC_Conf.8.0.0
 * 
 * 2.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: uacc_pub.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _UACC_PUB_H
#define _UACC_PUB_H
/**
 ***************************************************************************************************
 * \moduledescription
 *                      Interface of access utilities
 *
 * \scope               [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Modes of access function: stMode_u8 */
#define  UACC_ST_NEWREQUEST      0x00    /* New request                                    */
#define  UACC_ST_CONTINUE        0x01    /* Continued request                              */
#define  UACC_ST_REPORTLEN       0x02    /* Report number of bytes which would be read or  */
                                         /* written                                        */
#define  UACC_ST_PROCESSREQUEST  0x03    /* Process request                                */
#define  UACC_ST_WAIT            0x04    /* Wait state                                     */
#define  UACC_ST_CHECKSECA       0x05    /* Check security access                          */


/* Negative response return values for stMode UACC_ST_REPORTLEN */
#define  UACC_REPLEN_ST_DENIED   0xFFFE    /* Security access denied for stMode  UACC_ST_REPORTLEN */
#define  UACC_REPLEN_ST_REJECTED 0xFFFF    /* Rejected for stMode UACC_ST_REPORTLEN       */



/* defines for data swapping */
#define  UACC_SWAP_BIT8          0x01
#define  UACC_SWAP_BIT16         0x02
#define  UACC_SWAP_BIT32         0x04
#define  UACC_SWAP_UINT          0x04
#define  UACC_SWAP_UINT8         0x01
#define  UACC_SWAP_UINT16        0x02
#define  UACC_SWAP_UINT32        0x04
#define  UACC_SWAP_SINT          0x04
#define  UACC_SWAP_SINT8         0x01
#define  UACC_SWAP_SINT16        0x02
#define  UACC_SWAP_SINT32        0x04
#define  UACC_SWAP_REAL32        0x04


#define UACC_SIGSIZE_DU16     2               /* Size of signal                                 */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* return values of the call back functions */
typedef enum
{
    UACC_ST_OK =0,         /* Requested action completed successfully     */
    UACC_ST_TIMEOUT,       /* Time for access expired; call routine again */
    UACC_ST_BUSY,          /* Process started but not finished            */
    UACC_ST_OUTOFMEM,      /* Out of Memory                               */
    UACC_ST_DENIED,        /* Access is denied                            */
    UACC_ST_REJECTED,      /* Condition is not correct                    */
    UACC_ST_INV_LENGTH,    /* Number of data in source buffer does not    */
                           /* correspond with expected number of data     */
    UACC_ST_INV_BAUDRATE,  /* Invalid baudrate                            */
    UACC_ST_INV_SUBFUNC,   /* Invalid subfunction type                    */
    UACC_ST_OUTOFRANGE,    /* Request out of range                        */
    UACC_ST_EXCEEDED_ATTEMTS, /* Exceeded no of attempts                  */
    UACC_ST_NOT_STARTED,   /* Start routine is not started                */
    UACC_ST_CHKSUM_ERR,    /* Checksum error                              */
    UACC_ST_WRITE_ERR,     /* Programming error                           */
    UACC_ST_ERASE_ERR,     /* Erase error                                 */
    UACC_ST_RSE,           /* Routine is already started : request sequence error */
    UACC_ST_ACTIV_NO_VAL,  /* Routine is activ, no results available           */
    UACC_ST_ACTIV_ITM_VAL, /* Routine is activ, intermidiate results available */

    /* the following returns are used for ETC utilities */
    UACC_ST_ETC_DEFAULT,   /* Dflt reason if the func. is not support     */
    UACC_ST_ETC_ABORT_CLUTCH, /* Clutch was the abort reason              */
    UACC_ST_ETC_ABORT_BRAKE_PRESS,    /* Brake pedal was pressed          */
    UACC_ST_ETC_ABORT_THRPEDAL_PRESS, /* Throttle pedal was pressed       */
    UACC_ST_ETC_ABORT_ENG_COLD, /* Engine isn't warmed up yet             */
    UACC_ST_ETC_ABORT_DYNTEST,  /* Test ID is dynamical, fetch sub tests  */
    UACC_ST_ETC_ADDDYNPAR_CNCL_NODYNTST,/* No dynamical test created      */
    UACC_ST_GENREJECT,               /* General  condition is not correct */

/* The following return values are used for ATS GET STATUS interface */

    UACC_ST_ACT,       /* Test is active */
    UACC_ST_INACT,     /* Test is inactive because it was never activated yet */
    UACC_ST_INACT_LIM, /* Test is inactive because value exceeded some limit  */
    UACC_ST_INACT_RNG, /* Test is inactive because test ID did not fit into the range */
    UACC_ST_INACT_MON, /* Test is inactive because it was terminated by monitoring */
    UACC_ST_INACT_CNV, /* Test is inactive because conversion to internal scaling failed*/
    UACC_ST_INACT_DEM, /* Test is inactive due to deactivation demand */

    UACC_ST_USER           /* User configurable status                    */

}UACC_stFunc_e;

/* Structure for specification of memory area:                 */
typedef struct
{
    uint16  Len_u16;           /* Size of memory area                     */
    uint8   DataType_u8;      /* Data type : data type (UINT8 = SINT8,
                                  UINT16 = SINT16, UINT32 = SINT32 )      */
    uint32  adStart_u32;       /* Startaddress of memory area             */
}
UAcc_Area_t;

/* Combination of memory areas to one access table: */
typedef struct
{
    bit32  Protection_b32;                 /* Security levels which allow access to areas */
    uint16 TableSize_u16 ;                 /* Number of areas (size of table)             */
    UAcc_Area_t const *Area_s;             /* Table of memory areas                       */
}
UAcc_AreaTab_t;


/* Combination of memory areas to one access table: */
typedef struct
{
    bit32  Protection_b32;                 /* Security levels which allow access to areas */
    uint16 SwapType_u16 ;                  /* Swap type : UINT32 or UINT16                */
    uint16 TableSize_u16 ;                 /* Number of areas (size of table)             */
    UAcc_Area_t const *Area_s;             /* Table of memory areas                       */
}
UAcc_SwapArrayTab_t;


/* Type of access functions:                 */
/* Parameters:  uint32 Pointer to parameters */
/*                     and static variables  */
/*              uint8  Mode                  */
/* Return:      uint16 status / length       */
typedef uint16 UAcc_Fct_t(void* , uint8);


/* Structure of parameters for access utilities: */
typedef struct
{
    uint32   Config_u32;                 /* Configuration information for access utility   */
    uint32   copyConfig_u32;             /* copy of config information for access utility  */
    uint8   *SrcBuf_pu8;                 /* Pointer to source buffer (bytes to be written) */
    uint8   *TgtBuf_pu8;                 /* Pointer to target buffer (read bytes)          */
    uint16   numSrcBytes_u16;            /* Number of bytes in source buffer               */
    uint16   numTgtBytes_u16;            /* Number of bytes in target buffer               */
    uint16   maxBufSize_u16;             /* Maximum size of target buffer                  */
    /* following variables are used by the utilities */
    uint16   numBytes_u16;               /* Total number of bytes                          */
    uint16   numBytesRemain_u16;         /* Number of remaining bytes                      */
    uint16   LenOffset_u16;              /* Address offset (used if a single area doesn't  */
                                         /* fit into buffer)                               */
    uint8    ctIndex_u8;                 /* Index of current element of table              */
    uint8    ctIndexMM_u8;               /* Current index for table of id. options -
                                            Multiple memory table */
    bool     stWrPerm_b;                 /* Permission to overwrite target buffer          */
    uint8    EepOrder_u8;                /* Order struct for EEPROM driver                 */
    uint8    ctBlock;                    /* current (logical) block number                 */
    uint8    stMode_u8;                  /* Mode for next call of access utility           */
    uint8    ctMsgPos_u8;                /* Current position in generated scaling table    */
}
UAcc_StaticPara_t;

typedef struct
{
    uint16  StartPos_u16;       /* Starting position from where the swapping is required */
    uint16  Dimension_u16;      /* Array dimention                                       */
    uint8   DataType_u8;        /* Data type : data type (UINT8 = SINT8,
                                               UINT16 = SINT16, UINT32 = SINT32 )        */
}
UAcc_DataType_t;



/* Eeprom Configuration structure: */
typedef struct
{
    bit32  Protection_b32;         /* Security levels which allow access to areas    */
    uint8  BlockNo_u8;             /* Block number in EEPROM                         */
    uint8  BlockOffset_u8;         /* Offset (position in block)                     */
    uint16 numBytes_u16;           /* Number of bytes                                */
    UAcc_DataType_t const *dataType_pcs; /* datatype structure                       */
    uint16 TableSize_u16 ;         /* Number of areas (size of table)                */

}
UAcc_ConfEeprom_t;

/* multiple memory area Configuration structure: */
typedef struct
{
    uint32  Config_u32;           /* Configuration information for access utility   */
    uint8   IdxFunc_u8;           /* Index of corresponding function                */
    uint8   ScalingType_u8;       /* scaling data type for each mem area            */
}
UAcc_MultipleMemArea_t;


typedef struct
{
    UAcc_MultipleMemArea_t const *MemTable_pcs; /* multiple memory area Configuration structure: */
    uint8 numMaxMemTable_u8;   /* Max number of multiple memory area table */
}
UAcc_ConfMultipleMem_t;

/* Set/store adjustment value */
typedef struct
{
    bit32  Protection_cb32;     /* Security levels which allow access to areas    */
    uint32 adAvsIndex_u32;      /* Index of used entry of adjustment table        */
    UAcc_DataType_t const *dataType_pcs; /* datatype structure                    */
    uint16 TableSize_u16 ;      /* Number of areas (size of table)                */
}
UAcc_ConfAdjVal_t;

/* Set Default Adjustment Value*/

typedef struct
{
    uint32 adAvsIndex_u32;      /* Index of used entry of adjustment table        */
    uint8* AdjValBuf_pu8;   /* Buffer containing the default value*/
    bit16  Protection_cb16;     /* Security levels which allow access to areas    */
    uint16 numBytes_u16 ; /* Number of bytes in the default value*/
}
UAcc_ConfAdjVal_Default_t;

/* Read Calibration data */
typedef struct
{
    const bit32  Protection_cb32;              /* Security levels which allow access to areas */
    const uint32 adCalibration_cu32 ;          /* Address of the calibration value            */
    const uint16 numBytes_cu16 ;               /* Number of bytes to read                     */
    const uint8  DataType_cu8;                 /* Data type      : data type (UINT8 = SINT8,
                                                   UINT16 = SINT16, UINT32 = SINT32 )          */
}
UAcc_ConfReadCalibration_t;


/* Uacc Signals configuration structure*/
typedef struct
{
    bit32   Protection_b32;                     /* Security levels which allow access to signals */
    uint16  SigNum_u16;                         /* Index of used entry of adjustment table       */
    uint8   Normalization_u8;                   /* Normalization DIA/CAN                         */
}
UAcc_ConfSignal_t;


/* Uacc ETC configuration structure*/
typedef struct
{
    bit32   Protection_b32;  /* Security levels which allow access to signals         */
    uint32  adEtcTstId_u32;  /* Address for Array of the test IDs that shall be added */
    uint16* Delay_pu16;      /* Delay times for the delay of each test ID             */
    uint8   numTstId_u8;     /* Number of tests that shall be added                   */
}
UAcc_ConfEtcTst_t;

/* Uacc access to actuator values */
typedef struct
{
    bit32   Protection_b32;     /* Security levels which allow access to signals      */
    const uint8* adActrID_pcu8;        /* address of verbal name of actuator ID  */
}
UAcc_ConfATS_t;

/* structure to read bits - B7 B6 B5 B4 B3 B2 B1 B0
   contains
   - the base address
   - user function or generated function
   - the protection
   - bit position in source
   - bit length : number of bits to read
   - bit position in target
   Bit position plus Bit length should not exceed 8
   */


typedef struct
{
    uint32  adBit_u32;         /* bit address                                    */
    /* Function to get the bit(s) and write to the message buffer. The function can be filled by
        the user or is generated depending on access type
       parameters: uint8* - message buffer, target address where data are written to,
                            i.e. in the message buffer
                   uint16 - maximum buffer length available, i.e. communication buffer length
       return - number of bytes filled in the message buffer

       */
    uint16  (*func_pf)(uint8* msgBuf_u8, uint16 maxBufLength_u16, uint8 stMode_u8);
    bit16   Protection_b16;    /* Security levels which allow access to bit      */
    /* the following bit position and bit length is required if the configuration is
       of type address */
    uint8   BitPosSrc_u8;       /* bit position in the Source: min 0 to max 7                  */
    uint8   BitLength_u8;       /* bit length - number of bits to read: max 8                  */
    uint8   BitPosTgt_u8;       /* bit position in the target: min 0 to max 7                  */
}UAcc_ConfBit_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__uacc__NormalSpeed__START
/* check swapping is required or not :
   return values: bool
                  TRUE  : swapping is required
                  FALSE : swapping is not required
*/
extern bool UAcc_IsDataSwapRequired(void);
__PRAGMA_USE__CODE__uacc__NormalSpeed__END

__PRAGMA_USE__uacc__10ms__constant__arr32__START
/* Pointer to list of access functions (configurable table of function pointers): */
extern UAcc_Fct_t (*const UAcc_Functions_pp[]);
__PRAGMA_USE__uacc__10ms__constant__arr32__END

__PRAGMA_USE__uacc__10ms__RAM__s32__START
/* RAM for access utility called by services: */
extern UAcc_StaticPara_t UAcc_StaticPara_s;

/* RAM for access utility called by UAcc_ReadMultipleMemArea */
extern UAcc_StaticPara_t UAcc_StaticPara2_s;
__PRAGMA_USE__uacc__10ms__RAM__s32__END

__PRAGMA_USE__CODE__uacc__NormalSpeed__START
/* Memory access: */
extern UAcc_Fct_t UAcc_ReadByAddress;
extern UAcc_Fct_t I14230_ReId_DataTable;
extern UAcc_Fct_t I14230_ReId_ScalingTable;
extern UAcc_Fct_t UAcc_WriteByAddress;
extern UAcc_Fct_t UAcc_WriteEeprom;
extern UAcc_Fct_t UAcc_ReadEeprom;
extern UAcc_Fct_t UAcc_ReadMultipleMemArea;

extern UAcc_Fct_t UAcc_StoreAdjustVal;
extern UAcc_Fct_t UAcc_SetAdjustVal;
extern UAcc_Fct_t UAcc_ReadAdjustVal;

extern UAcc_Fct_t UAcc_ReadCalibrationData;

/* Access to actuator values: */
extern UAcc_Fct_t Uacc_ReadActVal;
extern UAcc_Fct_t Uacc_ReadActStatus;
extern UAcc_Fct_t Uacc_SetActVal;
extern UAcc_Fct_t Uacc_SetActValEx;
extern UAcc_Fct_t Uacc_DisableActVal;
extern UAcc_Fct_t Uacc_DisableActValEx;
extern UAcc_Fct_t Uacc_FreezeActVal;
extern UAcc_Fct_t Uacc_SetDefaultActVal;
extern UAcc_Fct_t UAcc_SetDefaultAdjVal;

/*Access to Signal Module*/
extern UAcc_Fct_t UAcc_ReadSignalVal;
extern UAcc_Fct_t UAcc_ReadSignalValInt;

/* Swapping data */
extern UAcc_Fct_t UAcc_ReadSwapArrayBuf;
extern UAcc_Fct_t UAcc_WriteSwapArrayBuf;

extern UAcc_Fct_t UAcc_Etc_TstStrt;
extern UAcc_Fct_t UAcc_Etc_TstStop;
extern UAcc_Fct_t UAcc_Etc_TstGetSt;
extern UAcc_Fct_t UAcc_Etc_TstGetRslt;
extern UAcc_Fct_t Uacc_Etc_TstGetAbrtReason;
extern UAcc_Fct_t UAcc_Etc_CreateDynTst;
extern UAcc_Fct_t Uacc_Etc_AddDynPar;

/* Function to read bits */
extern UAcc_Fct_t UAcc_ReadBits;

/* Function to get maximum number of retrys If EEP Order FIFO is full,
   calling process has to wait until there is free capacity */
extern uint8 UAcc_GetEepFifoFull_Max(void);
__PRAGMA_USE__CODE__uacc__NormalSpeed__END
#endif  /* _UACC_PUB_H */
