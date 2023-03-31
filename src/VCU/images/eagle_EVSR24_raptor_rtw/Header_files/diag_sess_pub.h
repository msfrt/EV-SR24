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
 * $Filename__:diag_sess_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JMH5KOR$ 
 * $Date______:16.01.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:diag_sess_pub$ 
 * $Variant___:8.9.1$ 
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
 * 8.9.1; 0     16.01.2014 JMH5KOR
 *   Supported APIs for the RCMS00890100 Bugfix:Low priority protocol 
 *   pre-emption over high priority protocol when high priority protocol is in 
 *   WAIT state is moved from diag_priv.h to diag_sess_pub.h.
 * 
 * 1.8.0; 0     19.01.2009 MXA2SI
 *   Migrated from clearcase : B_DIAG.8.0.0
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diag_sess_pub.h
 *      Version: \main\18
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DIAG_SESS_PUB_H
#define _DIAG_SESS_PUB_H


/*!
 *********************************************************************
 * \moduledescription
 *          Global header (interface) of Keyword2000 session layer
 *
 *
 * \scope   INTERN
 *********************************************************************
 */




/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */


/* KWP-2000 constants */
#define DIAG_MAX_HEADER_LENGTH 4
#define DIAG_MIN_HEADER_LENGTH 1

/* The difference between max und min header + negative response SID */
#define DIAG_ADDITIONAL_PLACE ((DIAG_MAX_HEADER_LENGTH - DIAG_MIN_HEADER_LENGTH) + 1)


/* Additional place + header + SID + data. */
/*
 *  +------------------+--------+-----+----------+----------+
 *  | additional place | header | SID |  dataMax | checksum |
 *  +------------------+--------+-----+----------+----------+
 *                      *- - - - - - - - - - - - - receive buffer for TxRx()
 *                               * - - - - - - - - pointer from GetStatus()
 *                                     * - - - - - data pointer for service
 *                                     * - - - - - data pointer for Response()
 *   <------------------------->  answer: header and negative response byte
 */
#define BUFFER_LENGTH(data_len) \
    (DIAG_ADDITIONAL_PLACE + DIAG_MAX_HEADER_LENGTH + 1 + (data_len) + 1)

#define MAX_REQUEST_LENGTH(data_len) \
    (BUFFER_LENGTH(data_len) - DIAG_ADDITIONAL_PLACE)


/*
 * response pending: Header + 0x7F + requestSID + 0x78 + checksum
 * busy handshake  : Header + 0x7F + requestSID + 0x21 + checksum
 *  +----------+--------+-----+--------+----------+
 *  |   header |  0x7F  | SID |  0x78  | checksum |
 *  +----------+--------+-----+--------+----------+
 *   *- - - - - - - - - - - - - - - - - - receiver buffer
 *              * - - - - - - - - - - - - transmitter buffer
 */

#define HELP_BUFFER_LENGTH          (DIAG_MAX_HEADER_LENGTH + 5)
#define MAX_HELP_REQUEST_LENGTH     (HELP_BUFFER_LENGTH)

#define NEG_RESPONSE_SID            ((uint8)0x7F)
#define NEG_RESPONSEPENDING_CODE    ((uint8)0x78)
#define NEG_BUSYREPEATREQUEST_CODE  ((uint8)0x21)

/* ROE SID */
#define RESPONSE_ON_EVENT           ((uint8)0x86)

#define Diag_CheckStartID(id)  \
                (((id) == DIAG_SID_START_COMMUNICATION)|| ((id) == DIAG_SID_START_APPLICATION_MODE))


#define DIAG_MAXDATALENGTH_KLINE     (255 - 1) /* data length without SID */
#define DIAG_MAXDATALENGTH_OBD       (7 - 1)   /* data length without SID */


#define DIAG_RESP_PEND              ((uint8)0x1)
#define DIAG_NO_RESP_PEND           ((uint8)0x0)
#define DIAG_MUL_RESP               ((uint8)0x1<<1)
#define DIAG_NO_MUL_RESP            ((uint8)0x0)
#define DIAG_EVENT_RESP             ((uint8)0x1<<2)
#define DIAG_EVENT_RDPIRESPTYP2     ((uint8)0x1<<3)
#define DIAG_NO_EVENT_RESP          ((uint8)0x0)

/* system constant implementation for boot part of DIAG */
#define DIAGCOM_BOOT_ENABLE 1

/* for non-gateway applications */
enum Diag_SessStatus {
    DIAG_OK = 0,
    DIAG_ERR_RESPONSE_NOT_CALLED,
    DIAG_ERR_UNKWOWN_RESPONSE,
    DIAG_ERR_WAITHS_NOT_ALLOWED,
    DIAG_ERR_WAITPEND_NOT_ALLOWED,
    DIAG_ERR_WAITEND_RESPONSE,
    DIAG_ERR_REQUEST_NOT_EQUAL
};

/* Type of wait operation used for configuration. */
enum TypeOfWaitOperation
{
    DIAG_RESPONSE_PENDING     = 0,
    DIAG_BUSY_HANDSHAKE       = 1
};


/*
 **************************************************************************************************
 *    Type definitions
 **************************************************************************************************
 */
typedef enum
{
    DIAG_RB_ST_DISABLE_E=0,
    DIAG_RB_ST_INIT_E,
    DIAG_RB_ST_PROGRESS_E
}Diag_RingBufTxState_e;

typedef struct
{
    Diag_WakeUp_e (*Wakeup_p)(DataLinkVirtualTable**, bool* iniBufferRequest);
    void            (*ResetWakeup_p)(void);
} WakeupInterface;

typedef const struct
{
    /* array of wakeup functions (of all available media) */
    const WakeupInterface* const* dWakeups_cpcs;
    /* number of wakeup functions (of available media) */
    uint numWakeups;
    /* Maximum deviation (in ticks) between current idle time and estimated idle time
     * in next call, i.e. the threshold for timeout to be fired. */
    const uint32 timeoutThreshold_c;
    /* The configurable type of wait operation */
    const  uint8 waitType_c;
    /* The max length of data: constant definition */
    uint16 const maxDataLength_c;
    /* The max length of request: constant definition */
    uint16 const maxRequestLength_c;
    /* Pointer to main protocol buffer */
    uint8* buffer_complete;
    /* store given function to be executed when communication state  */
    /* changes from active to inactive                               */
    void (*communicationBroken_pf) (void);
    /* Save user data before jump (called with function Diag_SaveComState */
    void (*SaveComStateUserData_pf) (void);
     /* Restore user data after protocol start with ReInit                   */
    void (*RestoreComStateUserData_pf) (void);
    /* function called when new communication is detected */
    void (*NewCommunicationDetected_pf) (void);
    /* function called to check the environment           */
    DiagRI_StatusType_e   (*DiagAppl_RequestIndication_pf) (DiagCom_Msg_t *Msg_ps);
    /* Ring buffer wait time, after this time protocol get reset */
    const uint32 Diag_ringbufftimeout_u32;
    /* hook routine for application */
    void (*Diag_ringbuffercallback_pf) (void);
} Diag_conf_t;


typedef const struct
{
    uint8       ecuPhysAddress_u8;
    uint8       carbAddr_cu8;
    uint8       addressToCheck_cu8;
    uint8       segmentTableCnt_u8;
    uint8 const *routingTableHeader_cu8;
    uint8 const *routingAddrTable_cu8;
    void        (*eventCallback_p) (void);
    uint8       Diag_DefaultMedium_e;     /* Default medium to be started after reset */
} Diag_ProtConf_t;


/* status structure for transmission of messages with Ring Buffer  */
typedef struct
{
    /* pointer to ringbuffer */
    uint8   *dBuf1_pu8;
    /* message length */
    uint16  dMsgLength_u16;
    /*  buffer length */
    uint16  dBufLength_u16;
    /*  status flags */
    bool    stBuf1Status_b;
    bool    stBuf2Status_b;
} Diag_stRingBuf_t;

/* enum for tx buffer status for RingBuffer */
typedef enum
{
    DIAG_RB_NO_BUFFER_E=0,
    DIAG_RB_BUFFER1_E,
    DIAG_RB_BUFFER2_E
}Diag_RingBufInfo_e;

/* enum for tx states for RingBuffer */



/*
 **************************************************************************************************
 *    External data
 **************************************************************************************************
 */
__PRAGMA_USE__diagcom__10ms__RAM__x32__START

extern  Diag_ProtConf_t     *Diag_ProtConf_pcs;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END
/* status array for Ring buffer */

__PRAGMA_USE__diagcom__10ms__RAM__s32__START
extern Diag_stRingBuf_t     Diag_stRingBuf_s;
__PRAGMA_USE__diagcom__10ms__RAM__s32__END
/* Declartion for Diag MAX_REQUEST_LENGTH buffer size available */
__PRAGMA_USE__diagcom__10ms__RAM__x16__START
extern uint16               Diag_maxReqLen_u16;
__PRAGMA_USE__diagcom__10ms__RAM__x16__END
/* active p3min  */
__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern uint32               Diag_activeP3min_u32;

/* Special Pending P2max value  */
extern uint32               Diag_SpP2max_u32;

/* maximum possible data can be sent on ring buffer */
extern uint32          Diag_maxringbuffersize_u32;


__PRAGMA_USE__diagcom__10ms__RAM__x32__END

__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern Diag_Addr_t   const  *Diag_addresses_pcu8;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END

__PRAGMA_USE__diagcom__10ms__RAM__x8__START
extern uint8                Diag_AddrCnt_u8;
__PRAGMA_USE__diagcom__10ms__RAM__x8__END
/* Pointer to configuration structure */

__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern Diag_conf_t  *Diag_conf_pcs;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END
/* The public interface between Diag State Machine and Diag Distibutor. */
__PRAGMA_USE__diagcom__10ms__RAM__s32__START
extern DiagCom_Msg_t   Diag_Msg_s;
extern DiagCom_Msg_t   Diag_BckGndMsg_s;
__PRAGMA_USE__diagcom__10ms__RAM__s32__END

__PRAGMA_USE__diagcom__10ms__RAM__x8__START
/* Pending mode state machine. */
extern bool         Diag_stWaitPend_b;
/* Handshake mode (busy - repeat request) state machine. */
extern bool         Diag_stWaitHandshake_b;
/* Ring buffer wait state info to Dcan */
extern  bool         Diag_ringwait_b;
extern  bool         Diag_bufferflag_b;
__PRAGMA_USE__diagcom__10ms__RAM__x8__END
/*
 **************************************************************************************************
 *    Function prototypes
 **************************************************************************************************
 */


__PRAGMA_USE__CODE__diagcom__NormalSpeed__START

extern  void    Diag_NetIni(void);

/* Functions to check if the local ECU must react on this address             */
extern void     Diag_SetValidLocalAddr (
                   Diag_Addr_t const (*ValidAddresses_pcu8),
                   uint8 ValidAddrCnt_u8
                  );

extern bool     Diag_IsValidAddress (uint8 EcuAddress_u8, uint8 TesterAddress_u8);

/* extern bool Diag_IsLocalEcuPhysAddr (void); */

extern bool     Diag_CheckAddress (uint8 address);

extern void     Diag_SetConfig( Diag_conf_t *conf_pcs);

extern void     Diag_SetProtConfig(Diag_ProtConf_t *conf_pcs);

__PRAGMA_USE__CODE__diagcom__NormalSpeed__END


#define Diag_PendingModeActive() (Diag_stWaitPend_b)
#define Diag_HandshakeModeActive() (Diag_stWaitHandshake_b)

#endif /* _DIAG_SESS_H */

