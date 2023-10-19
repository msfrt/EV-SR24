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
 * $Filename__:dfes_dia_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PKA2SI$ 
 * $Date______:04.03.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:dfes_dia_prot$ 
 * $Variant___:2.11.0$ 
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
 * 2.11.0; 0     04.03.2011 PKA2SI
 *   support of AUTOSAR DTCGroups
 * 
 * 2.5.0; 0     10.08.2009 ILK2SI
 *   decentral visiblity buffer
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfes_dia_prot.h
 *      Version: \main\10
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DFES_DIA_PROT_H
#define _DFES_DIA_PROT_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      Private definitions for diagnostic tester interface access to DFES
 *
 * scope               INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Mask definitions for handling of DiaP DTC: */
#define DFES_DIAP_FLT_ACT   0x8000u
#define DFES_DIAP_SPORADIC  0x4000u

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
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8 DFES_ctVisible;
extern uint8 DFES_stClearDTCGroupMskOrder;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END


/* Prototypes */
/**************/
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DFES_GetClassVisibility(uint idxFES);
uint DFES_IsVisible (uint idxFES, uint clsMsk, uint stMsk, uint fltMsk);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFES_VisObsv(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

#endif /* _DFES_DIA_PROT_H */
