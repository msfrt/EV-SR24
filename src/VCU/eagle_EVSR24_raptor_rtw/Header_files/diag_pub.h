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
 * $Filename__:diag_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:diag_pub$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diag_pub.h
 *      Version: \main\27
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _DIAG_PUB_H
#define _DIAG_PUB_H

/**
 *********************************************************************
 * \moduldescription
 *       public header file (functional) for diag module
 *
 * \scope  API
 *********************************************************************
 */



/*
 *******************************************************************************
 * Defines and macros
 *******************************************************************************
 */

#define DIAG_INI_MODE_DU8   DIAGCOM_INI_MODE_DU8  /* Default diagnostic mode after initialisation */

/* Status of search: */
//#define DIAG_ST_NOTFOUND_DB8   0              /* Service identifier not found                   */
//#define DIAG_ST_SUPPORTED_DB8  MBIT0           /* Service identifier exists in table             */
//#define DIAG_ST_OPMODE_OK_DB8  MBIT1           /* Service is supported in current operation mode */
//#define DIAG_ST_DIAMODE_OK_DB8 MBIT2           /* Service is supported in current diag. mode     */


/* SID of escape code service: */
//#define DIAG_NEGR_D_ESCCODE_DU8    0x80

/* Positions of parameters in request: */
//#define DIAG_NEGR_D_MP_MSSID       0x00

/* Parameter stMode_b8 of function Diag_SetRoutine(): */
#define DIAG_ST_ACTIVE_DU8       0              /* Declare routine active                         */
#define DIAG_ST_INACTIVE_DU8     0xFF           /* Declare routine inactive                       */
#define DIAG_ST_IDLE_DU8         0xFF           /* Declare routine is Idle                        */
#define DIAG_ST_COMPLETE_DU8     0x1            /* Declare routine is complete                    */

/* DEFINITION OF GLOBAL MACROS */
#define DIAG_NOPROTOCOL_DU8      0

#define DIAG_SID_START_COMMUNICATION     0x81

/* Protocol may be initialized with service */
/* StartCommunication or StartApplicationMode (e.g. MacMess) */

#define DIAG_SID_START_APPLICATION_MODE  0xA0

/* MISRA RULE 96 VIOLATION:   parenthesis assigned  */
#define SIZEOF(arrayptr)   ((sizeof(arrayptr)) / (sizeof(arrayptr[0])))

/* maximum number of data in one message (inclusive SID): */
#define DIAG_D_MAXDATA_DU8              0xFF

#define DIAG_TI_TIMEMAX_DU16          1000    /* maximum duration of time (micro    */
                                                /* seconds) between start and break   */
                                                /* off of KWP2000-service             */

/* Following defines used in tp module */
#define DIAG_NOMEDIUM   DIAGCOM_NOMEDIUM

#define DIAG_POS   DIAGCOM_POS
#define DIAG_NEG   DIAGCOM_NEG

#define Diag_Medium_pcs  DiagCom_Medium_pcs

#define Diag_ComStateDescriptor_IsActive()    DiagCom_StateDescriptor_IsActive()
#define Diag_ComStateDescriptor_getP2min()    DiagCom_StateDescriptor_getP2min()
#define Diag_ComStateDescriptor_getP2max()    DiagCom_StateDescriptor_getP2max()
#define Diag_ComStateDescriptor_getWarmResetTransmit() \
                        DiagCom_StateDescriptor_getWarmResetTransmit()

#define Diag_ComStateDescriptor_setDiaMode(n)  DiagCom_StateDescriptor_setDiaMode(n)
#define Diag_ComStateDescriptor_setSecLevel(n)     DiagCom_StateDescriptor_setSecLevel(n)

/*
 *******************************************************************************
 * Type definitions
 *******************************************************************************
 */

/* protocol Id is set after activation of protocol (in wakeup) */


enum Diag_ProtocolID
{
    DIAG_NOPROTOCOL = DIAG_NOPROTOCOL_DU8,  /* no protocol       */
    DIAG_KWP2000,                           /* KWP-2000 standard connection      */
    DIAG_KWP2000_STAR,                      /* KWP-2000* for BMW    */
    DIAG_CARB,                              /* CARB 9141-2 (OBD II) */
    DIAG_EOBD,                              /* CARB 14230-4 (EOBD)  */
    DIAG_KWP2000_PROJECT1,                  /* Additional Prot IDs for Project specific use */
    DIAG_KWP2000_PROJECT2,
    DIAG_KWP2000_PROJECT3,

/* MISRA RULE 32 VIOLATION: assigning values to the enum is required   */
    DIAG_UDS = 0x80,                        /* UDS connection   */
    DIAG_OBDCAN,                            /* OBD on CAN    */
    DIAG_UDS_PROJECT1,                      /* Additional Prot IDs for Project specific use */
    DIAG_UDS_PROJECT2,
    DIAG_UDS_PROJECT3
};

/*
 *******************************************************************************
 * Type definitions
 *******************************************************************************
 */

typedef enum
{
    DIAG_ADDRESS_E,
    DIAG_ADDRESSMODE_E,
    DIAG_NUMADDRESS_E
}
Diag_AddrIndex_e;


/* status structure for the GetStatus function */
typedef struct
{
    uint8   *dUsed_pu8;
    uint16   numUsed_u16;
    bool    stRxOk_b;
    bool    stRxHeaderOk_b;
    bool    stReceiving_b;
    bool    stTxOk_b;
    uint8   stAddrMode_e;
    uint8   stAddress_u8;
    uint8   stTesterAddr_u8;
} Diag_st_t;


typedef uint8 Diag_Addr_t[DIAG_NUMADDRESS_E];


/* Return values of wakeup-functions */
typedef enum
{
   DIAG_NOSTIMU_E,       /* test if any wakeup can be recognized       */
   DIAG_STIMUACTIVE_E,   /* process for starting communication         */
   DIAG_STIMUOK_E        /* wakeup finished, communication is running  */
} Diag_WakeUp_e;

/* Default medium to be started after reset */
typedef enum
{
    NO_DEFAULT_MEDIUM,
    CAN_DEFAULT_MEDIUM,
    UART_DEFAULT_MEDIUM
} Diag_Medium_e;


typedef enum
{
    PERMISSION_REJECT,
    PERMISSION_OK,
    ENVIRONMENTNOT_OK
} DiagRI_StatusType_e;

/* ************************************************************************** */
/* Diag_Status                                                              */
/* Structure to store the status                                              */
/* ************************************************************************** */
__PRAGMA_USE__diagcom__10ms__RAM__s32__START
extern Diag_st_t Diag_Status;
__PRAGMA_USE__diagcom__10ms__RAM__s32__END

#define Diag_Status_setUsed(p)           (Diag_Status.dUsed_pu8 = (p))
#define Diag_Status_setNumUsed(n)        (Diag_Status.numUsed_u16 = (n))
#define Diag_Status_setStRxOk(b)         (Diag_Status.stRxOk_b = (b))
#define Diag_Status_setStRxHeaderOk(b)   (Diag_Status.stRxHeaderOk_b = (b))
#define Diag_Status_setStReceiving(b)    (Diag_Status.stReceiving_b = (b))
#define Diag_Status_setStTxOk(b)         (Diag_Status.stTxOk_b = (b))
#define Diag_Status_setAddrMode(e)       (Diag_Status.stAddrMode_e = (e))
#define Diag_Status_setAddress(n)        (Diag_Status.stAddress_u8 = (n))
#define Diag_Status_setTesterAddress(n)  (Diag_Status.stTesterAddr_u8 = (n))

#define Diag_Status_getUsed()           (Diag_Status.dUsed_pu8)
#define Diag_Status_getNumUsed()        (Diag_Status.numUsed_u16)
#define Diag_Status_getStRxOk()         (Diag_Status.stRxOk_b)
#define Diag_Status_getStRxHeaderOk()   (Diag_Status.stRxHeaderOk_b)
#define Diag_Status_getStReceiving()    (Diag_Status.stReceiving_b)
#define Diag_Status_getStTxOk()         (Diag_Status.stTxOk_b)
#define Diag_Status_getAddrMode()       (Diag_Status.stAddrMode_e)
#define Diag_Status_getAddress()        (Diag_Status.stAddress_u8)
#define Diag_Status_getTesterAddress()  (Diag_Status.stTesterAddr_u8)



/* variables moved to ComStateDescriptor - Baudrate value */
#define Diag_dReqBdRate_u32 ( DiagCom_StateDescriptor.reqBdRate_u32 )

/*  set the total length of message which is transmitted in Ring Buffer mode */
#define Diag_setRingBufMsgLength(n)  (Diag_stRingBuf_s.dMsgLength_u16 = (n))

/* set special pending P2max value */
#define Diag_setSpP2max(n) (Diag_SpP2max_u32 = (n))

/*
 *******************************************************************************
 *    External data
 *******************************************************************************
 */
__PRAGMA_USE__diagcom__10ms__RAM__x32__START
/* status register for event occurrence  */
extern uint32                       Diag_EventStatus_u32;

/*  buffer for handling of event response */
extern uint8*                       Diag_EventBuf_pu8;

/* MISRA RULE 104 VIOLATION:   Using non-const pointer to function  */
extern  void        (*Diag_EventFunctionCallback_p) (void);

#ifdef DIAGCOM_RESPONEVT_SY
#if(DIAGCOM_RESPONEVT_SY != DIAGCOM_ROE_DISABLED)
/* MISRA RULE 104 VIOLATION:   Using non-const pointer to function  */
extern void         (*Diag_checkEvent_pf)(void);
/* MISRA RULE 104 VIOLATION:   Using non-const pointer to function  */
extern void         (*Diag_setMsgBuf_pf)(void);
#endif
#endif

#ifdef DIAGCOM_RDPI_SY
#if(DIAGCOM_RDPI_SY != DIAGCOM_RDPI_DISABLED)
extern void         (* Diag_ProcessBackground_pf)(void);
extern void         (* Diag_BackgroundService_pf)(DiagCom_Msg_t*);

#endif
#endif
__PRAGMA_USE__diagcom__10ms__RAM__x32__END

/* ECU physical Address */
__PRAGMA_USE__diagcom__10ms__RAM__x8__START
extern uint8                        Diag_EcuPhysAddr_u8;
__PRAGMA_USE__diagcom__10ms__RAM__x8__END

/* Pointer to current configuration structure     */
//extern const DiagCom_ConfDistr_t* Diag_ConfDistr_pcs;

/*
 *******************************************************************************
 * Function prototypes
 *******************************************************************************
 */
__PRAGMA_USE__CODE__diagcom__NormalSpeed__START
/* Process task call.*/
extern void         Diag_Co_Proc (void);

extern void         Diag_SetProtId(uint8 n);
extern uint8        Diag_GetProtId(void);

extern void         Diag_SetMediumId(uint8 n);
extern uint8        Diag_GetMediumId(void);

extern void         Diag_txcallback ( void );


/* new interface of operation mode manager */
extern void         Diag_SetOpMode(uint8 stOpMode_u8);
extern uint8        Diag_GetOpMode(void);

/* Set/get diagnostic mode: */
extern void         Diag_SetDiaMode(uint8 stNewMode_u8);
extern uint8        Diag_GetDiaMode(void);

/* Declare routine active/inactive */
extern void         Diag_SetRoutine(bit32 dRoutId_b32, uint8 stMode_b8);

/* Get currently active routines */
extern bit32        Diag_GetActRoutines(void);


extern void         Diag_SetSecLevel(uint8 dSecLevel_u8);
extern uint8        Diag_GetSecLevel(void);
extern bit32        Diag_GetStSecLevel(void);

extern bool         Diag_GetPerm(bit32 dProtection_b32);

extern void         Diag_ModeIni(void);
extern void         Diag_ResIni(void);

extern bool         Diag_getMulRespAllow (void);
extern uint16       Diag_getBufferSize (uint16 MaxBufferSize_u16);

/* Process ini call. */
extern void         Diag_ini (void);
extern void         Diag_ComIni(void);

/* Set configuration for service distributor */
extern void         Diag_SetServDistrConfig(const DiagCom_ConfDistr_t *Config_pcs);

/* Get configuration for service distributor */
extern const DiagCom_ConfDistr_t* Diag_GetServDistrConfig(void);


extern void         Diag_SaveComState(void);
extern void         Diag_setCallServiceAgain(bool stCallServiceAgain_b);


extern  sint32      Diag_getEventTime( uint8 ewtime_u8 );

extern  void        Diag_SetEventConfig (DiagCom_EventConf_t *evconf_pcs);

extern  void        Diag_resetEventTable(void);
extern  void        Diag_resetEvent( uint8 );


extern  void        Diag_Reinit(void);

extern  bool        Diag_SaveMessage(void);

extern  uint32      Diag_GetRingbuffersize(void);



/* function interfaces for Read data by periodic identifier service to set the background process */
extern void         Diag_SetPeriodicFnPtr(void  (*ServiceFn_pf)(DiagCom_Msg_t*) );


#ifdef DIAGCOM_RDPI_SY
#if(DIAGCOM_RDPI_SY != DIAGCOM_RDPI_DISABLED)
extern void         Diag_ProcessBackground(void);
#endif
#endif
__PRAGMA_USE__CODE__diagcom__NormalSpeed__END
#endif  /* _DIAG_PUB_H*/
