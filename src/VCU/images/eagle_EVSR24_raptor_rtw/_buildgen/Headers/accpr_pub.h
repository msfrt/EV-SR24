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
 * $Filename__:accpr_pub.h$ 
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
 * $Name______:accpr_pub$ 
 * $Variant___:2.6.0$ 
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
 * 2.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: accpr_pub.h
 *      Version: \main\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/**
 ***************************************************************************************************
 * \moduledescription
 *                   Public Header File for Accpr Module
 *
 * \scope  API
 ***************************************************************************************************
 */

#ifndef _ACCPR_PUB_H
#define _ACCPR_PUB_H


/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */

/* Parameter "direction_u8" in the function AccPr_ChkAccPerm */
#define ACCPR_ST_READ               0x00 /* Request Read */
#define ACCPR_ST_WRITE              0x01 /* Request Write */

/*Return values of AccPr_CheckAddress function */

#define ACCPR_PERMDENIED_DU16                   0x0000     /* Permission denied*/
#define ACCPR_OK_DU16                           0x0001     /* Access OK*/
#define ACCPR_CNC_DU16                          0x0002     /* Condition not correct*/
#define ACCPR_INVALID_ADDRESS_DU16              0x0003     /* Invalid address*/

/* Default security level after initialisation */
#define ACCPR_DEFAULT     0x00

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__accpr__NormalSpeed__START
extern void AccPr_Co_Proc_Ini(void)  ;
extern uint16 AccPr_ChkAccPermExt(uint32 adStart_u32, uint32 size_u32, uint8 direction_u8,
                              bit16 accPerm_b16 ) ;
__PRAGMA_USE__CODE__accpr__NormalSpeed__END


#endif
