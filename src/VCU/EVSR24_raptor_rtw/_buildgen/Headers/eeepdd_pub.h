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
 * $Filename__:eeepdd_pub.h$
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
 * $Name______:eeepdd_pub$
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
 * 1.26.0; 2     10.12.2012 RUO1KOR
 *   Initialize the erase state when there is a new erase request
 * 
 * 1.26.0; 1     30.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   4. Feature: New interface to get the number of free pages in the active 
 *   sector.
 * 
 * 1.26.0; 0     30.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   3. Feature:Initialization of read and write states of block and page layer 
 *   when new request is taken.
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
#ifndef _EEEPDD_PUB_H
#define _EEEPDD_PUB_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                    EEEPDD EEP Emulation Page Device Data Flash
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Size of a complete page in bytes */
#define EEEPDD_PAGESIZE         128ul

/* Size of page data in bytes */
#define EEEPDD_PAGEDATASIZE     120ul

/* Numbers of sectors, used at assignment of the sector states in array xSecState_ae */
#define EEEPDD_SECTOR_0     0
#define EEEPDD_SECTOR_1     1

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* Return values of interface functions Eeepdd_ReadPage and Eeepdd_WritePage */
typedef enum
{
    EEEPDD_I_ACCEPTED               = 10,
    EEEPDD_E_INTERNAL_ERROR         = 11
} Eeepdd_FuncRetValues_t;


/* Order status information of interface func. Eeepdd_ReadPage and Eeepdd_WritePage */
typedef enum
{
    EEEPDD_STAT_I_PENDING           = 10,
    EEEPDD_STAT_I_SUCCEEDED         = 20,
    EEEPDD_STAT_I_CURRENT_PAGE      = 21,
    EEEPDD_STAT_I_PREVIOUS_PAGE     = 22,
    EEEPDD_STAT_I_INCONSISTENT_PAGE = 23,
    EEEPDD_STAT_I_NONAVAILABLE_PAGE = 24,
    EEEPDD_STAT_I_SECTOR_FULL       = 25,
    EEEPDD_STAT_E_INTERNAL_ERROR    = 31,
    EEEPDD_STAT_E_FAILED            = 32
} Eeepdd_FuncStatValues_t;


/* Return values of function Eeepdd_EraseSector */
typedef enum
{
    EEEPDD_ERASE_I_OK               = 10,
    EEEPDD_ERASE_I_PENDING          = 20,
    EEEPDD_ERASE_E_FAILED           = 30,
    EEEPDD_ERASE_E_TEMPERATURE      = 31,
    EEEPDD_ERASE_E_INTERNAL_ERROR   = 32
} Eeepdd_EraseRetValues_t;


/* Return values from sector change functions (Eeepdd_EnterSectorChange, EeepddLeaveSectorChange) */
typedef enum
{
    EEEPDD_SECTCHG_I_ACCEPTED       = 0,
    EEEPDD_SECTCHG_I_WAIT           = 3,
    EEEPDD_SECTCHG_E_FAILED         = 10
} Eeepdd_SectChgRetValues_t;

typedef struct
{
    uint8   ctPgeWrErr_u8;                          /* number of pagewrite retries */
    uint8   ctPgeWrAbort_u8;                        /* page write after 3 retries aborted */
} Eeepdd_stErr_t;


#ifdef FLASH_60K_ERASESUPPORT      /*For new controllers the probability of word line related
                                     errors increases with the number of erases.Thus the threshold
                                for the defect pages in one sector is increased from 10 to 20. */

    #define EEEPDD_ALLOWED_DEF_PAGES    20
#else
    #define EEEPDD_ALLOWED_DEF_PAGES    10

/* #endif FLASH_60K_ERASESUPPORT */
#endif

#define EEEPDD_GET_NUM_LOST_PAGES   Eeepdd_stErr_s.ctPgeWrAbort_u8
#define EEEPDD_GET_NUM_ERR_PAGE_WR  Eeepdd_stErr_s.ctPgeWrErr_u8

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__eep__LowSpeed__START
extern Eeepdd_FuncRetValues_t Eeepdd_ReadPage (uint16  xPageIdx_u16,  uint16 xPageVer_u16,
                                               uint32* xPageBuf_pu32, uint8* stOrder_pu8);

extern Eeepdd_FuncRetValues_t Eeepdd_WritePage(uint16  xPageIdx_u16,  uint16* xPageVer_pu16,
                                               uint32* xPageBuf_pu32, uint8*  stOrder_pu8);

extern void Eeepdd_Order_Proc(void);

extern void Eeepdd_Ini(void);

extern void Eeepdd_IniEnd(void);

extern Eeepdd_SectChgRetValues_t Eeepdd_EnterSectorChange(void);

extern void Eeepdd_LeaveSectorChange(void);

extern bool Eeepdd_ChkSectorVolume(uint16 numPages_u16);

extern Eeepdd_EraseRetValues_t Eeepdd_EraseSector(void);
extern Eeepdd_EraseRetValues_t Eeepdd_EraseSector_Ini(void);
extern bool Eeepdd_CheckEraseSector(void);
extern void Eeepdd_ClrErrInfo(void);
extern uint16 Eeepdd_GetReadPageVer(void);
extern uint32 Eeepdd_GetNoOfFreePages(void);
extern void Eeepdd_InitRdWrStatus(void);
extern void Eeepdd_InitEraseState(void);
extern uint32 Eeepdd_GetFactoryBlockReadPageVer(void);
__PRAGMA_USE__CODE__eep__LowSpeed__END

/* External declarations to global variables */
__PRAGMA_USE__eep__50ms_1s__RAM__arr16__START
extern uint16 Eeepdd_PageLocationCache_au16[];
__PRAGMA_USE__eep__50ms_1s__RAM__arr16__END

/* Extern declarations to global constants */
__PRAGMA_USE__eep__50ms_1s__constant__arr32__START
extern const uint32 Eeepdd_adFlashStart_cau32[2];
__PRAGMA_USE__eep__50ms_1s__constant__arr32__END

__PRAGMA_USE__eep__50ms_1s__constant__arr16__START
extern const uint16 Eeepdd_MaxPageIndex_cu16;
__PRAGMA_USE__eep__50ms_1s__constant__arr16__END

/* This variable should normaly not be visible to upper layer. But for sector change with AC step
   this information is needed in layer EEEBD. */
__PRAGMA_USE__eep__50ms_1s__constant__arr32__START
extern const uint32 Eeepdd_FlashSectorSize_cu32;
__PRAGMA_USE__eep__50ms_1s__constant__arr32__END

/* Workaround */
MEMLAY_USE_PROTRAM(extern volatile uint32, Eeepdd_adPageBeg_u32);
MEMLAY_USE_PROTRAM(extern volatile uint32, Eeepdd_adPageEnd_u32);

__PRAGMA_USE__eep__50ms_1s__RAM__x32__START
extern volatile uint32 Eeepdd_adPageBegRam_u32;
extern volatile uint32 Eeepdd_adPageEndRam_u32;
extern Eeepdd_stErr_t Eeepdd_stErr_s;
__PRAGMA_USE__eep__50ms_1s__RAM__x32__END

/*_EEEPDD_PUB_H*/
#endif
