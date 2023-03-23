/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************  
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:codegen_srv_counter.h$
 *
 * $Author____:PRG2SI$
 *
 * $Function__:Removal MISRA warnings
 *             Compiler independent
 *             FC Restructuring
 *             Adaption to Srv 1.17.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PRG2SI$
 * $Date______:03.01.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_srv_counter$
 * $Variant___:1.0.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_SRV_COUNTER_H
#define _CODEGEN_SRV_COUNTER_H

/*************************************************************************/
/* Countdown                                                             */
/*************************************************************************/

/* U8-COUNTDOWN */
#define COUNTDOWN_U8_start(x,sv)                 ((x)->counter = (uint8)(sv))
#define COUNTDOWN_U8_compute(x)                  (void)Timer_U8(&((x)->counter))
#define COUNTDOWN_U8_out(x)                      ((x)->counter ? (bool)TRUE : (bool)FALSE)

/* U16-COUNTDOWN */
#define COUNTDOWN_U16_start(x,sv)                ((x)->counter = (uint16)(sv))
#define COUNTDOWN_U16_compute(x)                 (void)Timer_U16(&((x)->counter))
#define COUNTDOWN_U16_out(x)                     ((x)->counter ? (bool)TRUE : (bool)FALSE)

/* U8-COUNTDOWNENABLED */
#define COUNTDOWNENABLED_U8_start(x,sv)          ((x)->counter = (uint8)(sv))
#define COUNTDOWNENABLED_U8_compute(x,e)                                      \
        do{                                                                   \
            if((e)) { (void)Timer_U8(&((x)->counter));}                   \
        } while(0)
#define COUNTDOWNENABLED_U8_out(x)               ((x)->counter ? (bool)TRUE : (bool)FALSE)

/* U16-COUNTDOWNENABLED */
#define COUNTDOWNENABLED_U16_start(x,sv)         ((x)->counter = (uint16)(sv))
#define COUNTDOWNENABLED_U16_compute(x,e)                                     \
        do{                                                                   \
            if((e)) { (void)Timer_U16(&((x)->counter));}                  \
        } while(0)
#define COUNTDOWNENABLED_U16_out(x)              ((x)->counter ? (bool)TRUE : (bool)FALSE)

/*************************************************************************/
/* Countdown                                                             */
/*************************************************************************/

/* U8-Countup */
#define COUNTUP_U8_CountUp(ptr)                  SrvB_Counter_U8(&(ptr)->Counter_cp)
#define COUNTUP_U8_SetCounter(ptr, x)            ((ptr)->Counter_cp = (x))

/* U16-Countup */
#define COUNTUP_U16_CountUp(ptr)                 SrvB_Counter_U16(&(ptr)->Counter_cp)
#define COUNTUP_U16_SetCounter(ptr, x)           ((ptr)->Counter_cp = (x))

/* U32-Countup */
#define COUNTUP_U32_CountUp(ptr)                 SrvB_Counter_U32(&(ptr)->Counter_cp)
#define COUNTUP_U32_SetCounter(ptr, x)           ((ptr)->Counter_cp = (x))

/*************************************************************************/
/* Counter                                                               */
/*************************************************************************/

/* U8-COUNTER */
#define COUNTER_U8_reset(x)                      ((x)->counter = (uint8)0)
#define COUNTER_U8_compute(x)                    (void)Counter_U8(&((x)->counter))
#define COUNTER_U8_out(x)                        ((x)->counter)

/* U16-COUNTER */
#define COUNTER_U16_reset(x)                     ((x)->counter = (uint16)0)
#define COUNTER_U16_compute(x)                   (void)Counter_U16(&((x)->counter))
#define COUNTER_U16_out(x)                       ((x)->counter)

/* U8-COUNTERENABLED */
#define COUNTERENABLED_U8_reset(x,i)                                          \
        do{                                                                   \
            if((i)) {((x)->counter = (uint8)0);}                          \
        } while(0)
#define COUNTERENABLED_U8_compute(x,e)                                        \
        do{                                                                   \
            if((e)) { (void)Counter_U8(&((x)->counter));}                 \
        } while(0)
#define COUNTERENABLED_U8_out(x)                 ((x)->counter)

/* U16-COUNTERENABLED */
#define COUNTERENABLED_U16_reset(x,i)                                         \
        do{                                                                   \
            if((i)) {((x)->counter = (uint16)0);}                         \
        } while(0)
#define COUNTERENABLED_U16_compute(x,e)                                       \
        do{                                                                   \
            if((e)) { (void)Counter_U16(&((x)->counter));}                \
        } while(0)
#define COUNTERENABLED_U16_out(x)                ((x)->counter)

/* U8-SRV_Counter (obsolete) */
#define SRV_COUNTER_U8_reset(ptr,x)              ((ptr)->counter = (x))
#define SRV_COUNTER_U8_out(ptr)                  SrvB_Counter8(&(ptr)->counter)

/* S16-SRV_Counter (obsolete) */
#define SRV_COUNTER_S16_reset(ptr,x)             ((ptr)->counter = (x))
#define SRV_COUNTER_S16_out(ptr)                 SrvB_Counter16(&(ptr)->counter)

/* U16-SRV_Counter (obsolete) */
#define SRV_COUNTER_U16_reset(ptr,x)             ((ptr)->counter = (x))
#define SRV_COUNTER_U16_out(ptr)                 SrvB_Counter_U16(&(ptr)->counter)

/* S32-SRV_Counter (obsolete) */
#define SRV_COUNTER_S32_reset(ptr,x)             ((ptr)->counter = (x))
#define SRV_COUNTER_S32_out(ptr)                 SrvB_Counter32(&(ptr)->counter)

/* U32-SRV_Counter (obsolete) */
#define SRV_COUNTER_U32_reset(ptr,x)             ((ptr)->counter = (x))
#define SRV_COUNTER_U32_out(ptr)                 SrvB_Counter_U32(&(ptr)->counter)

/*************************************************************************/
/* StopWatch                                                             */
/*************************************************************************/

/* U8-STOPWATCH */
#define STOPWATCH_U8_reset(x)                    ((x)->timeCounter = (uint8)0)
#define STOPWATCH_U8_compute(x)                  (void)Counter_U8(&((x)->timeCounter))
#define STOPWATCH_U8_out(x)                      ((x)->timeCounter)

/* U16-STOPWATCH */
#define STOPWATCH_U16_reset(x)                   ((x)->timeCounter = (uint16)0)
#define STOPWATCH_U16_compute(x)                 (void)Counter_U16(&((x)->timeCounter))
#define STOPWATCH_U16_out(x)                     ((x)->timeCounter)

/* U8-STOPWATCHENABLED */
#define STOPWATCHENABLED_U8_reset(x,i)                                        \
        do{                                                                   \
            if((i)) {((x)->timeCounter = (uint8)0);}                      \
        } while(0)
#define STOPWATCHENABLED_U8_compute(x,e)                                      \
        do{                                                                   \
            if((e)) { (void)Counter_U8(&((x)->timeCounter));}             \
        } while(0)
#define STOPWATCHENABLED_U8_out(x)               ((x)->timeCounter)

/* U16-STOPWATCHENABLED */
#define STOPWATCHENABLED_U16_reset(x,i)                                       \
        do{                                                                   \
            if((i)) {((x)->timeCounter = (uint16)0);}                     \
        } while(0)
#define STOPWATCHENABLED_U16_compute(x,e)                                     \
        do{                                                                   \
            if((e)) { (void)Counter_U16(&((x)->timeCounter));}            \
        } while(0)
#define STOPWATCHENABLED_U16_out(x)              ((x)->timeCounter)

/*************************************************************************/
/* Timer                                                                 */
/*************************************************************************/

/* U8-TIMER */
#define TIMER_U8_start(x,sv)                                                  \
        do{                                                                   \
            if((x)->timeCounter==0)                                       \
            {                                                                 \
                ((x)->timeCounter = (uint8)(sv));                         \
            }                                                                 \
        } while(0)
#define TIMER_U8_compute(x)                                                   \
        (void)Timer_U8(&((x)->timeCounter))
#define TIMER_U8_out(x)                                                       \
        ((x)->timeCounter ? (bool)TRUE : (bool)FALSE)

/* U16-TIMER */
#define TIMER_U16_start(x,sv)                                                 \
        do{                                                                   \
            if((x)->timeCounter==0)                                       \
            {                                                                 \
                ((x)->timeCounter = (uint16)(sv));                        \
            }                                                                 \
        } while(0)
#define TIMER_U16_compute(x)                                                  \
        (void)Timer_U16(&((x)->timeCounter))
#define TIMER_U16_out(x)                                                      \
        ((x)->timeCounter ? (bool)TRUE : (bool)FALSE)

/* U8-TIMERENABLED */
#define TIMERENABLED_U8_compute(x,e,in,sv)                                    \
        (void)TimerEnabled_U8(&((x)->timeCounter), &((x)->inOld), (bool)(e), (bool)(in), (uint8)(sv))
#define TIMERENABLED_U8_out(x)                                                \
        ((x)->timeCounter ? (bool)TRUE : (bool)FALSE)

/* U16-TIMERENABLED */
#define TIMERENABLED_U16_compute(x,e,in,sv)                                   \
        (void)TimerEnabled_U16(&((x)->timeCounter), &((x)->inOld), (bool)(e), (bool)(in), (uint16)(sv))
#define TIMERENABLED_U16_out(x)                                               \
        ((x)->timeCounter ? (bool)TRUE : (bool)FALSE)

/* U8-TIMERRETRIGGER */
#define TIMERRETRIGGER_U8_start(x,sv)                                         \
        ((x)->timeCounter = (uint8)(sv))
#define TIMERRETRIGGER_U8_compute(x)                                          \
        (void)Timer_U8(&((x)->timeCounter))
#define TIMERRETRIGGER_U8_out(x)                                              \
        ((x)->timeCounter ? (bool)TRUE : (bool)FALSE)

/* U16-TIMERRETRIGGER */
#define TIMERRETRIGGER_U16_start(x,sv)                                        \
        ((x)->timeCounter = (uint16)(sv))
#define TIMERRETRIGGER_U16_compute(x)                                         \
        (void)Timer_U16(&((x)->timeCounter))
#define TIMERRETRIGGER_U16_out(x)                                             \
        ((x)->timeCounter ? (bool)TRUE : (bool)FALSE)

/* U8-TIMERRETRIGGERENABLED */
#define TIMERRETRIGGERENABLED_U8_compute(x,e,in,sv)                           \
        (void)TimerRetriggerEnabled_U8(&((x)->timeCounter), &((x)->inOld), (bool)(e), (bool)(in), (uint8)(sv))
#define TIMERRETRIGGERENABLED_U8_out(x)                                       \
        ((x)->timeCounter ? (bool)TRUE : (bool)FALSE)

/* U16-TIMERRETRIGGERENABLED */
#define TIMERRETRIGGERENABLED_U16_compute(x,e,in,sv)                          \
        (void)TimerRetriggerEnabled_U16(&((x)->timeCounter), &((x)->inOld), (bool)(e), (bool)(in), (uint16)(sv))
#define TIMERRETRIGGERENABLED_U16_out(x)                                      \
        ((x)->timeCounter ? (bool)TRUE : (bool)FALSE)

/*************************************************************************/
/* SW-Timer                                                                 */
/*************************************************************************/

/* S16-SRV_GETSWTMR */
#define SRV_GETSWTMR_S16                         SrvB_SWTmrS16
#define SRV_GETSWTMR_S16_Reset(ptr)              /* Using ECU SW-timer */
#define SRV_GETSWTMR_S16_count(ptr)              /* Using ECU SW-timer */
#define SRV_GETSWTMR_S16_GetTimerValue(ptr)      SrvB_GetSWTmrS16()

/* S32-SRV_GETSWTMR */
#define SRV_GETSWTMR_S32                         SrvB_SWTmrS32
#define SRV_GETSWTMR_S32_Reset(ptr)              /* Using ECU SW-timer */
#define SRV_GETSWTMR_S32_count(ptr)              /* Using ECU SW-timer */
#define SRV_GETSWTMR_S32_GetTimerValue(ptr)      SrvB_GetSWTmrS32()

/* S16-SRV_SWTMR */
#define _SRV_SWTMR_S16_                          PROTECT_TYPEDEF
#define SRV_SWTMR_S16                            SrvB_SWTmrS16
#define SRV_SWTMR_S16_DiffSWTmr(ptr)             SrvB_DiffSWTmrS16((ptr))
#define SRV_SWTMR_S16_StartSWTmr(ptr)            SrvB_StartSWTmrS16((ptr))
#define SRV_SWTMR_S16_StopSWTmr(ptr)             SrvB_StopSWTmrS16((ptr))
#define SRV_SWTMR_S16_TestSWTmr(ptr)             SrvB_TestSWTmrS16((ptr))

/* S32-SRV_SWTMR */
#define _SRV_SWTMR_S32_                          PROTECT_TYPEDEF
#define SRV_SWTMR_S32                            SrvB_SWTmrS32
#define SRV_SWTMR_S32_DiffSWTmr(ptr)             SrvB_DiffSWTmrS32((ptr))
#define SRV_SWTMR_S32_StartSWTmr(ptr)            SrvB_StartSWTmrS32((ptr))
#define SRV_SWTMR_S32_StopSWTmr(ptr)             SrvB_StopSWTmrS32((ptr))
#define SRV_SWTMR_S32_TestSWTmr(ptr)             SrvB_TestSWTmrS32((ptr))

/* S16-SWTimer */
#define _SWTIMER_S16_S16_                        PROTECT_TYPEDEF
#define SWTIMER_S16_S16                          SrvB_SWTmrS16_t
#define SWTIMER_S16_S16_StartSWTmr(ptr)          SrvB_StartSWTmrS16((ptr))
#define SWTIMER_S16_S16_StopSWTmr(ptr)           SrvB_StopSWTmrS16((ptr))
#define SWTIMER_S16_S16_DiffSWTmr(ptr)           SrvB_DiffSWTmrS16((ptr))
#define SWTIMER_S16_S16_TestSWTmr(ptr)           SrvB_TestSWTmrS16((ptr))

/* S32-SWTimer */
#define _SWTIMER_S32_S32_                        PROTECT_TYPEDEF
#define SWTIMER_S32_S32                          SrvB_SWTmrS32_t
#define SWTIMER_S32_S32_StartSWTmr(ptr)          SrvB_StartSWTmrS32((ptr))
#define SWTIMER_S32_S32_StopSWTmr(ptr)           SrvB_StopSWTmrS32((ptr))
#define SWTIMER_S32_S32_DiffSWTmr(ptr)           SrvB_DiffSWTmrS32((ptr))
#define SWTIMER_S32_S32_TestSWTmr(ptr)           SrvB_TestSWTmrS32((ptr))

#endif  /*#ifndef _CODEGEN_SRV_COUNTER_H*/
