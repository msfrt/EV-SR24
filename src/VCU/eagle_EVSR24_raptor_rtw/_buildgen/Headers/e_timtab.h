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
 * $Filename__:e_timtab.h$ 
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
 * $Name______:e_timtab$ 
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
 *  FILE:           e_timtab.h
 *
 *  DESCRIPTION:    Header file for time table services
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
*/

#ifndef __E_TIMTAB_H
#define __E_TIMTAB_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */

/* ERCOSEK time table element type
***********************************/
typedef const struct
{
    T_os_callBackPtr                       procPtr;
    TickType                               deltaTime;
} T_os_timeTableElement;

typedef T_os_timeTableElement              TimeTable[];


/* ERCOSEK time table descriptor type
***************************************/
typedef const struct
{
    TickType                               delay;
    T_os_timeTableElement *                tabBeginPtr;
    T_os_timeTableElement *                tabReloadPtr;
} T_os_timeTableDesc;

typedef T_os_timeTableDesc *               TimeTableType;


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

StatusType          ActivateTimeTableAbs    ( TickType time );
StatusType          ActivateTimeTableRel    ( TickType delta );
void                ReloadTimeTablePtr      ( void );
StatusType          SwitchTimeTable         ( TimeTableType ptr);
StatusType          CancelTimeTable         ( void );
void                os_initTimeTableTimer   ( void );


#endif  /* __E_TIMTAB_H */

/*************************************************************************************************/

