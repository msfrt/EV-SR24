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
 * $Filename__:e_debug.h$ 
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
 * $Name______:e_debug$ 
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
 *  FILE:           e_debug.h
 *
 *  DESCRIPTION:    Interface header for debug features
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
Vr  09.06.2004	54014   Const variable in RAM
*/

#ifndef __E_DEBUG_H
#define __E_DEBUG_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

/*  datatype for software task table
*************************************/
typedef OS_CONST struct
{
    T_os_callBackPtr                   actFunc;
    T_os_swTaskPtr                     taskPtr;
} T_os_swTaskRef;

/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

#define OS_INVALID_TASK_ID             (0u)
#define OS_INVALID_PRIO                (256u)

/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */

#define getTaskId(ptr)              (ptr)->id

#define getActivationTime(ptr)      (ptr)->cBlkPtr->actTime
#define getStartTime(ptr)           (ptr)->monPtr->startTime
#define getGrossRunTime(ptr)        (ptr)->monPtr->grossRunTime
#define getNetRunTime(ptr)          (ptr)->monPtr->netRunTime
#define getMinRunTime(ptr)          (ptr)->monPtr->minRunTime
#define getMaxRunTime(ptr)          (ptr)->monPtr->maxRunTime
#define getTimeStep(ptr)            (ptr)->monPtr->dT

/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */

void        os_initDebugExtension      ( void );
TickType    GetDeltaT                  ( void );
void        os_ercPreTaskHook          ( void );
void        os_ercPostTaskHook         ( void );
void        os_startTaskHook           ( T_os_taskId id, T_os_taskMonitor* monPtr );
void        os_endTaskHook             ( T_os_taskId id, T_os_taskMonitor* monPtr );

#endif /* __E_DEBUG_H */

/*************************************************************************************************/

