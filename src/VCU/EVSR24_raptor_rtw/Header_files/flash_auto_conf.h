/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:$
 * $Author____:$
 * $Function__:$
 * $Domain____:$
 * $User______:$
 * $Date______:$
 * $Class_____:$
 * $Name______:$
 * $Variant___:$
 * $Revision__:$
 * $Type______:$
 * $State_____:$
 * $FDEF______:$
 *
 * List of changes
 * $History___:$
 ***************************************************************************************************
 </RBHead>*/

#ifndef _FLASH_AUTO_CONF_H
#define _FLASH_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H
 /*!
 *********************************************************************
 * \moduldescription
 *           automatically generated configuration file for FLASH.
 *
 * \scope  CONF
 *********************************************************************
 */

 /*
 *********************************************************************
 * Includes
 *********************************************************************
 */

/* Defines for configured flash modules */
#define FLASH_TC_1793_DFLASH

/* Detailed defines for configured flash devices */
#define FLASH_IFXFLASH   /* Internal IFX P/DFlash is used */
#define FLASH_IFXPFLASH1 /* Internal IFX PFLASH1 is used additionally */

/* Common scratch pad ram code */
#define FLASH_ALL_CODE_PRG  MEMLAY_USE_SPRAM_CODE

/* Place variables in scratch pad ram. */
#define FLASH_ALL_VAR_PRG  MEMLAY_USE_SPRAM

/* Macro for locating functions into flash, neccessary to be compatible */
/* with function declaration using MEMLAY macros.                       */
/* MISRA RULE 96 VIOLATION: Macro parameter enclosed in () leads to compiler errors */
#define FLASH_LOCATE_FLASH(fct) fct

/* Scratch pad ram code for flash device: IFX */
#define FLASH_IFX_CODE_PRG FLASH_LOCATE_FLASH
#define FLASH_IFX_LLD_INFLASH

/* Maximum datawidth */
#define FLASH_MAX_DATA_WIDTH  128ul

/* Flash optimize mode */
#define FLASH_OPTIMIZE_MODE  FALSE

/* Number of configured flash modules */
#define FLASH_NUM_MODULES   1


/* Maximum number of memory areas for sessions: */

/* Define FSR register field name for DFlash Bit Errors */
#define FLASH_FSR_CorDFBER   FSR_DFCBER
#define FLASH_FSR_UnCorDFBER FSR_DFMBER

/* Define FSR register field name for PFlash Bit Errors */
#define FLASH_FSR_CorPFBER   FSR_PFSBER
#define FLASH_FSR_UnCorPFBER FSR_PFDBER

/* Define FSR register field name for Margin selection */
#define FLASH_FSR_MARGIN0 MARD_MARGIN
#define FLASH_FSR_MARGIN1 MARD_MARGIN

/* Define FSR register field value for Margin level */
#define FLASH_FSR_VALUE_DEFAULT 0
#define FLASH_FSR_VALUE_TIGHT0  1
#define FLASH_FSR_VALUE_TIGHT1  4

/* Define IFX P/D Flash memory areas for TC_1793 */
#define FLASH_PF0_BASEADR  0x80000000ul
#define FLASH_PF0_ENDADR   0x801FFFFFul
#define FLASH_PF1_BASEADR  0x80800000ul
#define FLASH_PF1_ENDADR   0x809FFFFFul
#define FLASH_DF0_BASEADR  0xAF000000ul
#define FLASH_DF0_ENDADR   0xAF017FFFul
#define FLASH_DF1_BASEADR  0xAF080000ul
#define FLASH_DF1_ENDADR   0xAF097FFFul
#define FLASH_EXT_BASEADR  0xFFFFFFFFul
#define FLASH_EXT_ENDADR   0x00000000ul

/* Define the current EBU configuration */

/* Define Address of Redesign Tracing Identification Register */
#define FLASH_IFX_SCU_RTID_ADR  0xF0000648ul 
#define FLASH_IFX_SCU_AA_STEP   0x00ul 
#define FLASH_IFX_SCU_CHK_STEP  FALSE 

/* Define SEMA register field value for Semaphore Bits */
#define FLASH_SEMA_SHEBit   SEMA_SHE
#define FLASH_SEMA_S1Bit   SEMA_S1
#define FLASH_SEMA_S1CBit   SEMA_S1C
#define FLASH_SEMA_S2Bit   SEMA_S2
#define FLASH_SEMA_S2CBit   SEMA_S2C
#define FLASH_SEMA_S3Bit   SEMA_S3
#define FLASH_SEMA_S3CBit   SEMA_S3C
#define FLASH_SEMA_S4Bit   SEMA_S4
#define FLASH_SEMA_S4CBit   SEMA_S4C
#define FLASH_SEMA_S5Bit   SEMA_S5
#define FLASH_SEMA_S5CBit   SEMA_S5C
#define FLASH_SEMA_S6Bit   SEMA_S6
#define FLASH_SEMA_S6CBit   SEMA_S6C
#define FLASH_SEMA_S7Bit   SEMA_S7
#define FLASH_SEMA_S7CBit   SEMA_S7C

/* Define Max Number of Reattempts made by FLASH to support 60K Erase cycles */
#define FLASH_60K_ERASESUPPORT
#define FLASH_MAX_REATTEMPTS	0x2ul 

/* _LIBRARYABILITY_H */
#endif

/* _FLASH_AUTO_CONF_H */
#endif
