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
 * $Filename__:isotp_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:STGOLLNI$ 
 * $Date______:14.10.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:isotp_pub$ 
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
 * 1.6.0; 0     14.10.2008 STGOLLNI
 *   Component Toolbox-Import
 * 
 * 1.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: isotp_pub.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _ISOTP_PUB_H
#define _ISOTP_PUB_H


/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */


#define ISOTP_DONTCARE           0xFF

#define ISOTP_TPTYP_WFC          0x01       /* segmented msg with flow control   */
#define ISOTP_TPTYP_NFC          0x02       /* segm. msg without flow control    */



/*
 ***************************************************************************************************
 *    Type definitions
 ***************************************************************************************************
 */


typedef enum
{
    ISOTP_PHYS_E,
    ISOTP_FUNC_E,
    ISOTP_OBD_FUNC_E

} IsoTp_RequestType;


/* function pointer types */
typedef void                   ( IsoTp_rxCallback_t )( void );
typedef IsoTp_rxCallback_t*      IsoTp_rxCallback_p;

typedef void                   ( IsoTp_txCallback_t )( void);
typedef IsoTp_txCallback_t*      IsoTp_txCallback_p;

typedef void                   ( IsoTp_ErrorCallback_t )( uint8 , Tp_StatusType );
typedef IsoTp_ErrorCallback_t*   IsoTp_ErrorCallback_p;


/* type of timing parameter structure */
typedef const struct
{
    uint32      toAsAr_u32;         /* timeout for indication / confirmation             */
    uint32      toBsmax_u32;        /* max. time between FF/CF/FC(WTS) and FC(CTS/WTS)   */
    uint32      toBrmax_u32;        /* time to send FC after FF/CF/FC(WTS)               */
    uint32      toCsmax_u32;        /* time to send CF after FC(CTS)                     */
    uint32      toCrmax_u32;        /* max. time between FC(CTS) and CF                  */
    uint8       BSmax_u8;           /* nof CF frames before sending of FC                */
    uint8       STmin_u8;           /* minimum inter-frame time                          */
    uint8       FCwts_u8;           /* max nof FC(WTS)                                   */
    uint8       msgType_u8;         /* With Flow control or not                          */
} IsoTp_timingCfg_t;


/****************************************
 * type of configuration data structure
 ****************************************/

/* Input vector table */
typedef const struct
{
    uint16      rxLMsgNo_u16;        /* CAN handle for reception                              */
    uint16      txLMsgNo_u16;        /* associated CAN handle for transmission                */
    uint8       mappedTpChan_u8;     /* TP handle for above CAN handles                       */
    uint8       requestType_u8;      /* type of Request PHSY or FUNC                          */
    uint8       useRxExtAddr_u8;     /* Use Extended address for Recieve Message              */
    uint8       extRxAddrVal_u8;     /* extended address value for the receiving CAN handle   */
    uint8       useTxExtAddr_u8;     /* Use Extended address for Transmit Message             */
    uint8       dlc8send_u8;         /* DLC 8 sending flag                                    */
    uint8       dlc8receive_u8;      /* DLC 8 receiving flag                                  */
    uint8       fillerByteValue_u8;  /* Padding value                                         */
} IsoTp_inputVector_t;

/* constant data of TP channel */
typedef const struct
{
    IsoTp_timingCfg_t*      timingData_ps;
    IsoTp_rxCallback_p      IsoTp_rxCallbackPtr_p;       /* Common RX callback pointer */
    IsoTp_txCallback_p      IsoTp_txCallbackPtr_p;       /* Common TX callback pointer */
    IsoTp_ErrorCallback_p   IsoTp_ErrorCallbackPtr_p;    /* Common ERROR callback pointer */
} IsoTp_cfgTabElm_t;



/* type definitions of RAM data
 *********************************/

/* control  RAM structure */
typedef struct
{
    uint32         lastReqRxTime_u32;  /* Time when last Req. received     */
    uint32         toTimer_u32;        /* timeout timer                    */
    uint32         SetTimer_u32;       /* store before set timer           */
    uint8*         buffer_pu8;         /* pointer to buffer                */
    uint16         bufferLen_u16;      /* buffer length                    */
    uint16         bufferIdx_u16;      /* buffer index                     */
    uint16         dataToRxTx_u16;     /* nof data to receive / transmit   */
    uint16         datasent_u16;       /* no of data bytes already sent    */
    uint8          bufferState_u8;     /* state of buffer                  */
    uint8          tpState_u8;         /* state of transport layer         */
    uint8          SetTpState_u8;      /* store before set state           */
    uint8          tpRxTxState_u8;     /* RX/TX state of transport layer   */
    uint8          srcAddr_u8;         /* TA of source node                */
    uint8          destAddr_u8;        /* TA of destination node           */
    uint8          seqNo_u8;           /* sequence number                  */
    uint8          BSmax_u8;           /* BSmax counter                    */
    uint8          STmin_u8;           /* STmin counter                    */
    uint8          FCwts_u8;           /* counter for FC(WTS)              */
    uint8          indexInputVect_u8;  /* Index to the input vector table  */
    bool           EndofTx_b;          /* flag for End of Transmission     */
    uint8          errorCode_e;        /* last error code                  */
} IsoTp_msgCtrlTabElm_t;

/* Buffer to hold the remaining data to be transmitted in the next CF after */
/*   the buffer is empty. This is used for the concept of Ring buffer       */
typedef struct
{
    uint8 helpBuffer_u8[7];
    uint8 numbytes_u8;
} IsoTp_tmpBuffer_t;


/* global configuration data structure */
typedef const  struct
{
    uint8                  IsoTp_sizeofInputVec_u8;  /* Size of the input vector TAB          */
    uint8                  IsoTp_noofTpchannels;     /* No. of TP handles                     */
    uint16                 IsoTp_maxBufferSize_u16;  /* Buffer size                           */
    IsoTp_inputVector_t*   IsoTp_inputVectorTab_p;   /* Pointer to Input Vector Table         */
    IsoTp_cfgTabElm_t*     IsoTp_cfgTab_p;           /* Pointer to the Configuraton structure */
    IsoTp_msgCtrlTabElm_t* IsoTp_msgCtrlTab_p;       /* Pointer to RAM struct                 */
} IsoTp_constParam_t;


/*
 ***************************************************************************************************
 *    External data
 ***************************************************************************************************
 */

__PRAGMA_USE__tp__1_5ms__constant__s32__START
extern  IsoTp_constParam_t          IsoTp_ASWconstParam_cs ;
__PRAGMA_USE__tp__1_5ms__constant__s32__END

__PRAGMA_USE__tp__1_5ms__constant__s32__START
extern  IsoTp_timingCfg_t           IsoTp_timingCfg_s[] ;
extern  IsoTp_inputVector_t         IsoTp_inputVectorTab_cs[];
extern  IsoTp_cfgTabElm_t           IsoTp_cfgTab_cs[] ;
__PRAGMA_USE__tp__1_5ms__constant__s32__END

__PRAGMA_USE__tp__1_5ms__RAM__s32__START
extern  IsoTp_msgCtrlTabElm_t       IsoTp_msgCtrlTab_s [] ;
__PRAGMA_USE__tp__1_5ms__RAM__s32__END

/***********************   Extern Functions  ******************************************************/
__PRAGMA_USE__CODE__tp__NormalSpeed__START
extern void            IsoTp_InitLayer           ( IsoTp_constParam_t* constParam_p );
__PRAGMA_USE__CODE__tp__NormalSpeed__END

__PRAGMA_USE__CODE__tp__HighSpeed__START
extern void            IsoTp_Co_Proc             (void);
__PRAGMA_USE__CODE__tp__HighSpeed__END

__PRAGMA_USE__CODE__tp__NormalSpeed__START
extern Tp_StatusType   IsoTp_TxMsg               (uint8 numLMsgNo_u8, uint16 numBytes);
__PRAGMA_USE__CODE__tp__NormalSpeed__END

__PRAGMA_USE__CODE__tp__NormalSpeed__START
extern void            IsoTp_SetTxState          (uint8 numLMsgNo_u8);
extern uint32          IsoTp_GetLastReqRxTime    (uint8 numLMsgNo_u8);
extern uint8           IsoTp_GetMsgState         (uint8 numLMsgNo_u8, uint8 mask);
extern uint8           IsoTp_GetDestAddr         (uint8 numLMsgNo_u8);
extern uint8           IsoTp_GetSrcAddr          (uint8 numLMsgNo_u8);
extern uint16          IsoTp_GetMsgLen           (uint8 numLMsgNo_u8);
__PRAGMA_USE__CODE__tp__NormalSpeed__END

__PRAGMA_USE__CODE__tp__HighSpeed__START
extern void            IsoTp_AllocateMsgBuffer   (uint8 numLMsgNo_u8, uint8 reserveCode);
__PRAGMA_USE__CODE__tp__HighSpeed__END

__PRAGMA_USE__CODE__tp__NormalSpeed__START
extern uint8*          IsoTp_GetRxBufPtr         (uint8 numLMsgNo_u8);
extern uint8           IsoTp_GetDisconnectState  (uint8 numLMsgNo_u8);
extern void            IsoTp_ConfMultipleResp    (uint8 numLMsgNo_u8, bool multipleState_b );
extern Tp_StatusType   IsoTp_CopySwitchBuffer    (uint8 numLTpMsgNo_u8, uint8* newBuffer,     \
                                                  uint16 newLen);
extern Tp_StatusType   IsoTp_RegisterMsg         (uint8   numLMsgNo_u8,
                                                  uint8*  buffer_pu8,
                                                  uint16  len_u16,
                                                  uint8   srcAddr_u8,
                                                  uint8   destAddr_u8);
extern void            IsoTp_SetIdleState(uint8 numLMsgNo_u8);
__PRAGMA_USE__CODE__tp__NormalSpeed__END


#endif
