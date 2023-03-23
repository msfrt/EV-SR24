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
 * $Filename__:execon_pub.h$ 
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
 * $Name______:execon_pub$ 
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
 *      File name: execon_pub.h
 *      Version: \main\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _EXECON_PUB_H
#define _EXECON_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              global header file for execon statemachine
 *
 * \scope           [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
__PRAGMA_USE__srv__1_5ms__RAM__s32__START
extern ExeCon_States_t ExeCon_States_s;
extern ExeCon_States_t ExeCon_LastStates_s;
extern ExeCon_TimeInStates_t ExeCon_TimeInStates_s;
__PRAGMA_USE__srv__1_5ms__RAM__s32__END

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__srv__NormalSpeed__START
extern void ExeCon_Proc_1_Ini(void);
extern void ExeCon_Proc_2_Ini(void);
extern void ExeCon_Proc_1_IniEnd(void);
extern void ExeCon_Proc_2_IniEnd(void);
extern void ExeCon_Main_Proc(void);
__PRAGMA_USE__CODE__srv__NormalSpeed__END

#endif
