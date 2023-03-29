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
 * $Filename__:eeebd_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RUO1KOR$
 * $Date______:10.12.2012$
 * $Class_____:SWHDR$
 * $Name______:eeebd_priv$
 * $Variant___:1.26.0$
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
 * 1.26.0; 3     10.12.2012 RUO1KOR
 *   Initialize Sector change and erase state when new request is processed
 * 
 * 1.26.0; 2     03.12.2012 RUO1KOR
 *   Testing and review changes for MC:EEP 1.26.0
 * 
 * 1.26.0; 1     31.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   9. Feature: Validation of block checksum after writing the block at the 
 *   block layer.
 * 
 * 1.26.0; 0     30.10.2012 RUO1KOR
 *   Updates for HWE platform release Nov 2012
 *   
 *   2. Feature: Introduction of Debug monitoring software.
 * 
 * 1.22.2; 2     22.03.2012 RUO1KOR
 *   RCMS00856078: Updates for the EEP platform release MC:EEP1.22.2
 *   
 *   1. RCMS00853844: Bugfix: Incorrect migration for blocks that has increased 
 *   security level
 *   
 *   Artus check
 * 
 * 1.22.2; 1     20.03.2012 RUO1KOR
 *   RCMS00856078: Updates for the EEP platform release MC:EEP 1.22.2
 *   
 *   Review changes
 *   
 *   1. RCMS00853844: Bugfix: Incorrect migration for blocks that has increased 
 *   security level
 * 
 * 1.22.2; 0     16.03.2012 RUO1KOR
 *   RCMS00856078: Updates for the EEP platform release MC:EEP 1.22.2
 *   
 *   1. RCMS00853844: Bugfix: Incorrect migration for blocks that has increased 
 *   security level
 * 
 * 1.22.0; 0     02.11.2011 SUU4KOR
 *   Updates for the HWE platform release for Nov 2011:
 *   7. New Feature: Deactivate storing of the EEP blocks via calibration (and 
 *   configuration).
 * 
 * 1.17.1; 0     24.09.2010 HQ82FE
 *   .
 * 
 * 1.17.0; 1     30.08.2010 HQ82FE
 *   These files were changed for bugfix
 *   
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EEEBD_PRIV_H
#define _EEEBD_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                    EEEBD Eep emulation block device
 *
 * \scope             INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* Global variables of layer EEEBD */
typedef struct
{
    uint16 xFirstPage_u16;   /* Page index of first page with reading data */
    uint16 xAbsFirstPage_u16;/* same tne xFirstPage_u16 if RdPos = 0 --> based on page of first copy */
    uint16 xNumBytes_u16;    /* number of user bytes which should be written, necessary to "Detect" Marker Write Order*/
    uint16 xScBlkIdx_u16;    /* Block index in sector change function */
    uint16 xRdPageIdx_u16;   /* Physical first page index of block who should be read */
    uint16 xWrPageIdx_u16;   /* Physical first page index of block who should be written only during migration relevant */
    uint8  xReadState_u8;    /* State in read state machine */
    uint8  xWriteState_u8;   /* State in write state machine */
    uint8  xSectChgState_u8; /* State in sector change state machine */
    uint8  xEraseState_u8;   /* State in sector erase state machine */
    uint8  xBlkCpyState_u8;  /* State in block copy state machine */
    uint8  xSubState_u8;     /* State of sub state machines */
    uint8  xSrtOfs_u8;       /* Page internal offset to start postion of reading data */
    uint8  xEndOfs_u8;       /* Page internal offset to end position of reading data */
    uint8  xMltBlkCtr_u8;    /* Counter for multiple saved blocks (MltBlk) */
    uint8  xRdPosMltBlk_u8;  /* Read position in a multiple saved block. This position will contain
                                with current data who will be read. */
    uint8  xPageCtr_u8;      /* Page counter, to count pages in different cases */
    uint8  xNumPages_u8;     /* Number of pages pages which includes reading data */
    uint8  xNumChgPages_u8;  /* Counts number of changed page in a block who need more than one
                                page. Is used in write function */
    uint8  xOrdStat_u8;      /* Order status of orders in layer EEEPDD */
    uint8  numTocSrtEntry_u8;/* Number of start entry in table of contents */
    uint8  numTocEndEntry_u8;/* Number of end entry in table of contents */
    uint8  numMigBlks_u8;    /* Number of blocks in table of contents for migration function */
    uint8  numMigSecLevel_u8;/* Security level from old layout used in migration function */
    uint8  numSecChngeRespBlk_u8; /* block which is responsible for starting the sector change, the new data is taken */
    uint8 xInitializeState_u8;   /*To check if the erase and sector change states needs to be initialized*/
    bool   stActOrder_b;     /* Shows if a read or write order is active */
    bool   stActErase_b;     /* Erase sequence is running, suppress normal read/write orders */
    bool   stErSequence_b;   /* Is true if a erase sequence is running */
    bool   stWrSucceeded_b;  /* A block of a multiple saved block was written without an error */
    uint8* adNewBlkData_pu8; /* pointer to the data of the block, which was responsible for the sector change */
    uint8* adBlkCpyData_pu8; /* Pointer to address of data buffer in block copy function */
    uint16 xPageVer_u16;     /* Currently written page version from layer EEEPDD */
    uint16 xRdPageVer_u16;   /* Currently read page version from layer EEEPDD (Only last Headerpage)*/
    uint16 xHdPageVer_u16;   /* Headerpage version */
    uint16 xRdPageVerSecChgRepBlk_u16;   /* Currently read page version from layer EEEPDD (Only last Headerpage)*/
    uint8  xBlkState_au8[3]; /* Block states */
    uint8  xPrepDone_u8;     /* preparation of blockbuffer still done for the current order */
    uint32 xBlkCtr_au32[3];  /* Block counters */
    uint32 xBlkCtrMax_u32;   /* Maximum value of block counter */
    uint32 xBlkCtrSecChng_u32; /* block counter of the block which was responsible for the sector change */
    uint32 xBlkChkSum_u32;   /* Block check sum */
    uint32 xChksum_u32;      /* Calculated block checksum */
    uint32 adEraseSect_u32;  /* Base address of sector who should be erased from EEE manager */
    uint32 ctEraseTime_u32;  /* Used time of a sector erase */
    uint32 MaxMigBlkCtr_u32; /* To hold maximum block counter (block version) among the multiple security copies of the block in the old layout (used during migration use case only). Required to ensure that only the latest and highest block version copy is transferred from old layout to new layout. */
    uint16 xBlkIdx_u16;      /* To hold the block index of the block requested for write */
    uint8 xMigPosMltBlk_u8;  /* used to store the read position of the multiple security blocks during migration (indexing for old layout) */
    uint8 ctrBlkWrAttempts_u8;  /* To count number of write attempts at the block layer*/
} Eeebd_GlobVars_t;


/* Block properties of layer EEEBD */
typedef struct
{
    uint16 stBlkFlags_u16;   /* Block flags: bit-coded information for each block */
    uint16 xPageIdx_u16;     /* Page index of the first page of the block */
    uint8  nofPages_u8;      /* Number of pages of the block */
    uint8  xPageOfs_u8;      /* Page internal offset to begin of block header */
    uint16 adOfsInitVal_u16; /* Offset to initialization values for migration function */
    uint16 xBlkIdent_u16;    /* Block indentification hash value, used in migration function */
    uint16 xConIdent_u16;    /* Block content identification hash value, for migration function */
} Eeebd_BlkProp_t;


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Size of page buffer in bytes */
#define EEEBD_LENGTH_PAGEBUFFER  120


/* Definitions and macros to get informations from the block descripbtion flags (stBlkFlags_u16) */

/*
 |  15 |  14 |  13 |  12 |  11 |  10 |  9  |  8  |  7  |  6  |  5  |  4  |  3  |  2  |  1  |  0  |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 |     |     |     |  de-|     |Fact.|Spec.|Blk  |Blk  |     |     |Type |     |     |     |     |
 | not | not | not |act- |re-  |data |first|head.|head.| Migration | of  |Hist | Security  | Blk |
 | used| used| used|ivate|init.|block|init.|1or2 |data |   values  |Mig. |func |   level   |type |
 |     |     |     |block|     |     |handl|pages|page |     |     |func |     |     |     |     |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

/* Defines for macros */
#define EEEBD_REINIT_CONFIGURED     0ul
#define EEEBD_REINIT_NOT_CONFIGURED 1ul

/* Defines for macros */
#define EEEBD_DEACTIVATION_DISABLED 0ul
#define EEEBD_DEACTIVATION_ENABLED  1ul


/* Bitmasks to get the block flags */
#define EEEBD_BLKTYP_MSK         0x0001ul
#define EEEBD_SECURITY_MSK       0x0006ul
#define EEEBD_HIST_FUNC_MSK      0x0008ul
#define EEEBD_MIG_FUNC_MSK       0x0010ul
#define EEEBD_MIG_VALS_MSK       0x0060ul
#define EEEBD_HEADDATA_MSK       0x0080ul
#define EEEBD_HEADPAGES_MSK      0x0100ul
#define EEEBD_FIRSTINIT_MSK      0x0200ul
#define EEEBD_FACTORY_MSK        0x0400ul
#define EEEBD_REINIT_MSK         0x0800ul
#define EEEBD_DEACTIVATE_MSK     0x1000ul

/* Position of the bits inside the block flags */
#define EEEBD_BLKTYP_BP          0ul
#define EEEBD_SECURITY_BP        1ul
#define EEEBD_HIST_FUNC_BP       3ul
#define EEEBD_MIG_FUNC_BP        4ul
#define EEEBD_MIG_VALS_BP        5ul
#define EEEBD_HEADDATA_BP        7ul
#define EEEBD_HEADPAGES_BP       8ul
#define EEEBD_FIRSTINIT_BP       9ul
#define EEEBD_FACTORY_BP        10ul
#define EEEBD_REINIT_BP         11ul
#define EEEBD_DEACTIVATE_BP     12ul


/* Macro to get the block type */
#define EEEBD_GET_BLOCK_TYPE     ((EEEBD_GET_BLKFLAGS & EEEBD_BLKTYP_MSK) >> EEEBD_BLKTYP_BP)

/* Macro to get the security level */
#define EEEBD_GET_SECURITY_LEVEL ((EEEBD_GET_BLKFLAGS & EEEBD_SECURITY_MSK) >> EEEBD_SECURITY_BP)

/* Macro to check if history function should be used */
#define EEEBD_GET_HISTORY_FUNC   ((EEEBD_GET_BLKFLAGS & EEEBD_HIST_FUNC_MSK) >> EEEBD_HIST_FUNC_BP)

/* Macro to check if migration function should be used */
#define EEEBD_GET_MIGRATION_FUNC ((EEEBD_GET_BLKFLAGS & EEEBD_MIG_FUNC_MSK) >> EEEBD_MIG_FUNC_BP)

/* Macro to check which values should be used in migration function */
#define EEEBD_GET_MIGRATION_VALS ((EEEBD_GET_BLKFLAGS & EEEBD_MIG_VALS_MSK) >> EEEBD_MIG_VALS_BP)

/* Macro to check if block header is within a page with block data */
#define EEEBD_GET_HEADINPAGE     ((EEEBD_GET_BLKFLAGS & EEEBD_HEADDATA_MSK) >> EEEBD_HEADDATA_BP)

/* Macro to check if block header in separate pages needs one or two pages */
#define EEEBD_GET_NUMHEADPAGES   ((EEEBD_GET_BLKFLAGS & EEEBD_HEADPAGES_MSK) >> EEEBD_HEADPAGES_BP)

/* Macro to check if special first initialization handling must be used */
#define EEEBD_GET_FIRSTINITHNDLG ((EEEBD_GET_BLKFLAGS & EEEBD_FIRSTINIT_MSK) >> EEEBD_FIRSTINIT_BP)

/* Macro to check if block is factory data block */
#define EEEBD_GET_FACTORYBLOCK   ((EEEBD_GET_BLKFLAGS & EEEBD_FACTORY_MSK) >> EEEBD_FACTORY_BP)

/* Macro to check if block is configured for reinitialization */
#define EEEBD_GET_REINITHNDLG    ((EEEBD_GET_BLKFLAGS & EEEBD_REINIT_MSK) >> EEEBD_REINIT_BP)

/* Macro to check if block is configured for reinitialization */
#define EEEBD_GET_DEACTIVATE(xBlkIdx_u16)    ((Eeebd_BlkProp_cas[xBlkIdx_u16].stBlkFlags_u16 & EEEBD_DEACTIVATE_MSK) >> EEEBD_DEACTIVATE_BP)

/* Macros to get parts of the block property table ************************************************/

/* Macro delivers the bitfield with the block flags */
#define EEEBD_GET_BLKFLAGS       ((uint32)Eeebd_BlkProp_ps->stBlkFlags_u16)

/* Macro delivers the PageIndex  */
#define EEEBD_GET_PAGEIDX        (Eeebd_BlkProp_ps->xPageIdx_u16)

/* Macro delivers the number of pages of a block */
#define EEEBD_GET_NOFPAGES       (Eeebd_BlkProp_ps->nofPages_u8)

/* Macro delivers the page internal offset to the block header  */
/* This offset is allways divisible with 4 (checked by EEE configuration script). */
#define EEEBD_GET_PAGEOFS        ((uint32)Eeebd_BlkProp_ps->xPageOfs_u8)

/* Macro delievers offset in init value lists */
#define EEEBD_GET_INITVALOFS     ((uint32)Eeebd_BlkProp_ps->adOfsInitVal_u16)

/* Macro delivers the block ident hash number */
#define EEEBD_GET_BLKIDT         (Eeebd_BlkProp_ps->xBlkIdent_u16)

/* Macro delivers the content ident hash number */
#define EEEBD_GET_CONTENTIDT     (Eeebd_BlkProp_ps->xConIdent_u16)


/* Derived macros *********************************************************************************/

/* Macro gets number of data pages */
#define EEEBD_GET_NUMDATAPAGES     (EEEBD_GET_NOFPAGES - (uint8)EEEBD_GET_HEADINPAGE -  \
                                                         (uint8)EEEBD_GET_NUMHEADPAGES)

/* Macro to calculate length of a block (32 bit aligned) */
#define EEEBD_CALC_BLK_LENGTH      (((EEEBD_GET_NUMDATAPAGES - 1) * EEEBD_LENGTH_PAGEBUFFER) + \
                                    (uint16)EEEBD_GET_PAGEOFS)

/* Macro to calculate number of pages of a block, considering multiple saved blocks */
#define EEEBD_GET_NOFPAGES_MLTBLK  ((uint16)((uint32)EEEBD_GET_NOFPAGES * EEEBD_GET_SECURITY_LEVEL))


/* Macros for read and write state machine ********************************************************/

/* Macro to get page index of first page of a block, depending to a counter  */
/* for multiple stored blocks                                                */
/* There is a distinction between the block from which data can be read and  */
/* a block in which data can be written. This is mainly relevant with        */
/* multiple saved blocks.                                                    */
#define EEEBD_GET_RDSRTPAGEIDX     (Eeebd_GlobVars_s.xRdPageIdx_u16 +     \
                                    (EEEBD_GET_NOFPAGES * Eeebd_GlobVars_s.xRdPosMltBlk_u8))

#define EEEBD_GET_WRSRTPAGEIDX     (Eeebd_GlobVars_s.xWrPageIdx_u16 +     \
                                    (EEEBD_GET_NOFPAGES * Eeebd_GlobVars_s.xMigPosMltBlk_u8))


/* Macro to get page index of page with block header, depending to a counter */
/* for multiple stored blocks                                                */
/* There is a distinction between the block from which data can be read and  */
/* a block in which data can be written. This is mainly relevant with        */
/* multiple saved blocks.                                                    */
#define EEEBD_GET_RDBLKHEADPAGEIDX (Eeebd_GlobVars_s.xRdPageIdx_u16 - 1 + \
                                    ((EEEBD_GET_NOFPAGES * (Eeebd_GlobVars_s.xRdPosMltBlk_u8 + 1))))

#define EEEBD_GET_WRBLKHEADPAGEIDX (Eeebd_GlobVars_s.xWrPageIdx_u16 - 1 + \
                                    ((EEEBD_GET_NOFPAGES * (Eeebd_GlobVars_s.xMigPosMltBlk_u8 + 1))))


/* Macro to get page index of a page with block data, depending to a counter */
/* for multiple stored blocks and a page counter.                            */
/* There is a distinction between the block from which data can be read and  */
/* a block in which data can be written. This is mainly relevant with        */
/* multiple saved blocks.                                                    */
#define EEEBD_GET_RDBLKDATAPAGEIDX (EEEBD_GET_RDSRTPAGEIDX + Eeebd_GlobVars_s.xPageCtr_u8)

#define EEEBD_GET_WRBLKDATAPAGEIDX (EEEBD_GET_WRSRTPAGEIDX + Eeebd_GlobVars_s.xPageCtr_u8)

/* same as EEEBD_GET_RDBLKDATAPAGEIDX but calculated, based on POS0 to detect which pages/copies have changed data
   this can be described as relative changed pages, independent of the copy */
#define EEEBD_GET_RDBLKDATAPAGEIDX_RDPOS0 (Eeebd_GlobVars_s.xRdPageIdx_u16 + Eeebd_GlobVars_s.xPageCtr_u8)

/* Macro to get number of pages in bytes and 32-bit alligned */
#define EEEBD_GET_NOFPAGES32       (((((uint32)EEEBD_GET_NOFPAGES - 1) * 2ul) + 3ul) & 0xFFFCul)

/* Macro to access entry of array Eeebd_PageBuf_au32 */
#define EEEBD_GET_ARRAYOFS         (EEEBD_GET_PAGEOFS >> 2ul)


/* Macros to get block header information from data buffer ****************************************/

/* Macro deliveres the block version counter */
#define EEEBD_GET_BLKVERCTR      (Eeebd_PageBuf_au32[EEEBD_GET_ARRAYOFS])
#define EEEBD_SET_BLKVERCTR      EEEBD_GET_BLKVERCTR

/* Macro deliveres the block checksum */
#define EEEBD_GET_BLKCHKSUM      (Eeebd_PageBuf_au32[EEEBD_GET_ARRAYOFS + 1ul])
#define EEEBD_SET_BLKCHKSUM      EEEBD_GET_BLKCHKSUM

/* Macro to get page version of a block */
#define EEEBD_GET_PAGEVERSION    (((uint16*)Eeebd_PageVerTabBuf_au32)[Eeebd_GlobVars_s.xPageCtr_u8])
#define EEEBD_SET_PAGEVERSION    EEEBD_GET_PAGEVERSION


/* Macros to get data from global EEEBD structure *************************************************/

/* Macro to save block version counter of a block, depending to a counter */
/* for multiple stored blocks                                             */
#define EEEBD_BLKVERCTR  (Eeebd_GlobVars_s.xBlkCtr_au32[Eeebd_GlobVars_s.xRdPosMltBlk_u8])

/* Macro to save block checksum of a block, depending to a counter */
/* for multiple stored blocks                                      */
#define EEEBD_BLKCHKSUM  (Eeebd_GlobVars_s.xBlkChkSum_u32)

/* Macro to save block state of a block, depending to a counter */
/* for multiple stored blocks                                   */
#define EEEBD_BLKSTATE   (Eeebd_GlobVars_s.xBlkState_au8[Eeebd_GlobVars_s.xRdPosMltBlk_u8])

/* Macro to increment read position of a multiple saved block */
#define EEEBD_INC_RDPOS_MLTBLK  (Eeebd_GlobVars_s.xRdPosMltBlk_u8 =        \
                                 (Eeebd_GlobVars_s.xRdPosMltBlk_u8 <       \
                                  ((uint8)EEEBD_GET_SECURITY_LEVEL - 1))   \
                                  ? (Eeebd_GlobVars_s.xRdPosMltBlk_u8 + 1) \
                                  : 0)

/* Macro to increment write position of a multiple saved block during Migration (indexing for new layout) */
#define EEEBD_INC_MIGPOS_MLTBLK  (Eeebd_GlobVars_s.xMigPosMltBlk_u8 =        \
                                 (Eeebd_GlobVars_s.xMigPosMltBlk_u8 <       \
                                  ((uint8)EEEBD_GET_SECURITY_LEVEL - 1))   \
                                  ? (Eeebd_GlobVars_s.xMigPosMltBlk_u8 + 1) \
                                  : 0)



/* Macro and defines for table of contents ********************************************************/

/* Maximum length of table of contents */
#define EEEBD_TOCLENGTH        EEEBD_LENGTH_PAGEBUFFER

/* Size of a entry in table of contents */
#define EEEBD_TOCENTRYSIZE     8

/* Size of header of table of contents */
#define EEEBD_TOCHEADERSIZE    8

/* Macro to calculate number of entries in first page of table of contents */
/* ((EEEBD_TOCLENGTH - EEEBD_TOCHEADERSIZE) / EEEBD_TOCENTRYSIZE) */
#define EEEBD_NUMENTRIES_1ST   ((EEEBD_TOCLENGTH - EEEBD_TOCHEADERSIZE) / EEEBD_TOCENTRYSIZE)

/* Macro to calculate number of entries in next pages of table of contents */
#define EEEBD_NUMENTRIES_NXT   (EEEBD_TOCLENGTH / EEEBD_TOCENTRYSIZE)

/* Bit positions in xSavPos_u16 of table of contents */
#define EEEBD_TOC_PAGEIDX_BP   0
#define EEEBD_TOC_PAGEOFS_BP   9
#define EEEBD_TOC_SECLEV_BP    14

/* Macro calculates content of xSavPos_u16 of table of contents */
#define EEEBD_CALC_SAVEPOS     (EEEBD_GET_PAGEIDX | \
                                (((uint16)EEEBD_GET_SECURITY_LEVEL) << EEEBD_TOC_SECLEV_BP))

/* Macro to calulate number of toc pages */
/*  1-14 blocks -> 0 toc pages           */
/* 15-29 blocks -> 1 toc pages           */
/* 30-44 blocks -> 2 toc pages           */
/*   ...                                 */
#define EEEBD_CALC_NUMTOCPAGES ((((Eeebd_numBlocks_cu8 + 1) % EEEBD_NUMENTRIES_NXT) > 0) \
                                ? (((Eeebd_numBlocks_cu8 * EEEBD_TOCENTRYSIZE) + \
                                     EEEBD_TOCHEADERSIZE) \
                                    / EEEBD_TOCLENGTH)    \
                                : ((((Eeebd_numBlocks_cu8 * EEEBD_TOCENTRYSIZE) + \
                                     EEEBD_TOCHEADERSIZE) \
                                    / EEEBD_TOCLENGTH) - 1) )

/* Macro which indicates that the block should be rewritten again*/
#define EEEBD_RETRY_BLOCK_WRITE 0xFF

/*Maximum number of time the block should be written*/
#define EEEBD_MAXWRATTEMPTS 3

/*Macro to indicate if the erase and Sector change states needs to be initialized*/
#define EEEBD_INITIALIZE_STATE 0x0
#define EEEBD_INITIALIZE_STATE_COMPLETED 0xFF

/*
 ***************************************************************************************************
 * Enumerators
 ***************************************************************************************************
 */

/* Validity of a block */
typedef enum
{
    EEEBD_BLKSTATE_CURRENT,
    EEEBD_BLKSTATE_PREVIOUS,
    EEEBD_BLKSTATE_INCONSISTENT,
    EEEBD_BLKSTATE_INVALID
} Eeebd_BlkValidity_t;


/* States in block read state machine */
typedef enum
{
    EEEBD_RD_STATE_STARTUP,
    EEEBD_RD_STATE_CHKBLK,
    EEEBD_RD_STATE_RDDATA
} Eeebd_RdStates_t;


/* States in block write state machine */
typedef enum
{
    EEEBD_WR_STATE_STARTUP,
    EEEBD_WR_STATE_SECTCHG,
    EEEBD_WR_STATE_CHKBLK,
    EEEBD_WR_STATE_PREPDATA,
    EEEBD_WR_STATE_WRDATA_SP,
    EEEBD_WR_STATE_WRDATA_MP,
    EEEBD_WR_STATE_VERIFY_BLOCK,
    EEEBD_WR_STATE_VERIFY_CHKBLK
} Eeebd_WrStates_t;


/* States in write table of contents state machine */
typedef enum
{
    EEEBD_WRTOC_STATE_STARTUP,
    EEEBD_WRTOC_STATE_SAVETOC,
    EEEBD_WRTOC_STATE_SAVETOC_FINISH,
    EEEBD_WRTOC_STATE_FINISH
} Eeebd_WrTocStates_t;


/* States in erase sector state machine */
typedef enum
{
    EEEBD_ERASE_STATE_STARTUP,
    EEEBD_ERASE_STATE_ERASING,
    EEEBD_ERASE_STATE_WRMARKER,
    EEEBD_ERASE_STATE_FINISH
} Eeebd_EraseStates_t;


/* States in write marker state machine */
typedef enum
{
    EEEBD_WRMARK_STATE_SAVEMARK,
    EEEBD_WRMARK_STATE_FINISH
} Eeebd_WrMarkerStates_t;


/* States in block read state machine */
typedef enum
{
    EEEBD_DECISION_SEC_LEVEL_1 = 1,
    EEEBD_DECISION_SEC_LEVEL_2 = 2,
    EEEBD_DECISION_SEC_LEVEL_3 = 3
} Eeebd_SecLevel_t;


/* Function return values of subordinate EEEBD functions */
typedef enum
{
    EEEBD_STATE_FINISHED,
    EEEBD_STATE_CALLAGAIN,
    EEEBD_STATE_INTERNAL_ERROR,
    EEEBD_STATE_SECTOR_FULL,
    EEEBD_STATE_FAILED
} Eeebd_StFuncRetValues_t;


/* States in state machine to check a block */
typedef enum
{
    EEEBD_CHKBLK_LOAD_BLK_PVT,
    EEEBD_CHKBLK_CHECK_BLK_CS,
    EEEBD_CHKBLK_CHECK_MLTBLK,
    EEEBD_CHKBLK_RELOAD_BLK_PVT
} Eeebd_StateChkBlk_t;


/* States in state machine to write a block */
typedef enum
{
    EEEBD_WRITE_SGLPAGEBLK,
    EEEBD_WRITE_SGLPAGEBLK_FINISH,
    EEEBD_WRITE_MULTIPAGEBLK,
    EEEBD_WRITE_MULTIPAGEBLK_FINISH,
    EEEBD_WRITE_HEADPAGE,
    EEEBD_WRITE_HEADPAGE_FINISH,
    EEEBD_WRITE_CHECKMSB,
    EEEBD_WRITE_RELOAD_BLK_PVT
} Eeebd_StateWrBlk_t;


/* States in state machine to prepare block data */
typedef enum
{
    EEEBD_PREPARE_SHIFTDATA,
    EEEBD_PREPARE_FILLDATA,
    EEEBD_PREPARE_FINISH,
    EEEBD_PREPARE_RELOAD_BLK_PVT
} Eeebd_StatePrepare_t;


/* States in state machine of sector change */
typedef enum
{
    EEEBD_SC_STATE_STARTUP,
    EEEBD_SC_STATE_ENTER,
    EEEBD_SC_STATE_ERASE,
    EEEBD_SC_STATE_BLKCPY,
    EEEBD_SC_STATE_FINISH,
    EEEBD_SC_STATE_WRTOC
} Eeebd_SectorChangeStates_t;


/* States in state machine in sector change block copy function */
typedef enum
{
    EEEBD_BLKCPY_STATE_STARTUP,
    EEEBD_BLKCPY_STATE_MIGRATION,
    EEEBD_BLKCPY_STATE_PREPAREINIT,
    EEEBD_BLKCPY_STATE_PREPARECHECK,
    EEEBD_BLKCPY_STATE_LOAD_BLK_PVT,
    EEEBD_BLKCPY_STATE_CHECK_BLK_CS,
    EEEBD_BLKCPY_STATE_PREPAREWRDATA,
    EEEBD_BLKCPY_STATE_WRDATA_SP,
    EEEBD_BLKCPY_STATE_WRDATA_MP,
    EEEBD_BLKCPY_STATE_CHECKMSB
} Eeebd_StateDTrans_t;


/* Possible values for migration function */
typedef enum
{
    EEEBD_MIGRATION_NONE            = 0,
    EEEBD_MIGRATION_FIRSTINITVALUES = 1,
    EEEBD_MIGRATION_REPLACEVALUES   = 2,
    EEEBD_MIGRATION_DEFAULTVALUES   = 3
} Eeebd_MigValues_t;


/*
 ***************************************************************************************************
 * Externals
 ***************************************************************************************************
 */

/* External constants */
__PRAGMA_USE__eep__50ms_1s__constant__s32__START
extern const Eeebd_BlkProp_t Eeebd_BlkProp_cas[];
__PRAGMA_USE__eep__50ms_1s__constant__s32__END

__PRAGMA_USE__eep__50ms_1s__constant__x8__START
extern const uint8  Eeebd_LengthPVTBuf_cu8;
extern const uint8  Eeebd_numBlocks_cu8;
extern const uint8  Eeebd_numBlocksAll_cu8;
__PRAGMA_USE__eep__50ms_1s__constant__x8__END

__PRAGMA_USE__eep__50ms_1s__constant__x32__START
extern const uint32 Eeebd_xHashComplete_cu32;
__PRAGMA_USE__eep__50ms_1s__constant__x32__END

__PRAGMA_USE__eep__50ms_1s__constant__x16__START
extern const uint16 Eeebd_xBaseBlkIdx_cu16;
__PRAGMA_USE__eep__50ms_1s__constant__x16__END



/* External global variables */
__PRAGMA_USE__eep__50ms_1s__RAM__x32__START
extern Eeebd_BlkProp_t const * Eeebd_BlkProp_ps;
__PRAGMA_USE__eep__50ms_1s__RAM__x32__END

__PRAGMA_USE__eep__50ms_1s__RAM__arr32__START
extern uint32 Eeebd_PageBuf_au32[];
extern uint32 Eeebd_PageVerTabBuf_au32[];
__PRAGMA_USE__eep__50ms_1s__RAM__arr32__END

__PRAGMA_USE__eep__50ms_1s__RAM__s16__START
extern Eeebd_BlkProp_t   Eeebd_BlkPropEnvram_s;
__PRAGMA_USE__eep__50ms_1s__RAM__s16__END

__PRAGMA_USE__eep__50ms_1s__RAM__s32__START
extern Eeebd_GlobVars_t  Eeebd_GlobVars_s;
__PRAGMA_USE__eep__50ms_1s__RAM__s32__END

/* External function prototypes */
__PRAGMA_USE__CODE__eep__LowSpeed__START
extern void Eeebd_CalcEnvramProp(uint16 xBlkIdx_u16);

extern void Eeebd_SubStIni(uint16 xBlkIdx_u16);

extern Eeebd_StFuncRetValues_t Eeebd_StateChkBlkProlog(void);
extern Eeebd_StFuncRetValues_t Eeebd_StateChkBlk(uint16 xOfs_u16, uint16 numBytes_u16);

extern Eeebd_StFuncRetValues_t Eeebd_SubStLoadPVT(void);
extern Eeebd_StFuncRetValues_t Eeebd_SubStChkBlkCs(void);
extern Eeebd_StFuncRetValues_t Eeebd_SubStDecision(uint16 xOfs_u16, uint16 numBytes_u16);
extern Eeebd_StFuncRetValues_t Eeebd_SubStRdDataProlog(void);
extern Eeebd_StFuncRetValues_t Eeebd_SubStRdData(uint16 numBytes_u16, uint8* xRdBuf_pu8);

extern Eeebd_StFuncRetValues_t Eeebd_StateWrDataSPProlog(void);
extern Eeebd_StFuncRetValues_t Eeebd_StateWrDataSP(uint16 xBlkIdx_u16, uint8* xWrBuf_pu8);
extern Eeebd_StFuncRetValues_t Eeebd_StateWrDataMPProlog(const uint8* xWrBuf_pu8);
extern Eeebd_StFuncRetValues_t Eeebd_StateWrDataMP(uint16 xBlkIdx_u16, uint8* xWrBuf_pu8);
extern void                    Eeebd_StateWriteTocProlog(void);
extern Eeebd_StFuncRetValues_t Eeebd_StateWriteToc(void);

extern Eeebd_StFuncRetValues_t Eeebd_StateSectChg(void);
extern Eeebd_StFuncRetValues_t Eeebd_SectChgIni(void);

extern void                    Eeebd_StateBlkCopyProlog(void);
extern Eeebd_StFuncRetValues_t Eeebd_StateBlkCopy(uint16 xBlkIdx_u16);

extern void                    Eeebd_StatePrepDataProlog(uint16 xOfs_u16, uint16 numBytes_u16);
extern Eeebd_StFuncRetValues_t Eeebd_StatePrepData(uint16 xBlkIdx_u16, uint16 numBytes_u16,
                                                   uint8* xWrBuf_pu8);
extern void Eeebd_FirstinitStart(void);
extern void Eeebd_FirstinitEnd(void);

extern Eeebd_StFuncRetValues_t Eeebd_SubStSearchTocEntry(Eeebd_TocEntry_t* xTocEntry_s);
extern Eeebd_StFuncRetValues_t Eeebd_SubStSearchTocEntryProlog(void);

extern Eeebd_StFuncRetValues_t Eeebd_StateWriteMarker1(void);
extern Eeebd_StFuncRetValues_t Eeebd_StateWriteMarker1Prolog(void);
extern Eeebd_StFuncRetValues_t Eeebd_StateWriteMarker2(void);
extern Eeebd_StFuncRetValues_t Eeebd_StateWriteMarker2Prolog(void);

extern Eeebd_StFuncRetValues_t Eeebd_EraseSequence(void);
__PRAGMA_USE__CODE__eep__LowSpeed__END
/*_EEEBD_PRIV_H*/
#endif
