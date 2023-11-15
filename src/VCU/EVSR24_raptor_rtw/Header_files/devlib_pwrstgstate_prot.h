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
 * $Filename__:devlib_pwrstgstate_prot.h$ 
 * 
 * $Author____:KLN1SI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:11.11.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_pwrstgstate_prot$ 
 * $Variant___:1.141.0$ 
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
 * 1.141.0; 0     11.11.2008 KLN1SI
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PWRSTGSTATE_PROT_H                                 /* protect multiple includes   */
#define _DEVLIB_PWRSTGSTATE_PROT_H

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

#if ( DEVLIB_PWRSTGSTATEMOCSOPCHK_SY == 1)
    /* import static variable defined in protected RAM */
    MEMLAY_USE_PROTRAM(extern uint8, MoCSOP_stRdy);
#endif

#endif
