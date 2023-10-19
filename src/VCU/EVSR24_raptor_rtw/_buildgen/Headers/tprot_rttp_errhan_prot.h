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
 * $Filename__:tprot_rttp_errhan_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:VWT5 specific$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:tprot_rttp_errhan_prot$ 
 * $Variant___:1.7.0$ 
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
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _TPROT_RTTP_ERRHAN_PROT_H
#define _TPROT_RTTP_ERRHAN_PROT_H

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


extern void Tprot_Rttp_ErrorHandling(void);

#if (TPROT_CEP_ACTIVE != FALSE )
extern void Tprot_Cep_ErrorHandling(void);
#endif


/* _TPROT_RTTP_ERRHAN_PROT_H */
#endif
