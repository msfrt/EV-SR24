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
 * $Filename__:etc_priv.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:PRE3KOR$
 * $Date______:14.10.2009$
 * $Class_____:SWHDR$
 * $Name______:etc_priv$
 * $Variant___:1.11.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.11.0; 0     14.10.2009 PRE3KOR
 *   introduction of stop of engine test on broken communication
 * 
 * 1.9.0; 2     29.04.2009 MNG2SI
 *   Introduction of engine test type normal
 * 
 * 1.9.0; 1     30.03.2009 MNG2SI
 *   introduction of use case normal
 * 
 * 1.9.0; 0     26.02.2009 MNG2SI
 *   Component Toolbox-Import
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\13
 * 
 * 2.3.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\13
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _ETC_PRIV_H
#define _ETC_PRIV_H


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define ETC_ST_RET_INI_U8 (uint8)0xFF           /**< Initialization for the internal return value */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
/**
    Data type for a currently running test.
    This structure stores the ID of the currently running test and the pointer to it' test results
*/
typedef struct
{
    uint8 TstId_u8;                         /*< ID of the test                                    */
}Etc_TstCurRun_t;

/**
    Data type for storing return values for a test.
    This structure contains the ID of a test, the address of it's return value buffer and a
    counter which is used for deciding if the buffer is already filled
*/
typedef struct
{
    uint16  BufStrt_u16;                    /*< Start ofs of the test results in the ret val buf. */
    uint8   TstId_u8;                       /*< ID of the test                                    */
    uint8   BufCnt_u8;                      /*< Counter of already pushed return values           */
    uint8   Etc_NumCopBytes;       /*< number of bytes that are actual copied to tester buffer    */
}Etc_RetValBuf_t;

/**
    Data type for storing the request of a test for the dynamical tets
*/
typedef struct
{
    uint16  DelT_u16;                       /*< Delay time for starting this test                 */
    uint16  ArgOfs_u16;                     /*< Offset of this test in the argument list          */
}Etc_DynTstReq_t;

/**
    Data type for storing all necessary information for a test with use case legacy.
*/
typedef struct
{
    uint16 (*TstStrt_pfn)(uint8, uint8*);   /*< Pointer to <comp>_TstGetStrtPrms function         */
    uint16 (*TstStop_pfn)(void);            /*< Pointer to <comp>_TstGetStopPrms function         */
    uint16 (*TstGetSt_pfn)(void);           /*< Pointer to <comp>_TstGetSt function               */
    uint16 (*TstGetAbrtReason_pfn)(void);   /*< Pointer to <comp>_TstGetAbrtReason function       */
    uint8           numPar_u8;              /*< Number of parameters for this test                */
    uint8           numRetVal_u8;           /*< Number of return values for this test             */
    uint8           numRetValInst_u8;       /*< Number of set of datas for this test              */
}Etc_TstDat_t;

/**
    Data type for storing all necessary information for a test with use case normal
*/
typedef struct
{
    uint16* TstStrtMsg_pu16;    /*< Pointer to <comp>_StrtPrm_ETC message         */
    uint16* TstStMsg_pu16;      /*< Pointer to <comp>_St_ETC message         */
    uint16* TstAbrtReason_pu16;     /*< Pointer to <comp>_Abrt_ETC message         */
}Etc_TstDatNormal_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables from configuration
 ***************************************************************************************************
*/
__PRAGMA_USE__etc__10ms__RAM__arr8__START
extern bool                 Etc_TstCurRun_a[];      /**< Array with the activ tests               */
__PRAGMA_USE__etc__10ms__RAM__arr8__END

__PRAGMA_USE__etc__10ms__constant__arr32__START
extern const Etc_TstDat_t   Etc_TstDatTab_ca[];     /**< Array with all supported legacy tests           */
extern const Etc_TstDatNormal_t   Etc_TstDatNormalTab_ca[];     /**< Array with all supported tests use case normal  */
__PRAGMA_USE__etc__10ms__constant__arr32__END

__PRAGMA_USE__etc__10ms__RAM__arr32__START
extern Etc_RetValBuf_t      Etc_RetValBufLst_a[];   /**< List of all tests that are currently in the
                                                       return value buffer list                   */
extern Etc_TstId_t          Etc_DynTstIds_a[];      /**< All Ids in the dyn test                  */
__PRAGMA_USE__etc__10ms__RAM__arr32__END

__PRAGMA_USE__etc__10ms__constant__arr32__START
extern const uint32         Etc_LockingMatrix_ca[]; /**< Locking matrix                           */
__PRAGMA_USE__etc__10ms__constant__arr32__END

__PRAGMA_USE__etc__10ms__constant__arr8__START
extern const uint8         Etc_TstComBrkn_a[];
__PRAGMA_USE__etc__10ms__constant__arr8__END

__PRAGMA_USE__etc__10ms__RAM__arr8__START
extern uint8                Etc_ArgBuf_a[];         /**< Argument buffer for dynamical test       */
extern uint8                Etc_RetValBuf_a[];      /**< Return value buffer                      */
__PRAGMA_USE__etc__10ms__RAM__arr8__END

__PRAGMA_USE__etc__10ms__constant__x8__START
extern const uint8          Etc_NumTst_u8;                      /**< Number of configured tests               */
extern const uint8          Etc_NumTstLegacy_u8;          /**< Number of configured LEGACY tests               */
extern const uint8          Etc_NumTstNormal_u8;          /**< Number of configured Normal tests               */
extern const uint8          Etc_ArgBuf_Size_cu8;            /**< Size of the argument buffer            */
extern const uint8          Etc_RetValBuf_Size_cu8;       /**< Size of the return value buffer        */
__PRAGMA_USE__etc__10ms__constant__x8__END

__PRAGMA_USE__etc__10ms__RAM__arr32__START
extern Etc_DynTstReq_t      Etc_DynTstReqLst_a[];   /**< Array with all tests that are requested for
                                                       the dynamical test                         */
__PRAGMA_USE__etc__10ms__RAM__arr32__END


__PRAGMA_USE__etc__10ms__RAM__x16__START
extern uint16               Etc_ReqTstId_a[];       /**< Array with all requested tests           */
__PRAGMA_USE__etc__10ms__RAM__x16__END


/* Fixed variables                                                                                */
__PRAGMA_USE__etc__10ms__RAM__x16__START
extern uint16               Etc_NumCurUsdResc_u16;  /**< Currently used resources                 */

__PRAGMA_USE__etc__10ms__RAM__x16__END

__PRAGMA_USE__etc__10ms__RAM__x8__START
extern uint8                Etc_ReqTstNum_u8;       /**< Number of currently requested tests      */
extern uint8                Etc_NumCurRun_u8;       /**< Number of currently running tests        */
__PRAGMA_USE__etc__10ms__RAM__x8__END


__PRAGMA_USE__etc__10ms__RAM__x32__START
extern uint8                *Etc_RetValBufPtr_pu8;  /**< Pointer to last offset in the return value
                                                       array                                      */
__PRAGMA_USE__etc__10ms__RAM__x32__END

__PRAGMA_USE__etc__10ms__RAM__x8__START
extern uint8                Etc_DynTstNumTst_u8;    /**< Number of tests in the dyn test          */
extern uint8                Etc_DynTst_LastOfs_u8;  /**< Storage of the last offset for storing
                                                       the arguments                              */

extern bool                 Etc_DynTstRdy_b;        /**< Status of dynamical test. TRUE means that
                                                       all paramter are sampled and the dyn test is
                                                       ready to run                               */
extern bool                 Etc_ResetTimer_b;       /**< Reset the timer because of a tester req. */
extern bool                 Etc_IsDynCreated_b;     /**< Storage if the dynamical test was created*/
extern bool                 Etc_stComBrknTst_b;     /* Status to stop test on communication is broken*/

__PRAGMA_USE__etc__10ms__RAM__x8__END

/*
 ***************************************************************************************************
 * Functions
 ***************************************************************************************************
*/
__PRAGMA_USE__CODE__etc__NormalSpeed__START
bool Etc_TstGetLck(uint8 TstID1_u8, uint8  TstID2_u8);
bool Etc_AddTst2Lst(uint8   TstId_u8);
bool Etc_DelTstFromLst(uint8 TstId_u8);
__PRAGMA_USE__CODE__etc__NormalSpeed__END

/* _ETC_PRIV_H                                                                                    */
#endif

