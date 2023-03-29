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
 * $Filename__:ccp_services_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:28.07.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:ccp_services_prot$ 
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
 * 1.9.0; 0     28.07.2009 MXA2SI
 *   Migrated from Clearcase
 *   B_CCP.9.0.0
 *   B_CCP_Conf.9.0.0
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ccp_services_prot.h
 *      Version: \main\29
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _CCP_SERVICES_PROT_H
#define _CCP_SERVICES_PROT_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                    Header File for CCP Service Structures for Byte alignment
 *
 * \scope  INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 *    Type definitions
 ***************************************************************************************************
 */

#ifdef _C166
  #define INF_HUGE  huge
#else
  #define INF_HUGE
#endif

#define     CCP_SUSPEND_HS_INTERRUPTS    Cpu_SuspendInt() /* CPU function to disable Global Interrupt */
#define     CCP_RESUME_INTERRUPTS        Cpu_ResumeInt()  /* CPU function to enable Global Interrupt */

/* Status Returned to the CCP Driver from Memory Adaptor  */
#define     CCP_MEM_ST_IDLE          0x00     /* Processing over OR Processing not possible */
#define     CCP_MEM_ST_BUSY          0x01     /* Busy : Call function again */
#define     CCP_MEM_DME_REJECTED     0x33     /* Access Denied */
#define     CCP_MEM_DME_OUT_OF_RAM   0x21     /* calibration data init request */
#define     CCP_MEM_DME_PARAM_OUT    0x32     /* Parameter out of Range */

#define     CCP_ACTIVE_PAGE           0x00

   /* ODT-Datatype for Byte-Orientated DAQ-Lists */
typedef struct
{
   uint8 INF_HUGE *  adOdtEntry_a[7];   /* representation of one ODT */
   uint8             dMeasBuff_au8[8];  /* Buffer for measured value */
   uint8             ctElements_u8 ;    /* Number of address stored */
} Ccp_odt_t;

/* DAQ-List-Descriptor for use within ROM to describe DAQ-List */
typedef struct
{
   uint8         numDaqSize_u8;         /* reserved ODTs for DAQ                   */
   uint8         numFirstODT_u8;        /* PID of first ODT in DAQ                 */
   Ccp_odt_t    *odtBaseAddr_ps;        /* Ptr to ODTs                             */
   uint16        numGridActiv_u16;      /* TimingGrid in which the Activations     */
   uint16        numMsgHandle_u16;      /* logical Handle to CAN-MessageBuffer     */
   uint16        numMaxMsgHandle_u16;   /* max message handle used for burst mode  */
   uint8         numPCP_channel_u8;     /* Number of the PCP channel to be used    */
}  Ccp_DaqDescriptor_t;

/* DAQ-List-Header to be stored in RAM */
typedef struct
{
   uint32    numCanId167_u32;               /* CAN-ID used for DAQ-                    */
   uint16    numGridEffective_u16;          /* Effective Grid in which the Cal is done */
   uint8     stDaqList_u8;                  /* State of DAQ-List,                      */
   uint8     stMeasBuffer_u8;               /* State of DAQ-Global MeasureBuffer       */
   uint8     numNextOdt_u8;                 /* PID of ODT that is transmitted next     */
   uint8     numLastRequOdt_u8;             /* PID of ODT that is transmitted last     */
   uint8     numGridPrescaler_u8;           /* Devides: requCalGrid / confCalGrid      */
   uint8     numGridPreSclReload_u8;        /* Reload-Value for numGridPrescaler_u8    */
   uint8     Ccp_lasthandle_used_u8;         /*last message handle*/
   bool      Ccp_handle_status_b;           /* Handle status*/
} Ccp_DaqListe_t;

/* Event realted information to be stored in RAM */
typedef struct
{
   uint8 idxEvent_au8[3];    /* DAQ number to be stored on a particular Event */
   uint8 ctNumDAQ_u8 ;       /* Total number of DAQ in a particular Event */
   bit8  numDAQPost_b8 ;     /* Bits set for Each DAQ */
} Ccp_DaqEvent_t ;

typedef const struct
{
    uint16  adStation_u16;          /* ECU address for connect and disconnect   */
    uint8   numIdLen_u8;            /* length of ECU ID for ExchangeID          */
    uint8   numDataType_u8;         /* data type of ECU ID                      */
    uint32  numEcuId_u32;           /* ECU identifier                           */
} Ccp_ecuParam_t;

/* Type definition for service type */
typedef  void  Ccp_Service_t (void);
typedef  Ccp_Service_t   * const Ccp_ServicePtr_t;


typedef const struct
{
    const Ccp_DaqDescriptor_t   *daqDesc_pcs;       /*  pointer to DAQ descriptor               */
    Ccp_DaqListe_t              *daqList_ps;        /*  pointer to DAQ list in RAM              */
    Ccp_DaqEvent_t              *event_ps;          /*  pointer event list in RAM               */
    Ccp_ServicePtr_t            *serviceTable_pcs;  /*  pointer to service table                */
    const uint8                 *mplList_pcs;       /*  pointer to Master Priviledge Level table*/
    uint32                      dtoCanId_u32;       /*  CAN id DTO if multiplexed with DAQ proc.*/
    uint16                      numTxHandle_u16;    /*  tx handle from CAN driver               */
    uint16                      numRxHandle_u16;    /*  rx handle from CAN driver               */
    uint8                       numDaq_u8;          /*  number of DAQ lists                     */
    uint8                       numChksumType_u8;   /*  Check method used                       */
    bool                        burstDaqTx_b;       /*  burst DAQ transmission enabled          */
    bool                        eventbasedTx_b;     /*  If TRUE Event Based transmission enabled */
    uint8                       resAvailMask_u8;    /*  Resource Available Mask                 */
    uint8                       resProtMask_u8;     /*  Resource Protected Mask                 */
    uint8                       stProtection_u8;    /*  Protection Status                       */
    bool                       (*CcpEnableChk_fp)(void);       /*  Function Pointer for CCP callback function*/
    void                       (*CcpSetneutral_fp)(uint32 *Ccp_add_pu32);/* function pointer for CCP Set Neutral address function*/

} Ccp_conf_t;

/* For Cold-Start-Test Freezed General Status */
typedef struct
{
    uint8     NoOfCfgByte_HH_u8  __attribute__ ((packed));    /* No OfBytes in Block - High Byte */
    uint8     NoOfCfgByte_LL_u8  __attribute__ ((packed));    /* No OfBytes in Block - Low Byte  */
    uint8     BLOBVersionNo_HH_u8   __attribute__ ((packed));  /* Blob Version No  - High Byte  */
    uint8     BLOBVersionNo_LL_u8  __attribute__ ((packed)) ;  /* Blob Version No  - Low Byte */
    uint8     MeasuringChkNoHigh_u8  __attribute__ ((packed)) ;/* Measuring CheckNumber - High */
    uint8     MeasuringChkNoLow_u8  __attribute__ ((packed)) ;  /* Measuring CheckNumber - Low */
    uint8     NoOfDAQLists_HH_u8  __attribute__ ((packed));    /* NoOfDAQ-Lists supported - High */
    uint8     NoOfDAQLists_LL_u8  __attribute__ ((packed));    /* NoOfDAQ-Lists supported - Low */
}Ccp_FreezedDAQGen_t ;


/* For Cold-Start-Test Freezed DAQ-Descripting Status for CCP Extention implementation */
typedef struct
{
    uint8    numDAQFreeze_HH_u8 __attribute__ ((packed));       /* DAQ-List Number - High Byte  */
    uint8    numDAQFreeze_LL_u8 __attribute__ ((packed));       /* DAQ-List Number - Low Byte  */
    uint8    numCANIDFreeze_HH_u8  __attribute__ ((packed));    /* CAN-ID - High High  */
    uint8    numCANIDFreeze_HL_u8 __attribute__ ((packed));     /* CAN-ID  - High Low  */
    uint8    numCANIDFreeze_LH_u8  __attribute__ ((packed));     /* CAN-ID  - Low High   */
    uint8    numCANIDFreeze_LL_u8  __attribute__ ((packed));     /* CAN-ID  - Low Low  */
    uint8    numSignalFreeze_HH_u8  __attribute__ ((packed));   /* Number of Signal - High */
    uint8    numSignalFreeze_LL_u8  __attribute__ ((packed));   /* Number of Signal - Low */
    uint8    numLastFreezeODT_HH_u8 __attribute__ ((packed));   /* Last Freeze ODT no - High   */
    uint8    numLastFreezeODT_LL_u8 __attribute__ ((packed));   /* Last Freeze ODT no - low   */
    uint8    TransmissionInt_HH_u8  __attribute__ ((packed));   /* Transmission Interval - High */
    uint8    TransmissionInt_LL_u8  __attribute__ ((packed));   /* Transmission Interval - Low */
    uint8    Reserved1_HH_u8  __attribute__ ((packed));         /* Reserved  - High */
    uint8    Reserved1_LL_u8  __attribute__ ((packed));         /* Reserved  - Low  */
}Ccp_FreezedINDAQ_t  ;

/* For Cold-Start-Test Freezed Signal-Descriptor for CCP extention implementation */
typedef struct
{
   uint8   numSignalSize_u8 __attribute__ ((packed));      /* Signal Data Type          */
   uint8   numAddressExt_u8  __attribute__ ((packed));      /* AddressExtension          */
   uint8   adSignalFreeze_HH_u8 __attribute__ ((packed)) ;     /* Label Address - High High */
   uint8   adSignalFreeze_HL_u8 __attribute__ ((packed)) ;     /* Label Address - High Low  */
   uint8   adSignalFreeze_LH_u8 __attribute__ ((packed)) ;     /* Label Address - Low High  */
   uint8   adSignalFreeze_LL_u8  __attribute__ ((packed));      /* Label Address - Low Low   */
}Ccp_FreezedINSignal_t  ;


typedef struct
{
   uint8   MeasurementCN_High_u8;            /* Measurement Check Number - High */
   uint8   MeasurementCN_Low_u8;             /* Measurement Check Number - Low */
   uint8   CalibrationCN_High_u8;            /* Calibration Check Number - High */
   uint8   CalibrationCN_Low_u8;             /* Calibration Check Number - Low */
   bool    stInitialised_b;                   /* Status of initialization  */
} Ccp_CheckNumbers_t;




typedef struct
{
   uint8  numCommCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
   uint8  adStationLow_u8 __attribute__ ((packed));
   uint8  adStationHigh_u8 __attribute__ ((packed));
} Ccp_Connect_Rec_t;

typedef struct
{
   uint8  numPacketID_u8 __attribute__ ((packed));
   uint8  numRetCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
} Ccp_Connect_Send_t ;

typedef struct
{
   uint8  numCommCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
   uint8  numModeDisc_u8 __attribute__ ((packed));
   uint8  DontCare __attribute__ ((packed));
   uint8  adStationLow_u8 __attribute__ ((packed));
   uint8  adStationHigh_u8 __attribute__ ((packed));
} Ccp_Disconnect_Rec_t;

typedef struct
{
   uint8  numPacketID_u8 __attribute__ ((packed));
   uint8  numRetCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
} Ccp_Disconnect_Send_t ;


typedef struct
{
   uint8  numCommCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
   uint8  SessionStatus_u8 __attribute__ ((packed));
} Ccp_SetSessStatus_Rec_t;

typedef struct
{
   uint8  numPacketID_u8 __attribute__ ((packed));
   uint8  numRetCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
} Ccp_SetSessStatus_Send_t;

typedef struct
{
   uint8  numPacketID_u8 __attribute__ ((packed)) ;
   uint8  numRetCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
   uint8  SessionStatus_u8 __attribute__ ((packed));
   uint8  AddOnInfo1_u8 __attribute__ ((packed));
   uint8  AddOnInfo2_u8 __attribute__ ((packed));
} Ccp_GetSessStat_Send_t;


typedef struct
{
   uint8  numCommCod_u8 __attribute__ ((packed)) ;
   uint8  ctCommCtr_u8 __attribute__ ((packed)) ;
   uint8  ReqMPL_u8 __attribute__ ((packed)) ;
} Ccp_GetSeed_Rec_t ;

typedef struct
{
   uint8  numPacketID_u8 __attribute__ ((packed)) ;
   uint8  numRetCod_u8 __attribute__ ((packed)) ;
   uint8  ctCommCtr_u8 __attribute__ ((packed)) ;
   uint8  stProtection_u8 __attribute__ ((packed)) ;
   uint32 Seed_u32 __attribute__ ((packed));
} Ccp_GetSeed_Send_t;


typedef struct
{
   uint8  numCommCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
   uint8  numDAQList_u8 __attribute__ ((packed));
   uint8  DontCare __attribute__ ((packed));
   uint32 numCanID_u32 __attribute__ ((packed));
} Ccp_GetDaqSize_Rec_t;

typedef struct
{
   uint8  numPacketID_u8 __attribute__ ((packed));
   uint8  numRetCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
   uint8  numDAQListSize_u8 __attribute__ ((packed));
   uint8  numFirstODT_u8 __attribute__ ((packed));
} Ccp_GetDaqSize_Send_t;

typedef struct
{
   uint8  numCommCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8  __attribute__ ((packed));
   uint8  numElemSize_u8 __attribute__ ((packed));
   uint8  adExt_u8  __attribute__ ((packed));
   uint32 adHuge_u32 __attribute__ ((packed));
} Ccp_WriteDaq_Rec_t ;


typedef struct
{
   uint8  numPacketID_u8 ;
   uint8  numRetCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
   uint8  RequData_u8[5]  __attribute__ ((packed));
} Ccp_Shortup_Send_t  ;

typedef struct
{
   uint8  numCommCod_u8 __attribute__ ((packed));
   uint8  ctCommCtr_u8 __attribute__ ((packed));
   uint8  numDataSize_u8 __attribute__ ((packed));
   uint8  adExtAddr_u8 __attribute__ ((packed));
   uint8  * linAddrMTA_pu8 __attribute__ ((packed));
} Ccp_Shortup_Rec_t  ;


typedef struct
{
  uint8  numCommCod_u8  __attribute__ ((packed));
  uint8  ctCommCtr_u8  __attribute__ ((packed));
  uint8  numDAQList_u8  __attribute__ ((packed));
  uint8  numODT_u8  __attribute__ ((packed));
  uint8  numElem_u8  __attribute__ ((packed));
  uint8  DontCare[3] __attribute__ ((packed));
} Ccp_SetDaqPointer_Rec_t  ;

typedef struct
{
  uint8  numPacketID_u8  __attribute__ ((packed));
  uint8  numRetCod_u8  __attribute__ ((packed));
  uint8  ctCommCtr_u8  __attribute__ ((packed));
  uint8  DontCare[5]  __attribute__ ((packed));
} Ccp_SetDaqPointer_Send_t ;


typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed));
  uint8  numRetCod_u8  __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  DontCare[5] __attribute__ ((packed));
} Ccp_WriteDaq_Send_t   ;


typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  numDataSize_u8 __attribute__ ((packed));
  uint8  Data_u8[5] __attribute__ ((packed));
} Ccp_Download_Rec_t ;

typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed));
  uint8  numRetCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  adExtAddr_u8 __attribute__ ((packed));
  uint8  * linAddrMTA_pu8 __attribute__ ((packed));
} Ccp_Download_Send_t;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  Data_u8[6] __attribute__ ((packed));
} Ccp_DownLoad6_Rec_t ;

typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed));
  uint8  numRetCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  numMTA0Ext_u8 __attribute__ ((packed));
  uint8  * currMTA0_pu8 __attribute__ ((packed));
} Ccp_DownLoad6_Send_t;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint32 Key_u32 __attribute__ ((packed));
} Ccp_Unlock_Rec_t ;

typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed)) ;
  uint8  numRetCod_u8 __attribute__ ((packed)) ;
  uint8  ctCommCtr_u8 __attribute__ ((packed)) ;
  uint8  ReachedMPL_u8 __attribute__ ((packed)) ;
} Ccp_Unlock_Send_t;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  idxStartStop_u8 __attribute__ ((packed));
  uint8  numDAQList_u8 __attribute__ ((packed));
  uint8  numLastODT_u8 __attribute__ ((packed));
  uint8  numEventChannel_u8 __attribute__ ((packed));
  uint16 numTRPrescaler_u16 __attribute__ ((packed));
} Ccp_StartStop_Rec_t ;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  StartStopAll __attribute__ ((packed));
  uint8  DontCare[5] __attribute__ ((packed));
} Ccp_StartStopAll_Rec_t ;

typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed));
  uint8  numRetCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  RequData_u8[5] __attribute__ ((packed));
} Ccp_Upload_Send_t ;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  numDataSize_u8 __attribute__ ((packed));
} Ccp_Upload_Rec_t ;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  numMTA_u8 __attribute__ ((packed));
  uint8  adExtAddr_u8 __attribute__ ((packed));
  uint8  * linAddrMTA_pu8 __attribute__ ((packed));
} Ccp_SetMTA_Rec_t;

typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed));
  uint8  numRetCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
}  Ccp_SetMTA_Send_t;


typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed));
  uint8  numRetCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  adExt_u8 __attribute__ ((packed));
  uint32 adPageBase_u32 __attribute__ ((packed));
} Ccp_GetCalPage_Send_t;

typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed));
  uint8  numRetCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  numMainProtVer_u8 __attribute__ ((packed));
  uint8  numReleaseVer_u8 __attribute__ ((packed));
} Ccp_GetVersion_Send_t ;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed)) ;
} Ccp_SelCalPage_Rec_t ;

typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed));
  uint8  numRetCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
}  Ccp_SelCalPage_Send_t ;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  adStationLow_u8 __attribute__ ((packed));
  uint8  adStationHigh_u8 __attribute__ ((packed));
} Ccp_Test_Rec_t ;

typedef struct
{
  uint8  numPacketID_u8 __attribute__ ((packed)) ;
  uint8  numRetCod_u8 __attribute__ ((packed)) ;
  uint8  ctCommCtr_u8 __attribute__ ((packed)) ;
} Ccp_Test_Send_t;

typedef struct
{
  uint8  numCommCod_u8 __attribute__ ((packed));
  uint8  ctCommCtr_u8 __attribute__ ((packed));
  uint8  DiagServiceHighNr_u8 __attribute__ ((packed));
  uint8  DiagServiceLowNr_u8 __attribute__ ((packed));
  uint8  Param[4] __attribute__ ((packed));
} Ccp_DiagSerColdSt_Rec_t ;

typedef struct
{
  uint8  numPacketID_u8  __attribute__ ((packed));
  uint8  numRetCod_u8  __attribute__ ((packed));
  uint8  ctCommCtr_u8  __attribute__ ((packed));
  uint8  lenReturn_u8  __attribute__ ((packed));
  uint8  DataTypeQual_u8  __attribute__ ((packed));
} Ccp_DiagSerColdSt_Send_t ;

typedef struct
{
  uint8  numPacketID_u8  __attribute__ ((packed));
  uint8  numRetCod_u8  __attribute__ ((packed));
  uint8  ctCommCtr_u8  __attribute__ ((packed));
  uint8  lenSlaveID_u8  __attribute__ ((packed));
  uint8  DataTypeQu_u8   __attribute__ ((packed));
  uint8  ResAvailMask_u8  __attribute__ ((packed));
  uint8  ResProtectMask_u8 __attribute__ ((packed));
} Ccp_ExId_Send_t ;


/* Protocol handler functions prototype */
__PRAGMA_USE__CODE__ccp__HighSpeed__START
void    Ccp_Handler_Rec         (void);
void    Ccp_Handler_Send        (void);
void    Ccp_HandlerTermination  (void);
void    Ccp_ServiceCaller       (void);
uint32  Ccp_SeedKey (uint32 * Seed_PL, uint8 ReqMPL_u8 );
void Ccp_SetNeutralAddress(uint32* Ccp_add_pu32);
__PRAGMA_USE__CODE__ccp__HighSpeed__END

__PRAGMA_USE__CODE__ccp__LowSpeed__START
void    Ccp_HandlerVarInit      (void);
void    Ccp_DAQTransmVarInit    (void);
void    Ccp_SetResAvailMask (uint8 resAvailMask);
void    Ccp_SetConfiguration    (Ccp_conf_t *config_ps, Ccp_ecuParam_t *param_ps);
__PRAGMA_USE__CODE__ccp__LowSpeed__END

/* Prototypes of measurement module */
__PRAGMA_USE__CODE__ccp__HighSpeed__START

void    Ccp_SampDAQ        (uint8 numDaqNr_u8);
void    Ccp_TxNextODT      (uint8 numDaqNr_u8);
void    Ccp_TxEvent        (uint8 EventNum_u8);
void    Ccp_SampleEvent    (uint8 EventNum_u8);
void    Ccp_EndDAQt        (void );
void    Ccp_DAQTx_pcp      (uint8 numDaqNr_u8);
__PRAGMA_USE__CODE__ccp__HighSpeed__END


/* Prototypes of Cold-Start-Acquisition Functionality */
__PRAGMA_USE__CODE__ccp__HighSpeed__START
void    Ccp_ColdStartMoni        (void);
void    Ccp_DiagServReadCN       (const uint8* CCP_DAQCfgStartPtr);
void    Ccp_DiagServWriteCN      (uint16 numMeasCN_u16, uint16 numCalCN_u16);
__PRAGMA_USE__CODE__ccp__HighSpeed__END

__PRAGMA_USE__CODE__ccp__LowSpeed__START
void    Ccp_ColdStartIni         (void);
void   Ccp_ColdStartDAQResume   (const uint8* CCP_DAQCfgStartPtr);
__PRAGMA_USE__CODE__ccp__LowSpeed__END

/* Prototypes of CCP services */
__PRAGMA_USE__CODE__ccp__HighSpeed__START

void    Ccp_DummyService        (void);
void    Ccp_Connect             (void);
void    Ccp_SetMTA              (void);
void    Ccp_Download            (void);
void    Ccp_Upload              (void);
void    Ccp_Test                (void);
void    Ccp_StartStop           (void);
void    Ccp_StartStopAll        (void);
void    Ccp_Disconnect          (void);
void    Ccp_GetCalPage          (void);
void    Ccp_ShortUpload         (void);
void    Ccp_SelectCalPage       (void);
void    Ccp_GetSeed             (void);
void    Ccp_Unlock              (void);
void    Ccp_GetDaqSize          (void);
void    Ccp_SetDaqPtr           (void);
void    Ccp_WriteDaq            (void);
void    Ccp_ExchangeId          (void);
void    Ccp_SetSessStatus       (void);
void    Ccp_GetSessStatus       (void);
void    Ccp_BuildChecksum       (void);
void    Ccp_Move                (void);
void    Ccp_GetVersion          (void);
void    Ccp_Download6           (void);
void    Ccp_DiagServiceColdStart(void);
void    Ccp_DummyService1        (void);

__PRAGMA_USE__CODE__ccp__HighSpeed__END

/*
 ***************************************************************************************************
 *    Variables
 ***************************************************************************************************
 */
__PRAGMA_USE__ccp__1_5ms__constant__s32__START
extern Ccp_ecuParam_t       Ccp_ecuParameter_cs ; /* Structure for ECU parameter */
extern Ccp_conf_t           Ccp_conf_cs ;         /* Structure for config elements */
__PRAGMA_USE__ccp__1_5ms__constant__s32__END


MEMLAY_USE_PROTRAM(extern uint8 , Ccp_Calwakeupmode_u8);/* Variable for checking Calwakeup mode */
MEMLAY_USE_PROTRAM(extern Ccp_CheckNumbers_t ,  Ccp_CheckNumber_s ); /* Structure  for coldstart */
MEMLAY_USE_PROTRAM(extern Ccp_ecuParam_t * , Ccp_ecuParam_ps ); /* Ptr to ECU Param structure */
MEMLAY_USE_PROTRAM(extern Ccp_conf_t * , Ccp_conf_ps ); /* Pointer to configuration structure */
/* MISRA RULE 94 VIOLATION: Macro argument is empty.*/
MEMLAY_USE_PROTRAM(extern volatile uint8 ** , Ccp_DAQaddrlist_pu32 ); /* Pointer for DAQ-Adr-List */
MEMLAY_USE_PROTRAM(extern uint8 * , CCP_Rec_pu8 );          /* Pointer to Receive Buffer1 */
MEMLAY_USE_PROTRAM(extern uint8 * , CCP_RBuf_pu8 );         /* Pointer to Receive Buffer 2 */
MEMLAY_USE_PROTRAM(extern uint8 * , CCP_Send_pu8 );         /* Pointer to send Buffer 1 */
MEMLAY_USE_PROTRAM(extern uint8 * , CCP_SBuf_pu8 );         /* Pointer to send buffer 2 */
MEMLAY_USE_PROTRAM(extern uint8 * , Ccp_MTA0_pu8) ;  /* Pointer to Memory Transfer Address 0 */
MEMLAY_USE_PROTRAM(extern uint8 * , Ccp_MTA1_pu8 ); /* Pointer to Memory Transfer Address 1 */
MEMLAY_USE_PROTRAM(extern uint32 , Ccp_Key_u32 );         /* Generated key */
MEMLAY_USE_PROTRAM(extern uint32 , Ccp_tiCalWup_u32 ) ;   /* Timer for CalWup time handling */
MEMLAY_USE_PROTRAM(extern uint16 , Ccp_RecMsg_u16[] );    /* Receive Message Buffer 1 */
MEMLAY_USE_PROTRAM(extern uint16 , Ccp_RecMsg2_u16[] );   /* Receive Message Buffer 2 */
MEMLAY_USE_PROTRAM(extern uint16 , Ccp_SendMsg_u16[] );   /* Send Message  Buffer 1 */
MEMLAY_USE_PROTRAM(extern uint16, Ccp_SendMsg2_u16[] );  /* Send Message Buffer 2 */
MEMLAY_USE_PROTRAM(extern uint16, Ccp_ctrCommand_u16 );  /* Stored Command Counter for Service*/
MEMLAY_USE_PROTRAM(extern uint16 , Ccp_MsgError_u16); /* Stored Error Msg for Service-Handshake */
MEMLAY_USE_PROTRAM(extern uint8 , Ccp_RelDAQ_u8 );       /* Variable required for DAQ handling */
MEMLAY_USE_PROTRAM(extern uint8 , Ccp_RelODT_u8 );       /* Variable required for ODT handling */
MEMLAY_USE_PROTRAM(extern uint8,Ccp_ResAvailMask_u8 ); /* Variable to store resource avail mask */
MEMLAY_USE_PROTRAM(extern uint8 ,Ccp_ReqMPL_u8 );        /* Variable  for  requested MPL */
MEMLAY_USE_PROTRAM(extern uint8,Ccp_stSession_u8 );     /* CCP Session Status Byte */
MEMLAY_USE_PROTRAM(extern uint8 , Ccp_stIntState_u8 );    /* CCP Internal State   */
MEMLAY_USE_PROTRAM(extern uint8 ,Ccp_DummyVar_u8 ) ;   /* Dummy variable for ini of ODT address */
MEMLAY_USE_PROTRAM(extern uint8 , Ccp_MasterPrivLvl_u8 ); /* Current Access Level - MPL */
MEMLAY_USE_PROTRAM(extern uint8 ,Ccp_MTA0Ext_u8 );       /* MTA0 Memory extention */
MEMLAY_USE_PROTRAM(extern uint8, Ccp_MTA1Ext_u8 ) ;       /* MTA1 Memory extention */



MEMLAY_USE_PROTRAM(extern bool , Ccp_RxUpdate_b ) ;
MEMLAY_USE_PROTRAM(extern uint8 , Ccp_RxTmpBuffer_u8[] );



MEMLAY_USE_PROTRAM(extern Ccp_odt_t , Ccp_odt_s[] ) ;
MEMLAY_USE_PROTRAM(extern Ccp_DaqListe_t , DAQ_List[] );
MEMLAY_USE_PROTRAM(extern Ccp_DaqEvent_t , Event_List[] );

__PRAGMA_USE__ccp__1_5ms__constant__x32__START
extern const uint32 Ccp_tiMaxNoComCalWup_u32 ;   /* 60 sec timeout for no communication in CalWup */
extern const uint32 Ccp_dummy_cu32;/* Dummy variable used to set value to zero*/
__PRAGMA_USE__ccp__1_5ms__constant__x32__END
__PRAGMA_USE__ccp__1_5ms__RAM__x32__START
extern const uint8 *CcpAcquisitionConfig_pa;
__PRAGMA_USE__ccp__1_5ms__RAM__x32__END

#endif
