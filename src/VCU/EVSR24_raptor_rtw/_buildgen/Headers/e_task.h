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
 * $Filename__:e_task.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:29.09.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:e_task$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 0     29.09.2009 AWL2SI
 *   B_OS.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/**************************************************************************************************
 *  FILE:           e_task.h
 *
 *  DESCRIPTION:    Interface header for scheduler
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

who when        call    what
---------------------------------------------------------------------------------------------------
Gw  21.01.2003  42628   moved to line 03c and created a seperate file for each function
Vr  27.02.2003  42695   DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Vr  11.03.2003  46653   TaskType, AlarmType and ResourceType are not allowed to be defined as const.
                        Remove const from type declaration
Ew  02.03.2003  xxxxx   DD001_GROUP_OF_TASK
Vr  23.05.2003  37447   Adapt ORTI generation to new Standard
Sz  12.11.2003  51363   Review on TriCore,DD011 Clearify FAR, NEAR added __indirect to fast_code
                        to make it locatable in internal SPRAM.
Vr  09.06.2004	54014   Const variable in RAM
Ry  2005.07.29  61489   Short addressing causes Linker errors
Ts  2006.09.29  xxxxx   Moved function prototype for os_dispatchPreemp from e_intern.h
                         
*/

#ifndef __E_TASK_H
#define __E_TASK_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

/* ERCOSEK process types
*************************/
typedef void                            ( T_os_process )( void );  
typedef T_os_process *                  T_os_processPtr;           
typedef OS_CONST T_os_processPtr *         T_os_processPtrPtr;        
typedef OS_CONST T_os_processPtr *         T_os_processPtrTabPtr;     
typedef T_os_processPtr OS_CONST           T_os_processPtrTab[];      


/* ERCOSEK function and function pointer types
***********************************************/
typedef void                            ( T_os_func )( void );     
typedef T_os_func *                     T_os_funcPtr;              
typedef T_os_funcPtr                    T_os_callBackPtr;          
typedef T_os_funcPtr OS_CONST           T_os_funcPtrTab[];         
typedef T_os_funcPtr                    T_os_varFuncPtrTab[];      

typedef T_os_callBackPtr                CallBackType;


/* ERCOSEK identifier types
****************************/
typedef T_os_uint8                      T_os_taskId;

/* ERCOSEK task states type
****************************/
typedef enum os_taskStates
{
    SUSPENDED                           = 0,
    READY                               = 1,
    RUNNING                             = 2,
    WAITING                             = 3
} TaskStateType;

typedef TaskStateType *                 TaskStateRefType;

/* ERCOSEK task control block type
***********************************/
typedef struct 
{
    TickType                            actTime;
#ifdef EXTENDED_STATUS         
    T_os_uint                           curResAccessValue;                       
#endif    
    T_os_uint8                          nofActiv;               
    T_os_uint8                          state;  
} T_os_taskCBlk;


/* datatype for task priorities
********************************/
typedef T_os_uint                       PrioType;

/* ERCOSEK task descriptor types
*********************************/
typedef const struct os_swTask          T_os_swTaskDesc;           
typedef const struct os_hwTask          T_os_hwTaskDesc;           

/* ERCOSEK task pointer types
*****************************/
typedef T_os_swTaskDesc *               T_os_swTaskPtr;            
typedef T_os_hwTaskDesc *               T_os_hwTaskPtr;            

typedef T_os_swTaskDesc *               TaskType;
typedef T_os_swTaskDesc *               GetTaskType;
typedef GetTaskType  *                  TaskRefType;


/*  datatype for task specific informations 
********************************************/
typedef struct
{
    /* elements needed if only dT is important */
    TickType                            dTsaved;
    TickType                            startTime;
} T_os_tinyTaskMonitor;

typedef struct
{
    /* elements needed for timing information */
    TickType                            dTsaved;
    TickType                            startTime;
    TickType                            startRt;
    TickType                            grossRunTime;
    TickType                            netRunTime;
    TickType                            minRunTime;
    TickType                            maxRunTime;
    TickType                            dT;
    /* elements needed for status information */
    T_os_taskId                         lastTask;
    /* further elements as needed, e.g.
    ** pointer to measure of logging groups
    ** for ASCET-SD
    ****************************************/
    OS_ASD_MONITOR_ELEMENTS
} T_os_taskMonitor;

/* define ERCOSEK task descriptors now
***************************************/
struct os_swTask
{
    const T_os_processPtr *                processTabPtr;        
    T_os_taskCBlk *                        cBlkPtr;                
    T_os_taskMonitor *                     monPtr;                 
    PrioType                               prio;
    PrioType                               groupPrio;  /* 0 as default */  
    TickType                               deadline;                  
    T_os_uint8                             maxNofActiv;    
    T_os_uint8                             OSEK_Task;  /* 0 as default */ 
    T_os_taskId                            id;       
};

struct os_hwTask
{
    T_os_taskId                            id;                     
    T_os_taskMonitor *                     monPtr;                 
};

/* ERCOSEK monitor structure
*****************************/                                                  
typedef struct os_str_mon
{
    T_os_swTaskPtr                         taskPtr;
    const T_os_processPtr *                processSelector;
    T_os_uint8                             fifoInIndex;
    T_os_uint8                             fifoOutIndex;
    T_os_uint *                            SavedErcosekSP;
} T_os_mon;

/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

#ifdef EXTENDED_STATUS
#define OS_NO_TASK  0   
#define OS_NO_ISR   0
#endif
/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */
#ifdef EXTENDED_STATUS
/* __LOCATE_IN(SECTIONNAME) macro to specify section name, for TriCore GNU compiler short addressing */
extern T_os_taskId         os_taskId  __LOCATE_IN(BSS_A1); 
extern T_os_taskId         os_isrId   __LOCATE_IN(BSS_A1); 
extern T_os_taskId         os_taskIdStack[] ;
extern T_os_taskId         os_isrIdStack[] ;
#endif

extern T_os_swTaskPtr      os_runningTaskPtr; 

/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */
#ifndef ESCAPE_PARSER 
StatusType OS_PREFIX_FOR_FAST_FUNCS ActivateTask            ( TaskType task );
StatusType OS_PREFIX_FOR_FAST_FUNCS TerminateTask           ( void);
void       OS_PREFIX_FOR_FAST_FUNCS os_terminateTaskIntern  ( void);
StatusType                       ChainTask               ( TaskType task );
StatusType                       Schedule                ( void );
StatusType                       RestartTask             ( void );
StatusType                       GetTaskID               ( TaskRefType id );
StatusType                       GetTaskState            ( TaskType id, TaskStateRefType state );
void                             os_dispatchHwTask       ( T_os_hwTaskPtr hwTaskPtr );
void                             os_terminateHwTask      ( void);
OS_NEAR    void   OS_PREFIX_FOR_FAST_FUNCS os_dispatchPreemp            ( T_os_uint8 CallingMode );
PrioType                         GetPriority             ( void );
#endif
#endif /* __E_TASK_H */

/*************************************************************************************************/

