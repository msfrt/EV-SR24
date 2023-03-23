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
 * $Filename__:e_realtr.h$ 
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
 * $Name______:e_realtr$ 
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
 * Belongs to products: RTAtrace
 *
 * Contains: Backward compatibility macros to allow use of RealTrace v1.0 API
 *
 * Copyright (C) LiveDevices Ltd. 2003
 *
 * $Header: /Minerva/ERCOSEK 4.2.11/TARGET/mpc56x/AS/ERCOSEK/e_realtr.h 7     22/10/03 22:20 Nmerriam $
 *
 * Notes:
 *
 *************************************************************************************************/

#ifndef __E_REALTR_H
#define __E_REALTR_H

#if !defined(ESCAPE_PARSER)

#ifdef ANSI_C_CHECK
#undef OSTRACE_ENABLED
#endif

#ifdef OSTRACE_ENABLED

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */


#ifndef __E_RTATR_H
#error e_realtr.h must be included after (RTAtrace-enhanced) e_inface.h
#endif

/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

/* Ensure (already defined) types are conformant with v1. */

/* Ensure backward compatilibility in type sizes. */
#if (((OSTRACE_KIND_SIZE) != 8) || ((OSTRACE_INFO_SIZE) != 8))
#error Extended IDs not supported with RealTrace (backward compatible mode).
#endif



/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */

#define RT_T_EMPTY                      0x00    /* empty (no entry, initialized) */
#define RT_T_ACTIVATION                 0x01    /* successful task-activation */
#define RT_T_ACTIVATION_FAILED          0x02    /* rejected task-activation (E_OS_LIMIT) */
#define RT_T_START                      0x03    /* start of a task (beginning of execution) */
#define RT_T_END                        0x04    /* end of a task (termination) */
#define RT_T_GETRESOURCE                0x05    /* task called GetResource() */
#define RT_T_RELEASERESOURCE            0x06    /* task called ReleaseResource() */
#define RT_T_STARTPROCESS               0x07    /* start of a process of the task */
#define RT_T_ENDPROCESS                 0x08    /* end of a process of the task */
#define RT_T_SETEVENT                   0x09    /* task called SetEvent, traceInfo=EventMask */
#define RT_T_CLEAREVENT                 0x0A    /* task called ClearEvent, traceInfo=EventMask */
#define RT_T_GETEVENT                   0x0B    /* task called GetEvent, traceInfo=EventMask */
#define RT_T_WAITEVENT                  0x0C    /* task called WaitEvent, traceInfo=EventMask */
#define RT_T_STARTMEASUREMENT           0x0D    /* start stop-watch for timing-analysis */
#define RT_T_STOPMEASUREMENT            0x0E    /* stop stop-watch for timing-analysis */
#define RT_T_ERRORHOOK                  0x0F    /* event for ErrorHook-awareness */

#define RT_T_USERTASKEVENT_0            0x00    /* task related user defined event */
#define RT_T_USERTASKEVENT_1            0x01    /* task related user defined event */
#define RT_T_USERTASKEVENT_2            0x02    /* task related user defined event */
#define RT_T_USERTASKEVENT_3            0x03    /* task related user defined event */
#define RT_T_USERTASKEVENT_4            0x04    /* task related user defined event */
#define RT_T_USERTASKEVENT_5            0x05    /* task related user defined event */
#define RT_T_USERTASKEVENT_6            0x06    /* task related user defined event */
#define RT_T_USERTASKEVENT_7            0x07    /* task related user defined event */
#define RT_T_USERTASKEVENT_8            0x08    /* task related user defined event */
#define RT_T_USERTASKEVENT_9            0x09    /* task related user defined event */
#define RT_T_USERTASKEVENT_A            0x0A    /* task related user defined event */
#define RT_T_USERTASKEVENT_B            0x0B    /* task related user defined event */
#define RT_T_USERTASKEVENT_C            0x0C    /* task related user defined event */
#define RT_T_USERTASKEVENT_D            0x0D    /* task related user defined event */
#define RT_T_USERTASKEVENT_E            0x0E    /* task related user defined event */
#define RT_T_USERTASKEVENT_F            0x0F    /* task related user defined event */

#define RT_T_USEREVENT_0                0x00    /* user defined event without task-relation */
#define RT_T_USEREVENT_1                0x01    /* user defined event without task-relation */
#define RT_T_USEREVENT_2                0x02    /* user defined event without task-relation */
#define RT_T_USEREVENT_3                0x03    /* user defined event without task-relation */
#define RT_T_USEREVENT_4                0x04    /* user defined event without task-relation */
#define RT_T_USEREVENT_5                0x05    /* user defined event without task-relation */
#define RT_T_USEREVENT_6                0x06    /* user defined event without task-relation */
#define RT_T_USEREVENT_7                0x07    /* user defined event without task-relation */
#define RT_T_USEREVENT_8                0x08    /* user defined event without task-relation */
#define RT_T_USEREVENT_9                0x09    /* user defined event without task-relation */
#define RT_T_USEREVENT_A                0x0A    /* user defined event without task-relation */
#define RT_T_USEREVENT_B                0x0B    /* user defined event without task-relation */
#define RT_T_USEREVENT_C                0x0C    /* user defined event without task-relation */
#define RT_T_USEREVENT_D                0x0D    /* user defined event without task-relation */
#define RT_T_USEREVENT_E                0x0E    /* user defined event without task-relation */
#define RT_T_USEREVENT_F                0x0F    /* user defined event without task-relation */

/* use the following macro to trace task-related user defined events.
   use #defines from this file as a parameter, e.g. RT_T_USERTASKEVENT_2 */
#define traceUserTaskEvent(event)       (osTraceTaskPoint__(OSTRACE_TASKPOINT + (event), osTraceGetTaskID())	/* RTAtrace_code_req  598 */
#define os_traceUserTaskEvent(event)    (osTraceTaskPoint__(OSTRACE_TASKPOINT + (event), osTraceGetTaskID())	/* RTAtrace_code_req  598 */


/* use the following macro to start a stop-watch. The watch_ID specifies which watch is to be used.
   up to 256 watches (watch_ID = 0..255) can be used simultaneously. A watch can be started in
   any TASK or ISR and stopped in any other TASK or ISR. However, RealTrace calculates netto-
   run-times only for those stop-watches being started and stopped within the same instance
   of a TASK or ISR. */
#if (MINERVA_KIND_SIZE == 16)
#define startStopWatch(watch_ID)        (osTraceInterval(OSTRACE_STARTINTERVAL + (watch_ID), 0))
#define stopStopWatch(watch_ID)         (osTraceInterval(OSTRACE_STOPINTERVAL + (watch_ID), 0))
#define os_startStopWatch(watch_ID)     (osTraceInterval(OSTRACE_STARTINTERVAL + (watch_ID), 0))
#define os_stopStopWatch(watch_ID)      (osTraceInterval(OSTRACE_STOPINTERVAL + (watch_ID), 0))
#else
#define startStopWatch(watch_ID)        (osTraceInterval(OSTRACE_STARTINTERVAL, (watch_ID)))		/* RTAtrace_code_req  594 */
#define stopStopWatch(watch_ID)         (osTraceInterval(OSTRACE_STOPINTERVAL, (watch_ID)))		/* RTAtrace_code_req  595 */
#define os_startStopWatch(watch_ID)     (osTraceInterval(OSTRACE_STARTINTERVAL, (watch_ID)))		/* RTAtrace_code_req  594 */
#define os_stopStopWatch(watch_ID)      (osTraceInterval(OSTRACE_STOPINTERVAL, (watch_ID)))		/* RTAtrace_code_req  595 */
#endif

#define initRealTrace()                 (osTraceInit())							/* RTAtrace_code_req  596 */
#define os_initRealTrace()              (osTraceInit())							/* RTAtrace_code_req  596 */

#define traceEvent(event, info)         (osTracePoint__((osTraceKindType)event, (osTraceKindType)info))	/* RTAtrace_code_req  597 */
#define os_traceEvent(event, info)      (osTracePoint__((osTraceKindType)event, (osTraceKindType)info))	/* RTAtrace_code_req  597 */

#else

#define initRealTrace()                 /* disabled */
#define traceEvent(event, info)         /* disabled */
#define traceUserTaskEvent(event)       /* disabled */
#define startStopWatch(watch_ID)        /* disabled */
#define stopStopWatch(watch_ID)         /* disabled */
#define os_initRealTrace()              /* disabled */
#define os_traceEvent(event, info)      /* disabled */
#define os_traceUserTaskEvent(event)    /* disabled */
#define os_startStopWatch(watch_ID)     /* disabled */
#define os_stopStopWatch(watch_ID)      /* disabled */

#endif /* OSTRACE_ENABLED */

#endif /* ESCAPE_PARSER */

#define RT_ActivateTask(taskName)       (ActivateTask(taskName))					/* RTAtrace_code_req  599 */
#define RT_ChainTask(taskName)          (ChainTask(taskName))						/* RTAtrace_code_req  600 */
#define RT_TerminateTask()              (TerminateTask())						/* RTAtrace_code_req  601 */

#endif /* __E_REALTR_H */

/*************************************************************************************************/
