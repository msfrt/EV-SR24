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
 * $Filename__:amd29bdd320_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KRS1COB$ 
 * $Date______:17.11.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:amd29bdd320_prot$ 
 * $Variant___:1.16.0$ 
 * $Revision__:2$ 
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
 * 1.16.0; 2     17.11.2011 KRS1COB
 *   update for S29CL032J_ProgDescr_cs name
 * 
 * 1.16.0; 1     31.10.2011 KRS1COB
 *    Update of Pavast file and change of Ext flash interfaces to old names
 * 
 * 1.16.0; 0     16.10.2011 KRS1COB
 *   RCMS00704237Flash: Support of S29CL016J and S29CL032J
 * 
 * 1.11.0; 0     18.02.2010 LE79BA
 *   CC base version: B_FLASH.11.0.0
 *   new version: B_FLASH.12.0.0
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: amd29bdd320_prot.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _AMD29BDD320_PROT_H                              /* protect multiple includes              */
#define _AMD29BDD320_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *          Headerfile for LLD AM29BDD320.
 *
 ***************************************************************************************************
 */
/* if flash device is configured */
#ifdef FLASH_S29CL032J

/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
/* The functions and also the commands are identical to the AM29BDD160 flash, so they can be used */
#define AM29BDD320_Unlock AM29BDD160_Unlock
#define AM29BDD320_Lock   AM29BDD160_Lock
#define AM29BDD320_Erase  AM29BDD160_Erase
#define AM29BDD320_Prog   AM29BDD160_Prog

/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Flash_ProgDescr_t S29CL032J_ProgDescr_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

#endif

/* _AMD29BDD320_PROT_H                                                                             */
#endif
