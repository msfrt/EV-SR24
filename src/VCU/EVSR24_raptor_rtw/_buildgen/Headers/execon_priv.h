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
 * $Filename__:execon_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KDD2FE$ 
 * $Date______:16.12.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:execon_priv$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     16.12.2008 KDD2FE
 *   Migration from CC with label B_EXECON.8.0.0
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: execon_priv.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _EXECON_PRIV_H
#define _EXECON_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              internal header file for execon statemachine
 *
 * \scope           [INTERN]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__srv__NormalSpeed__START
extern void ExeCon_StateMachine(void);
extern bool ExeCon_CheckChangeState(uint8 *);
extern uint32 ExeCon_Divu64(uint64, uint32);
__PRAGMA_USE__CODE__srv__NormalSpeed__END

#endif
