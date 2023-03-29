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
 * $Filename__:e_system.h$ 
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
 * $Name______:e_system$ 
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
/**************************************************************************************************
 *  FILE:           e_system.h
 *
 *  DESCRIPTION:    Declaration of ERCOSEK data types corresponding to the OS system
 *
 *  VISIBILITY:     External
 *
 *  AUTHOR:         ETAS/PSC1-Gw
 *
 *  CREATED:        21.01.2003            17:00
 *
 *  COPYRIGHT:      ETAS GmbH
 *                  Stuttgart / Germany
 *                  All rights reserved
 **************************************************************************************************
 

 History:
 --------

who when        call        what
-----------------------------------------------------------------------------------------------
Gw  21.01.2003  42628       moved to line 03c and created a seperate file for each function
Vr  27.02.2003  42695       DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Ew  27.03.2003  xxxxx       DD010_Interrupt_handling
Ew  14.04.2003  xxxxx       DD007 Alarm Callback
Vr  14.04.2003  xxxxx       DD002 Error Handling
Ew  16.04.2003  xxxxx       DD002 Error Handling
Phl 21.05.2003  xxxxx       DD002 Error Handling , corrected ServiceID -> ServiceId
Vr  12.06.2003  xxxxx       DD002 Error Handling Updated Error Codes
Vr  17.06.2003  xxxxx       DD002 Error Handling Updated Error Codes
Phl 20.06.2003  48734       Change ttStatusType to StatusType        
Sz  12.11.2003  51363       Review on TriCore,DD011 Clearify FAR, NEAR added __indirect to fast_code
                            to make it locatable in internal SPRAM.
Ry  31.12.2003  51783       Suspend/ResumeAllInterrupts as Macro/Inline.Added macro NO_SOURCE_INLINE
Ry  04.03.2004  53583       SuspendAllInterrupt as inline function cross effects on other target
Ry  11.03.2004  53583       SuspendAllInterrupt as inline function cross effects on other target.
						    Removed macros SuspendAllInterrupts,ResumeAllInterrupts.Added macro
						    NO_SOURCE_INLINE  
Ry  26.05.2004  80069DD001  MISRA mark ERCOSEK headers.
                            MISRA RULE 14 VIOLATION: The type char shall always be declared as 
                            unsigned char or signed char.[Classified:Mistake].
Vr  09.06.2004	54014       Const variable in RAM
Ry  21.12.2004 80069DD003   MISRA mark ERCOSEK Kernel.
                            MISRA RULE 77 VIOLATION:Note 917: Prototype coercion
						    [Classified:Mistake].Typecasted OSEK error codes to StatusType.
Ry  13.05.2005 80069DD003   MISRA mark ERCOSEK Kernel.
                            Removed Typecast for OSEK error codes.Error codes are typecaseted in
                            C source file.

*/

#ifndef __E_SYSTEM_H
#define __E_SYSTEM_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

#define SuspendOSInterrupts()               SuspendAllInterrupts()
#define ResumeOSInterrupts()                ResumeAllInterrupts()
#define OSErrorGetServiceId()               (os_ServiceId)

#ifndef ESCPAPE_PARSER
    #define TASK(x) void task_ ## x (void)
    #define ALARMCALLBACK(x)  void alarmcb_##x (void)
#endif 

/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

/* ERCOSEK services return values
**********************************/
#ifndef STATUSTYPEDEFINED
    #define STATUSTYPEDEFINED
    typedef unsigned char StatusType ;
    #define E_OK              0
#endif

    /* OSEK error codes */

#define E_OS_ACCESS                        1
#define E_OS_CALLEVEL                      2 
#define E_OS_ID                            3
#define E_OS_LIMIT                         4
#define E_OS_NOFUNC                        5
#define E_OS_RESOURCE                      6
#define E_OS_STATE                         7
#define E_OS_VALUE                         8

    /* timetable related error codes */
#define E_OS_SYS_MISSING_TIMETABLE          9
#define E_OS_SYS_TIMETABLE_ALREADY_ACTIVE  10

    /* ERCOSEK specific error codes */
#define E_OS_SYS_MIN_PERIOD_NOT_EXPIRED    11
#define E_OS_SYS_STACK                     12
#define E_OS_SYS_SERVICE_NOT_SUPPORTED     13

    /* deadline related error codes */
#define E_OS_SYS_DEADLINE                  14

typedef enum {
    OSServiceId_NoService = 0,
    OSServiceId_ActivateTask ,
    OSServiceId_TerminateTask,
    OSServiceId_ChainTask,
    OSServiceId_Schedule,
    OSServiceId_GetTaskState,
    OSServiceId_GetResource,
    OSServiceId_ReleaseResource,
    OSServiceId_GetAlarmBase,
    OSServiceId_GetAlarm,
    OSServiceId_SetRelAlarm,
    OSServiceId_SetAbsAlarm,
    OSServiceId_CancelAlarm,
    OSServiceId_RestartTask,
    OSServiceId_ActivateTimeTableAbs,
    OSServiceId_ActivateTimeTableRel,
    OSServiceId_ChangeAlarmPeriod,
    OSServiceId_CheckTaskDeadline,
    OSServiceId_CheckSoftwareStack,
    OSServiceId_StackOverflowHandler
} OSServiceIdType ;


/* ERCOSEK string type
***********************/
typedef OS_CONST unsigned char *                  T_os_string;     
typedef OS_CONST OS_FAR unsigned char             T_os_versionString[];

/* ERCOSEK identifier types
****************************/
typedef T_os_uint                              FlagType;
typedef T_os_uint                              ExceptionType;

/* default type for interrupt masks
************************************/
#ifndef OS__INTMASK_TYPES
    #define OS__INTMASK_TYPES
    typedef T_os_uint                          IntMaskType;
#endif


/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */



/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */
#ifndef ESCAPE_PARSER 
void OS_PREFIX_FOR_FAST_FUNCS os_terminateInitSeq     ( void );	   
/* macro NO_SOURCE_INLINE is used to include the not-inlined functions SuspendAllInterrupts(),
ResumeAllInterrupts()in e_suspendAllInterrupts.c and e_resumeAllInterrupts.c files respectively so 
that if a object does not use the e_source_inline.h header, but has a call to the function it will
find it in the ERCOSEK libraries as not-inlined function*/
#ifdef NO_SOURCE_INLINE
void OS_PREFIX_FOR_FAST_FUNCS SuspendAllInterrupts    ( void );
void OS_PREFIX_FOR_FAST_FUNCS ResumeAllInterrupts     ( void );
#endif
StatusType  GetInterruptDescriptor  ( IntDescriptorRefType maskRef );
StatusType  EnableInterrupt         ( IntDescriptorType mask );
StatusType  DisableInterrupt        ( IntDescriptorType mask );
#endif 
#endif /* __E_SYSTEM_H */

/*************************************************************************************************/




