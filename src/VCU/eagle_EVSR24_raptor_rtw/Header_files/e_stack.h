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
 * $Filename__:e_stack.h$ 
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
 * $Name______:e_stack$ 
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
 *  FILE:           e_stack.h
 *
 *  DESCRIPTION:    Declaration of ERCOSEK data types belonging to stack operations 
 *
 *  VISIBILITY:     Internal header
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
---------------------------------------------------------------------------------------------------
Gw  21.01.2003  42628       moved to line 03c and created a seperate file for each function
Vr  27.02.2003  42695       DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Vr  11.03.2003  42695       DD022 introduce prefix OS_ for all ERCOSEK- related symbols
Vr  23.05.2003  37447       Adapt ORTI generation to new Standard
Ry  26.05.2004  80069DD001  MISRA mark ERCOSEK headers.
                            MISRA RULE 44 VIOLATION: redundant explicit casting.[Classified:Deliberate]
						    Added comment
Ry  26.05.2004  80069DD001  MISRA mark ERCOSEK headers.
                            MISRA RULE 53 VIOLATION: All non-null statements shall have a side effect.
                            [Classified:Deliberate].Added comment
Ry  2005.07.29  61489       Short addressing causes Linker errors
JSR 2009.05.15  86611       Use of resources leads to missing task dispatches

*/


#ifndef __E_STACK_H
#define __E_STACK_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

/*** constants for T_os_stackMonitor.stackStatus            ***/
#define STACK_OK     0x0000u   /* no error detected        */
#define USTACK_OVFL  0x0001u   /* userstack overflow       */
#define USTACK_NFULL 0x0002u   /* userstack near full      */

#define ESTACK_OVFL  0x0100u   /* ERCOSEK stack overflow   */
#define ESTACK_NFULL 0x0200u   /* ERCOSEK stack near full  */

#define OSTACK_OVFL  0x0404u   /* online stack supervision */    

/* default code synchronisation, can be over-ridden in e_tardef.h */
#ifndef STACK_CODE_SYNC
#define STACK_CODE_SYNC
#endif  /* STACK_CODE_SYNC */

/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */
#define OS_PUSH_ERCOSEK_STACK( x )             {os_ercosekSP++;           \
                                               STACK_CODE_SYNC \
/*MISRA RULE 44 VIOLATION: redundant explicit casting.[Classified:Deliberate].some targets like  */    \
/*                         ES1135 pass the value of x as T_os_uint16                             */    \
                                           *(os_ercosekSP-1) = (T_os_uint)x;}						


/*MISRA RULE 53 VIOLATION: All non-null statements shall have a side effect.[Classified:Deliberate].value at
                           location (ercosekSP-1) is assigned to a variable*/
#define OS_POP_ERCOSEK_STACK()                 *(os_ercosekSP-1); \
                                               STACK_CODE_SYNC \
                                            os_ercosekSP--;

#ifdef EXTENDED_STATUS

/*Macros used to store taskIds & isrIds. Info required for ORTI */
#define OS_PUSH_ISRID_STACK( x )           {os_isrIdSP++;           \
                                               STACK_CODE_SYNC \
                                            *(os_isrIdSP-1) = x;}

#define OS_POP_ISRID_STACK()               *(os_isrIdSP-1);        \
                                               STACK_CODE_SYNC \
                                            os_isrIdSP--;

#define OS_PUSH_TASKID_STACK( x )           {os_taskIdSP++;           \
                                               STACK_CODE_SYNC \
                                            *(os_taskIdSP-1) = x;}

#define OS_POP_TASKID_STACK()               *(os_taskIdSP-1);        \
                                               STACK_CODE_SYNC \
                                            os_taskIdSP--;
#endif


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */
typedef struct
{
    T_os_uint                                    stackStatus;
    T_os_uint                                    usedUserStackSpace;
    T_os_uint                                    usedErcosekStackSpace;
} T_os_stackMonitor;

#ifndef __STACK_TYPES
    #define __STACK_TYPES
    typedef T_os_uint                            StackAddressType;
#endif

/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */
extern T_os_uint* volatile                       os_ercosekSP;

#ifdef EXTENDED_STATUS
/* __LOCATE_IN(SECTIONNAME) macro to specify section name, for TriCore GNU compiler short addressing */
extern T_os_taskId *  os_taskIdSP  __LOCATE_IN(BSS_A4); 
extern T_os_taskId *  os_isrIdSP   __LOCATE_IN(BSS_A4);
#endif

/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */

/*** prototypes of internal ERCOSEK functions, only needed for configuration ***/
void                writeUstackCheckWords   ( void );
void                writeStackPattern       ( void );


/*** prototypes for extended API-services ***/
StatusType          CheckSoftwareStack      ( void );
StatusType          EnableOnlStackSuperv    ( void );
void                StackOverflowHandler    ( void );

#endif /* __E_STACK_H */
/*************************************************************************************************/




