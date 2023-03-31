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
 * $Filename__:fadc_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AUB5COB$
 * $Date______:27.08.2017$
 * $Class_____:SWHDR$
 * $Name______:fadc_priv$
 * $Variant___:1.7.2$
 * $Revision__:1$
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
 * 1.7.2; 1     27.08.2017 AUB5COB
 *   Updated review comments
 * 
 * 1.7.2; 0     19.08.2017 AUB5COB
 *   1. FADC_GEN_CFG_OFS_CAL_REPEAT is added to choose Calibration repetition 
 *   option
 *   2. Five dummy conversion before calibration to ensure Calibration procedure
 *    to provide best result on first iteration itself.
 *   3. Still Calibration is not provided best result, then repeat the 
 *   calibration procedure. Maximum five time repeat the Calibration procedure 
 *   to find best result. Still Calibration procedure provide more deviation, 
 *   then Fadc provides error.
 * 
 * 1.7.1; 0     28.10.2014 BMU2COB
 *   RQONE00465086
 *   
 *   Fadc_Clb - unnecessary conversion timeout error during calibration if 
 *   Fadc_Clb is scheduled used 
 *   
 *   along with any highpriority task which might interrupt the calibration 
 *   routine.
 * 
 * 1.5.0; 0     24.11.2009 AWL2SI
 *   B_FADC.5.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _FADC_PRIV_H
#define _FADC_PRIV_H

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

// #define FADC_CLB_DBG

#define FADC_CLB_REG_GCR_CLR_MSK        (uint32)~(  Reg_Mask(FADC, GCR, GCR_CALMODE)                                   \
                                                  | Reg_Mask(FADC, GCR, GCR_CALCH))

#define FADC_CLB_REG_ACR_CLR_MSK        (uint32)~(  Reg_Mask(FADC, ACR[0], ACR_CALOFF3)                                \
                                                  | Reg_Mask(FADC, ACR[0], ACR_CALOFF)                                 \
                                                  | Reg_Mask(FADC, ACR[0], ACR_GAIN))

#define FADC_CLB_REG_ACR_SET_MSK        (Reg_Mask(FADC, ACR[0], ACR_ENP) | Reg_Mask(FADC, ACR[0], ACR_ENN))

#define FADC_CLB_REG_ACR_CALOFF_MSK     (Reg_Mask(FADC, ACR[0], ACR_CALOFF3) | Reg_Mask(FADC, ACR[0], ACR_CALOFF))

#define FADC_CLB_REG_FMR_RIRQ0_SCRF0    (Reg_Mask(FADC, FMR, FMR_RIRQ0) | Reg_Mask(FADC, FMR, FMR_SCRF0))

#define FADC_CLB_WAIT_CPU_CYCL          25L                         /* wait for 25 CPU cycles */
#define FADC_CLB_WAIT_TIME              (CPU_US_TO_TICKS(5))        /* wait 5us until channel is settled
                                                                       -> value taken from TriCore user manual */
#define FADC_CLB_CNV_TOUT               (CPU_US_TO_TICKS(100))      /* timeout for one conversion = 100us
                                                                       to prevent deadlock loop
                                                                       -> although a conversion takes less than 300ns
                                                                          a 100us timeout is chosen in case higher
                                                                          priority sampling of other FADC channels
                                                                          takes place at the same time */
#define FADC_CLB_OFS_NOM_VAL            0x200L      /* nominal value to be measured during offset calibration */

#define FADC_CHN_IDX_NEG_OFS            100         /* ADC HAL signal index offset for signals on negative inputs */

#define FADC_CLB_MAX_REPEAT             5U          /* Calibration repetition count */

#define FADC_CLB_MAX_DUM_CONV           5U          /* Maximum Dummy conversion */

/*
 ***********************************************************************************************************************
 * Type definitions
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 * Extern declarations
 ***********************************************************************************************************************
 */

__PRAGMA_USE__hwe__50ms_1s__RAM__x8__START
extern uint8 Fadc_stClbActv_u8;
__PRAGMA_USE__hwe__50ms_1s__RAM__x8__END

__PRAGMA_USE__hwe__50ms_1s__RAM__arr16__START
#ifdef FADC_CLB_DBG
 #if (FADC_OFFSET_CLB_REPEAT == FALSE)
   extern uint16 Fadc_dbgRsltOfsClb_au16[16];
 #else
   extern uint16 Fadc_dbgRsltOfsClb_au16[80];
 #endif
extern uint8  Fadc_dbgIdxMinDvt_u8;
extern uint8  Fadc_dbgMinDvt_u8;
extern uint8  Fadc_dbgCtTOut_u8;
extern uint8  Fadc_dbgGenTOut_u8;
#endif
__PRAGMA_USE__hwe__50ms_1s__RAM__arr16__END


/* _FADC_PRIV_H */
#endif
