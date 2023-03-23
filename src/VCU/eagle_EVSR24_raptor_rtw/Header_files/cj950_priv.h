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
 * $Filename__:cj950_priv.h$
 *
 * $Author____:EHF2SI$
 *
 * $Function__:first new version$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:YTU1HC$
 * $Date______:04.01.2016$
 * $Class_____:SWHDR$
 * $Name______:cj950_priv$
 * $Variant___:1.4.1$
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
 * 1.4.1; 0     04.01.2016 YTU1HC
 *   Version 1 checking for cj950 report file correction
 *   RQONE00765706
 * 
 * 1.3.4; 0     24.02.2015 UPA4KOR
 *   Update the file for double read bug fix.
 * 
 * 1.3.2; 0     14.10.2013 KHA4KOR
 *   -
 * 
 * 1.3.1; 5     13.08.2013 KHA4KOR
 *   macro name correction
 * 
 * 1.3.1; 4     13.08.2013 KHA4KOR
 *   value of the macros used in cj950_switch_diagcurr are updated
 * 
 * 1.3.1; 3     07.08.2013 KHA4KOR
 *   The macro name is updated
 * 
 * 1.3.1; 2     06.08.2013 KHA4KOR
 *   comment updation
 * 
 * 1.3.1; 1     31.07.2013 KHA4KOR
 *   The variable name which gives OL diagnosis disable info is changed
 * 
 * 1.3.1; 0     29.07.2013 KHA4KOR
 *   1.Pwr_ScbMode() interface function supported in CJ950 driver software has 
 *   the following defect:-
 *   
 *   In Cj950_ScbMode(), run time configuration change of current limited mode 
 *   to switch off mode 
 *   
 *    vice versa, for an SCB error, is not supported for power stages 15, 16, 17
 *    and 18.
 *   
 *   Also power stages connected in parallel are not considered.
 *   
 *   
 *   
 *   2.Data inconsistency issues exists in the diagnositc 
 *   
 *   global variables (about 4 variables with inter-related information for each
 *    power stage).
 *   
 *   These variables are updated in 10ms proc of CJ950.
 *   
 *   They are also accessed and altered in the interface function 
 *   
 *    Cj950_GetErrInfo(), which can be called in slower rasters.
 *   
 *   There is a rare possibility of the 10ms proc  CJ950 interrupting
 *   
 *    the interface function. The data inconsistancy will take place in this 
 *   situation.
 *   
 *   
 *   
 *   3.To ensure no OL testability visible when OL diagnosis is disabled
 * 
 * 1.3.0; 0     14.11.2012 EHF2SI
 *   new interface, fixes
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _CJ950_PRIV_H
#define _CJ950_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * private header for CJ9505200kfp device driver
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define CJ950_NUMPWSTG       18          /* number of powers stage per chip                                            */
#define CJ950_STG_OFF         1          /* value for DIO macro to switch off the powerstage                           */


#define CJ950_CONREG4_ABE_IMPACT_MASK  0x10 /* ABE_IMPACT-Bit (bit 4) of CONREG4 */


#define CJ950_CMD_ERR_MASK           0x0000003C                      /* bits, containing error information             */
#define CJ950_CMD_RECEIVED           0x00000002                      /* bit for checking received-state                */

#define CJ950_SW_DIAG_CURR_VALID_STAGE       0x00            /* return-value of diagnosis current switch for valid stage */
#define CJ950_SW_DIAG_CURR_ERR_NOT_POSSIBLE  0x01        /* return-value of diagnosis current switch error */
#define CJ950_SW_DIAG_CURR_WRONG_STAGE       0x02            /* return-value of diagnosis current switch error */

#define SW_DIAG_EXT_OFF                     0x02        /* turn special diagnosis for FPC on and off */
#define SW_DIAG_EXT_ON                      0x01
#define CJ950_SW_DIAG_EXT_ERR                0xFF
#define CJ950_SW_DIAG_EXT_ON                 0x01
#define CJ950_SW_DIAG_EXT_OFF                0x02

#define CJ950_STAGE01        0x01
#define CJ950_STAGE02        0x02
#define CJ950_STAGE03        0x03
#define CJ950_STAGE04        0x04
#define CJ950_STAGE05        0x05
#define CJ950_STAGE06        0x06
#define CJ950_STAGE07        0x07
#define CJ950_STAGE08        0x08
#define CJ950_STAGE09        0x09
#define CJ950_STAGE10        0x0A
#define CJ950_STAGE11        0x0B
#define CJ950_STAGE12        0x0C
#define CJ950_STAGE13        0x0D
#define CJ950_STAGE14        0x0E
#define CJ950_STAGE15        0x0F
#define CJ950_STAGE16        0x10
#define CJ950_STAGE17        0x11
#define CJ950_STAGE18        0x12

#define CJ950_MIN_PWSTG_SW_CURR_NUM  0x0b    /* diagnostic current can be switched for stages 11..18 only */
#define CJ950_MAX_PWSTG_SW_CURR_NUM  0x12

#define SW_DIAG_CURR_ON         0xFF    /*  */
#define SW_DIAG_CURR_OFF        0x00    /*  */

#define CJ950_OVLD_SW_OFF     1                /* mask to set OUTx to switch off mode in case of overload */
#define CJ950_OVLD_CURR_LIMIT 0                /* mask to set OUTx to current limitation mode in case of overload */

#define CJ950_SW_OVLD_ERR_NOT_POSSIBLE    0xFF    /* return value if error in switch off mode switch */
#define CJ950_SW_OVLD_NO_ERR              0x00    /* return value if no error in switch off mode switch */
#define CJ950_SW_OVLD_ERR_WRONG_PWSTG     0x55    /* return value if error in switch off mode switch */
#define CJ950_IDX_CMD_INVALID         0xFFFFul    /* invalid command index - used to make code safe */


#define CJ950_STAGE01_OVLD_MASK       0x0020ul    /* bitposition 0000 0001 in CONREG1 register + 5 bit offset for MSC command */
#define CJ950_STAGE02_OVLD_MASK       0x0040ul    /* bitposition 0000 0010 in CONREG1 register + 5 bit offset for MSC command */
#define CJ950_STAGE03_OVLD_MASK       0x0080ul    /* bitposition 0000 0100 in CONREG1 register + 5 bit offset for MSC command */
#define CJ950_STAGE04_OVLD_MASK       0x0100ul    /* bitposition 0000 1000 in CONREG1 register + 5 bit offset for MSC command */
#define CJ950_STAGE05_OVLD_MASK       0x0200ul    /* bitposition 0001 0000 in CONREG1 register + 5 bit offset for MSC command */
#define CJ950_STAGE06_OVLD_MASK       0x0400ul    /* bitposition 0010 0000 in CONREG1 register + 5 bit offset for MSC command */
#define CJ950_STAGE07_OVLD_MASK       0x0800ul    /* bitposition 0100 0000 in CONREG1 register + 5 bit offset for MSC command */
#define CJ950_STAGE08_OVLD_MASK       0x1000ul    /* bitposition 1000 0000 in CONREG1 register + 5 bit offset for MSC command */
#define CJ950_STAGE09_OVLD_MASK       0x0020ul    /* bitposition 0000 0001 in CONREG2 register + 5 bit offset for MSC command */
#define CJ950_STAGE10_OVLD_MASK       0x0040ul    /* bitposition 0000 0010 in CONREG2 register + 5 bit offset for MSC command */
#define CJ950_STAGE11_OVLD_MASK       0x0080ul    /* bitposition 0000 0100 in CONREG2 register + 5 bit offset for MSC command */
#define CJ950_STAGE12_OVLD_MASK       0x0100ul    /* bitposition 0000 1000 in CONREG2 register + 5 bit offset for MSC command */
#define CJ950_STAGE13_OVLD_MASK       0x0200ul    /* bitposition 0001 0000 in CONREG2 register + 5 bit offset for MSC command */
#define CJ950_STAGE14_OVLD_MASK       0x0400ul    /* bitposition 0010 0000 in CONREG2 register + 5 bit offset for MSC command */
#define CJ950_STAGE15_OVLD_MASK       0x0100ul    /* bitposition 0000 1000 in OUT1516 register + 5 bit offset for MSC command */
#define CJ950_STAGE16_OVLD_MASK       0x1000ul    /* bitposition 1000 0000 in OUT1516 register + 5 bit offset for MSC command */
#define CJ950_STAGE17_OVLD_MASK       0x0800ul    /* bitposition 0100 0000 in CONREG2 register + 5 bit offset for MSC command */
#define CJ950_STAGE18_OVLD_MASK       0x1000ul    /* bitposition 1000 0000 in CONREG2 register + 5 bit offset for MSC command */

#define CJ950_STAGE11_MASK       0x0020ul    /* bitposition 0000 0001 in CONREG3 register + 5 bit offset for MSC command */
#define CJ950_STAGE12_MASK       0x0040ul    /* bitposition 0000 0010 in CONREG3 register + 5 bit offset for MSC command */
#define CJ950_STAGE13_MASK       0x0080ul    /* bitposition 0000 0100 in CONREG3 register + 5 bit offset for MSC command */
#define CJ950_STAGE14_MASK       0x0100ul    /* bitposition 0000 1000 in CONREG3 register + 5 bit offset for MSC command */
#define CJ950_STAGE17_MASK       0x0200ul    /* bitposition 0001 0000 in CONREG3 register + 5 bit offset for MSC command */
#define CJ950_STAGE18_MASK       0x0400ul    /* bitposition 0010 0000 in CONREG3 register + 5 bit offset for MSC command */
#define CJ950_STAGE15_MASK       0x0080ul    /* bit 2 in OUT1516 register + 5 bit offset for MSC command */
#define CJ950_STAGE16_MASK       0x0800ul    /* bit 6 in OUT1516 register + 5 bit offset for MSC command */
/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef enum
{
    CJ950_NO_INIT_DONE,
    CJ950_INIT_FINISHED
} CJ950_Init_t;

#define CJ950_INIT_SUCCESS   0x00
/*
 ***************************************************************************************************
 * Extern procedures
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__10ms__InitRAM__s16__START
extern CJ950_VarChipInfo_t CJ950_VarChipInfo_s[];
__PRAGMA_USE__hwe__10ms__InitRAM__s16__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const CJ950_ShutOffFunc_t   Cj950_ShutOffFunc_cs[][CJ950_NUMPWSTG];
__PRAGMA_USE__hwe__10ms__constant__s32__END
/*
 ***************************************************************************************************
 * Diagnosis Type definitions
 ***************************************************************************************************
 *                                                                MSC error
 *                                                                | COM error
 *                                                                | | open load
 *                                                                | | | overload
 *                updated since last call                         | | | | short to batter
 *                | testimpulse since last call                   | | | | or overtemperature
 *                | | testimpulse running                         | | | | | overtemperature
 *                | | | testimpulse requested                     | | | | | | short to ground
 *                | | | | central error flag                      | | | | | | | short to batt
 *                | | | | | central overtemp. flag                | | | | | | | |
 *                | | | | | |                                     | | | | | | | |
 *                | | | | | | diag running(for tst verify)        | | | | | | | |
 *                | | | | | | | diag requested (for tst verify)   | | | | | | | |
 *                | | | | | | | |                                 | | | | | | | |
 *                | | | | | | | |                                 | | | | | | | |
 *                | | | | | | | |         TestedFlags             | | | | | | | |
 *                | | | | | | | |         OL                      | | | | | | | |
 *                | | | | | | | |         | OT                    | | | | | | | |
 *                | | | | | | | |         | | SCG                 | | | | | | | |
 *                | | | | | | | |         | | | SCB               | | | | | | | |
 *                | | | | | | | |         | | | |                 | | | | | | | |
 *                V V V V V V V V         V V V V                 V V V V V V V V
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * staReturn_u32 |N| | | | | | | |0|0|0|0| | | | |0|0|0|0|0|0|0|0| | | | | | | | | valReturn
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *               |       |       |       |       |       |       |       |       |
 *               3130292827262524....                          ...7 6 5 4 3 2 1 0
 */

typedef struct
{
    void (*const  TstImpStart_cfp)(void);                /* function ptr to TestImpulse start    */
    uint32 param1_u32;                                   /* PORT / msc  / seqnbr / seqnbr        */
    uint32 param2_u32;                                   /* PIN  / mask /        /               */
    uint16 numLowTime_u16;                               /* low testimpulse time                 */
    uint16 numHighTime_u16;                              /* low testimpulse time                 */
    uint32 xParallelInfo_cu32;                           /* mask for parallel used powerstages   */
} CJ950_DiagStage_ct;
#define CJ950_DiagStage_ct_NULL   Cj950_Diag_ERROR,0,0,0,0,0

/* defines for the StageError_u8 */
#define CJ950_STAGEERROR_STB           0x01   /* short to U battery                  */
#define CJ950_STAGEERROR_STG           0x02   /* short to ground                     */
#define CJ950_STAGEERROR_OVT           0x04   /* overtemperatureg                    */
#define CJ950_STAGEERROR_SBO           0x08   /* short to battery or overtemperature */
#define CJ950_STAGEERROR_OVL           0x10   /* overload                            */
#define CJ950_STAGEERROR_OPL           0x20   /* open load                           */
#define CJ950_STAGEERROR_NEW           0x80   /* new value indication                */
/**/
#define CJ950_STAGEERROR_MASK         (CJ950_STAGEERROR_STB | \
                                       CJ950_STAGEERROR_STG | \
                                       CJ950_STAGEERROR_OVT | \
                                       CJ950_STAGEERROR_SBO | \
                                       CJ950_STAGEERROR_OVL | \
                                       CJ950_STAGEERROR_OPL)
#define CJ950_STAGEERROR_SHIFT        (0-0)   /* bit0..5 errors                      */

#define CJ950_STAGEERROR_NEW_SHIFT    (31-7)  /* NEW indication                      */


/* defines for the StageFlags_u8 */
#define CJ950_STAGEFLAG_TSTREQ         0x01   /* BIT 0 testimpulse requested         */
#define CJ950_STAGEFLAG_TSTRUN         0x02   /* BIT 1 testimpulse running           */
#define CJ950_STAGEFLAG_TSTFIN         0x04   /* BIT 2 testimpulse finished          */
#define CJ950_STAGEFLAG_FORBIDDEN      0x08   /* BIT 3 testimpulse allowed           */
#define CJ950_STAGEFLAG_DIAGREQ        0x10   /* BIT 4 diag requested                */
#define CJ950_STAGEFLAG_DIAGRUN        0x20   /* BIT 5 diag running                  */
#define CJ950_STAGEFLAG_NEW            0x80   /* BIT 7 new value indication          */
/**/
#define CJ950_STAGEFLAG_TST_MASK      (CJ950_STAGEFLAG_TSTREQ | \
                                      CJ950_STAGEFLAG_TSTRUN | \
                                      CJ950_STAGEFLAG_TSTFIN)
#define CJ950_STAGEFLAG_TST_SHIFT     (28-0)  /* bit0..3 flags                       */

#define CJ950_STAGEFLAG_DIAG_MASK     (CJ950_STAGEFLAG_DIAGREQ | \
                                      CJ950_STAGEFLAG_DIAGRUN)
#define CJ950_STAGEFLAG_DIAG_SHIFT    (24-4)  /* bit4..5 flags                       */

#define CJ950_STAGEFLAG_NEW_SHIFT     (31-7)  /* NEW indication                      */

/* defines for the TestedFlags_u8 */
#define CJ950_TESTEDFLAG_STB           0x01   /* short to U battery                  */
#define CJ950_TESTEDFLAG_STG           0x02   /* short to ground                     */
#define CJ950_TESTEDFLAG_OVT           0x04   /* overtemperatureg                    */
#define CJ950_TESTEDFLAG_OPL           0x08   /* open load                           */
#define CJ950_FLG_PWM_PSTG             0x80


#define CJ950_TESTEDFLAG_HIGH          (CJ950_TESTEDFLAG_STG | \
                                       CJ950_TESTEDFLAG_OPL )

#define CJ950_TESTEDFLAG_LOW           (CJ950_TESTEDFLAG_STB | \
                                       CJ950_TESTEDFLAG_OVT )

#define CJ950_TESTEDFLAG_MASK          (CJ950_TESTEDFLAG_STB | \
                                       CJ950_TESTEDFLAG_STG | \
                                       CJ950_TESTEDFLAG_OVT | \
                                       CJ950_TESTEDFLAG_OPL )

#define CJ950_TESTEDFLAG_SHIFT         (16-0)  /*                     */
/* defines for scb mode change */
#define CJ950_SCB_STAGERANGE1               8
#define CJ950_SCB_STAGERANGE2               7
#define CJ950_SCB_STAGERANGE3               14
#define CJ950_SCB_STAGERANGE4               15
#define CJ950_SCB_STAGERANGE5               18


typedef struct
{
    uint8  TestedAct_u8;    /* hold actuall signal properties - written by Cj950_DioPpty/Cj950_PwmPpty */
    uint8  TestedColl_u8;   /* hold collected tested flags - copied each shedule from TestedAct_u8 */
    uint8  TestedStore_u8;  /* copied from TestedColl_u8  after sending DIAget                    */
    uint8  StageTested_u8;  /* copied from TestedStore_u8 after receive DIAget                    */
    uint8  StageError_u8;
    uint8  StageFlags_u8;
    uint8  StageErrorCollector_u8;      /* for collecting stage errors during a PWM period       */
    uint8  CollectedStageErrors_u8;     /* contains collected errors from previous PWM period    */
    uint16 DiagScheds2UpdateTstFlg_u16; /* number of schedules before Diag_Sequence() is called  */
    uint16 DiagSchedsCnt_u16;           /* counter for counting calls of Diag_Sequence()         */
    uint16 xDiagLstValPerTsk_u16;       /* save value of changed PWM period for next loop        */
    bool   xOlDiagInfo_b;               /* Ol enable or disable info                                */
} CJ950_DiagStage_t;
#define CJ950_DiagStage_t_NULL   0,0,0,0,0,0,0,0,0,0,0,0

/*------------------------------------------------------------------------------------------------*/
/* chip data                                                                                      */
/*------------------------------------------------------------------------------------------------*/
typedef struct
{
    const uint8 ctSendDiag_cu8;
}CJ950_DiagChip_ct;

typedef struct
{
    uint32 StageLoop_u32;
    uint32 cntDiagReq_u32;                   /* force a diag sequence      */
    uint8  ChipError_u8;
    uint8  ChipTstImpReqCnt_u8;
}CJ950_DiagChip_t;
#define CJ950_DiagChip_t_NULL   0,0,0,0


/* defines for the ChipError_u8 */
#define CJ950_CHIPERROR_COM            0x01   /* wrong receive data                  */
#define CJ950_CHIPERROR_MSC            0x02   /* no msc send possible                */
#define CJ950_CHIPERROR_COF            0x04   /* Central overtemperature flag        */
#define CJ950_CHIPERROR_CEF            0x08   /* Central error flag                  */
#define CJ950_CHIPERROR_NEW            0x80   /* new value indication                */
/**/
#define CJ950_CHIPERROR_COM_MASK      (CJ950_CHIPERROR_COM | \
                                       CJ950_CHIPERROR_MSC)
#define CJ950_CHIPERROR_COM_SHIFT     (6-0)   /* COM / MSC errors                    */

#define CJ950_CHIPERROR_CEN_MASK      (CJ950_CHIPERROR_COF | \
                                      CJ950_CHIPERROR_CEF)

#define CJ950_CHIPERROR_CEN_SHIFT     (26-2)  /* COF / CEF errors                    */

#define CJ950_CHIPERROR_NEW_SHIFT     (31-7)  /* NEW indication                      */

/*------------------------------------------------------------------------------------------------*/
/* globel diagnostic data                                                                         */
/*------------------------------------------------------------------------------------------------*/

typedef struct
{
    uint32  servedChip_u32;
    uint32  servedStage_u32;
    uint32  retrycnt_u32;
    uint32  oriLevel_u32;                     /* original level   before testimpulse       */
    uint32  oriRoute_u32;                     /* original routing before testimpulse       */

}CJ950_Diag_t;
#define CJ950_Diag_t_NULL   0,0,0,0,0


#define CJ950_MAX_TESTIMP_RETRY            10 /* maximum retry to generate a testimpuslse  */

/* defines for DIAREG6  received data */
#define CJ950_DIAREG6_ABE              0x0008 /* ABE pin voltage level               */
#define CJ950_DIAREG6_CEF              0x0010 /* Central error flag                  */
#define CJ950_DIAREG6_COF              0x0020 /* Central overtemperature flag        */

/* defines for RD DIAx REG received data */
#define CJ950_DIAx_STG                 0x0000 /* Short to ground                     */
#define CJ950_DIAx_OPL                 0x0001 /* open load                           */
#define CJ950_DIAx_STB                 0x0002 /* Short to battery / overtemperature  */
#define CJ950_DIAx_OK                  0x0003 /* ok (no error)                       */

#define CJ950_SEM_LOCK                 0x00000000UL
#define CJ950_SEM_UNLOCK               0xffffffffUL
#define CJ950_TEN_MS_TSKS              0x2710 /*  =10000d => 10ms = 10000us          */

#ifndef CJ950_NOT_IN_SYSTEM
extern bool xValidDataRead_b[CJ950_NUM_CHIPS];

extern uint32 CJ950_xSem_u32[CJ950_NUM_CHIPS];
#endif

/*------------------------------------------------------------------------------------------------*/
/* powerstage 15 & 16 read back state                                                             */
/*------------------------------------------------------------------------------------------------*/

#define CJ950_PS1516_GETCMDST_ERR_MSK  0x8000u /* error when trying to read upstream  */
#define CJ950_PS1516_ACTVCMD_ERR_MSK   0x4000u /* error when trying to put command    */

#define CJ950_PS1516_ERR_MSK           ( CJ950_PS1516_GETCMDST_ERR_MSK | CJ950_PS1516_ACTVCMD_ERR_MSK )

/*
    +-------------+---------------+------------------------------+
    | OUTxx_DELAY | OUTxx_CONTROL |          Description         |
    +-------------+---------------+------------------------------+
    |      1      |       1       | keep state, (Softreset)      |
    +-------------+---------------+------------------------------+
    |      0      |       1       | switch off                   |
    +-------------+---------------+------------------------------+
    |      1      |       0       | switch on, restart timer     |
    +-------------+---------------+------------------------------+
    |      0      |       0       | switch on, no delay          |
    +-------------+---------------+------------------------------+
*/
#define CJ950_PS1516_CFGREG_STAT_MSK           0x3    /* OUT15_DELAY or OUT15_CONTROL  */
#define CJ950_PS1516_CFGREG_STAT_KEEP_MSK      0x3    /* keep state, (Softreset)       */
#define CJ950_PS1516_CFGREG_STAT_ONTIMER_MSK   0x2    /* switch on, restart timer      */
#define CJ950_PS1516_CFGREG_STAT_OFF_MSK       0x1    /* switch off                    */
#define CJ950_PS1516_CFGREG_STAT_ON_MSK        0x0    /* switch on, no delay           */
/* Peripheral Monitoring Defines */
#define CJ950_COM_ERRCTR_LIMIT         10
#define CJ950_POR_MON_STBY_MSK  0x07
#define CJ950_POR_MON_STBY_PM   0x02
#define CJ950_PM_CONREG2_MSK    0xFF
#define CJ950_PM_CONREG3_MSK    0xFF
#define CJ950_PM_CONREG4_MSK    0x1f

#define CJ950_MAX_INI_TIME      5000 /* 5ms set timeout for CJ950 initialization */
#define CJ950_PM_MONTESTCTR     10   /* for CJ950_pm to wait 1s (10x100ms) for mocsop before perimon is started */

/*
 ***************************************************************************************************
 * Extern procedures
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool   Cj950_EvalDiag_Sequence   (uint32 ctChipIDX_u32);
extern bool   Cj950_SendDiag_Sequence   (uint32 ctChipIDX_u32);
extern bool   Cj950_Diag_Testimpulse    (uint32 ctChipIDX_u32);
extern void   Cj950_Diag_ERROR          (void);           /* Error handler                        */
extern inline uint8  Cj950_SetCurrProtMode  (uint32 ctChipIDX_u32, uint32 idxCmd_u32,
                                             uint32 maskIdx,       uint8  mode_u8);
extern uint8  Cj950_Diag_OL_Switch      (uint16 numChip_u16, uint16 numPwstg_u16, uint8 mode_u8);
extern uint8  Cj950_Switch_OvLd         (uint16 numChip_u16, uint16 numPwstg_u16, uint8 mode_u8);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void   Cj950_Diag_MSC            (void);  /* Testimpulse via MSC                  */
extern void   Cj950_Diag_MSC_toggle     (void);
extern void   Cj950_Diag_MSC_end        (void);
extern void   Cj950_Diag_CMD            (void);  /* Testimpulse vi aSPI and slower timing*/
extern void   Cj950_Diag_CMD_toggle     (void);
extern void   Cj950_Diag_CMD_end        (void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const  CJ950_DiagStage_ct        CJ950_DiagStage_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__InitRAM__s8__START
extern        CJ950_DiagStage_t        CJ950_DiagStage_s[];
extern        uint8                     CJ950_VmtMirror_b8[];
extern        uint8                    CJ950_ChipType[];
__PRAGMA_USE__hwe__10ms__InitRAM__s8__END

__PRAGMA_USE__hwe__50ms_1s__RAM__arr8__START
extern        uint8                    CJ950_ctComErr_u8[];
extern        uint8                    CJ950_ctSOPWt_u8[];
extern        bool                     CJ950_stComErrHeal_b[];
__PRAGMA_USE__hwe__50ms_1s__RAM__arr8__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const  CJ950_DiagChip_ct         CJ950_DiagChip_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__InitRAM__s32__START
extern        CJ950_DiagChip_t          CJ950_DiagChip_s[];      /* [numChip]                      */
extern        CJ950_Diag_t              CJ950_Diag_s;
__PRAGMA_USE__hwe__10ms__InitRAM__s32__END

MEMLAY_USE_PROTRAM(extern volatile CJ950_Init_t, CJ950_Init_e);
/* _CJ950_PRIV_H */
#endif
