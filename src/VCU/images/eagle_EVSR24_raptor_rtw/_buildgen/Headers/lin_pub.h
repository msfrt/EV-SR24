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
 * $Filename__:lin_pub.h$ 
 * 
 * $Author____:STGOLLNI$ 
 * 
 * $Function__:lin public header$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MNE2KOR$ 
 * $Date______:13.04.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:lin_pub$ 
 * $Variant___:1.9.0$ 
 * $Revision__:1$ 
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
 * 1.9.0; 1     13.04.2011 MNE2KOR
 *   Removal of misra warning
 * 
 * 1.9.0; 0     08.12.2009 HAH2KOR
 *   Platform
 *   
 *   Migrated from Clearcase
 *   
 *   B_LIN.9.0.0
 *   
 *   B_LIN_Conf.9.0.0
 * 
 * 1.7.0; 0     03.08.2009 MXA2SI
 *   Platform
 *   Migrated from Clearcase
 *   B_LIN.7.0.0
 *   B_LIN_Conf.7.0.0
 * 
 * 1.6.0; 0     20.07.2009 MXA2SI
 *   Migrated from clearcase B_LIN.6.0.0
 *   
 *   Platform
 * 
 * 1.5.0; 0     10.10.2008 STGOLLNI
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _LIN_PUB_H                                      /* protect multiple includes              */
#define _LIN_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      public header file of atomic component lin_std
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */

/* formula to calculate message time for one frame                              */
/* CPU_US_TO_TICKS(((((10 * nofBytes + 44)+1)*1.4) * 1000000) / baudrate)       */

#define LIN_MSGTIME(bdrate,nofBytes)   (CPU_US_TO_TICKS(((((14ul*(nofBytes))+63ul)*1000000ul)/(bdrate))))
#define LIN_HDRTIME(bdrate)            (CPU_US_TO_TICKS((49ul*1000000ul)/(bdrate)))

#define LIN_MSGTIMEPARAM(bdrate)        {                               \
                                            LIN_MSGTIME(bdrate,1ul),    \
                                            LIN_MSGTIME(bdrate,2ul),    \
                                            LIN_MSGTIME(bdrate,3ul),    \
                                            LIN_MSGTIME(bdrate,4ul),    \
                                            LIN_MSGTIME(bdrate,5ul),    \
                                            LIN_MSGTIME(bdrate,6ul),    \
                                            LIN_MSGTIME(bdrate,7ul),    \
                                            LIN_MSGTIME(bdrate,8ul)    \
                                        }


/* definition of operations supported by Lin_IOControl service */
typedef enum
{
    LIN_READERROR,
    LIN_CLEARERROR,
    LIN_READBUSSTATE,
    LIN_READPROTSTATE,
    LIN_READACTIVESCHED
} Lin_IOCtrlOp_t;

/* definition of frame types -                                          */
/* master frames only, distinction between transmit and recieve frames  */
typedef enum
{
    LIN_MASTER_TRANSMIT,
    LIN_MASTER_RECEIVE
} Lin_FrameType_t;

/* definition of LIN Slave types -                                          */
typedef enum
{
    LIN_1_2,
    LIN_1_3,
    LIN_2_0
} Lin_SlaveType_t;

/* definition of LIN Signal types -                                          */
typedef enum
{
    LIN_SCALAR  ,
    LIN_BYTEARRAY

} Lin_SignalType_t;



/* lenght definition of LIN frame */
typedef enum
{
    LIN_1BYTE,
    LIN_2BYTE,
    LIN_3BYTE,
    LIN_4BYTE,
    LIN_5BYTE,
    LIN_6BYTE,
    LIN_7BYTE,
    LIN_8BYTE
} Lin_FrameSize_t;

/* definition of different scheduler switch modes */
typedef enum
{
    LIN_SCHEDTAB_IDLE,
    LIN_SCHEDTAB_PERMANENT,
    LIN_SCHEDTAB_ONCE,
    LIN_SCHEDTAB_RESUME,
    LIN_SCHEDTAB_TERMINATE_AFTER_NEXT_TX
} Lin_SchedTabSwitchMode_t;

typedef enum
{
    LIN_INIT,
    LIN_WAIT_FOR_WAKEUP,
    LIN_SCHED_ACTIVATE,
    LIN_SCHED_ACTIVE
} Lin_State_t;

typedef enum
{
    LINBUS_NORMAL,
    LINBUS_SLEEP,
    LINBUS_WAKEUP_IN_PROGRESS,
    LINBUS_WAKEUP_ERROR
} Lin_BusState_t;

/* LIN interface states */
typedef enum
{
    LINPROT_WAITSTATE,
    LINPROT_HEADERSTATE,
    LINPROT_RESPONSESTATE,
    LINPROT_ERRORSTATE
} Lin_ProtState;

typedef enum
{
    LIN_NO_ERROR,
    LIN_FRAMING_ERROR,
    LIN_PARITY_ERROR,
    LIN_OVERRUN_ERROR,
    LIN_HEADER_TIMEOUT_ERROR,
    LIN_MESSAGE_TIMEOUT_ERROR,
    LIN_CHECKSUM_ERROR,
    LIN_LINE_ERROR
}Lin_ErrorType_t;


typedef enum
{
    LIN_FRAMEIDLE=0x00,
    LIN_FRAMESYNC=0x01,
    LIN_FRAMEHEADER=0x02,
    LIN_FRAMETRANSMIT=0x03,
    LIN_FRAMETRANSMITTED=0x04,
    LIN_FRAMERECEIVE=0x05,
    LIN_FRAMERECEIVED=0x06,
    LIN_FRAMEWAKEUP=0x07,
    LIN_FRAMEERROR=0x80
} Lin_FrameState_t;

/*Backword compatibility*/
#define LINBUS_WAKEUPSENT   LINBUS_NORMAL
#define LIN_DEFAULT_ERROR   LIN_LINE_ERROR

/* type definition of pointer to LIN callback function */
typedef void (* Lin_Callback_t)(uint8 numId, uint8 *data_pa);

/* type definition of pointer to LIN wake up error callback function */
typedef void (*Lin_wakeupCallback_t )(uint8 node_id);

/* signal configuration structure */
typedef const struct
{
    uint8               type_u8;            /* signal type (scalar or byte array) */
    uint8               size_u8;            /* signal size (in bits)              */
    uint8               txFrame_u8;         /* frame which transmits this signal  */
    uint8               offset_u8;          /* offset of the signal in the frame  */
}Lin_SignalCfg_t;

/* slave node configuration structure */
typedef const struct
{
    uint8               linProtocol_u8;     /* lin protocol version of the slave */
    uint8               responseError_u8;   /* signal carrying the response_error bit */
} Lin_SlaveNodeCfg_t;



/* frame specific configuration structure */
typedef const struct
{
    uint8                   id_u8;                  /* frame id */
    uint8                   type_u8;                /* If the frame is RX or TX*/
    uint8                   size_u8;                /* frame size */
    uint8                   transmitter_u8;         /* name of the node that publishes this frame */
    uint8                   receiver_u8;            /* name of the node that receives this frame  */
    uint8                   *frameBuffer_pa;        /* pointer to framebuffer */
} Lin_FrameCfg_t;



/* definition of scheduler table entry */
typedef const struct
{
    uint8           hndFrame_u8;         /* logical handle of frame                */
    uint8           delay_u8;            /* delay in ticks to next scheduling event */
} Lin_SchedTabEntry_t;


typedef struct
{
    uint8                frameBuffer_au8[12];       /* frame buffer to latch data for rx and tx   */
    Lin_State_t          currentState_e;            /* current state of LIN driver                */
    Lin_SchedTabEntry_t  *currentSchedTab_ps;       /* pointer to base address of current tab     */
    Lin_SchedTabEntry_t  *savedSchedTab_ps;         /* pointer to base address of previous tab    */
    uint16               errorCode_u16;             /* latest errorcode HIGH byte : Frame associated
                                                       with error , LOW byte  : Error type        */
    uint16               status_u16;                /* 16 bit status information Lin_GetStatus
                                                       function                                   */
    uint8                currentSchedTabEntry_u8;   /* current entry in tab                       */
    uint8                savedSchedTabEntry_u8;     /* saved entry in tab                         */
    uint8                schedTabMode_u8;           /* true if schedtab has to be scheduled once  */
    uint8                nextSchedEventCtr_u8;      /* next scheduling event counter              */
    uint8                currentSchedCtr_u8;        /* current value of scheduler counter         */
    uint8                currentFrame_u8;           /* handle of the current frame                */
    uint8                currentFrameSize_u8;       /* size of current frame                      */
    uint8                frameByteCount_u8;         /* byte to be transmitted                     */
    uint8                frameState_u8;             /* current state of frame transfer            */
    uint8                rxByte_u8;                 /* previously received byte                   */
    uint8                WakeupState_u8;            /* current state of wake up frame             */
    uint32               maxHeaderTime_u32;         /* start time of frame transmission           */
    uint32               maxMsgTime_u32;            /* start time of frame transmission           */

} Lin_NodeRamData_t;


/* node specific configuration structure */
typedef const struct
{
    Lin_NodeRamData_t       *nodeRamData_ps;        /* pointer to the LIN RAM data structure      */
    Lin_FrameCfg_t          *frameTab_pa;           /* pointer to array containing frame def.     */
    Lin_SlaveNodeCfg_t      *slaveNodeConfig_pa;    /* pointer to array containing slave
                                                       definition */
    Lin_SignalCfg_t         *signalConfig_pa;       /* pointer to array containing signal
                                                       definition */
    Lin_SchedTabEntry_t     *defaultSchedTab_pcs;   /* pointer to schedTab to be activated        */
    uint32                  maxMsgTime_u32[8];      /* timeout data for frames of length 1 to 8   */
    uint32                  maxHeaderTime_u32;      /* timeout for transmission of header frame   */
    const Uart_Callback_t   callback_cs;            /* function pointer list of uart callbacks    */
    const Uart_t*           uart_pcs;               /* line to be requested                       */
    const Uart_User_t       uartUser_cs;            /* specification of user                      */
    uint16                  baudrate_u16;           /* baudrate to be used on network             */
    const uint8             *masterErrCtrInc_pcu8;  /* master error counter increment value       */
    const uint8             *slaveErrCtrInc_pcu8;   /* slave error counter increment value        */
    const uint8             *masterErrCtrThrh_pcu8; /* pointer to master error counter threashold */
    const uint8             *slaveErrCtrThrh_pcu8;  /* pointer to master error counter threashold */
    uint8                   *errorCtr_pu8;          /* pointer to error counter array             */
    Lin_wakeupCallback_t    wakeuperrorcallback_pf; /* user wake up error callback function invoked after wake up error*/
} Lin_NodeCfg_t;


/* general configuration structure */
typedef const struct
{
    uint8               numNodes_u8;        /* number of nodes serviced by LIN driver            */
    Lin_Callback_t      rxCallback_pf;      /* user callback invoked after reception of frame    */
    Lin_Callback_t      txCallback_pf;      /* user callback invoked after transmission of frame */
    Lin_Callback_t      errorCallback_pf;   /* user callback invoked if error limit is exceeded  */
    Lin_NodeCfg_t       *nodeCfg_ps;        /* reference to the node config array                */
} Lin_Config_t;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__com__10ms__constant__s32__START
extern Lin_Config_t  Lin_DefaultConfig_cs;
extern Lin_SchedTabEntry_t  Lin_NullSchedTab[1];

__PRAGMA_USE__com__10ms__constant__s32__END






__PRAGMA_USE__CODE__lin__NormalSpeed__START


/* cyclic process */
extern void    Lin_Co_Proc     (void);

/* scheduler control */

extern Lin_SchedTabSwitchMode_t Lin_GetstMode (uint8 numNodeId_u8);

extern void    Lin_SchedSet    (uint8 numNodeId_u8, Lin_SchedTabEntry_t *schedTab_pcs,
                                uint8 numEntryPoint_u8, Lin_SchedTabSwitchMode_t mode_e);
extern uint8   Lin_SchedTick   (uint8 numNodeId_u8);
extern bool    Lin_SchedEvent  (uint8 numNodeId_u8, uint8 numFrameId_u8, uint8 *data_pa);

/* IO control */
extern uint16  Lin_IOControl   (uint8 numNodeId_u8, Lin_IOCtrlOp_t opId_e, const void *cfg_pcs);

/* status read function */
extern uint16  Lin_ReadStatus(uint8 numNodeId_u8);

/* scalar siganl read functions */
extern bool  Lin_BoolRead(uint8 hndSignal_u8);
extern uint8 Lin_Uint8Read(uint8 hndSignal_u8);
extern uint16 Lin_Uint16Read(uint8 hndSignal_u8);

/* scalar siganl write functions */
extern void Lin_BoolWrite(uint8 hndSignal_u8, bool signalVal_b);
extern void Lin_Uint8Write(uint8 hndSignal_u8, uint8 signalVal_u8);
extern void Lin_Uint16Write(uint8 hndSignal_u8, uint16 signalVal_u16);

/* byte array siganl read functions */
extern void Lin_BytesRead(uint8 hndSignal_u8, uint8 startByte_u8, uint8 numBytes_u8,
                            uint8* const data_pa);

/* byte array siganl write functions */
extern void Lin_BytesWrite(uint8 hndSignal_u8, uint8 startByte_u8, uint8 numBytes_u8,
                            const uint8* const data_pa);



/* initialisation functions */

extern void    Lin_Co_Proc_Ini        (void);
extern void    Lin_SetConfig   (Lin_Config_t *config_pcs);
extern bool    Lin_NodeInit    (uint8 numNodeId_u8);
/* connect  disconnect functions */
extern bool    Lin_Connect     (uint8 numNodeId_u8);
extern bool    Lin_Disconnect  (uint8 numNodeId_u8);
/* sleep function */
extern void  Lin_GotoSleep(uint8 numNodeId_u8);

/* wakeup function */
extern void  Lin_Wakeup(uint8 numNodeId_u8);

__PRAGMA_USE__CODE__lin__NormalSpeed__END
/* _LIN_PUB_H                                                                                     */
#endif
