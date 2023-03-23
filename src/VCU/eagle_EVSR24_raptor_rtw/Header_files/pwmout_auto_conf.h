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
 * $Filename__:pwmout_template_conf.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:template file$
 * $Domain____:SDOM$
 * $User______:KRN2COB$
 * $Date______:02.05.2013$
 * $Class_____:CONFTPLHDR$
 * $Name______:pwmout_template_conf$
 * $Variant___:1.22.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.22.0; 0     02.05.2013 KRN2COB
 *   Provide interfaces for Diag_OLcurr_SwOn and Swoff.
 * 
 * 1.18.0; 1     15.06.2011 PSP1COB
 *   BugFix of CPWM and Modification of CY146 Delay implementation
 * 
 * 1.18.0; 0     31.05.2011 PSP1COB
 *   CY146 delay implementation
 * 
 * 1.15.0; 0     27.04.2010 INTECKEN
 *   RCMS00638034 - Pwmout: new CommonPWM (synchronous LTC method)
 * 
 * 1.14.0; 0     25.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: pwmout_template_conf.ht
 *      Version: \main\basis\b_CORE\9
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/
#ifndef _PWMOUT_AUTO_CONF_H
#define _PWMOUT_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                          Pwmout - Pulse width modulated output signals.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "pmd.h"

/*
 ***************************************************************************************************
 * Defines for Pwm_GetErrorInfo()
 ***************************************************************************************************
 */
#ifdef PMD_GEI_NEW_MSK
/* powerstage errors */
#define PWM_GEI_ERR_SCB_MSK      PMD_GEI_ERR_SCB_MSK
#define PWM_GEI_ERR_SCG_MSK      PMD_GEI_ERR_SCG_MSK
#define PWM_GEI_ERR_OT_MSK       PMD_GEI_ERR_OT_MSK
#define PWM_GEI_ERR_SCBOT_MSK    PMD_GEI_ERR_SCBOT_MSK
#define PWM_GEI_ERR_OV_MSK       PMD_GEI_ERR_OV_MSK
#define PWM_GEI_ERR_OL_MSK       PMD_GEI_ERR_OL_MSK
#define PWM_GEI_ERR_FD_MSK       PMD_GEI_ERR_FD_MSK
#define PWM_GEI_ERR_MSK          PMD_GEI_ERR_MSK

/* protokoll errors  */
#define PWM_GEI_ERR_COM_MSK      PMD_GEI_ERR_COM_MSK
#define PWM_GEI_ERR_SPI_MSK      PMD_GEI_ERR_SPI_MSK

/* tested flags  */
#define PWM_GEI_TF_SCB_MSK       PMD_GEI_TF_SCB_MSK
#define PWM_GEI_TF_SCG_MSK       PMD_GEI_TF_SCG_MSK
#define PWM_GEI_TF_OL_MSK        PMD_GEI_TF_OL_MSK
#define PWM_GEI_TF_OT_MSK        PMD_GEI_TF_OT_MSK
#define PWM_GEI_TF_FD_MSK        PMD_GEI_TF_FD_MSK
#define PWM_GEI_TF_MSK           PMD_GEI_TF_MSK

/* general info bits */
#define PWM_GEI_INFO_CE_MSK      PMD_GEI_INFO_CE_MSK
#define PWM_GEI_INFO_CO_MSK      PMD_GEI_INFO_CO_MSK

/* testimpulse status */
#define PWM_GEI_TST_DRU_MSK      PMD_GEI_TST_DRU_MSK
#define PWM_GEI_TST_DRQ_MSK      PMD_GEI_TST_DRQ_MSK
#define PWM_GEI_TST_TRU_MSK      PMD_GEI_TST_TRU_MSK
#define PWM_GEI_TST_TRQ_MSK      PMD_GEI_TST_TRQ_MSK
#define PWM_GEI_TST_FIN_MSK      PMD_GEI_TST_FIN_MSK
#define PWM_GEI_TST_RUN_MSK      PMD_GEI_TST_RUN_MSK

#define PWM_GEI_NEW_MSK          PMD_GEI_NEW_MSK

#endif

/*
 ***************************************************************************************************
 * Defines for Pwm_GetHbrErrorInfo()
 ***************************************************************************************************
 */
#ifdef CY146_GHEI_NEW_MSK

/* provide new interface for H-bridge diagnosis */
#define PwmOut_GetHbrErrorInfo   PwmOut_GetErrorInfo
#define PwmOut_ClearHbrErr       PwmOut_ClearErr

/* Bit positions */
#define PWM_GHEI_ERR_SCB1_BP     CY146_GHEI_ERR_SCB1_BP
#define PWM_GHEI_ERR_SCG1_BP     CY146_GHEI_ERR_SCG1_BP
#define PWM_GHEI_ERR_SCB2_BP     CY146_GHEI_ERR_SCB2_BP
#define PWM_GHEI_ERR_SCG2_BP     CY146_GHEI_ERR_SCG2_BP
#define PWM_GHEI_ERR_OT_BP       CY146_GHEI_ERR_OT_BP
#define PWM_GHEI_ERR_OL_BP       CY146_GHEI_ERR_OL_BP
#define PWM_GHEI_ERR_COM_BP      CY146_GHEI_ERR_COM_BP
#define PWM_GHEI_ERR_SPI_BP      CY146_GHEI_ERR_SPI_BP
#define PWM_GHEI_TF_SCB1_BP      CY146_GHEI_TF_SCB1_BP
#define PWM_GHEI_TF_SCG1_BP      CY146_GHEI_TF_SCG1_BP
#define PWM_GHEI_TF_SCB2_BP      CY146_GHEI_TF_SCB2_BP
#define PWM_GHEI_TF_SCG2_BP      CY146_GHEI_TF_SCG2_BP
#define PWM_GHEI_TF_OT_BP        CY146_GHEI_TF_OT_BP
#define PWM_GHEI_TF_OL_BP        CY146_GHEI_TF_OL_BP
#define PWM_GHEI_INFO_CO_BP      CY146_GHEI_INFO_CO_BP
#define PWM_GHEI_INFO_CE_BP      CY146_GHEI_INFO_CE_BP
#define PWM_GHEI_NEW_BP          CY146_GHEI_NEW_BP

/* Bit Masks */
#define PWM_GHEI_ERR_SCB1_MSK    CY146_GHEI_ERR_SCB1_MSK
#define PWM_GHEI_ERR_SCG1_MSK    CY146_GHEI_ERR_SCG1_MSK
#define PWM_GHEI_ERR_SCB2_MSK    CY146_GHEI_ERR_SCB2_MSK
#define PWM_GHEI_ERR_SCG2_MSK    CY146_GHEI_ERR_SCG2_MSK
#define PWM_GHEI_ERR_OT_MSK      CY146_GHEI_ERR_OT_MSK
#define PWM_GHEI_ERR_OL_MSK      CY146_GHEI_ERR_OL_MSK
#define PWM_GHEI_ERR_COM_MSK     CY146_GHEI_ERR_COM_MSK
#define PWM_GHEI_ERR_SPI_MSK     CY146_GHEI_ERR_SPI_MSK
#define PWM_GHEI_ERR_MSK         CY146_GHEI_ERR_MSK
#define PWM_GHEI_TF_SCB1_MSK     CY146_GHEI_TF_SCB1_MSK
#define PWM_GHEI_TF_SCG1_MSK     CY146_GHEI_TF_SCG1_MSK
#define PWM_GHEI_TF_SCB2_MSK     CY146_GHEI_TF_SCB2_MSK
#define PWM_GHEI_TF_SCG2_MSK     CY146_GHEI_TF_SCG2_MSK
#define PWM_GHEI_TF_OT_MSK       CY146_GHEI_TF_OT_MSK
#define PWM_GHEI_TF_OL_MSK       CY146_GHEI_TF_OL_MSK
#define PWM_GHEI_TF_MSK          CY146_GHEI_TF_MSK
#define PWM_GHEI_INFO_CO_MSK     CY146_GHEI_INFO_CO_MSK
#define PWM_GHEI_INFO_CE_MSK     CY146_GHEI_INFO_CE_MSK
#define PWM_GHEI_NEW_MSK         CY146_GHEI_NEW_MSK

#endif


/*
 ***************************************************************************************************
 * Defines for HBRidge Delay Implementation
 ***************************************************************************************************
 */
/* No Delay Requested by H-Bridge*/

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define PwmOut_GetFId_pf   Pwmout_GetFId_pf
#define PwmOut_GetFId      Pwmout_GetFId

/*
 ***************************************************************************************************
 * enum for signal aray access
 ***************************************************************************************************
 */
typedef enum
{
    O_F_ECUA024,
    O_F_ECUA046,
    O_F_ECUK088,
    O_F_ECUA010,
    O_F_ECUA023,
    O_F_ECUA093,
    O_F_ECUK084,
    O_F_ECUA054,
    O_F_ECUA045,
    O_F_ECUK057,
    PWMOUT_NUM_SIGNALS
}   Pwmout_Signals_e;



/* Additional macros needed for calibratable signals */


/*
 ***************************************************************************************************
 * macros needed to support signal alias names (multiple ECU support)
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * ECU location macro for each Pwmout signal
 ***************************************************************************************************
 */
/* Signal AdcI_Timer_TRIG16 and its alias locations */
#define AdcI_Timer_TRIG16_MSLOC ANY 




/* function pointer table for accessing power stage diagnosis functions                           */
typedef struct
{
    bit32       (*PwmOut_GetErrorInfo_pf     )(void);
    void        (*PwmOut_ClearErr_pf         )(void);
    bit32       (*PwmOut_TstImp_pf           )(void);
    DSM_FIdType (*Pwmout_GetFId_pf           )(void);
    void        (*PwmOut_PwmPpty_pf          )(uint32, uint32);
	uint8       (*PwmOut_OLcurr_SwOn_pf      )(void);
	uint8       (*PwmOut_OLcurr_SwOff_pf     )(void);
} PwmOutDiag_t;
typedef const PwmOutDiag_t* t_hwinterface; /// interface circuit (power stage) used for diagnostics

typedef uint8    t_ucport;            /// physical port on Tricore controller
typedef uint8    t_ucpin;             /// pin

/* VM optimization, pwmout buffer implementation as typedef struct instead of typedef enum */
typedef struct
{
    uint32 Period_u32;           /// temp storage period
    uint32 Duty_u32;             /// temp storage duty cycle
    uint32 NumTransOld_u32;      /// temp storage previous number of transitions
    uint32 NumTransNew_u32;      /// temp storage current number of transitions
    uint32 NumCurrentPulses_u32; /// temp storage pulse downcounter number of transitions
    uint16 Semaphore_u16;        /// Wip Bit + Count to ensure atomic access
    uint16 Phase_u16;            /// temp storage phase
    uint8  ISR_u8;               /// temp storage interrupt service requests from block cells
    uint8  LastPol_u8;           /// bit: temp storage last polarity bridge
    uint8  Immediate_u8;         /// bit: temp storage immediate request
} Pwmout_buf_t;

typedef Pwmout_buf_t*  t_buf;         /// local buffer currently only used by PWMOUTGTCx_E
typedef volatile uint32 pwmout_srn_t; /// common type for service request node
typedef uint32   PWM_PrioU32_t;       /// Priority >0 in case of TOS=PCP, 0 else
typedef sint16   Pwmout_dutycycle_t;  /// some function i. e. full bridges use negative dutycycles
typedef sint16   Pwmout_dur_t;        /// reference value for period duration
                                      /// (small type to limit dynamic range)
typedef sint16   Pwmout_usPerUnit_t;  /// us per Pwmout_tiPeriod unit (1==us, 1000=ms)
typedef enum
{
    Lo,
    Hi,
    PWMOUT_NINV_E,
    PWMOUT_INV_E
} Pwmout_act_t;                       /// active (reference) level (0 or 1)


typedef enum
{                               // access method
    PWMOUT_NOMETHOD_E,          // don't access (hardware driven or reserved)
    PWMOUTLTC2FREQ_E,           // use 2 GPTA local timer cells, support 50% duty cycle only
    PWMOUTLTC4COH_DC_E,         // use 4 GPTA local timer cells, update DC on period boundary
    PWMOUTLTC5COH_E,            // use 5 GPTA local timer cells, update on period boundary
    PWMOUTGTC1_E,               // use 1 GPTA global timer cell, don't update
    PWMOUTGTC2_E,               // use 2 GPTA global timer cells
    PWMOUTPULSE1_E,             // use 1 GPTA global timer cell +pulses, don't update
    PWMOUTHBRIDGE_CJ230_DC_E,   // use 4 GPTA local timer cells, update DC on period boundary
                                // negative duty cycle suported, by inversion
    PWMOUTHBRIDGE_L9904_DC_E,   // use 4 GPTA local timer cells, update DC on period boundary
                                // negative duty cycle suported, no inversion
    PWMOUTLTC4COH_DC_ANGLE_E,   // angle based
    PWMOUTHBRIDGE_TLE7209_DC_E, // special TLE7209 h-bridge driving method
    PWMOUT_PWM3_63_E,           // uses 3 LTC cells including LTC63, PWM mode
    PWMOUT_PZM3_63_E,           // uses 3 LTC cells including LTC63, PZM mode
    PWMOUT_PWM4_63_E,           // uses 3 LTC cells including LTC63, PWM mode
    PWMOUT_PZM4_63_E,           // uses 3 LTC cells including LTC63, PZM mode
    PWMOUT_HBRIDGE_ADV4_E,      // encapsualted advanced h-bridge L9904 driving
    PWMOUT_HBRIDGE_NEG_NINV_DELAY_E,   // encapsualted advanced h-bridge CY146 driving with delay
    PWMOUT_HBRIDGE_ADV4_NINV_E, // encapsualted advanced h-bridge CJ230 driving
    PWMOUT_CY146SETPWM_E,       // CY146 SPI based PWM outputs
    PWMOUT_HBRIDGE_SPI_CY146_E, // CY146 SPI based H-bridge output
    PWMOUT_COMMONPWM_E,			// PWM4 method + x*2LTC synchron followers
    PWMOUT_LASTMETHOD_E         // this element is always last: total number of access methods
} t_hwepwmmethod;

typedef enum
{
    PWMOUT_LO_E,
    PWMOUT_HI_E
} Pwmout_act_e;                /// active (reference) level (0 or 1), reflects 0% duty cycle level


#ifndef __ASW_NAMES__
typedef struct
{
    Pwmout_dur_t         Pwmout_tiPeriod;
    Pwmout_act_t         Pwmout_stLevel;
    Pwmout_dutycycle_t   Pwmout_rMaxDuty;
    Pwmout_usPerUnit_t   Pwmout_rusPerUnit;
    Pwmout_dur_t         Pwmout_tiPhase;
} Pwmout_appar_t;
#else
typedef struct
{
    Pwmout_dur_t         tiPer_C;
    Pwmout_act_t         stLvl_C;
    Pwmout_dutycycle_t   rMaxDty_C;
    Pwmout_usPerUnit_t   rPerUn_C;
    Pwmout_dur_t         tiPh_C;
} Pwmout_appar_t;
#endif

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
/**
  Signal Configuration.
*/


/**
  Internal RAM Variables.
*/
__PRAGMA_USE__pwm__1_5ms__InitRAM__arr32__START
extern Pwmout_buf_t bufferO_F_ECUA024;
extern Pwmout_buf_t bufferO_F_ECUA046;
extern Pwmout_buf_t bufferO_F_ECUK088;
extern Pwmout_buf_t bufferO_F_ECUA010;
extern Pwmout_buf_t bufferO_F_ECUA023;
extern Pwmout_buf_t bufferO_F_ECUA093;
extern Pwmout_buf_t bufferO_F_ECUK084;
extern Pwmout_buf_t bufferO_F_ECUA054;
extern Pwmout_buf_t bufferO_F_ECUA045;
extern Pwmout_buf_t bufferO_F_ECUK057;
/// extern Pwmout_buf_t bufferAdcI_Timer_TRIG16;

__PRAGMA_USE__pwm__1_5ms__InitRAM__arr32__END

/**
  Signals.
*/


/**
  Calibration  and Run Time Configuration.
*/
__PRAGMA_USE__pwm__1_5ms__InitRAM__s32__START
extern Pwmout_appar_t O_F_ECUA024_cal;
extern Pwmout_appar_t O_F_ECUA046_cal;
extern Pwmout_appar_t O_F_ECUK088_cal;
extern Pwmout_appar_t O_F_ECUA010_cal;
extern Pwmout_appar_t O_F_ECUA023_cal;
extern Pwmout_appar_t O_F_ECUA093_cal;
extern Pwmout_appar_t O_F_ECUK084_cal;
extern Pwmout_appar_t O_F_ECUA054_cal;
extern Pwmout_appar_t O_F_ECUA045_cal;
extern Pwmout_appar_t O_F_ECUK057_cal;
/// extern Pwmout_appar_t AdcI_Timer_TRIG16_cal;

__PRAGMA_USE__pwm__1_5ms__InitRAM__s32__END

/**
  IRQ handling of SRN's used by PwmOut.
*/
__PRAGMA_USE__CODE__pwm__HighSpeed__START

__PRAGMA_USE__CODE__pwm__HighSpeed__END

/**
  OS support using Pwmout_Null_Proc function.
*/
__PRAGMA_USE__CODE__pwm__HighSpeed__START
extern void Pwmout_Null_Proc(void);
__PRAGMA_USE__CODE__pwm__HighSpeed__END

/**
  Dummy default method used without PwmOut H-Bridge function.
*/
__PRAGMA_USE__CODE__pwm__HighSpeed__START
extern void Pwmout_HBridgeDioNullMethod(bool level);
__PRAGMA_USE__CODE__pwm__HighSpeed__END

/**
  Dio method used by PwmOut H-Bridge function.
*/
__PRAGMA_USE__CODE__pwm__NormalSpeed__START

__PRAGMA_USE__CODE__pwm__NormalSpeed__END

/**
  Diagnosis methods used by PwmOut.
*/
__PRAGMA_USE__CODE__pwm__NormalSpeed__START
extern bit32       PwmOut_GetErrorInfo_O_F_ECUA024(void);
extern void        PwmOut_ClearErr_O_F_ECUA024(void);
extern bit32       PwmOut_TstImp_O_F_ECUA024(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUA024(void);
extern void        PwmOut_PwmPpty_O_F_ECUA024(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUA024(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUA024(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUA046(void);
extern void        PwmOut_ClearErr_O_F_ECUA046(void);
extern bit32       PwmOut_TstImp_O_F_ECUA046(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUA046(void);
extern void        PwmOut_PwmPpty_O_F_ECUA046(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUA046(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUA046(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUK088(void);
extern void        PwmOut_ClearErr_O_F_ECUK088(void);
extern bit32       PwmOut_TstImp_O_F_ECUK088(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUK088(void);
extern void        PwmOut_PwmPpty_O_F_ECUK088(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUK088(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUK088(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUA010(void);
extern void        PwmOut_ClearErr_O_F_ECUA010(void);
extern bit32       PwmOut_TstImp_O_F_ECUA010(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUA010(void);
extern void        PwmOut_PwmPpty_O_F_ECUA010(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUA010(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUA010(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUA023(void);
extern void        PwmOut_ClearErr_O_F_ECUA023(void);
extern bit32       PwmOut_TstImp_O_F_ECUA023(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUA023(void);
extern void        PwmOut_PwmPpty_O_F_ECUA023(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUA023(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUA023(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUA093(void);
extern void        PwmOut_ClearErr_O_F_ECUA093(void);
extern bit32       PwmOut_TstImp_O_F_ECUA093(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUA093(void);
extern void        PwmOut_PwmPpty_O_F_ECUA093(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUA093(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUA093(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUK084(void);
extern void        PwmOut_ClearErr_O_F_ECUK084(void);
extern bit32       PwmOut_TstImp_O_F_ECUK084(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUK084(void);
extern void        PwmOut_PwmPpty_O_F_ECUK084(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUK084(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUK084(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUA054(void);
extern void        PwmOut_ClearErr_O_F_ECUA054(void);
extern bit32       PwmOut_TstImp_O_F_ECUA054(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUA054(void);
extern void        PwmOut_PwmPpty_O_F_ECUA054(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUA054(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUA054(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUA045(void);
extern void        PwmOut_ClearErr_O_F_ECUA045(void);
extern bit32       PwmOut_TstImp_O_F_ECUA045(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUA045(void);
extern void        PwmOut_PwmPpty_O_F_ECUA045(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUA045(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUA045(void);
extern bit32       PwmOut_GetErrorInfo_O_F_ECUK057(void);
extern void        PwmOut_ClearErr_O_F_ECUK057(void);
extern bit32       PwmOut_TstImp_O_F_ECUK057(void);
extern DSM_FIdType PwmOut_GetFId_O_F_ECUK057(void);
extern void        PwmOut_PwmPpty_O_F_ECUK057(uint32 tiLow_u32, uint32 tiHigh_u32);
extern uint8       PwmOut_OLcurr_SwOn_O_F_ECUK057(void);
extern uint8       PwmOut_OLcurr_SwOff_O_F_ECUK057(void);

__PRAGMA_USE__CODE__pwm__NormalSpeed__END


__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUA024_PwmOutDiag_s; /// Diagnosis used by O_F_ECUA024
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUA046_PwmOutDiag_s; /// Diagnosis used by O_F_ECUA046
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUK088_PwmOutDiag_s; /// Diagnosis used by O_F_ECUK088
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUA010_PwmOutDiag_s; /// Diagnosis used by O_F_ECUA010
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUA023_PwmOutDiag_s; /// Diagnosis used by O_F_ECUA023
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUA093_PwmOutDiag_s; /// Diagnosis used by O_F_ECUA093
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUK084_PwmOutDiag_s; /// Diagnosis used by O_F_ECUK084
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUA054_PwmOutDiag_s; /// Diagnosis used by O_F_ECUA054
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUA045_PwmOutDiag_s; /// Diagnosis used by O_F_ECUA045
__PRAGMA_USE__pwm__1_5ms__constant__s32__END
__PRAGMA_USE__pwm__1_5ms__constant__s32__START
extern const PwmOutDiag_t O_F_ECUK057_PwmOutDiag_s; /// Diagnosis used by O_F_ECUK057
__PRAGMA_USE__pwm__1_5ms__constant__s32__END



/* _LIBRARYABILITY_H                                                                              */
#endif

/* _PWMOUT_AUTO_CONF_H                                                                            */
#endif
