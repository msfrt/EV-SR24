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
 * $Filename__:gpta_bss_pcp.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:GS72FE$ 
 * $Date______:08.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:gpta_bss_pcp$ 
 * $Variant___:1.14.0$ 
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
 * 1.14.0; 0     08.06.2010 GS72FE
 *   remove MISRA warning
 * 
 * 1.11.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: gpta_bss_pcp.h
 *      Version: \main\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _GPTA_BSS_PCP_H
#define _GPTA_BSS_PCP_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      header file for BSS transmit/receive low level driver
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
/* MISRA RULE 111 VIOLATION: This code will not be used on contoller types other than TriCore     */
typedef struct
{
    uint32  DataField_b19:19;
    uint32  ReadWrite_b:1;
    uint32  Status_b:1;
    uint32  Reserved_b3:3;
    uint32  ErrorInfo_b8:8;
}   Bss_TxRxData_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
/* extern declarations for following function is made in pcp_auto_conf.h,
   to avoid compiler warnings, no extern declaration of this function is made here:
   Gpta_BssTxRx(void)
*/

/* _GPTA_BSS_PCP_H                                                                                */
#endif
