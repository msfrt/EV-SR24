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
 * $Filename__:can_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAH5KOR$
 * $Date______:04.04.2015$
 * $Class_____:SWHDR$
 * $Name______:can_pub$
 * $Variant___:NEWEAGLE$
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
 * NEWEAGLE; 0     04.04.2015 DAH5KOR
 *   CAN driver mod for New Eagle SW Sharing project
 * 
 * 1.21.0; 0     11.03.2014 BUR6KOR
 *   Providing a new interface Can_IsNodeConfigured() which checks if the node 
 *   is configured for CAN communication
 * 
 * 1.20.0; 0     14.10.2013 BUR6KOR
 *   A new interface is provided which will append SAE J1850 8bit CRC for the 
 *   
 *     received message if the received DLC is equal to 8 and application buffer
 *    is 
 *   
 *     alligned to 16bit boundary.
 *   
 *     Projects which want to use this new interface should allocate buffer of 
 *   size 
 *   
 *     DLC+1.
 * 
 * 1.17.0; 0     25.01.2012 GPG1KOR
 *   Single hex for series and development ECU - VM-I Requirements are 
 *   implemented onto PLS MX17 platform with configuration tag.
 * 
 * 1.15.0; 1     02.06.2011 GPG1KOR
 *     New CAN Node Disable functionality is introduced, this can be used 
 *   instead of 
 *     CAN Stop Node function.
 * 
 * 1.15.0; 0     20.05.2011 GPG1KOR
 *   New API Implementation to Disable the CAN Node.
 * 
 * 1.14.0; 3     22.03.2011 GPG1KOR
 *   Changes done to support 3 Nodes and 64 buffers of TC1724.
 * 
 * 1.14.0; 2     03.02.2011 GPG1KOR
 *   Changes after review.
 * 
 * 1.14.0; 1     31.01.2011 GPG1KOR
 *   Implementation of a new function that returns the Error counter (transmit 
 *   and receive) value of requested node.
 *   uint16 Can_GetNodeErrCntVlv (uint8 node_u8)
 * 
 * 1.14.0; 0     12.01.2011 GPG1KOR
 *   Improvement of Can_init bugfix to flush pending interrupts using 
 *   Cpu_ClrIntReq.
 *   Counter of buffers in use - Implementation of a function that returns the 
 *   number of initialised HW buffers at runtime.
 *   uint8 Can_GetNumHwBuffersUsed(void);
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _CAN_PUB_H
#define _CAN_PUB_H

#ifdef CAN_USE
/**
 ***************************************************************************************************
 * \moduledescription
 * CAN module - public interface header
 *
 * \scope           [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#ifdef TC_1724
   #if (MACHINE_TYPE == TC_1724)

      #define CAN_A                     0        /**< Node A on MultiCAN */
      #define CAN_B                     1        /**< Node B on MultiCAN */
      #define CAN_C                     2        /**< Node C on MultiCAN */

      #define CAN_NUM_MAXBUFFERS        64       /**< Maximum Buffers available */
      #define CAN_NUM_MAXNODES          3        /**< Maximum Nodes available */

   #endif
#endif
 
#ifdef TC_1766
   #if (MACHINE_TYPE == TC_1766)

      #define CAN_A                     0        /**< Node A on MultiCAN */
      #define CAN_B                     1        /**< Node B on MultiCAN */

      #define CAN_NUM_MAXBUFFERS        64       /**< Maximum Buffers available */
      #define CAN_NUM_MAXNODES          2        /**< Maximum Nodes available */

   #endif
#endif

#ifdef TC_1767
   #if (MACHINE_TYPE == TC_1767)

      #define CAN_A                     0        /**< Node A on MultiCAN */
      #define CAN_B                     1        /**< Node B on MultiCAN */

      #define CAN_NUM_MAXBUFFERS        64       /**< Maximum Buffers available */
      #define CAN_NUM_MAXNODES          2        /**< Maximum Nodes available */

   #endif
#endif
 
#ifdef TC_1782
   #if (MACHINE_TYPE == TC_1782)

      #define CAN_A                     0        /**< Node A on MultiCAN */
      #define CAN_B                     1        /**< Node B on MultiCAN */
      #define CAN_C                     2        /**< Node C on MultiCAN */

      #define CAN_NUM_MAXBUFFERS        128      /**< Maximum Buffers available */

      #define CAN_NUM_MAXNODES          3        /**< Maximum Nodes available */
   #endif
#endif

#ifdef TC_1796
   #if (MACHINE_SUBTYPE == TC_1796) 

      #define CAN_A                     0        /**< Node A on MultiCAN */
      #define CAN_B                     1        /**< Node B on MultiCAN */
      #define CAN_C                     2        /**< Node C on MultiCAN */
      #define CAN_D                     3        /**< Node D on MultiCAN */

      #define CAN_NUM_MAXBUFFERS        128      /**< Maximum Buffers available */

      #define CAN_NUM_MAXNODES          4        /**< Maximum Nodes available */
   #endif
#endif

#ifdef TC_1792
   #if (MACHINE_SUBTYPE == TC_1792)

      #define CAN_A                     0        /**< Node A on MultiCAN */
      #define CAN_B                     1        /**< Node B on MultiCAN */
      #define CAN_D                     3        /**< Node D on MultiCAN */

      #define CAN_NUM_MAXBUFFERS        96       /**< Maximum Buffers available */

      #define CAN_NUM_MAXNODES          4        /**< Maximum Nodes available */

   #endif
#endif

#ifdef TC_1797
   #if (MACHINE_SUBTYPE == TC_1797)

      #define CAN_A                     0        /**< Node A on MultiCAN */
      #define CAN_B                     1        /**< Node B on MultiCAN */
      #define CAN_C                     2        /**< Node C on MultiCAN */
      #define CAN_D                     3        /**< Node D on MultiCAN */

      #define CAN_NUM_MAXBUFFERS        128      /**< Maximum Buffers available */

      #define CAN_NUM_MAXNODES          4        /**< Maximum Nodes available */

   #endif
#endif

#ifdef TC_1793
   #if (MACHINE_SUBTYPE == TC_1793)

      #define CAN_A                     0        /**< Node A on MultiCAN */
      #define CAN_B                     1        /**< Node B on MultiCAN */
      #define CAN_C                     2        /**< Node C on MultiCAN */
      #define CAN_D                     3        /**< Node D on MultiCAN */

      #define CAN_NUM_MAXBUFFERS        128      /**< Maximum Buffers available */

      #define CAN_NUM_MAXNODES          4        /**< Maximum Nodes available */

   #endif
#endif

#define CAN_DATA_55       0x55555555u
#define CAN_DATA_AA       0xAAAAAAAAu

#define CAN_DPRAM_NOERROR 0
#define CAN_DPRAM_ERROR   1

#define CAN_MSG_DISABLE_MSK         0xfbu  /**< Message Disable Mask  */

#define CAN_MSG_DISABLE             0x04u  /**< Message Disable  */

#define CAN_MSG_NODETXSTOP          0x08u  /**< Node Tx Stop */
#define CAN_MSG_DONOT_ALLOC_BUFFER  0x10u  /**< Do not allocate buffer to message Bit position */

#define CAN_NODE_DISABLE_BP      0x200u    /**< Node Disable Bitposition */
#define CAN_NODE_TX_STOP_BP      0x400u    /**< Node Tx Stop Bit position */
#define CAN_NODE_BUSOFF_BP       0x01u     /**< Node Busoff Bit position */
#define CAN_NODE_EWRN_BP       	 0x02u     /**< Node Error warning Bit position */
#define CAN_NODE_EPASSIVE_BP     0x800u     /**< Node Error passive Bit position */
#define CAN_NODE_MAINTENANCE_BP  0X1000u   /**< Node is under Maintenance,executing Can_InitNode( )*/

#define CAN_CLRALERT_REQ_CNT 	0x05 		/* Maximum limit of Alert Intr request check */ 

#define CAN_TX                   0x0001         /**< CAN msg Transmission */
#define CAN_RX                   0x0000         /**< CAN msg Reception    */

#define CAN_TX_OK                0x01u     /**< CAN Msg Tx Sucessful */
#define CAN_RX_OK                0x01u     /**< CAN Msg Rx Sucessful */
#define CAN_RX_OVRFLW            0x02u     /**< CAN Msg Rx overwritten */
#define CAN_RX_DATA_CORRUPT      0x08u     /**< CAN Msg Rx Corrupt    */
#define CAN_MSGIN_BUFFER         0x04u     /**< CAN Msg Rx overwritten */
#define CAN_TX_OK_MSK            0xFEu     /**< Message TX OK Mask  */

#define CAN_SRV_REQ_ENAB    0x00001000ul    /**< Enable Interrupts */

#define CAN_PRIOR_PROTOCOL   2u             /**< Arbitration based on CAN Protocol */
#define CAN_PRIOR_LIST       1ul            /**< Arbitration based on List Objects */
#define CAN_MOFCR_DLC_8      0x08000000     /**< Data Length */

#define CAN_PROTOCOL_DLC_8      0x08u	     /**< Data Length as per CAN protocol */
#define CAN_NODE_NECNT_TECREC	 0x0000FFFFul /**< Node Error counters Bit positions - Both TEC & REC */


#define CAN_PANCTR_INIT_TIMEOUT_RESET 0x680ul  /**< TimeOut Value for PANCTR at Reset*/

/** The TC1796 Required TIMEOUT Value is 25, B sample takes more time to initailise first 16 buffers
to a LIST
*/
#define CAN_PANCTR_TIMEOUT_RESET   0x120ul     /**< TimeOut Value for PANCTR at Reset*/
#define CAN_PANCTR_TIMEOUT_NORMAL  0x256ul     /**< TimeOut Value for PANCTR at Normal*/


/** Defines for CAN configuration */
#define CAN_LIST                    1      /**< Normal CAN msg*/
#define CAN_MUXMASTER               2      /**< Multiplex CAN master msg*/
#define CAN_MUXSLAVE                3      /**< Multiplex CAN slave msg*/
#define CAN_FIFOBASE                4      /**< FIFO BASE Object */
#define CAN_FIFOSLAVE               5      /**< FIFO Slave Object*/
#define CAN_GW_DATA                 6      /**< Copy Data only to destination */
#define CAN_GW_DATA_DLC             7      /**< Copy Data,DLC to  destination*/
#define CAN_GW_DATA_DLC_ID          8      /**< Copy Data,DLC,ID to  destination*/
#define CAN_GW_DATA_DLC_ID_TX       9      /**< Copy Data,DLC,ID,Transmit on the destination bus*/

#define CAN_STD                     0      /**< CAN Standard Identifier */
#define CAN_EXD                     1      /**< CAN Extended Identifier */

/* Transmit and Receive function Return Values */
#define CAN_BP_TX_NOTOK             0      /**< CAN Msg Tx UnSucessful */
#define CAN_BP_RX_NOTOK             0      /**< CAN Msg Rx UnSucessful */
#define CAN_BP_TX_OK                0x01u  /**< CAN Msg Tx Sucessful */
#define CAN_BP_RX_OK                0x01u  /**< CAN Msg Rx Sucessful */
#define CAN_BP_RX_OVRFLW            0x03u  /**< CAN Msg Rx Sucessful and Message overwritten */



#define CAN_MOFCR_FIFOBASE_RX       1      /**< MMC Value for Receive FIFO Base object*/
#define CAN_MOFCR_FIFOBASE_TX       2      /**< MMC Value for Transmit FIFO Base object*/
#define CAN_MOFCR_FIFOSLAVE_TX      3      /**< MMC Value for Transmit FIFO Slave object*/
#define CAN_MOFCR_GATEWAY_SRC       4      /**< MMC Value for GateWay Source object*/

#define CAN_INTERRUPT_SRC_TX        1      /**< Interrupt source for Tx Intr. for all nodes */
#define CAN_INTERRUPT_SRC_RX        2      /**< Interrupt source for Rx Intr. for all nodes */
#define CAN_INTERRUPT_SRC_FIFOTX    3      /**< Interrupt source for FIFO Tx Intr. for all nodes */
#define CAN_INTERRUPT_SRC_FIFORX    4      /**< Interrupt source for FIFO Rx Intr. for all nodes */
#define CAN_INTERRUPT_SRC_BUSOFF    5      /**< Interrupt source for Busoff Intr. for all nodes  */

#define CAN_RX_REGISTER_OFFSETT     4      /**< Receive offset in ISR  */


#define CAN_INTERRUPT_TX            1      /**<  Interrupt  Tx Intr. */
#define CAN_INTERRUPT_RX            2      /**< Interrupt  Rx Intr. */
#define CAN_INTERRUPT_FIFOTX        3      /**< Interrupt  FIFO Tx Intr. */
#define CAN_INTERRUPT_FIFORX        4      /**< Interrupt  FIFO Rx Intr. */
#define CAN_INTERRUPT_BUSOFF        6      /**< Interrupt  Busoff Intr. */

#define CAN_NODESTATUS_MSK             0xF600 /**< Message Status Mask.*/
#define CAN_ERROR_PASSIVE              0x800  /**< Node Status Bit for Can Error Passive Mode */
#define CAN_MSG_BUFFER_NOT_ALLOCATED   0x10u  /**< Status Indication for Message Buffer Not Allocated */

#define  C_SAMPLE_APPL_CAN_ABSENT    0x00
#define  APPL_CAN_PRESENT            0x02


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* Message configuration structure */
typedef struct
{
   volatile uint16 msgHandle_u16;                  /**< Message handle*/
   volatile uint8  deviceNo_u8;                    /**< Node number   */
   volatile uint32 *msgID_pcu32;                   /**< Message Identifier */
   volatile uint32 msgAcceptMask_u32;              /**< Acceptance mask */
   volatile uint8  msgIdType_u8;                   /**< Identifier Type */
   volatile uint8  msgDir_u8;                      /**< Message Direction */
   volatile uint8  msgDlc_u8;                      /**< Message Data Length */
   volatile uint8  moMode_u8;                      /**< Message object mode */
   volatile uint16 destnObj_u16;                   /**< Destination object */
   volatile bool   Intr_b;                         /**< Interrupt/Polling */
   void(*MsgCallback)(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8,uint8 *msgData_pu8);
}Can_MsgConfig_t;



 /* Node configuration structure */
typedef struct
{
    uint8 deviceNo_u8;                 /**< node number */
    uint8 moPrio_u8;                   /**< Message object priority */
    const uint32 *bdrate_u32;          /**< Baudrate required*/
    void  (*NodeCallback)(uint8 numNode_u8, uint16 nodeStatus_u16); /**< Node Callback */
    uint8 NodeCallback_Ewrn_u8;        /**< Callback required in case of EWRN & Error passive state of Node */

}Can_dev_t;


typedef struct
{
    uint32 Bdrate_u32;               /**< BaudRate of Node*/
    uint16 regNbtr_u16;              /**< NBTR Register Value for BaudRate */
}Can_Baudrate_t;


/*User table  */
typedef struct
{
    uint8         canUser_u8;      /**< CAN Protocol User */
    void(*UsrCallback)(void);      /**< User Required Variant */
}Can_User_t;

/* structure of Queue Message Configuration                                                       */
typedef struct
{
    uint32    msgID_u32;      /* Holds the message identifier                                     */
    uint16    msgHandle_u16;  /* Holds the message handle                                         */
    uint8     msgDlc_u8;      /* Message Data Length                                              */
    uint8     data_u8[8];     /* Holds the data                                                   */
}Can_TxQMsgConfig_t;

/* enumerator with status values for the queue                                                    */
typedef enum
{
    CAN_QUEUE_EMPTY_E = 0x0,
    CAN_QUEUE_FILLING_E,
    CAN_QUEUE_FULL_E
}Can_TxQStatus_e;

/* structure for Queue status                                                                     */
/* Each instance occupies size : 3 bytes                                                          */
typedef struct
{
    uint8             numReadIdx_u8;
    uint8             numWriteIdx_u8;
    Can_TxQStatus_e   numStatus_u8;
}Can_TxQstatus_t;

/* <CAN_TXQUEUE_DETAILS> */
typedef struct
{
   uint16  queueHandle_u16;                              /* Queue handle                          */
   uint16  msgHandle_u16;                                /* holds the message handle (used only for
                                                             initialization of hardware buffer)   */
   uint8   Qsize_u8;                                     /* size of Queue                         */
   Can_TxQMsgConfig_t * const Can_TxQMsgConfig_cps;      /* pointer to Queue - Message            */
   Can_TxQstatus_t * const Can_Qstatus_cps;              /* pointer to Queue status               */
}Can_TxQConfig_t;

/* <CAN_RXQUEUE_DETAILS> */
typedef struct
{
    uint16 queueHandle_u16;                              /* Queue handle                          */
    uint16 msgHandle_u16;                                /* holds the message handle (used only for
                                                             initialization of hardware buffer)   */
    uint32 RxStartId_u32;                                /* Start Identifier                      */
    uint32 RxMaxId_u32;                                  /* End Identifier                        */
    void(*MsgCallback)(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8,uint8 *msgData_pu8);
                                                         /* Multiplex Message Callback function   */
}Can_RxQConfig_t;

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
__PRAGMA_USE__can__1_5ms__constant__s32__START

/** message configuration structure array */
extern  Can_MsgConfig_t Can_MsgDetails_cs[];

/** node configuration structure array */
extern  const Can_dev_t  Can_NodeDetails_cs[];

/** Probable Baudrates required during run time*/
extern const  Can_Baudrate_t Can_Baudrate_cs[];

/** Active tables at runtime*/
extern const Can_User_t Can_ProtocolUsers_cs[];

/** CAN Message Transmission Queue Configuration structure array                                  */
extern const Can_TxQMsgConfig_t Can_TxQMsgConfig_cs[];

__PRAGMA_USE__can__1_5ms__constant__s32__END

__PRAGMA_USE__can__1_5ms__RAM__s32__START

/** CAN Message Transmission Queue Status structure array                                         */
extern Can_TxQstatus_t Can_TxQstatus_s[];

__PRAGMA_USE__can__1_5ms__RAM__s32__END

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__can__HighSpeed__START

/** Transmit Interrupt Service Routine */
void Can_TransmitIntr (void);

/** Receive Interrupt Service Routine */
void Can_ReceiveIntr (void);

/** Busoff Interrupt Service Routine */
void Can_BusoffIntr (void);

/** FIFO Transmit Interrupt Service Routine */
void Can_TransmitIntr_Fifo(void);

/** FIFO Receive Interrupt Service Routine */
void Can_ReceiveIntr_Fifo(void);

__PRAGMA_USE__CODE__can__HighSpeed__END


__PRAGMA_USE__CODE__can__NormalSpeed__START

/** CAN Module initialization routine */
extern void Can_Proc_Ini(void);

/** CAN Node initialization routine */
extern void Can_InitNode(uint8 node_u8);

/** Initialization of TxQueue, configured to requested Node */
void Can_TxQueue_AftBusOff_Ini(uint8 node_u8);

/** CAN Module Transmit Queue Initialization                                                      */
extern void Can_TxQueue_Ini(void);

/** CAN Module Receive Queue Initialization                                                       */
extern void Can_RxQueue_Ini(void);

/** This is an Internal function called by Driver, Adds message in the Queue                      */
extern uint8 Can_QueueAddEntry(uint16 queueIndex_u16, uint16 msgHandle_u16, uint32 msgId_u32,
                        uint8 msgDlc_u8, uint8 *msgData_pu8);

/** CAN Transmit message function ,With Wrong CAN_TX ID workaround  */
extern uint8 Can_TransmitMsg(uint16 msgHandle_u16, uint32 msgId_u32, uint8 msgDlc_u8, \
                             uint8 *msgData_pu8);

/** CAN Transmit message function ,With Wrong CAN_TX ID workaround                                */
extern uint8 Can_TxMsg(uint16 msgHandle_u16,uint32 msgId_u32,uint8 msgDlc_u8 ,uint8 *msgData_pu8);

/** CAN Transmit Queue Message function                                                           */
extern uint8 Can_TransmitQueueMsg( uint16 msgHandle_u16, uint32 msgId_u32, \
                                   uint8 msgDlc_u8 , uint8 *msgData_pu8);
/** CAN Transmit Queue Message successfull callback function                                      */
extern void Can_TxQueueCallback ( uint16 msgHandle_u16, uint32 *msgId_u32, uint8 *msgDlc_u8,
                                  uint8 * msgData_pu8);

/** CAN Rx Multiplex Callback function */
extern void Can_RxQueueCallback ( uint16 msgHandle_u16, uint32 * msgId_pu32, uint8 * msgDlc_pu8,
                           uint8 * msgData_pu8);

/** CAN Receive message function  */
extern uint8 Can_ReceiveMsg
(uint16 msgHandle_u16, uint32 *msgId_pu32, uint8 *msgDlc_pu8 , uint8 *msgData_pu8);

/** CAN Receive message with CRC calculation */
extern uint8 Can_ReceiveMsgCrc
(uint16 msgHandle_u16, uint32 *msgId_pu32, uint8 *msgDlc_pu8 , uint8 *msgData_pu8);

/** CAN Start Node */
extern bool Can_StartNode(uint8 node_u8);

/** CAN Stop Node */
extern bool Can_StopNode(uint8 node_u8);

/** CAN Disable Node */
extern bool Can_DisableNode(uint8 node_u8);

/** CAN Get Message Status */
extern uint8 Can_GetMsgStatus(uint16 msgHandle_u16);

/** CAN Get Node Status */
extern  uint16 Can_GetNodeStatus( uint8 node_u8);

/** CAN Is Node Configured */
extern bool Can_IsNodeConfigured( uint8 node_u8);

/** CAN Transmit stop function */
extern  bool Can_TransmitStop(uint8 node_u8);

/** CAN Transmit start function */
extern bool Can_TransmitStart(uint8 node_u8);

/** CAN Change Baudrate function */
extern bool Can_ChangeBaudRate( uint8 node_u8,uint32 dBaudRate_u32);

/** Change the direction of Message configured */
extern bool Can_ChangeTxRx(uint16 msgHandle_u16, uint8 newDir_u8);

/** Get the first pending intr from given pending value*/
extern uint32 Can_FindFirstIntr(uint32 xReg_u32);

/** Disable the requested message */
extern bool Can_DisableMsg(uint16 msgHandle_u16);

/** Enable the  requested message */
extern bool Can_EnableMsg(uint16 msgHandle_u16);

/** Disable the requested Interrupt for a Node */
extern bool Can_DisableIntr(uint8 node_u8, uint8 intrtype_u8);

/** Enable the requested Interrupt for a Node */
extern bool Can_EnableIntr(uint8 node_u8, uint8 intrtype_u8);

/** Initialize FIFO buffers */
extern void Can_InitFIFO(void);

/** Disable FIFO Interrupt on a Node */
extern bool Can_DisableIntr_FIFO(uint8 node_u8, uint8 intrtype_u8);

/** Enable FIFO Interrupt on a Node */
extern bool Can_EnableIntr_FIFO(uint8 node_u8, uint8 intrtype_u8);

/** Initialization of CAN Gateway*/
extern void Can_InitGateway(void);

/** CAN FIFO transmit message function */
extern uint8 Can_TransmitFifo(uint16 msgHandle_u16,uint8 numMsg_u8,
              uint32 *msgId_u32, uint8 *msgDlc_u8, uint8 *msgData_pu8);

/** CAN FIFO receive message function */
extern uint8 Can_ReceiveFifo(uint16 msgHandle_u16,
 uint8 numMsg_u8,uint32 *msgId_u32, uint8 *msgDlc_u8, uint8 *msgData_pu8);

/** Internal update Message object priority function */
extern void Can_MsgObjPriority(void);

/** CAN Read message data length  */
extern uint16 Can_ReadNumFIFOSlaves(uint16 msgHandle_u16);

/** CAN transmission without worng CAN_TX ID workaround  */
extern uint8 Can_TransmitMsg_Buggy
  (uint16 msgHandle_u16, uint32 msgId_u32, uint8 msgDlc_u8, uint8 *msgData_pu8);

 /** CAN Disable an interrupt for a Message  */
extern bool Can_DisableMsgIntr(uint16 msgHandle_u16);

 /** CAN Disable an interrupt for a Message  */
extern bool Can_EnableMsgIntr(uint16 msgHandle_u16);

 /** Change the configured Message Identifier in CAN Buffer   */
extern bool Can_ChangeMsgId(uint16 msgHandle_u16,uint32 msgId_u32,uint32 acceptMask_u32);

/** Donot allocate buffer to a configured CAN Message */
extern void Can_DontAllocate_Buffer(uint16 msgHandle16);

/** Do CAN DPRAM Check */
extern void Can_DpramCheck(void);

/** Get the Health of  CAN DPRAM Check  */
extern uint8 Can_GetDpramStatus(void);

/** Get the number of HWE buffers used  */
extern uint8 Can_GetNumHwBuffersUsed(void);

/** Get the Transmit and Receive Error Count of requested node  */
extern uint16 Can_GetNodeErrCntVlv (uint8 node_u8);

/** Function to read the transmit data back */
extern void Can_ReadTxMsgData (uint16 numLMsgNo_u16,uint8 * msgData_pu8);

/* Function to read message ID */
extern void Can_ReadBufferId(uint16 msgHandle_u16, uint32 *msgId_u32);


__PRAGMA_USE__CODE__can__NormalSpeed__END
/* CAN_USE */
#endif
#endif
