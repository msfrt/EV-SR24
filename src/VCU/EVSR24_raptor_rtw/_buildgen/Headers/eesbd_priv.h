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
 * $Filename__:eesbd_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RUO1KOR$ 
 * $Date______:14.10.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:eesbd_priv$ 
 * $Variant___:1.28.1$ 
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
 * 1.28.1; 0     14.10.2013 RUO1KOR
 *   EEP BugFix: Repair Multiple Stored block Not Working For Serial EEPROM
 *   
 *   Update to fix testfindings.
 * 
 * 1.16.0; 0     14.04.2010 MZT2FE
 *   B_EEP.16.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EESBD_PRIV_H
#define _EESBD_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                    EESBD -- block device for external serial EEPROM
 *
 * \scope             INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */


/* Global variables of layer EESBD */
typedef struct
{
    uint16 xFirstPage_u16;   /* Page index of first page with reading data */
    uint16 xRdPageIdx_u16;   /* Physical first page index of block that should be read */
    uint8  xReadState_u8;    /* State in read state machine */
    uint8  xWriteState_u8;   /* State in write state machine */
    uint8  xBlkCpyState_u8;  /* State in block copy state machine */
    uint8  xSubState_u8;     /* State of sub state machines */
    uint8  xSrtOfs_u8;       /* Page internal offset to start position of reading data */
    uint8  xEndOfs_u8;       /* Page internal offset to end position of reading data */
    uint8  xMltBlkCtr_u8;    /* Counter for multiple saved blocks (MltBlk) */
    uint8  xRdPosMltBlk_u8;  /* Read position in a multiple saved block. This position will contain
                                the current data which should be read. */
    uint8  xWrPosMltBlk_u8;  /* Write position in a multiple saved block. This block can be over-
                                written. */
    uint8  xPageCtr_u8;      /* Page counter, to count pages in different cases */
    uint8  xNumPages_u8;     /* Number of pages containing reading data */
    uint8  xNumChgPages_u8;  /* Counts number of changed pages in a block which needs more than one
                                page. It is used in write function */
    uint8  xOrdStat_u8;      /* Status of orders returned from layer EESPDD */
    uint8  xBlkState_au8[3]; /* Block status */
    uint32 xBlkCtr_au32[3];  /* Block counters */
    uint32 xBlkChkSum_u32;   /* Block check sum */
    uint32 xChksum_u32;      /* Calculated block checksum */
	bool xRepairActive_b;    /* To check if the block is written only to repair the Msb*/
} Eesbd_GlobVars_t;


/**
  ***********************************************************************
  Block properties of layer EESBD icluding block flags, first page index,
  number of pages within block, offset of the header
  ***********************************************************************
  */

typedef struct
{
    uint16 stBlkFlags_u16;   /* Block flags: bit-coded information for each block */
    uint16 xPageIdx_u16;     /* Page index of the first page of the block */
    uint8  nofPages_u8;      /* Number of pages of the block */
    uint8  xPageOfs_u8;      /* Page internal offset to begin of block header */
} Eesbd_BlkProp_t;

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define EESBD_START_CHECKSUM     0x0ul
/* Definitions and macros to get informations from the block descripbtion flags (stBlkFlags_u16) */

/*
 |  15 |  14 |  13 |  12 |  11 |  10 |  9  |  8  |  7  |  6  |  5  |  4  |  3  |  2  |  1  |  0  |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
 |     |     |     |     |     |Fact.|Spec.|     |Blk  |     |     |     |     |     |     |     |
 | not | not | not | not | not |data |first| not |head.| not | not | not | not | Security  | Blk |
 | used| used| used| used| used|block|init.| used|data | used| used| used| used|   level   |type |
 |     |     |     |     |     |     |handl|     |page |     |     |     |     |     |     |     |
 +-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
*/

/* Bitmasks to get the block flags */
#define EESBD_BLKTYP_MSK         0x0001ul
#define EESBD_SECURITY_MSK       0x0006ul
#define EESBD_HEADDATA_MSK       0x0080ul
#define EESBD_FIRSTINIT_MSK      0x0200ul
#define EESBD_FACTORY_MSK        0x0400ul

/* Position of the bits inside the block flags */
#define EESBD_BLKTYP_BP          0ul
#define EESBD_SECURITY_BP        1ul
#define EESBD_HEADDATA_BP        7ul
#define EESBD_FIRSTINIT_BP       9ul
#define EESBD_FACTORY_BP        10ul

/* Macro to get the block type */
#define EESBD_GET_BLOCK_TYPE     ((EESBD_GET_BLKFLAGS & EESBD_BLKTYP_MSK) >> EESBD_BLKTYP_BP)
/* Macro to get the security level */
#define EESBD_GET_SECURITY_LEVEL ((EESBD_GET_BLKFLAGS & EESBD_SECURITY_MSK) >> EESBD_SECURITY_BP)

/* Macro to check if block header is within a page with block data */
#define EESBD_GET_HEADINPAGE     ((EESBD_GET_BLKFLAGS & EESBD_HEADDATA_MSK) >> EESBD_HEADDATA_BP)
/* Macro to check if special first initialization handling must be used */
#define EESBD_GET_FIRSTINITHNDLG ((EESBD_GET_BLKFLAGS & EESBD_FIRSTINIT_MSK) >> EESBD_FIRSTINIT_BP)

/* Macro to check if block is factory data block */
#define EESBD_GET_FACTORYBLOCK   ((EESBD_GET_BLKFLAGS & EESBD_FACTORY_MSK) >> EESBD_FACTORY_BP)

/* Macros to get parts of the block property table ************************************************/

/* Macro delivers the bitfield with the block flags */
#define EESBD_GET_BLKFLAGS       ((uint32)Eesbd_BlkProp_ps->stBlkFlags_u16)

/* Macro delivers the PageIndex  */
#define EESBD_GET_PAGEIDX        (Eesbd_BlkProp_ps->xPageIdx_u16)

/* Macro delivers the number of pages of a block */
#define EESBD_GET_NOFPAGES       (Eesbd_BlkProp_ps->nofPages_u8)

/* Macro delivers the page internal offset to the block header  */
/* This offset is allways divisible with 4 (should be checked by EES configuration script). */
#define EESBD_GET_PAGEOFS        ((uint32)Eesbd_BlkProp_ps->xPageOfs_u8)
#define EESBD_GET_PAGEOFS_CRC    (EESBD_GET_PAGEOFS+4)
/* Macro delievers offset in init value lists */
#define EESBD_GET_INITVALOFS     (Eesbd_BlkProp_ps->adOfsInitVal_u16)

/* Derived macros *********************************************************************************/

/* Macro gets number of data pages */
#define EESBD_GET_NUMDATAPAGES   (EESBD_GET_NOFPAGES - (uint8)EESBD_GET_HEADINPAGE)

/* Macros for read and write state machine ********************************************************/

/* Macro to get page index of first page of a block, depending to a counter  */
/* for multiple stored blocks                                                */
/* There is a distinction between the block from which data can be read and  */
/* a block in which data can be written. This is mainly relevant with        */
/* multiple saved blocks.                                                    */
#define EESBD_GET_RDSRTPAGEIDX     (Eesbd_GlobVars_s.xRdPageIdx_u16 +     \
                                    (EESBD_GET_NOFPAGES * Eesbd_GlobVars_s.xRdPosMltBlk_u8))
#define EESBD_GET_WRSRTPAGEIDX     (EESBD_GET_PAGEIDX +     \
                                    (EESBD_GET_NOFPAGES * Eesbd_GlobVars_s.xWrPosMltBlk_u8))

/* Macro to get page index of page with block header, depending to a counter */
/* for multiple stored blocks                                                */
/* There is a distinction between the block from which data can be read and  */
/* a block in which data can be written. This is mainly relevant with        */
/* multiple saved blocks.                                                    */
#define EESBD_GET_RDBLKHEADPAGEIDX (Eesbd_GlobVars_s.xRdPageIdx_u16 - 1 + \
                                    ((EESBD_GET_NOFPAGES * (Eesbd_GlobVars_s.xRdPosMltBlk_u8 + 1))))
#define EESBD_GET_WRBLKHEADPAGEIDX (EESBD_GET_PAGEIDX - 1 + \
                                    ((EESBD_GET_NOFPAGES * (Eesbd_GlobVars_s.xWrPosMltBlk_u8 + 1))))
/* Macro to get page index of a page with block data, depending to a counter */
/* for multiple stored blocks and a page counter.                            */
/* There is a distinction between the block from which data can be read and  */
/* a block in which data can be written. This is mainly relevant with        */
/* multiple saved blocks.                                                    */
#define EESBD_GET_RDBLKDATAPAGEIDX (EESBD_GET_RDSRTPAGEIDX + Eesbd_GlobVars_s.xPageCtr_u8)
#define EESBD_GET_WRBLKDATAPAGEIDX (EESBD_GET_WRSRTPAGEIDX + Eesbd_GlobVars_s.xPageCtr_u8)

/* Macro to get number of pages in bytes and 32-bit alligned */
#define EESBD_GET_NOFPAGES32       ((((uint32)EESBD_GET_NOFPAGES * 2ul) + 3ul) & 0xFFFCul)

/* Macro to access entry of array Eesbd_PageBuf_au32 */
#define EESBD_GET_ARRAYOFS         (EESBD_GET_PAGEOFS >> 2ul)
/* Macros to get block header information from data buffer ****************************************/

/* Macro deliveres the block version counter */
#define EESBD_GET_BLKVERCTR      (Eesbd_PageBuf_au32[EESBD_GET_ARRAYOFS])
#define EESBD_SET_BLKVERCTR      EESBD_GET_BLKVERCTR

/* Macro deliveres the block checksum */
#define EESBD_GET_BLKCHKSUM      (Eesbd_PageBuf_au32[EESBD_GET_ARRAYOFS + 1ul])
#define EESBD_SET_BLKCHKSUM      EESBD_GET_BLKCHKSUM

/* Macros to get data from global EESBD structure *************************************************/

/* Macro to save block version counter of a block, depending to a counter */
/* for multiple stored blocks                                             */
#define EESBD_BLKVERCTR  (Eesbd_GlobVars_s.xBlkCtr_au32[Eesbd_GlobVars_s.xRdPosMltBlk_u8])

/* Macro to save block checksum of a block, depending to a counter */
/* for multiple stored blocks                                      */
#define EESBD_BLKCHKSUM  (Eesbd_GlobVars_s.xBlkChkSum_u32)

/* Macro to save block state of a block, depending to a counter */
/* for multiple stored blocks                                   */
#define EESBD_BLKSTATE   (Eesbd_GlobVars_s.xBlkState_au8[Eesbd_GlobVars_s.xRdPosMltBlk_u8])

/* Macro to increment read position of a multiple saved block */
#define EESBD_INC_RDPOS_MLTBLK  (Eesbd_GlobVars_s.xRdPosMltBlk_u8 =        \
                                 (Eesbd_GlobVars_s.xRdPosMltBlk_u8 <       \
                                  ((uint8)EESBD_GET_SECURITY_LEVEL - 1))   \
                                  ? (Eesbd_GlobVars_s.xRdPosMltBlk_u8 + 1) \
                                  : 0)

/* Macro to increment write position of a multiple saved block */
#define EESBD_INC_WRPOS_MLTBLK  (Eesbd_GlobVars_s.xWrPosMltBlk_u8 =        \
                                 (Eesbd_GlobVars_s.xWrPosMltBlk_u8 <       \
                                  ((uint8)EESBD_GET_SECURITY_LEVEL - 1))   \
                                  ? (Eesbd_GlobVars_s.xWrPosMltBlk_u8 + 1) \
                                  : 0)
/*
 ***************************************************************************************************
 * Enumerators
 ***************************************************************************************************
 */

/* Validity of a block */
typedef enum
{
    EESBD_BLKSTATE_OK,
    EESBD_BLKSTATE_INVALID
} Eesbd_BlkValidity_t;


/* States in block read state machine */
typedef enum
{
    EESBD_RD_STATE_STARTUP,
    EESBD_RD_STATE_CHKBLK,
    EESBD_RD_STATE_RDDATA
} Eesbd_RdStates_t;


/* States in block write state machine */
typedef enum
{
    EESBD_WR_STATE_STARTUP,
    EESBD_WR_STATE_CHKBLK,
    EESBD_WR_STATE_WRDATA_SP,
    EESBD_WR_STATE_WRDATA_MP
} Eesbd_WrStates_t;

/* States in block read state machine */
typedef enum
{
    EESBD_DECISION_SEC_LEVEL_1 = 1,
    EESBD_DECISION_SEC_LEVEL_2 = 2,
    EESBD_DECISION_SEC_LEVEL_3 = 3
} Eesbd_SecLevel_t;


/* Function return values of subordinate EESBD functions */
typedef enum
{
    EESBD_STATE_FINISHED,
    EESBD_STATE_CALLAGAIN,
    EESBD_STATE_FAILED
} Eesbd_StFuncRetValues_t;


/* States in state machine to check a block */
typedef enum
{
    EESBD_CHKBLK_CHECK_BLK_CS,
    EESBD_CHKBLK_MAKE_DECISION
} Eesbd_StateChkBlk_t;


/* States in state machine to write a block */
typedef enum
{
    EESBD_WRITE_SGLPAGEBLK,
    EESBD_WRITE_SGLPAGEBLK_FINISH,
    EESBD_WRITE_MULTIPAGEBLK,
    EESBD_WRITE_MULTIPAGEBLK_FINISH,
    EESBD_WRITE_HEADPAGE,
    EESBD_WRITE_HEADPAGE_FINISH,
    EESBD_WRITE_NEWER_COPY
} Eesbd_StateWrBlk_t;

/*
 ***************************************************************************************************
 * Externals
 ***************************************************************************************************
 */

/* External constants */
__PRAGMA_USE__eep__50ms_1s__constant__s32__START
extern const Eesbd_BlkProp_t Eesbd_BlkProp_cas[];
__PRAGMA_USE__eep__50ms_1s__constant__s32__END

__PRAGMA_USE__eep__50ms_1s__constant__x8__START
extern const uint8  Eesbd_LengthPVTBuf_cu8;
__PRAGMA_USE__eep__50ms_1s__constant__x8__END

__PRAGMA_USE__eep__50ms_1s__constant__x16__START
extern const uint16 Eesbd_xBaseBlkIdx_cu16;
__PRAGMA_USE__eep__50ms_1s__constant__x16__END

/* External global variables */
__PRAGMA_USE__eep__50ms_1s__RAM__x32__START
extern Eesbd_BlkProp_t const * Eesbd_BlkProp_ps;
__PRAGMA_USE__eep__50ms_1s__RAM__x32__END

__PRAGMA_USE__eep__50ms_1s__RAM__arr32__START
extern uint32  Eesbd_PageBuf_au32[];
__PRAGMA_USE__eep__50ms_1s__RAM__arr32__END

__PRAGMA_USE__eep__50ms_1s__RAM__s32__START
extern Eesbd_BlkProp_t   Eesbd_BlkPropEnvram_s;
extern Eesbd_GlobVars_t  Eesbd_GlobVars_s;
__PRAGMA_USE__eep__50ms_1s__RAM__s32__END

/* External function prototypes */
__PRAGMA_USE__CODE__eep__LowSpeed__START
extern void Eesbd_CalcEnvramProp(uint16 xBlkIdx_u16);
extern void Eesbd_SubStIni(uint16 xBlkIdx_u16);

extern Eesbd_StFuncRetValues_t Eesbd_StateChkBlkProlog(void);
extern Eesbd_StFuncRetValues_t Eesbd_StateChkBlk(uint16 xOfs_u16, uint16 numBytes_u16);

extern Eesbd_StFuncRetValues_t Eesbd_SubStChkBlkCs(void);
extern Eesbd_StFuncRetValues_t Eesbd_SubStDecision(uint16 xOfs_u16, uint16 numBytes_u16);

extern Eesbd_StFuncRetValues_t Eesbd_SubStRdDataProlog(void);
extern Eesbd_StFuncRetValues_t Eesbd_SubStRdData(uint16 numBytes_u16, uint8* xRdBuf_pu8);

extern Eesbd_StFuncRetValues_t Eesbd_StateWrDataSPProlog(void);
extern Eesbd_StFuncRetValues_t Eesbd_StateWrDataSP(uint16 xBlkIdx_u16, uint16 xOfs_u16, uint16 numBytes_u16,
                                                   uint8* xWrBuf_pu8);
extern Eesbd_StFuncRetValues_t Eesbd_StateWrDataMPProlog(void);
extern Eesbd_StFuncRetValues_t Eesbd_StateWrDataMP(uint16 xBlkIdx_u16, uint16 xOfs_u16,
                                                   uint16 numBytes_u16, uint8* xWrBuf_pu8);

extern void                    Eesbd_StateBlkCopyProlog(void);
extern Eesbd_StFuncRetValues_t Eesbd_StateBlkCopy(uint16 xBlkIdx_u16);

extern void Eesbd_FirstinitStart(void);
extern void Eesbd_FirstinitEnd(void);
__PRAGMA_USE__CODE__eep__LowSpeed__END
/*_EESBD_PRIV_H*/
#endif
