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
 * $Filename__:tprot_rttp_proc_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:01.04.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:tprot_rttp_proc_priv$ 
 * $Variant___:1.10.0$ 
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
 * 1.10.0; 0     01.04.2009 AWL2SI
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _TPROT_RTTP_PROC_PRIV_H
#define _TPROT_RTTP_PROC_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      {!Description MUST start in this line - replace text inclusive brackets!}
 *
 * \scope               [CONF][API][INTERN] {[] means that the content is optional - remove them}
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
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

#ifdef TPROT_RTTP_ACTIVE
#if (TPROT_RTTP_ACTIVE != FALSE)

__PRAGMA_USE__tprot__50ms_1s__RAM__arr32__START
extern uint32 Tprot_xBuffer_au32[];
__PRAGMA_USE__tprot__50ms_1s__RAM__arr32__END

#ifdef TPROT_CEP_ACTIVE
#if (TPROT_CEP_ACTIVE != FALSE)
__PRAGMA_USE__tprot__50ms_1s__RAM__arr32__START
extern uint32 Tprot_xBuffer_Cep_au32[];
__PRAGMA_USE__tprot__50ms_1s__RAM__arr32__END

#endif /* CEP ACTIVE */
#endif
#endif /* TPROT_RTTP_ACTIVE */
#endif

void Tprot_Rttp_Proc_Ini(void);
void Tprot_Rttp_Proc(void);

#endif /* _TPROT_RTTP_PROC_PRIV_H */
