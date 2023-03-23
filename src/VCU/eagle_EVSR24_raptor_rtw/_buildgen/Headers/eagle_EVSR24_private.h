/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: eagle_EVSR24_private.h
 *
 * Code generated for Simulink model 'eagle_EVSR24'.
 *
 * Model version                  : 8.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Feb 22 21:12:12 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_eagle_EVSR24_private_h_
#define RTW_HEADER_eagle_EVSR24_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "eagle_EVSR24_types.h"
#include "eagle_EVSR24.h"

extern uint16_T crc16_spd(void* in, uint32_T length, uint16_T prevCRC);
boolean_T is_crc_valid(void * buffer, uint32_T buffer_size, uint16_T checkCrc);
extern char *__NE_CODE0_START __attribute__ ((asection (".asw0_prolog","f=aw")));

#define CODESTART0                     ((char*)&__NE_CODE0_START)

extern char *__NE_CODE0_END __attribute__ ((asection (".asw0_free","f=aw")));

#define CODEEND0                       ((char*)&__NE_CODE0_END)

extern char *__NE_CODE1_START __attribute__ ((asection (".asw0_epilog","f=aw")));

#define CODESTART1                     ((char*)&__NE_CODE1_START)

extern char *__NE_CODE1_END __attribute__ ((asection (".asw0_epilog","f=aw")));

#define CODEEND1                       ((char*)&__NE_CODE1_END)

extern void Timer_ooqlV(void);
extern void Timer_BGND_G6Wyo(void);
extern void Timed_Trigger_XCP(void);
extern void RxTrig_XCP_BC_CAN1(void);
extern void RxTrig_XCP_CMD_CAN1(void);
extern void CAN1_XCP_CAN_PreStart(uint32_T, uint32_T, uint32_T);
extern void can_process_rx_queue_CAN1(void);
extern void eagle_EVSR24_Background_Init(void);
extern void eagle_EVSR24_Background_Reset(void);
extern void eagle_EVSR24_Background(void);
extern void eagle_EVSR24_Foreground(void);

#endif                                 /* RTW_HEADER_eagle_EVSR24_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
