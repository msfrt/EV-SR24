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
 * $Filename__:e_rtatr.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:26.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:e_rtatr$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     26.08.2008 KLMEYER
 *   Update: Core delivery 2008-07
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/*************************************************************************************************
 *
 * Belongs to products: RTA-TRACE
 *
 * Contains: RTA-TRACE v2.0 API types, macros and externs
 *
 * Copyright (C) LiveDevices Ltd. 2003
 *
 * $Header: /Minerva/ERCOSEK_TRICORE4.3/TARGET/TRICORE/AS/ERCOSEK/e_RTAtr.h 87    24/10/03 12:21 Nmerriam $
 *
 * Notes:
 *
 *************************************************************************************************/

/*
History:
--------

who when        call    what
---------------------------------------------------------------------------------------------------
Sz  9.02.04     52579        RTAtrace integration: Missing declaration
Ry  04.03.04    53583        SuspendAllInterrupt as inline function cross effects on other target
Ry  11.03.04    53583        SuspendAllInterrupt as inline function cross effects on other target.Removed 
						     macro #undef SuspendAllInterrupts,#undef ResumeAllInterrupts
Ry  21.06.04    xxxxx        corrected OSTRACE_SCHEDULE_RFETURNED to OSTRACE_SCHEDULE_RETURNED in macro
                             definition Schedule().
                             Replaced ?? with MODE in macro definition TriggerOnInitTaskStart,
							 TriggerOnInitTaskStop
Ry  04.06.2004  80069DD002   MISRA mark generated code.
                             MISRA RULE VIOLATION: Warning 620 Suspicious constant L or one.
                             [Classified:Mistake].Replaced l with L in macros 
                             MISRA RULE 9 VIOLATION:Comment within comment
							 [Classified:Mistake].
                             MISRA RULE 71 VIOLATION:Function defined without a prototype in scope.
                             [Classified:Mistake].Added prototype 
                             MISRA RULE 92 VIOLATION: #undef should not be used.[Classified:Deliberate].
                             Added comment.
                             MISRA RULE VIOLATION:warning 652 : #define of symbol declared previously.
                             [Classified:Deliberate].Added comment.
							 MISRA RULE 42 VIOLATION:comma operator used outside of 'for' expression.
                             [Classified:Deliberate].Added comment.

*/


#ifndef __E_RTATR_H
#define __E_RTATR_H

#include "e_RTAv.h"

/*-------------------------------------------------------------------------------------------------
 *        Type definitions
 *-------------------------------------------------------------------------------------------------
 */

typedef unsigned char   osTraceUInt8;           /* REVIEWNOTE: char isn't always 8 bits, e.g. TMS320 */
typedef unsigned short  osTraceUInt16;
typedef unsigned long   osTraceUInt32;
typedef unsigned int    osTraceUInt;
typedef unsigned long   osTraceMaskType;
typedef osTraceUInt8 *  osTraceDataPtr;
typedef unsigned int    osTraceDataLength;
typedef unsigned int    osTraceSmallType;
typedef osTraceSmallType osTraceMode;
typedef osTraceSmallType osTraceStatus;
typedef unsigned int    osTraceBool;
typedef osTraceMaskType osTraceClassesType;
typedef osTraceMaskType osTraceCategoriesType;
typedef enum {
                osTraceODEmpty,
                osTraceODComplete,
                osTraceODReadyToTransmit,
                osTraceODBeforeIDByte,
                osTraceODInContent,
                osTraceODNeedEscapeChar,
                osTraceODFinal
        } osTraceODState;

typedef struct {
        osTraceUInt8 *  ptr;
        osTraceUInt     count;
        osTraceUInt8    id_byte;
        osTraceODState  state;
} osTraceOutputDescriptor;

/* How big a packet can be */
extern osTraceUInt osTracePacketMax;

/* Output descriptors */
extern osTraceOutputDescriptor osTraceOutputDescriptors[];
extern const osTraceUInt osTraceOutputDescriptorCount;

osTraceStatus TraceCommInit(void);


#if !defined(ESCAPE_PARSER)


/*-------------------------------------------------------------------------------------------------
 *        Include files
 *-------------------------------------------------------------------------------------------------
 */

#ifdef ANSI_C_CHECK
#undef OSTRACE_ENABLED
#else
#include "RTAtrace.h"
#endif

#ifdef OSTRACE_ENABLED


/*-------------------------------------------------------------------------------------------------
 *        Type definitions
 *-------------------------------------------------------------------------------------------------
 */

/* NB: Default is 32-bit time, 8-bit ID and 8-bit info */

#if ((OSTRACE_TIME_SIZE) == 16)
        typedef osTraceUInt16   osTraceTimeType;
#endif
#if ((OSTRACE_TIME_SIZE) == 32)
        typedef osTraceUInt32   osTraceTimeType;
#endif

#if ((OSTRACE_KIND_SIZE) == 16)
        typedef osTraceUInt16   osTraceKindType;
#endif
#if ((OSTRACE_KIND_SIZE) == 8)
        typedef osTraceUInt8    osTraceKindType;
#endif

#if ((OSTRACE_INFO_SIZE) == 16)
        typedef osTraceUInt16   osTraceInfoType;
#endif
#if ((OSTRACE_INFO_SIZE) == 8)
        typedef osTraceUInt8    osTraceInfoType;
#endif

/* The following struct-type defines the structure of a trace-entry.
   The global traceBuffer is an array of osTraceEntryType. */

#if defined(OSTRACE_TIME_SIZE) && defined(OSTRACE_KIND_SIZE) && defined(OSTRACE_INFO_SIZE)
typedef struct {
        osTraceTimeType _time_;         /* time-stamp: (usually) ERCOSEK's low part of the system-time */
        osTraceKindType _kind_;         /* defines the kind of event (see #defines below) */
        osTraceInfoType _info_;         /* additional trace-information (dependent on the kind of event). */
} osTraceEntryType;
#endif

/*-------------------------------------------------------------------------------------------------
 *        Defines
 *-------------------------------------------------------------------------------------------------
 */

#if ((OSTRACE_TIME_SIZE) == 32)
 #if (((OSTRACE_KIND_SIZE) == 16) && ((OSTRACE_INFO_SIZE) == 16))
        #define TTS(p) p##_32_16_16
 #endif
 #if (((OSTRACE_KIND_SIZE) == 8) && ((OSTRACE_INFO_SIZE) == 8))
        #define TTS(p) p##_32_8_8
 #endif
#endif
#if ((OSTRACE_TIME_SIZE) == 16)
 #if (((OSTRACE_KIND_SIZE) == 16) && ((OSTRACE_INFO_SIZE) == 16))
        #define TTS(p) p##_16_16_16
 #endif
 #if (((OSTRACE_KIND_SIZE) == 8) && ((OSTRACE_INFO_SIZE) == 8))
        #define TTS(p) p##_16_8_8
 #endif
#endif

#define TRACE_ACTIVATIONS_CLASS                 ((osTraceClassesType)(0x0001uL))
#define TRACE_OSEK_MESSAGES_CLASS               ((osTraceClassesType)(0x0002uL))
#define TRACE_RESOURCES_CLASS                   ((osTraceClassesType)(0x0004uL))
#define TRACE_INTERRUPT_LOCKS_CLASS             ((osTraceClassesType)(0x0008uL))
#define TRACE_SWITCHING_OVERHEADS_CLASS         ((osTraceClassesType)(0x0010uL))
#define TRACE_TASKS_AND_ISRS_CLASS              ((osTraceClassesType)(0x0020uL))
#define TRACE_PROCESSES_CLASS                   ((osTraceClassesType)(0x0040uL))
#define TRACE_EXPLICIT_STATE_MESSAGES_CLASS     ((osTraceClassesType)(0x0080uL))
#define TRACE_ERRORS_CLASS                      ((osTraceClassesType)(0x0100uL))
#define TRACE_TASK_TRACEPOINT_CLASS             ((osTraceClassesType)(0x0200uL))
#define TRACE_TRACEPOINT_CLASS                  ((osTraceClassesType)(0x0400uL))
#define TRACE_INTERVALS_CLASS                   ((osTraceClassesType)(0x0800uL))
#define TRACE_MESSAGE_DATA_CLASS                ((osTraceClassesType)(0x1000uL))
#define TRACE_STARTUP_AND_SHUTDOWN_CLASS        ((osTraceClassesType)(0x2000uL))
#define TRACE_ALARMS_CLASS                      ((osTraceClassesType)(0x4000uL))
#define TRACE_TIMETABLES_CLASS                  ((osTraceClassesType)(0x8000uL))

#define TRACE_NO_CLASSES                        ((osTraceClassesType)(0x00000000uL))
#define TRACE_ALL_CLASSES                       ((osTraceClassesType)(0xFFFFFFFFuL))

#define OSTRACE_NO_CATEGORIES                   ((osTraceCategoriesType)(0x00000000uL))
#define OSTRACE_ALL_CATEGORIES                  ((osTraceCategoriesType)(0x7FFFFFFFuL))

/* OSTRACE_APPEND is trace-type sized version of osTraceAppend */
#define OSTRACE_APPEND TTS(osTraceAppend)                               /* RTAtrace_code_req  89 */

/* OSTRACE_APPEND_FIN is trace-type sized version of osTraceAppendFin */
#define OSTRACE_APPEND_FIN TTS(osTraceAppendFin)                        /* RTAtrace_code_req 552 */

/* OSTRACE_APPEND_STAT is trace-type sized version of osTraceAppendWithStatus */
#define OSTRACE_APPEND_STAT TTS(osTraceAppendWithStatus)                /* RTAtrace_code_req  90 */

/* OSTRACE_APPEND_DATA is trace-type sized version of osTraceAppendData */
#define OSTRACE_APPEND_DATA TTS(osTraceAppendData)                      /* RTAtrace_code_req 334 */

/* OSTRACE_APPEND_STACKDATA is trace-type sized version of osTraceAppendStackData */
#define OSTRACE_APPEND_STACKDATA TTS(osTraceAppendStackData)            /* RTAtrace_code_req 331 */

void osTraceValueOversize(void);        /* Cause a link failure if referenced. */

/* RTAtrace_code_req_begin 328 */
#if ((OSTRACE_TIME_SIZE) == 32)
#define OSTRACE_APPEND_VAL(P, I, V) (\
        ((sizeof(V) == 1) ? OSTRACE_APPEND_VAL8((P), (I), (osTraceUInt8)(V)) \
                : ((sizeof(V) == 2) ? OSTRACE_APPEND_VAL16((P), (I), (osTraceUInt16)(V)) \
                        : ((sizeof(V) == 4) ? OSTRACE_APPEND_VAL32((P), (I), (osTraceUInt32)(V)) \
                                : osTraceValueOversize()\
                          )\
                  )\
        )\
)
#else /* 16-bit time */
#define OSTRACE_APPEND_VAL(P, I, V) (\
        ((sizeof(V) == 1) ? OSTRACE_APPEND_VAL8((P), (I), (osTraceUInt8)(V)) \
                : ((sizeof(V) == 2) ? OSTRACE_APPEND_VAL16((P), (I), (osTraceUInt16)(V)) \
                        : osTraceValueOversize()\
                  )\
        )\
)
#endif
/* RTAtrace_code_req_end 328 */

/* OSTRACE_APPEND_VAL8 is trace-type sized version of osTraceAppendVal8 */
#define OSTRACE_APPEND_VAL8(P, I, V) TTS(osTraceAppendVal8)(P, I, V)            /* RTAtrace_code_req 325 */

/* OSTRACE_APPEND_VAL16 is trace-type sized version of osTraceAppendVal16 */
#define OSTRACE_APPEND_VAL16(P, I, V) TTS(osTraceAppendVal16)(P, I, V)          /* RTAtrace_code_req 326 */

#if ((OSTRACE_TIME_SIZE) == 32)
/* OSTRACE_APPEND_VAL32 is trace-type sized version of osTraceAppendVal32 */
#define OSTRACE_APPEND_VAL32(P, I, V) TTS(osTraceAppendVal32)(P, I, V)          /* RTAtrace_code_req 327 */
#endif

/* OSTRACCE_APPEND...__ can include stack logging call */
#ifdef OSTRACE_LOG_STACKDATA
#define OSTRACE_APPEND__(P, I) (OSTRACE_APPEND_STACKDATA(OSTRACE_GetStackData()), OSTRACE_APPEND(P, I))                 /* RTAtrace_code_req 322 */
#define OSTRACE_APPEND_FIN__(P, I) (OSTRACE_APPEND_STACKDATA(OSTRACE_GetStackData()), OSTRACE_APPEND_FIN(P, I))         /* RTAtrace_code_req 554 */
#define OSTRACE_APPEND_STAT__(P, I, S) (OSTRACE_APPEND_STACKDATA(OSTRACE_GetStackData()), OSTRACE_APPEND_STAT(P, I, S)) /* RTAtrace_code_req 324 */
#define OSTRACE_APPEND_DATA__(P, I, D, L) (OSTRACE_APPEND_STACKDATA(OSTRACE_GetStackData()), OSTRACE_APPEND_DATA(P, I, D, L))   /* RTAtrace_code_req 333 */
#define OSTRACE_APPEND_VAL__(P, I, D) (OSTRACE_APPEND_STACKDATA(OSTRACE_GetStackData()), OSTRACE_APPEND_VAL(P, I, D))   /* RTAtrace_code_req 330 */
#else /* !OSTRACE_LOG_STACKDATA */
#define OSTRACE_APPEND__(P, I) (OSTRACE_APPEND(P, I))                           /* RTAtrace_code_req 321 */
#define OSTRACE_APPEND_FIN__(P, I) (OSTRACE_APPEND_FIN(P, I))                   /* RTAtrace_code_req 553 */
#define OSTRACE_APPEND_STAT__(P, I, S) (OSTRACE_APPEND_STAT(P, I, S))           /* RTAtrace_code_req 323 */
#define OSTRACE_APPEND_DATA__(P, I, D, L) (OSTRACE_APPEND_DATA(P, I, D, L))     /* RTAtrace_code_req 332 */
#define OSTRACE_APPEND_VAL__(P, I, D) (OSTRACE_APPEND_VAL(P, I, D))             /* RTAtrace_code_req 329 */
#endif /* OSTRACE_LOG_STACKDATA */


#define StopTrace TTS(osTraceStop)

#define StartFreeRunningTrace TTS(osTraceStartFreeRunning)
#define StartBurstingTrace TTS(osTraceStartBursting)
#define StartTriggeringTrace TTS(osTraceStartTriggering)
#define SetTriggerConditions TTS(osTraceTriggeringConditions)
#define SetTriggerWindow TTS(osTraceTriggerWindow)
#define TriggerNow TTS(osTraceTriggerNow)


#define OSTRACE_POINT_0                         (0x00)  /* global Tracepoint */
#define OSTRACE_POINT_1                         (0x01)  /* global Tracepoint */
#define OSTRACE_POINT_2                         (0x02)  /* global Tracepoint */
#define OSTRACE_POINT_3                         (0x03)  /* global Tracepoint */
#define OSTRACE_POINT_4                         (0x04)  /* global Tracepoint */
#define OSTRACE_POINT_5                         (0x05)  /* global Tracepoint */
#define OSTRACE_POINT_6                         (0x06)  /* global Tracepoint */
#define OSTRACE_POINT_7                         (0x07)  /* global Tracepoint */
#define OSTRACE_POINT_8                         (0x08)  /* global Tracepoint */
#define OSTRACE_POINT_9                         (0x09)  /* global Tracepoint */
#define OSTRACE_POINT_A                         (0x0A)  /* global Tracepoint */
#define OSTRACE_POINT_B                         (0x0B)  /* global Tracepoint */
#define OSTRACE_POINT_C                         (0x0C)  /* global Tracepoint */
#define OSTRACE_POINT_D                         (0x0D)  /* global Tracepoint */
#define OSTRACE_POINT_E                         (0x0E)  /* global Tracepoint */
#define OSTRACE_POINT_F                         (0x0F)  /* global Tracepoint */

#define OSTRACE_TASKPOINT_0                     (0x00)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_1                     (0x01)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_2                     (0x02)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_3                     (0x03)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_4                     (0x04)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_5                     (0x05)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_6                     (0x06)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_7                     (0x07)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_8                     (0x08)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_9                     (0x09)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_A                     (0x0A)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_B                     (0x0B)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_C                     (0x0C)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_D                     (0x0D)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_E                     (0x0E)  /* task-specific Tracepoint */
#define OSTRACE_TASKPOINT_F                     (0x0F)  /* task-specific Tracepoint */

/* Backward compatibility set (do not renumber) */

#define OSTRACE_ACTIVATION                      (OSTRACE_EMPTY + 0x01)  /* RTAtrace_code_req 416 */ /* start of task-activation */

#define OSTRACE_TASKSTART                       (OSTRACE_EMPTY + 0x03)  /* RTAtrace_code_req 417 */ /* start of a task (beginning of execution) */
#define OSTRACE_TASKEND                         (OSTRACE_EMPTY + 0x04)  /* RTAtrace_code_req 418 */ /* end of a task (termination) */
#define OSTRACE_GETRESOURCE                     (OSTRACE_EMPTY + 0x05)  /* RTAtrace_code_req 419 */ /* call to GetResource() completed */
#define OSTRACE_RELEASERESOURCE                 (OSTRACE_EMPTY + 0x06)  /* RTAtrace_code_req 420 */ /* start of call to ReleaseResource() */
#define OSTRACE_PROCESSSTART                    (OSTRACE_EMPTY + 0x07)  /* RTAtrace_code_req 421 */ /* start of a process */
#define OSTRACE_PROCESSEND                      (OSTRACE_EMPTY + 0x08)  /* RTAtrace_code_req 422 */ /* end of a process */
#define OSTRACE_SETEVENT                        (OSTRACE_EMPTY + 0x09)  /* RTAtrace_code_req 423 */
#define OSTRACE_CLEAREVENT                      (OSTRACE_EMPTY + 0x0A)  /* RTAtrace_code_req 424 */
#define OSTRACE_GETEVENT                        (OSTRACE_EMPTY + 0x0B)  /* RTAtrace_code_req 425 */
#define OSTRACE_WAITEVENT                       (OSTRACE_EMPTY + 0x0C)  /* RTAtrace_code_req 426 */


#define OSTRACE_ERRORHOOK                       (OSTRACE_EMPTY + 0x0F)  /* RTAtrace_code_req 429 */ /* entry to ErrorHook */

/* No backward compatibility set: */

#define OSTRACE_ACTIVATION_RETURNED             (OSTRACE_EMPTY + 0x10)  /* RTAtrace_code_req 430 */ /* end of task-activation */
#define OSTRACE_CHAINACTIVATION                 (OSTRACE_EMPTY + 0x11)  /* RTAtrace_code_req 431 */ /* start of task-activation by ChainTask */
#define OSTRACE_TIMETABLE_EXPIRY                (OSTRACE_EMPTY + 0x12)  /* RTAtrace_code_req 432 */ /* activation on behalf of Timetable */
#define OSTRACE_ALARM_EXPIRY                    (OSTRACE_EMPTY + 0x13)  /* RTAtrace_code_req 433 */ /* activation on behalf of alarm */
#define OSTRACE_RELEASERESOURCE_RETURNED        (OSTRACE_EMPTY + 0x14)  /* RTAtrace_code_req 434 */ /* task called ReleaseResource() */
#define OSTRACE_SETEVENT_RETURNED               (OSTRACE_EMPTY + 0x15)  /* RTAtrace_code_req 435 */ /* task called SetEvent */
#define OSTRACE_WAITEVENT_RETURNED              (OSTRACE_EMPTY + 0x16)  /* RTAtrace_code_req 436 */ /* task called WaitEvent */
#define OSTRACE_SYSTEM_TIMER_ENTRY              (OSTRACE_EMPTY + 0x17)  /* RTAtrace_code_req 437 */ /* system timer interrupt */
#define OSTRACE_SYSTEM_TIMER_EXIT               (OSTRACE_EMPTY + 0x18)  /* RTAtrace_code_req 438 */ /* system timer interrupt */
#define OSTRACE_SYSTEM_TIMER_AL_TIME            (OSTRACE_EMPTY + 0x19)  /* RTAtrace_code_req 439 */ /* system timer interrupt */
#define OSTRACE_SYSTEM_TIMER_TB_TIME            (OSTRACE_EMPTY + 0x1A)  /* RTAtrace_code_req 440 */ /* system timer interrupt */
#define OSTRACE_SEND_EXPLICIT_MSG               (OSTRACE_EMPTY + 0x1B)  /* RTAtrace_code_req 441 */ /* Send ERCOSEK state message (explicit) */
#define OSTRACE_RECEIVE_EXPLICIT_MSG            (OSTRACE_EMPTY + 0x1C)  /* RTAtrace_code_req 442 */ /* Receive ERCOSEK state message (explicit) */
#define OSTRACE_SEND_OSEK_MSG                   (OSTRACE_EMPTY + 0x1D)  /* RTAtrace_code_req 443 */ /* Send OSEK message */
#define OSTRACE_RECEIVE_OSEK_MSG                (OSTRACE_EMPTY + 0x1E)  /* RTAtrace_code_req 444 */ /* Receive OSEK message */
#define OSTRACE_SUSPEND_ALL_INTERRUPTS          (OSTRACE_EMPTY + 0x1F)  /* RTAtrace_code_req 445 */ /* SuspendAllInterrupts */
#define OSTRACE_RESUME_ALL_INTERRUPTS           (OSTRACE_EMPTY + 0x20)  /* RTAtrace_code_req 446 */ /* ResumeAllInterrupts */
#define OSTRACE_SUSPEND_OS_INTERRUPTS           (OSTRACE_EMPTY + 0x21)  /* RTAtrace_code_req 447 */ /* SuspendOSInterrupts */
#define OSTRACE_RESUME_OS_INTERRUPTS            (OSTRACE_EMPTY + 0x22)  /* RTAtrace_code_req 448 */ /* ResumeOSInterrupts */
#define OSTRACE_DISABLE_ALL_INTERRUPTS          (OSTRACE_EMPTY + 0x23)  /* RTAtrace_code_req 449 */ /* DisableAllInterrupts */
#define OSTRACE_ENABLE_ALL_INTERRUPTS           (OSTRACE_EMPTY + 0x24)  /* RTAtrace_code_req 450 */ /* EnableAllInterrupts */
#define OSTRACE_SCHEDULE                        (OSTRACE_EMPTY + 0x25)  /* RTAtrace_code_req 451 */ /* start of Schedule() call */
#define OSTRACE_SCHEDULE_RETURNED               (OSTRACE_EMPTY + 0x26)  /* RTAtrace_code_req 452 */ /* end of Schedule() call */
#define OSTRACE_X_DISCONTINUITY                 (OSTRACE_EMPTY + 0x27)  /* RTAtrace_code_req 453 */ /* Change of status e.g. run-time filtering change */
#define OSTRACE_PREEMPTIVE_SCHEDULER_ENTRY      (OSTRACE_EMPTY + 0x28)  /* RTAtrace_code_req 454 */ /* start of scheduler interrupt */
#define OSTRACE_PREEMPTIVE_SCHEDULER_EXIT       (OSTRACE_EMPTY + 0x29)  /* RTAtrace_code_req 455 */ /* end of scheduler interrupt */

#define OSTRACE_COUNTER_EXPIRY                  (OSTRACE_EMPTY + 0x2A)  /* RTAtrace_code_req 578 */ /* in alarm-handler interrupt */

#define OSTRACE_CAT0_START                      (OSTRACE_EMPTY + 0x2B)  /* RTAtrace_code_req 585 */ /* start of Cat0 ISR */
#define OSTRACE_CAT0_END                        (OSTRACE_EMPTY + 0x2C)  /* RTAtrace_code_req 586 */ /* end of Cat0 ISR */

#define OSTRACE_GETRESOURCE_STARTED             (OSTRACE_EMPTY + 0x30)  /* RTAtrace_code_req 456 */ /* start of call to GetResource */
#define OSTRACE_TRACEDATA_STARTED               (OSTRACE_EMPTY + 0x31)  /* RTAtrace_code_req 457 */ /* start of call to osTraceAppendData */
#define OSTRACE_ISR_ENTRY                       (OSTRACE_EMPTY + 0x32)  /* RTAtrace_code_req 458 */ /* start of scheduler interrupt */
#define OSTRACE_ISR_EXIT                        (OSTRACE_EMPTY + 0x33)  /* RTAtrace_code_req 459 */ /* end of scheduler interrupt */
#define OSTRACE_INITTASK_START                  (OSTRACE_EMPTY + 0x34)  /* RTAtrace_code_req 460 */ /* start of initialization task */
#define OSTRACE_INITTASK_END                    (OSTRACE_EMPTY + 0x35)  /* RTAtrace_code_req 461 */ /* end of initialization task */
#define OSTRACE_SEND_IMPLICIT_MSG               (OSTRACE_EMPTY + 0x36)  /* RTAtrace_code_req 462 */ /* Send ERCOSEK state message (implicit) */
#define OSTRACE_STACKDATA                       (OSTRACE_EMPTY + 0x37)  /* RTAtrace_code_req 463 */ /* stack data record */
#define OSTRACE_DISCONTINUITY                   (OSTRACE_EMPTY + 0x38)  /* RTAtrace_code_req 464 */ /* Following records are unconnected with any earlier */
#define OSTRACE_TRIGGER                         (OSTRACE_EMPTY + 0x39)  /* RTAtrace_code_req 465 */ /* Following record is trigger record */

#define OSTRACE_FINISHED                        (OSTRACE_EMPTY + 0x40)  /* RTAtrace_code_req 466 */ /* No data to follow. */
#define OSTRACE_SHUTDOWNHOOK                    (OSTRACE_EMPTY + 0x41)  /* RTAtrace_code_req 511 */ /* entry to ShutdownHook */


#if ((OSTRACE_KIND_SIZE) == 16)

/* Definitions for 16-bit IDs. */

#define OSTRACE_EMPTY                           (0x0100)        /* empty (no entry, initialized) */

#define OSTRACE_DATA_RECORD                     (0x0070)        /* data before trace entry */
#define OSTRACE_STACKPOINTER_RECORD             (0x007F)        /* stack data before trace entry */

#define OSTRACE_TASKPOINT                       (0x8000)        /* task-specific Tracepoint offset for 16-bit trace IDs */
#define OSTRACE_POINT                           (0xA000)        /* global Tracepoint offset for 16-bit trace IDs */

#define OSTRACE_STARTINTERVAL                   (0xC000)        /* start interval */
#define OSTRACE_STOPINTERVAL                    (0xE000)        /* stop interval */

#endif
#if ((OSTRACE_KIND_SIZE) == 8)

/* Definitions for 8-bit IDs. */

#define OSTRACE_EMPTY                           (0x00)          /* empty (no entry, initialized) */

#define OSTRACE_DATA_RECORD                     (0x70)          /* data before trace entry */
#define OSTRACE_STACKPOINTER_RECORD             (0x7F)          /* stack data before trace entry */

#define OSTRACE_TASKPOINT                       (0x80)          /* task-specific Tracepoint offset for 8-bit trace IDs */
#define OSTRACE_POINT                           (0xC0)          /* global Tracepoint offset for 8-bit trace IDs */

/* Backward compatibility set (do not renumber) */
#define OSTRACE_STARTINTERVAL                   (OSTRACE_EMPTY + 0x0D)  /* RTAtrace_code_req 427 */
#define OSTRACE_STOPINTERVAL                    (OSTRACE_EMPTY + 0x0E)  /* RTAtrace_code_req 428 */

#endif


/* Status codes returned by API calls (e.g. SetTriggerWindow). */
#define OSTRACE_STATUS_OK ((osTraceStatus)0)                    /* RTAtrace_code_req 478 */
#define OSTRACE_STATUS_LARGE_OFFSET ((osTraceStatus)1)          /* RTAtrace_code_req 479 */
#define OSTRACE_STATUS_COMM_INIT_FAILURE ((osTraceStatus)2)     /* RTAtrace_code_req 480 */




/* --- Task activation --- */

/* MISRA RULE VIOLATION:warning 652 : #define of symbol ActivateTask declared previously.[Classified:Deliberate].
                        ActivateTask requires different implementation from ERCOSEK kernel source code */
#define ActivateTask(taskName)  (osTraceAct(OSTRACE_ACTIVATION, (osTraceInfoType)((taskName)->id)), ActivateTask(taskName))     /* RTAtrace_code_req  23 */

#if (OSTRACE_ACTIVATION_BF == 1)
#define osTraceAct(a, b)        OSTRACE_APPEND_FIN__((a), (b)) /* RTAtrace_code_req 91 */
#elif (OSTRACE_ACTIVATION_RF == 1)
#define osTraceAct(a, b)        ((osTraceEnabledSystemClasses & (TRACE_ACTIVATIONS_CLASS)) ? OSTRACE_APPEND_FIN__((a), (b)) : (void)0) /* RTAtrace_code_req 92 */
#else /* Activate tracing disabled */
#define osTraceAct(a, b)        ((void)0) /* RTAtrace_code_req 93 */
#endif

/* --- Alarm task activation --- */
#if (OSTRACE_ALARM_BF == 1)
/* MISRA RULE 42 VIOLATION:comma operator used outside of 'for' expression.
                           [Classified:Deliberate]. The comma operator is used instead of a semicolon so that a macro 
                           can be written within round brackets and thus placed on one line so that rule 54 is not 
                           breached. */
#define osTraceALAct(a, b)      (OSTRACE_APPEND__(OSTRACE_ALARM_EXPIRY, (b)), osTraceActivateTask(a)) /* RTAtrace_code_req 229 */
#define osTraceAlarm(a, b)      (OSTRACE_APPEND__((a), (b))) /* RTAtrace_code_req 591 */
#elif (OSTRACE_ALARM_RF == 1)
#define osTraceALAct(a, b)      ((osTraceEnabledSystemClasses & (TRACE_ALARMS_CLASS)) ? (OSTRACE_APPEND__(OSTRACE_ALARM_EXPIRY, (b)), osTraceActivateTask(a)) : ActivateTask(a)) /* RTAtrace_code_req 233 */
#define osTraceAlarm(a, b)      ((osTraceEnabledSystemClasses & (TRACE_ALARMS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 592 */
#else
#define osTraceALAct(a, b)      (ActivateTask(a)) /* RTAtrace_code_req 231 */
#define osTraceAlarm(a, b)      ((void)0) /* RTAtrace_code_req 593 */
#endif

/* --- Timetable task activation --- */
#if (OSTRACE_TIMETABLE_BF == 1)
#define osTraceTTAct(a, b)      (OSTRACE_APPEND__(OSTRACE_TIMETABLE_EXPIRY, (b)), ActivateTask(a)) /* RTAtrace_code_req 228 */
#elif (OSTRACE_TIMETABLE_RF == 1)
#define osTraceTTAct(a, b)      (((osTraceEnabledSystemClasses & (TRACE_TIMETABLES_CLASS)) ? OSTRACE_APPEND__(OSTRACE_TIMETABLE_EXPIRY, (b)) : (void)0), ActivateTask(a)) /* RTAtrace_code_req 230 */
#else
#define osTraceTTAct(a, b)      (ActivateTask(a)) /* RTAtrace_code_req 232 */
#endif

/* --- GetResource, ReleaseResource --- */

/* MISRA RULE VIOLATION:warning 652 : #define of symbol GetResource, ReleaseResource, Schedule declared 
                        previously.[Classified:Deliberate].
                        All these macros requires different implementation from ERCOSEK kernel source code */
#define GetResource(a)          (osTraceGetRes(OSTRACE_GETRESOURCE, (a) >> 8, GetResource(a))) /* RTAtrace_code_req  25 */
#define ReleaseResource(a)      (osTraceRelRes(OSTRACE_RELEASERESOURCE, (a) >> 8), ReleaseResource(a)) /* RTAtrace_code_req  26 */
#define Schedule()              (osTraceRelRes(OSTRACE_SCHEDULE, OSTRACE_GetTaskID()), osTraceGetRes(OSTRACE_SCHEDULE_RETURNED, OSTRACE_GetTaskID(), Schedule())) /* Schedule is viewed in terms of resources. */ /* RTAtrace_code_req 495 */


#if (OSTRACE_RESOURCE_BF == 1)
#define osTraceGetRes(a, b, c)  OSTRACE_APPEND_STAT__((a), (b), (c)) /* RTAtrace_code_req 96 */
#define osTraceRelRes(a, b)     OSTRACE_APPEND_FIN__((a), (b)) /* RTAtrace_code_req 101 */
#elif (OSTRACE_RESOURCE_RF == 1)
#define osTraceGetRes(a, b, c)  ((osTraceEnabledSystemClasses & (TRACE_RESOURCES_CLASS)) ? OSTRACE_APPEND_STAT__((a), (b), (c)) : (c)) /* RTAtrace_code_req 97 */
#define osTraceRelRes(a, b)     ((osTraceEnabledSystemClasses & (TRACE_RESOURCES_CLASS)) ? OSTRACE_APPEND_FIN__((a), (b)) : (void)0) /* RTAtrace_code_req 102 */
#else /* Resource tracing disabled */
#define osTraceGetRes(a, b, c)  (c) /* RTAtrace_code_req 98 */
#define osTraceRelRes(a, b)     ((void)0) /* RTAtrace_code_req 103 */
#endif

/* --- DisableAllInterrupts, EnableAllInterrupts, SuspendAllInterrupts, ResumeAllInterrupts, SuspendOSInterrupts and ResumeAllInterrupts --- */
#define DisableAllInterrupts()  (DisableAllInterrupts(), osTraceInt(OSTRACE_DISABLE_ALL_INTERRUPTS, 0)) /* RTAtrace_code_req  28 */
#define EnableAllInterrupts()   (osTraceInt(OSTRACE_ENABLE_ALL_INTERRUPTS, 0), EnableAllInterrupts()) /* RTAtrace_code_req  29 */
#define SuspendAllInterrupts()  (SuspendAllInterrupts(), osTraceInt(OSTRACE_SUSPEND_ALL_INTERRUPTS, osTraceAllInterruptsDisableCtr++)) /* RTAtrace_code_req  30 */
#define ResumeAllInterrupts()   (osTraceInt(OSTRACE_RESUME_ALL_INTERRUPTS, --osTraceAllInterruptsDisableCtr), ResumeAllInterrupts()) /* RTAtrace_code_req  31 */

/* MISRA RULE 92 VIOLATION: #undef should not be used.[Classified:Deliberate].
                            SuspendOSInterrupts already exists as macro in ERCOSEK kernel source code. */
#undef SuspendOSInterrupts
/* NB use of {} because SUSPEND_LS_INTERRUPTS is not an expression */
#define SuspendOSInterrupts()   {SUSPEND_LS_INTERRUPTS; osTraceInt(OSTRACE_SUSPEND_OS_INTERRUPTS, osTraceOSInterruptsDisableCtr++);} /* RTAtrace_code_req  32 */

/* MISRA RULE 92 VIOLATION: #undef should not be used.[Classified:Deliberate].
                            ResumeOSInterrupts already exists as macro in ERCOSEK kernel source code. */
#undef ResumeOSInterrupts
/* NB use of {} because RESUME_LS_INTERRUPTS is not an expression */
#define ResumeOSInterrupts()    {osTraceInt(OSTRACE_RESUME_OS_INTERRUPTS, --osTraceOSInterruptsDisableCtr); RESUME_INTERRUPTS;} /* RTAtrace_code_req  33 */

#if (OSTRACE_INTERRUPT_LOCK_BF == 1)
#define osTraceInt(a, b)        OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 106 */
#elif (OSTRACE_INTERRUPT_LOCK_RF == 1)
/* NB second argument is always evaluated in order to achieve ++/-- side-effect */
#define osTraceInt(a, b)        ((osTraceEnabledSystemClasses & (TRACE_INTERRUPT_LOCKS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)(b)) /* RTAtrace_code_req 107 */
#else /* Interrupt lock tracing disabled */
#define osTraceInt(a, b)        ((void)0) /* RTAtrace_code_req 108 */
#endif

/* --- OS Overheads --- */

#if (OSTRACE_OVERHEAD_BF == 1)
#define osTraceOH(a, b)         OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req  158 */
#define osTraceOHFin(a, b)      OSTRACE_APPEND_FIN__((a), (b)) /* RTAtrace_code_req  602 */
#define osTraceOHStat(a, b, c)  OSTRACE_APPEND_STAT__((a), (b), (c)) /* RTAtrace_code_req  161 */
#elif (OSTRACE_OVERHEAD_RF == 1)
#define osTraceOH(a, b)         ((osTraceEnabledSystemClasses & (TRACE_SWITCHING_OVERHEADS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req  159 */
#define osTraceOHFin(a, b)      ((osTraceEnabledSystemClasses & (TRACE_SWITCHING_OVERHEADS_CLASS)) ? OSTRACE_APPEND_FIN__((a), (b)) : (void)0) /* RTAtrace_code_req  603 */
#define osTraceOHStat(a, b, c)  ((osTraceEnabledSystemClasses & (TRACE_SWITCHING_OVERHEADS_CLASS)) ? OSTRACE_APPEND_STAT__((a), (b), (c)) : (c))        /* Note double-expansion of "c" */ /* RTAtrace_code_req  162 */
#else /* OS overheads tracing disabled */
#define osTraceOH(a, b)         ((void)0) /* RTAtrace_code_req  160 */
#define osTraceOHFin(a, b)      ((void)0) /* RTAtrace_code_req  604 */
#define osTraceOHStat(a, b, c)  (c) /* RTAtrace_code_req  163 */
#endif

/* --- Start and end of task --- */

#if (OSTRACE_TASK_BF == 1) || (OSTRACE_OVERHEAD_BF == 1)
#define osTraceTask(a, b)       OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 111 */
#elif (OSTRACE_TASK_RF == 1) && (OSTRACE_OVERHEAD_RF == 1)
#define osTraceTask(a, b)       ((osTraceEnabledSystemClasses & (TRACE_TASKS_AND_ISRS_CLASS | TRACE_SWITCHING_OVERHEADS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 112 */
#elif (OSTRACE_TASK_RF == 1) && (OSTRACE_OVERHEAD_RF == 0)
#define osTraceTask(a, b)       ((osTraceEnabledSystemClasses & (TRACE_TASKS_AND_ISRS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 112 */
#elif (OSTRACE_TASK_RF == 0) && (OSTRACE_OVERHEAD_RF == 1)
#define osTraceTask(a, b)       ((osTraceEnabledSystemClasses & (TRACE_SWITCHING_OVERHEADS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 112 */
#else /* Task tracing disabled */
#define osTraceTask(a, b)       ((void)0) /* RTAtrace_code_req 113 */
#endif

/* --- Start and end of initialization task, ShutdownHook --- */

#if (OSTRACE_STARTUP_AND_SHUTDOWN_BF == 1)
#define osTraceInitTask(a, b)   OSTRACE_APPEND__((a), (b))/* RTAtrace_code_req  235 */
#define osTraceShutdown(a, b)   OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 566 */
#elif (OSTRACE_STARTUP_AND_SHUTDOWN_RF == 1)
#define osTraceInitTask(a, b)   ((osTraceEnabledSystemClasses & (TRACE_STARTUP_AND_SHUTDOWN_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req  236 */
#define osTraceShutdown(a, b)   ((osTraceEnabledSystemClasses & (TRACE_STARTUP_AND_SHUTDOWN_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req  567 */
#else /* Intisialization task tracing disabled */
#define osTraceInitTask(a, b)   ((void)0) /* RTAtrace_code_req  237 */
#define osTraceShutdown(a, b)   ((void)0) /* RTAtrace_code_req  568 */
#endif

/* --- TerminateTask and ChainTask --- */

/* MISRA RULE VIOLATION:warning 652 : #define of symbol TerminateTask, ChainTask  declared previously.[Classified:Deliberate].
                        These macros requires different implementation from ERCOSEK kernel source code */
#define TerminateTask()         (osTraceTask(OSTRACE_TASKEND, osTraceGetTaskID()), TerminateTask())                     /* RTAtrace_code_req  14 */
#define ChainTask(taskName)     (osTraceAct(OSTRACE_CHAINACTIVATION, (osTraceInfoType)((taskName)->id)), osTraceTask(OSTRACE_TASKEND, osTraceGetTaskID()), ChainTask(taskName)) /* RTAtrace_code_req  15 */

/* --- Start and end of process --- */

#if (OSTRACE_PROCESS_BF == 1)
#define osTraceProcStart(a, b)  OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 116 */
#elif (OSTRACE_PROCESS_RF == 1)
#define osTraceProcStart(a, b)  ((osTraceEnabledSystemClasses & (TRACE_PROCESSES_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 117 */
#else /* Process start tracing disabled */
#define osTraceProcStart(a, b)  ((void)0) /* RTAtrace_code_req 118 */
#endif

#if (OSTRACE_OVERHEAD_BF == 1)
 #if (OSTRACE_PROCESS_BF == 1)
 #define osTraceProcEnd(a, b)   OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 315 */
 #elif (OSTRACE_PROCESS_RF == 1)
 #define osTraceProcEnd(a, b)   ((osTraceEnabledSystemClasses & (TRACE_PROCESSES_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req  481 */
 #else /* Process end tracing disabled */
 #define osTraceProcEnd(a, b)   ((void)0) /* RTAtrace_code_req 317 */
 #endif
#elif (OSTRACE_OVERHEAD_RF == 1)
 #if (OSTRACE_PROCESS_BF == 1)
 #define osTraceProcEnd(a, b)   ((osTraceEnabledSystemClasses & (TRACE_SWITCHING_OVERHEADS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 316 */
 #elif (OSTRACE_PROCESS_RF == 1)
 #define osTraceProcEnd(a, b)   (((osTraceEnabledSystemClasses & (TRACE_SWITCHING_OVERHEADS_CLASS | TRACE_PROCESSES_CLASS)) == (TRACE_SWITCHING_OVERHEADS_CLASS | TRACE_PROCESSES_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req  482 */
 #else /* Process end tracing disabled */
 #define osTraceProcEnd(a, b)   ((void)0) /* RTAtrace_code_req 317 */
 #endif
#else /* Process end tracing disabled */
#define osTraceProcEnd(a, b)    ((void)0) /* RTAtrace_code_req 317 */
#endif

/* --- Explicit state messages --- */

#if (OSTRACE_EXPLICIT_MESSAGE_BF == 1)
#define osTraceExplicitMessage(a, b)    OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 121 */
#elif (OSTRACE_EXPLICIT_MESSAGE_RF == 1)
#define osTraceExplicitMessage(a, b)    ((osTraceEnabledSystemClasses & (TRACE_EXPLICIT_STATE_MESSAGES_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 122 */
#else /* Explicit message tracing disabled */
#define osTraceExplicitMessage(a, b)    ((void)0) /* RTAtrace_code_req 123 */
#endif

/* --- OSEK messages --- */

#if 0
#define SendMessage(Msg, Acc) (osTraceOSEKMessageData(OSTRACE_SEND_OSEK_MSG, (Msg) /* REVIEWNOTE check this is the ID number */, (Acc), OSTRACE_MSG_LENGTH(Msg)), SendMessage((Msg), (Acc))) /* RTAtrace_code_req 252 */
#define ReceiveMessage(Msg, Acc) (ReceiveMessage((Msg), (Acc)), osTraceReceiveOSEKMessage(OSTRACE_RECEIVE_OSEK_MSG, (Msg) /* REVIEWNOTE check this is the ID number */) /* RTAtrace_code_req 253 */
#endif

#if (OSTRACE_OSEK_MESSAGE_BF == 1)
#define osTraceReceiveOSEKMessage(a, b) OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 246 */
#define osTraceSendOSEKMessage(a, b)    OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 605 */
#elif (OSTRACE_OSEK_MESSAGE_RF == 1)
#define osTraceReceiveOSEKMessage(a, b) ((osTraceEnabledSystemClasses & (TRACE_OSEK_MESSAGES_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 247 */
 /* SendMessage may also be tracked for task activations. */
 #if (OSTRACE_ACTIVATION_BF == 1)
 #define osTraceSendOSEKMessage(a, b)   OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 605 */
 #elif (OSTRACE_ACTIVATION_RF == 1)
 #define osTraceSendOSEKMessage(a, b)   ((osTraceEnabledSystemClasses & (TRACE_OSEK_MESSAGES_CLASS | TRACE_ACTIVATIONS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 607 */
 #else
 #define osTraceSendOSEKMessage(a, b)   ((osTraceEnabledSystemClasses & (TRACE_OSEK_MESSAGES_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 606 */
 #endif
#else /* OSEK message tracing disabled */
#define osTraceReceiveOSEKMessage(a, b) ((void)0) /* RTAtrace_code_req 248 */
 /* SendMessage may also be tracked for task activations. */
 #if (OSTRACE_ACTIVATION_BF == 1)
 #define osTraceSendOSEKMessage(a, b)   OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 605 */
 #elif (OSTRACE_ACTIVATION_RF == 1)
 #define osTraceSendOSEKMessage(a, b)   ((osTraceEnabledSystemClasses & (TRACE_ACTIVATIONS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 608 */
 #else
 #define osTraceSendOSEKMessage(a, b)   ((void)0) /* RTAtrace_code_req 609 */
 #endif
#endif

/* --- Message data --- */

#if (OSTRACE_MESSAGE_DATA_BF == 1)
#define osTraceOSEKMessageData(a, b, d, l)      OSTRACE_APPEND_DATA__((a), (b), (d), (l)) /* RTAtrace_code_req 249 */
#define osTraceExplicitMessageData(a, b, d, l)  OSTRACE_APPEND_DATA__((a), (b), (d), (l)) /* RTAtrace_code_req 238 */
#define osTraceExplicitMessageVal(a, b, v)      OSTRACE_APPEND_VAL__((a), (b), (v)) /* RTAtrace_code_req 241 */
#define osTraceImplicitMessageData(a, b, d, l)  OSTRACE_APPEND_DATA__((a), (b), (d), (l)) /* RTAtrace_code_req 256 */
#define osTraceImplicitMessageVal(a, b, v)      OSTRACE_APPEND_VAL__((a), (b), (v)) /* RTAtrace_code_req 260 */
#elif (OSTRACE_MESSAGE_DATA_RF == 1)
#define osTraceOSEKMessageData(a, b, d, l)      ((osTraceEnabledSystemClasses & (TRACE_MESSAGE_DATA_CLASS)) ? OSTRACE_APPEND_DATA__((a), (b), (d), (l)) : osTraceSendOSEKMessage(a, b)) /* RTAtrace_code_req 250 */
#define osTraceExplicitMessageData(a, b, d, l)  ((osTraceEnabledSystemClasses & (TRACE_MESSAGE_DATA_CLASS)) ? OSTRACE_APPEND_DATA__((a), (b), (d), (l)) : osTraceExplicitMessage(a, b)) /* RTAtrace_code_req 239 */
#define osTraceExplicitMessageVal(a, b, v)      ((osTraceEnabledSystemClasses & (TRACE_MESSAGE_DATA_CLASS)) ? OSTRACE_APPEND_VAL__((a), (b), (v)) : osTraceExplicitMessage(a, b)) /* RTAtrace_code_req 242 */
#define osTraceImplicitMessageData(a, b, d, l)  ((osTraceEnabledSystemClasses & (TRACE_MESSAGE_DATA_CLASS)) ? OSTRACE_APPEND_DATA__((a), (b), (d), (l)) : (void)0) /* RTAtrace_code_req 258 */
#define osTraceImplicitMessageVal(a, b, v)      ((osTraceEnabledSystemClasses & (TRACE_MESSAGE_DATA_CLASS)) ? OSTRACE_APPEND_VAL__((a), (b), (v)) : (void)0) /* RTAtrace_code_req 261 */
#else /* Message data tracing disabled */
#define osTraceOSEKMessageData(a, b, d, l)      osTraceSendOSEKMessage(a, b) /* RTAtrace_code_req 251 */
#define osTraceExplicitMessageData(a, b, d, l)  osTraceExplicitMessage(a, b) /* RTAtrace_code_req 240 */
#define osTraceExplicitMessageVal(a, b, v)      osTraceExplicitMessage(a, b) /* RTAtrace_code_req 243 */
#define osTraceImplicitMessageData(a, b, d, l)  ((void)0) /* RTAtrace_code_req 259 */
#define osTraceImplicitMessageVal(a, b, v)      ((void)0) /* RTAtrace_code_req 262 */
#endif

/* --- Errors --- */

#if (OSTRACE_ERROR_BF == 1)
#define osTraceError(a, b)      OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 10 */
#elif (OSTRACE_ERROR_RF == 1)
#define osTraceError(a, b)      ((osTraceEnabledSystemClasses & (TRACE_ERRORS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 11 */
#else /* Error tracing disabled */
#define osTraceError(a, b)      ((void)0) /* RTAtrace_code_req 18 */
#endif

/* --- global Tracepoints, task-specific Tracepoints and Intervals  --- */

#if (OSTRACE_TASK_POINT_BF == 1)
#define osTraceTaskPoint__(a, b)        OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 131 */
#define osTraceTaskPointData__(a, b, c, d)      OSTRACE_APPEND_DATA__((a), (b), (c), (d)) /* RTAtrace_code_req 95 */
#define osTraceTaskPointVal__(a, b, c)  OSTRACE_APPEND_VAL__((a), (b), (c)) /* RTAtrace_code_req 219 */
#elif (OSTRACE_TASK_POINT_RF == 1)
#define osTraceTaskPoint__(a, b)        ((osTraceEnabledSystemClasses & (TRACE_TASK_TRACEPOINT_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 132 */
#define osTraceTaskPointData__(a, b, c, d)      ((osTraceEnabledSystemClasses & (TRACE_TASK_TRACEPOINT_CLASS)) ? OSTRACE_APPEND_DATA__((a), (b), (c), (d)) : (void)0) /* RTAtrace_code_req 134 */
#define osTraceTaskPointVal__(a, b, c)  ((osTraceEnabledSystemClasses & (TRACE_TASK_TRACEPOINT_CLASS)) ? OSTRACE_APPEND_VAL__((a), (b), (c)) : (void)0) /* RTAtrace_code_req 220 */
#else /* Task-specific Tracepoint tracing disabled */
#define osTraceTaskPoint__(a, b)        ((void)0) /* RTAtrace_code_req 133 */
#define osTraceTaskPointData__(a, b, c, d)      ((void)0) /* RTAtrace_code_req 135 */
#define osTraceTaskPointVal__(a, b, c)  ((void)0) /* RTAtrace_code_req 221 */
#endif

#if (OSTRACE_POINT_BF == 1)
#define osTracePoint__(a, b)            OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 126 */
#define osTracePointData__(a, c, d)     OSTRACE_APPEND_DATA__((a), 0, (c), (d)) /* RTAtrace_code_req 129 */
#define osTracePointVal__(a, c)         OSTRACE_APPEND_VAL__((a), 0, (c)) /* RTAtrace_code_req 216 */
#elif (OSTRACE_POINT_RF == 1)
#define osTracePoint__(a, b)            ((osTraceEnabledSystemClasses & (TRACE_TRACEPOINT_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 127 */
#define osTracePointData__(a, c, d)     ((osTraceEnabledSystemClasses & (TRACE_TRACEPOINT_CLASS)) ? OSTRACE_APPEND_DATA__((a), 0, (c), (d)) : (void)0) /* RTAtrace_code_req 130 */
#define osTracePointVal__(a, c)         ((osTraceEnabledSystemClasses & (TRACE_TRACEPOINT_CLASS)) ? OSTRACE_APPEND_VAL__((a), 0, (c)) : (void)0) /* RTAtrace_code_req 217 */
#else /* global Tracepoint tracing disabled */
#define osTracePoint__(a, b)            ((void)0) /* RTAtrace_code_req 128 */
#define osTracePointData__(a, c, d)     ((void)0) /* RTAtrace_code_req 94 */
#define osTracePointVal__(a, c)         ((void)0) /* RTAtrace_code_req 218 */
#endif

#if (OSTRACE_INTERVAL_BF == 1)
#define osTraceInterval(a, b)           OSTRACE_APPEND__((a), (b)) /* RTAtrace_code_req 136 */
#define osTraceIntervalData(a, b, c, d) OSTRACE_APPEND_DATA__((a), (b), (c), (d)) /* RTAtrace_code_req 114 */
#define osTraceIntervalVal(a, b, c)     OSTRACE_APPEND_VAL__((a), (b), (c)) /* RTAtrace_code_req 222 */
#elif (OSTRACE_INTERVAL_RF == 1)
#define osTraceInterval(a, b)           ((osTraceEnabledSystemClasses & (TRACE_INTERVALS_CLASS)) ? OSTRACE_APPEND__((a), (b)) : (void)0) /* RTAtrace_code_req 137 */
#define osTraceIntervalData(a, b, c, d) ((osTraceEnabledSystemClasses & (TRACE_INTERVALS_CLASS)) ? OSTRACE_APPEND_DATA__((a), (b), (c), (d)) : (void)0) /* RTAtrace_code_req 139 */
#define osTraceIntervalVal(a, b, c)     ((osTraceEnabledSystemClasses & (TRACE_INTERVALS_CLASS)) ? OSTRACE_APPEND_VAL__((a), (b), (c)) : (void)0) /* RTAtrace_code_req 223 */
#else /* Interval tracing disabled */
#define osTraceInterval(a, b)           ((void)0) /* RTAtrace_code_req 138 */
#define osTraceIntervalData(a, b, c, d) ((void)0) /* RTAtrace_code_req 140 */
#define osTraceIntervalVal(a, b, c)     ((void)0) /* RTAtrace_code_req 224 */
#endif


#define LogTaskTracepoint(point, cats)          ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceTaskPoint__(OSTRACE_TASKPOINT + (point), osTraceGetTaskID()) : (void)0) /* RTAtrace_code_req 192 */
#define LogTaskTracepointData(point, d, l, cats)        ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceTaskPointData__(OSTRACE_TASKPOINT + (point), osTraceGetTaskID(), (osTraceDataPtr)(d), (osTraceDataLength)(l)) : (void)0) /* RTAtrace_code_req 191 */
#define LogTaskTracepointValue(point, v, cats)  ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceTaskPointVal__(OSTRACE_TASKPOINT + (point), osTraceGetTaskID(), (v)) : (void)0) /* RTAtrace_code_req 214 */

#define LogTracepoint(point, cats)              ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTracePoint__(OSTRACE_POINT + (point), 0) : (void)0) /* RTAtrace_code_req 190 */
#define LogTracepointData(point, d, l, cats)    ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTracePointData__(OSTRACE_POINT + (point), (osTraceDataPtr)(d), (osTraceDataLength)(l)) : (void)0) /* RTAtrace_code_req 189 */
#define LogTracepointValue(point, v, cats)      ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTracePointVal__(OSTRACE_POINT + (point), (v)) : (void)0) /* RTAtrace_code_req 213 */



#if (OSTRACE_KIND_SIZE == 16)
#define LogIntervalStart(watch_ID, cats)        ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceInterval(OSTRACE_STARTINTERVAL + (watch_ID), 0) : (void)0) /* RTAtrace_code_req 194 */
#define LogIntervalStartData(watch_ID, d, l, cats)      ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceIntervalData(OSTRACE_STARTINTERVAL + (watch_ID), 0, (osTraceDataPtr)(d), (osTraceDataLength)(l)) : (void)0) /* RTAtrace_code_req 193 */
#define LogIntervalStartValue(watch_ID, v, cats)        ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceIntervalVal(OSTRACE_STARTINTERVAL + (watch_ID), 0, (v)) : (void)0) /* RTAtrace_code_req 225 */
#endif
#if (OSTRACE_KIND_SIZE == 8)
#define LogIntervalStart(watch_ID, cats)        ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceInterval(OSTRACE_STARTINTERVAL, (watch_ID)) : (void)0) /* RTAtrace_code_req 194 */
#define LogIntervalStartData(watch_ID, d, l, cats)      ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceIntervalData(OSTRACE_STARTINTERVAL, (watch_ID), (osTraceDataPtr)(d), (osTraceDataLength)(l)) : (void)0) /* RTAtrace_code_req 193 */
#define LogIntervalStartValue(watch_ID, v, cats)        ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceIntervalVal(OSTRACE_STARTINTERVAL, (watch_ID), (v)) : (void)0) /* RTAtrace_code_req 225 */
#endif

#if (OSTRACE_KIND_SIZE == 16)
#define LogIntervalStop(watch_ID, cats) ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceInterval(OSTRACE_STOPINTERVAL + (watch_ID), 0) : (void)0)  /* RTAtrace_code_req 196 */
#define LogIntervalStopData(watch_ID, d, l, cats)       ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceIntervalData(OSTRACE_STOPINTERVAL + (watch_ID), 0, (osTraceDataPtr)(d), (osTraceDataLength)(l)) : (void)0) /* RTAtrace_code_req 195 */
#define LogIntervalStopValue(watch_ID, v, cats) ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceIntervalVal(OSTRACE_STOPINTERVAL + (watch_ID), 0, (v)) : (void)0) /* RTAtrace_code_req 215 */
#endif
#if (OSTRACE_KIND_SIZE == 8)
#define LogIntervalStop(watch_ID, cats) ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceInterval(OSTRACE_STOPINTERVAL, (watch_ID)) : (void)0) /* RTAtrace_code_req 196 */
#define LogIntervalStopData(watch_ID, d, l, cats)       ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceIntervalData(OSTRACE_STOPINTERVAL, (watch_ID), (osTraceDataPtr)(d), (osTraceDataLength)(l)) : (void)0) /* RTAtrace_code_req 195 */
#define LogIntervalStopValue(watch_ID, v, cats) ((OSTRACE_ENABLEDCATEGORIES(cats)) ? osTraceIntervalVal(OSTRACE_STOPINTERVAL, (watch_ID), (v)) : (void)0) /* RTAtrace_code_req 215 */
#endif


/*-------------------------------------------------------------------------------------------------
 *        Triggering
 *-------------------------------------------------------------------------------------------------
 */

#define TriggerOnActivation(TASK) SetTriggerConditions(OSTRACE_ACTIVATION, (TASK) == 0 ? 0 : (TASK)->id)         /* RTAtrace_code_req  542 */
#define TriggerOnChain(TASK) SetTriggerConditions(OSTRACE_CHAINACTIVATION, (TASK) == 0 ? 0 : (TASK)->id)         /* RTAtrace_code_req  541 */
#define TriggerOnTaskStart(TASK) SetTriggerConditions(OSTRACE_TASKSTART, (TASK) == 0 ? 0 : (TASK)->id)           /* RTAtrace_code_req  540 */
#define TriggerOnTaskStop(TASK) SetTriggerConditions(OSTRACE_TASKEND, (TASK) == 0 ? 0 : (TASK)->id)              /* RTAtrace_code_req  539 */
#define TriggerOnISRStart(ISR) SetTriggerConditions(OSTRACE_ISR_ENTRY, osTraceIsrID_##ISR)                       /* RTAtrace_code_req  538 */
#define TriggerOnISRStop(ISR) SetTriggerConditions(OSTRACE_ISR_EXIT, osTraceIsrID_##ISR)                         /* RTAtrace_code_req  537 */
#define TriggerOnInitTaskStart(MODE) SetTriggerConditions(OSTRACE_INITTASK_START, MODE)                            /* RTAtrace_code_req  536 */
#define TriggerOnInitTaskStop(MODE) SetTriggerConditions(OSTRACE_INITTASK_END, MODE)                               /* RTAtrace_code_req  535 */
#define TriggerOnGetResource(RES) SetTriggerConditions(OSTRACE_GETRESOURCE, (RES) == 0 ? 0 : (RES))              /* RTAtrace_code_req  534 */
#define TriggerOnReleaseResource(RES) SetTriggerConditions(OSTRACE_RELEASERESOURCE, (RES) == 0 ? 0 : (RES))      /* RTAtrace_code_req  533 */
#define TriggerOnTracepoint(POINT) SetTriggerConditions(OSTRACE_POINT + (POINT), 0)                              /* RTAtrace_code_req  532 */
#define TriggerOnTaskTracepoint(POINT, TASK) SetTriggerConditions(OSTRACE_TASKPOINT + (POINT), (TASK) == 0 ? 0 : (TASK)->id)     /* RTAtrace_code_req  531 */
#if (OSTRACE_KIND_SIZE == 8)
#define TriggerOnIntervalStart(INTERVAL) SetTriggerConditions(OSTRACE_STARTINTERVAL, (INTERVAL))                 /* RTAtrace_code_req  530 */
#define TriggerOnIntervalStop(INTERVAL) SetTriggerConditions(OSTRACE_STOPINTERVAL, (INTERVAL))                   /* RTAtrace_code_req  529 */
#endif
#if (OSTRACE_KIND_SIZE == 16)
#define TriggerOnIntervalStart(INTERVAL) SetTriggerConditions(OSTRACE_STARTINTERVAL + (INTERVAL), 0)             /* RTAtrace_code_req  530 */
#define TriggerOnIntervalStop(INTERVAL) SetTriggerConditions(OSTRACE_STOPINTERVAL + (INTERVAL), 0)               /* RTAtrace_code_req  529 */
#endif
#define TriggerOnTimetableExpiry(TT) SetTriggerConditions(OSTRACE_TIMETABLE_EXPIRY, (TT))                        /* RTAtrace_code_req  528 */
#define TriggerOnAlarmExpiry(ALARM) SetTriggerConditions(OSTRACE_ALARM_EXPIRY, (ALARM))                          /* RTAtrace_code_req  527 */
#define TriggerOnExplicitSendStateMessage(MSG) SetTriggerConditions(OSTRACE_SEND_EXPLICIT_MESSAGE, (osTraceMsgID_##MSG)) /* RTAtrace_code_req  526 */
#define TriggerOnExplicitReceiveStateMessage(MSG) SetTriggerConditions(OSTRACE_RECEIVE_EXPLICIT_MESSAGE, (osTraceMsgID_##MSG)) /* RTAtrace_code_req  525 */
#define TriggerOnSendMessage(MSG) SetTriggerConditions(OSTRACE_RECEIVE_OSEK_MSG, (MSG))                          /* RTAtrace_code_req  524 */
#define TriggerOnReceiveMessage(MSG) SetTriggerConditions(OSTRACE_RECEIVE_OSEK_MSG, (MSG))                       /* RTAtrace_code_req  523 */
#define TriggerOnShutdown(STATUS) SetTriggerConditions(OSTRACE_SHUTDOWNHOOK, (STATUS))                           /* RTAtrace_code_req  544 */
#define TriggerOnError(STATUS) SetTriggerConditions(OSTRACE_ERRORHOOK, (STATUS))                                 /* RTAtrace_code_req  522 */
#define ClearTrigger() SetTriggerConditions(OSTRACE_TRIGGER, 0)                                                  /* RTAtrace_code_req  521 */
#define TRIGGER_ANY (0)

/*-------------------------------------------------------------------------------------------------
 *        External data
 *-------------------------------------------------------------------------------------------------
 */

extern volatile osTraceMaskType osTraceEnabledSystemClasses;
extern volatile osTraceMaskType osTraceEnabledCategories;
#ifdef OSTRACE_INFO_SIZE
extern volatile osTraceInfoType osTraceAllInterruptsDisableCtr;
extern volatile osTraceInfoType osTraceOSInterruptsDisableCtr;
#endif

#define OSTRACE_BUFFER_WRITE_ENABLED		(0x1u << 0)
extern osTraceSmallType osTraceBufferFlags;				/* RTAtrace_code_req 313, RTAtrace_code_req 374 */

/*-------------------------------------------------------------------------------------------------
 *        Function prototypes
 *-------------------------------------------------------------------------------------------------
 */

#if defined(OSTRACE_TIME_SIZE) && defined(OSTRACE_KIND_SIZE) && defined(OSTRACE_INFO_SIZE)

/* Log an event in the trace buffer. */
void OSTRACE_APPEND(osTraceKindType, osTraceInfoType);

/* Variant of OSTRACE_APPEND with predictable duration between time stamp and finish. */
void OSTRACE_APPEND_FIN(osTraceKindType, osTraceInfoType);

/* Log an event in the trace buffer after evaluating an API call, then "pass-through" API call's return status. */
StatusType OSTRACE_APPEND_STAT(osTraceKindType, osTraceInfoType, StatusType);

/* Log an event in the trace buffer and write some data too. */
void OSTRACE_APPEND_DATA(osTraceKindType, osTraceInfoType, osTraceDataPtr, osTraceDataLength);

/* Log an event in the trace buffer and write the contents of an 8-bit variable too. */
void OSTRACE_APPEND_VAL8(osTraceKindType, osTraceInfoType, osTraceUInt8);
/* Log an event in the trace buffer and write the contents of an 16-bit variable too. */
void OSTRACE_APPEND_VAL16(osTraceKindType, osTraceInfoType, osTraceUInt16);
#if ((OSTRACE_TIME_SIZE) == 32)
/* Log an event in the trace buffer and write the contents of an 32-bit variable too. */
void OSTRACE_APPEND_VAL32(osTraceKindType, osTraceInfoType, osTraceUInt32);
#endif /* ((OSTRACE_TIME_SIZE) == 32) */

void OSTRACE_APPEND_STACKDATA(osTraceTimeType stackdata);
void SetTriggerConditions(osTraceKindType, osTraceInfoType);
void osTraceBreakLabel(void);

#endif /* defined(OSTRACE_TIME_SIZE) && defined(OSTRACE_KIND_SIZE) && defined(OSTRACE_INFO_SIZE) */

#define OSTRACE_GetTaskID() (osTraceGetTaskID())
#if (!OSTRACE_OS_PREFIX)
#define T_os_taskId T_taskId
#endif
T_os_taskId osTraceGetTaskID(void);     /* Returns current task's numeric ID. */

/* Activate a task WITHOUT tracing */
StatusType osTraceActivateTask(TaskType);

/* Enable/Disable system classes of events. */
#define EnableTraceClasses(m) (osTraceEnableMask(&osTraceEnabledSystemClasses, (m)))    /* RTAtrace_code_req  71 */
#define DisableTraceClasses(m) (osTraceDisableMask(&osTraceEnabledSystemClasses, ~(m))) /* RTAtrace_code_req  72 */

/* Enable/Disable categories of user events. */
#define EnableTraceCategories(m) (osTraceEnableMask(&osTraceEnabledCategories, (m)))    /* RTAtrace_code_req  73 */
#define DisableTraceCategories(m)  (osTraceDisableMask(&osTraceEnabledCategories, ~(m)))/* RTAtrace_code_req  74 */

#if defined(OSTRACE_TIME_SIZE) && defined(OSTRACE_KIND_SIZE) && defined(OSTRACE_INFO_SIZE)
/* Stop tracing */
void StopTrace(void);                   /* RTAtrace_code_req 169 */

#define osTraceInit TTS(osTraceInit)
void osTraceInit(void);

void StartFreeRunningTrace(void);
void StartBurstingTrace(void);
void StartTriggeringTrace(void);
osTraceStatus SetTriggerWindow(osTraceUInt before, osTraceUInt after);  /* RTAtrace_code_req  543 */

void SetTraceRepeat(osTraceBool);       /* RTAtrace_code_req 492 */
void TriggerNow(void);                  /* RTAtrace_code_req 520 */

#endif

/* Manage reads from buffer */
void CheckTraceOutput(void);            /* RTAtrace_code_req 494 */

/* Called when descriptor state becomes "ready to trasmit" */
void osTraceDescriptorReady(void);

/* Internal interface to comms library */
osTraceStatus osTraceCommInit(void);

/* Function for detecting inactive tracing e.g. after StopTrace */
osTraceBool osTraceActive(void);

#else /* either RTAtrace is disabled or ANSI C checking phase */

/* Define user macros as harmless empties to allow compilation when RTAtrace is disabled. */

#define LogTaskTracepoint(point, cats)                  /* disabled */
#define LogTaskTracepointData(point, d, l, cats)        /* disabled */
#define LogTaskTracepointValue(point, v, cats)          /* disabled */
#define LogTracepoint(point, cats)                      /* disabled */
#define LogTracepointData(point, d, l, cats)            /* disabled */
#define LogTracepointValue(point, v, cats)              /* disabled */
#define LogIntervalStart(watch_ID, cats)                /* disabled */
#define LogIntervalStartData(watch_ID, d, l, cats)      /* disabled */
#define LogIntervalStartValue(watch_ID, v, cats)        /* disabled */
#define LogIntervalStop(watch_ID, cats)                 /* disabled */
#define LogIntervalStopData(watch_ID, d, l, cats)       /* disabled */
#define LogIntervalStopValue(watch_ID, v, cats)         /* disabled */
#define StartFreeRunningTrace()                         /* disabled */
#define StartBurstingTrace()                            /* disabled */
#define StartTriggeringTrace()                          /* disabled */
#define SetTriggerConditions(a, b)                      /* disabled */
#define SetTriggerWindow(before, after)         0       /* disabled */
#define StopTrace()                                     /* disabled */
#define EnableTraceClasses(m)                           /* disabled */
#define DisableTraceClasses(m)                          /* disabled */
#define EnableTraceCategories(m)                        /* disabled */
#define DisableTraceCategories(m)                       /* disabled */
#define TriggerOnActivation(TASK)                       /* disabled */
#define TriggerOnChain(TASK)                            /* disabled */
#define TriggerOnTaskStart(TASK)                        /* disabled */
#define TriggerOnTaskStop(TASK)                         /* disabled */
#define TriggerOnISRStart(ISR)                          /* disabled */
#define TriggerOnISRStop(ISR)                           /* disabled */
#define TriggerOnInitTaskStart(MODE)                    /* disabled */
#define TriggerOnInitTaskStop(MODE)                     /* disabled */
#define TriggerOnGetResource(RES)                       /* disabled */
#define TriggerOnReleaseResource(RES)                   /* disabled */
#define TriggerOnTracepoint(POINT)                      /* disabled */
#define TriggerOnTaskTracepoint(POINT, TASK)            /* disabled */
#define TriggerOnIntervalStart(INTERVAL)                /* disabled */
#define TriggerOnIntervalStop(INTERVAL)                 /* disabled */
#define TriggerOnTimetableExpiry(TT)                    /* disabled */
#define TriggerOnAlarmExpiry(ALARM)                     /* disabled */
#define TriggerOnExplicitSendStateMessage(MSG)          /* disabled */
#define TriggerOnExplicitReceiveStateMessage(MSG)       /* disabled */
#define TriggerOnSendMessage(MSG)                       /* disabled */
#define TriggerOnReceiveMessage(MSG)                    /* disabled */
#define TriggerOnError(STATUS)                          /* disabled */
#define ClearTrigger()                                  /* disabled */
#define TRIGGER_ANY (0)                                 /* disabled */

#endif /* OSTRACE_ENABLED */

#endif /* ESCAPE_PARSER */

#endif /* __E_RTATR_H */

/*************************************************************************************************/
