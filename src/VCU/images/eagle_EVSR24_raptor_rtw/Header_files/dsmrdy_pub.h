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
 * $Filename__:dsmrdy_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RMP2SI$ 
 * $Date______:20.03.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:dsmrdy_pub$ 
 * $Variant___:2.10.0$ 
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
 * 2.10.0; 0     20.03.2012 RMP2SI
 *   DSM compiler independency task.
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmrdy_pub.h
 *      Version: \main\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DSMRDY_PUB_H
#define _DSMRDY_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      public headerfile for dsm readiness evaluation
 *
 * scope               INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define setComp41(Index)          (DSMRdy_SetCmplByDFP(Index))

/*
 ***************************************************************************************************
 * Definition of access macros
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
MEMLAY_USE_ENVRAM (extern uint32, DSMRdy_xPId41);


__PRAGMA_USE__dsm__1_5ms__RAM__x32__START
extern uint32 DSMRdy_xPId1;
__PRAGMA_USE__dsm__1_5ms__RAM__x32__END


/*
 ***************************************************************************************************
 * Prototypes declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSMRdy_SetCmplByDFC(DSM_DFCType DFC_Idx);
void DSMRdy_SetRdyByDFC(DSM_DFCType DFC_Idx);
void DSMRdy_SetCmplByDFP(uint numPath);
void DSMRdy_SetRdyByDFP(uint numPath);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END


#endif /* _DSMRDY_PUB_H */
