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
 * $Filename__:lin_interface.h$ 
 * 
 * $Author____:BHW7COB$ 
 * 
 * $Function__:Initial import from Nestor 
 *                  Object in Nestor : 
 *                  Domain :MX17
 *                  Class :CONFIG
 *                  Object name :LIN
 *                  Variant :B_LIN.9.1.0_DG170C.000
 *                  Revision :0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:BHW7COB$ 
 * $Date______:02.10.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:lin_interface$ 
 * $Variant___:15.0.0$ 
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
 * 15.0.0; 0     02.10.2011 BHW7COB
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :lin_interface
 *        Variant :D170C.000
 *        Revision :5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef  LININTERFACE_H
#define  LININTERFACE_H

#include <std_type.h>

#define __PRAGMA_USE__com__10ms__constant__s32__START
#define __PRAGMA_USE__com__10ms__constant__s32__END
#define __PRAGMA_USE__com__10ms__RAM__arr8__START
#define __PRAGMA_USE__com__10ms__RAM__arr8__END
#define __PRAGMA_USE__com__10ms__InitRAM__arr8__START
#define __PRAGMA_USE__com__10ms__InitRAM__arr8__END
#define __PRAGMA_USE__com__10ms__constant__x8__START
#define __PRAGMA_USE__com__10ms__constant__x8__END
#define __PRAGMA_USE__CODE__lin__NormalSpeed__START
#define __PRAGMA_USE__CODE__lin__NormalSpeed__END
#define __PRAGMA_USE__com__10ms__RAM__s32__START
#define __PRAGMA_USE__com__10ms__RAM__s32__END
#define __PRAGMA_USE__com__10ms__RAM__arr8__START
#define __PRAGMA_USE__com__10ms__RAM__arr8__END

/*Backword compatibility*/
#define LINBUS_WAKEUPSENT   LINBUS_NORMAL
#define LIN_DEFAULT_ERROR   LIN_LINE_ERROR


/* definition of scheduler table entry */
typedef const struct
{
    uint8           hndFrame_u8;         /* logical handle of frame                */
    uint8           delay_u8;            /* delay in ticks to next scheduling event */
} Lin_SchedTabEntry_t;

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


/* definition of LIN Signal types -                                          */
typedef enum
{
    LIN_SCALAR  ,
    LIN_BYTEARRAY

} Lin_SignalType_t;

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


/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 CLC;                 // [0xF0000A00] : ASC0 Clock Control Register
    volatile uint32 PISEL;               // [0xF0000A04] : ASC0 Peripheral Input Select Register
    volatile uint32 ID;                  // [0xF0000A08] : Module Identification Register
    volatile uint32 RESERVED0[1];        // [0xF0000A0C...0xF0000A0F] : reserved space
    volatile uint32 CON;                 // [0xF0000A10] : Control Register
    volatile uint32 BG;                  // [0xF0000A14] : Baud Rate Timer/Reload Register
    volatile uint32 FDV;                 // [0xF0000A18] : Fractional Divider Register
    volatile uint32 RESERVED1[1];        // [0xF0000A1C...0xF0000A1F] : reserved space
    volatile uint32 TBUF;                // [0xF0000A20] : Transmit Buffer Register
    volatile uint32 RBUF;                // [0xF0000A24] : Receive Buffer Register
    volatile uint32 RESERVED2[10];       // [0xF0000A28...0xF0000A4F] : reserved space
    volatile uint32 WHBCON;              // [0xF0000A50] : Write Hardware Bits Control Register
    volatile uint32 RESERVED3[39];       // [0xF0000A54...0xF0000AEF] : reserved space
    volatile uint32 TSRC;                // [0xF0000AF0] : Transmit Interrupt Service Request Control Register
    volatile uint32 RSRC;                // [0xF0000AF4] : Receive Interrupt Service Request Control Register
    volatile uint32 ESRC;                // [0xF0000AF8] : Error Interrupt Service Request Control Register
    volatile uint32 TBSRC;               // [0xF0000AFC] : Transmit Buffer Interrupt Service Request Control Register
} ASC_RegMap_t;

typedef ASC_RegMap_t UART_RegMap_t;                 // Type which represents the UART register architecture.



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

typedef struct
{
    void            (*TxCallback_pfn)(void);         // Function which is called after transmission.
    void            (*RxCallback_pfn)(void);         // Function which is called after reception.
    void            (*DelayHighCallback_pfn)(void);  // Function is called after idle delay high.
    void            (*ErrorCallback_pfn)(void);      // Function which is called after reception error.
} Uart_Callback_t;

 
typedef enum
{
    LIN_SCHEDTAB_IDLE,
    LIN_SCHEDTAB_PERMANENT,
    LIN_SCHEDTAB_ONCE,
    LIN_SCHEDTAB_RESUME,
    LIN_SCHEDTAB_TERMINATE_AFTER_NEXT_TX
} Lin_SchedTabSwitchMode_t;
/* definition of operations supported by Lin_IOControl service */
typedef enum
{
    LIN_READERROR,
    LIN_CLEARERROR,
    LIN_READBUSSTATE,
    LIN_READPROTSTATE,
    LIN_READACTIVESCHED
} Lin_IOCtrlOp_t;

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

/* signal configuration structure */
typedef const struct
{
    uint8               type_u8;            /* signal type (scalar or byte array) */
    uint8               size_u8;            /* signal size (in bits)              */
    uint8               txFrame_u8;         /* frame which transmits this signal  */
    uint8               offset_u8;          /* offset of the signal in the frame  */
}Lin_SignalCfg_t;



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

 typedef struct
{
    uint8           numUserId_u8;                    // Identifier of the uart user.
    bool            stUserReplaceable_b;             // TRUE -> another protocol can terminate current protocol.
} Uart_User_t;


/* slave node configuration structure */
typedef const struct
{
    uint8               linProtocol_u8;     /* lin protocol version of the slave */
    uint8               responseError_u8;   /* signal carrying the response_error bit */
} Lin_SlaveNodeCfg_t;


typedef struct Uart_DelayLow_st
{
    uint32          tiMinLow_u32;                    // Min. delay low time of current time window.
    uint32          tiMaxLow_u32;                    // Max. delay low time of current time window.
    void            (*DelaylowCallback_pfn)(uint32); // Function is called after delay low.
    const struct    Uart_DelayLow_st **Next_ppcs;    // Pointer to pointer to next delay low struct.
} Uart_DelayLow_t;

typedef struct
{
    uint16          ctRx_u16;                        // Number of currently received bytes.
    uint16          ctTx_u16;                        // Number of currently transmitted bytes.
    uint8           stUart_u8;                       // Uart status (receive, idle, transmitt).
} Uart_st_t;

 typedef struct
{
    Uart_DelayLow_t *FirstDelayLow_ps;              // Pointer to the first delay low structure.
    uint8           *TxBuf_pu8;                     // Pointer to the transmission buffer.
    uint8           *RxBuf_pu8;                     // Pointer to the reception buffer.
    void            (*KickUser_p)(void);            // Function which is called if uart user is terminated
                                                    //  by another user.
    Uart_Callback_t Callback_s;                     // Struct with the callback function pointers.
    uint32          tiDelayBegin_u32;               // Time stamp of the last transition from high to low.
    uint32          tiByte_u32;                     // Duration time of the transmission.
    uint32          tiDelayHigh_u32;                // Delay high time.
    uint32          tiRx_u32;                       // Time stamp of the last received byte.
    uint32          tiTx_u32;                       // Time stamp of the last transmitted byte.
    bit32           regStatus_b32;                  // Mirror of the status register.
    bit32           regControl_b32;                 // Initial value of the control register.
    bit16           regBaud_b16;                    // Mirror of the baudrate register (BG, has 13bits).
    uint16          numTxLen_u16;                   // Number of bytes to transmit.
    uint16          numRxLen_u16;                   // Number of bytes to receive.
    uint16          regRx_u16;                      // Mirror of the received Byte.
    uint16          regTx_u16;                      // Mirror of the transmitted Byte.
    Uart_st_t       stUart_s;                       // Status of the uart (and internal queue status).
    Uart_User_t     stUser_s;                       // Informations about the current user of the uart.
    bool            stElem1Byte_b;                  // Element size = 8bit?
    bool            stUseErrCallback_b;             // Error-Callback
    bool            stParity_b;                     // Parity enabled;
    uint8           numDataBits_u8;                 // data bits;
    uint8           numStopBits_u8;                 // stop bits;
    uint32          frameBitMask_u32;               // bit mask for Rx/Tx
} Uart_Ram_t;

typedef struct
{
    UART_RegMap_t   *Register_ps;                   // Pointer to the UART HW registers.
    Uart_Ram_t      *Ram_ps;                        // Pointer to the corresponding RAM structure.
    uint32 (*const Uart_SetDelayHigh_cpfn)
    	(Uart_Ram_t *Ram_ps, uint32 tiDelayHigh_u32, bool stNew_b);  // Delay High Callback function
    const uint32    tiDelayLowProc_cu32;            // Time slice in which Uart_DelayLowProc is called.
    bit32           stInitConf_b32;                 // Configuration Variable UART Initialization.
    uint16          numPort_u16;                    // Port used for Rx.
    uint16          numPin_u16;                     // Pin used for Rx.
} Uart_t;

/* type definition of pointer to LIN wake up error callback function */
typedef void (*Lin_wakeupCallback_t )(uint8 node_id);


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

extern bool    Lin_Connect     (uint8 numNodeId_u8);
extern bool    Lin_NodeInit    (uint8 numNodeId_u8); 
extern void  Lin_Wakeup(uint8 numNodeId_u8);
extern void  Lin_GotoSleep(uint8 numNodeId_u8);
extern bool    Lin_Disconnect  (uint8 numNodeId_u8);
extern Lin_SchedTabSwitchMode_t Lin_GetstMode (uint8 numNodeId_u8);

extern void    Lin_SchedSet    (uint8 numNodeId_u8, Lin_SchedTabEntry_t *schedTab_pcs,
                                uint8 numEntryPoint_u8, Lin_SchedTabSwitchMode_t mode_e);
extern uint8   Lin_SchedTick   (uint8 numNodeId_u8);
extern bool    Lin_SchedEvent  (uint8 numNodeId_u8, uint8 numFrameId_u8, uint8 *data_pa);

/* IO control */
extern uint16  Lin_IOControl   (uint8 numNodeId_u8, Lin_IOCtrlOp_t opId_e, void *cfg_pcs);

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

#endif


