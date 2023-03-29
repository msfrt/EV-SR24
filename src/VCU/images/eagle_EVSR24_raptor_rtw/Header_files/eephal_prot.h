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
 * $Filename__:eephal_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RUO1KOR$
 * $Date______:20.10.2014$
 * $Class_____:SWHDR$
 * $Name______:eephal_prot$
 * $Variant___:1.33.0$
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
 * 1.33.0; 0     20.10.2014 RUO1KOR
 *   MC:EEP_1.33.0 Milestone release.
 *   12. RQONE00456862: Handling of EEP DFC in a similar way for both GS and DS 
 *   systems
 * 
 * 1.29.0; 3     20.10.2014 RUO1KOR
 *   MC:EEP_1.33.0 Milestone release.
 *   9. RQONE00409803: To remove the firstinit and replace values in PFLASH when
 *    it is same as zeros to avoid space consumption
 *   
 * 
 * 1.29.0; 2     29.10.2013 RUO1KOR
 *     Milestone Mc:EEP_1.29.0 release
 *     Test findings
 *     12. RQONE00267583: Debug feature: To introduce new variable that 
 *   indicates the Max Queue consumption.
 * 
 * 1.29.0; 1     25.10.2013 RUO1KOR
 *   Milestone Mc:EEP_1.29.0 release
 *   12. RQONE00267583: Debug feature: To introduce new variable that indicates 
 *   the Max Queue consumption.
 * 
 * 1.29.0; 0     25.10.2013 RUO1KOR
 *   Milestone Mc:EEP_1.29.0 release
 *   11. RQONE00267571: Debug feature: To introduce new variables to capture the
 *    ini, Write, read, sector change and Erase time.
 * 
 * 1.27.0; 0     05.04.2013 RUO1KOR
 *   Robustness changes done for MC:EEP_1.27.0
 *   
 *   EEP robustness: Return uint32 in Eep_GetnumSectChg interface
 * 
 * 1.26.0; 6     21.11.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   20. Removal of compiler warnings.
 * 
 * 1.26.0; 5     20.11.2012 SUU4KOR
 *   16. FEE Adapter layer Enhancement: Support external watchdog handling when 
 *   there is block write before ENVRAM block is written in shutdown.
 * 
 * 1.26.0; 4     19.11.2012 SUU4KOR
 *   13. Enhancement for FEE Adpater layer: Do not trigger migration when first 
 *   init was just triggered
 * 
 * 1.26.0; 3     31.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   8. Feature: New interface to get the current number of sector change.
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EEPHAL_PROT_H
#define _EEPHAL_PROT_H

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

/* Return values of EEP PDL functions */
typedef enum
{
    EEP_PDL_READ_I_CURRENT_BLOCK      = 10,
    EEP_PDL_READ_I_PREVIOUS_BLOCK     = 11,
    EEP_PDL_READ_I_INCONSISTENT_BLOCK = 12,
    EEP_PDL_WRITE_I_SUCCEEDED         = 13,
    EEP_PDL_READ_I_PENDING            = 20,
    EEP_PDL_WRITE_I_PENDING           = 21,
    EEP_PDL_WRITE_E_ABORTED           = 30,
    EEP_PDL_READ_E_INVALID_BLOCK      = 40,
    EEP_PDL_READ_E_INTERNAL_ERROR     = 50,
    EEP_PDL_WRITE_E_INTERNAL_ERROR    = 51,
    EEP_PDL_CALL_E_INTERNAL_ERROR     = 60
} Eep_PdlReturns_t;


/* possible states of EEPRAM initialization */
typedef enum
{
    EEP_EEPRAM_PROT_RAM_INVALID    = 0,     /* Protected RAM is invalid (cleared) */
    EEP_EEPRAM_INIT_STARTED        = 1,     /* Initialization of EEPRAM started */
    EEP_EEPRAM_INIT_FINISHED       = 2,     /* Initialization of EEPRAM finished */
    EEP_EEPRAM_INVALID             = 3      /* Only EEPRAM is invalid (e.g. after migration) */
} Eep_EepRamInit_t;


/* possible states of ENVRAM initialization */
typedef enum
{
    EEP_ENVRAM_PROT_RAM_INVALID    = 0,     /* Protected RAM is invalid (cleared) */
    EEP_ENVRAM_INIT_STARTED        = 1,     /* Initialization of ENVRAM started */
    EEP_ENVRAM_INIT_FINISHED       = 2,     /* Initialization of ENVRAM finished */
    EEP_ENVRAM_INVALID             = 3,     /* Only ENVRAM is invalid (e.g. after migration) */
    EEP_ENVRAM_CLEAR_STARTED       = 4,     /* Deletion of ENVRAM started */
    EEP_ENVRAM_CLEAR_REQUEST       = 5      /* Request of a deletion of ENVRAM */
} Eep_EnvRamInit_t;


/* Possible methods of first initialization */
typedef enum
{
    EEP_ORDER_DO_NOTHING         = 0x00,
    EEP_ORDER_FIRST_INIT_VAL     = 0x01,
    EEP_ORDER_REPLACE_VAL        = 0x02,
    EEP_ORDER_INIT_WITH_DEFAULT  = 0x03
} Eep_FirstInitOrders_t;


/* Validity of a block */
typedef enum
{
    EEP_BLKSTATE_CURRENT        = 1,
    EEP_BLKSTATE_PREVIOUS       = 2,
    EEP_BLKSTATE_INCONSISTENT   = 3,
    EEP_BLKSTATE_INVALID        = 4
} Eep_BlkValidity_t;

/* Values for EEP diagnose functionality */
typedef enum
{
    EEP_EXTDIAG_RD_BLK,
    EEP_EXTDIAG_WAIT_RD_BLK,
    EEP_EXTDIAG_PERFORMED
} Eep_stExtDiag_t;

/* Values for EEP diagnose functionality */
typedef enum
{
    EEP_DIAG_NOT_PERFORMED,
    EEP_DIAG_PERFORMED,
    EEP_DIAG_ERROR
} Eep_DiagValues_t;

/* States in block read state machine */
typedef enum
{
    EEP_ENVRAM_INIT,
    EEP_ENVRAM_ERROR_ENTER,
    EEP_ENVRAM_NO_ERROR_ENTER
} Eep_EnvramEnter_t;

/* States in block read state machine */
typedef enum
{
    EEP_ENVRAM_STATE_STARTUP,
    EEP_ENVRAM_STATE_CHKERR,
    EEP_ENVRAM_NOT_ENTER
} Eep_EnvramStates_t;

/* possible values for the return-value of writing eep- and envram via tester

 |  15 |  14 |  13 |  12 |  11 |  10 |  9  |  8  |  7  |  6  |  5  |  4  |  3  |  2  |  1  |  0  |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 |     |     |     |     |     |     |     |     |     |     |     |     |     |     |WRONG|     |
 | not | not | not | not | not | not | not | not | not | not | not | not |QUEUE|WRITE| CRC |READY|
 | used| used| used| used| used| used| used| used| used| used| used| used|FULL |ERROR| IN  |     |
 |     |     |     |     |     |     |     |     |     |     |     |     |     |     |EPRAM|     |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

enum
{
    EEP_EEP_ENV_CLEAR       = 0x00,
    EEP_EEP_ENV_FINISHED    = 0x01,
    EEP_EEP_ENV_CRC_ERROR   = 0x02,
    EEP_EEP_ENV_WRITE_ERROR = 0x04,
    EEP_EEP_ENV_QUEUE_FULL  = 0x08
};

typedef enum
{
    EEP_RI_DO_NOTHING,
    EEP_RI_SEARCH_BLK,
    EEP_RI_WRITE_BLK,
    EEP_RI_WAIT_WRITE,
    EEP_RI_FINISHED
} xReInitState_t;



/* Structure with all interface functions of the layer PDL */
typedef struct
{
    uint   (* const RdBlk_pfn) (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numByt_u16, \
                                uint8* xRdBuf_pu8);
    uint   (* const WrBlk_pfn) (uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numByt_u16, \
                                uint8* xWrBuf_pu8);
    uint32 (* const GetSecLevel_pfn) (uint16 xBlkIdx_u16);
    uint8  (* const GetBlkState_pfn) (uint32 xCurrCpy_u32);
    uint32 (* const GetSubState_pfn) (void);
    void   (* const InitRdWrstatus_pfn) (uint8 stMode_u8);
    uint32 (* const GetNoOfFreePages_pfn) (void);
    uint32 (* const GetNumSectChg_pfn)(void);
} Eep_PdlFunctions_t;


/* Structure will all processes of layer PDL who must be execuded in EEP */
typedef struct
{
    void (* const Ini1_pfn) (void);
    void (* const Ini2_pfn) (void);
    void (* const IniEnd_pfn) (void);
    void (* const TimeTask_pfn) (void);
    bool (* const PrepCB_pfn) (void);
    bool (* const ChkAct_pfn) (void);
} Eep_PdlProcs_t;

#ifdef EEP_USE_EXT_MASTER_LAYOUT

/* Definition of the EEP block properties table */
/*Define master block hash and master TOC index when extended masterlayout is used*/
typedef struct
{
    bool (* const Eep_FirstInitCallBack_pfn)(void);
    uint16 stBlkFlags_u16;
    uint16 xBlkIdx_u16;
    uint16 adOfsRam_u16;
    uint16 adOfsInit_u16;
    uint16 adOfsRepl_u16;
    uint16 xBlkLength_u16;
    uint16 xBlkLenEepRam_u16;
    uint16 xblock_hash_u16;     /* Store the block identifier*/
    uint8  xTimeSyncStoreIdx;   /* index of current block in RAM-Table */
    uint8  xTimeSyncStorePer;   /* xTimeSyncStorePer in Minutes */
    uint8  xtoc_index_u8;       /*Used to find out whether block has extended master layout activated*/
    uint8  xNonZeroList_u8;     /*Used to find out if the firstInitList or Replace List is Non Zero */
}   Eep_BlkProp_t;

#else
/* Definition of the EEP block properties table */

typedef struct
{
    bool (* const Eep_FirstInitCallBack_pfn)(void);
    uint16 stBlkFlags_u16;
    uint16 xBlkIdx_u16;
    uint16 adOfsRam_u16;
    uint16 adOfsInit_u16;
    uint16 adOfsRepl_u16;
    uint16 xBlkLength_u16;
    uint16 xBlkLenEepRam_u16;
    uint8  xTimeSyncStoreIdx;   /* index of current block in RAM-Table */
    uint8  xTimeSyncStorePer;   /* xTimeSyncStorePer in Minutes */
    uint8  xNonZeroList_u8;     /*Used to find out if the firstInitList or Replace List is Non Zero */
}   Eep_BlkProp_t;
#endif

enum
{
    EEP_MIGVAL_FIRSTINITVALUES = 0x00,
    EEP_MIGVAL_DEFAULTVALUES   = 0x01,
    EEP_MIGVAL_REPLACEVALUES   = 0x02,
    EEP_MIGVAL_NONE            = 0x04
};


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Definitions and macros to get informations from the block descripbtion flags (stBlkFlags_u16) */

/*
 |  15 |  14 |  13 |  12 |  11 |  10 |  9  |  8  |  7  |  6  |  5  |  4  |  3  |  2  |  1  |  0  |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 | Re  | de- |use  |     |     |     |     |     |     |     |     |Saved| Moment of | CS  | Blk |
 | Init|act- |Error|   Memory type   | ext.| ext.| Used first init | in  | saving in | in  | in  |
 | of  |ivate|heal-|     |     |     |write|read |     values      |Pre- | PostDrive | EEP-| EEP-|
 | Blk |block|ing  |     |     |     |perm.|perm.|     |     |     |drive| End |Begin| RAM | RAM |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

/* Defines for macros */
#define EEP_REINIT_CONFIGURED     0ul
#define EEP_REINIT_NOT_CONFIGURED 1ul

/* Defines for macros */
#define EEP_DEACTIVATION_DISABLED 0ul
#define EEP_DEACTIVATION_ENABLED  1ul

/* Bitmasks to get the block flags */
#define EEP_BLOCK_IN_RAM_MSK     0x0001ul
#define EEP_CHECKSUM_IN_RAM_MSK  0x0002ul
#define EEP_SAVING_BEGPD_MSK     0x0004ul
#define EEP_SAVING_ENDPD_MSK     0x0008ul
#define EEP_SAVING_PREDRIVE_MSK  0x0010ul
#define EEP_FIRSTINIT_VAL_MSK    0x00E0ul
#define EEP_EXT_READ_PERM_MSK    0x0100ul
#define EEP_EXT_WRITE_PERM_MSK   0x0200ul
#define EEP_MEMORY_TYPE_MSK      0x1C00ul
#define EEP_ERROR_HEALING_MSK    0x2000ul
#define EEP_DEACTIVATE_BLOCK_MSK 0x4000ul
#define EEP_REINIT_BLOCK_MSK     0x8000ul

/* Position of the bits inside the block flags */
#define EEP_BLOCK_IN_RAM_BP      0ul
#define EEP_CHECKSUM_IN_RAM_BP   1ul
#define EEP_SAVING_BEGPD_BP      2ul
#define EEP_SAVING_ENDPD_BP      3ul
#define EEP_SAVING_PREDRIVE_BP   4ul
#define EEP_FIRSTINIT_VAL_BP     5ul
#define EEP_EXT_READ_PERM_BP     8ul
#define EEP_EXT_WRITE_PERM_BP    9ul
#define EEP_MEMORY_TYPE_BP      10ul
#define EEP_ERROR_HEALING_BP    13ul
#define EEP_DEACTIVATE_BLOCK_BP 14ul
#define EEP_REINIT_BLOCK_BP     15ul


/* Macro to check if block is in EEPRAM */
#define EEP_GET_BLK_IN_RAM(BLKIDX)       ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_BLOCK_IN_RAM_MSK) >> \
                                          EEP_BLOCK_IN_RAM_BP)

/* Macro to check if block have an checksum in EEPRAM */
#define EEP_GET_CHECKSUM_IN_RAM(BLKIDX)  ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_CHECKSUM_IN_RAM_MSK) >> \
                                          EEP_CHECKSUM_IN_RAM_BP)

/* Macro to check if block is saved at begin of PostDrive */
#define EEP_GET_SAVING_BEGPD(BLKIDX)     ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_SAVING_BEGPD_MSK) >> \
                                          EEP_SAVING_BEGPD_BP)

/* Macro to check if block is saved at end of PostDrive */
#define EEP_GET_SAVING_ENDPD(BLKIDX)     ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_SAVING_ENDPD_MSK) >> \
                                          EEP_SAVING_ENDPD_BP)

/* Macro to check if block is saved at end of PreDrive */
#define EEP_GET_SAVING_PREDRIVE(BLKIDX)  ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_SAVING_PREDRIVE_MSK) >> \
                                          EEP_SAVING_PREDRIVE_BP)

/* Macro to check which first init values are used */
#define EEP_GET_FIRSTINIT_VAL(BLKIDX)    ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_FIRSTINIT_VAL_MSK) >> \
                                          EEP_FIRSTINIT_VAL_BP)

/* Macro to check if a external read permission exists */
#define EEP_GET_EXT_READ_PERM(BLKIDX)    ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_EXT_READ_PERM_MSK) >> \
                                          EEP_EXT_READ_PERM_BP)

/* Macro to check if a external write permission exists */
#define EEP_GET_EXT_WRITE_PERM(BLKIDX)   ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_EXT_WRITE_PERM_MSK) >> \
                                          EEP_EXT_WRITE_PERM_BP)

/* Macro to get the memory type of the block */
#define EEP_GET_MEMORY_TYPE(BLKIDX)      ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_MEMORY_TYPE_MSK) >> \
                                          EEP_MEMORY_TYPE_BP)

/* Macro to get the information if error-healing is requested */
#define EEP_GET_ERROR_HEALING(BLKIDX)    ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_ERROR_HEALING_MSK) >> \
                                          EEP_ERROR_HEALING_BP)

/* Macro to get the information if a deactivation is requested */
#define EEP_GET_DEACTIVATE(BLKIDX)       ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_DEACTIVATE_BLOCK_MSK) >> \
                                          EEP_DEACTIVATE_BLOCK_BP)

/* Macro to get the information if a ReInitialization is requested */
#define EEP_GET_RE_INIT(BLKIDX)          ((EEP_GET_BLKFLAGS(BLKIDX) & EEP_REINIT_BLOCK_MSK) >> \
                                          EEP_REINIT_BLOCK_BP)


/* Macros to get parts of the block property table ************************************************/

/* Macro delivers the pointer to a first init callback funcktion */
#define EEP_GET_CALLBACK(BLKIDX)         (Eep_BlkProp_cas[BLKIDX].Eep_FirstInitCallBack_pfn)

/* Macro delivers the bitfield with the block flags */
#define EEP_GET_BLKFLAGS(BLKIDX)         ((uint32)Eep_BlkProp_cas[BLKIDX].stBlkFlags_u16)

/* Macro delivers the block index */
#define EEP_GET_BLKINDEX(BLKIDX)         (Eep_BlkProp_cas[BLKIDX].xBlkIdx_u16)

/* Macro delievers EEPRAM internal offset to a block */
#define EEP_GET_RAM_OFS(BLKIDX)          (Eep_BlkProp_cas[BLKIDX].adOfsRam_u16)

/* Macro delievers offset in first init value list to a block */
#define EEP_GET_FIRSTINIT_OFS(BLKIDX)    (Eep_BlkProp_cas[BLKIDX].adOfsInit_u16)

/* Macro delievers offset in replace  init value list to a block */
#define EEP_GET_REPLACE_OFS(BLKIDX)      (Eep_BlkProp_cas[BLKIDX].adOfsRepl_u16)

/* Macro delivers the size of a block in bytes in the memory media */
#define EEP_GET_BLKLENGTH(BLKIDX)        (Eep_BlkProp_cas[BLKIDX].xBlkLength_u16)

/* Macro delivers the size of a block in bytes in the EEPRAM */
#define EEP_GET_BLKLENGTH_EEPRAM(BLKIDX) (Eep_BlkProp_cas[BLKIDX].xBlkLenEepRam_u16)


#ifdef EEP_USE_EXT_MASTER_LAYOUT

/* Macro delivers the identifier of master block only when extended master layout is used */
#define EEP_EXTMB_MB_HASH(BLKIDX) (Eep_BlkProp_cas[BLKIDX].xblock_hash_u16)

/* Macro delivers the master block position in table of contents only when extended master layout is used*/
#define EEP_EXTMB_GET_MB_TOC_IDX(BLKIDX) (Eep_BlkProp_cas[BLKIDX].xtoc_index_u8)

/* The macro delivers the TOC_IDX For the block which doesn't have extended masterlayout configured*/
#define EEP_NOT_EXT_MB_TOC_IDX                  0xFF    /*The block is not configured for extended masterblock*/

#endif

/* Derived macros *********************************************************************************/

/* Macro delivers the start adress of a block in EEPRAM */
#define EEP_GET_RAM_ADR(BLKIDX)          (Eep_adEepRam_cu32 + (uint32)EEP_GET_RAM_OFS(BLKIDX))

/* Macro delivers the start adress of the first init value list */
#define EEP_GET_FIRSTINIT_ADR(BLKIDX)    (Eep_adInitVal_cu32 + \
                                          (uint32)EEP_GET_FIRSTINIT_OFS(BLKIDX))

/* Macro delivers the start adress of the replace value list */
#define EEP_GET_REPLACE_ADR(BLKIDX)      (Eep_adReplVal_cu32 + (uint32)EEP_GET_REPLACE_OFS(BLKIDX))

/* Macro delivers the size of a block in bytes with 32-bit allignment */
#define EEP_GET_BLKLENGTH_ALLIGN(BLKIDX) (((uint32)EEP_GET_BLKLENGTH_EEPRAM(BLKIDX) + 3ul) & 0xFFFCul)

/* Macro delivers the adress of the checksum of a block in EEPRAM (32-bit allign) */
#define EEP_GET_RAMCRC_ADR(BLKIDX)       (EEP_GET_RAM_ADR(BLKIDX) + \
                                          EEP_GET_BLKLENGTH_ALLIGN(BLKIDX))


/* Macros for ENVRAM ******************************************************************************/
/* Macro to check if ENVRAM is saved at begin of PostDrive */
#define EEP_ENVRAM_GET_SAVING_BEGPD      (((uint32)Eep_stEnvramFlags_cu16 & \
                                           EEP_SAVING_BEGPD_MSK) >>        \
                                           EEP_SAVING_BEGPD_BP)

/* Macro to check if ENVRAM is saved at end of PostDrive */
#define EEP_ENVRAM_GET_SAVING_ENDPD      (((uint32)Eep_stEnvramFlags_cu16 & \
                                           EEP_SAVING_ENDPD_MSK) >>        \
                                           EEP_SAVING_ENDPD_BP)

/* Macro to check if ENVRAM is saved at end of PreDrive */
#define EEP_ENVRAM_GET_SAVING_PREDRIVE   (((uint32)Eep_stEnvramFlags_cu16 & \
                                           EEP_SAVING_PREDRIVE_MSK) >>     \
                                           EEP_SAVING_PREDRIVE_BP)

/* Macro to get the memory type of ENVRAM */
#define EEP_ENVRAM_GET_MEMORY_TYPE       (((uint32)Eep_stEnvramFlags_cu16 & \
                                           EEP_MEMORY_TYPE_MSK) >>         \
                                           EEP_MEMORY_TYPE_BP)

/* Definitions and macros to get informations from the NonZero List */

/*
 |  7  |  6  |  5  |  4  |  3  |  2  |    1    |    0  |
 +-----+-----+-----+-----+-----+-----+---------+-------+
 |                                   | Replace | First |
 |                                   |  List   | Init  |
 |       Not Used                    |  Non    | List  |
 |                                   |  Zero   | Non   |
 |                                   |         | Zero  |
 +-----+-----+-----+-----+-----+-----+---------+-------+
*/
/* Bitmasks to get the non zero list */
#define EEP_FIRSTINITLIST_NON_ZERO_MSK     0x0001ul
#define EEP_FIRSTINITLIST_NON_ZERO_BP       0ul
#define EEP_REPLACELIST_NON_ZERO_MSK       0x0002ul
#define EEP_REPLACELIST_NON_ZERO_BP         1ul
#define EEP_GET_FIRSTINITLIST_NON_ZERO(BLKIDX)    (((uint32)Eep_BlkProp_cas[BLKIDX].xNonZeroList_u8 & \
                                                    EEP_FIRSTINITLIST_NON_ZERO_MSK)>>     \
                                                        EEP_FIRSTINITLIST_NON_ZERO_BP)
#define EEP_GET_REPLACELIST_NON_ZERO(BLKIDX)    (((uint32)Eep_BlkProp_cas[BLKIDX].xNonZeroList_u8 & \
                                                  EEP_REPLACELIST_NON_ZERO_MSK)>>     \
                                                  EEP_REPLACELIST_NON_ZERO_BP)
                                            

                                           
/* Watchdog communication: This value defines the response time to 100.8ms.                       */
/* The value is the response time in usec.                                                        */
#define EEP_WD_RESPONSE_TIME 100800ul
#define EEP_WD_RESPONSE_WINDOW 5040ul

/* Watchdog communicatzion in shutdown: XOR tag for calculation answer, so the table with the     */
/* questions could be stored "scrambled" in the flash.                                            */
#define EEE_WD_ANSWER_XOR_TAG 0xFF

#define EEP_ALLOWED_NMB_RD_DEFECTED_BLKS 3
#define EEP_ALLOWED_NMB_WR_DEFECTED_BLKS 1

/*
 ***************************************************************************************************
 * Externals
 ***************************************************************************************************
 */
__PRAGMA_USE__eep__50ms_1s__constant__s32__START
extern const Eep_BlkProp_t      Eep_BlkProp_cas[];
extern const Eep_PdlFunctions_t Eep_PdlFunctions_cas[];
extern const Eep_PdlProcs_t     Eep_PdlProcs_cas[];
__PRAGMA_USE__eep__50ms_1s__constant__s32__END

__PRAGMA_USE__eep__50ms_1s__constant__x32__START
extern const uint32 Eep_adEepRam_cu32;
extern const uint32 Eep_adInitVal_cu32;
extern const uint32 Eep_adReplVal_cu32;
extern const uint32 Eep_adEnvram_cu32;
__PRAGMA_USE__eep__50ms_1s__constant__x32__END

__PRAGMA_USE__eep__50ms_1s__constant__x16__START
extern const uint16 Eep_numBlocks_cu16;
extern const uint16 Eep_numFirstInitBlks_cu16;
extern const uint16 Eep_xBlockLen_cu16;
extern const uint16 Eep_numAllBlocksAbs_cu16;
extern const uint8 Eep_MigProp_u8[];
__PRAGMA_USE__eep__50ms_1s__constant__x16__END

__PRAGMA_USE__eep__50ms_1s__constant__x8__START
extern const uint8  Eep_numPdl_cu8;
extern const bool   Eep_stDFlashUsed_cb;
__PRAGMA_USE__eep__50ms_1s__constant__x8__END

__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern uint8  Eep_ErasePerformed_u8;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END

__PRAGMA_USE__eep__50ms_1s__RAM__x16__START
extern uint16 Eep_numEnvRamLength;
__PRAGMA_USE__eep__50ms_1s__RAM__x16__END

__PRAGMA_USE__eep__50ms_1s__RAM__arr16__START
extern uint16 Eep_stBlk[];
__PRAGMA_USE__eep__50ms_1s__RAM__arr16__END

__PRAGMA_USE__eep__50ms_1s__RAM__arr32__START
extern uint32 Eep_BlkBuf_au32[];
__PRAGMA_USE__eep__50ms_1s__RAM__arr32__END

MEMLAY_USE_PROTRAM(extern uint32, Eep_numBlkCtr[]);

MEMLAY_USE_PROTRAM(extern uint8, Eep_errExtDiag_u8[]);
MEMLAY_USE_PROTRAM(extern uint8, Eep_AddMigInfo_u8[]);
MEMLAY_USE_PROTRAM(extern uint16, Eep_ctTimeToWrBlk_u16[]);
MEMLAY_USE_PROTRAM(extern uint16, Eep_WriteTimems);
MEMLAY_USE_PROTRAM(extern uint16, Eep_ReadTimeus);
MEMLAY_USE_PROTRAM(extern uint16, Eep_SectorChangeTimems);
MEMLAY_USE_PROTRAM(extern uint16, Eep_EraseTimems);
MEMLAY_USE_PROTRAM(extern uint32, Eep_TimeStart);
MEMLAY_USE_PROTRAM(extern uint16, Eep_WriteMaxTimems);
MEMLAY_USE_PROTRAM(extern uint16, Eep_ReadMaxTimeus);
MEMLAY_USE_PROTRAM(extern uint16, Eep_SectorChangeMaxTimems);
MEMLAY_USE_PROTRAM(extern uint16, Eep_EraseMaxTimems);
MEMLAY_USE_PROTRAM(extern uint8, Eep_MaxQueueOccupied);

MEMLAY_USE_ENVRAM(extern uint32, Eep_EnvRamInfo_u32);
MEMLAY_USE_ENVRAM(extern uint32, Eep_EnvRamHistMrk_u32);

__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern bool Eep_PostDrvWait_b;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END

__PRAGMA_USE__eep__50ms_1s__RAM__x32__START
extern uint32 Eep_xIniTimeus;
__PRAGMA_USE__eep__50ms_1s__RAM__x32__END

MEMLAY_USE_LABEL(extern uint32, __ENVRAM_START[]);
MEMLAY_USE_LABEL(extern uint32, __ENVRAM_SIZE[]);

MEMLAY_USE_PROTRAM(extern volatile Eep_EepRamInit_t, Eep_EepRamInit_e);
MEMLAY_USE_PROTRAM(extern volatile Eep_EnvRamInit_t, Eep_EnvRamInit_e);

MEMLAY_USE_PROTRAM(extern uint8, Eep_stBlockFail);
/* Error counters for read and write */
MEMLAY_USE_PROTRAM(extern uint8,Eep_errRd_u8);
MEMLAY_USE_PROTRAM(extern uint8, Eep_errWr_u8);
extern uint8 Eep_PreDrvFin_u8;                     /*To indicate the predrive is completed*/

__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern uint8 Eep_stMain;
extern uint8 Eep_errEnvram_u8;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END

__PRAGMA_USE__CODE__eep__LowSpeed__START
extern void Eep_StoreTimeSyncBlk (void);
extern bool Eep_StartScanningBlks (void);
extern void Eep_InitExtWdHandling(void);
extern void Eep_DoExtWdHandling (void);
__PRAGMA_USE__CODE__eep__LowSpeed__END

#ifdef EEP_USE_EXT_MASTER_LAYOUT
extern uint16 Eep_ExtMB_SpBlkBuf_au16[];
extern Eep_EXTMB_TOC_t  Eep_EXTMB_MasBlkTOC;
extern uint8  Eep_EXTMB_MasBlkBuf_au8[];
#endif

#ifdef FEE_USE_ADAPTER
extern uint8 Eep_FirstInitCompleted;
#endif

/*_EEPHAL_PROT_H*/
#endif
