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
 * $Filename__:ifxflash_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LE79BA$ 
 * $Date______:25.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:ifxflash_prot$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 3     25.03.2010 LE79BA
 *   Undo remove of const - CChecker warning
 * 
 * 1.12.0; 2     23.03.2010 LE79BA
 *   Remove SW Analyzer Warnings in:
 *   - ifxflash_prog.c
 *   - fixflash_prot.h
 * 
 * 1.12.0; 1     04.03.2010 LE79BA
 *   Locate IFXFlash_GetRedesignStep() via FLASH_IFX_CODE_PRG
 * 
 * 1.12.0; 0     19.02.2010 LE79BA
 *   .
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ifxflash_prot.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _IFXFLASH_PROT_H                                /* protect multiple includes              */
#define _IFXFLASH_PROT_H

/*!
 ***************************************************************************************************
 * \moduldescription
 *          Headerfile for LLD IFX Flash.
 *
 * \scope
 ***************************************************************************************************
 */
/* if flash device is configured */
#ifdef FLASH_IFXFLASH

/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
/* Commands for flash */
#define IFXFLASH_READARRAY              0x000000F0ul
#define IFXFLASH_PAGEMODE_PFLASH        0x00000050ul
#define IFXFLASH_PAGEMODE_DFLASH        0x0000005Dul
#define IFXFLASH_CLRSTATUS              0x000000F5ul
#define IFXFLASH_RESUMEPROT             0x0000005Eul
#define IFXFLASH_DISABLE_FWP            0x00000005ul
#define IFXFLASH_DISABLE_FRP            0x00000008ul
#define IFXFLASH_USER0                  0x00000000ul

#define IFXFLASH_HEAD0                  0x000000AAul
#define IFXFLASH_HEAD1                  0x00000055ul
#define IFXFLASH_OFFSET0                0x00005554ul
#define IFXFLASH_OFFSET1                0x0000AAA8ul
#define IFXFLASH_OFFSET2                0x0000553Cul
#define IFXFLASH_OFFSET3                0x00005558ul
#define IFXFLASH_PAGE_OFFSET0           0x000055F0ul
#define IFXFLASH_PAGE_OFFSET1           0x000055F4ul

#define IFXFLASH_ERASE_1ST_CMD          0x00000080ul
#define IFXFLASH_ERASE_2ND_CMD          0x00000030ul
#define IFXFLASH_ERASE_DATA_CMD         0x00000040ul
#define IFXFLASH_PROGRAM_CMD            0x000000A0ul


/* Status of poll function */
#define IFXFLASH_POLL_READY             0x00            /* Erasing has finished */
#define IFXFLASH_POLL_BUSY              0x01            /* Erasing active       */
#define IFXFLASH_POLL_ERROR             0x02            /* Erasing error        */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
extern  FLASH_IFX_CODE_PRG (Flash_Status_t IFXFlash_Unlock (Flash_LLDOrder_t *LLDOrder_ps));
extern  FLASH_IFX_CODE_PRG (Flash_Status_t IFXFlash_Lock (Flash_LLDOrder_t *LLDOrder_ps));
extern  FLASH_IFX_CODE_PRG (Flash_Status_t IFXFlash_Erase(Flash_LLDOrder_t *LLDOrder_ps));
extern  FLASH_IFX_CODE_PRG (Flash_Status_t IFXFlash_Prog (Flash_LLDOrder_t *LLDOrder_ps));
extern  FLASH_IFX_CODE_PRG (uint16 IFXFlash_Poll(Flash_LLDOrder_t *LLDOrder_ps));
extern  FLASH_IFX_CODE_PRG (bool IFXFlash_GetRedesignStep(void));
extern  FLASH_ALL_CODE_PRG (void IFXFlash_WriteCmd(uint32 adWrite_u32, uint32 xCmd_u32));

/* FLASH_IFXFLASH */
#endif

/* _IFXFLASH_PROT_H */
#endif
