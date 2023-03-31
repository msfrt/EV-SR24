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
 * $Filename__:epmcrs_plaus_prot.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MRC2FE$ 
 * $Date______:13.02.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcrs_plaus_prot$ 
 * $Variant___:1.26.0$ 
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
 * 1.26.0; 0     13.02.2012 MRC2FE
 *   RCMS01254756: Function development: plausibilisation of angle clock and 
 *   tooth counter
 * 
 * 1.22.0; 1     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * 1.22.0; 0     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMCRS_PLAUS_PROT_H
#define _EPMCRS_PLAUS_PROT_H


/*
 ***************************************************************************************************
 * Atomic generated includes not allowed but no other way is possible
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


// define for resolution of factors for plausibility window. Shift result with this value right
// after multiplication with factors from EpmCrS_plaus_dat.h
#define EPMCRS_FACPLAUSRES 4

/*
 ***************************************************************************************************
 * extern-declarations for owned messages
 ***************************************************************************************************
 */
MEMLAY_USE_ENVRAM(extern uint8, EpmCrS_ctReSyncAgClkDelta);
MEMLAY_USE_ENVRAM(extern uint8, EpmCrS_ctReSyncAgClkDeltaTot);

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCrS_Plaus_Ini(void);   //this is an EPM-internal service
__PRAGMA_USE__CODE__epm__HighSpeed__END



#endif
