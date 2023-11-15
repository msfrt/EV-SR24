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
 * $Filename__:amd29bdd160_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KRS1COB$ 
 * $Date______:28.11.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:amd29bdd160_prot$ 
 * $Variant___:1.16.0$ 
 * $Revision__:3$ 
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
 * 1.16.0; 3     28.11.2011 KRS1COB
 *   updates after testing
 * 
 * 1.16.0; 2     10.11.2011 KRS1COB
 *   Update of Review Points
 * 
 * 1.16.0; 1     31.10.2011 KRS1COB
 *   change of Ext flash interfaces to old names
 * 
 * 1.16.0; 0     16.10.2011 KRS1COB
 *   RCMS00704237Flash: Support of S29CL016J and S29CL032J
 * 
 * 1.11.0; 2     25.03.2010 LE79BA
 *   Undo remove of const - CChecker warning
 * 
 * 1.11.0; 1     24.03.2010 LE79BA
 *   Remove flash_auto_conf.c warning after removing SW Analyzer warnings in:
 *   - amd29bdd160_prot.h
 *   - amd29bdd160_prog.c
 * 
 * 1.11.0; 0     18.02.2010 LE79BA
 *   CC base version: B_FLASH.11.0.0
 *   new version: B_FLASH.12.0.0
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: amd29bdd160_prot.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/* protect from multiple includes */
#ifndef _AMD29BDD160_PROT_H
#define _AMD29BDD160_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *          Protected Headerfile for LLD AM29BDD160.
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
/* Commands for flash */
#define AM29BDD160_RESETTOREAD          0x000000F0ul    /* Reset to read command */
#define AM29BDD160_HEAD0                0x000000AAul    /* 1st program  and erase sector command */
#define AM29BDD160_HEAD1                0x00000055ul    /* 2nd program and erase sector command */
#define AM29BDD160_OFFSET0              0x00000555ul    /* 1st program and erase sector offset */
#define AM29BDD160_OFFSET1              0x000002AAul    /* 2nd program and erase sector offset */
#define AM29BDD160_ERASE_1ST_CMD        0x00000080ul    /* 3rd erase sector command */
#define AM29BDD160_ERASE_2ND_CMD        0x00000030ul    /* Last erase sector command */
#define AM29BDD160_PROGRAM_CMD          0x000000A0ul    /* 3rd program sector command */
#define AM29BDD160_SUSPEND_CMD          0x000000B0ul    /* Program/Erase suspend command */
#define AM29BDD160_RESUME_CMD           0x00000030ul    /* Program/Erase resume command */

#define FLASH_CS_ADDRSEL_WE_32          0x00000A53ul	/* Write Enable for Flash register*/
#define FLASH_CS_ADDRSEL_WP_32          0x00000A57ul	/* Write protect for Flash register*/
#define AM29BDD160_WRITE_CFG            0x000000D0ul    /* Confirm command for BURST Configuration register	*/
#define FLASH_BURSTCONFIG_DIS_AMD	    0x000088C3ul    /* Address offset for Asynchoronous access of BURST Config Register */
#define FLASH_BURSTCONFIG_AMD           0x000008C3ul	/* Address offset for BURST access of BURST Config Register */
/* Toggle Bits for flash status */
#define AM29BDD160_BIT_DQ6              0x00000040ul    /* Program or erase operation in progress or erase suspended */
#define AM29BDD160_BIT_DQ5              0x00000020ul    /* Program or erase time out */
#define AM29BDD160_BIT_DQ2              0x00000004ul    /* Erase operation in progress or suspended */

/* Status of poll function */
#define AM29BDD160_POLL_READY           0x00            /* Erasing has finished */
#define AM29BDD160_POLL_BUSY            0x01            /* Erasing active */
#define AM29BDD160_POLL_ERROR           0x02            /* Erasing error */


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


/* Following functions are located in flash or ram depending on the configured flash device mode */
extern FLASH_S29CL032J_CODE_PRG (Flash_Status_t Am29BDD160_Unlock (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_S29CL032J_CODE_PRG (Flash_Status_t Am29BDD160_Lock (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_S29CL032J_CODE_PRG (Flash_Status_t Am29BDD160_Erase(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_S29CL032J_CODE_PRG (Flash_Status_t Am29BDD160_Prog (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_S29CL032J_CODE_PRG (uint32 Am29BDD160_Poll(uint32 adPollAddress_u32));

#define S29CL032J_Unlock	Am29BDD160_Unlock
#define S29CL032J_Lock		Am29BDD160_Lock
#define S29CL032J_Erase		Am29BDD160_Erase
#define S29CL032J_Prog		Am29BDD160_Prog
#define S29CL032J_Poll		Am29BDD160_Poll
#define S29CL032J_BurstDisable	Am29BDD160_BurstDisable
#define S29CL032J_BurstEnable	Am29BDD160_BurstEnable

/* Following functions are located always in ram, because the timing for write commands must be */
/* modified before write access to the flash and restored after writing commands on the flash. */
extern FLASH_ALL_CODE_PRG (Flash_Status_t Am29BDD160_Suspend(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (Flash_Status_t Am29BDD160_Resume(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Am29BDD160_BurstDisable(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Am29BDD160_BurstEnable(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Am29BDD160_ResetToRead(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Am29BDD160_EraseSector(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Am29BDD160_ProgValue(Flash_LLDOrder_t *LLDOrder_ps));

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Flash_ProgDescr_t S29CL032J_ProgDescr_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

/* FLASH_S29CL032J */
#endif

/* _AMD29BDD160_PROT_H */
#endif
