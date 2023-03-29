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
 * $Filename__:eeepdd_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RUO1KOR$
 * $Date______:05.04.2013$
 * $Class_____:SWHDR$
 * $Name______:eeepdd_priv$
 * $Variant___:1.27.0$
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
 * 1.27.0; 0     05.04.2013 RUO1KOR
 *   Robustness changes done for MC:EEP_1.27.0
 *   
 *   EEP robustness: Return uint32 in Eep_GetnumSectChg interface
 * 
 * 1.26.0; 1     31.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   6. Introduction of checksum to verify the validity of Page Location Cache.
 * 
 * 1.26.0; 0     30.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   2. Feature: Introduction of Debug monitoring software.
 * 
 * 1.16.0; 1     26.11.2010 SUU4KOR
 *   Support of 60k erase cycles for new controller
 * 
 * 1.16.0; 0     14.04.2010 MZT2FE
 *   B_EEP.16.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EEEPDD_PRIV_H
#define _EEEPDD_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      EEEPDD EEP Emulation Page Device Data Flash
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Number of maximum interrations in functions Eeepdd_SearchPage/Eeepdd_RebuildPLC_Proc.
   This must be adjusted in a way that these funtions can be called from processed running in
   a corresponding time task. This values must be adjusted to measured runtimes (probably in
   dependence of the selected processor */
#define EEEPDD_SEARCHPAGE_MAXITERATIONS   20

/* Number of maximum write attempts within a write order */
#define EEEPDD_MAXWRATTEMPTS   3

/* Number of maximum erase attempts for one sector */
#define EEEPDD_MAXERATTEMPTS   3

/* Definition of marker (indicates that a setor change or a sector deletion is finished) */
#define EEEPDD_MARKER1  1
#define EEEPDD_MARKER2  2

/* To indicate the status of search when page is scanned in the sector to be erased*/
#define EEEPDD_SEARCH_NOT_STARTED 0
#define EEEPDD_SEARCH_STARTED     0xFF

/* Macro definitions ******************************************************************************/

/* Macro to get number of active and inactive sector */
#define EEEPDD_ACTIVE_SECTOR       (Eeepdd_GlobVars_s.xActRdSec_u8)
#define EEEPDD_INACTIVE_SECTOR     ((uint8)((Eeepdd_GlobVars_s.xActRdSec_u8 == 0) ? 1 : 0))


/* Macro to get and set state of physical sector 0 and 1 */
#define EEEPDD_GET_SECTOR0_STATE   (Eeepdd_GlobVars_s.xSecState_ae[EEEPDD_SECTOR_0])
#define EEEPDD_SET_SECTOR0_STATE   EEEPDD_GET_SECTOR0_STATE
#define EEEPDD_GET_SECTOR1_STATE   (Eeepdd_GlobVars_s.xSecState_ae[EEEPDD_SECTOR_1])
#define EEEPDD_SET_SECTOR1_STATE   EEEPDD_GET_SECTOR1_STATE

/* Macro to get and set state of inactive sector (used in enter/leave sector change function) */
#define EEEPDD_GET_INACTIVE_SECTOR_STATE  (Eeepdd_GlobVars_s.xSecState_ae[EEEPDD_INACTIVE_SECTOR])
#define EEEPDD_SET_INACTIVE_SECTOR_STATE  EEEPDD_GET_INACTIVE_SECTOR_STATE

/* Macro to get and set state of sector in which can be read */
#define EEEPDD_GET_RDSECTOR_STATE  (Eeepdd_GlobVars_s.xSecState_ae[Eeepdd_GlobVars_s.xActRdSec_u8])
#define EEEPDD_SET_RDSECTOR_STATE  EEEPDD_GET_RDSECTOR_STATE


/* Macro to get and set state of sector in which can be written */
#define EEEPDD_GET_WRSECTOR_STATE  (Eeepdd_GlobVars_s.xSecState_ae[Eeepdd_GlobVars_s.xActWrSec_u8])
#define EEEPDD_SET_WRSECTOR_STATE  EEEPDD_GET_WRSECTOR_STATE


/* Macro to get start address of active read/write sector */
#define EEEPDD_GET_SRTADR_WRSECTOR   (Eeepdd_adFlashStart_cau32[Eeepdd_GlobVars_s.xActWrSec_u8])
#define EEEPDD_GET_SRTADR_RDSECTOR   (Eeepdd_adFlashStart_cau32[Eeepdd_GlobVars_s.xActRdSec_u8])


/* Macro to get start address of inactive sector */
#define EEEPDD_GET_ADR_INAKTSECTOR   (Eeepdd_adFlashStart_cau32[EEEPDD_INACTIVE_SECTOR])

/* Macro to get address of last page in active write / read sector */
#ifdef FLASH_60K_ERASESUPPORT
     /* Because of the write retries performed by the
     flash driver for the odd pages, eep triggers an early sector change */
    #define EEEPDD_GET_ADR_LASTPAGEWR    ((EEEPDD_GET_SRTADR_WRSECTOR + Eeepdd_FlashSectorSize_cu32) - \
                                      (((2 * FLASH_MAX_REATTEMPTS) + 1) * EEEPDD_PAGESIZE))

#else

#define EEEPDD_GET_ADR_LASTPAGEWR    (EEEPDD_GET_SRTADR_WRSECTOR + Eeepdd_FlashSectorSize_cu32 - \
                                      EEEPDD_PAGESIZE)
#endif

#define EEEPDD_GET_ADR_LASTPAGERD    (EEEPDD_GET_SRTADR_RDSECTOR + Eeepdd_FlashSectorSize_cu32 - \
                                      EEEPDD_PAGESIZE)

/* Macro for map flash address to segment 8 */
#define EEEPDD_MAPTOSEG8(x)          ((x) & (0xDFFFFFFFul))

#define EEEPDD_FACTORY_BLOCK_PAGE_IDX 1

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Usage status of the Eeepdd order status structure */
typedef enum
{
    EEEPDD_ORDER_EMPTY    = 0,
    EEEPDD_ORDER_READ     = 10,
    EEEPDD_ORDER_WRITE    = 20
} Eeepdd_OrderStructUsage_t;


/* States for Read/Write state machines.
   Both functions use the same state variables. Function calls to read/write state machines are not
   mixed (i.e. a write call is processed only after a read call has finished and vice versa), so
   this is no problem */
typedef enum
{
    EEEPDD_STATE_STARTUP           = 0x0,   /* Common startup state for read/write state machines */

    EEEPDD_RD_STATE_CHECK          = 0x10,  /* States in read state machine */
    EEEPDD_RD_STATE_SEARCH         = 0x11,

    EEEPDD_WR_STATE_CHECK          = 0x20,  /* States in write state machine */
    EEEPDD_WR_STATE_SEARCH         = 0x21,
    EEEPDD_WR_STATE_PREPARE_HEADER = 0x22,
    EEEPDD_WR_STATE_PROG_HEADER    = 0x23,
    EEEPDD_WR_STATE_PROG_DATA      = 0x24,
    EEEPDD_WR_STATE_PROGEND        = 0x25,
    EEEPDD_WR_STATE_VERIFY         = 0x26,
    EEEPDD_WR_STATE_INVALIDATE     = 0x27,
    EEEPDD_WR_STATE_RETRY          = 0x28,
    EEEPDD_WR_STATE_FAULT          = 0x29
} Eeepdd_RdWrStates_t;


/* States of the erase state machine (which directly calls the flash driver functions */
typedef enum
{
    EEEPDD_ERASE_STATE_PREPSTART  = 0x0,
    EEEPDD_ERASE_STATE_INVALIDATE = 0x10,
    EEEPDD_ERASE_STATE_START      = 0x20,
    EEEPDD_ERASE_STATE_DO         = 0x30,
    EEEPDD_ERASE_STATE_END        = 0x40,
    EEEPDD_ERASE_STATE_RETRY      = 0x50
} Eeepdd_EraseStates_t;


/* Return values of page search function (Eeepdd_SearchPage) */
typedef enum
{
    EEEPDD_SEARCH_NOTFOUND   = 0,
    EEEPDD_SEARCH_FOUND      = 1,
    EEEPDD_SEARCH_INPROGRESS = 2
} Eeepdd_SearchReturns_t;


/* Sector states */
typedef enum
{
    EEEPDD_SECTSTATE_ACTIVE           = 0,      /* Sector is active                             */
    EEEPDD_SECTSTATE_INACTIVE_WAIT    = 0x10,   /* Sector is inactive, is erased                */
    EEEPDD_SECTSTATE_INACTIVE_ERASING = 0x11,   /* Sector is inactive but should be erased      */
    EEEPDD_SECTSTATE_SECTCHANGE_WRITE = 0x20,   /* Sector can be written in a sector change     */
    EEEPDD_SECTSTATE_SECTCHANGE_READ  = 0x21,   /* Sector can be read in a sector change        */
    EEEPDD_SECTSTATE_INACTIVE_INVALID = 0xFF    /* Invalid, i.e. sector could not be erased
                                                   or something like this                       */
} Eeepdd_SectorStates_t;


/**************************************************************************************************/
/* The following structures represent status inform. of the several FSMs for reading, writing ... *
 * They could be merged into a single one because they are not used simultanously                 */

/* State variables for read/write state machines */
typedef struct
{
    uint32 adPage_u32;          /* Stores the address of the current page during a search.
                                   This is the target address during program and verify  */
    uint32 xPageVer_u32;        /* Stores the page version which should be written
                                   (calculated in state init) */
    uint8  stState_u8;          /* Current state in read or write state machine */
    uint8  ctrWrAttempts_u8;    /* To count number of write attempts */
    uint8  stErase_u8;          /* Current state in erase state machine */
    uint8  ctrErAttempts_u8;    /* To count number of erase attempts */
    uint8  ctrWrgPages_u8;      /* Number of wrong pages in write state machine */
    bool   bHistory_b;          /* Histroy flag for reading */
} Eeepdd_ReadWriteStatus_t;


/* Type definition for global data structure.
   Most of the internally used variables are stored here. */
typedef struct
{
    Eeepdd_SectorStates_t    xSecState_ae[2];       /* Represents the sector states */

    uint32                   adNextFreePage_u32;    /* Stores location of the next page which can
                                                       be written. Initialized by Eeepdd_BuildPLC,
                                                       updated after a page has been written. */
    uint32                   adLastPageMigSect_u32; /* Last page in read sector, used in migration
                                                       function */

    uint32                   adMarker2_u32;         /* Address of of marker 2 (erase marker) */

    uint32                   adEraseSect_u32;       /* Address of sector who must be erased */

    uint32                   xFlashErasePattern_u32;/* Erase pattern of flash */

    uint32                   xPLCChksum_u32;       /* Variable to hold checksum for PageLocationCache */

	uint32 					 xFactoryBlkver_u32;   /* Variable to hold the factory block version*/

    Eeepdd_ReadWriteStatus_t ReadWriteStatus_s;     /* State of read/write state machine */

    uint16                   xRdPageVer_u16;        /* Found page version in DFLASH */
    uint8                    xActWrSec_u8;          /* Active sector for write accesses */
    uint8                    xActRdSec_u8;          /* Active sector for read accesses */
} Eeepdd_GlobVars_t;


/**************************************************************************************************/

/* This struct stores the current order which is processed */
typedef struct
{
    uint32*                   adPageBuf_pu32;      /* Pointer to page buffer                      */
    uint8*                    stOrder_pu8;         /* Pointer to order status variable            */
    uint16*                   xPageVer_pu16;       /* Pointer to page version (to feed back the
                                                      new page version in a _write_ call)         */
    uint16                    xPageVer_u16;        /* Page version of a _read_ call               */
    uint16                    xPageIdx_u16;        /* Page index */
    Eeepdd_OrderStructUsage_t stUsage_e;           /* Usage of this buffer (EMPTY | READ | WRITE) */
} Eeepdd_OrderStruct_t;


/* Definition of a page header */
typedef struct
{
    uint16 xPageIdx_u16;
    uint16 xPageChk_u16;
    uint32 xPageVerCtr_u32;
} Eeepdd_PageHeader_t;


/* Definitiona of a complete flash page (header and data) */
typedef struct
{
    Eeepdd_PageHeader_t PageHeader_s;
    uint32              xPageData_au32[30];
} Eeepdd_FlashPage_t;


/* Sector info structure, used in sector detection */
typedef struct
{
    uint16 stMarker_u16;              /* Found marker in current sector */
    uint16 numPages_u16;              /* Number of pages of non erased pages */
    uint16 xPageIdx_u16;              /* Page index from that page where sector counter was derived */
    uint32 ctSectCtr_u32;       /* "Sector counter" of current sector (derivered from page index) */
} Eeepdd_SectorInfo_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* External declarations to structures */
__PRAGMA_USE__eep__50ms_1s__RAM__s32__START
extern Eeepdd_GlobVars_t    Eeepdd_GlobVars_s;
extern Eeepdd_PageHeader_t  Eeepdd_PageHeader_s;
extern Eeepdd_OrderStruct_t Eeepdd_Order_s;

extern Flash_Order_t Eeepdd_FlashEraseOrder_s;
extern Flash_Order_t Eeepdd_FlashProgOrder_s;
__PRAGMA_USE__eep__50ms_1s__RAM__s32__END

/* External declarations to global variable */
__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern bool Eeepdd_PlcState_b;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END

/* Extern declarations to global constants */
__PRAGMA_USE__eep__50ms_1s__constant__x8__START
extern const uint8 Eeepdd_NumTocPages_cu8;
__PRAGMA_USE__eep__50ms_1s__constant__x8__END

/* Extern function prototypes */
__PRAGMA_USE__CODE__eep__LowSpeed__START
extern void   Eeepdd_DetectSectors(void);
extern void   Eeepdd_BuildPLC(void);
extern void   Eeepdd_CheckPLC(void);
extern void   Eeepdd_SetPLCState(bool PLCState);
extern Eeepdd_FuncStatValues_t Eeepdd_StateRead (const Eeepdd_OrderStruct_t* Order_ps);
extern Eeepdd_FuncStatValues_t Eeepdd_StateWrite(const Eeepdd_OrderStruct_t* Order_ps);
extern uint8  Eeepdd_SearchPage(uint32* adCurrent_pu32, uint32 adFlashStart_u32,
                                uint16 xPageIdx_u16, uint16 xPageVer_u16);
extern bool   Eeepdd_BlankCheck(uint32 adStart_u32, uint32 adLength_u32);
extern void   Eeepdd_SectorCheck(uint32 adSrtSector_u32);
extern void   Eeepdd_EraseSectorVerify(void);
__PRAGMA_USE__CODE__eep__LowSpeed__END

/* _EEEPDD_PRIV_H */
#endif
