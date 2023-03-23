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
 * $Filename__:pwmin_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PSP1COB$
 * $Date______:03.08.2011$
 * $Class_____:SWHDR$
 * $Name______:pwmin_pub$
 * $Variant___:1.19.0$
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
 * 1.19.0; 0     03.08.2011 PSP1COB
 *   Call Back Func included for PWM2
 * 
 * 1.15.0; 0     17.06.2010 INTECKEN
 *   removed MISRA warnings
 * 
 * 1.13.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pwmin_pub.h
 *      Version: \main\basis\b_CORE\6
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _PWMIN_PUB_H
#define _PWMIN_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                        PwmIn - Pulse width modulated input signals
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define PWMIN_SET                     1
#define PWMIN_CLEAR                   0
#define PWMIN_MAXNUMLOOPS             3            /* maximum number of loops to read signal data */

#define PWMINDCMDIRECT                ((Pwmin_Hwepwmmethod_t)  0)
#define PWMINLTCDIRECT003             ((Pwmin_Hwepwmmethod_t) 10)
#define PWMINLTCDIRECT25              ((Pwmin_Hwepwmmethod_t)  1)
#define PWMINLTCDIRECT025             ((Pwmin_Hwepwmmethod_t)  1)
#define PWMI                          PWMINLTCDIRECT025
#define PWMINLTCDIRECT200             ((Pwmin_Hwepwmmethod_t)  2)
#define PWMINDCMIRQ                   ((Pwmin_Hwepwmmethod_t)  3)
#define PWMINLTCIRQ003                ((Pwmin_Hwepwmmethod_t) 11)
#define PWMINLTCIRQ25                 ((Pwmin_Hwepwmmethod_t)  4)
#define PWMINLTCIRQ025                ((Pwmin_Hwepwmmethod_t)  4)
#define PWMINLTCIRQ200                ((Pwmin_Hwepwmmethod_t)  5)
#define PWMINGTCIRQ                   ((Pwmin_Hwepwmmethod_t)  6)
#define PWMINLTCPERDIRECT025          ((Pwmin_Hwepwmmethod_t)  7)
#define FREQM                         PWMINLTCPERDIRECT025
#define PWMINLTCPERDIRECT200          ((Pwmin_Hwepwmmethod_t)  8)
#define PWMINLTCPERDIRECT003          ((Pwmin_Hwepwmmethod_t)  9)
#define PWMINGENLOAD                  ((Pwmin_Hwepwmmethod_t) 12)
#define MOK                           ((Pwmin_Hwepwmmethod_t) 13)
#define PWMINGTC1                     ((Pwmin_Hwepwmmethod_t) 14)
#define DUMMY                         ((Pwmin_Hwepwmmethod_t) 42)
#define PWMINDCMPERDIRECT             ((Pwmin_Hwepwmmethod_t) 15)


/* standard PWMIN status flags */
#define PWMIN_PINSTATE_POS                 0
#define PWMIN_PINSTATE_LEN                 1
#define PWMIN_NONEWPERIOD_POS              1
#define PWMIN_NONEWPERIOD_LEN              1
#define PWMIN_TIMEROVERFLOW_POS            2
#define PWMIN_TIMEROVERFLOW_LEN            1
#define PWMIN_MAX_PERIOD_VIOLATION_POS     3
#define PWMIN_MAX_PERIOD_VIOLATION_LEN     1

/* MOK status flags */
#define PWMIN_OUTOFSYNC_POS                1
#define PWMIN_OUTOFSYNC_LEN                1
#define PWMIN_NEWDATA_POS                  2
#define PWMIN_NEWDATA_LEN                  1
#define PWMIN_BADSIGNAL_POS                3
#define PWMIN_BADSIGNAL_LEN                1
#define PWMIN_TIMEOUT_POS                  4
#define PWMIN_TIMEOUT_LEN                  1
#define PWMIN_STPE_POS                     5    /* Sensor Temperature Plausibility Error          */
#define PWMIN_STPE_LEN                     1
#define PWMIN_SCWE_POS                     6    /* Sensor Checksum & Watchdog Error               */
#define PWMIN_SCWE_LEN                     1
#define PWMIN_WAITING_POS                  7
#define PWMIN_WAITING_LEN                  1

// each enumerator represents one MOK signal type
typedef enum
{
    PWMIN_MOK_ZERO_E,           // no MOK selected
    PWMIN_MOK_OPST_E,           // OPS+T three pulse without pause
    PWMIN_MOK_OENS_E,           // classic three pulse + pause MOK
    PWMIN_MOK_OENSDGNS_E,       // classic three pulse + pause MOK plus Hella diagnosis info
    PWMIN_MOK_NOSYNC_E,         // straight signal detection, returns recent three pulse/periods
    PWMIN_MOK_TYPE_MAX_E
} Pwm_Mok_Type_e;


/** conversion of a given number of ticks to a time [ms] */
#define Pwmin_TicksToMs(ticks) GPTA_TICKS_TO_MS(ticks)

/** conversion of a given number of ticks to a time [us] */
#define Pwmin_TicksToUs(ticks) (uint32)GPTA_TICKS_TO_US_F(ticks)

/** conversion of a given number of ticks to a time [ns] */
#define Pwmin_TicksToNs(ticks) (uint32)GPTA_TICKS_TO_NS_F(ticks)

/* alternator load evaluation macros                                                              */
#define PWMIN_EVALUATION_RUNNING_POS     0
#define PWMIN_EVALUATION_RUNNING_LEN     1
#define PWMIN_NO_EVALUATION_FINISHED_POS 1
#define PWMIN_NO_EVALUATION_FINISHED_LEN 1


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

typedef          uint32       Pwmin_Ecupin_t;
typedef          uint32       Pwmin_Hwinterface_t;
typedef          uint16       Pwmin_Ucport_t;
typedef          uint16       Pwmin_Ucpin_t;
typedef          uint32       Pwmin_Hwepwmmethod_t;
typedef volatile uint32*      Pwmin_BlockRef_t;
typedef          uint32*      Pwmin_BuffAddr_t;
typedef          uint32       Pwmin_Freq_t;
typedef          uint32       Pwmin_Time_t;
typedef          uint8        Pwmin_Inverted_t;
typedef volatile uint32 const Pwmin_EdgeBuf_t;
typedef          uint8        Pwmin_BitPos_t;

typedef          uint32       Pwmin_Dutycycle_t;           /* percent value                       */
typedef          uint32       Pwmin_Dur_t;                 /* timeduration                        */
typedef          uint32       Pwmin_Count_t;               /* any counter type                    */
typedef          uint8        Pwmin_State_t;               /* signal staus bitfield               */
typedef          uint32       Pwmin_ChkSum_t;              /* 32 bit checksum                     */

/*****************************************/
/* this are the Pwmin result structures  */
/*****************************************/
typedef struct
{
    Pwmin_Dutycycle_t Pwmin_rDutycycle;               /* current dutycycle                        */
    Pwmin_Dur_t       Pwmin_tiHighdur;                /* last high_time duration                  */
    Pwmin_Dur_t       Pwmin_tiPeriod;                 /* period duration                          */
    Pwmin_State_t     Pwmin_stSignal;                 /* current state of the signal              */
}   Pwmin_Result_t;

typedef struct
{
    Pwmin_Dutycycle_t Pwmin_rDutycycle;               /* current dutycycle                        */
    Pwmin_Dur_t       Pwmin_tiHighdur;                /* last high_time duration                  */
    Pwmin_Dur_t       Pwmin_tiPeriod;                 /* period duration                          */
    Pwmin_Dur_t       Pwmin_tiTrandur;                /* time since last level change             */
    Pwmin_Count_t     Pwmin_ctPeriod;                 /* signal period counter                    */
    Pwmin_State_t     Pwmin_stSignal;                 /* current state of the signal              */
}   Pwmin_ResultXt_t;

typedef struct
{
    Pwmin_Dur_t       Pwmin_tiPeriod;                 /* period duration                          */
    Pwmin_State_t     Pwmin_stSignal;                 /* signal status information                */
}   Pwmin_ResultPer_t;

typedef struct
{
    Pwmin_Dutycycle_t   Pwmin_rDutycycle;             /* dutycycle                                */
    Pwmin_State_t       Pwmin_stSignal;               /* signal status information                */
}   Pwmin_DcResult_t;

typedef struct
{
    Pwmin_ChkSum_t      sumChk;                       /* check sum of all other elements (XOR)    */
    Pwmin_Dur_t         tiHighDur;                    /* last high time duration                  */
    Pwmin_Dur_t         tiPer;                        /* period duration                          */
    Pwmin_State_t       stSig;                        /* signal status information                */
}   PwmIn_MonRslt_t;

/* MOK result structure                                                                           */
typedef struct
{
    uint32  tiPeriod_u32[3];
    uint32  tiHigh_u32[3];
    uint8   ctSequence_u8;                            /* counter for number of valid sequences    */
    uint8   stSignal_u8;                              /* status of signal                         */
}Pwmin_MokResult_t;

/* MOK calibration data structure                                                                 */
typedef struct
{
    uint32  tiTimeoutPer_C;                           /* maximum period duration                  */
    uint32  tiTimeoutSig_C;                           /* maximum MOK frame duration               */
}Pwmin_MokCalibration_t;

/************************************************************************************/
/* this is the structure for storing GPTA timer values and/or system time,          */
/* used for passing over timestamps from PCP channel programms to Pwmin C-functions */
/* do not modify the order of variables!                                            */
/************************************************************************************/
typedef struct
{
    uint32 volatile Pwmin_ctUpdateCounter1;                 /* counter                              */
    uint32          Pwmin_tiTimestamp1;                     /* period / pulse duration              */
    uint32          Pwmin_tiTimestamp2;                     /* period / pulse duration              */
    uint32          Pwmin_tiSysTime;                        /* system time                          */
    uint32          Pwmin_tiSysTimeOld;                     /* old system time                      */
    uint32 volatile Pwmin_ctUpdateCounter2;                 /* counter                              */
}   Pwmin_Buffer_t;

/* same purpose as structure above, used for GTC evaluation                                       */
typedef struct
{
    Pwmin_Count_t volatile Pwmin_ctUpdateCounter1;          /* counter                            */
    Pwmin_Time_t  volatile Pwmin_tiTimestamp1;              /* period                             */
    Pwmin_Time_t  volatile Pwmin_tiTimestamp2;              /* hightime duration                  */
    Pwmin_Time_t  volatile Pwmin_tiTimestamp3;              /* previous period                    */
    Pwmin_Time_t  volatile Pwmin_tiSysTime;                 /* system time                        */
    Pwmin_Count_t volatile Pwmin_ctUpdateCounter2;          /* counter                            */
}   Pwmin_GtcBuffer_t;

/* this is the alternator load detection buffer, do not modify the order of variables!            */
typedef struct
{
    Pwmin_Count_t          Pwmin_ctOverflow;                /* counts number of LTC overflows     */
    Pwmin_Time_t           Pwmin_tiSysTime;                 /* system time                        */
    Pwmin_Dutycycle_t      Pwmin_rDutycycle;                /* most recent alternator load        */
    Pwmin_State_t          Pwmin_stVarious;                 /* various status info                */
}   Pwmin_GenLoadBuffer_t;

/* keep buffer for standard Pwmin functions                                                       */
typedef struct
{
    Pwmin_Time_t           Pwmin_tiTimestamp1;              /* timer value                        */
    Pwmin_Time_t           Pwmin_tiTimestamp2;              /* period                             */
    Pwmin_Time_t           Pwmin_tiTimestamp3;              /* hightime duration                  */
    Pwmin_Time_t           Pwmin_tiSysTime;                 /* system time                        */
    Pwmin_Time_t           tiSysTime2;                      /* system time                        */
    Pwmin_Count_t          Pwmin_ctUpdateCounter1;          /* counter                            */
    uint8                  stOvrflw_u8;                     /* GT0 overflow status                */
    bool                   Pwmin_firstPeriod_b;             /* signal first period                */
}   Pwmin_Keep_t;

/* extended MOK hand over buffer typedef */
typedef enum
{
    PWMIN_MOK_ISR_DISBL,           // service is disabled
    PWMIN_MOK_ISR_INI,             // waiting for first signal edge
    PWMIN_MOK_ISR_RUN,             // normal operation mode
    PWMIN_MOK_ISR_TOUT             // noisy signal condition detected, reception disturbed
} Pwm_Mok_IsrStm_e;

typedef struct
{
    uint32                 tiEdgeStmp_au32[12];  /* storage for time stamps of signal edges       */
    uint32                 tiSysStmp_u32;        /* system time at last buffer update             */
    uint32                 cntUpdt_u32;          /* buffer update counter                         */
    uint8                  cntDbg_au8[4];        /* program flow counter                          */
    Pwm_Mok_Type_e         swtMokType_e;         /* MOK type: OPS+T, OENS, etc                    */
    Pwm_Mok_IsrStm_e       stMokIsr_e;           /* state machine variable                        */
    uint8                  cntSeqTmp_u8;         /* temporar storage for sequence counter         */
    uint8                  idxArr_u8;            /* array index (last written timestamp)          */
    uint8                  cntLtcyErr_u8;        /* latency error counter (MOK ISR)               */
    uint8                  stSig_u8;             /* various internal status info                  */
}   Pwmin_MokBuff_t;

/************************************************/
/* this is the Pwm configuration data structure */
/************************************************/
typedef const struct
{
    Pwmin_BlockRef_t       regSrsc_p;         /* pointer to the SRSC register                     */
    Pwmin_Ucport_t         numUcPort;         /* port the signal is connected to                  */
    Pwmin_Ucpin_t          numUcPin;          /* pin           - . -                              */
    Pwmin_Hwepwmmethod_t   swtHwePwmMethod;   /* how the signal is analysed                       */
    Pwmin_BlockRef_t       regBlockRef_p;     /* pointer to the DCM, LTC, ....                    */
    Pwmin_BuffAddr_t       xBuffAddr_ps;      /* pointer to the Timer Data buffer (data from PCP) */
    Pwmin_Dur_t            tiMaxPeriod;       /* maximum input period                             */
    Pwmin_Keep_t*          xKeep_ps;          /* pointer to keep data buffer                      */
    Pwmin_BitPos_t         bpSrsc;            /* bit position within SRSC register                */
    Pwmin_Inverted_t       swInversion;       /* normal or inverted input signal                  */
}   Pwmin_Config_t;

typedef Pwmin_Config_t* Pwmin_Signal_t;       /* defining Pwmin_Signal_t pointer type             */

/* alternator load evaluation configuration data                                                  */
typedef const struct
{
    Pwmin_Ucport_t         numUcPort;         /* port the signal is connected to                  */
    Pwmin_Ucpin_t          numUcPin;          /* pin           - . -                              */
    Pwmin_Hwepwmmethod_t   swtHwePwmMethod;   /* how the signal is analysed                       */
    Pwmin_BlockRef_t       regBlockRef_p;     /* pointer to the DCM, LTC, ....                    */
    Pwmin_GenLoadBuffer_t* xBuffAddr_ps;      /* pointer to the Timer Data buffer (data from PCP) */
    Pwmin_BlockRef_t       regSrc_p;          /* pointer to the service request node              */
    Pwmin_Inverted_t       swInversion;       /* normal or inverted input signal                  */
}   Pwmin_DcConfig_t;

/* MOK configuration data structure                                                               */
typedef const struct
{
    Pwmin_MokBuff_t*       xBuffXt_ps;        /* pointer to extended Data Buffer                  */
    Pwmin_Ucport_t         numUcPort;         /* port the signal is connected to                  */
    Pwmin_Ucpin_t          numUcPin;          /* pin           - . -                              */
    Pwmin_BlockRef_t       regBlockRef_p;     /* pointer to the GTCCTR register                   */
    Pwmin_BlockRef_t       regSrn_p;          /* pointer to SRN register                          */
}   Pwmin_MokCfg_t;

typedef Pwmin_MokCfg_t* Pwmin_MokSig_t;       /* defining Pwmin_MokSig_t pointer type             */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
/* extern declaration of configuration data structure for ...                                     */
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern Pwmin_Config_t        Pwmin_ConfigData_a[];              /* standard Pwmin functions       */
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__50ms_1s__constant__s32__START
extern Pwmin_MokCfg_t        Pwmin_MokCfgData_a[];              /* MOK Pwmin functions            */
__PRAGMA_USE__pwm__50ms_1s__constant__s32__END

__PRAGMA_USE__CODE__pwm__HighSpeed__START
extern void PwmIn_Mok_Isr(uint idx);
__PRAGMA_USE__CODE__pwm__HighSpeed__END

__PRAGMA_USE__CODE__pwm__NormalSpeed__START
extern void Pwm_StartGenLoad  (void);
extern void Pwm_StopGenLoad   (void);
extern void Pwm_GetGenLoad    (Pwmin_DcResult_t* xResult_ps);
extern void Pwm_GetMok        (uint idx, const Pwmin_MokCalibration_t* dCalib_pcs, Pwmin_MokResult_t* xResult_ps);
extern void PwmIn_Mok_Enbl    (uint idxSig_e, Pwm_Mok_Type_e swtMokType_e);
extern void PwmIn_Mok_Cfg     (uint idxSig_e, Pwm_Mok_Type_e swtMokType_e);
extern void PwmIn_Mok_Disbl   (uint idxSig_e);
__PRAGMA_USE__CODE__pwm__NormalSpeed__END
__PRAGMA_USE__CODE__pwm__LowSpeed__START
extern void PwmIn_Proc_Ini    (void);
__PRAGMA_USE__CODE__pwm__LowSpeed__END

/* _PWMIN_PUB_H                                                                                   */
#endif
