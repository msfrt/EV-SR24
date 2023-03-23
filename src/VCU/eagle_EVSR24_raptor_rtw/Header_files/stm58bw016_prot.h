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
 * $Filename__:stm58bw016_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KRS1COB$ 
 * $Date______:21.11.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:stm58bw016_prot$ 
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
 * 1.16.0; 2     21.11.2011 KRS1COB
 *   update after testing and new EBU settings from Joerg satlow
 * 
 * 1.16.0; 1     31.10.2011 KRS1COB
 *   update of FLASH_CS_ADDRSEL_WP_16 and FLASH_CS_ADDRSEL_WP_32
 * 
 * 1.16.0; 0     16.10.2011 KRS1COB
 *   RCMS00704234 Flash: Support of STM58BW16F and STM58BW32F
 * 
 * 1.11.0; 2     25.03.2010 LE79BA
 *   Undo remove of const - CChecker warning
 * 
 * 1.11.0; 1     24.03.2010 LE79BA
 *   Remove flash_auto_conf.c warning after removing SW Analyzer warnings in:
 *   - stm58bw016_prot.h
 *   - stm58bw016_prog.c
 * 
 * 1.11.0; 0     19.02.2010 LE79BA
 *   .
 * 
 * 1.9.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: stm58bw016_prot.h
 *      Version: \main\9
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/* protect from multiple includes */
#ifndef _STM58BW016_PROT_H
#define _STM58BW016_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *          Headerfile for LLD STM58BW016.
 *
 ***************************************************************************************************
 */
 
/* if flash device is configured */
#if (defined(FLASH_STM58BW016) || \
     defined(FLASH_STM58BW032))

/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
/* Commands for flash */
#define STM58BW016_READARRAY    0x000000FFul            /* Read memory array command */
#define STM58BW016_READSTATUS   0x00000070ul            /* Read status register command */
#define STM58BW016_CLEARSTATUS  0x00000050ul            /* Clear status register command */
#define STM58BW016_ERASE1ST     0x00000020ul            /* Block erase first command */
#define STM58BW016_ERASE2ND     0x000000D0ul            /* Block erase second command */
#define STM58BW016_PROG         0x00000040ul            /* Program any block command */
#define STM58BW016_SUSPEND      0x000000B0ul            /* Program/Erase suspend command */
#define STM58BW016_RESUME       0x000000D0ul            /* Program/Erase resume command */
#define STM58BW016_UNLOCKTP     0x00000078ul            /* TPROT unlock command (for CM only) */
#define FLASH_CS_ADDRSEL_WE_16	0x00000A63ul			/* Write Enable for Flash register*/
#define FLASH_CS_ADDRSEL_WE_32	0x00000A53ul			/* Write Enable for Flash register*/
#define FLASH_CS_ADDRSEL_WP_16  0x00000A67ul			/* Write protect for Flash register */
#define FLASH_CS_ADDRSEL_WP_32  0x00000A57ul			/* Write protect for Flash register */

#define STM58BW016_BCR_WRITE    0x00000060ul			/* Write setup command for BURST Configuration register	*/

/* Address offsets for Numonyx flash */
#define STM58BW016_ERASE_OFFS    0x00000055ul           /* Address offset for erase function */
#define STM58BW016_PROG_OFFS     0x000000AAul           /* Address offset for program function */
#define STM58BW016_BCR_OFFS 	 0x00005842ul			/* Address offset for BURST access of BURST Config Register */
#define STM58BW016_BCR_CNFRM     0x00000003ul			/* Confirm command for BURST Configuration register	*/
#define STM58BW016_ASYN_BCR_OFFS 0x00008008ul           /* Address offset for Asynchoronous access of BURST Config Register */

/* Flash status regsiter flags */
#define STM58BW016_STPROTOFF       0x01u                /* TPROT Status (Bit0) (for CM only) */
#define STM58BW016_TUNPROT_DENIED  0x02u                /* Block Protection Status (Bit1) */
#define STM58BW016_PROG_SUSP       0x04u                /* Program suspend Status (Bit2) */
#define STM58BW016_PEN_ERROR       0x08u                /* PEN status (Bit3, not used, PEN pin tight to VIH) */
#define STM58BW016_PROG_ERROR      0x10u                /* Program/Write to Buffer and Program Status (Bit4) */
#define STM58BW016_ERASE_ERROR     0x20u                /* Erase Status (Bit5) */
#define STM58BW016_ERASE_SUSP      0x40u                /* Erase Suspend Status (Bit6) */
#define STM58BW016_PEC_READY       0x80u                /* Program/Erase controller Status (Bit7) */

/* Dummy password */
#define STM58BW016_UNLOCKTP_PW1    0xFFFFFFFFul         /* Dummy password for unlock function (for CM only) */
#define STM58BW016_UNLOCKTP_PW2    0xFFFFFFFFul         /* Dummy password for unlock function (for CM only) */


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

 #ifdef FLASH_STM58BW016
/* Following functions are located in flash or ram depending on the configured flash device mode */
extern FLASH_STM58BW016_CODE_PRG (Flash_Status_t Stm58Bw016_Unlock (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_STM58BW016_CODE_PRG (Flash_Status_t Stm58Bw016_Lock (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_STM58BW016_CODE_PRG (Flash_Status_t Stm58Bw016_Erase (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_STM58BW016_CODE_PRG (Flash_Status_t Stm58Bw016_Prog (Flash_LLDOrder_t *LLDOrder_ps));
#endif

#ifdef FLASH_STM58BW032
/* Following functions are located in flash or ram depending on the configured flash device mode */
extern FLASH_STM58BW032_CODE_PRG (Flash_Status_t Stm58Bw016_Unlock (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_STM58BW032_CODE_PRG (Flash_Status_t Stm58Bw016_Lock (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_STM58BW032_CODE_PRG (Flash_Status_t Stm58Bw016_Erase (Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_STM58BW032_CODE_PRG (Flash_Status_t Stm58Bw016_Prog (Flash_LLDOrder_t *LLDOrder_ps));
#endif

/* Following functions are located always in ram, because the timing for write commands must be */
/* modified before write access to the flash and restored after writing commands on the flash. */
extern FLASH_ALL_CODE_PRG (Flash_Status_t Stm58Bw016_Suspend(Flash_LLDOrder_t *LLDOrder_ps, bool xOperation_b));
extern FLASH_ALL_CODE_PRG (Flash_Status_t Stm58Bw016_Resume(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Stm58Bw016_BurstDisable(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Stm58Bw016_BurstEnable(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Stm58Bw016_EraseSector(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Stm58Bw016_ProgValue(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Stm58Bw016_ReadArray(Flash_LLDOrder_t *LLDOrder_ps));
extern FLASH_ALL_CODE_PRG (void Stm58Bw016_ClearStatus(Flash_LLDOrder_t *LLDOrder_ps));

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Flash_ProgDescr_t Stm58Bw016_ProgDescr_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

/* FLASH_STM58BW016 || FLASH_STM58BW032 */
#endif

/* _STM58BW016_PROT_H */
#endif
