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
 * $Filename__:rtmo_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JWI2SI$
 * $Date______:15.03.2011$
 * $Class_____:SWHDR$
 * $Name______:rtmo_pub$
 * $Variant___:1.10.1$
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
 * 1.10.1; 0     15.03.2011 JWI2SI
 *   Bugfix for TC1793
 * 
 * 1.8.0; 0     23.11.2009 AWL2SI
 *   B_RTMO.8.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _RTMO_PUB_H
#define _RTMO_PUB_H

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

typedef  uint32 T_Tick;
#define  RTMO_TICK_MAX 0xFFFFFFFFul
#define  RTMO_TICK_MIN 0ul
#if (MACHINE_TYPE == TC_1793)
#define RTMO_TR0EVT_OFFSET  0xF000
#define RTMO_TR0ADR_OFFSET  0xF004
/* #if (MACHINE_TYPE == TC_1793) */
#endif

__PRAGMA_USE__eos__1_5ms__RAM__x8__START
extern   uint8  Rtmo_ctSampleProc_u8;
extern   uint8  Rtmo_RequestCDC_u8;
__PRAGMA_USE__eos__1_5ms__RAM__x8__END
__PRAGMA_USE__eos__1_5ms__RAM__x16__START
extern   uint16 Rtmo_tiMaxLoadRun_u16;
__PRAGMA_USE__eos__1_5ms__RAM__x16__END
#if (MACHINE_TYPE == TC_1793)
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern uint32 Rtmo_aiSaveDebugCx[4] __attribute__ ((aligned (64)));
__PRAGMA_USE__eos__1_5ms__RAM__x32__END
/* #if (MACHINE_TYPE == TC_1793) */
#endif

/* MISRA RULE 94 VIOLATION: wrong detection (bug) of Misra */
extern MEMLAY_USE_ENVRAM(volatile uint16, Rtmo_tiMaxLoad_u16);

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
/* from rtmo_task.h */
void Rtmo_TaskBegin_proc           (void) __attribute__ ((noinline ));
void Rtmo_TaskEnd_proc             (void) __attribute__ ((noinline ));

/* from rtmo_hooks.h */
void Rtmo_DispatchPreempHook       (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
void Rtmo_IsrTTHook                (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
void Rtmo_ProcessTimeOutsHook      (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));

/* from rtmo_meas.h */
#if (MACHINE_TYPE == TC_1793)
void Rtmo_TrapHandler (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
/* #if (MACHINE_TYPE == TC_1793) */
#endif
void Rtmo_MeasureEndHelper         (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
void Rtmo_MeasureBeginInt          (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
void Rtmo_MeasureEnd               (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
void Rtmo_Wait           (uint32 nsec100) __attribute__ ((noinline,asection(".text.spram","f=ax")));

/* from rtmo_int.h */
void Rtmo_MeasureInterruptEndHelper(void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
void Rtmo_MeasureInterruptBegin    (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
void Rtmo_MeasureInterruptBegin_J  (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));
void Rtmo_MeasureInterruptEnd      (void) __attribute__ ((noinline,asection(".text.spram","f=ax")));

/* from rtmo_pub.h */
void Rtmo_ReadEep_MaxLoad          (void) __attribute__ ((         asection(".text.spram","f=ax")));
void Rtmo_WriteEep_MaxLoad         (void) __attribute__ ((         asection(".text.spram","f=ax")));
void Rtmo_Proc_Ini                 (void) __attribute__ ((noinline ));
void Rtmo_Proc_ReIni               (void) __attribute__ ((noinline ));

__PRAGMA_USE__CODE__eos__NormalSpeed__START
void Rtmo_Sample_proc              (void) __attribute__ ((noinline ));
__PRAGMA_USE__CODE__eos__NormalSpeed__END

/* _RTMO_PUB:H */
#endif
