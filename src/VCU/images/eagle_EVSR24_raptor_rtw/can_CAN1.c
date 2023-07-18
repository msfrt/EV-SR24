/*****************************************************************************
   can_CAN1.c
   Generated By:
   Raptor 2022b_1.1.14772 (6969)
   Matlab (R2022b) 9.13

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Wed Feb 22 21:12:12 2023
 *****************************************************************************/

/*  CAN Bus : CAN1 	*/
/*  Resource: CAN1 	*/
/*  Bus Enum: CAN_BUS_A */
/* Baud Rate: 1000k 	*/
#include "core_env.h"
#include "sws_can.h"
#include "eagle_EVSR24.h"
#include "can_general.h"
#include "can_CAN1.h"
#include "codegen_hwe_cpu.h"
#include "e_rtatr.h"
#include "cpu_pub.h"
#define MAX_AGE                        65535

/* Message Recieve data storage */
/* Block: <S3>/raptor_xcp_update */
void rxFn_RxTrig_XCP_BC_CAN1(void * data);

#define START_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

uint8_T rxBuf_RxTrig_XCP_BC_CAN1[1][8];
uint8_T rxLen_RxTrig_XCP_BC_CAN1[1];
uint16_T rxAge_RxTrig_XCP_BC_CAN1;
uint32_T rxID_RxTrig_XCP_BC_CAN1[1];

#define STOP_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

uint8_T rxQHead_RxTrig_XCP_BC_CAN1 = 0;
uint8_T rxQTail_RxTrig_XCP_BC_CAN1 = 0;

/* Block: <S3>/raptor_xcp_update */
void rxFn_RxTrig_XCP_CMD_CAN1(void * data);

#define START_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

uint8_T rxBuf_RxTrig_XCP_CMD_CAN1[1][8];
uint8_T rxLen_RxTrig_XCP_CMD_CAN1[1];
uint16_T rxAge_RxTrig_XCP_CMD_CAN1;
uint32_T rxID_RxTrig_XCP_CMD_CAN1[1];

#define STOP_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

uint8_T rxQHead_RxTrig_XCP_CMD_CAN1 = 0;
uint8_T rxQTail_RxTrig_XCP_CMD_CAN1 = 0;

/* Transmit CAN Object Declarations */
/* <S3>/raptor_xcp_update */
uint32_T can_set_period_Tx_XCP_CAN1(uint32_T);
uint16_T can_CAN1_startupDelay = 500;

#define RX_MSG_ENTRY_START             12
#define CAN_TX_QUEUE_SIZE              16
#define START_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

uint8_T txData_CAN1[CAN_TX_QUEUE_SIZE][8];
uint32_T txID_CAN1[CAN_TX_QUEUE_SIZE];
uint8_T txExt_CAN1[CAN_TX_QUEUE_SIZE];
uint8_T txLen_CAN1[CAN_TX_QUEUE_SIZE];

#define STOP_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

uint8_T txQHead_CAN1 = 0;
uint8_T txQTail_CAN1 = 0;

#define CAN_RX_QUEUE_SIZE              16
#define START_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

uint8_T rxData_CAN1[CAN_RX_QUEUE_SIZE][8];
uint32_T rxID_CAN1[CAN_RX_QUEUE_SIZE];
uint8_T rxExt_CAN1[CAN_RX_QUEUE_SIZE];
uint8_T rxLen_CAN1[CAN_RX_QUEUE_SIZE];

#define STOP_SECTION_volatile_SlowRam_oem_32bit
#include "swsh_rb2oem.h"

uint8_T rxQHead_CAN1 = 0;
uint8_T rxQTail_CAN1 = 0;
void CAN_NewEagle_Receive_MSG_STD_Node1(uint16, uint32*, uint8*, uint8*);

/* Functions */
void pre_start_CAN_CAN1(void)
{
  if (RxTrig_XCP_BC_CAN1_msgID != 0x7e0 && RxTrig_XCP_BC_CAN1_msgID != 0x7e8) {
    canMsgInfo[RX_MSG_ENTRY_START + 0].MessageId = RxTrig_XCP_BC_CAN1_msgID;
  }

  if (RxTrig_XCP_CMD_CAN1_msgID != 0x7e0 && RxTrig_XCP_CMD_CAN1_msgID != 0x7e8)
  {
    canMsgInfo[RX_MSG_ENTRY_START + 1].MessageId = RxTrig_XCP_CMD_CAN1_msgID;
  }

  {
    memset((void *)&rxBuf_RxTrig_XCP_BC_CAN1[0][0], 0, sizeof
           (rxBuf_RxTrig_XCP_BC_CAN1));
    memset((void *)&rxLen_RxTrig_XCP_BC_CAN1[0], 0, sizeof
           (rxLen_RxTrig_XCP_BC_CAN1));
    rxAge_RxTrig_XCP_BC_CAN1 = MAX_AGE;
  }

  {
    memset((void *)&rxBuf_RxTrig_XCP_CMD_CAN1[0][0], 0, sizeof
           (rxBuf_RxTrig_XCP_CMD_CAN1));
    memset((void *)&rxLen_RxTrig_XCP_CMD_CAN1[0], 0, sizeof
           (rxLen_RxTrig_XCP_CMD_CAN1));
    rxAge_RxTrig_XCP_CMD_CAN1 = MAX_AGE;
  }

  memset((void *)&txData_CAN1, 0, sizeof(txData_CAN1));
  memset((void *)&txID_CAN1, 0, sizeof(txID_CAN1));
  memset((void *)&rxData_CAN1, 0, sizeof(rxData_CAN1));
  memset((void *)&rxID_CAN1, 0, sizeof(rxID_CAN1));
  can_CAN1_startupDelay = CAN1_Startup_Delay_Data();
  if (can_CAN1_startupDelay < 20) {
    can_CAN1_startupDelay = 20;
  }
}

void post_start_CAN_CAN1(void)
{
  uint8 i = 0;
  swsh_ChangeBaudRate_ini( CAN_BUS_A, CAN_1MB_BAUD );
  for (i=0;i < 4;i++) {
    canMsgInfo[i].MessageId = 0xF0000000;
    canMsgBuffInUse[i] = 0;
  }
}

void CAN1_TX_Queue_Get_Status(uint8_T* queueSize, uint8_T* depth, uint8_T
  * maxDepth, uint32_T* overruns )
{
  *queueSize = CAN_TX_QUEUE_SIZE;
  *depth = CAN1_CANTX_QueueCount_Data();
  *maxDepth = CAN1_CANTX_QueueMax_Data();
  *overruns = CAN1_CANTX_QueueOverrun_Data();
}

void CAN1_RX_Queue_Get_Status(uint8_T* queueSize, uint8_T* depth, uint8_T
  * maxDepth, uint32_T* overruns )
{
  *queueSize = CAN_RX_QUEUE_SIZE;
  *depth = CAN1_CANRX_QueueCount_Data();
  *maxDepth = CAN1_CANRX_QueueMax_Data();
  *overruns = CAN1_CANRX_QueueOverrun_Data();
}

void rxFn_RxTrig_XCP_BC_CAN1(void * data)
{
  MessageData* msg = data;
  uint8_T i;
  uint8* b = (uint8*)msg->parameter2;
  if (1 ) {
    for (i = 0; i < 8; i++) {
      if (i < msg->parameter1)
        rxBuf_RxTrig_XCP_BC_CAN1[rxQHead_RxTrig_XCP_BC_CAN1][i] = b[i];
      else
        rxBuf_RxTrig_XCP_BC_CAN1[rxQHead_RxTrig_XCP_BC_CAN1][i] = 0;
    }

    rxLen_RxTrig_XCP_BC_CAN1[rxQHead_RxTrig_XCP_BC_CAN1] = msg->parameter1;
    rxID_RxTrig_XCP_BC_CAN1[rxQHead_RxTrig_XCP_BC_CAN1] = msg->message_id;
    if ((rxQHead_RxTrig_XCP_BC_CAN1 == rxQTail_RxTrig_XCP_BC_CAN1) &&
        (rxAge_RxTrig_XCP_BC_CAN1 == 0))
      rxQTail_RxTrig_XCP_BC_CAN1 = (rxQTail_RxTrig_XCP_BC_CAN1 + 1) % 1;
    if ((rxQHead_RxTrig_XCP_BC_CAN1 == (rxQTail_RxTrig_XCP_BC_CAN1 + 1)% 1) &&
        (rxAge_RxTrig_XCP_BC_CAN1 != 0))
      rxQTail_RxTrig_XCP_BC_CAN1 = (rxQTail_RxTrig_XCP_BC_CAN1 + 1) % 1;
    rxQHead_RxTrig_XCP_BC_CAN1 = (rxQHead_RxTrig_XCP_BC_CAN1 + 1 ) % 1;
    rxAge_RxTrig_XCP_BC_CAN1 = 0;

    {
      extern void RxTrig_XCP_BC_CAN1(void);
      RxTrig_XCP_BC_CAN1();
    }
  }
}

uint32_T RxTrig_XCP_BC_CAN1_msgID = 0x100;
uint8_T RxTrig_XCP_BC_CAN1_msgExtended = 0;
void can_init_rxIdRxTrig_XCP_BC_CAN1(uint32_T id, uint8_T extended)
{
  RxTrig_XCP_BC_CAN1_msgID = id;
  RxTrig_XCP_BC_CAN1_msgExtended = extended;
}

uint8_T can_get_RxTrig_XCP_BC_CAN1(uint16_T *age, uint32_T* id, uint8_T
  * extended, uint8_T *data, uint8_T length)
{
  uint8_T i;
  if (age != NULL)
    *age = rxAge_RxTrig_XCP_BC_CAN1;
  if (id != NULL)
    *id = rxID_RxTrig_XCP_BC_CAN1[rxQTail_RxTrig_XCP_BC_CAN1];
  if (extended != NULL)
    *extended = 0;
  if (length > 8)
    length = 8;
  if (data != NULL) {
    if (length > rxLen_RxTrig_XCP_BC_CAN1[rxQTail_RxTrig_XCP_BC_CAN1])
      length = rxLen_RxTrig_XCP_BC_CAN1[rxQTail_RxTrig_XCP_BC_CAN1];
    for (i = 0; i < 8; i++)
      data[i] = rxBuf_RxTrig_XCP_BC_CAN1[rxQTail_RxTrig_XCP_BC_CAN1][i];
  }

  if ((rxQHead_RxTrig_XCP_BC_CAN1 != (rxQTail_RxTrig_XCP_BC_CAN1 + 1)% 1) &&
      (rxAge_RxTrig_XCP_BC_CAN1 == 0))
    rxQTail_RxTrig_XCP_BC_CAN1 = (rxQTail_RxTrig_XCP_BC_CAN1 + 1) % 1;
  else if (rxAge_RxTrig_XCP_BC_CAN1 < MAX_AGE)
    rxAge_RxTrig_XCP_BC_CAN1++;
  return length;
}

void rxFn_RxTrig_XCP_CMD_CAN1(void * data)
{
  MessageData* msg = data;
  uint8_T i;
  uint8* b = (uint8*)msg->parameter2;
  if (1 ) {
    for (i = 0; i < 8; i++) {
      if (i < msg->parameter1)
        rxBuf_RxTrig_XCP_CMD_CAN1[rxQHead_RxTrig_XCP_CMD_CAN1][i] = b[i];
      else
        rxBuf_RxTrig_XCP_CMD_CAN1[rxQHead_RxTrig_XCP_CMD_CAN1][i] = 0;
    }

    rxLen_RxTrig_XCP_CMD_CAN1[rxQHead_RxTrig_XCP_CMD_CAN1] = msg->parameter1;
    rxID_RxTrig_XCP_CMD_CAN1[rxQHead_RxTrig_XCP_CMD_CAN1] = msg->message_id;
    if ((rxQHead_RxTrig_XCP_CMD_CAN1 == rxQTail_RxTrig_XCP_CMD_CAN1) &&
        (rxAge_RxTrig_XCP_CMD_CAN1 == 0))
      rxQTail_RxTrig_XCP_CMD_CAN1 = (rxQTail_RxTrig_XCP_CMD_CAN1 + 1) % 1;
    if ((rxQHead_RxTrig_XCP_CMD_CAN1 == (rxQTail_RxTrig_XCP_CMD_CAN1 + 1)% 1) &&
        (rxAge_RxTrig_XCP_CMD_CAN1 != 0))
      rxQTail_RxTrig_XCP_CMD_CAN1 = (rxQTail_RxTrig_XCP_CMD_CAN1 + 1) % 1;
    rxQHead_RxTrig_XCP_CMD_CAN1 = (rxQHead_RxTrig_XCP_CMD_CAN1 + 1 ) % 1;
    rxAge_RxTrig_XCP_CMD_CAN1 = 0;

    {
      extern void RxTrig_XCP_CMD_CAN1(void);
      RxTrig_XCP_CMD_CAN1();
    }
  }
}

uint32_T RxTrig_XCP_CMD_CAN1_msgID = 0x200;
uint8_T RxTrig_XCP_CMD_CAN1_msgExtended = 0;
void can_init_rxIdRxTrig_XCP_CMD_CAN1(uint32_T id, uint8_T extended)
{
  RxTrig_XCP_CMD_CAN1_msgID = id;
  RxTrig_XCP_CMD_CAN1_msgExtended = extended;
}

uint8_T can_get_RxTrig_XCP_CMD_CAN1(uint16_T *age, uint32_T* id, uint8_T
  * extended, uint8_T *data, uint8_T length)
{
  uint8_T i;
  if (age != NULL)
    *age = rxAge_RxTrig_XCP_CMD_CAN1;
  if (id != NULL)
    *id = rxID_RxTrig_XCP_CMD_CAN1[rxQTail_RxTrig_XCP_CMD_CAN1];
  if (extended != NULL)
    *extended = 0;
  if (length > 8)
    length = 8;
  if (data != NULL) {
    if (length > rxLen_RxTrig_XCP_CMD_CAN1[rxQTail_RxTrig_XCP_CMD_CAN1])
      length = rxLen_RxTrig_XCP_CMD_CAN1[rxQTail_RxTrig_XCP_CMD_CAN1];
    for (i = 0; i < 8; i++)
      data[i] = rxBuf_RxTrig_XCP_CMD_CAN1[rxQTail_RxTrig_XCP_CMD_CAN1][i];
  }

  if ((rxQHead_RxTrig_XCP_CMD_CAN1 != (rxQTail_RxTrig_XCP_CMD_CAN1 + 1)% 1) &&
      (rxAge_RxTrig_XCP_CMD_CAN1 == 0))
    rxQTail_RxTrig_XCP_CMD_CAN1 = (rxQTail_RxTrig_XCP_CMD_CAN1 + 1) % 1;
  else if (rxAge_RxTrig_XCP_CMD_CAN1 < MAX_AGE)
    rxAge_RxTrig_XCP_CMD_CAN1++;
  return length;
}

void can_update_CAN1(uint32_T id, uint8_T extended, uint8_T length, const
                     uint8_T *data)
{
  uint8_T i;
  uint32_T id_masked = id;
  if (extended) {
    id_masked &= 0x1fffffff;
  } else {
    id_masked = (id_masked >= 0x7ff) ? 0x7ff : (id_masked & 0x7ff);
  }

  SuspInt();
  if (CAN1_CANTX_QueueCount_Data() < CAN_TX_QUEUE_SIZE) {
    txID_CAN1[txQHead_CAN1] = id_masked;
    txExt_CAN1[txQHead_CAN1] = extended;
    txLen_CAN1[txQHead_CAN1] = length;
    for (i = 0; i < length; i++) {
      txData_CAN1[txQHead_CAN1][i] = data[i];
    }

    txQHead_CAN1 = (txQHead_CAN1 + 1) % CAN_TX_QUEUE_SIZE;
    CAN1_CANTX_QueueCount_Data()++;
    if ((CAN1_CANTX_QueueCount_Data()+1) > CAN1_CANTX_QueueMax_Data()) {
      CAN1_CANTX_QueueMax_Data() = CAN1_CANTX_QueueCount_Data()+1;
    }
  } else {
    if (CAN1_CANTX_QueueOverrun_Data() < 255) {
      CAN1_CANTX_QueueOverrun_Data() = CAN1_CANTX_QueueOverrun_Data() + 1;
    }
  }

  ResInt();
}

/**********  Transmit Messages *****************/

/**** Processing for CAN Transmit Id: 0xFFFFFFFF   ****/
/**** txMsgNum: 0 										 ****/
/**** i: 0 										 				 ****/
void can_send_Tx_XCP_CAN1(uint32_T id, uint8_T extended, uint8_T length, const
  uint8_T *data)
{
  if (!can_CAN1_startupDelay) {
    can_update_CAN1(id, extended, (length > 8) ? 8 : length, data);
  }
}

uint32_T can_set_period_Tx_XCP_CAN1(uint32_T period)
{
  if (period > 65535)
    period = 65535;
  return period;
}

void can_update_tx_ID_CAN1(uint8 bufToUse, uint32_T id, uint8_T extended)
{
  uint8_T initRequired = 0;
  if (!extended && id == 0x7e8) {
    /* A transmission slot set to 0x7e8 would interfere with reflash */
    return;
  }

  if (extended) {
    if (canMsgInfo[bufToUse].MessageId != id) {
      canMsgInfo[bufToUse].MessageId = id;
      initRequired = 1;
    }

    canMsgBuffInUse[bufToUse] = 1;
  } else {
    if (canMsgInfo[bufToUse+1].MessageId != id) {
      canMsgInfo[bufToUse+1].MessageId = id;
      initRequired = 1;
    }

    canMsgBuffInUse[bufToUse+1] = 1;
  }

  if (initRequired) {
    swsh_caninit_user(0, &can_init[0]);
  }
}

boolean can_IsSendable_tx_ID_CAN1(uint8_T bufToUse, uint32_T id, uint8_T
  extended)
{
  uint8 i = 0;

  //is the desired buffer available?
  if (extended) {
    if (canMsgBuffInUse[bufToUse]) {
      return 0;
    }
  } else {
    if (canMsgBuffInUse[bufToUse+1]) {
      return 0;
    }
  }

  //is a transmit for this ID already pending?
  for (i=0;i< 12;i++) {
    if (canMsgBuffInUse[i]
        && canMsgInfo[i].MessageId == id
        && canMsgInfo[i].MessageFormat == extended) {
      return 0;
    }
  }

  return 1;
}

/* Must be called with Interrupts Enabled */
void can_process_tx_queues_CAN1_i(void)
{
  static uint8 nextBuffer = 0;
  uint32 id = 0;
  uint8* data = 0;
  uint8 length = 0;
  uint8 extended = 0;
  uint8 bufNum = 0;
  if (!can_CAN1_startupDelay) {
    if (CAN1_CANTX_QueueCount_Data() > 0) {
      id = txID_CAN1[txQTail_CAN1];
      data = &txData_CAN1[txQTail_CAN1][0];
      length = txLen_CAN1[txQTail_CAN1];
      extended = txExt_CAN1[txQTail_CAN1];
      bufNum = 0+(nextBuffer*2);
      if (can_IsSendable_tx_ID_CAN1(bufNum, id, extended)) {
        txQTail_CAN1 = (txQTail_CAN1+1) % CAN_TX_QUEUE_SIZE;
        CAN1_CANTX_QueueCount_Data()--;
        nextBuffer = (nextBuffer < 1) ? 1 : 0;
        can_update_tx_ID_CAN1(bufNum, id, extended);
        swsh_cantx_user(CAN_BUS_A, id, data, length, extended);
      }
    }
  }
}

void can_process_tx_queues_CAN1(void)
{
  SuspInt();
  can_process_tx_queues_CAN1_i();
  ResInt();
}

void CANTx_Buffer1(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8,
                   uint8 *msgData_pu8)
{
  UNUSED(msgHandle_u16);
  UNUSED(msgId_pu32);
  UNUSED(msgDlc_pu8);
  UNUSED(msgData_pu8);
  canMsgInfo[0].MessageId = 0xF0000000;
  canMsgBuffInUse[0] = 0;
  can_process_tx_queues_CAN1();
}

void CANTx_Buffer2(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8,
                   uint8 *msgData_pu8)
{
  UNUSED(msgHandle_u16);
  UNUSED(msgId_pu32);
  UNUSED(msgDlc_pu8);
  UNUSED(msgData_pu8);
  canMsgInfo[1].MessageId = 0xF0000000;
  canMsgBuffInUse[1] = 0;
  can_process_tx_queues_CAN1();
}

void CANTx_Buffer3(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8,
                   uint8 *msgData_pu8)
{
  UNUSED(msgHandle_u16);
  UNUSED(msgId_pu32);
  UNUSED(msgDlc_pu8);
  UNUSED(msgData_pu8);
  canMsgInfo[2].MessageId = 0xF0000000;
  canMsgBuffInUse[2] = 0;
  can_process_tx_queues_CAN1();
}

void CANTx_Buffer4(uint16 msgHandle_u16,uint32 *msgId_pu32,uint8 *msgDlc_pu8,
                   uint8 *msgData_pu8)
{
  UNUSED(msgHandle_u16);
  UNUSED(msgId_pu32);
  UNUSED(msgDlc_pu8);
  UNUSED(msgData_pu8);
  canMsgInfo[3].MessageId = 0xF0000000;
  canMsgBuffInUse[3] = 0;
  can_process_tx_queues_CAN1();
}

void can_queue_rx_CAN1(uint32_T id, uint8_T extended, uint8_T length, uint8_T
  *data)
{
  uint8_T i;
  SuspInt();

#define QUEUE_CNT(head, tail, capacity) ((tail > head) ? (capacity - tail) : (head-tail))

  if (QUEUE_CNT(rxQHead_CAN1, rxQTail_CAN1, CAN_RX_QUEUE_SIZE) <
      (CAN_RX_QUEUE_SIZE-1)) {
    rxID_CAN1[rxQHead_CAN1] = id;
    rxExt_CAN1[rxQHead_CAN1] = extended;
    rxLen_CAN1[rxQHead_CAN1] = length;
    for (i = 0; i < length; i++) {
      rxData_CAN1[rxQHead_CAN1][i] = data[i];
    }

    rxQHead_CAN1 = (rxQHead_CAN1 + 1) % CAN_RX_QUEUE_SIZE;
    if (rxQHead_CAN1 == rxQTail_CAN1) {
      rxQTail_CAN1 = (rxQTail_CAN1+1) % CAN_RX_QUEUE_SIZE;
    }
  }

  ResInt();
}

void can_process_rx_queue_CAN1(void)
{
  uint32 id = 0;
  uint8* data = 0;
  uint8 length = 0;
  uint8 extended = 0;
  uint8 toRx = 0;
  if (!can_CAN1_startupDelay) {
    do {
      SuspInt();
      toRx = 0;
      if (rxQTail_CAN1 != rxQHead_CAN1) {
        id = rxID_CAN1[rxQTail_CAN1];
        data = &rxData_CAN1[rxQTail_CAN1][0];
        length = rxLen_CAN1[rxQTail_CAN1];
        extended = rxExt_CAN1[rxQTail_CAN1];
        rxQTail_CAN1 = (rxQTail_CAN1+1) % CAN_RX_QUEUE_SIZE;
        toRx = 1;
      }

      ResInt();
      if (toRx) {
        CAN_NewEagle_Receive_MSG_STD_Node1(0, &id, &length, data);
      }
    } while (rxQTail_CAN1 != rxQHead_CAN1);
  }
}

void can_process_CAN1(void)
{
  uint8 data_rx_buf[8] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };

  uint8 data_length_rx = 0;
  uint32 msgID_rx = 0;
  static uint8 can_errorCheck_CAN1_count = 0;
  can_CAN1_startupDelay = (can_CAN1_startupDelay > 0) ? can_CAN1_startupDelay-1 :
    0;

  /* Receive for canMsgInfo 0x100 - Mask: 0x1FFFFFFF */
  if (swsh_canrx_user(&msgID_rx, canMsgInfo[RX_MSG_ENTRY_START + 0].MessageId,
                      &data_rx_buf[0], &data_length_rx) == CANRX_STAT_OK) {
    can_queue_rx_CAN1(msgID_rx, 0, data_length_rx, &data_rx_buf[0]);
  }

  /* Receive for canMsgInfo 0x200 - Mask: 0x1FFFFFFF */
  if (swsh_canrx_user(&msgID_rx, canMsgInfo[RX_MSG_ENTRY_START + 1].MessageId,
                      &data_rx_buf[0], &data_length_rx) == CANRX_STAT_OK) {
    can_queue_rx_CAN1(msgID_rx, 0, data_length_rx, &data_rx_buf[0]);
  }

  can_process_tx_queues_CAN1();
  if ((CAN1_ErrorCheck_Interval_Data() > 0) && (can_errorCheck_CAN1_count++ >
       CAN1_ErrorCheck_Interval_Data())) {
    can_errorCheck_CAN1_count = 0;
    can_errorCheck_CAN1();
  }
}

void can_errorCheck_CAN1(void)
{
  if (!can_CAN1_startupDelay) {
    uint16_T canStatus = Can_GetNodeStatus(CAN_BUS_A);
    if (canStatus & 0x01)              /* Bus Off */
    {
      /* Reinitialize the CAN driver */
      Can_InitNode(CAN_BUS_A);
      swsh_ChangeBaudRate_ini( CAN_BUS_A, CAN_1MB_BAUD );
    } else if (canStatus & 0x800) {
      Can_InitNode(CAN_BUS_A);
      swsh_ChangeBaudRate_ini( CAN_BUS_A, CAN_1MB_BAUD );
      can_CAN1_startupDelay = CAN1_ErrorPassive_Delay_Data();
    }

    if (canStatus > 0)                 /* Error */
    {
      uint8_T i;
      SuspInt();
      can_CAN1_startupDelay += 5;
      for (i=0;i<4;i++) {
        canMsgBuffInUse[0+i] = 0;
        canMsgInfo[0+i].MessageId = 0xF0000000;
      }

      ResInt();
    }
  }
}

void CAN_NewEagle_Receive_MSG_STD_Node1(uint16 msgHandle_u16, uint32 *msgId_pu32,
  uint8 *msgDlc_pu8, uint8 *msgData_pu8)
{
  extern uint8 app_is_in_shutdown;
  MessageData data;
  uint32 id = *msgId_pu32;
  data.message_id = id;
  data.parameter1 = *msgDlc_pu8;
  data.parameter2 = msgData_pu8;
  UNUSED(msgHandle_u16);

  /* Standard Receive Table */
  if ((id & 0x1FFFFFFF) == (RxTrig_XCP_BC_CAN1_msgID & 0x1FFFFFFF)) {
    rxFn_RxTrig_XCP_BC_CAN1(&data);
  }

  if ((id & 0x1FFFFFFF) == (RxTrig_XCP_CMD_CAN1_msgID & 0x1FFFFFFF)) {
    rxFn_RxTrig_XCP_CMD_CAN1(&data);
  }
}

void CAN_NewEagle_Receive_MSG_EXD_Node1(uint16 msgHandle_u16,uint32 *msgId_pu32,
  uint8 *msgDlc_pu8, uint8 *msgData_pu8)
{
  extern uint8 app_is_in_shutdown;
  MessageData data;
  uint32 id = *msgId_pu32;
  data.message_id = id;
  data.parameter1 = *msgDlc_pu8;
  data.parameter2 = msgData_pu8;
  UNUSED(msgHandle_u16);

  /* Extended Receive Table */
}