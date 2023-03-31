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
 * $Filename__:pwmout_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SYA2COB$
 * $Date______:24.12.2015$
 * $Class_____:SWHDR$
 * $Name______:pwmout_pub$
 * $Variant___:1.24.2$
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
 * 1.24.2; 0     24.12.2015 SYA2COB
 *   Pwmout_ResetImp functionality was brought back, since it got missed from 
 *   1.19.0-
 * 
 * 1.22.0; 0     02.05.2013 KRN2COB
 *   Provide interfaces for Diag_OLcurr_SwOn and Swoff.
 * 
 * 1.19.0; 0     27.09.2011 PSP1COB
 *   Reset Impulse functional updates
 * 
 * 1.15.0; 0     27.04.2010 INTECKEN
 *   RCMS00638034 - Pwmout: new CommonPWM (synchronous LTC method)
 * 
 * 1.14.0; 0     25.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: pwmout_pub.h
 *      Version: \main\basis\b_CORE\8
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _PWMOUT_PUB_H
#define _PWMOUT_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                           PwmOut - Pulse width modulated output signals.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define Pwmout_Sig2Cal(a)                               (a##_cal)

/* wrong spelling, but already delivered interfaces                                               */
/* Pwmout_appar_t elements name depend on definition of __ASW_NAMES__                             */

#ifndef __ASW_NAMES__
  /* MISRA RULE 90 VIOLATION: resources, text replacement instead of subroutine */
  #define PwmSetOutPwmSetOutImmediateDutyAndPeriod(a,b,c)  if ( (a) < PWMOUT_NUM_SIGNALS )                    \
                                                         { Pwmout_Sig2Cal(a).Pwmout_tiPeriod=(c);             \
                                                           Pwmout_ConfigData_a[a].Buffer->Immediate_u8 = TRUE; \
                                                           PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a));           \
                                                         }

  /* MISRA RULE 90 VIOLATION: resources, text replacement instead of subroutine */
  #define PwmSetOutImmediateDutyAndPeriod(a,b,c)    if ( (a) < PWMOUT_NUM_SIGNALS )                      \
                                                    { Pwmout_Sig2Cal(a).Pwmout_tiPeriod=(c);             \
                                                      Pwmout_ConfigData_a[a].Buffer->Immediate_u8 = TRUE; \
                                                      PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a));           \
                                                    }

  /* MISRA RULE 90 VIOLATION: resources, text replacement instead of subroutine */
  #define PwmSetOutDutyAndPeriod(a,b,c)                  (Pwmout_Sig2Cal(a).Pwmout_tiPeriod=(c),         \
                                                         PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a)))
#else

  /* MISRA RULE 90 VIOLATION: resources, text replacement instead of subroutine */
  #define PwmSetOutPwmSetOutImmediateDutyAndPeriod(a,b,c)  if ( (a) < PWMOUT_NUM_SIGNALS )                    \
                                                         { Pwmout_Sig2Cal(a).tiPer_C=(c);                     \
                                                           Pwmout_ConfigData_a[a].Buffer->Immediate_u8 = TRUE; \
                                                           PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a));           \
                                                         }

  /* MISRA RULE 90 VIOLATION: resources, text replacement instead of subroutine */
  #define PwmSetOutImmediateDutyAndPeriod(a,b,c)    if ( (a) < PWMOUT_NUM_SIGNALS )                      \
                                                    { Pwmout_Sig2Cal(a).tiPer_C=(c);                     \
                                                      Pwmout_ConfigData_a[a].Buffer->Immediate_u8 = TRUE; \
                                                      PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a));           \
                                                    }

  /* MISRA RULE 90 VIOLATION: resources, text replacement instead of subroutine */
  #define PwmSetOutDutyAndPeriod(a,b,c)                  (Pwmout_Sig2Cal(a).tiPer_C=(c),          \
                                                         PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a)))
#endif

/* MISRA RULE 90 VIOLATION: resources, text replacement instead of subroutine */
#define PwmSetOutImmediate(a,b)              if ( (a) < PWMOUT_NUM_SIGNALS )                       \
                                             { Pwmout_ConfigData_a[a].Buffer->Immediate_u8 = TRUE;  \
                                               PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a));            \
                                             }

#define PwmSetOutDuty(a,b)                              (PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a)))
#define PwmSetOut(a,b)                                  (PwmSetOutV4((a),(b),&Pwmout_Sig2Cal(a)))

/**************************************************************************************************/
/* adopt function names to naming convertions, support old function names                         */
/**************************************************************************************************/
#define PwmResetOutImp              Pwmout_RstImpImmediate
#define PwmOut_ResetImp             Pwmout_RstImpImmediate
#define Pwmout_ResetImp             Pwmout_RstImpImmediate
#define PwmGetOutPendingImp         Pwmout_getPendingImp
#define PwmOut_GetPendingImp        Pwmout_getPendingImp
#define Pwmout_GetPendingImp        Pwmout_getPendingImp
#define PwmAddOutImp                Pwmout_AddImp
#define PwmOut_AddImp               Pwmout_AddImp


/* function to switch off power stages                                                            */
#define Pwmout_SetPowerstageOff(a,c)                 (PwmSetOutV4((a),0,(c)))

/* depriocated function to get version of Pwmout                                                  */
#define PWM_GetVersionOfDriver                       (9)

#define PWMOUT_FREEWHL_LOW  0
#define PWMOUT_FREEWHL_HIGH 1


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* signal configuration structure                                                                 */
typedef  const struct                /// all information available at make time goes here
{
    t_hwinterface    HwInterface;    /// interface circuit "Baustein Treiber", used for diagnostics
    GPTA_LTC_t*      BlockRef;       /// address of first peripheral element used in a block
    t_buf            Buffer;         /// local buffer currently only used by PWMOUTGTCx_E
    pwmout_srn_t*    Srn_pu32;       /// pointer to 1st service request node used by this signal
    uint32           first;          /// derive gpta cell from start address
                                     /// first=(((((uint32)Signal_cpcs->BlockRef) -
                                     ///                         ((uint32)&GPTA.GTC[0])) & 0xFF)>>3)
    uint32           mask;           /// save run time and calculate bitmask in advance ~(3<<first)
    void(*BridgeDio_pf)(bool level); /// function pointer aliasing DIO method
    uint32           mul_u32;        /// factor to scale period in us to ticks
    uint32           shift_u32;      /// exponent=divisor (>> shift) to scale period in us to ticks
    volatile uint32* adGPTA_SRSC_cpu32;       /// pointer to SRSC register
    volatile uint32* adGPTA_SRSS_cpu32;       /// pointer to SRSS register
    t_ucport         UcPort;         /// physical port on Tricore controller
    t_ucpin          UcPin;          /// pin
    t_ucport         numAddPort;     /// physical port on Tricore controller
    t_ucpin          numAddPin;      /// pin
    t_hwepwmmethod   HwePwmMethod;   /// access method
    Pwmout_act_e     stLevel;        /// initial pin level (same as in
                                     ///  firsti_cpcs->GTCCTR >> GPTA0_GTCCTR_OCM_POS)) & 1ul))
} Pwmout_config_t;

typedef uint Pwmout_signal_t;                // signal type is an array index

/*
 ***************************************************************************************************
 * Extern declarations of interface functions and variables/constants
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__pwm__NormalSpeed__START
extern void        PwmSetOutV4             ( Pwmout_signal_t             idxArr,
                                             Pwmout_dutycycle_t const    DutyCycle_c,
                                             const Pwmout_appar_t* const Appar_cpcs
                                           );
__PRAGMA_USE__CODE__pwm__NormalSpeed__END
__PRAGMA_USE__CODE__pwm__LowSpeed__START
extern void        PwmOut_Proc_Ini              (void);
extern void        PwmOut_Proc_IniEnd           (void);
__PRAGMA_USE__CODE__pwm__LowSpeed__END
__PRAGMA_USE__CODE__pwm__NormalSpeed__START
extern bool        PwmCycleCompleted            (Pwmout_signal_t idxArr);
__PRAGMA_USE__CODE__pwm__NormalSpeed__END
__PRAGMA_USE__CODE__pwm__HighSpeed__START
extern void        PwmOutIRQ                    (Pwmout_signal_t idxArr);
__PRAGMA_USE__CODE__pwm__HighSpeed__END
__PRAGMA_USE__CODE__pwm__NormalSpeed__START
extern void        PwmOut_GetEpmOfs_Proc_SyncFirst(void);
extern void        PwmOut_GetEpmOfs(void);
extern bit32       PwmOut_GetErrorInfo          (Pwmout_signal_t idxArr);
extern void        PwmOut_ClearErr              (Pwmout_signal_t idxArr);
extern bit32       PwmOut_TstImp                (Pwmout_signal_t idxArr);
extern uint8       PwmOut_OLcurr_SwOn           (Pwmout_signal_t idxArr);
extern uint8       PwmOut_OLcurr_SwOff          (Pwmout_signal_t idxArr);
extern DSM_FIdType Pwmout_GetFId                (Pwmout_signal_t idxArr);
extern void        Pwmout_RstImpImmediate       (Pwmout_signal_t idxArr);
extern void        Pwmout_RstImpNonImmediate    (Pwmout_signal_t idxArr);
extern void        Pwmout_AddImp                (uint32 const numPulses_u32, Pwmout_signal_t idxArr);
extern uint32      Pwmout_getPendingImp         (Pwmout_signal_t idxArr);
extern void        Pwmout_SwitchOffFunc         (Pwmout_signal_t idxArr);
extern void        PwmOut_SetGpioLn1            (Pwmout_signal_t idxArr, bool level);
extern void        PwmOut_SetGpioLn2            (Pwmout_signal_t idxArr, bool level);
extern void        PwmOut_SetToGpioLn1          (Pwmout_signal_t idxArr);
extern void        PwmOut_SetToGpioLn2          (Pwmout_signal_t idxArr);
extern void        PwmOut_RstToPwmLn1           (Pwmout_signal_t idxArr);
extern void        PwmOut_RstToPwmLn2           (Pwmout_signal_t idxArr);
extern void        PwmOut_EnblFreeWhl           (Pwmout_signal_t idxArr, uint swtSide);
extern void        PwmOut_DisblFreeWhl          (Pwmout_signal_t idxArr);
extern void        Pwmout_CPwmSync              (Pwmout_signal_t          idxArr,
                                                Pwmout_dutycycle_t const DutyCycleSig1_c,
                                                Pwmout_dutycycle_t const DutyCycleSig2_c,
                                                Pwmout_dutycycle_t const DutyCycleSig3_c,
                                                const Pwmout_appar_t*    const Appar_cpcs);
__PRAGMA_USE__CODE__pwm__NormalSpeed__END

__PRAGMA_USE__pwm__1_5ms__RAM__s32__START
extern sint32          PwmOut_phiEpmOfs_s32;
extern sint32          PwmOut_phiTmp_s32;
__PRAGMA_USE__pwm__1_5ms__RAM__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern Pwmout_config_t Pwmout_ConfigData_a[];
__PRAGMA_USE__pwm__1_5ms__constant__s32__END

/* _PWMOUT_PUB_H                                                                                  */
#endif
