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
 * $Filename__:e_inline.h$ 
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
 * $Name______:e_inline$ 
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
 *  FILE:           E_INLINE.H
 *
 *  DESCRIPTION:    Inline function declarations   
 *
 *  AUTHOR:         ETAS/PSC1-Sz
 *
 *  CREATED:        24.01.2003            11:00:00
 *
 *  COPYRIGHT:      ETAS GmbH
 *                  Stuttgart / Germany
 *                  All rights reserved
 **************************************************************************************************
 
 History:
 --------

who when        call         what
---------------------------------------------------------------------------------------------------
Sz  24.01.2003  42628        moved to line 03c and created a seperate file for each function
Sz  27.01.2003  46417        Make Disable/EnableAllInterrupts real interrupt functions
Ry  09.12.2003  51600 	     inlining of function adapted as per GNU CompilerV3.3.2
Ry  09.12.2003  DD111        Inline OSEK APIs.OSEK API Inline Functions should be callable from external
       					     object code as well
Ry  09.12.2003  51600        Added beginVerbatim and endVerbatim	required for ESCAPE Parser
Ry  27.05.2004  80069DD001   MISRA mark ERCOSEK headers.
                             MISRA RULE VIOLATION: Error 31 A function defined in this module is redefined.
                             [Classification:Deliberate].Added comment
*/

#ifndef __E_INLINE_H
#define __E_INLINE_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

/*-------------------------------------------------------------------------------------------------
 *    Macros and inline functions
 *-------------------------------------------------------------------------------------------------
 */


/*-------------------------------------------------------------------------------------------------
 *    Type definitions
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

/*MISRA RULE VIOLATION: Error 31 A function defined in this module is redefined.
  [Classification:Deliberate].To enable OSEK Inline API Functions to be callable from external
  object code as well functions EnableAllInterrupts() and DisableAllInterrupts() is defined as 
  inline function as well as a function definition.Added #ifndef _lint as Lint does not understand
  this */

#ifndef _lint
/*The combination of extern, __inline__ works like macro according to GNU CompilerV3.3.2*/ 
extern __inline__ void EnableAllInterrupts(void)
{
     /*beginVerbatim*/
     _enable();
     /*endVerbatim*/
} 

extern __inline__ void DisableAllInterrupts(void)
{
     /*beginVerbatim*/
     _disable();
     _isync();
     /*endVerbatim*/
}  
#endif
/*************************************************************************************************/

#endif /* __E_INLINE_H */
