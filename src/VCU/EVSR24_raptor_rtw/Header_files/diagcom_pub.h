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
 * $Filename__:diagcom_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:07.05.2012$
 * $Class_____:SWHDR$
 * $Name______:diagcom_pub$
 * $Variant___:17.0.1$
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
 * 17.0.1; 0     07.05.2012 JAG2ABT
 *   Adapted default security level to be compatible with 16bit masks used in 
 *   AccPr
 * 
 * 17.0.0_1; 1     11.04.2011 JAG2ABT
 *   Additions for Ferrari project
 * 
 * 17.0.0_1; 0     14.02.2011 JAG2ABT
 *   Fix of bug found while testing
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _DIAGCOM_PUB_H
#define _DIAGCOM_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *      Public header for diagcom module : Diagnostic communication
 *
 * \scope              [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */

/* DEFINITION OF GLOBAL MACROS */
#define DIAGCOM_NOMEDIUM_DU8                0

/* IMPORTANT NOTE: the value below is used also to get a bit mask (by way of "(1 << dSecLevel_u8);")
                   where the machine instruction takes the shift count from the LOWER 6 BIT as
				   a SIGNED number!!! ==> shift count is therefore -32 to +31.
				   So the value of 0x0F results in a shift count of +15, which is effectively a
				   shift left of 15 positions giving us a value of 0x0080, which is what we
				   want here (default security access level (15) set). */
#define DIAGCOM_ACCPR_DEFAULT_DU8   0x0F   /* Default security level after initialisation      */
/* NOTE: we use the 16th bit (bit 15) here because although the diag services use 32bit masks,
 *       the protected access of the memory still uses only 16bit masks ! So for comaptibility
 *       reasons bit 15 is set for an 'locked' ECU (no security access).
 *       Use bits 0..14 to map the security levels used to unlock the ECU.
 *       Bits 16..31 should not be used.
 */

#if (SY_CANVAR == 4)	/* Ferrari specific variant */
#define DIAGCOM_INI_MODE_DU8  DGM(INI)      /* Default diagnostic mode after initialisation    */
#else
#define DIAGCOM_INI_MODE_DU8  DGM(DEFAULT)  /* Default diagnostic mode after initialisation    */
#endif

#define DIAGCOM_ROE_DISABLED 0L

#define DIAGCOM_RDPI_DISABLED 0L

#define DIAGCOM_RINGBUFF_DISABLED 0L

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Enums used by ringbuffer services                                       */
typedef enum
{
    DIAGCOM_RB_ST_DISABLE_E=0,
    DIAGCOM_RB_ST_INIT_E,
    DIAGCOM_RB_ST_PROGRESS_E
}DiagCom_RingBufTxState_e;

/* structures used by ROE service                                       */
/* structure for Event entries table   */
typedef struct
{
    sint32  Timer_s32;          /* Sys time at which the event expires  */
    uint8   EventType_u8;       /* Event type                           */
    uint8   EventWindowTime_u8; /* Event window time                    */
    uint8   EventCounter_u8;    /* No. of events occured                */
    uint8   ResponseSID_u8;     /* Service to be called on event        */
    uint8   DiaMode_u8;         /* Diag mode in which event is defined  */
    uint8   SIDParamCount_u8;   /* no of SID parameters                 */
    bool    RestartEvent_b;     /* restart event monitoring after reset */

}DiagCom_Event_t;

/*  structure for Event Type - Function table */

typedef const struct
{
    bool    (*Check_Function_pf)(uint8*);  /* function to check occurence of event            */
    bool    (*Event_Init_pf)(uint8*);      /* function for initialisation on event definition */
    uint8   EventType_u8;                  /* Event type                                      */
    uint8   EventTypeParamLen_u8;          /* Event type parameter length                     */

}DiagCom_EventTypeFunction_t;

/*  structure for configuration of Event Parameters */

typedef const struct
{
    DiagCom_Event_t*    EventEntries_ps;
    DiagCom_EventTypeFunction_t* EventTypes_ps;
    uint8*          SIDParam_pu8;             /* SID parameter array                     */
    uint8*          EventTypeParam_pu8;       /* Event type parameter array              */
    uint8*          EventBuf_pu8;             /* pointer to event buffer                 */
    uint32          Window_time_m_factor_u32; /* event window time mul. factor           */
    uint8           EventEntryCount_u8;       /* Max no. of events in parallel           */
    uint8           EventTypeCount_u8;        /* No of event types                       */
    uint8           EventBufSize_u8;          /* Event buffer size                       */
    uint8           MaxSIDParam_u8;           /* maximum no. of SID parameters supported */
    uint8           MaxEvTypeParam_u8;        /* maximum no of event type parameters     */
}DiagCom_EventConf_t;


/* medium definitions  */
typedef enum
{
    DIAGCOM_NOMEDIUM = DIAGCOM_NOMEDIUM_DU8,        /* no medium */
    DIAGCOM_CAN,                                    /* CAN       */
    DIAGCOM_KLINE,                                  /* K-line    */
    DIAGCOM_FLEX                                    /* FlexRay   */
}DiagCom_MediumID_t;


/* possible response's type */
enum
{
    DIAGCOM_NIL = 0,              /* Not a valid response                          */
    DIAGCOM_POS,                  /* Positive response                             */
    DIAGCOM_NEG,                  /* Negative response                             */
    DIAGCOM_NORESP,               /* No response                                   */
    DIAGCOM_POSAGAIN,             /* Positive response (multiple call of service)  */
    DIAGCOM_NEGAGAIN,             /* Negative response (multiple call of service)  */
    DIAGCOM_NORESPAGAIN,          /* No response (multiple call of service)        */
    DIAGCOM_WAIT,                 /* WAIT response, wait type configured           */
    DIAGCOM_WAITPEND,             /* Response Pending (multiple call of service)   */
    DIAGCOM_WAITHS,               /* Busy HS (multiple call of service)            */
    DIAGCOM_WAITPENDIMM,          /* Response Pending (send response immediately)  */
    DIAGCOM_WAITHSIMM             /* Busy HS (send response immediately)           */
};



/* Enumeration for elements of  DiagCom_ti_pu32 array */
/* Timing parameters                               */
typedef enum
{
    DIAGCOM_TI_P2MIN,           /* p2min                        */
    DIAGCOM_TI_P2MAX,           /* p2max                        */
    DIAGCOM_TI_P3MIN,           /* p3min                        */
    DIAGCOM_TI_P3MAX,           /* p3max                        */
    DIAGCOM_TI_P4MIN,           /* p4min                        */
    DIAGCOM_TI_NUMTIMINGS       /* Number of timing parameters  */
}DiagCom_tiIndex_e;


/* Enumeration for different types of Timings */
typedef enum
{
     DIAGCOM_TI_DEFAULT,        /* default timing parameters  */
     DIAGCOM_TI_CURRENT,        /* current timing parameters  */
     DIAGCOM_TI_LIMITS          /* timing parameters  limits  */
} DiagCom_tiMode_e;


typedef uint32 DiagCom_ti_t[DIAGCOM_TI_NUMTIMINGS];

/* Enumaration for different error types for timing / baudrate prepare request */

typedef enum
{
    DIAGCOM_PREP_OK,               /* requested values are OK                               */
    DIAGCOM_PREP_NOTOK_LIMITS,     /* requested values not within the defined limits        */
    DIAGCOM_PREP_NOTOK_ADDRMODE,   /* request not allowed in current addressing mode        */
                                   /* e.g. in functional adressing mode no timing change    */
    DIAGCOM_PREP_NOTOK_PARAM       /* inconsistency in parameter values                     */
                                   /* e.g. requested p2min not smaller than requested p2max */
}DiagCom_PrepRet_e;

/*
  | The interface between state machine and distributor |
*/
typedef struct
{
    uint8* dBuf_pu8;              /* buffer only for data                          */
    uint16 dBufSize_u16;          /* size of buffer                                */
    uint16 numBytesReq_u16;       /* request's length                              */
    uint16 numBytesResp_u16;      /* response's length                             */
    uint8  stResp_u8;             /* response's type                               */
    uint8  dSID_u8;               /* request's SID                                 */
    uint8  dFirstPara_u8;         /* request's first parameter                     */
    bool   dMulRespAllow_b;       /* multiple response mechanism allowed           */
    uint8  stPrevResp_u8;          /* previous response type                       */
}
DiagCom_Msg_t;


/*
  | Structure of one entry in service table: |
*/
typedef struct
{
    uint8 dSID_u8;                             /* service identifier                           */
    uint8 dFirstPara_u8;                       /* First parameter of message (behind SID)      */
    bit16 dOpMode_b16;                         /* Operating modes where service is allowed     */
    bit32 dAvail_b32;                          /* Diagnostic modes where service is available  */
    void  (*Service_p)(void*, DiagCom_Msg_t*); /* Pointer to service interpreter               */
    void  (*Init_p)(void);                     /* Pointer to initialisation routine of service */
    void  *Config_pv;                          /* Pointer to configuration structure           */
}
DiagCom_ServiceTable_t;

/*
  | Configuration structure for service distributor: |
*/
typedef struct
{
    /* Pointer to service table */
    const DiagCom_ServiceTable_t (*ServiceTable_pcs);

      /* Number of entries in service table */
    uint8 numTableEntries_u8;

    /* Bit position of address mode in operation mode bitfield: */
    uint8 dBitPosAddrMode_u8;

    /* Bit position of active routines in operation mode bitfield: */
    uint8 dBitPosActRout_u8;

       /* Negarive Response code for SID doesn't exist */
    uint8 dServiceNotSupp_u8;

    /* Negarive Response code for opmode is not OK */
    uint8 dCondNotCorrect_u8;

    /* Negarive Response code for diamode is not OK */
    uint8 dSrvNotSuppInDM_u8;

}DiagCom_ConfDistr_t;



/* Data Link Virtual Table   */

typedef struct
{
    /* member functions */
    void             (*TxRx_p)(uint8*, uint16, uint8*, uint16, uint8);
    void             (*GetKeybytes_p)(uint8*);
    uint32           (*GetTxTimeout_p)(void);
    DiagCom_PrepRet_e   (*PrepareBaudrate_p)(uint32);
    void             (*SetBaudrate_p)(void);
    uint32           (*GetDfltBaudrate_p)(void);
    DiagCom_PrepRet_e   (*PrepareTimings_p)( DiagCom_ti_t*);
    void             (*SetTimings_p)(void);
    DiagCom_ti_t*       (*GetTimings_p)(DiagCom_tiMode_e);
    void             (*ExecFunction_p)(void(*)(void));
    void             (*End_p)(void);
    bool             (*Proc_p)(void);
    void             (*CommunicationBroken_p)(void);
    /* member variables */
    bool             reserveMedium;
}DataLinkVirtualTable;

/*
 * The response to be send to tester on warm reset.
 */

#define DIAGCOM_WARM_RESPONSE_MAX_LENGTH 10

/*
 * Structure to store information of the actual communication session
 *  -  e.g. for reinitialization after having moved the implementation
 * (in this case this structure must be allocated in a protected RAM
 * area which must not be overwritten)
 */

/* MISRA RULE 111 VIOLATION:  bit field should be of type unsigned int or signed int     */
typedef struct
{
    uint8   addrExists_b:1;  /* header with address infos                   */
    uint8   lenExists_b :1;  /* header with additional length byte          */
    uint8   fmtbits_b2 :2;   /* FormatBits in Header                        */
}DiagCom_StateBitFields_t;

 /* Total Size 64 bytes */
typedef struct
{

    /* previous active Timings in ticks      */
    uint32  activeP2min_u32;
    uint32  activeP2max_u32;
    uint32  activeP3max_u32;
    uint32  activeP4min_u32;

    /* previous active Baudrate in Baud (only relevant for K-Line)   */
    uint32   activeBaudrate_u32;

    /* requested baudrate for baudrate change after response is sent */
    uint32  reqBdRate_u32;

    /* one uint32 can be used e.g. to store pointer to additional structure */
    uint32 freeForProjectUse_u32;


    /* Signalises a shorted Initialisation for
     * switch from one CustomerBlock to another, if req==0x77 , oth==0    */
    uint8    internInitRequ_u8;

    /* 0..K-Line,
     * 1..CAN,
     * 2..ETK,
     * 3..CAN-CAN Gateway,
     * 4..CAN-KLine-Gateway      */
    uint8    activeComMedium_u8;

      /* Communication Protocol:
     * 0..KWP2000(K-Line),
     * 1..KWP2000*(K-Line),
     * 2..KWP2000(CAN)   */
    uint8    activeComProtocol_u8;

    /* physical ECU address */
    uint8    ecuAddr_u8;

    /* Required for changing of Baudrate */
    uint8   changeReq_u8;

    /* previous active stimulation Address */
    uint8    actStimuAddr_u8;

    /* previous active stimulation Address */
    uint8    actStimuAddrMode_u8;

    /* previous active diagnostic mode     */
    uint8    diagMode_u8;

    /* previous active security level      */
    uint8    secLevel_u8;

    /* Com state bit fields contains addrExists_b,lenExists_,fmtbits_b2 */
    DiagCom_StateBitFields_t bitfields_s;

    uint8 testerAddr_u8;  /* tester address in telegram                  */

    uint8 hdrLength_u8;   /* header length in telegram                   */

    /* index of dcan address table */
    uint8  addrId_u8;

    uint8  freeForProjectUse0_u8;

    /* For future expansion */
    uint8  freeForProjectUse1_u8;

    /* For future expansion */
    uint8  freeForProjectUse2_u8;

    /* For future expansion */
    uint8  freeForProjectUse3_u8;

    /* K2Sess state machine: transmit on warm reset. */
    /* one byte can be used e.g. to store service state for reinitialization */
    uint8   warmResetTransmit_b;

    /* The length of the response: SID + data. */
    uint8 warmRespDatalength_u8;

    /* The response to be send to tester on warm reset. */
    /* The SID  + data to be send to tester on warm reset. */
    uint8 warmRespData_au8 [DIAGCOM_WARM_RESPONSE_MAX_LENGTH];

} DiagCom_StateDescriptor_t;


/* Union */
typedef union
{
    /* bute array for the use of other protocols say CCP */
    uint8 array_au8[64];

    DiagCom_StateDescriptor_t DiagCom_StateDesc_s;

}ComStateDescriptor_t;

/********************************************/


/* Defines for configuration of service distributor: */
#define DIAGCOM_IGNORE_DU8         0xFF        /* Ignore first parameter                        */
#define DIAGCOM_NOBROADCAST_DU8    0xFF        /* Broadcast mode not supported                  */
#define DIAGCOM_NOCARB_DU8         0xFF        /* Carb mode with no neg. response not supported */

#define DIAGCOM_ALLDIAMODES_DB32 0xFFFFFFFFUL     /* All diagnostic modes  */

#define DIAGCOM_MAXDATA_DU8 0xFF

/* Default lengths of responses: */
#define DIAGCOM_NRLEN_DU8        1    /* Length of negative response                             */
#define DIAGCOM_NRPOS_DU8        0    /* Position of negative response code in response          */
#define DIAGCOM_RLEN_WAIT_DU8    0    /* No data are sent when service is waiting                */

/* Definition of negative response codes - */
#define DIAGCOM_RC_SFNS_DU8     0x12  /* RC_SFNS: subFunctionNotSupported                        */
#define DIAGCOM_RC_SNSIAS_DU8   0x7F  /* RC_SNSIAS: serviceNotSupportedInActiveSession           */
#define DIAGCOM_RC_CNC_DU8      0x22  /* RC_CNC: conditionsNotCorrect                            */
#define DIAGCOM_RC_RSE_DU8      0x24  /* RC_RSE: requestSequenceError                            */

/* Summary of all response codes in ISO 14230:                                                   */
#define DIAGCOM_RC_GR_DU8       0x10  /* RC_GR: generalReject                                    */
#define DIAGCOM_RC_SNS_DU8      0x11  /* RC_SNS: serviceNotSupported                             */
#define DIAGCOM_RC_SFNSIF_DU8   0x12  /* RC_SFNS-IF: subFunctionNotSupported-invalidFormat       */
#define DIAGCOM_RC_IMLOIF_DU8   0x13  /* IMLOIF: incorrectMessageLengthOrInvalidFormat           */
#define DIAGCOM_RC_RTL_DU8      0x14  /* RTL - responseTooLong                                   */
#define DIAGCOM_RC_BRR_DU8      0x21  /* RC_B-RR: busy-repeatRequest                             */
#define DIAGCOM_RC_CNCORSE_DU8  0x22  /* RC_CNCORSE: conditionsNotCorrectOrRequestSequenceError  */
#define DIAGCOM_RC_RNC_DU8      0x23  /* RC_RNC: routineNotComplete                              */
#define DIAGCOM_RC_ROOR_DU8     0x31  /* RC_ROOR: requestOutOfRange                              */
#define DIAGCOM_RC_SADSAR_DU8   0x33  /* RC_SAD-SAR: securityAccessDenied-securityAccessRequested*/
#define DIAGCOM_RC_IK_DU8       0x35  /* RC_IK: invalidKey                                       */
#define DIAGCOM_RC_ENOA_DU8     0x36  /* RC_ENOA: exceedNumberOfAttempts                         */
#define DIAGCOM_RC_RTDNE_DU8    0x37  /* RC_RTDNE: requiredTimeDelayNotExpired                   */
#define DIAGCOM_RC_DNA_DU8      0x40  /* RC_DNA: downloadNotAccepted                             */
#define DIAGCOM_RC_IDT_DU8      0x41  /* RC_IDT: improperDownloadType                            */
#define DIAGCOM_RC_CNDTSA_DU8   0x42  /* RC_CNDTSA: canNotDownloadToSpecifiedAddress             */
#define DIAGCOM_RC_CNDNOBR_DU8  0x43  /* RC_CNDNOBR: canNotDownloadNumberOfBytesRequested        */
#define DIAGCOM_RC_UNA_DU8      0x50  /* RC_UNA: uploadNotAccepted                               */
#define DIAGCOM_RC_IUT_DU8      0x51  /* RC_IUT: improperUploadType                              */
#define DIAGCOM_RC_CNUFSA_DU8   0x52  /* RC_CNUFS: canNotUploadFromSpecifiedAddressA             */
#define DIAGCOM_RC_CNUNOBR_DU8  0x53  /* RC_CNUNOBR: canNotUploadNumberOfBytesRequested          */
#define DIAGCOM_RC_NEWRA_DU8    0x61  /* RC_NEWRA: normalExitWithResultsAvailable                */
#define DIAGCOM_RC_NEWORA_DU8   0x62  /* RC_NEWORA: normalExitWithoutResultsAvailable            */
#define DIAGCOM_RC_AEWRA_DU8    0x63  /* RC_AEWRA: abnormalExitWithResultsAvailable              */
#define DIAGCOM_RC_AEWORA_DU8   0x64  /* RC_AEWORA: abnormalExitWithoutResultsAvailable          */
#define DIAGCOM_RC_TS_DU8       0x71  /* RC_TS: transferSuspended                                */
#define DIAGCOM_RC_TA_DU8       0x72  /* RC_TA: transferAborted                                  */
#define DIAGCOM_RC_IAIBT_DU8    0x74  /* RC_IAIBT: illegalAddressInBlockTransfer                 */
#define DIAGCOM_RC_IBCIBT_DU8   0x75  /* RC_IBCIBT: illegalByteCountInBlockTransfer              */
#define DIAGCOM_RC_IBTT_DU8     0x76  /* RC_IBTT: illegalBlockTransferType                       */
#define DIAGCOM_RC_BTDCE_DU8    0x77  /* RC_BTDCE: blockTransferDataChecksumError                */
#define DIAGCOM_RC_RCRRP_DU8    0x78  /* RC_RCRRP: requestCorrectlyReceived-Response-Pending     */
#define DIAGCOM_RC_IBCDBT_DU8   0x79  /* RC_IBCDBT: incorrectByteCountDuringBlockTransfer        */
#define DIAGCOM_RC_SFNSIAS_DU8  0x7E  /* RC_SFNSIAS: subFunctionNotSupportedInActiveSession      */
#define DIAGCOM_RC_SNSICS_DU8   0x7F  /* RC_SNSICS:  serviceNotSupportedInCurrentSession         */
#define DIAGCOM_RC_T15ON_DU8    0xF9  /* RC_T15ON: vehicleManufacturerSpecific                   */
#define DIAGCOM_RC_CSERR_DU8    0xFA  /* RC_CSERR: systemSupplierSpecific                        */
#define DIAGCOM_RC_ERASE_DU8    0xFB  /* RC_ERASE: systemSupplierSpecific                        */
#define DIAGCOM_RC_PROG_DU8     0xFC  /* RC_PROG: systemSupplierSpecific                         */
#define DIAGCOM_RC_ERERR_DU8    0xFD  /* RC_ERERR: systemSupplierSpecific                        */
#define DIAGCOM_RC_PRERR_DU8    0xFE  /* RC_PRERR: systemSupplierSpecific                        */
#define DIAGCOM_RC_SNSIADM_DU8  0x80  /* RC_SNSIADM: serviceNotSupportedInActiveDiagnosticMode   */
#define DIAGCOM_RC_RPMTH_DU8    0x81  /* RC_RPMTH: RPMTooHigh                                    */
#define DIAGCOM_RC_RPMTL_DU8    0x82  /* RC_RPMTL: RPMTooLow                                     */
#define DIAGCOM_RC_EIR_DU8      0x83  /* RC_EIR:  EngineIsRunning                                */
#define DIAGCOM_RC_EINR_DU8     0x84  /* RC_EINR: EngineIsNotRunning                             */
#define DIAGCOM_RC_ERTTL_DU8    0x85  /* RC_ERTTL: EngineRunTimeTooLow                           */
#define DIAGCOM_RC_TEMPTH_DU8   0x86  /* RC_TEMPTH: TemperatureTooHigh                           */
#define DIAGCOM_RC_TEMPTL_DU8   0x87  /* RC_TEMPTL: TemperatureTooLow                            */
#define DIAGCOM_RC_VSTH_DU8     0x88  /* RC_VSTH: VehicleSpeedTooHigh                            */
#define DIAGCOM_RC_VSTL_DU8     0x89  /* RC_VSTL: VehicleSpeedTooLow                             */
#define DIAGCOM_RC_TPTH_DU8     0x8A  /* RC_TPTH: Throttle/PedalTooHigh                          */
#define DIAGCOM_RC_TPTL_DU8     0x8B  /* RC_TPTL: Throttle/PedalTooLow                           */
#define DIAGCOM_RC_TRNIN_DU8    0x8C  /* RC_TRNIN: TransmissionRangNotInNeutral                  */
#define DIAGCOM_RC_TRNIG_DU8    0x8D  /* RC_TRNIG: TransmissionRangNotInGear                     */
#define DIAGCOM_RC_BSNC_DU8     0x8F  /* RC_BSNC: BrakeSwitch(es)NotClosed                       */
#define DIAGCOM_RC_SLNIP_DU8    0x90  /* RC_SLNIP: ShiftLeverNotInPark                           */
#define DIAGCOM_RC_TCCL_DU8     0x91  /* RC_TCCL: TorqueConverterClutchLocked                    */
#define DIAGCOM_RC_VTH_DU8      0x92  /* RC_VTH: VoltageTooHigh                                  */
#define DIAGCOM_RC_VTL_DU8      0x93  /* RC_VTL: VoltageTooLow                                   */

/**********        **************       ***************/

#define DIAGCOM_WARM_STATUS_REQUEST     FALSE
#define DIAGCOM_WARM_STATUS_RESPONSE    TRUE

/**********************************/

#endif
