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
 * $Filename__:e_alarm.h$ 
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
 * $Name______:e_alarm$ 
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
 *  FILE:           e_alarm.h
 *
 *  DESCRIPTION:    Header for alarm services
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

who when        ver call    what
---------------------------------------------------------------------------------------------------
Gw  21.01.2003  1   42628   moved to line 03c and created a seperate file for each function
Vr  27.02.2003  2   42695   DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Vr  11.03.2003  3   46653   TaskType, AlarmType and ResourceType are not allowed to be defined as const.
                            Remove const from type declaration
Sz  12.11.2003  4   51363   Review on TriCore,DD011 Clearify FAR, NEAR added __indirect to fast_code
                            to make it locatable in internal SPRAM.
Ts  2006.09.29  xxxxx       Moved function prototype for os_processTimeOuts from e_intern.h
                             
                           
*/

#ifndef __E_ALARM_H
#define __E_ALARM_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

/* ERCOSEK identifier types
****************************/
typedef T_os_uint                       AlarmType;


/* ERCOSEK alarm types
************************/
typedef struct os_alarmBase
{
    TickType                            maxallowedvalue;
    TickType                            ticksperbase;
    TickType                            mincycle;
} AlarmBaseType;

typedef AlarmBaseType *                 AlarmBaseRefType;

/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */


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

StatusType          SetAbsAlarm             ( AlarmType id, TickType start, TickType cycle );
StatusType          SetRelAlarm             ( AlarmType id, TickType delay, TickType cycle );
StatusType          CancelAlarm             ( AlarmType id );
StatusType          ChangeAlarmPeriod       ( AlarmType id, TickType newPeriod);
StatusType          GetAlarm                ( AlarmType id, TickRefType ticks );
StatusType          GetAlarmBase            ( AlarmType id, AlarmBaseRefType info );

/*** prototypes of internal ERCOSEK functions, only needed for configuration ***/
#ifndef ESCAPE_PARSER 
void                       os_initAlarmTimer          ( void );
void OS_PREFIX_FOR_FAST_FUNCS os_initTimerList           ( void );
/* OS_NEAR  void  OS_PREFIX_FOR_FAST_FUNCS os_processTimeOuts ( void ); */

#endif
#endif /* __E_ALARM_H */

/*************************************************************************************************/

