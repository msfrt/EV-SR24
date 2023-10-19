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
 * $Filename__:e_error.h$ 
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
 * $Name______:e_error$ 
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
 *  FILE:           e_error.h
 *
 *  DESCRIPTION:    Header for Error Handling
 *
 *  VISIBILITY:     External
 *
 *  AUTHOR:         RBIN/EEC1-Vr
 *
 *  CREATED:        10.04.2003            17:00
 *
 *  COPYRIGHT:      ETAS GmbH
 *                  Stuttgart / Germany
 *                  All rights reserved
 **************************************************************************************************
 

 History:
 --------

who when        call    what
----------------------------------------------------------------------------------------------
Vr  10.04.2003  xxxxx   created DD002 Error Handling
Ew  16.04.2003  xxxxx   created DD002 Error Handling
Phl 21.05.2003  xxxxx   DD002 Error Handling , corrected ServiceID -> ServiceId
Vr  23.05.2003  37447   Adapt ORTI generation to new Standard
Ry  2005.07.29  61489   Short addressing causes Linker errors
                      
*/

#ifndef __E_ERROR_H

#define __E_ERROR_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

typedef struct {
    TaskType   TaskID;
} T_os_ActivateTaskType ;

typedef struct {
    TaskType   TaskID;
} T_os_ChainTaskType ;

typedef struct {
    TaskType   TaskID;
    #ifdef EXTENDED_STATUS
    TaskStateRefType state ;
    #endif
} T_os_GetTaskStateType ;


typedef struct {
    ResourceType ResID ;
} T_os_GetResourceType ;


typedef struct {
    ResourceType ResID ;
} T_os_ReleaseResourceType ;


typedef struct {
    AlarmType AlarmID;
    #ifdef EXTENDED_STATUS
    AlarmBaseRefType info ;
    #endif
} T_os_GetAlarmBaseType ;


typedef struct {
    AlarmType AlarmID;
    #ifdef EXTENDED_STATUS
    TickRefType ticks ;
    #endif
} T_os_GetAlarmType ;

typedef struct {
    AlarmType AlarmID;
    #ifdef EXTENDED_STATUS
    TickType increment;
    TickType cycle;
    #endif
} T_os_SetRelAlarmType ;

typedef struct {
    AlarmType AlarmID;
    #ifdef EXTENDED_STATUS
    TickType start;
    TickType cycle;
    #endif
} T_os_SetAbsAlarmType ;

typedef struct {
    AlarmType AlarmID;
} T_os_CancelAlarmType ;

#ifdef EXTENDED_STATUS
typedef struct {
    TickType time;
} T_os_ActivateTimeTableAbsType ;

typedef struct {
    TickType delta;
} T_os_ActivateTimeTableRelType ;
#endif

typedef struct {
    AlarmType AlarmID ;
    #ifdef EXTENDED_STATUS
    TickType newPeriod ;
    #endif
} T_os_ChangeAlarmPeriodType ;

typedef struct {
    TaskType TaskID ;
} T_os_CheckTaskDeadlineType ;

typedef struct {
    T_os_uint stackStatus ;
} T_os_CheckSoftwareStackType ;

typedef struct {
    T_os_uint stackStatus ;
} T_os_StackOverflowHandlerType ;

typedef union {
    T_os_ActivateTaskType          E_ActivateTaskType;
    T_os_ChainTaskType             E_ChainTaskType ;
    T_os_GetTaskStateType          E_GetTaskStateType ;
    T_os_GetResourceType           E_GetResourceType ;
    T_os_ReleaseResourceType       E_ReleaseResourceType ;
    T_os_GetAlarmBaseType          E_GetAlarmBaseType ;
    T_os_GetAlarmType              E_GetAlarmType ;
    T_os_SetRelAlarmType           E_SetRelAlarmType ;
    T_os_SetAbsAlarmType           E_SetAbsAlarmType ;
    T_os_CancelAlarmType           E_CancelAlarmType ;
    #ifdef EXTENDED_STATUS
    T_os_ActivateTimeTableAbsType  E_ActivateTimeTableAbsType ;
    T_os_ActivateTimeTableRelType  E_ActivateTimeTableRelType ;
    #endif
    T_os_ChangeAlarmPeriodType     E_ChangeAlarmPeriodType ;
    T_os_CheckTaskDeadlineType     E_CheckTaskDeadlineType ;
    T_os_CheckSoftwareStackType    E_CheckSoftwareStackType ;
    T_os_StackOverflowHandlerType  E_StackOverflowHandlerType ;
} OSErrorUnionType ;


/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */

#define OSError_ActivateTask_TaskID() (OSErrorUnion.E_ActivateTaskType.TaskID)

#define OSError_ChainTask_TaskID() (OSErrorUnion.E_ChainTaskType.TaskID)

#define OSError_GetTaskState_TaskID() (OSErrorUnion.E_GetTaskStateType.TaskID)
#ifdef EXTENDED_STATUS
#define OSError_GetTaskState_state() (OSErrorUnion.E_GetTaskStateType.state)
#endif

#define OSError_GetResource_ResID() (OSErrorUnion.E_GetResourceType.ResID)

#define OSError_ReleaseResource_ResID() (OSErrorUnion.E_ReleaseResourceType.ResID)

#define OSError_GetAlarmBase_AlarmID() (OSErrorUnion.E_GetAlarmBaseType.AlarmID)
#ifdef EXTENDED_STATUS
#define OSError_GetAlarmBase_info() (OSErrorUnion.E_GetAlarmBaseType.info)
#endif

#define OSError_GetAlarm_AlarmID() (OSErrorUnion.E_GetAlarmType.AlarmID)
#ifdef EXTENDED_STATUS
#define OSError_GetAlarm_ticks() (OSErrorUnion.E_GetAlarmType.ticks)
#endif

#define OSError_SetRelAlarm_AlarmID() (OSErrorUnion.E_SetRelAlarmType.AlarmID)
#ifdef EXTENDED_STATUS
#define OSError_SetRelAlarm_increment() (OSErrorUnion.E_SetRelAlarmType.increment)
#define OSError_SetRelAlarm_cycle() (OSErrorUnion.E_SetRelAlarmType.cycle)
#endif

#define OSError_SetAbsAlarm_AlarmID() (OSErrorUnion.E_SetAbsAlarmType.AlarmID)
#ifdef EXTENDED_STATUS
#define OSError_SetAbsAlarm_start() (OSErrorUnion.E_SetAbsAlarmType.start)
#define OSError_SetAbsAlarm_cycle() (OSErrorUnion.E_SetAbsAlarmType.cycle)
#endif

#define OSError_CancelAlarm_AlarmID() (OSErrorUnion.E_CancelAlarmType.AlarmID)

#ifdef EXTENDED_STATUS
#define OSError_ActivateTimeTableAbs_time() (OSErrorUnion.E_ActivateTimeTableAbsType.time)
#define OSError_ActivateTimeTableRel_delta() (OSErrorUnion.E_ActivateTimeTableRelType.delta)
#endif

#define OSError_ChangeAlarmPeriod_AlarmID() (OSErrorUnion.E_ChangeAlarmPeriodType.AlarmID)
#ifdef EXTENDED_STATUS
#define OSError_ChangeAlarmPeriod_newPeriod() (OSErrorUnion.E_ChangeAlarmPeriodType.newPeriod)
#endif

#define OSError_CheckTaskDeadline_TaskID() (OSErrorUnion.E_CheckTaskDeadlineType.TaskID)

#define OSError_CheckSoftwareStack_stackStatus() (OSErrorUnion.E_CheckSoftwareStackType.stackStatus)

#define OSError_StackOverflowHandler_stackStatus() (OSErrorUnion.E_StackOverflowHandlerType.stackStatus)

/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */

/* __LOCATE_IN(SECTIONNAME) macro to specify section name, for TriCore GNU compiler short addressing */
extern OSServiceIdType              os_ServiceId  __LOCATE_IN(BSS_A1);
extern OSErrorUnionType             OSErrorUnion  __LOCATE_IN(BSS_A4);
#ifdef EXTENDED_STATUS
extern T_os_uint8                   os_lastOSEKError ;
#endif
/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */

#endif /*__E_ERROR_H*/
/*************************************************************************************************/
