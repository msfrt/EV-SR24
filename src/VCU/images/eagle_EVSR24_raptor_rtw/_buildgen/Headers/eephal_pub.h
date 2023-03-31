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
 * $Filename__:eephal_pub.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:RUO1KOR$
 * $Date______:05.04.2013$
 * $Class_____:SWHDR$
 * $Name______:eephal_pub$
 * $Variant___:1.27.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.27.0; 0     05.04.2013 RUO1KOR
 *   Robustness changes done for MC:EEP_1.27.0
 *   
 *   EEP robustness: Return uint32 in Eep_GetnumSectChg interface
 * 
 * 1.26.0; 2     31.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   13.Feature: Indication via interface Eep_GetState() indicate that ENVRAM 
 *   history marker write is ongoing
 * 
 * 1.26.0; 1     31.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   8. Feature: New interface to get the current number of sector change.
 * 
 * 1.26.0; 0     30.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   4. Feature: New interface to get the number of free pages in the active 
 *   sector.
 * 
 * 1.24.0; 0     21.05.2012 RUO1KOR
 *     Feature: Introduction of New interface eep_readNoHist
 * 
 * 1.23.0; 0     29.03.2012 HUS3KOR
 *   support for ISS(TC1793)
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _EEPHAL_PUB_H
#define _EEPHAL_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                    EEP Eeprom and Emulation Handler
 *
 * \scope             API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
/* Structure for ReInit of Eeprom/Emulation */
typedef struct
{
    uint8* xBlkIdx_pu8;
    uint8  xNumBlk_u8;
} Eep_ReInitLst_t;

/* Possible errors for additional diagnose
   |SecLvl=|SecLvl=|
   | 2||3  |  1    |
   |<----->|<----->|
   +-+-+-+-+-+-+-+-+
   | | | | | | | | |
   +-+-+-+-+-+-+-+-+
    A A A A A A A A
    | | | | | | | |
    | | | | | | | +------- SingleStorage got HistoryValues: EEP_EXTDIAG_HIST_VAL
    | | | | | | +--------- SingleStorage Data Lost        : EEP_EXTDIAG_DATA_LOST
    | | | | | +----------- SingleStorage                  : not used
    | | | | +------------- SingleStorage                  : not used
    | | | +--------------- MultipleStorages HistoryValues : EEP_EXTDIAG_HIST_VAL
    | | +----------------- MultipleStorages Data Lost     : EEP_EXTDIAG_DATA_LOST
    | +------------------- MultipleStorages damaged copy  : EEP_EXTDIAG_SINGLE_COPY_DEF
    +--------------------- MultipleStorages               : not used
*/

typedef enum
{
    EEP_EXTDIAG_NO_ERROR            = 0x00,
    EEP_EXTDIAG_HIST_VAL            = 0x01,        /* history values read                         */
    EEP_EXTDIAG_DATA_LOST           = 0x02,        /* data completely lost, replacevalues used    */
    EEP_EXTDIAG_SINGLE_COPY_DEF     = 0x04         /* at least one copy of a msb-block was defekt */
} Eep_xExtErr_t;

#define EEP_EXTDIAG_SEC1_LVL_SHFT     0
#define EEP_EXTDIAG_SEC23_LVL_SHFT    4

#define EEP_EXTDIAG_CALC_IDX(val)       ((val)/8)
#define EEP_EXTDIAG_CALC_OFFSET(val)    ((val)-(((val)/8)*8))



#define EEP_STORE_ALL_BLOCKS          0
#define EEP_STORE_SEL_BLOCKS          1



/* Possible return values of the EEP interface functions */
typedef enum
{
    /* Values of function Eep_ReadRam */
    EEP_READRAM_I_SUCCEEDED       = 10,
    EEP_READRAM_E_WRG_PARAM       = 11,
    EEP_READRAM_E_BLK_NOT_IN_RAM  = 12,
    EEP_READRAM_E_WRG_CHKSUM      = 13,

    /* Values of function Eep_WriteRam */
    EEP_WRITERAM_I_SUCCEEDED      = 20,
    EEP_WRITERAM_E_WRG_PARAM      = 21,
    EEP_WRITERAM_E_BLK_NOT_IN_RAM = 22,
    EEP_WRITERAM_E_SWOFF_ACTIVE   = 23,

    /* Values of function Eep_InitRam */
    EEP_INITRAM_I_SUCCEEDED       = 30,
    EEP_INITRAM_E_WRG_PARAM       = 31,
    EEP_INITRAM_E_BLK_NOT_IN_RAM  = 32,
    EEP_INITRAM_E_SWOFF_ACTIVE    = 33,

    /* Values of function Eep_Read */
    EEP_READ_I_ACCEPTED           = 40,
    EEP_READ_W_FIFO_FULL          = 41,
    EEP_READ_E_WRG_PARAM          = 42,
    EEP_READ_E_SWOFF_ACTIVE       = 43,

    /* Values of function Eep_Write */
    EEP_WRITE_I_ACCEPTED          = 50,
    EEP_WRITE_W_FIFO_FULL         = 51,
    EEP_WRITE_E_WRG_PARAM         = 52,
    EEP_WRITE_E_SWOFF_ACTIVE      = 53,

    /* Values of function Eep_Init */
    EEP_INIT_I_ACCEPTED           = 60,
    EEP_INIT_W_FIFO_FULL          = 61,
    EEP_INIT_E_WRG_PARAM          = 62,
    EEP_INIT_E_SWOFF_ACTIVE       = 63,

    /* Values of function Eep_GetInitValues */
    EEP_GETINIT_I_SUCCEEDED       = 70,
    EEP_GETINIT_E_WRG_PARAM       = 71
} Eep_FuncRetValues_t;


/* Possible order status information values */
typedef enum
{
    EEP_ORDSTAT_I_SUCCEEDED       = 10,
    EEP_ORDSTAT_I_PENDING         = 20,
    EEP_ORDSTAT_W_REPL_VALUES     = 30,
    EEP_ORDSTAT_W_HIST_VALUES     = 40,
    EEP_ORDSTAT_W_INVLD_VALUES    = 50,
    EEP_ORDSTAT_E_ABORTED         = 60
} Eep_OrdStat_t;


/* Possible values for function parameter xType_u8 of function Eep_Init */
typedef enum
{
    EEP_INIT_FIRSTINIT_VALUES     = 0xA0,
    EEP_INIT_REPLACE_VALUES       = 0xA1,
    EEP_INIT_DEFAULT_VALUES       = 0xA2
} Eep_InitValues_t;


/* Possible values for function parameter xType_u8 of function Eep_GetInitValues */
typedef enum
{
    EEP_GET_FIRSTINIT_VALUES      = 0xB0,
    EEP_GET_REPLACE_VALUES        = 0xB1
} Eep_GetInitValues_t;

/* internal state variable values, used if function for storing eep-ram by tester is used */
typedef enum
{
    EEP_WRITE_ENVRAM          = 0x00,
    EEP_WAIT_WRITE_ENVRAM     = 0x01,
    EEP_ENVRAM_FINISHED       = 0x02
} Eep_StoreEnvram_t;

/* internal state variable values, used if function for storing eep-ram by tester is used */
typedef enum
{
    EEP_EEPRAM_SEARCHBLK          = 0x00,
    EEP_EEPRAM_WAIT_WRITE_BLK     = 0x01,
    EEP_EEPRAM_WRITE_BLK_FINISHED = 0x02
} Eep_StoreEepram_t;

/* internal abort-condition of function which can be used for storing the eep-ram by tester */
typedef enum
{
    EEP_EEPRAM_ORDER_NOT_SEND     = 0x00,
    EEP_EEPRAM_ORDER_ACCEPTED     = 0x01,
    EEP_EEPRAM_ORDER_DENIED       = 0x02
} Eep_BlkFound_t;

#define EEP_STAT_INI_RUN_MSK          0x0001
#define EEP_STAT_INI_ORGVAL_MSK       0x0002
#define EEP_STAT_INI_REPLVAL_MSK      0x0004
#define EEP_STAT_INI_DEFVAL_MSK       0x0008
#define EEP_STAT_INI_HISTVAL_MSK      0x0010
#define EEP_STAT_FINIT_RUN_MSK        0x0020
#define EEP_STAT_FINIT_VALUES_MSK     0x00C0
#define EEP_STAT_FINIT_CALLBERR_MSK   0x0100
#define EEP_STAT_MIGRATION_RUN_MSK    0x0200
#define EEP_STAT_MIGRATION_VALUES_MSK 0x0C00
#define EEP_STAT_SWOFF_RUN_MSK        0x1000
#define EEP_STAT_SWOFF_OK_MSK         0x2000
#define EEP_STAT_RD_ERROR_MSK         0x4000
#define EEP_STAT_WR_ERROR_MSK         0x8000

#define EEP_STAT_INI_RUN_BP           0
#define EEP_STAT_INI_ORGVAL_BP        1
#define EEP_STAT_INI_REPLVAL_BP       2
#define EEP_STAT_INI_DEFVAL_BP        3
#define EEP_STAT_INI_HISTVAL_BP       4
#define EEP_STAT_FINIT_RUN_BP         5
#define EEP_STAT_FINIT_VALUES_BP      6
#define EEP_STAT_FINIT_CALLBERR_BP    8
#define EEP_STAT_MIGRATION_RUN_BP     9
#define EEP_STAT_MIGRATION_VALUES_BP  10
#define EEP_STAT_SWOFF_RUN_BP         12
#define EEP_STAT_SWOFF_OK_BP          13
#define EEP_STAT_RD_ERROR_BP          14
#define EEP_STAT_WR_ERROR_BP          15

/*  Returnvalue of Eep_GetState
                   ============
                                     +-------------------------------- EEP_INIT_MSK
                                     | +------------------------------ EEP_READ_MSK
                                     | | +---------------------------- EEP_WRITE_MSK
                                     | | | +-------------------------- EEP_REINIT_INI_MSK
                                     | | | | +------------------------ EEP_ENVRAM_INI_MSK
                                     | | | | | +---------------------- EEP_RAM_INI_MSK
                                     | | | | | | +-------------------- EEP_FIRSTINIT_INI_MSK
                                     | | | | | | | +------------------ EEP_PREDRV_RUN_MSK
                                     | | | | | | | | +---------------- EEP_PREDRV_REQUEST_MSK
                                     | | | | | | | | | +-------------- EEP_ENDPD_RUN_MSK
                                     | | | | | | | | | | +------------ EEP_ENDPD_REQUEST_MSK
                                     | | | | | | | | | | | +---------- EEP_BEGPD_RUN_MSK
                                     | | | | | | | | | | | | +-------- EEP_BEGPD_REQUEST_MSK
                                     | | | | | | | | | | | | | +------ EEP_NORMAL_RUN_MSK
                                     | | | | | | | | | | | | | | +---- EEP_SHUTDWN_RUN_MSK
                                     | | | | | | | | | | | | | | | +-- EEP_INI_RUN_MSK
          memorymedia specific       | | | | | | | | | | | | | | | |
    |<----------------------------->|V V V V V V V V V V V V V V V V
    +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
    | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | |
    +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
     A A A A A A A A A A A A A A A A|<----------------------------->|
     | | | | | | | | | | | | | | | ||    memorymedia independent
     | | | | | | | | | | | | | | | ||
     | | | | | | | | | | | | | | | ||<- EEP_MEMSPEC_STATE_OFF (offset of memory specific errors)
     | | | | | | | | | | | | | | | |
     | | | | | | | | | | | | | | | |
     | | | | | | | | | | | | | | | +-- EEP_SECTOR_CHANGE_MSK (only in case of eeprom-emulation)
     | | | | | | | | | | | | | | +---- EEP_SECTOR_ERASE_MSK (only in case of eeprom-emulation)
     | | | | | | | | | | | | | +------ EEP_ENVRAM_MARKER_WRITE_MSK
     | | | | | | | | | | | | +--------
     | | | | | | | | | | | +----------
     | | | | | | | | | | +------------
     | | | | | | | | | +--------------
     | | | | | | | | +----------------
     | | | | | | | +------------------
     | | | | | | +--------------------
     | | | | | +----------------------
     | | | | +------------------------
     | | | +--------------------------
     | |+-----------------------------
     | +------------------------------
     +--------------------------------
*/
#define EEP_MEMSPEC_STATE_OFF       16                              /* offset of the memoryspecific states */
#define EEP_ENVRAM_MARKER_WRITE_BP  18

/* Main states of EEP */
/* these enumerators are also used as value into the interface Eep_GetState and it is not allowed to change
   interfaces anymore !!! */
typedef enum
{
    EEP_INI_RUN,
    EEP_SHUTDWN_RUN,
    EEP_NORMAL_RUN,
    EEP_BEGPD_REQUEST,
    EEP_BEGPD_RUN,
    EEP_ENDPD_REQUEST,
    EEP_ENDPD_RUN,
    EEP_PREDRV_REQUEST,
    EEP_PREDRV_RUN,
    EEP_FIRSTINIT_INI,
    EEP_RAM_INI,
    EEP_ENVRAM_INI,
    EEP_REINIT_INI
} Eep_MainState_t;

/* The arrangement of this enumerator is defined intentionally in such a way. The xzy_INI values
   must be after EEP_NORMAL_RUN because the functions who place an order will only accept an order
   if EEP is in EEP_INI_RUN, EEP_SHUTDWN_RUN or EEP_NORMAL_RUN mode.
   This is guaranteed by: if (Eep_stMain <= EEP_NORMAL_RUN).
   If EEP is in EEP_INI_RUN or EEP_SHUTDWN_RUN mode a special loop must be done to call order
   processing processes without support of time slots.
   To use EEP in ShutDown after destructive RAM test a special ini function must be called. */
#define EEP_INI_RUN_MSK             (1 << EEP_INI_RUN)              /* mask, generated from Eep_MainState define      */
#define EEP_SHUTDWN_RUN_MSK         (1 << EEP_SHUTDWN_RUN)          /* mask, generated from Eep_MainState define      */
#define EEP_NORMAL_RUN_MSK          (1 << EEP_NORMAL_RUN)           /* mask, generated from Eep_MainState define      */
#define EEP_BEGPD_REQUEST_MSK       (1 << EEP_BEGPD_REQUEST)        /* mask, generated from Eep_MainState define      */
#define EEP_BEGPD_RUN_MSK           (1 << EEP_BEGPD_RUN)            /* mask, generated from Eep_MainState define      */
#define EEP_ENDPD_REQUEST_MSK       (1 << EEP_ENDPD_REQUEST)        /* mask, generated from Eep_MainState define      */
#define EEP_ENDPD_RUN_MSK           (1 << EEP_ENDPD_RUN)            /* mask, generated from Eep_MainState define      */
#define EEP_PREDRV_REQUEST_MSK      (1 << EEP_PREDRV_REQUES)        /* mask, generated from Eep_MainState define      */
#define EEP_PREDRV_RUN_MSK          (1 << EEP_PREDRV_RUN)           /* mask, generated from Eep_MainState define      */
#define EEP_FIRSTINIT_INI_MSK       (1 << EEP_FIRSTINIT_INI)        /* mask, generated from Eep_MainState define      */
#define EEP_RAM_INI_MSK             (1 << EEP_RAM_INI)              /* mask, generated from Eep_MainState define      */
#define EEP_ENVRAM_INI_MSK          (1 << EEP_ENVRAM_INI)           /* mask, generated from Eep_MainState define      */
#define EEP_REINIT_INI_MSK          (1 << EEP_REINIT_INI)           /* mask, generated from Eep_MainState define      */
#define EEP_WRITE_MSK               (1 << (EEP_REINIT_INI + 1))     /* additional mask, based on main-state define    */
#define EEP_READ_MSK                (1 << (EEP_REINIT_INI + 2))     /* additional mask, based on main-state define    */
#define EEP_INIT_MSK                (1 << (EEP_REINIT_INI + 3))     /* additional mask, based on main-state define    */

#define EEP_SECTOR_CHANGE_MSK       (1 << EEP_MEMSPEC_STATE_OFF)
#define EEP_SECTOR_ERASE_MSK        (1 << (EEP_MEMSPEC_STATE_OFF+1))
#define EEP_ENVRAM_MARKER_WRITE_MSK (1 << EEP_ENVRAM_MARKER_WRITE_BP)/* mask, based on ENVRAM history marker write*/


/* Define used in SYC to detect that ENVRAM will be saved in SHUTDOWN */
#define EEP_ENVRAM_IN_SHUTDOWN

/* Defines to get the blockindex of the requested block */
#define EEP_GET_BLK_IDX1(blkindx,ofs,numbytes) (blkindx)
#define EEP_GET_BLK_IDX(blockname) EEP_GET_BLK_IDX1(blockname)

/* ISS storage activity */
#define EEP_ISS_STORAGE_NOT_RUNNING     0x00    /* Data storage mechanism currently running */
#define EEP_ISS_STORAGE_RUNNING         0x01    /* Data storage mechanism not running */
#define EEP_ISS_DIAG_RUNNING            0x02    /* Diagnosis functionality is running */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern uint8  Eep_Read            (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                   void* xRdBuf_p, uint8* stOrder_pu8);

extern uint8  Eep_ReadNoHist      (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                   void* xRdBuf_p, uint8* stOrder_pu8);

extern uint8  Eep_Write           (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                   void* xWrBuf_p, uint8* stOrder_pu8);

extern uint8  Eep_ReadRam         (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                   void* xRdBuf_p);

extern uint8  Eep_WriteRam        (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                   void* xWrBuf_p);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__eep__LowSpeed__START
extern uint8  Eep_Init            (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                   Eep_InitValues_t xType_e, uint8* stOrder_pu8);

extern uint8  Eep_InitRam         (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                   Eep_InitValues_t xType_e);

extern uint16 Eep_ReadBlockStatus (uint16 xBlkIdx_u16, uint16 xNotUsed1_u16, uint16 xNotUsed2_u16);

extern uint8  Eep_GetInitValues   (uint16 xBlkIdx_u16,  uint16 xOfs_u16, uint16 numBytes_u16,
                                   Eep_GetInitValues_t xType_e, void* xBuf_p);

extern bool   Eep_GetRdPerm(uint16 xBlkIdx_u16, uint16 xNotUsed1_u16, uint16 xNotUsed2_u16);
extern bool   Eep_GetWrPerm(uint16 xBlkIdx_u16, uint16 xNotUsed1_u16, uint16 xNotUsed2_u16);
extern void   Eep_Proc_Ini        (void);

extern void   Eep_Proc_IniEnd     (void);

extern void   Eep_ShutDownIni     (void);

extern void   Eep_EnvRam_Proc_Ini (void);

extern bool   Eep_EnvRamShutDown  (void);

extern void   Eep_EraseEnvRam     (void);

extern bool   Eep_TrigEraseEnvRam (void);

extern void   Eep_Main_Proc       (void);

extern void   Eep_20ms_Proc       (void);

extern void   Eep_100ms_Proc      (void);

extern bool   Eep_PreDrive_End    (void);

extern bool   Eep_Postdrive_Bgn   (void);

extern bool   Eep_Postdrive_End   (void);

extern void   Eep_Shutdown_Proc   (void);

extern bool   Eep_PrepareJumpToCB (void);

extern void   Eep_RepairMulStoredBlkProc(void);

/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern void   Eep_StoreAllEepRamBlocks(uint);

extern uint32 Eep_StoreEepram(void);

extern uint32 Eep_StoreEnvram(void);

extern uint32 Eep_GetState(void);

extern uint32 Eep_GetNumSectChg(void);
extern uint   Eep_GetBlkDiff(uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16);
extern bool   Eep_ReInitBlocks (Eep_ReInitLst_t* ReInitLst_s);
extern void   Eep_ReInitBlocks_Proc (void);
extern void   Eep_ExtBlkDiag_Proc(void);
extern uint32 Eep_GetNoOfFreePages(void);
__PRAGMA_USE__CODE__eep__LowSpeed__END
/*_EEPHAL_PUB_H*/
#endif
