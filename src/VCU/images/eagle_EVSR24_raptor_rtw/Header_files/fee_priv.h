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
 * $Filename__:fee_priv.h$
 *
 * $Author____:JWI2SI$
 *
 * $Function__:initial version (migrated from CC)$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:ACH4COB$
 * $Date______:17.05.2017$
 * $Class_____:SWHDR$
 * $Name______:fee_priv$
 * $Variant___:1.16.0$
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
 * 1.16.0; 0     17.05.2017 ACH4COB
 *   Review comments
 *   
 *   RQONE01113610
 *   FEE 1.16.0 Milestone release:
 *   Change in FEE Retry due to hardware behaviour
 * 
 * 1.15.0; 0     06.07.2015 ACH4COB
 *   Avoid internal watchdog reset when there is a reflashing with newer ENVRAM 
 *   size
 * 
 * 1.14.0; 5     05.11.2014 RUO1KOR
 *      CB sector change modification for handling the interrupted block 
 *   transfer while doing sector change
 * 
 * 1.14.0; 4     17.10.2014 ACH4COB
 *   CB sector change modification for handling the interrupted block transfer 
 *   while doing sector change
 * 
 * 1.14.0; 3     17.10.2014 ACH4COB
 *   Enable FEE DBM to include error in EEP interfacess
 * 
 * 1.14.0; 2     17.10.2014 ACH4COB
 *   Decrease the LifeTime monitoring time.Build the block version along with 
 *   PLC.
 * 
 * 1.14.0; 1     17.10.2014 ACH4COB
 *   Shutdown Ini contain all the similar things as in Fee_Init
 * 
 * 1.14.0; 0     17.10.2014 ACH4COB
 *   Decrease the LifeTime monitoring time. Build the block version along with 
 *   PLC.
 * 
 * 1.13.0; 1     10.06.2014 RUO1KOR
 *   FC:FEE_1.13.0 Platform Milestone release
 *   
 *   Review Changes
 *   RQONE00330363 Process the Eep_Write during the sector change in FEE
 * 
 * 1.13.0; 0     26.05.2014 RUO1KOR
 *   FC:FEE_1.13.0 Platform Milestone release
 *   
 *   
 *   RQONE00330363 Process the Eep_Write during the sector change in FEE
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef FEE_PRIV_H_
#define FEE_PRIV_H_

#ifdef FEE_NVM_USED
#include "nvm_cbk.h"
#endif

#ifdef FEE_ACTIVE
    #ifdef FEE_USE_ADAPTER
        #ifdef FEE_USED_AS_CBEEP
        #include "cbeep_prot.h"
        #else
            #include "eephal_prot.h"
        #endif
    #endif
#endif

#define FEE_NUM_MAX_CBEEP_PAGES            180
#define FEE_SCEMARKER_FOUND                255
/* marker properties */
#define FEE_MARKER_FEE_BLKID    0xCAFE
#define FEE_MARKER_SCB_PAGENR   0xA500
#define FEE_MARKER_SCE_PAGENR   0xA501
#define FEE_MARKER_EM_PAGENR    0xA502
#ifdef FEE_USED_AS_CBEEP
	#define FEE_ENVRAM_FEE_BLKID    0xCBE9
#endif
/* properties of the flash which are independent of the currently used controller */
#define FEE_NUM_FLASH_BANKS     2
#define FEE_SECTOR0             0
#define FEE_SECTOR1             1

/* properties of the page devide */
#define FEE_QUEUE_LEN           (1 + 1 + 8)       /* length of Fee order-queue (1: NvM, 1: Internal 8: MEDC17 adapter */

#ifdef FLASH_60K_ERASESUPPORT
/* For new controllers the probability of word line related errors increases with the number of erases.Thus the threshold
      for the defect pages in one sector is increased from 10 to 20. */
  #define FEE_PD_WRITE_RETRIES_WHILE_SC   20
#else
  #define FEE_PD_WRITE_RETRIES_WHILE_SC   10    /* number of retries while programming a page during sector change */
#endif

#define FEE_BD_READ_BACK_REQUIRED 1           /* 1 ... written page will be read back and compared */
#define FEE_BD_MAXREADENVRAMBLKCOUNTER	10	  /* Maximum search counter for ENVRAM block read */	
#define FEE_RDPAGELOOP_VAL      20

/* FEE Block Status written in 1st Byte of each Block */
#define BLOCK_STATUS_CONSISTENT     0x10u                                    /* Also called Valid  */
#define BLOCK_STATUS_INCONSISTENT   0x20u
#define BLOCK_STATUS_ERASED         0x30u
#define BLOCK_STATUS_INVALID        0xAAu


#define FLASH_CALLBACK_IDLE     0x00u           /* IDLE     : No call back from fls driver.         */
#define FLASH_CALLBACK_JOB_OK   0xFFu           /* JOB_OK   : Last Job was done successfully.       */
#define FLASH_CALLBACK_JOB_FAIL 0xAAu           /* JOB_FAIL : Last Job was not was done successfully*/

#define FEE_NVM          1
#define FEE_ADAPT        2
#define FEE_INTERNAL     3

#define FEE_NVM_POSITION 8
#define FEE_INT_POSITION 9
#define FEE_PD_INVALID_ERASE_SEC 0xFF
#ifndef NOT_NULL
 #define NOT_NULL  ((void *)1)
#endif


#define FEE_DIFF_CALC_IDX(val)       ((val)/8)
#define FEE_DIFF_CALC_OFFSET(val)    ((val)-(((val)/8)*8))

/* defines to access the block status
   possible values for the return-value of writing eep- and envram via tester
                                                             |<--- Writing --->|<--- Reading --->|
 |  15 |  14 |  13 |  12 |  11 |  10 |  9  |  8  |  7  |  6  |  5  |  4  |  3  |  2  |  1  |  0  |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 | BLK |     |     |     |     |     |     |     |     | JOB |     |     |     |     |     |     |
 | inv | not | not | not | not | not | not | not | not | can |ERROR|FINI-|STAR-|ERROR|FINI-|STAR-|
 | alid| used| used| used| used| used| used| used| used| cel |     | SHED|  TED|     | SHED|  TED|
 | ated|     |     |     |     |     |     |     |     | ed  |     |     |     |     |     |     |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
                                                 |<-------- order specific information  -------->|
                                                     (will be reset if a new order is started)

*/
#define FEE_BD_BLK_STATE_CLEAR_ORDER_SPEC_INFO  (0xFF00)

#define FEE_BD_BLK_STATE_RD_RESULT              (0x0004)

#define FEE_BD_BLK_STATE_RESET_WRITE_ORDER      (0xFFC3)
#define FEE_BD_BLK_STATE_START_WRITE_ORDER      (0x0008)

#define FEE_BD_BLK_STATE_RESET_READ_ORDER       (0xFFF8)
#define FEE_BD_BLK_STATE_START_READ_ORDER       (0x0001)

#define FEE_BD_BLK_STATE_SET_ORDER_STARTED      (0x0001)
#define FEE_BD_BLK_STATE_CLEAR_ORDER_STARTED    ((uint16)(~FEE_BD_BLK_STATE_SET_ORDER_STARTED))

#define FEE_BD_BLK_STATE_SET_ORDER_FINISHED     (0x0002)
#define FEE_BD_BLK_STATE_CLEAR_ORDER_FINISHED   ((uint16)(~FEE_BD_BLK_STATE_SET_ORDER_FINISHED))

#define FEE_BD_BLK_STATE_SET_ORDER_ERROR        (0x0004)
#define FEE_BD_BLK_STATE_CLEAR_ORDER_ERROR      ((uint16)(~FEE_BD_BLK_STATE_SET_ORDER_FINISHED))

#define FEE_BD_BLK_STATE_RD_ORDER_SHIFT         0
#define FEE_BD_BLK_STATE_WR_ORDER_SHIFT         3

#define FEE_BD_BLK_STATE_SET_RD_WR_ORDER_FINISHED  ( (FEE_BD_BLK_STATE_SET_ORDER_FINISHED<<FEE_BD_BLK_STATE_RD_ORDER_SHIFT) |   \
                                                     (FEE_BD_BLK_STATE_SET_ORDER_FINISHED<<FEE_BD_BLK_STATE_WR_ORDER_SHIFT) )
#define FEE_BD_BLK_STATE_RESET_JOB_CANCELED     (0xFFBF)
#define FEE_BD_BLK_STATE_SET_JOB_CANCELED       (0x0040)

#define FEE_BD_BLK_STATE_RESET_INVALIDATED_BLOCK (0x7FFF)
#define FEE_BD_BLK_STATE_SET_INVALIDATED_BLOCK   (0x8000)

/* Macros related to Binary search for finding empty page */
#define FEE_BINARYSEARCHPAGES 6
#define FEE_BINARYSEARCH 0
#define FEE_LINEARSEARCH 1

/* Macro for PLC operation */
#define FEE_PAGEOFFSET_MSK      0x03FFul
#define FEE_LATESTDATAPAGE_MSK  0x4000ul
#define FEE_SECTORINFO_MSK      0x8000ul


#define FEE_PAGEOFFSET_BP       0ul
#define FEE_LATESTDATAPAGE_BP   14ul
#define FEE_SECTORINFO_BP       15ul

/* The number of pages to be read in every Build_PLC call, value updated to ctRdPages */

/*#define FEE_PAGES_READ_BUILD_PLC               10
  Only required when global PLC used during sector change*/

/* typedefinition for page buffer */
typedef struct {
    uint16  FeeBlockID;
    uint16  PageCtr;
    uint8   xData[FEE_PAGE_USERDATA_LEN];
    uint16  xFeePgeCrc;
} Fee_PageBuffer_t;

typedef struct
{
    uint8* DataBufferPtr;
    uint8* OrderPtr;
    uint16 BlockNumber;
    uint16 BlockOffset;
    uint16 Length;
    uint16 xDataCrc;
    Fee_CurrentJob_Type Fee_JobType;
} Fee_OrderFifoType;

typedef struct {
    uint16 LfdNr;
    uint16 NvMIdx;
    uint16 FeeBlkId;
    uint16 PageCtr;
    uint16 Offset;
    uint16 Flags;
    uint16 Length;
    uint16 StrtIdxPLC;
    uint16 numPages;
}Fee_BlockPropertiesType;

typedef struct {
    uint8 idxRd;
    uint8 idxWr;
    uint8 idxEraseSec;
}Fee_GlobVars_t;

typedef struct {
    uint32 adStart;
    uint32 adEnd;
}Fee_PdSectorDescr_t;

typedef enum
{
    FEE_PD_INIT_READ,
    FEE_PD_READ_PAGE,
    FEE_PD_WAIT_READ_PAGE,
    FEE_PD_READ_FINISHED
} Fee_PdRdStateType;

typedef enum
{
    FEE_PD_INIT_WRITE,
    FEE_PD_WRITE_PAGE,
    FEE_PD_WAIT_WRITE_PAGE,
    FEE_PD_READ_BACK,
    FEE_PD_SEARCH_WR_ADDR,
    FEE_PD_WRITE_FINISHED
} Fee_PdWrStateType;

typedef enum
{
    FEE_PD_INIT_INV,
    FEE_PD_INV_READ_PAGE,
    FEE_PD_INV_PAGE,
    FEE_PD_INV_PAGE_WAIT,
    FEE_PD_INV_FINISHED
} Fee_PdInvStateType;

typedef enum
{
    FEE_BD_RD_BLK_INIT,
    FEE_BD_RD_HDPAGE,
    FEE_BD_RD_DECISION,
    FEE_BD_RD_PREP_READ_PAGE,
    FEE_BD_RD_PAGE,
    FEE_BD_RD_PAGE_LAST_TIME
} Fee_BdRdStateType;

typedef enum
{
    FEE_BD_RD_WHOLE_BLOCK,
    FEE_BD_WR_BLK_INIT,
    FEE_BD_WR_BLK_INIT_2,
    FEE_BD_WR_READ_NEWEST_PAGE,
    FEE_BD_WR_READ_PAGE,
    FEE_BD_CALC_CS,
    FEE_BD_WR_PAGE
} Fee_BdWrStateType;

typedef enum
{
    FEE_POLLING_MODE,
    FEE_NORMAL_MODE
} Fee_stMainType;

typedef enum
{
    FEE_IDLE,
    FEE_WRITE_MODE,
    FEE_READ_MODE,
    FEE_SECTOR_CHANGE_START,
    FEE_SECTOR_CHANGE,
    FEE_SECTOR_CHANGE_PREP_FINISHED,
    FEE_SECTOR_CHANGE_FINISHED,
    FEE_SECTOR_ERASE
} Fee_WorkingStateType;

typedef struct
{
    uint32 xRdAddress;                                      /* address were Fee_PdRead will read from */
    uint32 xWrAddress;                                      /* address were Fee_PdWrite will write to */
    uint32 xInvAddress;                                     /* address for page invalidate            */
    uint32 xWrAddressCopy;                                  /* To hold the value of old write address when erase is executed*/
    #ifdef FEE_USE_INT_SECTOR_CHANGE
	uint32 xSectorWrAddress[FEE_NUM_FLASH_BANKS];           /* To hold the value of free Address for both the sector*/
    #endif
	Fee_PdRdStateType Fee_PdRdState;                        /* read state mashine in Fee_PdRead       */
    Fee_PdWrStateType Fee_PdWrState;                        /* read state mashine in Fee_PdWrite      */
    Fee_PdInvStateType Fee_PdInvState;                      /* invalidate state mashine in Fee_PdInvalidatePage */
    Fee_BdRdStateType Fee_BdRdState;                        /* read state mashine in Fee_BdRead       */
    Fee_BdWrStateType Fee_BdWrState;                        /* read state mashine in Fee_BdWrite      */
    sint8 xRdPageLoop;                                      /* Loop counter how often Fee_RdPage is called internally */
    #ifdef FEE_USE_GLOBAL_PLC
    uint32 Fee_PLC_CRC;                                     /* Checksum for checking validity of global PLC */
    #endif
} Fee_RdWrOrder_t;

typedef enum
{
    JOB_PENDING,
    JOB_OK,
    JOB_FAILED
}Fee_JobStatus_Type;


typedef enum
{
    FEE_ORDER_PENDING,
    FEE_ORDER_FINISHED,
    FEE_ERROR,
    FEE_SECTORCHANGE,
    FEE_SECTORFULL,
    FEE_ABORTED
}Fee_stRetVal_t;


typedef struct
{
    uint8   ctPgeWrErr;                          /* number of pagewrite retries */
    uint8   ctPgeWrAbort;                        /* page write after 3 retries aborted */
} Fee_stErr_t;

typedef struct {
    uint16 FeeBlkId;
    uint16 PageCtr;
    uint32 adPage;
}Fee_PdSecChangeOrderType;
#ifdef FEE_USED_AS_CBEEP
typedef enum {
    FEE_SECCHANGE_IDLE = 0,
    FEE_SECCHANGE_WAIT_IDLE,
    FEE_SECCHANGE_PREP,
    FEE_SECCHANGE_WR_SCB_MARKER,
    FEE_SECCHANGE_START,
    FEE_SECCHANGE_READ_PAGES,
    FEE_SECCHANGE_SORT_PAGES,
    FEE_SECCHANGE_READ_ONE_PAGE,
    FEE_SECCHANGE_READ_PAGE_IN_NEW_SECTOR,
    FEE_SECCHANGE_WRITE_ONE_PAGE,
    FEE_SECCHANGE_ERASE,
    FEE_SECCHANGE_CHECK_HEADER_PAGECOUNTER
}Fee_PdSecChgType;
#else
typedef enum {
    FEE_SECCHANGE_IDLE = 0,
    FEE_SECCHANGE_WAIT_IDLE,
    FEE_SECCHANGE_PREP,
    FEE_SECCHANGE_WR_SCB_MARKER,
    FEE_SECCHANGE_START,
    FEE_SECCHANGE_READ_PAGES,
    FEE_SECCHANGE_SORT_PAGES,
    FEE_SECCHANGE_READ_ONE_PAGE,
    FEE_SECCHANGE_READ_PAGE_IN_NEW_SECTOR,
    FEE_SECCHANGE_WRITE_ONE_PAGE,
    FEE_SECCHANGE_ERASE
}Fee_PdSecChgType;
#endif
#ifdef FEE_USE_INT_SECTOR_CHANGE
/* Enum to indicate that the sector change can be interrupted by read or write*/
typedef enum {
    FEE_SECTOR_CHANGE_WAIT = 0,
    FEE_SECTOR_CHANGE_IDLE
}Fee_PdSecChgWaitType;

/*Enum to indicate that the sector change was interrupted*/
typedef enum {
    FEE_SECTORCHANGE_INTERRUPTED = 0,
    FEE_SECTORCHANGE_NOT_INTERRUPTED
}Fee_SecChgInterruptType;
/*Enum to indicate the state of block transfer during sector change*/
typedef enum{
    FEE_SECCHANGE_BLOCKWRITE_START=0,
    FEE_SECCHANGE_BLOCKWRITE_INTERRUPTED,
    FEE_SECCHANGE_BLOCKWRITE_COMPLETE
} Fee_PdSecChgBlkStateType;
/* Enum to indicate the state of sector info w.r.t data page and header page.*/
typedef enum{
    FEE_BLOCKPLC_STATE_CONSISTENT=0,
    FEE_BLOCKPLC_STATE_INCONSISTENT
} Fee_PdBlkPLCStateType;
#endif
typedef enum {
    FEE_ERASESEC_IDLE = 0,
    FEE_ERASESEC_INV_SCE_MARKER,
    FEE_ERASESEC_INV_SCB_MARKER,
    FEE_ERASESEC_INV_EM_MARKER,
    FEE_ERASESEC_PREP_START,
    FEE_ERASESEC_START,
    FEE_ERASESEC_DO,
    FEE_ERASESEC_END,
    FEE_ERASESEC_RD_EM_MARKER,
    FEE_ERASESEC_WRITE_EM
}Fee_PdEraseStateType;

typedef enum {
    FEE_BLK_INVALID = 0,
    FEE_BLK_HISTORY,
    FEE_BLK_VALID
} Fee_BlkStateType;

typedef enum {
    FEE_FSC_SEC_CHANGE_IDLE = 0,
    FEE_FSC_SEC_CHANGE_REQ,
    FEE_FSC_SEC_CHANGE_RUNNING,
    FEE_FSC_SEC_CHANGE_FINISHED
} Fee_ForceSectorChangeType;

typedef struct {
    uint32 cntSectorChange;
    bool stSCB;
    bool stSCE;
    bool stEM;
}Fee_PdSectorDetectType;

typedef enum
{
    FEE_BLOCKLEN_WITH_CS,
    FEE_BLOCKLEN_USERDATA
} FeeBlockLenType;

#ifdef FEE_USE_GLOBAL_PLC
typedef enum
{
    FEE_NEWPAGEEXISTS = 0,
    FEE_NEWPAGEDOESNOTEXIST,
    FEE_PLCNOTACTIVE
} Fee_PdGetNewPg_stRetVal_t;
#endif

typedef struct
{
    uint16  xBlkCrcOffset;          /* offset of the block checksum in the last page of the block */
    uint16  xStartPage;             /* first page with changed data */
    uint16  xLastPage;              /* last page with changed data */
    uint16  BytesInFirstPage;       /* possible changed bytes of the current block in the first page */
    uint16  BytesInLastPage;        /* possible changed bytes of the current block in the last page, 0 if the block has only 1 page */
    uint16  xBlkCrcVal;             /* current values of the blockchecksum */
    uint16  ActOffsetInUserData;    /* offset in the user data */
    uint8   ctWrittenPages;         /* if a block is greater then 1 page, an additional write of the header page might be necessary */
    uint8   stHistBlock;            /* if a block is greater then 1 page, an additional write of the header page might be necessary */
    Fee_BlkStateType xBlkState;  /* blockstate if a block is invalid, valid or old */
} Fee_BdRdWrBlockInfoType;

extern VAR(Fee_BdRdWrBlockInfoType,FEE_VAR) Fee_BdRdWrBlockInfo;
#ifdef FEE_USE_ADAPTER
extern VAR(uint8, FEE_VAR) Fee_cntRetryReqAdapt;
#endif

/* external declarations of FEE PageDevice functions */
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(Fee_stRetVal_t ,FEE_CODE) Fee_PdRead(uint16, uint16,  uint8*, uint32*, uint16, uint16);
extern FUNC(Fee_stRetVal_t ,FEE_CODE) Fee_PdReadAddress(VAR(uint16,FEE_VAR) FeeBlockID, VAR(uint16,FEE_VAR) PageCtr,
                                                        VAR(uint32, FEE_VAR) Address);
extern FUNC(Fee_stRetVal_t ,FEE_CODE) Fee_PdWrite(VAR(uint16,FEE_VAR) FeeBlockID, VAR(uint16,FEE_VAR) PageCtr,
                                          P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA) WrData,
                                          VAR(uint16,FEE_VAR) PageOffset, VAR(uint16,FEE_VAR) Length);

extern FUNC(Fee_stRetVal_t ,FEE_CODE) Fee_PdReadBlkFromAddress(VAR(uint32, FEE_VAR) Address);

extern FUNC(void, FEE_CODE) Fee_PdSectorDetect(void);
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(void, FEE_CODE) Fee_PdSearchSector(VAR(uint8,FEE_VAR)idx);
extern FUNC(Fee_stRetVal_t, FEE_CODE) Fee_PdFindEmptyPage(void);
extern FUNC(Fee_stRetVal_t, FEE_CODE) Fee_PdSectorChange(void);
extern FUNC(void, FEE_CODE) Fee_PdStartSectorChange(void);
extern FUNC(Fee_stRetVal_t, FEE_CODE) Fee_PdEndSectorChange(void);
extern FUNC(void, FEE_CODE) Fee_PdEraseSector(void);
extern FUNC(void, FEE_CODE) Fee_PdStartEraseSector(void);
extern FUNC(Fee_stRetVal_t, FEE_CODE) Fee_PdWriteMarker(VAR(uint16, FEE_VAR) Marker);
extern FUNC(Fee_stRetVal_t, FEE_CODE) Fee_PdInvalidatePage(VAR(uint16,FEE_VAR) FeeBlockID, VAR(uint16,FEE_VAR) PageCtr);
extern FUNC(void ,FEE_CODE) Fee_PdSearchEmptyPage (void);
extern FUNC(uint16 ,FEE_CODE) Fee_CalcNumPages(VAR(uint16,FEE_VAR) Length);
/* external declarations of FEE BlockDevice functions */
extern FUNC(Std_ReturnType,FEE_CODE) Fee_BdPlaceOrder(VAR(uint16,AUTOMATIC), VAR(uint16,AUTOMATIC),
                                               P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA), P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA),
                                               VAR(uint16,AUTOMATIC), VAR(Fee_CurrentJob_Type,AUTOMATIC), uint8 stPosition);
extern FUNC(Fee_stRetVal_t ,FEE_CODE) Fee_BdWrite(void);
extern FUNC(Fee_stRetVal_t ,FEE_CODE) Fee_BdRead(void);
extern uint8 Fee_Adapter(uint8 idxQueue, Fee_BlkStateType BlkState);
extern FUNC(void, FEE_CODE) Fee_Adapter_Migration_Ini(void);
extern FUNC(void, FEE_CODE) Fee_Adapter_Ini(void);
extern FUNC(void, FEE_CODE) Fee_Adapter_Ini2(void);
extern FUNC(void, FEE_CODE) Fee_Adapter_IniEnd(void);
extern FUNC(void, FEE_CODE) Fee_Adapter_MainFunction(void);
extern FUNC(uint16 ,FEE_CODE) Fee_Adapter_CalcEnvRamLen(void);
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(uint16 ,FEE_CODE) Fee_BdCalcBytesInCurrPage(uint16);
extern FUNC(void ,FEE_CODE) Fee_BdCalcBlkCrc(void);
extern FUNC(void ,FEE_CODE) Fee_BdUpdateBlkCrc(void);
extern FUNC(void ,FEE_CODE) Fee_BdPrepRdWrOrder(void);
extern FUNC(uint8 ,FEE_CODE) Fee_BdCheckBlkCrc(void);
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(uint16 ,FEE_CODE) Fee_GetBlkLen(VAR(uint32,FEE_VAR), VAR(FeeBlockLenType,FEE_VAR));
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(void ,FEE_CODE) Fee_BdCalcBlkState(Fee_stRetVal_t);
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(uint16 ,FEE_CODE) Fee_GetBlkStatus(VAR(uint16,FEE_VAR), VAR(uint16,FEE_VAR));
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(uint16 ,FEE_CODE) Fee_GetFeeBlkIdx(VAR(uint16,FEE_VAR));
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(uint32 ,FEE_CODE) Fee_GetPLCOffset (VAR(uint16, AUTOMATIC), VAR(uint16, AUTOMATIC), VAR(uint32, AUTOMATIC));
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(void ,FEE_CODE) Fee_InitaliseSMs (void);
extern FUNC(uint32, FEE_CODE) Fee_PdGetNoOfFreePages(void);
extern FUNC(void ,FEE_CODE) Fee_IniShutdownCommon (void);
/************************  Code Section for Memory Mapping  starts here ****************************/
#define FEE_START_SEC_CODE
#include "MemMap.h"


extern VAR(uint8,FEE_VAR)   Fee_Flash_Callback_Status;
extern VAR(Fee_PdSectorDetectType,FEE_VAR) Fee_PdSecDetStatus[FEE_NUM_FLASH_BANKS];
extern VAR(Fee_WorkingStateType,FEE_VAR) Fee_WorkingState;
extern VAR(Fee_WorkingStateType,FEE_VAR) Fee_NextWorkingState;
extern VAR(Fee_PdEraseStateType,FEE_VAR) Fee_PdEraseState;
extern VAR(uint32,FEE_VAR) Fee_BdBlkPos;
extern VAR(uint16,FEE_VAR) Fee_BdBlkTotalPages;
extern VAR(uint16,FEE_VAR) Fee_BdBlkCurrPage;
extern VAR(uint32,FEE_VAR) Fee_BdRdPgeOffset;
extern VAR(uint16,FEE_VAR)      Fee_BdSecChngRespBlk;
extern VAR(uint32,FEE_VAR)      Fee_cntSecChange;
extern VAR(Fee_PdSecChgType,FEE_VAR) Fee_PdSecChgState;
extern VAR(Fee_stErr_t,FEE_VAR) Fee_stErr_s;
extern VAR(uint8,FEE_VAR) Fee_idxPlaceQueue;
extern VAR(uint8,FEE_VAR) Fee_idxActQueue;
extern uint8 * FeeAdapt_stOrder_pu8;
extern VAR(uint8, FEE_VAR) Fee_idxQueueWork;
extern VAR(uint8,FEE_VAR) Fee_InfoCngPages[];
extern VAR(Fee_ForceSectorChangeType, FEE_VAR) Fee_ForceSectorChange;
extern VAR(Fee_PdSecChangeOrderType,FEE_VAR) Fee_PageOrderArray[];
#ifdef FEE_USE_INT_SECTOR_CHANGE
extern VAR(Fee_SecChgInterruptType, FEE_VAR) Fee_SecChangeInterruption;
extern P2VAR(uint16,FEE_VAR,FEE_APPL_DATA) Fee_Plc_ptr;
#endif
#ifdef FEE_LIFETIME_MONITORING
extern VAR(uint16,FEE_VAR) BlkVerCtrVal[FEE_NUM_DIFF_BLOCKS];
extern VAR(uint8,FEE_VAR) BlkSecLvlVal[FEE_NUM_DIFF_BLOCKS];
#endif

/* type definitions which are depending on the configuration */
typedef struct
{
    uint32 LayoutHashValue;               /* crc32 value over all blockname ids (blockname id = crc16 over blockname) */
    uint32 ctDrivingCycles;               /* number of driving cycles */
    uint32 ctSectorChanges;               /* sector changes, used for driving cycle calculation */
    uint16 ctBlkVer[FEE_NUM_DIFF_BLOCKS]; /* block version counter for each "Nvm"/Fee Block */
} Fee_LifeTimeMonitoringType;
MEMLAY_USE_PROTRAM(extern uint32, Fee_ByteCounter);        /* variable which counts the number of written bytes in a driving cycle */
MEMLAY_USE_PROTRAM(extern Fee_LifeTimeMonitoringType, Fee_LifeTimeMonitoring);

#ifdef FEE_LIFETIME_MONITORING
MEMLAY_USE_PROTRAM(extern uint32, Fee_LTM_ExpectedDrivingCycles);
MEMLAY_USE_PROTRAM(extern uint16, Fee_LTM_FlashDeterioration);
extern FUNC(void ,FEE_CODE) Fee_BdIncrDrivingCycles (void);
extern FUNC(void ,FEE_CODE) Fee_BdRecalculateMLTValues (void);
extern FUNC(void ,FEE_CODE) Fee_SearchHowOftenABlockIsStillInFlash (void);
extern FUNC(uint16 ,FEE_CODE) Fee_ctPages (VAR(uint16,FEE_VAR) FeeBlockID, VAR(uint16,FEE_VAR) PageCtr);
#endif

extern FUNC(void ,FEE_CODE) Fee_BdIniLifeTimeMonData (void);

#ifdef FEE_DEBUG_MONITORING

enum
{
    FEE_DBM_ERROR1 = 0,         /* if function Fee_GetBlkLen detects a block with length 0 in configuration which is not the ENVRAM */
    FEE_DBM_ERROR2,             /* will be set in fee_adapt, if an error occured while reading, writing an MEDC17 block */
    FEE_DBM_ERROR3,             /* in function Fee_PdEraseSector there was an error before/while/after erasing a sector */
    FEE_DBM_ERROR4,             /* in function Fee_BdWrite a error occurs */
    FEE_DBM_ERROR5,             /* in function Fee_MainFunction a error occurs */
    FEE_DBM_ERROR6,             /* in function Fee_BdPlaceOrder a error occurs */
    FEE_DBM_ERROR7,             /* in function Fee_BdRead a error occurs */
    FEE_DBM_ERROR8,             /* in function Fee_BdCalcBlkState a error occurs */
    FEE_DBM_ERROR9,             /* in function Fee_PdSectorChange a error occurs */
    FEE_DBM_ERROR10,            /* in function Fee_PdSectorDetect a error occurs */
    FEE_DBM_ERROR11,            /* in function Fee_PdFindEmptyPage a error occurs */
    FEE_DBM_ERROR12,            /* in function Fee_PdInvalidatePage a error occurs */
    FEE_DBM_ERROR13,            /* in function Fee_PdRead a error occurs */
    FEE_DBM_ERROR14,            /* in function Fee_PdEndSectorChange a error occurs */
    FEE_DBM_ERROR15,            /* in function Fee_PdWrite a error occurs */
    FEE_DBM_ERROR16,            /* in function Fee_PdReadAddress a error occurs */
    FEE_DBM_ERROR17,            /* in function Fee_ctPages a error occurs */
    FEE_DBM_ERROR18,            /* in function Eep_ReadRam a error occurs */
	FEE_DBM_ERROR19,             /* in function Eep_WriteRam a error occurs */
    FEE_DBM_ERROR20             /* not used yet.... */
};

#define FEE_DBM_ERROR_ENTRIES   14
typedef struct
{
    uint32  xSecChngCntVal;             /* value of sector change counter while error occurs */
    uint16  FeeBlkIdx;                  /* if the error couldn't be assigned to a NvmBlock, this is 0xFFFF */
    uint8   xError;                     /* error number */
    uint8   xErrorInfo;                 /* error info, if necessary */
} FeeDBMErrInfoType;

typedef struct
{
    FeeDBMErrInfoType  xErrorEntry[FEE_DBM_ERROR_ENTRIES];  /* array of a structure with detail info to the errors */
	uint16  ctNofErrors;
	uint8   repEnvramErr;
	uint8   dummy[5];
    uint8   idxNewEntry;                /* index points on the next free entry in the xErrorEntry buffer */
    uint8   ctBuffOverflow;             /* counter countrs how often the FEE_DBM_ERROR_ENTRIES error overflow. Startvalue is 1, used for ProtRAM validation! */
} Fee_DebugMonitoringType;

MEMLAY_USE_PROTRAM(extern Fee_DebugMonitoringType, Fee_DebugMonitoring);
extern FUNC(void ,FEE_CODE) Fee_BdInitDBM (void);
extern FUNC(void ,FEE_CODE) Fee_BdDBM_RepError(VAR(uint16,FEE_VAR) FeeBlkIdx, VAR(uint8,FEE_VAR) xError, VAR(uint8,FEE_VAR) xErrorInfo);
extern FUNC(void ,FEE_CODE) Fee_BdClearDBM (void);
extern FUNC(void ,FEE_CODE) Fee_BdStoreDBM (void);
extern FUNC(void ,FEE_CODE) Fee_BdDBM_RepEnvramError (VAR(uint8,FEE_VAR)Error);
extern FUNC(uint8 ,FEE_CODE) Fee_BdDBM_GetEnvramError (void);
#else
/* debug monitoring not used, expand function-calls to nothing */
#define Fee_BdDBM_RepError(val1, val2, val3)
#define Fee_BdInitDBM
#define Fee_BdStoreDBM
#define Fee_BdDBM_RepEnvramError(val1)
#define Fee_BdDBM_GetEnvramError
#endif

#ifdef FEE_BD_ADD_SW_UPDATE_INFO
#define FEE_BD_SW_UPDATE_ENTRIES 9
typedef struct
{
    uint32 ctSectorChange;
    uint32 currLayoutCrc;
    uint8  ArSwMajorVer;
    uint8  ArSwMinorVer;
    uint8  ArSwPatchVer;
    uint8  xInfo;
} Fee_BdSwInfoType;

typedef struct
{
    uint32            MemlayCompRefDs0;
    Fee_BdSwInfoType  BdSwInfo[FEE_BD_SW_UPDATE_ENTRIES];
    uint8             idxNewEntry;
    uint8             ctBuffOverflow;
    uint8             currentlyNotUsed[8];
} Fee_BdSwUpdateType;

#endif

extern uint16 Fee_BdBlkStatus[FEE_NUM_DIFF_BLOCKS];

/* external declaration from fee_cfg.h */
extern VAR(Fee_GlobVars_t,FEE_VAR)               Fee_GlobVars;
extern VAR(Fee_PageBuffer_t,FEE_VAR)             Fee_PageBuffer;
extern VAR(uint8,FEE_VAR)                        Fee_DataBuffer[];
extern CONST(Fee_PdSectorDescr_t,FEE_CONST)      Fee_PdSectorDescr[];
extern CONST (Fee_BlockPropertiesType,FEE_CONST) Fee_BlockProperties[];
extern CONST (Std_VersionInfoType,FEE_CONST)     Fee_VersionInfo;
extern VAR(Fee_RdWrOrder_t,FEE_VAR)              Fee_RdWrOrder;
extern VAR(Fee_stMainType,FEE_VAR)               Fee_stMain;
extern VAR(Fee_OrderFifoType,FEE_VAR)            Fee_OrderFifo[FEE_QUEUE_LEN];
extern VAR(uint8,FEE_VAR)                        Fee_IniActive;

#ifdef FEE_USE_GLOBAL_PLC
extern VAR(bool,FEE_VAR)                            Fee_PlcState;
extern VAR(uint8,FEE_VAR)                           Fee_SecChangeActive; /* To indicate an active sector change */
extern FUNC(void ,FEE_CODE)                         Fee_SetPLCOffset (VAR(uint16, AUTOMATIC), VAR(uint16, AUTOMATIC), VAR(uint32, FEE_VAR));
#ifndef FEE_USE_INT_SECTOR_CHANGE
extern FUNC(Fee_stRetVal_t, FEE_CODE)               Fee_UpdatePageLocationCache (P2VAR(uint16, AUTOMATIC, FEE_APPL_DATA));
#endif
extern FUNC(void, FEE_CODE)                         Fee_PdCheckPLC(P2VAR(uint16, AUTOMATIC, FEE_APPL_DATA));
extern FUNC(Fee_PdGetNewPg_stRetVal_t ,FEE_CODE)    Fee_PdGetNewPg(VAR(uint16, AUTOMATIC), VAR(uint16, AUTOMATIC));
#endif
#ifdef FEE_USE_INT_SECTOR_CHANGE
extern FUNC(void ,FEE_CODE) Fee_BuildPLCInactiveSector (P2VAR(uint16, AUTOMATIC, FEE_APPL_DATA));
extern FUNC(uint8 ,FEE_CODE) Fee_PdGetPLCSectInfo (VAR(uint32, AUTOMATIC) FeeBdBlkPos, VAR(uint16, AUTOMATIC) FeeCtr);
extern FUNC(Fee_PdBlkPLCStateType, FEE_CODE) Fee_PdCheckBlockPLC(VAR(uint16, AUTOMATIC) FeeIdx,VAR(uint16, AUTOMATIC)PageCtr);
extern FUNC(void ,FEE_CODE) Fee_CheckNewOrder (void);
extern FUNC(uint8 ,FEE_CODE) Fee_CheckRdWrSector(P2VAR(uint32, AUTOMATIC, FEE_APPL_DATA) OffsetSec);
#endif
extern FUNC(void ,FEE_CODE) Fee_BuildMarkerCache (P2VAR(uint32, AUTOMATIC, FEE_APPL_DATA) PlcBufPtr);


#define FEE_STOP_SEC_CODE
#include "MemMap.h"
/************************  Code Section for Memory Mapping  stops here ****************************/



#endif  /* FEE_PRIV_H_ */
