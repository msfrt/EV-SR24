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
 * $Filename__:rtmo_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KRS1COB$ 
 * $Date______:05.06.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:rtmo_priv$ 
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
 * 1.11.0; 0     05.06.2011 KRS1COB
 *    RCMS00999963: RTMO Bugfix : Wrong addressing scheme access to the function
 *    
 *     Rtmo_MeasureEndHelper for TC1793
 * 
 * 1.10.1; 1     14.04.2011 JWI2SI
 *   Update RTMO after test integration
 * 
 * 1.10.1; 0     15.03.2011 JWI2SI
 *   Bugfix for TC1793
 * 
 * 1.7.0; 0     26.01.2009 KLMEYER
 *   B_RTMO.7.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _RTMO_PRIV_H
#define _RTMO_PRIV_H

/*--------------------------------------------------------------------------------------------------
 * Defines
 *--------------------------------------------------------------------------------------------------
 */

/* this is nessesary because no include file available from os */
#pragma section .rodata.erc_rom
extern uint32 RTMO_OS_BG_TASK;     /* OS_CONST_CODGEN T_os_processPtrTab os_taskTabOS_Bg_Task */
#pragma section

/* no PRAGMA because it is not a RTMO interface */
extern void   os_processTimeOuts(void);


/* values for typedef  uint32 T_Tick */
#define RTMO_TICK_MAX_VALUE         0xFFFFFFFFul
#define RTMO_TICK_MIN_VALUE         0ul


#define RTMO_UCX_A11                12ul
#define RTMO_LCX_A11                4ul

#define RTMO_A11                    RTMO_UCX_A11

#define RTMO_INT_CX_INCR            3ul
#define RTMO_INT_A11                RTMO_LCX_A11

#define RTMO_INT_J_CX_INCR          2ul
#define RTMO_INT_J_A11              RTMO_LCX_A11

#define RTMO_RET_A11                RTMO_LCX_A11

#ifdef OS_RTMO_INT_CAT1_ENA         /* if cat1-ISR-type is used, stack deepness is lesser */
#define RTMO_CX_INCR                2ul
#define RTMO_RET_CX_INCR            1ul
#else
#define RTMO_CX_INCR                3ul
#define RTMO_RET_CX_INCR            2ul
#endif


#define RTMO_ERROR_INT_WRONG        0x01      /* Rtmo_flStateMirror_u8 */
#define RTMO_ERROR_MEAS_NOT_IN_PROG 0x02      /* Rtmo_flStateMirror_u8 */


#define RTMO_SWLOADMODE_ON          0x01        /* Rtmo_swLoadMode_u8,
                                                   Rtmo_swLoadModeMirror_u8
                                                      l_swLoadMode01_u32,
                                                      l_swLoadModeMirror01_u32   */
/*
 *    Rtmo_swMode_u8         : measure-methode
 *                                Bit 0: (0x01)
 *                                         0 = first statement of function is NO context saving
 *                                             statment like CALL or BISR
 *                                         1 = first statement of function is a context saving
 *                                             statment like CALL or BISR
 *                                Bit 1: (0x02)
 *                                         0 = first statement of function is NO RET   statment
 *                                         1 = first statement of function is a RET statment
 *                                Bit 2: (0x04)
 *                                         0 = measure normal
 *                                         1 = measure Interrupt Overhead
 *                                Bit 4: (0x10)
 *                                         0 = measure in dependence of functions
 *                                         1 = measure in dependence of tasks
 *                                Bit 5: (0x20)
 *                                         0 = measure-element is measured as function
 *                                         1 = measure-element is measured as task
 *                                Bit 6: (0x40)
 *                                         0 = Netto-measure
 *                                         1 = Brutto-measure
 *                                Bit 7: (0x80)
 *                                         0 = Dont reset extreme-values
 *                                         1 = Reset extreme-values
*/
#define RTMO_SWMODE_CSA              0x01        /* Rtmo_swMode_u8 */
#define RTMO_SWMODE_RET              0x02        /* Rtmo_swMode_u8 */
#define RTMO_SWMODE_MEAS_INT         0x04        /* Rtmo_swMode_u8 */
#define RTMO_SWMODE_MEAS_TASK        0x10        /* Rtmo_swMode_u8 */
#define RTMO_SWMODE_MEAS_AS_TASK     0x20        /* Rtmo_swMode_u8 */
#define RTMO_SWMODE_BRUTTO           0x40        /* Rtmo_swMode_u8 */
#define RTMO_SWMODE_CLEAR_EXTREME    0x80        /* Rtmo_swMode_u8 */





/*#define RTMO_TEST
*/

/*--------------------------------------------------------------------------------------------------
 * Internal global variables
 */


/* Mirrors which are needed to hold the values of the last sample visible
 */
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern uint32 Rtmo_tiAvrgMirror_u32;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END

__PRAGMA_USE__eos__1_5ms__InitRAM__x32__START
extern T_Tick Rtmo_tiMinMirror_Tick;
__PRAGMA_USE__eos__1_5ms__InitRAM__x32__END

__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern T_Tick Rtmo_tiMaxMirror_Tick;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END

__PRAGMA_USE__eos__1_5ms__InitRAM__x32__START
extern T_Tick Rtmo_tiMinCalldistMirror_Tick;
__PRAGMA_USE__eos__1_5ms__InitRAM__x32__END

__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern T_Tick Rtmo_tiMaxCalldistMirror_Tick;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END

__PRAGMA_USE__eos__1_5ms__RAM__x16__START
extern uint16 Rtmo_ctInterruptMirror_u16;
__PRAGMA_USE__eos__1_5ms__RAM__x16__END

__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern uint32 Rtmo_ctReentrantSampleMirror_u32;
extern uint32 Rtmo_adCallingMirror_u32;
extern uint32 Rtmo_adDataMirror_u32;
extern uint32 Rtmo_ctSampleMirror_u32;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END

__PRAGMA_USE__eos__1_5ms__RAM__x8__START
extern uint8  Rtmo_swModeMirror_u8;
extern uint8  Rtmo_swLoadModeMirror_u8;
extern uint8  Rtmo_flStateMirror_u8;
__PRAGMA_USE__eos__1_5ms__RAM__x8__END


/* Holds the state of the measure:
 * 0: the measure is not active
 * 1: the measure runs now
 *>1: Reentrant measure
 */
__PRAGMA_USE__eos__1_5ms__RAM__x8__START
extern uint8  Rtmo_stRtmInProgress_u8;
__PRAGMA_USE__eos__1_5ms__RAM__x8__END


/* Holds the state of the interrupt:
 * 0: the measure is not active or brutto measure active
 * 1: the measure runs now and has not been interrupted yet
 *>1: the measure runs now and is interrupted
 */
__PRAGMA_USE__eos__1_5ms__RAM__x8__START
extern uint8  Rtmo_stIntInProgress_u8;
__PRAGMA_USE__eos__1_5ms__RAM__x8__END

/* Timestamp
 */
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern T_Tick Rtmo_tiTimestamp_Tick;
extern T_Tick Rtmo_tiTimestampCalldist_Tick;
extern T_Tick Rtmo_tiTimestampSamp_Tick;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END

/* Overhaed mirror
*/
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern T_Tick Rtmo_tiOverheadMirror_Tick;
extern T_Tick Rtmo_tiIntOverheadMirror_Tick;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END

/* global variable declared inside rtmo.c */
MEMLAY_USE_RAM_0_ABS(extern uint32,          Rtmo_adA11Save_u32);				
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern uint32 Rtmo_adA11IntSave_u32;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END

#ifdef RTMO_TEST
extern uint8  Rtmo_swBreak_u8;
#endif



/* Get actual timestamp */
#define Rtmo_GetTime() (STM.TIM0)

/*
 ***************************************************************************************************
 * defines for RTMO_TIME_TEST
 *
 * normaly not defined
 *
 ***************************************************************************************************
 */
/*Global switch to turn on/off internal measurement*/
/*#define RTMO_TIME_TEST*/


#ifdef RTMO_TIME_TEST
/*Local switches to turn on/off specific internal measurements*/
#define RTMO_TIME_TEST_SAMPLE_1         0x00000001
#define RTMO_TIME_TEST_SAMPLE_2         0x00000002
#define RTMO_TIME_TEST_SAMPLE_3         0x00000003

#define RTMO_TIME_TEST_MEAS_BEGIN       0x00000011
#define RTMO_TIME_TEST_MEAS_END         0x00000012

#define RTMO_TIME_TEST_INT_BEGIN        0x00000101
#define RTMO_TIME_TEST_INT_BEGIN_J      0x00000102
#define RTMO_TIME_TEST_INT_END          0x00000103

#define RTMO_TIME_TEST_TASK_BEGIN       0x00001001
#define RTMO_TIME_TEST_TASK_END         0x00001002

/*Use this defines to define other in/out variables*/
#define RTMO_TIME_TEST_MEAS_NR          Rtmo_swMeasureNr_u32
#define RTMO_TIME_TEST_OUT              Rtmo_tiTimeTestOut_u32


#define Rtmo_GetTestTime() \
  ({ int res; asm volatile ("ld.w %0,0xf0000210" : "=d" (res) : : "memory"); res; })

#define RTMO_TIME_TEST_DEF()            uint32 l_swMeasureNr_u32 = RTMO_TIME_TEST_MEAS_NR;\
                                        uint32 l_tiTestTimeStamp_u32 = 0;

#define RTMO_TIME_TEST_BEGIN(TEST_NR)   if(TEST_NR == l_swMeasureNr_u32)\
                                        l_tiTestTimeStamp_u32 = Rtmo_GetTestTime();

#define RTMO_TIME_TEST_END(TEST_NR)     if(TEST_NR == l_swMeasureNr_u32)\
                                    RTMO_TIME_TEST_OUT = Rtmo_GetTestTime() - l_tiTestTimeStamp_u32;

#define RTMO_TIME_TEST_SAMPLE_D()       RTMO_TIME_TEST_DEF()
#define RTMO_TIME_TEST_SAMPLE_1_B()     RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_SAMPLE_1)
#define RTMO_TIME_TEST_SAMPLE_1_E()     RTMO_TIME_TEST_END(RTMO_TIME_TEST_SAMPLE_1)
#define RTMO_TIME_TEST_SAMPLE_2_B()     RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_SAMPLE_2)
#define RTMO_TIME_TEST_SAMPLE_2_E()     RTMO_TIME_TEST_END(RTMO_TIME_TEST_SAMPLE_2)
#define RTMO_TIME_TEST_SAMPLE_3_B()     RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_SAMPLE_3)
#define RTMO_TIME_TEST_SAMPLE_3_E()     RTMO_TIME_TEST_END(RTMO_TIME_TEST_SAMPLE_3)
#define RTMO_TIME_TEST_MEAS_BEGIN_D()   RTMO_TIME_TEST_DEF()
#define RTMO_TIME_TEST_MEAS_BEGIN_B()   RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_MEAS_BEGIN)
#define RTMO_TIME_TEST_MEAS_BEGIN_E()   RTMO_TIME_TEST_END(RTMO_TIME_TEST_MEAS_BEGIN)
#define RTMO_TIME_TEST_MEAS_END_D()     RTMO_TIME_TEST_DEF()
#define RTMO_TIME_TEST_MEAS_END_B()     RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_MEAS_END)
#define RTMO_TIME_TEST_MEAS_END_E()     RTMO_TIME_TEST_END(RTMO_TIME_TEST_MEAS_END)
#define RTMO_TIME_TEST_INT_BEGIN_D()    RTMO_TIME_TEST_DEF()
#define RTMO_TIME_TEST_INT_BEGIN_B()    RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_INT_BEGIN)
#define RTMO_TIME_TEST_INT_BEGIN_E()    RTMO_TIME_TEST_END(RTMO_TIME_TEST_INT_BEGIN)
#define RTMO_TIME_TEST_INT_BEGIN_J_D()  RTMO_TIME_TEST_DEF()
#define RTMO_TIME_TEST_INT_BEGIN_J_B()  RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_INT_BEGIN_J)
#define RTMO_TIME_TEST_INT_BEGIN_J_E()  RTMO_TIME_TEST_END(RTMO_TIME_TEST_INT_BEGIN_J)
#define RTMO_TIME_TEST_INT_END_D()      RTMO_TIME_TEST_DEF()
#define RTMO_TIME_TEST_INT_END_B()      RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_INT_END)
#define RTMO_TIME_TEST_INT_END_E()      RTMO_TIME_TEST_END(RTMO_TIME_TEST_INT_END)
#define RTMO_TIME_TEST_TASK_BEGIN_D()   RTMO_TIME_TEST_DEF()
#define RTMO_TIME_TEST_TASK_BEGIN_B()   RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_TASK_BEGIN)
#define RTMO_TIME_TEST_TASK_BEGIN_E()   RTMO_TIME_TEST_END(RTMO_TIME_TEST_TASK_BEGIN)
#define RTMO_TIME_TEST_TASK_END_D()     RTMO_TIME_TEST_DEF()
#define RTMO_TIME_TEST_TASK_END_B()     RTMO_TIME_TEST_BEGIN(RTMO_TIME_TEST_TASK_END)
#define RTMO_TIME_TEST_TASK_END_E()     RTMO_TIME_TEST_END(RTMO_TIME_TEST_TASK_END)

/* RTMO_TIME_TEST                                                                                 */
#else

#define RTMO_TIME_TEST_SAMPLE_D()
#define RTMO_TIME_TEST_SAMPLE_1_B()
#define RTMO_TIME_TEST_SAMPLE_1_E()
#define RTMO_TIME_TEST_SAMPLE_2_B()
#define RTMO_TIME_TEST_SAMPLE_2_E()
#define RTMO_TIME_TEST_SAMPLE_3_B()
#define RTMO_TIME_TEST_SAMPLE_3_E()
#define RTMO_TIME_TEST_MEAS_BEGIN_D()
#define RTMO_TIME_TEST_MEAS_BEGIN_B()
#define RTMO_TIME_TEST_MEAS_BEGIN_E()
#define RTMO_TIME_TEST_MEAS_END_D()
#define RTMO_TIME_TEST_MEAS_END_B()
#define RTMO_TIME_TEST_MEAS_END_E()
#define RTMO_TIME_TEST_INT_BEGIN_D()
#define RTMO_TIME_TEST_INT_BEGIN_B()
#define RTMO_TIME_TEST_INT_BEGIN_E()
#define RTMO_TIME_TEST_INT_BEGIN_J_D()
#define RTMO_TIME_TEST_INT_BEGIN_J_B()
#define RTMO_TIME_TEST_INT_BEGIN_J_E()
#define RTMO_TIME_TEST_INT_END_D()
#define RTMO_TIME_TEST_INT_END_B()
#define RTMO_TIME_TEST_INT_END_E()
#define RTMO_TIME_TEST_TASK_BEGIN_D()
#define RTMO_TIME_TEST_TASK_BEGIN_B()
#define RTMO_TIME_TEST_TASK_BEGIN_E()
#define RTMO_TIME_TEST_TASK_END_D()
#define RTMO_TIME_TEST_TASK_END_B()
#define RTMO_TIME_TEST_TASK_END_E()

/* RTMO_TIME_TEST                                                                                 */
#endif



#ifdef RTMO_TIME_TEST
extern uint32 Rtmo_tiTimeTestOut_u32;
extern uint32 Rtmo_swMeasureNr_u32;
#endif


/* _RTMO_PRIV_H */
#endif
