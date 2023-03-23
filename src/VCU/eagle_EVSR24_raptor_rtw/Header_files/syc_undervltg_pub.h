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
 * $Filename__:syc_undervltg_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:syc_undervltg_pub$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_SYC\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 
#ifndef _SYC_UNDERVLTG_PUB_H
#define _SYC_UNDERVLTG_PUB_H

/*
******************************************************************************
* Function prototypes
******************************************************************************
*/
__PRAGMA_USE__CODE__syc__LowSpeed__START
void SyC_UnderVltg_Proc_Ini (void) ;
void SyC_UnderVltg_Main (void) ;
__PRAGMA_USE__CODE__syc__LowSpeed__END

__PRAGMA_USE__CODE__syc__HighSpeed__START
void SyC_UnderVltgIsr_Proc (void) ;
__PRAGMA_USE__CODE__syc__HighSpeed__END

#endif /* _SYC_UNDERVLTG_PUB_H */
