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
 * $Filename__:eephal_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:ACH4COB$
 * $Date______:05.03.2015$
 * $Class_____:SWHDR$
 * $Name______:eephal_priv$
 * $Variant___:1.33.1$
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
 * 1.33.1; 1     05.03.2015 ACH4COB
 *   MC:EEP_1.33.1 release
 *   RQONE00523989: EEPHAL: FEE Adapter bug: Extended Master block initialized 
 *   during Migration
 * 
 * 1.33.1; 0     03.03.2015 ACH4COB
 *   MC:EEP_1.33.1 release
 *   RQONE00523989: EEPHAL: FEE Adapter bug: Extended Master block initialized 
 *   during Migration
 * 
 * 1.33.0; 0     12.11.2014 RUO1KOR
 *     MC:EEP_1.33.0 Milestone release.
 *     9. RQONE00409803: To remove the firstinit and replace values in PFLASH 
 *   when it is same as zeros to avoid space consumption
 * 
 * 1.29.0; 3     06.11.2013 RUO1KOR
 *   MC:EEP_29.0.0 Release.
 *   Review changes:
 *   13. RQONE00267562: Enhancement:Redesign of EEP Read and Write Error DFCs 
 *   for EEP and FEE.
 * 
 * 1.29.0; 2     31.10.2013 RUO1KOR
 *   RQONE00267562: Enhancement:Redesign of EEP Read and Write Error DFCs for 
 *   EEP and FEE
 * 
 * 1.29.0; 1     29.10.2013 RUO1KOR
 *   Milestone Mc:EEP_1.29.0 release
 *   
 *   TestFindings
 *   7. RQONE00267568: Debug feature: If the statemachines werent initialized 
 *   capture the error in the DBM
 *   12. RQONE00267583: Debug feature: To introduce new variable that indicates 
 *   the Max Queue consumption.
 * 
 * 1.29.0; 0     25.10.2013 RUO1KOR
 *   Milestone Mc:EEP_1.29.0 release
 *   7. RQONE00267568: Debug feature: If the statemachines werent initialized 
 *   capture the error in the DBM
 * 
 * 1.26.0; 7     03.12.2012 RUO1KOR
 *   Testing and review changes for MC:EEP 1.26.0
 * 
 * 1.26.0; 6     21.11.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   20. Removal of compiler warnings.
 * 
 * 1.26.0; 5     02.11.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   15. Feature: Support of system constant EEP_TYPE_SC to differentiate 
 *   between EEP and FEE.
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EEPHAL_PRIV_H
#define _EEPHAL_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                    EEP Eeprom and Emulation Handler
 *
 * \scope             INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition and enums
 ***************************************************************************************************
 */

/* Structure of an order queue entry
   An entry contains all information which are necessary to process an EEP order */
typedef struct
{
    uint8*  adDataBuf_pu8;          /* Pointer to data buffer                */
    uint8*  stOrder_pu8;            /* Pointer to order status information   */
    uint16  xBlkIdx_u16;            /* Block index                           */
    uint16  xOfs_u16;               /* Block internal offset in bytes        */
    uint16  numBytes_u16;           /* Number of bytes                       */
    uint8   stMode_u8;              /* Mode of the order (read, write, init) */
    uint8   stUsage_u8;             /* Status of the usage of an entry       */
} Eep_OrderStruct_t;


/* Possible modes of an order queue entry (stMode_u8 of the order struct) */
typedef enum
{
    EEP_MODE_READ  = 10,            /* Read order  */
    EEP_MODE_WRITE = 20,            /* Write order */
    EEP_MODE_INIT  = 30             /* Init order  */
} Eep_Mode_t;


/* Possible status usages of an order queue entry (stUsage_u8 of the order struct) */
typedef enum
{
    EEP_ENTRY_NOTUSED = 0x00,       /* Queue is empty, an order can be placed */
    EEP_ENTRY_USED    = 0x55,       /* Queue is used, an order will be placed */
    EEP_ENTRY_PLACED  = 0xAA        /* An order ist just placed               */
} Eep_Usage_t;


/* Possible states of EEP in PostDrive (or PreDrive) */
typedef enum
{
    EEP_POSTDRV_INI,
    EEP_POSTDRV_SEARCHBLKIDX,
    EEP_POSTDRV_SAVEBLK,
    EEP_POSTDRV_SAVEBLK_PENDING,
    EEP_POSTDRV_WAIT
} Eep_PostdrvStates_t;


/* Possible states in detection of codeword to start a first initialization */
typedef enum
{
    EEP_CHECK_REINIT = 0x00,
    EEP_WRITE_FACTORY_BLOCK = 0x01,
    EEP_CHECK_WRITE         = 0x02
} Eep_CheckRestartFirstInit_t;


/* States in block copy process */
typedef enum
 {
    EEP_BLKCPY_NONE     = 0,
    EEP_BLKCPY_READ     = 10,
    EEP_BLKCPY_WRITE    = 20,
    EEP_BLKCPY_FINISHED = 30
} Eep_stOrdBlkCpy_t;


/* Possible states in write order state machine */
typedef enum
{
    EEP_WRORD_STARTUP,
    EEP_WRORD_TRANSDATA,
    EEP_WRORD_WRDATA
} Eep_stWrOrder_t;


/* Possible states in read order state machine */
typedef enum
{
    EEP_RDORD_RDDATA,
    EEP_RDORD_TRANSDATA
} Eep_stRdOrder_t;

/* Possible states for repairing multiple-stored blocks in the afterrun / shut-off */
/* also included are several normal necessary function calls! */
typedef enum
{
    EEP_REPAIR_FUNC_NOT_STARTET = 1,    /* repair-process not started (INIT_VALUE)                */
    EEP_REPAIR_FUNC_STARTET     = 2,    /* repair-process waits till order-queue is empty         */
    EEP_REPMULBLK_SEARCH_BLK    = 3,    /* searching next block with SEC-LEVEL > 1                */
    EEP_REPMULBLK_READ_BLK      = 4,    /* read all copies of the found block                     */
    EEP_REPMULBLK_WRITE_BLK     = 5,    /* in case of a defekt copy, write the block again        */
    EEP_REPMULBLK_FINISHED      = 6     /* all block tested, function finished                    */
} Eep_RepMulStrBlkState_t;

typedef enum
{
    EEP_ENVRAMSAVING_FUNC_NOT_STARTET = 0,  /* envram-saving not started (INIT_VALUE)             */
    EEP_ENVRAMSAVING_STARTET          = 1,  /* envram-saving waits till order-queue is empty      */
    EEP_ENVRAMSAVING_WRITE_ENVRAM     = 2,  /* writing the ENVRAM started                         */
    EEP_ENVRAMSAVING_FINISHED         = 3   /* function finished                                  */
} Eep_EnvRamSavingState_t;


/* Possible block states of the block-repairing process */
typedef enum
{
    EEP_BLK_NOT_CHECKED         = 0,    /* block was not checked or has a SEC-LEVEL = 1           */
    EEP_BLK_READ_ERROR          = 1,    /* there was a read-error (internal or block not found)   */
    EEP_BLK_READ_NO_ERROR       = 2,    /* reading of the block was possible (PREVIOUS,CURRENT)   */
    EEP_BLK_WRITE_ERROR         = 3,    /* writing of the block is not possible                   */
    EEP_BLK_WRITE_ABORT_ERROR   = 4,    /* writing failed after x-write attempts                  */
    EEP_BLK_HEALED              = 5     /* block healed again!                                    */
}Eep_ResultBlkCheck_t;


/* Possible states to write marker of ENVRAM */
typedef enum
{
    EEP_WRENVRAMMRK_FINISHED       = 0x00,  /* Nothing to do, marker was written */
    EEP_WRENVRAMMRK_VERSIONMARKER  = 0x55,  /* Write marker to indicate program version */
    EEP_WRENVRAMMRK_HISTORYMARKER  = 0xAA,  /* Write marker to realize extended history function */
    EEP_WRENVRAMMRK_WAIT           = 0xFF   /* Wait until order is executed */
}Eep_stWrEnvRamMarker_t;

#ifdef EEP_ISS_USED
/* Possible states for the ISS storage state machine */
typedef enum
{
    EEP_ISS_ST_IDLE             = 0x00,     /* Idle state for the ISS state machine */
    EEP_ISS_ST_EEPRAM_WR        = 0x01,     /* Place write order for the EEPRAM shadow structure */
    EEP_ISS_ST_WAIT_FOR_ENVRAM  = 0x02,     /* Wait for the ENVRAM shadow structure to be ready */
    EEP_ISS_ST_ENVRAM_WR        = 0x03,     /* Write the ENVRAM shadow content to the serial EEPROM */
    EEP_ISS_ST_INVAL_CS         = 0x04,     /* Invalidate EEPRAM Checksum */
    EEP_ISS_ST_WR_WAIT          = 0x05,     /* Wait for the Eepoa to finish the current order */
    EEP_ISS_ST_END              = 0x06      /* ISS storage finished */
}Eep_stISS_Proc_t;

/* Possible states for the ISS diagnosis state machine */
typedef enum
{
    EEP_ISS_DIAG_ST_IDLE                = 0x00, /* Idle state for the ISS diagnosis state machine */
    EEP_ISS_DIAG_ST_RD_EEPRAM_SH        = 0x01, /* Check EEPRAM Shadow data checksum */
    EEP_ISS_DIAG_ST_RD_EEPRAM_SH_WAIT   = 0x02, /* Wait for the EEPRAM shadow to be read back */
    EEP_ISS_DIAG_ST_RD_ENVRAM_SH        = 0x03, /* Check ENVRAM Shadow data checksum */
    EEP_ISS_DIAG_ST_RD_ENVRAM_SH_WAIT   = 0x04, /* Wait for the ENVRAM shadow to be read back */
    EEP_ISS_DIAG_ST_OK_HANDLING         = 0x05, /* Report status OK to DSM */
    EEP_ISS_DIAG_ST_ERR_HANDLING        = 0x06, /* Error handling */
    EEP_ISS_DIAG_ST_END                 = 0x07  /* ISS diagnosis finished */
}Eep_stISS_Diag_Proc_t;
#endif


/* Structure of global variables of layer EEP */
typedef struct
{
    Eep_stWrOrder_t Eep_stWrOrder_e;        /* State of write order state machine */
    Eep_stRdOrder_t Eep_stRdOrder_e;        /* State of read order state machine */
    Eep_stOrdBlkCpy_t Eep_stOrdBlkCpy_e;    /* State in block copy process */
    Eep_RepMulStrBlkState_t Eep_RepMulStrBlkState_e; /* State of repair function */
    Eep_EnvRamSavingState_t stEnvRamStaving_e;       /* state of storing the ENVRAM */
    Eep_stWrEnvRamMarker_t Eep_stEnvRamMarker_u8;    /* State of writing ENVRAM marker */
    uint8 Eep_stRdRetVal_u8;                /* Saved return in read state machine */

    uint8 Eep_OrdFifoPlacePos_u8;           /* Will show next free position in order queue
                                               to place an new order. */
    uint8 Eep_OrdFifoWorkPos_u8;            /* Will show order entry which will be processed.
                                               If processing of entry is finished this variable
                                               will show the next entry in queue. */
    uint8 Eep_OrdFifoLastWorkPos_u8;        /* Will show last order entry which will be or was
                                               processed. If processing of entry is finished this
                                               variable will show to last working entry in queue.
                                               This variable is needed, when an order should be
                                               processed in ini task. */
    sint16 Eep_PostdrvBlkIdx_s16;           /* Block index of  blocks which are handled in
                                               PostDrive process. */
    bool Eep_PostDrv_Active_b;              /* Is set if PostDrive or PreDrive is active
                                               Monitoring of PostDrive/PreDrive process */
    uint8 Eep_InitRdWrStatus_u8;            /* To check if read write status has to be initialized*/
} Eep_GlobVars_t;

#ifdef EEP_DEBUG_MONITORING
/*Debug monitoring used define the structure*/
enum
{
    EEP_DBM_ERROR1 = 1,         /* Address of local stack passed for Eep_Read */
    EEP_DBM_ERROR2,             /* Error during EEPRAM initialisation leading to automatic healing of the block, Eep_EepRamIni */
    EEP_DBM_ERROR3,             /* Error during ENVRAM initialisation,  Eep_EnvRam_Proc_Ini */
    EEP_DBM_ERROR4,             /* Address of local stack passed for Eep_Init */
    EEP_DBM_ERROR5,             /* Error during EEPREAD leading to automatic healing of the block, Eep_RdOrder */
    EEP_DBM_ERROR6,             /* Error during Eep_ReadRam leading to automatic healing of the block */
    EEP_DBM_ERROR7,             /* Error in Eep_RepairMulStoredBlkProc */
    EEP_DBM_ERROR8,             /* Address of local stack passed for Eep_Write */
    EEP_DBM_ERROR9,             /* Error during Eep_WriteRAM */
    EEP_DBM_ERROR10,            /* in function Eeebd_StateBlkCopy a error occurs */
    EEP_DBM_ERROR11,            /* in function Eeebd_StateChkBlk a error occurs */
    EEP_DBM_ERROR12,            /* in function Eeebd_StateWrDataSP a error occurs */
    EEP_DBM_ERROR13,            /* in function Eeebd_StateWrDataMP a error occurs */
    EEP_DBM_ERROR14,            /* in function Eeepdd_EnterSectorChange a error occurs */
    EEP_DBM_ERROR15,            /* in function Eeepdd_EraseSector a error occurs */
    EEP_DBM_ERROR16,            /* in function Eeepdd_Order_Proc a error occurs */
    EEP_DBM_ERROR17,            /* in function Eeebd_SubStLoadPVT a error occurs */
    EEP_DBM_ERROR18,            /* in function Eeebd_SubStChkBlkCs a error occurs */
    EEP_DBM_ERROR19,            /*in function Eeebd_Writeblock a error occurs */
    EEP_DBM_ERROR20,            /*in function Eeepdd_StateRead a error occurs */
    EEP_DBM_ERROR21,             /*in function Eeepdd_StateWrite a error occurs */
	EEP_DBM_ERROR22				/*Not used yet*/
};

#define EEP_DBM_ERROR_ENTRIES   9

typedef struct
{
    uint32  xSecChngCntVal;             /* value of sector change counter while error occurs */
    uint8   BlkIdx;                     /* Block Index */
    uint8   PageIdx;                    /* Page Index */
    uint8   xSyC_stMn;                  /* System control main state */
    uint8   xSyC_stSub;                 /* System control sub state */
    uint8   xError;                     /* error number */
    uint8   xErrorInfo;                 /* error info, if necessary */
    uint8   xEep_stMain;                /* State of EEP HAL state machine */
    uint8   xEeebd_stEee;               /* BD state */
} EEPDBMErrInfoType;

typedef struct
{
    EEPDBMErrInfoType  xErrorEntry[EEP_DBM_ERROR_ENTRIES];  /* array of a structure with detail info to the errors */
    uint16  ctNofErrors;                /* Absolute count for number of EEP errors */
    uint8   idxNewEntry;                /* index points on the next free entry in the xErrorEntry buffer */
    uint8   repEnvramErr;                /* Count the number of debug monitoring block loss */
} Eep_DebugMonitoringType;

MEMLAY_USE_PROTRAM(extern Eep_DebugMonitoringType, Eep_DebugMonitoring);

extern void Eep_InitDBM (void);
extern void EEP_ReportError(uint16 BlkIdx, uint16 PgIdx, uint8 xError, uint8 xErrorInfo);
extern void Eep_ClearDBM (void);
extern void Eep_StoreDBM (void);
extern void Eep_ReportEnvramError(uint8 Error);
extern uint8 Eep_GetEnvramError(void);
#else
/* debug monitoring not used, expand function-calls to nothing */
#define Eep_InitDBM
#define EEP_ReportError(val1,val2,val3,val4)
#define Eep_ClearDBM
#define Eep_StoreDBM
#define Eep_ReportEnvramError(val1)
#define Eep_GetEnvramError
#endif
#ifdef EEP_USE_EXT_MASTER_LAYOUT
typedef enum
{
    EEP_EXT_NORMALRUN,
	EEP_EXT_MIGRATION
} Eep_stExtMasterLayout_t;
#endif
/*
 ***************************************************************************************************
   * Defines
 ***************************************************************************************************
 */

/* Number of entries in order buffer */
#define EEP_FIFO_SIZE   8

/* AND mask for FIFO indizes */
#define EEP_FIFO_IDX_MSK  (EEP_FIFO_SIZE - 1)

/* Bitmasks to set bist in block status concerning first initialization   */
#define EEP_USED_DEFAULT_VALUES     0       /* Default values are used    */
#define EEP_USED_REPLACE_VALUES     1       /* Replace values are used    */
#define EEP_USED_FIRSTINIT_VALUES   2       /* First init values are used */
#define EEP_USED_NO_VALUES          3       /* No values should be used   */

/* Informations regarding the factory data block */
#define EEP_FACTORY_DATA_BLK        0       /* BlockIndex of factory data block */
#define EEP_DODO_MARKER_OFFSET      0x32    /* Offset to D0D0 marker  */
#define EEP_DODO_MARKER_LEN         2       /* Size of D0D0 marker  */
#define EEP_FIRST_INITIALIZATION    0xD0D0  /* Content of activated D0D0 marker
                                                                                                                          (0xD0D0: activating FirstInit) */
#define EEP_RE_INITIALIZATION       0x3141  /* Content of activated D0D0  marker
                                                                                                                          (0x3141: activating ReInit) */
#define EEP_FIRST_INIT_DONE         0x2F2F  /* Content of inactive D0D0 marker  */

#define EEP_MARKER_INIT_DECISION    2u      /* Number how often D0D0 marker must read correctly
                                               to start a first initialization  */
#define EEP_NUM_MARKER_READ_ATTEMPT 3u      /* Number of read attempts for D0D0 marker reading  */
#define EEP_NUM_BLOCK_WRITE_ATTEMPT 3u      /* Number of write attempts for D0D0 marker writing */

/* Possible and necessary entries in codewords Eep_EnFirstInit_CW and Eep_EnFirstFactoryMark_CW to start a first or reinitialization */
#define EEP_ACTIVATE_REINT      0x01        /* Value for Eep_EnFirstFactoryMark_CW to indicate a reinitialization */
#define EEP_NO_NEW_FIRSTINIT    0xAA        /* Default value for Eep_EnFirstInitialization_CW */
#define EEP_START_NEW_FIRSTINIT 0xBB        /* Value for Eep_EnFirstInitialization_CW to indicate a new
                                               first- or reintialization via CodeWord (first part) */
#define EEP_DO_NEW_FIRST_INIT   0xCC        /* Value for Eep_EnFirstInitialization_CW to indicate a new
                                               first- or reintialization via CodeWord (second part) */
#define EEP_ERROR_SETTING_D0D0  0xFF        /* Value for indicating a failure during activating a new firstinitialization */

/* Switch values for enabling the shadow data storage in idle stop case */
#define EEP_ISS_DEACTIVATED             0x00    /* ISS mode is deactivated */
#define EEP_ISS_ACTIVATED               0x01    /* ISS mode is activated */

/* Topicality of ISS data */
#define EEP_ISS_DFLASH_CONT_RECENT      0x00    /* Data in DFlash is more recent */
#define EEP_ISS_EEPROM_CONT_RECENT      0x01    /* Data in external EEPROM is more recent */
#define EEP_ISS_EEPROM_CONT_IGNORED     0x02    /* ASW has changed or first init was triggered */
#define EEP_ISS_CS_ERROR                0xFF    /* Checksum error of ISS related EEP data */

/* Status of ENVRAM storage mechanism */
#define EEP_ISS_ENVRAM_NOT_READY        0x00   /* ENVRAM Shadow storage can't be started yet */
#define EEP_ISS_ENVRAM_READY            0x01   /* ENVRAM Shadow storage can be started */

/* Status of ISS diagnosis for Eep_stShdwDiagActv */
#define EEP_ISS_MON_NOT_ACTIVE          0x00   /* ISS monitoring currently not active */
#define EEP_ISS_MON_ACTIVE              0x01   /* ISS monitoring currently active */

/* Status of checksum availability for Eep_stShdwChksCalcFin */
#define EEP_ISS_DIAG_CS_NOT_AVAILABLE   0x00   /* Result of diagnosis checksum not yet available */
#define EEP_ISS_DIAG_CS_AVAILABLE       0x01   /* Result of diagnosis checksum is available */

/* Checksum result for Eep_stShdwChksTmpDef */
#define EEP_ISS_DIAG_CS_OK              0x00   /* Checksum result is positive */
#define EEP_ISS_DIAG_CS_MISMATCH        0x01   /* Checksum result is negative */


#define EEP_MAX_REP_WRITE_ATTEMPT 3ul

#define EEP_INITIALIZE_STATES           0xFF    /* Initialize the block and page layer read and write states*/
#define EEP_INITIALIZE_STATES_COMPLETED 0x00    /* Initialization of read and write states is completed*/

#define EEP_WRITE_PERFORMED             0xFF 	/*Write is completed in the current driving cycle*/
#define EEP_WRITE_NOT_PERFORMED         0x00	/*Write is not completed in the current driving cycle*/
#define EEP_READ_PERFORMED              0xFF 	/*Read is completed in the current driving cycle*/
#define EEP_READ_NOT_PERFORMED          0x00    /*Read is not completed in the current driving cycle*/

#define EEP_ENVRAM_MARKER_WRITE_DELAY   30      /*Envram Marker write delay is set to 3s from OS start*/
#ifdef EEP_USE_EXT_MASTER_LAYOUT
#define EEP_INIT_IN_PROGRESS 			0xFF
#define EEP_INIT_IN_IDLE	 			0x00
#define EEP_INIT_RETRY 					0x7F
#endif
/*
 ***************************************************************************************************
 * Externals
 ***************************************************************************************************
 */
 #ifdef EEP_USE_EXT_MASTER_LAYOUT
 extern uint8* Eep_InitBuf_pu8;
 extern uint8 Eep_InitFlag_u8;
 extern Eep_stExtMasterLayout_t Eep_stExtMasterLayout;
 #endif
 
__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern uint8 Eep_StateOrdFifo_u8;
extern bool Eep_PostDriveFinished;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END

__PRAGMA_USE__eep__50ms_1s__RAM__x16__START
extern       sint16 Eep_PostdrvBlkIdx_s16;
__PRAGMA_USE__eep__50ms_1s__RAM__x16__END

__PRAGMA_USE__eep__50ms_1s__constant__x16__START
extern const uint16 Eep_stEnvramFlags_cu16;
__PRAGMA_USE__eep__50ms_1s__constant__x16__END

__PRAGMA_USE__eep__50ms_1s__constant__x32__START
extern const uint32 Eep_adFlashStart_cu32;
__PRAGMA_USE__eep__50ms_1s__constant__x32__END

__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern uint8 Eep_stPostDrv;
extern uint8 Eep_stEnvRamMarker_u8;
extern uint8 Eep_writePerformed_u8;
extern uint8 Eep_readPerformed_u8;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END

__PRAGMA_USE__eep__50ms_1s__RAM__s16__START
extern Eep_GlobVars_t Eep_GlobVars_s;
__PRAGMA_USE__eep__50ms_1s__RAM__s16__END

__PRAGMA_USE__eep__50ms_1s__RAM__s32__START
extern Eep_OrderStruct_t Eep_OrderFifo_a[];
__PRAGMA_USE__eep__50ms_1s__RAM__s32__END

MEMLAY_USE_LABEL(extern uint32, __ENVRAM_INITVAR_START[]);
MEMLAY_USE_LABEL(extern uint32, __ENVRAM_INITVAR_SIZE[]);
MEMLAY_USE_LABEL(extern uint32, __ENVRAM_INITVAR_FLASH_START[]);
MEMLAY_USE_LABEL(extern uint32, __ASW_STACK_START[]);
MEMLAY_USE_LABEL(extern uint32, __ASW_STACK_END[]);


__PRAGMA_USE__eep__50ms_1s__RAM__x32__START
extern uint64 Eep_tiNextAnswer_u64;
__PRAGMA_USE__eep__50ms_1s__RAM__x32__END

__PRAGMA_USE__eep__50ms_1s__RAM__arr8__START
extern Eep_ResultBlkCheck_t Eep_ResultBlkCheck_s[];
__PRAGMA_USE__eep__50ms_1s__RAM__arr8__END

/* Externals of EEP internal functions  */
__PRAGMA_USE__CODE__eep__LowSpeed__START
extern void  Eep_OrderFifoProc(void);
extern uint8 Eep_SearchFifoEntry(void);
extern void  Eep_FirstInitIni(void);
extern void  Eep_EepRamIni(void);
extern void  Eep_DiagIni(void);
extern void  Eep_Diag (void);
extern void  Eep_ReadDiag (void);
extern void  Eep_WriteDiag (void);
extern void  Eep_EraseDiag (void);

/* internally used interface has changed */
typedef enum
{
    EEP_POSTDRIVE_INI = 0,
    EEP_POSTDRIVE_BGN,
    EEP_POSTDRIVE_END,
    EEP_PREDRIVE,
    EEP_STORE_ALL_BLOCK,    /* store all block in eepram */
    EEP_STORE_WB_BLOCKS,    /* store all blocks with writeback moment */
    EEP_FINISHED
} Eep_stSycPostDrv_t;

extern bool Eep_PostDrv_Active_b;
extern uint8 Eep_simSycMode_u8;
extern void  Eep_EnvramDiag (void);

extern Eep_FuncRetValues_t Eep_PlaceOrder(uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                           void* xBuf_p, uint8* stOrder_pu8, Eep_Mode_t xMode_e);

extern uint Eep_InitializeBlock(uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numByt_u16,
                                uint8* xWrBuf_pu8);

extern uint32 Eep_PerformCorrAnsw(uint32 numQuery_u32);

extern void Eep_StateMon_100ms(void);

extern void Eep_EnvRam_100ms(void);

#ifdef EEP_TYPE_SC
extern void Eep_CheckSystemConstant(void);
#endif

#ifdef EEP_ISS_USED
extern void Eep_ISS_IniCoordinator(void);
extern void Eep_InitISSDataOfEEPRAM(void);
extern void Eep_ISS_Proc(void);
extern void Eep_ISS_Diag_Proc(void);
extern void Eep_ISS_InvalShadowMem(void);
#endif

__PRAGMA_USE__CODE__eep__LowSpeed__END

__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern xReInitState_t   xReInitState_e;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END
/*_EEPHAL_PRIV_H*/
#endif
