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
 * $Filename__:pwmin_inl.h$
 *
 * $Author____:LENZSI$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SYA2COB$
 * $Date______:14.10.2015$
 * $Class_____:SWHDR$
 * $Name______:pwmin_inl$
 * $Variant___:1.23.1$
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
 * 1.23.1; 0     14.10.2015 SYA2COB
 *   Fix in  PWMINDCMDIRECT method
 * 
 * 1.23.0; 0     13.10.2014 MVA8COB
 *   -
 *   Implementation of Monitoring functionality for PWMINDCMIRQ method in the 
 *   mainline in sdom.
 * 
 * 1.22.0; 1     13.08.2014 MVA8COB
 *   Review comments updated
 * 
 * 1.22.0; 0     09.08.2014 MVA8COB
 *   Monitoring functionality for PWMINLTCPERDIRECTXXX method
 * 
 * 1.20.3; 0     11.10.2013 MVA8COB
 *   For a Valid Signal Pwm_In function will return Period and DutyCycle value 
 *   as Zero,for LTCDIRECT method.
 * 
 * 1.19.0; 2     15.11.2012 KRN2COB
 *   TRAP reported by few project which is linked to the PwmIn monitoring 
 *   function PwmIn_Mon.
 *   
 *   If no MOK signal is configured this changes is not required.
 * 
 * 1.19.0; 1     13.07.2012 KRN2COB
 *   Bugfix for LTCDIRECT and DCMDIRECT for NO Safe Error Detection
 * 
 * 1.19.0; 0     12.10.2011 KRN2COB
 *   To avoid wrong duty cycle(Duty cycle greater than 100 percentage) which is 
 *   return from PWMIN Methods
 * 
 * 1.18.0; 1     04.05.2011 PSP1COB
 *   Implementation of Monitoring function for PWMIn_LtcDirect
 * 
 * 1.18.0; 0     27.04.2011 PSP1COB
 *   Implementation of Monitoring functionality for LTCDirect
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _PWMIN_INL_H
#define _PWMIN_INL_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      PwmIn - Pulse Width Modulated Input Signals
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes of inline functions
 ***************************************************************************************************
 */
static __inline__ void Pwm_InMon (Pwmin_Signal_t   xSig_pcs,
                                  PwmIn_MonRslt_t* xLocMon_ps) __attribute__ (( always_inline ));

static __inline__ void PwmIn_GtcIrqInl (Pwmin_Signal_t   xSig_pcs,
                                        Pwmin_Result_t*  xResult_ps,
                                        PwmIn_MonRslt_t* xLocMon_ps) __attribute__ (( always_inline ));

static __inline__ void PwmIn_DcmDrctInl (Pwmin_Signal_t    xSig_pcs,
                                         Pwmin_Result_t*   xResult_ps,
                                         PwmIn_MonRslt_t*  xLocMon_ps) __attribute__ (( always_inline ));

static __inline__ void PwmIn_LtcDrctInl (Pwmin_Signal_t    xSig_pcs,
                                         Pwmin_Result_t*   xResult_ps,
                                         PwmIn_MonRslt_t*  xLocMon_ps) __attribute__ (( always_inline ));

static __inline__ void PwmIn_LtcPerDrctInl (Pwmin_Signal_t    xSig_pcs,
                                            Pwmin_ResultPer_t*   xResult_ps,
                                            PwmIn_MonRslt_t*  xLocMon_ps) __attribute__ (( always_inline ));

static __inline__ void PwmIn_DcmIrqInl (Pwmin_Signal_t    xSig_pcs,
                                        Pwmin_ResultXt_t* xResult_ps,
                                        PwmIn_MonRslt_t*  xLocMon_ps) __attribute__ (( always_inline ));
/**
 ***************************************************************************************************
 * Static PwmIn_GtcIrqInl function for monitoring purposes.
 *
 * This inline function is called by:
 * - Pwmin_GtcIrq() for normal functionality. In this case xLocMon_ps nust be NULL!
 * - Monitoring SW for monitoring a GTCIRQ input signal. Function is called indirect via Pwm_InMon()
 *   In this case xResult_ps nust be NULL!
 *
 * \param         Pwmin_Signal_t    xSig_pcs
 * \param         Pwmin_ResultXt_t* xResult_ps
 * \param         PwmIn_MonRslt_t*  xLocMon_ps
 * \return        -
 * \seealso
 * \usedresources tbd
 ***************************************************************************************************
 */
static __inline__ void PwmIn_GtcIrqInl (Pwmin_Signal_t    xSig_pcs,
                                        Pwmin_Result_t*   xResult_ps,
                                        PwmIn_MonRslt_t*  xLocMon_ps)
{
    uint32 tiDstBufUpd_u32;                      /* distance between two buffer updates           */
    uint32 tiLastLoHi_u32;                       /* current Lo-Hi capture                         */
    uint32 tiLastHiLo_u32;                       /* current Hi-Lo capture                         */
    uint32 tiPeriod_u32;                         /* local result for period                       */
    uint32 tiPulseDur_u32;                       /* local result for highdur                      */
    uint32 tiEdgeSysTime_u32;                    /* system time of the last Hi-Lo edge            */
    uint32 rDutycycle_u32;                       /* local result for dutycycle                    */
    uint32 tiCurrentSysTime_u32;                 /* current system time                           */
    uint32 ctCounter2_u32;                       /* period counter before reading buffer contents */
    uint32 ctCounter1_u32;                       /* period counter after  reading buffer contents */
    uint32 tiPreviousLoHi_u32;                   /* timestamp of the last Lo-Hi edge              */
    uint8  ctCounter0_u8 = 0;                    /* local loop counter                            */
    uint8  stSignal_u8 = 0;                      /* status bitfield                               */
    uint8  numPort_u8;                           /* signal port number                            */
    uint8  numPin_u8;                            /* signal pin number                             */
    bool   stPinstate_b;                         /* present signal state                          */

    /* MISRA RULE 45 VIOLATION: cast to a different pointer type necessary here!                  */
    Pwmin_GtcBuffer_t *xBuffer_ps =
                       (Pwmin_GtcBuffer_t*) xSig_pcs->xBuffAddr_ps;  /* pointer to pcp buffer     */
    Pwmin_Keep_t *xKeep_ps        =         xSig_pcs->xKeep_ps;      /* pointer to keep struct    */
    numPort_u8                    = (uint8) xSig_pcs->numUcPort;     /* signal's port number      */
    numPin_u8                     = (uint8) xSig_pcs->numUcPin;      /* signal's pin number       */

    /*************************************/
    /* reading buffer with data from pcp */
    /* and current GT0 timer value       */
    /*************************************/
    do
    {
        ctCounter1_u32        = xBuffer_ps->Pwmin_ctUpdateCounter1;  /* read update counter       */
        CPU_SET_SEQUENCE_POINT();
        tiLastLoHi_u32        = xBuffer_ps->Pwmin_tiTimestamp1;      /* read last period          */
        tiLastHiLo_u32        = xBuffer_ps->Pwmin_tiTimestamp2;      /* read last high time dur   */
        tiEdgeSysTime_u32     = xBuffer_ps->Pwmin_tiSysTime;         /* read system time of the
                                                                         last start of period     */
        tiPreviousLoHi_u32    = xBuffer_ps->Pwmin_tiTimestamp3;      /* previous Lo-Hi capture    */
        CPU_SET_SEQUENCE_POINT();
        ctCounter2_u32        = xBuffer_ps->Pwmin_ctUpdateCounter2;  /* read update counter again
                                                                        to ensure consistent data */
        stPinstate_b          = Port_DioGet(numPort_u8, numPin_u8);  /* read the current pinstate */
        tiCurrentSysTime_u32  = Cpu_GetTIM0;                         /* read current systime      */
        ctCounter0_u8++;                                             /* raise overflow counter    */
    }
    while ( (ctCounter1_u32 != ctCounter2_u32) && (ctCounter0_u8 < PWMIN_MAXNUMLOOPS) );

    /* check if buffer read succeded; if not, restore former values                               */
    /* this can only happen if the buffer update has been interfered and                          */
    /* is then blocked for a rather long time                                                     */
    if (ctCounter1_u32 != ctCounter2_u32)
    {
        ctCounter2_u32      = xKeep_ps->Pwmin_ctUpdateCounter1;      /* read update counter       */
        tiLastLoHi_u32      = xKeep_ps->Pwmin_tiTimestamp1;          /* read last period          */
        tiLastHiLo_u32      = xKeep_ps->Pwmin_tiTimestamp2;          /* read last high time dur   */
        tiEdgeSysTime_u32   = xKeep_ps->Pwmin_tiSysTime;             /* read system time of the
                                                                         last start of period     */
        tiPreviousLoHi_u32  = xKeep_ps->Pwmin_tiTimestamp3;          /* previous Lo-Hi capture    */
        stSignal_u8        |= ( PWMIN_SET << PWMIN_NONEWPERIOD_POS );
    }

    /****************************/
    /* storing current pinstate */
    /****************************/
    stSignal_u8 |= (uint8)( stPinstate_b << PWMIN_PINSTATE_POS );

    /* calculate distance between two most recent buffer updates */
    /* special treatment if a buffer update has just occured     */
    if ( xKeep_ps->Pwmin_ctUpdateCounter1 != ctCounter2_u32 )
    {
        tiDstBufUpd_u32 = CPU_TICKS_TO_US(tiEdgeSysTime_u32 - xKeep_ps->Pwmin_tiSysTime);
    }
    else
    {
        tiDstBufUpd_u32 = CPU_TICKS_TO_US(tiEdgeSysTime_u32 - xKeep_ps->tiSysTime2);
    }

    /**********************************************/
    /* analyse GTC timestamps                     */
    /* check for valid/invalide signal conditions */
    /**********************************************/
    /* if (time since last buffer update) > (maximium allowed period)                             */
    /* offset of 1000 us is subtracted to consider interrupt latencies and runtimes               */
    if ( (tiCurrentSysTime_u32 - tiEdgeSysTime_u32) >
                           (CPU_US_TO_TICKS((GPTA_GT0_TICKS_TO_US(GPTA_MAX_GT0_TICKS)) - 1000ul )) )
    {
        /* then period exceeds maximum value, frequency == 0                                      */
        tiPeriod_u32   = 0;
        tiPulseDur_u32 = 0;
        rDutycycle_u32 = 0;
        stSignal_u8   |= ( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
        stSignal_u8   |= ( PWMIN_SET << PWMIN_TIMEROVERFLOW_POS );
        xKeep_ps->stOvrflw_u8 = 0x2;
    }
    /* check time distance of last buffer update and the one before against GPTA_MAX_GT0_TICKS    */
    else if ( tiDstBufUpd_u32 > ((GPTA_GT0_TICKS_TO_US(GPTA_MAX_GT0_TICKS)) - 1000ul ) )
    {
        /* This means a recent (t < MAX_GT0) update is available but the previous one is more
           than 6,7 s in the past, so signal is still invalid */
        tiPeriod_u32   = 0;
        tiPulseDur_u32 = 0;
        rDutycycle_u32 = 0;
        stSignal_u8   |= ( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
        stSignal_u8   |= ( PWMIN_SET << PWMIN_TIMEROVERFLOW_POS );
        // new xKeep_ps->stOvrflw_u8 value depends on current value
        // if state is already 0x2, decrease it to 0x1 if a buffer update is detected
        if ((xKeep_ps->Pwmin_ctUpdateCounter1 != ctCounter2_u32) && (xKeep_ps->stOvrflw_u8 == 0x2))
        {
            xKeep_ps->stOvrflw_u8 = 0x1;
        }
        // if state is 0x0, set to 0x2 unconditionally
        // this happens if a ~6,7 s cyle is applied directly after a normal (0x0) one
        else if ( xKeep_ps->stOvrflw_u8 == 0x0 )
        {
            xKeep_ps->stOvrflw_u8 = 0x2;
        }
        else
        {
            // do not modify stOvrflw_u8
        }

    }
    /* Check Max time period violation (only in normal mode)                                      */
    else if (  ((tiCurrentSysTime_u32 - tiEdgeSysTime_u32) > (CPU_US_TO_TICKS(xSig_pcs->tiMaxPeriod)))
            && (xKeep_ps->stOvrflw_u8 == 0x0)
            )
    {
        /* then period exceeds maximum value, frequency == 0                                      */
        tiPeriod_u32   = 0;
        tiPulseDur_u32 = 0;
        rDutycycle_u32 = 0;
        stSignal_u8   |= ( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
    }
    else
    {
        /* first check if current state is 0x2 (to catch TIM0 overflow)                           */
        if ( xKeep_ps->stOvrflw_u8 == 0x2 )
        {
            /* discard buffer information, reset stOvrflw_u8  */
            tiPeriod_u32   = 0;
            tiPulseDur_u32 = 0;
            rDutycycle_u32 = 0;
            stSignal_u8   |= ( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
            stSignal_u8   |= ( PWMIN_SET << PWMIN_TIMEROVERFLOW_POS );

            /* decrenment stOvrflw_u8 only if a buffer update is available */
            if ( xKeep_ps->Pwmin_ctUpdateCounter1 != ctCounter2_u32 )
            {
                xKeep_ps->stOvrflw_u8 = 0x1;
            }
        }
        else if (  (  ( xKeep_ps->stOvrflw_u8 == 0x1 )
                   && ( xKeep_ps->Pwmin_ctUpdateCounter1 != ctCounter2_u32 )
                   )
                   ||
                   ( xKeep_ps->stOvrflw_u8 == 0x0 )
                )
        {
            /******************************************/
            /* calculating period & hightime duration */
            /******************************************/
            tiPeriod_u32 = tiLastLoHi_u32 - tiPreviousLoHi_u32;
            /* 24 bit overflow correction                                                         */
            tiPeriod_u32 = tiPeriod_u32 & 0x00FFFFFFul;
            tiPeriod_u32 = GPTA_GT0_TO_GPTACLC_TICKS(tiPeriod_u32);

            if ( ( tiPeriod_u32 > (uint32)(GPTA_US_TO_TICKS_F(xSig_pcs->tiMaxPeriod)) ) ||
                 ( tiPeriod_u32 == 0x0ul )
               )
            {
                /* then period exceeds maximum value, frequency == 0                              */
                tiPeriod_u32   = 0;
                tiPulseDur_u32 = 0;
                rDutycycle_u32 = 0;
                stSignal_u8   |= ( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
            }
            else
            {
                /* normal operation, calculate pulse duration and cutycycle                       */
                tiPulseDur_u32 = tiLastHiLo_u32 - tiPreviousLoHi_u32;
                /* 24 bit overflow correction                                                     */
                tiPulseDur_u32 = tiPulseDur_u32 & 0x00FFFFFFul;
                tiPulseDur_u32 = GPTA_GT0_TO_GPTACLC_TICKS(tiPulseDur_u32);

                /**************************/
                /* calculating duty cycle */
                /**************************/
                rDutycycle_u32 = (uint32)SrvB_MulDiv32(10000L,
                                 (sint32)tiPulseDur_u32,
                                 (sint32)tiPeriod_u32);
            }
            xKeep_ps->stOvrflw_u8 = 0x0;
        }
        /* xKeep_ps->stOvrflw_u8 = 0x1 but no buffer update has occured, this means that
           after a GT0 overflow a first edge has occured but the second not yet                   */
        else
        {
            /* discard buffer information, do not modify stOvrflw_u8                              */
            tiPeriod_u32   = 0;
            tiPulseDur_u32 = 0;
            rDutycycle_u32 = 0;
            stSignal_u8   |= ( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
        }
    }

    /* update keep structure with latest data */
    if (ctCounter2_u32 != xKeep_ps->Pwmin_ctUpdateCounter1 )
    {
        /* new data has been received                                                             */
        /* update keep buffer with new data from PCP                                              */
        xKeep_ps->Pwmin_tiTimestamp1     = tiLastLoHi_u32;
        xKeep_ps->Pwmin_tiTimestamp2     = tiLastHiLo_u32;
        xKeep_ps->Pwmin_tiTimestamp3     = tiPreviousLoHi_u32;
        xKeep_ps->tiSysTime2             = xKeep_ps->Pwmin_tiSysTime;
        xKeep_ps->Pwmin_tiSysTime        = tiEdgeSysTime_u32;
        xKeep_ps->Pwmin_ctUpdateCounter1 = ctCounter2_u32;
    }
    else
    {
        stSignal_u8 |= ( PWMIN_SET << PWMIN_NONEWPERIOD_POS );
    }

    /* filling of special structure if demanded                                                   */
    if (xLocMon_ps != NULL)
    {
        ((PwmIn_MonRslt_t*)xLocMon_ps)->tiPer     = tiPeriod_u32;            /* period            */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->tiHighDur = tiPulseDur_u32;          /* pulse duration    */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->stSig     = stSignal_u8;             /* status bitfield   */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->sumChk    = (tiPeriod_u32 ^
                                                     tiPulseDur_u32 ^
                                                     (uint32)stSignal_u8);
    }
    else
    {
        /************************************/
        /* writing data to result structure */
        /************************************/
        xResult_ps->Pwmin_tiHighdur  = tiPulseDur_u32;                       /* pulse duration    */
        xResult_ps->Pwmin_tiPeriod   = tiPeriod_u32;                         /* period            */
        xResult_ps->Pwmin_rDutycycle = rDutycycle_u32;                       /* dutycycle         */
        xResult_ps->Pwmin_stSignal   = stSignal_u8;                          /* signal staus info */
    }
}


/**
 ***************************************************************************************************
 * Static PwmIn_DcmDrctInl function for monitoring purposes.
 *
 * This inline function is called by:
 * - Pwmin_DcmDirect() for normal functionality (in this case xLocMon_ps nust be NULL)
 * - Monitoring SW for monitoring a DCMDIRECT input signal. Call is indirect either via Pwm_InMon()
 * (new interface) or via PwmIn_DcmDirectMon() (old interface). In this case xResult_ps nust be NULL!
 *
 * \param         Pwmin_Signal_t   xSig_pcs
 * \param         Pwmin_Result_t*  xResult_ps
 * \param         PwmIn_MonRslt_t* xLocMon_ps
 * \return        -
 * \seealso
 * \usedresources tbd
 ***************************************************************************************************
 */
static __inline__ void PwmIn_DcmDrctInl (Pwmin_Signal_t   xSig_pcs,
                                         Pwmin_Result_t*  xResult_ps,
                                         PwmIn_MonRslt_t* xLocMon_ps)
{
    uint32           tiPeriod_u32;               /* local result for period                       */
    uint32           tiPulseDur_u32;             /* local result for highdur                      */
    uint32           tiTimer_u32;                /* local storage for current timer value         */
    uint32           rDutycycle_u32 = 0;         /* local result for dutycycle                    */
    uint32           tiSysTime_u32;              /* local storage for system time                 */
    uint8            numPort_u8;                 /* signal port number                            */
    uint8            numPin_u8;                  /* signal pin number                             */
    uint8            stSignal_u8 = 0;            /* signal state bitfield                         */
    uint8            ctLoop_u8 = 0;              /* local loop counter                            */
    bool             stPin1_b;                   /* pinstate before reading capture values        */
    bool             stPin2_b;                   /* pinstate before reading capture values        */
    bool             stCtReset_b = FALSE;        /* DCMTIM overflow status                        */

    /******************************/
    /* reading configuration data */
    /******************************/
    Pwmin_Keep_t     *xKeep_ps      =        xSig_pcs->xKeep_ps;      /* ptr to keep struct       */
    Pwmin_BlockRef_t regDcmTim_pu32 =        xSig_pcs->regBlockRef_p; /* DCM timer cell adr       */
    Pwmin_BlockRef_t regSrsc_pu32   =        xSig_pcs->regSrsc_p;     /* pointer to SRSC register */
    Pwmin_BitPos_t   bpSrs_u8       =        xSig_pcs->bpSrsc;        /* bit position within SRSC */
    numPort_u8                      = (uint8)xSig_pcs->numUcPort;     /* signal port              */
    numPin_u8                       = (uint8)xSig_pcs->numUcPin;      /*  & pin number            */

    /******************************************/
    /* reading DCM timer values & system time */
    /******************************************/
    do
    {
        stPin1_b       = Port_DioGet(numPort_u8, numPin_u8);    /* read current signal/pin state  */
        tiPeriod_u32   = regDcmTim_pu32[1];                     /* read DCMCAVx                   */
        tiPulseDur_u32 = regDcmTim_pu32[2];                     /* read DCMCOVx                   */
        tiTimer_u32    = regDcmTim_pu32[0];                     /* read DCMTIMx                   */
        stCtReset_b    = SrvB_GetBit(*regSrsc_pu32, bpSrs_u8);  /* overflow happened?             */
        tiSysTime_u32  = Cpu_GetTIM0;                           /* read system timer (TIM0)       */
        stPin2_b       = Port_DioGet(numPort_u8, numPin_u8);    /* read current signal/pin state  */
        ctLoop_u8++;                                            /* raise counter                  */
    }
    /* signal state must not change; if it did, read again (limited to PWMIN_MAXNUMLOOPS)         */
    while ( (stPin1_b != stPin2_b) && (ctLoop_u8 < PWMIN_MAXNUMLOOPS) );

    /****************************/
    /* storing current pinstate */
    /****************************/
    SrvB_PutBit (stSignal_u8, PWMIN_PINSTATE_POS, stPin1_b);

    /*********************/
    /* signal evaluation */
	/* If tiPulseDur_u32 greater than tiPeriod_u32 which means*/
	/* New Pulse Duriation Value and Older Period Duriation Value*/
	/* are taken as input to calculate Dutycycle,which intern produce*/
	/* wrong Dutycycle Value(Dutycycle greater than 100%),to avoid Wrong */
	/* Dutycycle restore older Pulse and Period Values to corresponding*/
	/* variables of tiPulseDur_u32 and tiPeriod_u32*/
    /* If the tiPeriod_u32 is a valid non-zero value and tiPulseDur_u32 is*/
    /* 0x00FFFFFFul then the Duty cycle calculations should be done based*/
    /* on this valid tiPeriod_u32 and the stored valid Pulse value in Keep buffer*/
    /*********************/
    if ( (tiPeriod_u32 == 0ul) || ((tiPulseDur_u32 != 0x00FFFFFFul) && (tiPulseDur_u32 > tiPeriod_u32)))
    {
        /* no period duration has been captured                                                   */
        SrvB_SetBit(stSignal_u8, PWMIN_NONEWPERIOD_POS);

        /* now check if a DCMTIM overflow happened?                                               */
        if ( ( stCtReset_b != FALSE )  &&
             ((tiSysTime_u32 - xKeep_ps->Pwmin_tiSysTime) > CPU_US_TO_TICKS(xSig_pcs->tiMaxPeriod))
           )
        {
            /* out of dynamic range of hardware                                                   */
            xKeep_ps->Pwmin_firstPeriod_b = TRUE;
            tiPeriod_u32   = 0;
            tiPulseDur_u32 = 0;
            SrvB_SetBit(stSignal_u8, PWMIN_TIMEROVERFLOW_POS);
            SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
        }
        /* no overflow happened, now check for first period bit                                   */
        else
        {
            /* discard first captured period                                                      */
            if (xKeep_ps->Pwmin_firstPeriod_b != FALSE)
            {
                /* still out of dynamic range of hardware                                         */
                tiPeriod_u32   = 0;
                tiPulseDur_u32 = 0;
                SrvB_SetBit(stSignal_u8, PWMIN_TIMEROVERFLOW_POS);
                SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
            }
            else
            {
                /* no new capture but no overflow                                                 */
                /* check current DCM timer for period duration range                              */
                if (tiTimer_u32 > GPTA_US_TO_TICKS(xSig_pcs->tiMaxPeriod))
                {
                    /* max period duration exceeded */
                    SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
                    tiPeriod_u32   = 0;
                    tiPulseDur_u32 = 0;
                }
                else
                {
                    /* simply no new data has been captured, restore old vaues                    */
                    tiPeriod_u32   = xKeep_ps->Pwmin_tiTimestamp2;
                    tiPulseDur_u32 = xKeep_ps->Pwmin_tiTimestamp3;
                }
            }
        }
    }
    else
    {
        /* a new period duration has been captured                                                */
        if (xKeep_ps->Pwmin_firstPeriod_b != FALSE)
        {
            /* new edge has been detected, could be first after overflow, restart                 */
            xKeep_ps->Pwmin_firstPeriod_b = FALSE;
            tiPeriod_u32   = 0;                                        /* period                  */
            tiPulseDur_u32 = 0;                                        /* pulse duration          */
            rDutycycle_u32 = 0;                                        /* dutycycle               */
            SrvB_SetBit(stSignal_u8, PWMIN_NONEWPERIOD_POS);
            SrvB_SetBit(stSignal_u8, PWMIN_TIMEROVERFLOW_POS);
            SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);

            /************************************************************************/
            /* erasing DCM capture registers only if both values have been captured */
            /************************************************************************/
            regDcmTim_pu32[2] = 0x00FFFFFFul;                          /* erase DCMCOVx           */
            regDcmTim_pu32[1] = 0;                                     /* erase DCMCAVx           */

        }
        else
        {
            /* this is the regular case                                                           */
            if (tiPulseDur_u32 == 0x00FFFFFFul)
            {
                 /* no new pulse duration has been captured, restore old one                      */
                tiPulseDur_u32 = xKeep_ps->Pwmin_tiTimestamp3;
            }
            else
            {
                /* save pulse duration (DCMCOV) value                                             */
                xKeep_ps->Pwmin_tiTimestamp3 = tiPulseDur_u32;
                regDcmTim_pu32[2] = 0x00FFFFFFul;                        /* erase DCMCOVx         */
            }

            /************************************************************************/
            /* erasing DCM capture registers only if a new period has been captured */
            /************************************************************************/
            regDcmTim_pu32[1] = 0;                                       /* erase DCMCAVx         */

            /*************************************************/
            /* filling keep buffer with current timer values */
            /*************************************************/
            xKeep_ps->Pwmin_tiTimestamp1 = tiTimer_u32;                  /* saving DCMTIM value   */
            xKeep_ps->Pwmin_tiTimestamp2 = tiPeriod_u32;                 /* saving DCMCAV value   */
            xKeep_ps->Pwmin_tiSysTime    = tiSysTime_u32;                /* saving systime        */
        }
        /* additionally, ersae overflow bit                                                       */
        *regSrsc_pu32 = (uint32)(0x1 << bpSrs_u8);
    }

    /* check for max period violation                                                             */
    if ( tiPeriod_u32 > GPTA_US_TO_TICKS(xSig_pcs->tiMaxPeriod) )
    {
        /* captured period is too large but still within dynamic range of hardware                */
        tiPeriod_u32   = 0;
        tiPulseDur_u32 = 0;
        SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
    }

    /* filling of special structure if demanded                                                   */
    if (xLocMon_ps != NULL)
    {
        ((PwmIn_MonRslt_t*)xLocMon_ps)->tiPer     = tiPeriod_u32;            /* period            */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->tiHighDur = tiPulseDur_u32;          /* pulse duration    */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->stSig     = stSignal_u8;             /* status bitfield   */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->sumChk    = (tiPeriod_u32 ^
                                                     tiPulseDur_u32 ^
                                                     (uint32)stSignal_u8);
    }
    else
    {
        /**************************/
        /* calculating duty cycle */
        /**************************/
        if ( tiPeriod_u32 != 0ul )
        {
            rDutycycle_u32 = (uint32)SrvB_MulDiv32(10000L,(sint32)tiPulseDur_u32,(sint32)tiPeriod_u32);
        }
        else
        {
            SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
        }

        /************************************/
        /* writing data to output structure */
        /************************************/
        xResult_ps->Pwmin_tiPeriod   = tiPeriod_u32;                     /* period                */
        xResult_ps->Pwmin_tiHighdur  = tiPulseDur_u32;                   /* pulse duration        */
        xResult_ps->Pwmin_rDutycycle = rDutycycle_u32;                   /* dutycycle             */
        xResult_ps->Pwmin_stSignal   = stSignal_u8;                      /* status bitfield       */
    }
}


/**
 ***************************************************************************************************
 * Static PwmIn_LtcDrctInl function for monitoring purposes.
 *
 * This inline function is called by:
 * - Pwmin_Ltcdirect() for normal functionality. In this case xLocMon_ps must be NULL!
 * - Monitoring SW for monitoring a LTC input signal. Function is called indirect via Pwm_InMon()
 *   In this case xResult_ps must be NULL!
 *
 * \param         Pwmin_Signal_t    xSig_pcs
 * \param         Pwmin_ResultXt_t* xResult_ps
 * \param         PwmIn_MonRslt_t*  xLocMon_ps
 * \return        -
 * \seealso
 * \usedresources tbd
 ***************************************************************************************************
 */
static __inline__ void PwmIn_LtcDrctInl (Pwmin_Signal_t    xSig_pcs,
                                        Pwmin_Result_t*   xResult_ps,
                                        PwmIn_MonRslt_t*  xLocMon_ps)
{
    uint32 tiPeriod_u32;                           /* local result for period                     */
    uint32 tiPulseDur_u32;                         /* local result for pulse duration             */
    uint32 tiTimer_u32;                            /* local storage for current timer value       */
    uint32 rDutycycle_u32 = 0;                     /* local result for dutycycle                  */
    uint32 tiSysTime_u32;                          /* local storage for system time               */
    uint32 tiMaxLtcTim_u32;                        /* maximum LTC period duration                 */
    uint8  numPort_u8;                             /* signal port number                          */
    uint8  numPin_u8;                              /* signal pin number                           */
    uint8  counter_u8 = 0;                         /* local loop counter                          */
    uint8  stSignal_u8 = 0;                        /* signal state bitfield                       */
    bool   stPinstate1_b;                          /* pinstate before reading capture values      */
    bool   stPinstate2_b;                          /* pinstate after reading capture values       */
    Pwmin_Result_t tmpResult_s = {0,0,0,0};        /* Local structure to store the result         */
	uint32 regSrscX_u32;                           /* local SRSCx snapshot                        */
	uint32 stSrsc_u32;							   /* masked and shifted SRSCx bits               */

    /******************************/
    /* reading configuration data */
    /******************************/
    Pwmin_Keep_t     *xKeep_ps   =        xSig_pcs -> xKeep_ps;      /* pointer to keep structure */
    Pwmin_BlockRef_t regLtc_pu32 =        xSig_pcs -> regBlockRef_p; /* pointer to timer cells    */
	Pwmin_BlockRef_t regSrsc_cpu32 =      xSig_pcs -> regSrsc_p;     /* pointer to SRSC register  */
	Pwmin_BitPos_t   bpSrs_cu8   = 		  xSig_pcs -> bpSrsc;        /* bit position within SRSC  */
    numPort_u8                   = (uint8)xSig_pcs -> numUcPort;     /* signal port number        */
    numPin_u8                    = (uint8)xSig_pcs -> numUcPin;      /* signal pin number         */

    /******************************************/
    /* reading LTC timer values & system time */
    /******************************************/
    do
    {
        stPinstate1_b  = Port_DioGet (numPort_u8, numPin_u8);      /* read signal state           */
        tiPeriod_u32   = regLtc_pu32[3];                           /* read out period duration    */
        tiPulseDur_u32 = regLtc_pu32[5];                           /* read out pulse duration     */
        tiTimer_u32    = regLtc_pu32[1];                           /* read out LTC timer          */
        tiSysTime_u32  = Cpu_GetTIM0;                              /* read system timer (TIM0)    */
        stPinstate2_b  = Port_DioGet (numPort_u8, numPin_u8);      /* read signal state           */
        counter_u8++;                                              /* raise counter               */
    }
    /* signal state must not change; if it did, read again (limited to PWMIN_MAXNUMLOOPS)         */
    while ( (stPinstate2_b != stPinstate1_b) && (counter_u8 < PWMIN_MAXNUMLOOPS) );
	regSrscX_u32 = *regSrsc_cpu32;                                   /* get full SRSCx content    */

    /****************************/
    /* storing current pinstate */
    /****************************/
    stSignal_u8 |= (uint8)( stPinstate2_b << PWMIN_PINSTATE_POS );

	// action bit truth table:
    //
    //  capture  |  timer  |  conclusion
    // ----------+---------+-----------------------------------------------------
    //     0     |    0    | Nothing happened since last function call
    //     0     |    1    | Timer overflow but no capture event --> no signal
    //     1     |    0    | Invalid condition, is catched by upper loop
    //           |         |  Can be seen a short time during capturing a signal edge
    //     1     |    1    | Capture event, a new cycle period has been captured
    //
    // clear only action bits which have been set within SRSCx register
    // mask only two appropriate bits
	uint32 xMask_u32 = (uint32)(0x3 << (bpSrs_cu8));

	/* mask LTCn and LTCn+1 bits, erase all other bits                                        */
	regSrscX_u32 &= xMask_u32;

	/* right align bits for further processing                                                */
	stSrsc_u32 = (regSrscX_u32 >> bpSrs_cu8);
	if(stSrsc_u32 == 0x2)
	{
		stSrsc_u32 = 0x0;
	}
	if((stSrsc_u32 == 0x3 || stSrsc_u32 == 0x0) && xKeep_ps->stOvrflw_u8 ==0 )
	{

		/*******************************/
		/* determining max timer count */
		/*******************************/
		switch (xSig_pcs->swtHwePwmMethod)
		{
			case PWMINLTCDIRECT200:
			{
				tiMaxLtcTim_u32 = GPTA_TICKS_TO_US((uint32)MAXUINT16);
				break;
			}
			case PWMINLTCDIRECT025:
			{
				tiMaxLtcTim_u32 = GPTA_TICKS_TO_US((MAXUINT16) << 3);
				break;
			}
			case PWMINLTCDIRECT003:
			{
				tiMaxLtcTim_u32 = GPTA_TICKS_TO_US((MAXUINT16) << 6);
				break;
			}
			default:
			{
				tiMaxLtcTim_u32 = MAXUINT32;                                  /* error case           */
				break;
			}
		}

		/****************************************/
		/* check for a captured period duration */
		/* If tiPulseDur_u32 greater than tiPeriod_u32 which means*/
		/* New Pulse Duriation Value and Older Period Duriation Value*/
		/* are taken as input to calculate Dutycycle,which intern produce*/
		/* wrong Dutycycle Value(Dutycycle greater than 100%),to avoid Wrong*/
		/* Dutycycle restore older Pulse and Period Values to corresponding*/
		/* variables of tiPulseDur_u32 and tiPeriod_u32*/
		/****************************************/
		if ( (tiPeriod_u32 == 0ul) || (tiPulseDur_u32 > tiPeriod_u32))
		{
			/* are we still within max signal period?                                                 */
			if ( (tiSysTime_u32 - xKeep_ps->Pwmin_tiSysTime) < CPU_US_TO_TICKS(tiMaxLtcTim_u32) )
			{
				if ( xKeep_ps->Pwmin_firstPeriod_b == FALSE )
				{
					tiPeriod_u32   = xKeep_ps->Pwmin_tiTimestamp2;                /* restoring period */
					tiPulseDur_u32 = xKeep_ps->Pwmin_tiTimestamp3;			      /* restoring pulse */
					stSignal_u8 |= (uint8)( PWMIN_SET << PWMIN_NONEWPERIOD_POS ); /* no new data flag */
				}
				else /* period is still too large                                                     */
				{
					tiPeriod_u32   = 0;                                       /* period               */
					tiPulseDur_u32 = 0;                                       /* high time duration   */
					rDutycycle_u32 = 0;                                       /* dutycycle            */
					stSignal_u8   |= (uint8)( PWMIN_SET << PWMIN_TIMEROVERFLOW_POS );
					stSignal_u8   |= (uint8)( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
				}
			}
			else
			{
				tiPeriod_u32   = 0;                                           /* period               */
				tiPulseDur_u32 = 0;                                           /* high time duration   */
				rDutycycle_u32 = 0;                                           /* dutycycle            */
				stSignal_u8   |= (uint8)( PWMIN_SET << PWMIN_TIMEROVERFLOW_POS );
				stSignal_u8   |= (uint8)( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
				xKeep_ps->Pwmin_firstPeriod_b = TRUE;
			}
		}
		else
		{
			xKeep_ps->Pwmin_firstPeriod_b = FALSE;
			/*********************************/
			/* erasing LTC capture registers */
			/*********************************/
			regLtc_pu32[3] = 0;                                      /* erase timer cell 2 (period)   */

			/****************************************/
			/* store system time at a detected edge */
			/****************************************/
			xKeep_ps->Pwmin_tiSysTime = tiSysTime_u32;
		}

		/*********************/
		/* signal evaluation */
		/*********************/
		if ( tiPeriod_u32 != 0ul )
		{
			switch (xSig_pcs->swtHwePwmMethod)
			{
				case PWMINLTCDIRECT200:
				{
					tmpResult_s.Pwmin_tiHighdur = tiPulseDur_u32 + 2ul;               /* pulse dur    */
					tmpResult_s.Pwmin_tiPeriod  = tiPeriod_u32 + 2ul;                 /* period       */
					break;
				}
				case PWMINLTCDIRECT025:
				{
					tmpResult_s.Pwmin_tiHighdur = (tiPulseDur_u32 + 2ul) << 3;        /* pulse dur    */
					tmpResult_s.Pwmin_tiPeriod  = (tiPeriod_u32 + 2ul)   << 3;        /* period       */
					break;
				}
				case PWMINLTCDIRECT003:
				{
					tmpResult_s.Pwmin_tiHighdur = (tiPulseDur_u32 + 2ul) << 6;        /* pulse dur    */
					tmpResult_s.Pwmin_tiPeriod  = (tiPeriod_u32 + 2ul)  << 6;         /* period       */
					break;
				}
				default:
				break;
			}
			/* check signal range                                                                     */
			if ( (tmpResult_s.Pwmin_tiPeriod) > GPTA_US_TO_TICKS(xSig_pcs->tiMaxPeriod) )
			{
				stSignal_u8 |= (uint8)( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
				tmpResult_s.Pwmin_tiHighdur = 0;
				tmpResult_s.Pwmin_tiPeriod  = 0;
			}
			else
			{
				/**************************/
				/* calculating duty cycle */
				/**************************/
				rDutycycle_u32 = (uint32)SrvB_MulDiv32(10000L,
													  (sint32)(tiPulseDur_u32 + 2ul),
													  (sint32)(tiPeriod_u32 + 2ul)
													  );
			}
		}
		else
		{
			tmpResult_s.Pwmin_tiPeriod  = 0;
			tmpResult_s.Pwmin_tiHighdur = 0;

			/* period duration == 0, set flags                                                        */
			stSignal_u8 |= (uint8)( PWMIN_SET << PWMIN_TIMEROVERFLOW_POS );
			stSignal_u8 |= (uint8)( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
		}
	}
	else
    {
		xKeep_ps->stOvrflw_u8 =1;
		regLtc_pu32[3] = 0;
		tiPeriod_u32=0;
		rDutycycle_u32=0;
		tiPulseDur_u32=0;
		tmpResult_s.Pwmin_tiHighdur = 0;
		tmpResult_s.Pwmin_tiPeriod  = 0;
		stSignal_u8   |= (uint8)( PWMIN_SET << PWMIN_TIMEROVERFLOW_POS );
		stSignal_u8   |= (uint8)( PWMIN_SET << PWMIN_MAX_PERIOD_VIOLATION_POS );
	}
	if(stSrsc_u32 == 0x3)
	{
		xKeep_ps->stOvrflw_u8 =0;
	}

    tmpResult_s.Pwmin_rDutycycle = rDutycycle_u32;                       /* dutycycle             */
    tmpResult_s.Pwmin_stSignal   = stSignal_u8;                          /* status bitfield       */

    /*************************************************/
    /* filling keep buffer with current timer values */
    /*************************************************/
    xKeep_ps -> Pwmin_tiTimestamp1 = tiTimer_u32;                        /* storing LTC1 value    */
    xKeep_ps -> Pwmin_tiTimestamp2 = tiPeriod_u32;                       /* storing LTC2 value    */
    xKeep_ps -> Pwmin_tiTimestamp3 = tiPulseDur_u32;                     /* storing LTC3 value    */

    /* filling of special structure if demanded                                         */
    if (xLocMon_ps != NULL)
    {
        ((PwmIn_MonRslt_t*)xLocMon_ps)->tiPer     = tmpResult_s.Pwmin_tiPeriod;  /* period          */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->tiHighDur = tmpResult_s.Pwmin_tiHighdur; /* pulse duration  */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->stSig     = tmpResult_s.Pwmin_stSignal;  /* status bitfield */
        ((PwmIn_MonRslt_t*)xLocMon_ps)->sumChk    = (tmpResult_s.Pwmin_tiPeriod ^
                                                     tmpResult_s.Pwmin_tiHighdur ^
                                                     (uint32)tmpResult_s.Pwmin_stSignal);
    }


    else
    {
        /************************************/
        /* writing data to result structure */
        /************************************/
        xResult_ps->Pwmin_tiHighdur  = tmpResult_s.Pwmin_tiHighdur;   /* pulse duration    */
        xResult_ps->Pwmin_tiPeriod   = tmpResult_s.Pwmin_tiPeriod;    /* period            */
        xResult_ps->Pwmin_rDutycycle = tmpResult_s.Pwmin_rDutycycle;  /* dutycycle         */
        xResult_ps->Pwmin_stSignal   = tmpResult_s.Pwmin_stSignal;    /* signal staus info */
    }

}


/**
 ***************************************************************************************************
 * Static PwmIn_LtcPerDrctInl function for monitoring purposes.
 *
 * This inline function is called by:
 * - Pwmin_LtcPerDirect() for normal functionality. In this case xLocMon_ps must be NULL!
 * - Monitoring SW for monitoring a LTC input signal. Function is called indirect via Pwm_InMon()
 *   In this case xResult_ps must be NULL!
 *
 * \param         Pwmin_Signal_t    xSig_pcs
 * \param         Pwmin_ResultPer_t* xResult_ps
 * \param         PwmIn_MonRslt_t*  xLocMon_ps
 * \return        -
 * \seealso
 * \usedresources tbd
 ***************************************************************************************************
 */
static __inline__ void PwmIn_LtcPerDrctInl (Pwmin_Signal_t    xSig_pcs,
                                        Pwmin_ResultPer_t*   xResult_ps,
                                        PwmIn_MonRslt_t*  xLocMon_ps)
{
    uint32 tiPeriod_u32;                           /* local result for period                     */
    uint32 tiTimer_u32;                            /* local storage for current timer value       */
    uint32 tiSys_u32;                              /* system timestamp                            */
    uint32 regSrscX_u32;                           /* local SRSCx snapshot                        */
    uint32 stSrsc_u32;                             /* masked and shifted SRSCx bits               */
    uint8  stSignal_u8 = 0;                        /* signal state bitfield                       */
    bool   stPin_b;                                /* pinstate when reading capture values        */

    if(xSig_pcs != NULL_PTR)
    {
        /******************************/
        /* reading configuration data */
        /******************************/
        Pwmin_Keep_t* const    xKeep_cps     = xSig_pcs -> xKeep_ps;      /* pointer to keep structure */
        const Pwmin_BlockRef_t regLtc_cpu32  = xSig_pcs -> regBlockRef_p; /* pointer to timer cells    */
        const Pwmin_BlockRef_t regSrsc_cpu32 = xSig_pcs -> regSrsc_p;     /* pointer to SRSC register  */
        const Pwmin_BitPos_t   bpSrs_cu8     = xSig_pcs -> bpSrsc;        /* bit position within SRSC  */
        const uint32           tiMaxPer_cu32 = GPTA_US_TO_TICKS(xSig_pcs->tiMaxPeriod);
        const uint32           tiMaxPerUs_cu32 = xSig_pcs->tiMaxPeriod;
        const uint8            numPort_cu8   = (uint8) xSig_pcs -> numUcPort; /* signal port number    */
        const uint8            numPin_cu8    = (uint8) xSig_pcs -> numUcPin;  /* signal pin number     */

        /******************************************/
        /* reading LTC timer values & system time */
        /******************************************/
        tiPeriod_u32 = regLtc_cpu32[3];                                  /* read period               */
        tiTimer_u32  = regLtc_cpu32[1];                                  /* read current timer value  */
        regSrscX_u32 = *regSrsc_cpu32;                                   /* get full SRSCx content    */
        stPin_b      = Port_DioGet(numPort_cu8, numPin_cu8);             /* read signal state again   */
        tiSys_u32    = Cpu_GetSysTicks();                                /* get system timestamp      */

        // extract action bits from SRSx register
        //
        // action bit truth table:
        //
        //  capture  |  timer  |  conclusion
        // ----------+---------+-----------------------------------------------------
        //     0     |    0    | Nothing happened since last function call
        //     0     |    1    | Timer overflow but no capture event --> no signal
        //     1     |    0    | Invalid condition, is catched by upper loop
        //           |         |  Can be seen a short time during capturing a signal edge
        //     1     |    1    | Capture event, a new cycle period has been captured
        //

        /****************************/
        /* storing current pinstate */
        /****************************/
        SrvB_PutBit (stSignal_u8, PWMIN_PINSTATE_POS, stPin_b);

        // clear only action bits which have been set within SRSCx register
        {
            // mask only two appropriate bits
            uint32 xMask_u32 = (uint32)(0x3 << (bpSrs_cu8));

            /* mask LTCn and LTCn+1 bits, erase all other bits                                        */
            regSrscX_u32 &= xMask_u32;

            /* right align bits for further processing                                                */
            stSrsc_u32 = (regSrscX_u32 >> bpSrs_cu8);

            // clear only a full capture event
            if (stSrsc_u32 == 0x3)
            {
                *regSrsc_cpu32 = regSrscX_u32;
            }
        }

        /****************************************************/
        /* scale the possible LTC clocks to GPTA base clock */
        /****************************************************/
        if ( tiPeriod_u32 != 0x0 )
        {
            // when read exactly at reset, the timer returns 0xFFFF
            if ( tiTimer_u32 == 0xFFFF )
            {
                tiTimer_u32 = 0x0;
            }

            switch (xSig_pcs->swtHwePwmMethod)
            {
                case PWMINLTCPERDIRECT200:
                {
                    tiPeriod_u32 = (tiPeriod_u32 + 2ul);
                    tiTimer_u32  = (tiTimer_u32  + 2ul);
                }
                break;
                case PWMINLTCPERDIRECT025:
                {
                    tiPeriod_u32 = (tiPeriod_u32 + 2ul) << 3;
                    tiTimer_u32  = (tiTimer_u32  + 2ul) << 3;
                }
                break;
                case PWMINLTCPERDIRECT003:
                {
                    tiPeriod_u32 = (tiPeriod_u32 + 2ul) << 6;
                    tiTimer_u32  = (tiTimer_u32  + 2ul) << 6;
                }
                break;
                default:
                break;
            }
        }

        /***********************/
        /* check special cases */
        /***********************/
        if ( stSrsc_u32 == 0x2 )
        {
            /* a capture event has occured but the reset has not yet been reported                    */
            /* this condition is treated as if the capture had not happened                           */
            stSrsc_u32 = 0x0;
        }

        /**********************************************/
        /* signal evaluation according to truth table */
        /**********************************************/
        if ( stSrsc_u32 == 0x3 )
        {
            // set marker to indicate that stSrsc_u32 = 0x1 is not an error in next invocations
            xKeep_cps->Pwmin_tiTimestamp1 = 1;

            /**********************************/
            /* check captured period duration */
            /**********************************/
            if (xKeep_cps->Pwmin_firstPeriod_b != FALSE)
            {
                /* valid period captured, but may be first period after overflow                      */
                /* discard this captured period                                                       */
                xKeep_cps->Pwmin_firstPeriod_b = FALSE;
                tiPeriod_u32 = 0;
                SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
                SrvB_SetBit(stSignal_u8, PWMIN_TIMEROVERFLOW_POS);
                xKeep_cps->Pwmin_tiTimestamp2 = tiPeriod_u32;             /* saving captured period   */
            }
            else if ( tiPeriod_u32 > tiMaxPer_cu32 )
            {
                /* captured period is valid, but too large                                            */
                xKeep_cps->Pwmin_tiTimestamp2 = tiPeriod_u32;             /* saving captured period   */
                tiPeriod_u32 = 0;
                SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
                xKeep_cps->Pwmin_tiSysTime = tiSys_u32;                   /* current system timestamp */
            }
            else
            {
                /* normal case, everything's ok                                                       */
                xKeep_cps->Pwmin_tiTimestamp2 = tiPeriod_u32;             /* saving captured period   */
                xKeep_cps->Pwmin_tiSysTime = tiSys_u32;                   /* current system timestamp */
            }
        }
        /* case 0x2 (handled above) omitted due to code size optimisation                             */
        else if ( stSrsc_u32 == 0x1 )
        {
            // tolerate a 0x1 only if the last edge has been reported no longer than tiMaxPer_cu32
            if (    ( CPU_TICKS_TO_US(Cpu_GetSysTicks() - xKeep_cps->Pwmin_tiSysTime) < tiMaxPerUs_cu32 )
                 && ( xKeep_cps->Pwmin_tiTimestamp1 != 0 )
               )

            {
                /* last 0x3 clearing was unsuccessful, proceed with old period from XR register       */
                SrvB_SetBit(stSignal_u8, PWMIN_NONEWPERIOD_POS);
            }
            else
            {
                tiPeriod_u32 = 0;
                xKeep_cps->Pwmin_firstPeriod_b = TRUE;
                xKeep_cps->Pwmin_tiTimestamp2  = 0;                         /* saving LTC2 value      */
                xKeep_cps->Pwmin_tiTimestamp1  = 0;                         /* reset tolerance marker */
                SrvB_SetBit(stSignal_u8, PWMIN_TIMEROVERFLOW_POS);
                SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
            }
        }
        else if ( stSrsc_u32 == 0x0 )
        {
            /* nothing has happened since last function call, restore saved values                    */
            tiPeriod_u32  = xKeep_cps->Pwmin_tiTimestamp2;                    /* restoring period     */
            /* reset tolerance marker, there's no need to tolerate a 0x1 after a 0x0                  */
            xKeep_cps->Pwmin_tiTimestamp1 = 0;

            /* check restored period duration                                                         */
            if ( tiPeriod_u32 == 0x0ul )
            {
                SrvB_SetBit(stSignal_u8, PWMIN_TIMEROVERFLOW_POS);
                SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
            }
            else
            {
                SrvB_SetBit(stSignal_u8, PWMIN_NONEWPERIOD_POS);              /* set no new data flag */

                /*  now check for MaxPeriod violation                                                 */
                if ( tiPeriod_u32 > tiMaxPer_cu32 )
                {
                    /* captured period is too large                                                   */
                    tiPeriod_u32 = 0;
                    SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
                }
            }
        }
        else
        {
            /* no other cases feasible */
        }

        /**********************************************************************************************/
        /* check current timer value, it must not be larger than the configured maximum cycle period  */
        /* this check must be done regardless a new cycle has been captured or not                    */
        /**********************************************************************************************/
        if ( tiTimer_u32 > tiMaxPer_cu32 )
        {
            /* if the timer value is too large the cycle period to capture will for shure be
               out of range                                                                           */
            tiPeriod_u32 = 0;
            SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
        }

        /**********************************************************************************/
        /* take care for early function calls prior any signal interaction/timer overflow */
        /**********************************************************************************/
        if ( (tiPeriod_u32 == 0x0) &&  ((stSignal_u8 >> 1) == 0x0) )
        {
            /* set no new data flag to indicate that no evaluation is possible at this point of time  */
            SrvB_SetBit(stSignal_u8, PWMIN_TIMEROVERFLOW_POS);
            SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
        }

        /* filling of special structure if demanded                                                   */
        if (xLocMon_ps != NULL)
        {
            ((PwmIn_MonRslt_t*)xLocMon_ps)->tiPer     = tiPeriod_u32;            /* period            */
            ((PwmIn_MonRslt_t*)xLocMon_ps)->tiHighDur = 0;                       /* pulse duration    */
            ((PwmIn_MonRslt_t*)xLocMon_ps)->stSig     = stSignal_u8;             /* status bitfield   */
            ((PwmIn_MonRslt_t*)xLocMon_ps)->sumChk    = (tiPeriod_u32 ^
                                                         (uint32)stSignal_u8);
        }
        else if (xResult_ps != NULL)
        {
            xResult_ps->Pwmin_tiPeriod = tiPeriod_u32;                         /* return period duration  */
            xResult_ps->Pwmin_stSignal = stSignal_u8;                          /* return status bitfield  */
        }
        else
        {
            /* Do nothing */
        }
    }
    return;
}


/**
 ***************************************************************************************************
 * Static PwmIn_DcmIrqInl function for monitoring purposes.
 *
 * This inline function is called by:
 * - Pwmin_DcmIrq() for normal functionality. In this case xLocMon_ps must be NULL!
 * - Monitoring SW for monitoring a LTC input signal. Function is called indirect via Pwm_InMon()
 *   In this case xResult_ps must be NULL!
 *
 * \param         Pwmin_Signal_t    xSig_pcs
 * \param         Pwmin_ResultXt_t* xResult_ps
 * \param         PwmIn_MonRslt_t*  xLocMon_ps
 * \return        -
 * \seealso
 * \usedresources tbd
 ***************************************************************************************************
 */
static __inline__ void PwmIn_DcmIrqInl (Pwmin_Signal_t    xSig_pcs,
                                        Pwmin_ResultXt_t* xResult_ps,
                                        PwmIn_MonRslt_t*  xLocMon_ps)
{
    uint32 tiCurrentTim_u32;                            /* local storage for current DCMTIM value */
    uint32 tiCurrentCav_u32;                            /* local storage for current DCMCOV value */
    uint32 tiPeriod_u32;                                /* local result for period                */
    uint32 tiPulseDur_u32;                              /* local result for highdur               */
    uint32 rDutycycle_u32 = 0;                          /* local result for dutycycle             */
    uint32 tiTranDur_u32;                               /* local result for tranquil duration     */
    uint32 tiEdgeSysTime_u32;                           /* last signal edge's systen time         */
    uint32 tiCurrentSysTime_u32;                        /* local storage for system time          */
    uint32 ctCounter1_u32;                              /* update counter 1                       */
    uint32 ctCounter2_u32;                              /* update counter 2                       */
    uint8  ctCounter0_u8 = 0;                           /* local loop counter                     */
    uint8  numPort_u8;                                  /* signal port number                     */
    uint8  numPin_u8;                                   /* signal pin number                      */
    uint8  stSignal_u8 = 0;                             /* status bitfield                        */
    bool   stPinstate_b;                                /* present signal state                   */

    if(xSig_pcs != NULL_PTR)
    {
        /******************************/
        /* reading configuration data */
        /******************************/
        /* MISRA RULE 45 VIOLATION: cast to a different pointer type necessary here!                  */
        Pwmin_Buffer_t   *xBuffer_ps = (Pwmin_Buffer_t*) xSig_pcs->xBuffAddr_ps; /* ptr to pcp buffer  */
        Pwmin_Keep_t     *xKeep_ps   =                   xSig_pcs->xKeep_ps;     /* ptr to keep struct */
        Pwmin_BlockRef_t regDcm_pu32 =                   xSig_pcs->regBlockRef_p;/* DCMTIM address     */
        numPort_u8                   = (uint8)           xSig_pcs->numUcPort;    /* port number        */
        numPin_u8                    = (uint8)           xSig_pcs->numUcPin;     /* pin number         */

        /*************************************/
        /* reading buffer with data from pcp */
        /* and current timer values          */
        /*************************************/
        do
        {
            ctCounter1_u32       = xBuffer_ps->Pwmin_ctUpdateCounter1;  /* read update counter        */
            tiCurrentTim_u32     = regDcm_pu32[0];                      /* read the current DCMTIM    */
            tiCurrentCav_u32     = regDcm_pu32[1];                      /* read the current DCMCAV    */
            tiCurrentSysTime_u32 = Cpu_GetTIM0;                         /* read current systime       */
            tiPeriod_u32         = (xBuffer_ps->Pwmin_tiTimestamp2);    /* read latest period         */
            tiPulseDur_u32       = (xBuffer_ps->Pwmin_tiTimestamp1);    /* read latest high time dur  */
            tiEdgeSysTime_u32    = xBuffer_ps->Pwmin_tiSysTime;         /* read system time of the    */
                                                                        /*  last starting edge        */
            stPinstate_b         = Port_DioGet(numPort_u8, numPin_u8);  /* read the current pinstate  */
            ctCounter2_u32       = xBuffer_ps->Pwmin_ctUpdateCounter2;  /* read update counter again  */
                                                                        /*  to ensure consistent data */
            ctCounter0_u8++;                                            /* raise overflow counter     */
        }
        while ((ctCounter1_u32 != ctCounter2_u32) && (ctCounter0_u8 < PWMIN_MAXNUMLOOPS));

        /* check if buffer read succeded; if not, restore former values                               */
        /* this can only happen if the buffer update has been interfered and                          */
        /* is then blocked for a rather long time                                                     */
        if (ctCounter1_u32 != ctCounter2_u32)
        {
            ctCounter2_u32      = xKeep_ps->Pwmin_ctUpdateCounter1;      /* read update counter       */
            tiPeriod_u32        = xKeep_ps->Pwmin_tiTimestamp2;          /* read last period          */
            tiPulseDur_u32      = xKeep_ps->Pwmin_tiTimestamp3;          /* read last pulse dur       */
            tiEdgeSysTime_u32   = xKeep_ps->Pwmin_tiSysTime;             /* read system time of the
                                                                             last start of period     */
            stSignal_u8        |= ( PWMIN_SET << PWMIN_NONEWPERIOD_POS );
        }

        /****************************/
        /* storing current pinstate */
        /****************************/
        stSignal_u8 |= (uint8)( stPinstate_b << PWMIN_PINSTATE_POS );

        /*********************/
        /* signal evaluation */
        /*********************/
        /* if returned period duration equals 0 no signal is available                                */
        if ( tiPeriod_u32 == 0x0ul )
        {
            /* then period exceeds maximum DCM timer value, frequency == 0                            */
            tiPeriod_u32   = 0;
            tiPulseDur_u32 = 0;
            rDutycycle_u32 = 0;
            tiTranDur_u32  = GPTA_US_TO_TICKS(CPU_TICKS_TO_US(tiCurrentSysTime_u32-tiEdgeSysTime_u32));
            SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
            SrvB_SetBit(stSignal_u8, PWMIN_TIMEROVERFLOW_POS);
        }
        /* is captured period duration larger than configured maximum period?                         */
        else if ( (tiPeriod_u32) > (GPTA_US_TO_TICKS(xSig_pcs->tiMaxPeriod)) )
        {
            /* then period exceeds maximum configured value, frequency == 0                           */
            tiPeriod_u32   = 0;
            tiPulseDur_u32 = 0;
            rDutycycle_u32 = 0;
            tiTranDur_u32  = GPTA_US_TO_TICKS(CPU_TICKS_TO_US(tiCurrentSysTime_u32-tiEdgeSysTime_u32));
            SrvB_SetBit(stSignal_u8, PWMIN_MAX_PERIOD_VIOLATION_POS);
        }
        /* captured period duration is within range                                                   */
        else
        {
            if ( xSig_pcs -> swInversion == 0 )
            {
                /*****************************************/
                /* reading and writing tranquil duration */
                /*****************************************/
                if ( stPinstate_b == 1 )
                {
                    /* signal is currently high                                                       */
                    tiTranDur_u32 = tiCurrentTim_u32;
                }
                else
                {
                    /* signal is currently low                                                        */
                    tiTranDur_u32 = (tiCurrentTim_u32 - tiCurrentCav_u32);
                }
            }
            else
            {
                /*****************************************/
                /* reading and writing tranquil duration */
                /*****************************************/
                if ( stPinstate_b == 0 )
                {
                    /* signal is currently low                                                        */
                    tiTranDur_u32 = tiCurrentTim_u32;
                }
                else
                {
                    /* signal is currently high                                                       */
                    tiTranDur_u32 = (tiCurrentTim_u32 - tiCurrentCav_u32);
                }
            }

            /**************************/
            /* calculating duty cycle */
            /**************************/
            if ( tiPeriod_u32 != 0ul )
            {
                rDutycycle_u32 = (uint32)SrvB_MulDiv32(10000L,
                                                       (sint32)tiPulseDur_u32,
                                                       (sint32)(tiPeriod_u32)
                                                      );
            }
        }

        /* check if new data has been provided                                                        */
        if ( xKeep_ps->Pwmin_ctUpdateCounter1 != ctCounter2_u32 )
        {
            /* if yes, store new data to keep structure                                               */
            xKeep_ps->Pwmin_ctUpdateCounter1 = ctCounter2_u32;
            xKeep_ps->Pwmin_tiTimestamp2     = tiPeriod_u32;
            xKeep_ps->Pwmin_tiTimestamp3     = tiPulseDur_u32;
            xKeep_ps->Pwmin_tiSysTime        = tiCurrentSysTime_u32;
        }
        else
        {
            /* if not, set PWMIN_NONEWPERIOD_POS                                                      */
            SrvB_SetBit(stSignal_u8, PWMIN_NONEWPERIOD_POS);
        }

        /* filling of special structure if demanded                                                   */
        if (xLocMon_ps != NULL)
        {
            ((PwmIn_MonRslt_t*)xLocMon_ps)->tiPer     = tiPeriod_u32;            /* period            */
            ((PwmIn_MonRslt_t*)xLocMon_ps)->tiHighDur = tiPulseDur_u32;          /* pulse duration    */
            ((PwmIn_MonRslt_t*)xLocMon_ps)->stSig     = stSignal_u8;             /* status bitfield   */
            ((PwmIn_MonRslt_t*)xLocMon_ps)->sumChk    = (tiPeriod_u32 ^
                                                         tiPulseDur_u32 ^
                                                         (uint32)stSignal_u8);
        }
        else if (xResult_ps != NULL)
        {
            /************************************/
            /* writing data to output structure */
            /************************************/
            xResult_ps->Pwmin_tiPeriod   = tiPeriod_u32;                         /* period            */
            xResult_ps->Pwmin_tiHighdur  = tiPulseDur_u32;                       /* pulse duration    */
            xResult_ps->Pwmin_ctPeriod   = ctCounter2_u32;                       /* period counter    */
            xResult_ps->Pwmin_rDutycycle = rDutycycle_u32;                       /* dutycycle         */
            xResult_ps->Pwmin_tiTrandur  = tiTranDur_u32;                        /* tranquil duration */
            xResult_ps->Pwmin_stSignal   = stSignal_u8;                          /* status bitfield   */
        }
        else
        {
            /* Do nothing */
        }
    }
    return;
}


/**
 ***************************************************************************************************
 * Special monitoring interface for frequency input low level access
 *
 * This interface allows the monitoring relevant being sensed by DCMDIRECT, GTCIRQ , LTCDIRECT,
 * LTCPERDIRECT and PWMINDCMIRQ methods.
 * \param         Pwmin_Signal_t   xSig_pcs
 * \param         PwmIn_MonRslt_t* xLocMon_ps
 * \return        -
 * \seealso
 * \usedresources tbd
 ***************************************************************************************************
 */
static __inline__ void Pwm_InMon (Pwmin_Signal_t   xSig_pcs,
                                  PwmIn_MonRslt_t* xLocMon_ps)
{
    switch (xSig_pcs->swtHwePwmMethod)
    {
        case PWMINDCMDIRECT:
        {
            PwmIn_DcmDrctInl(xSig_pcs, NULL, xLocMon_ps);
        }
        break;
        case PWMINGTCIRQ:
        {
            PwmIn_GtcIrqInl(xSig_pcs, NULL, xLocMon_ps);
        }
        break;
        case PWMINLTCDIRECT003:
        case PWMINLTCDIRECT025:
        case PWMINLTCDIRECT200:
        {
            PwmIn_LtcDrctInl(xSig_pcs, NULL, xLocMon_ps);
        }
        break;
        case PWMINLTCPERDIRECT003:
        case PWMINLTCPERDIRECT025:
        case PWMINLTCPERDIRECT200:
        {
            PwmIn_LtcPerDrctInl(xSig_pcs, NULL, xLocMon_ps);
        }
        break;
        case PWMINDCMIRQ:
        {
            PwmIn_DcmIrqInl(xSig_pcs, NULL, xLocMon_ps);
        }
        break;
        case DUMMY:
        default:
        {
            xLocMon_ps->tiPer     = 0;
            xLocMon_ps->tiHighDur = 0;
            xLocMon_ps->stSig     = 0;
            xLocMon_ps->sumChk    = 0;
        }
        break;
    }
    return;
}


/* _PWMIN_INL_H                                                                                   */
#endif
