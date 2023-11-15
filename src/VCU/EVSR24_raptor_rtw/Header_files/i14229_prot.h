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
 * $Filename__:i14229_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:30.10.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_prot$ 
 * $Variant___:5.6.0$ 
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
 * 5.6.0; 0     30.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: i14229_prot.h
 *      Version: \main\11
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229_PROT_H
#define _I14229_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *      Protected header for ISO14229 module package: ISO I14229 -1 services
 *
 * \scope              [INTERN]
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

/* Response not required : suppress positive response   */
#define I14229_SUPPRESS_POSRESPONSE          0x80

/* Subfunction Parameter value    */
#define I14229_SUBFUNC_PARA_VAL              0x7F

#ifndef DIAGCOM_RC_SFNSIAS_DU8
#define DIAGCOM_RC_SFNSIAS_DU8               0x7E
#endif


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
/* To remove MISRA warnings in rmba and wmba services..*/

__PRAGMA_USE__bassvr__10ms__RAM__x8__START
extern uint8   I14229_Rmba_st_u8;
extern uint8   I14229_Wmba_st_u8;
__PRAGMA_USE__bassvr__10ms__RAM__x8__END
#endif /* _I14229_PROT_H */
