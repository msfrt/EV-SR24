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
 * $Filename__:flashhndl_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SUU4KOR$
 * $Date______:14.08.2014$
 * $Class_____:SWHDR$
 * $Name______:flashhndl_prot$
 * $Variant___:1.21.0$
 * $Revision__:1$
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
 * 1.21.0; 1     14.08.2014 SUU4KOR
 *   Update pragma section from bit to byte addressable
 * 
 * 1.21.0; 0     24.07.2014 SVW5KOR
 *   RQONE00385852
 *   
 *   Changeover of all applied variables from bit to byte
 * 
 * 1.16.0; 0     22.11.2011 KRS1COB
 *   update after testing
 * 
 * 1.14.0; 0     24.03.2011 KRS1COB
 *   Removal of MISRA and CC checker warnings for TC1793
 * 
 * 1.12.0; 3     26.11.2010 SUU4KOR
 *   Support of 60k erase cycles for new controller
 * 
 * 1.12.0; 2     25.03.2010 LE79BA
 *   Undo remove of const - CChecker warning
 * 
 * 1.12.0; 1     24.03.2010 LE79BA
 *   Remove flash_auto_conf.c warning after removing SW Analyzer warnings in:
 *   - flashhndl_prot.h
 * 
 * 1.12.0; 0     18.02.2010 LE79BA
 *   CC base version: B_FLASH.11.0.0
 *   new version: B_FLASH.12.0.0
 * 
 * 1.8.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: flashhndl_prot.h
 *      Version: \main\basis\b_CORE\3
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _FLASHHNDL_PROT_H
#define _FLASHHNDL_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *          Protected Header file for flash handler.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines, type defs, enums, inlines, macros ...
 ***************************************************************************************************
 */
/* Invalid index for searching in flash device table */
#define FLASH_INVALID_INDEX 0xFF

/* Macro to map address from segment 8 (cached) to A (uncached) */
#define FLASH_MAPSEGMENT(x)    ((x) | (0xA0000000ul))

/* Define for no external flash */
#define NO_EXT_FLASH   0x01

/* States for margin test */
#define FLASH_TEST_PFLASH_NORMAL   0
#define FLASH_TEST_PFLASH_LOW      1
#define FLASH_TEST_PFLASH_HIGH     2
#define FLASH_TEST_DFLASH1_NORMAL  3
#define FLASH_TEST_DFLASH1_LOW     4
#define FLASH_TEST_DFLASH1_HIGH    5
#define FLASH_TEST_DFLASH2_NORMAL  6
#define FLASH_TEST_DFLASH2_LOW     7
#define FLASH_TEST_DFLASH2_HIGH    8
#define FLASH_TEST_READY           9

/* Page length of flashs for margin test */
#define FLASH_PFLASH_PAGELEN       256ul
#define FLASH_DFLASH_PAGELEN       128ul

/* Status of margin test for PFlash and DFlash */
#define FLASH_ERR_NONE_FOUND    0     /* No (single or multiple bit) error found */
#define FLASH_ERR_PFLASH_FOUND  1     /* PFlash: one or more single or multiple bit errors found */
#define FLASH_ERR_DFLASH_FOUND  2     /* DFlash: one or more single or double bit errors found */

/* Defines for general IFX PFlash and DFlash */
#define FLASH_IFX_PFLASH   1
#define FLASH_IFX_DFLASH   2

#ifdef FLASH_60K_ERASESUPPORT

#define FLASH_MASK_BIT    0xFF
#define FLASH_ODDPAGE_OFFSET  0x80
#define FLASH_EVENPAGE_OFFSET  0x00
#endif
/* Data type for sector descriptor table */
typedef struct
{
    uint8   dBlocks_u8;     /* Number of blocks with the same size */
    uint32  dSize_u32;      /* Size of block                       */
}
Flash_SectorDescriptor_t;

typedef struct
{
    uint32 adStart_u32;
    uint32 adEnd_u32;
    uint32 adAct_u32;
    uint32 adBase_u32;
    uint8  xSessionId_e;
    uint8  idxFlashModule_u8;
    uint8  idxCS_u8;
    uint8  stResume_u8;
    SBTarget_MemoryType_t xDevType_e;
    uint16 numModRest_u16;
    uint32 adProg_u32;
    uint8 *dBuffer_pu8;
    uint32 lenData_u32;
    uint32 adRest_u32;
    Flash_Status_t stSession_u8;
}Flash_LLDOrder_t;


/* Data type for flash descriptor */
typedef struct
{
    uint16 dataWidth_u16;                                  /* Datawidth                           */
    uint8 xErasePattern_u8;                                /* Erase pattern of flash device       */
    const  Flash_SectorDescriptor_t                        /* Pointer to the table of sector      */
                       *sectorDescriptor_pcs;              /* descriptors.                        */
    Flash_Status_t (*unlock_pfn)(Flash_LLDOrder_t *LLDOrder_ps);/* Unlock function                */
    Flash_Status_t (*lock_pfn)(Flash_LLDOrder_t *LLDOrder_ps);  /* Lock function                  */
    Flash_Status_t (*program_pfn)(Flash_LLDOrder_t * LLDOrder_ps);  /* Program function           */
    Flash_Status_t (*erase_pfn)(Flash_LLDOrder_t * LLDOrder_ps);    /* Erase function             */
} Flash_ProgDescr_t;

/* Data type for flash device table */
typedef struct
{
    SBTarget_MemoryType_t xExtFlashType_e;
    Flash_ProgDescr_t const *descriptor_ps;
    void (*xProlog_pfn)(void);
    void (*xEpilog_pfn)(void);
    uint32 tiMaxErase_u32;                      /* Max. time to suspend erasing         */
    uint32 tiMaxProg_u32;                       /* Max. time to suspend programming     */
} Flash_Device_t;



/* Configuration of session ids */
typedef struct
{
    uint32 adStart_u32;
    uint32 adEnd_u32;
} Flash_AddressArea_t;

typedef struct
{
    uint8 xSessionId_e;
    #ifdef FLASH_MAX_MEM_AREAS
    Flash_AddressArea_t adrArea_ca[FLASH_MAX_MEM_AREAS];
	#endif
} Flash_Session_t;

/* FOR 60K ERASE FLASH  */
/*  VARIABLES   */
__PRAGMA_USE__hwe__1_5ms__RAM__x8__START
#ifdef FLASH_60K_ERASESUPPORT
extern bool   Flashhndl_stReprog_b;
#endif
extern Flash_Status_t Flashhndl_StCylWr_e;
extern bool Flashhndl_stCylResume_b;
__PRAGMA_USE__hwe__1_5ms__RAM__x8__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern uint8 Flash_GetDeviceIndex(Flash_Order_t *Order_ps);
extern uint32 Flash_GetSectorSize(Flash_LLDOrder_t const *LLDOrder_ps);
extern bool Flash_CheckSector(Flash_LLDOrder_t const *LLDOrder_ps);

extern Flash_Status_t Flash_ProgDoIntern(Flash_Device_t const *Devices_pcs,
                                         Flash_LLDOrder_t *LLDOrder_ps,
                                         uint32 idxModule_u32,
                                         uint16 dDataWidth_u16,
                                         bool stCyclic_b);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern Flash_Device_t const Flash_Devices_cs[];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

__PRAGMA_USE__hwe__1_5ms__RAM__x32__START
extern uint32 Flash_tiMaxErase2Suspend_u32;
extern uint32 Flash_tiMaxProg2Suspend_u32;
__PRAGMA_USE__hwe__1_5ms__RAM__x32__END

__PRAGMA_USE__hwe__1_5ms__RAM__arr8__START
extern uint8 Flash_dProgBuffer_u8[FLASH_MAX_DATA_WIDTH];
#ifdef FLASH_60K_ERASESUPPORT
extern uint8 Flashhndl_dBufEvenPg_au8[FLASH_MAX_DATA_WIDTH];
#endif
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
#ifdef FLASH_60K_ERASESUPPORT
extern Flash_Status_t Flash_OddPgErrHndl(Flash_LLDOrder_t *LLDOrder_ps, uint16 dDataWidth_u16);
#endif
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
#ifdef FLASH_NUM_SESSIONS
extern const Flash_Session_t Flash_Session_cs[FLASH_NUM_SESSIONS];
#endif
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Flash_InitConfReg(void);
extern void Flash_Wait_10usec(void);
extern void Flash_MarginReadLoop(uint32 adStart_u32, uint32 xLength_u32);
extern bool Flash_CheckSession(Flash_Order_t const *Order_ps);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

extern MEMLAY_USE_SPRAM_CODE (void Flash_MarginWait10usec(void));
extern MEMLAY_USE_SPRAM_CODE (void Flash_MarginRead(uint32 adStart_u32, uint32 xLength_u32));
extern FLASH_ALL_CODE_PRG (uint32 Flash_ShiftData(uint8 *dData_pu8));

__PRAGMA_USE__hwe__1_5ms__RAM__x8__START
extern uint8   Flash_stDisSuspend_u8;
extern uint8   Flash_stDisableIntr_u8;
__PRAGMA_USE__hwe__1_5ms__RAM__x8__END

/* _FLASHHNDL_PROT_H                                                                              */
#endif
