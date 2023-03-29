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
 * $Filename__:e_inface.h$ 
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
 * $Name______:e_inface$ 
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
 *  FILE:           e_inface.h
 *
 *  DESCRIPTION:    General interface header for ERCOSEK
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

who when         call        what
---------------------------------------------------------------------------------------------------
Gw  21.01.2003   42628       moved to line 03c and created a seperate file for each function
Vr  27.02.2003   42695       DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Vr  11.03.2003   46653       TaskType, AlarmType and ResourceType are not allowed to be defined as const.
                               Remove const from type declaration
Lk  18.03.2003   xxx         added DeclareAppMode for Defaul AppMode OSDEFAULTAPPMODE                       
EW  18.03.2003   xxxxx       DD005_Get_TASKID_IN _ISR
Ew  21.03.2003   42695       DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Ew  25.03.2003   47344       Remove tabs from source file
Ew  26.03.2003   xxxxx       DD009_Define_Counter_constants
Vr  10.04.2003   xxxxx       DD002 Error Handling
Sz  27.10.2003   47078       File name should be all with low case characters
Sz  13.01.2004   51916       RTAtrace support for ERCOSEK
Ry  14.01.2004   51783       Suspend/ResumeAllInterrupts as Macro/Inline. Included file  e_source_inline.h 
Ry  04.03.2004   53583       SuspendAllInterrupt as inline function cross effects on other target
Ry  11.03.2004   53583       SuspendAllInterrupt as inline function cross effects on other target.Added 
                              macro for including e_source_inline.h file   
Vr  09.06.2004	 54014       Const variable in RAM
Ry  26.05.2004   80069DD002  MISRA mark generated code.
                             MISRA RULE VIOLATION:Warning 652: #define of symbol 'switchTimeTable()'
                             declared previously.[Classified:Mistake].Removed unuseful macro 
                             switchTimeTable(x) defined in compile phase of the build process
JSR 2004.11.24   57274       Implement single-switch for RTA-Trace, to work with Siemens build process
JSR 2004.12.09   56929       Re-arrange order of #includes so that OS_ADVANCED_TIMER_CALCULATION is set before E_TARDEF/H or E_SYSTIM.H 
JSR 2004.12.31   57274       Added all-important #include checktrace.h 
JSR 2005.01.20   xxxxx       Correct mis-match of DeclareTimetable definitions 
JSR 2005.01.21   xxxxx       Removed spurious circular definition of SwitchTimetable
Ry  13.05.2005  80069DD003   MISRA mark ERCOSEK Kernel.
                             MISRA RULE 98 VIOLATION:  Note 960: Violates  Multiple use of '#/##' 
                             operators in macro definition.[Classified:Deliberate].Added comment.
Ry  2005.07.29   61489       Short addressing causes Linker errors
*/

#ifndef __E_INFACE_H
#define __E_INFACE_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */

#ifndef LINK_ONLY_INCLUDE
   #ifndef ANSI_C_CHECK
      #ifndef ESCAPE_PARSER
         /*ercosek.h is generated by the ECCO and includes the definitions of PRESCALER and
         INPUT_FREQ. The values are defined in hip.db */
         #include            "ercosek.h"
      #endif
   #endif
#endif


#include "e_std_type.h"               
#include "e_tardef.h"
/*Default definition of OS_CONST & OS_CONST_CODGEN if not defined in target specific files. */
/*These are required for GNU because GNU compiler ignores Modifer 'const' in the typedef*/
#ifndef OS_CONST 
     #define OS_CONST            const      		
#endif
#ifndef OS_CONST_CODGEN 
     #define OS_CONST_CODGEN           		
#endif

#include "e_tartyp.h"       /* has to be included before e_stack.h and e_system.h */
#include "e_system.h"                                    
#include "e_task.h"                 
#include "e_deadln.h"               
#include "e_alarm.h"                
#include "e_timtab.h"               
#include "e_priocp.h"
#include "e_systim.h"               
#include "e_stack.h"                
#include "e_appmod.h"               
#include "e_error.h"
#include "e_inline.h"               
#include "e_debug.h"
#ifndef ANSI_C_CHECK
    #ifndef ESCAPE_PARSER
		#include "checktrace.h"
	#endif 
#endif 
#ifdef   INCLUDE_SOURCE_INLINE		  
#include "e_source_inline.h"  /* has to be included only for Tricore target*/            
#endif             
#ifdef RTAtrace_ENABLE
#include "e_RTAtr.h"
#endif 
           

/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

/*** OSEK declaration statements ***/

/* __LOCATE_IN(SECTIONNAME) macro to specify section name, for TriCore GNU compiler short
   addressing */	
#define DeclareTask(TaskID)         extern const TaskType    TaskID	 __LOCATE_IN(ERC_ROM)

/* The following block of code encapsulates definitions and declarations which
are valid during the ESCAPE C program checking phase of the build process. */
#ifdef ANSI_C_CHECK
    extern T_os_uint                PRESCALER;
    extern T_os_uint                INPUT_FREQ;
    #define DeclareResource(x)      extern const ResourceType x
    #define DeclareAlarm(x)         extern const AlarmType x
    #define DeclareTimeTable(x)     extern T_os_timeTableDesc  x##Desc
    #define SwitchTimeTable(x)      SwitchTimeTable(& x##Desc)
    #define DeclareAppMode(AppID)   extern const AppModeType      AppID
#endif

/* The following block of code encapsulates definitions and declarations which
are valid during the ESCAPE parsing phase of the build process. */
#ifdef ESCAPE_PARSER
    extern T_os_uint                     PRESCALER;
    extern T_os_uint                     INPUT_FREQ;
    #undef  OS_TRUE
    #undef  OS_FALSE
    #undef  OSMAXALLOWEDVALUE   
    #undef  OSTICKDURATION
    #undef  OSMINCYCLE
    #undef  OSTICKSPERBASE
    #undef  INITIAL_INTERRUPT_DESCRIPTOR
    #undef  SUSPEND_LS_INTERRUPTS
    #undef  SUSPEND_HS_INTERRUPTS
    #undef  SUSPEND_ALL_INTERRUPTS
    #undef  RESUME_INTERRUPTS
    #undef  SYSTEM_TICK_DURATION    
    #undef  SYSTEM_TIME_LOW         
    #undef  SYSTEM_TIME_HIGH            
    #undef  MICROSECONDS_TO_TICKS(x)
    #undef  MICROSECONDS_TO_TICKS_VAR(x)
    #undef  MICROSECONDS_TO_TICKS_PAR(x,y,z)
    #undef  MICROSECONDS_TO_TICKS_CONST(x)
    #undef  MILLISECONDS_TO_TICKS_VAR(x)
    #undef  MILLISECONDS_TO_TICKS_CONST(x)
    #undef  OSTICKDURATION
    #undef  SuspendOSInterrupts()
    #undef  ResumeOSInterrupts()
    /* __LOCATE_IN(SECTIONNAME) macro to specify section name, for TriCore GNU compiler short 
       addressing */
    #define DeclareResource(x)      extern const ResourceType x	  __LOCATE_IN(ERC_ROM) 
    #define DeclareAlarm(AlarmID)   extern const AlarmType AlarmID	__LOCATE_IN(ERC_ROM) 
    #define DeclareTimeTable(x)     extern T_os_timeTableDesc  os_##x##Desc	 __LOCATE_IN(ERC_ROM) 
    #define SwitchTimeTable(x)      SwitchTimeTable(& os_##x##Desc)
    #define DeclareAppMode(AppID)   DeclareAppMode(AppID)
#endif

/* The following block of code encapsulates definitions and declarations which
are valid during the compiling phase of the build process. */
#ifndef ANSI_C_CHECK
  #ifndef ESCAPE_PARSER
    /* __LOCATE_IN(SECTIONNAME) macro to specify section name, for TriCore GNU compiler short 
       addressing */ 
    #define DeclareAlarm(AlarmID)   extern const AlarmType AlarmID  __LOCATE_IN(ERC_ROM)  
    #define DeclareResource(ResID)  extern const ResourceType ResID	__LOCATE_IN(ERC_ROM) 
    #define DeclareAppMode(AppID)   extern const AppModeType AppID	__LOCATE_IN(ERC_ROM) 
/* MISRA RULE 98 VIOLATION:Note 960: Violates  Multiple use of '#/##' operators in macro definition.
                                     [Classified:Deliberate]. ## is used for generation of  
                                     Timetable descriptor */
	/*lint -e960*/
    #define DeclareTimeTable(x)     extern T_os_timeTableDesc  os_##x##Desc  __LOCATE_IN(ERC_ROM) 
	/*lint -restore*/
  #endif
#endif


/*** define OSEK constants ***/
#define INVALID_TASK                (TaskType)(-1)     /* idle task = OS_END = -1 */

/*** define of default Rescource */
DeclareResource( RES_SCHEDULER );

/*** define of default OSDEFAULTAPMODE */
DeclareAppMode(OSDEFAULTAPPMODE);

/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */

#endif /* __E_INFACE_H */

/*************************************************************************************************/

