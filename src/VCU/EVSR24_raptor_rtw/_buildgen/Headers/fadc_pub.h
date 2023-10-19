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
 * $Filename__:fadc_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:HGJ2FE$
 * $Date______:28.05.2010$
 * $Class_____:SWHDR$
 * $Name______:fadc_pub$
 * $Variant___:1.6.0$
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
 * 1.6.0; 0     28.05.2010 HGJ2FE
 *   RCMS00915275: FADC: Improve complex driver support
 * 
 * 1.3.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: fadc_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _FADC_PUB_H
#define _FADC_PUB_H


/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* ATTENTION: The following macros must be checked with each MACHINE_TYPE update!
   Additional key words: MachineType_h, MACHINE_SUBTYPE, TC_1724, TC_1736, TC_1767, TC_1782, TC_1797, TC_1793
   In case the macros content changes in a way that the intented usage is no longer possible,
   remove the macro to abort software build in order to detect dependencies to complex drivers. */

/* values for filter block input selection (bitfield INSEL of register FADC.FCRx) */
#define FADC_FCR_INSEL_DISBL_FB     0               /* disable filter block */
#define FADC_FCR_INSEL_CHN0         4               /* select channel 0 as input */
#define FADC_FCR_INSEL_CHN1         5               /* select channel 1 as input */
#define FADC_FCR_INSEL_CHN2         6               /* select channel 2 as input */
#define FADC_FCR_INSEL_CHN3         7               /* select channel 3 as input */
#define FADC_FCR_INSEL_CH_OFFS      4               /* this value ORed with the channel number programmed
                                                       to FCRx.INSEL connects the filter block to the channel */
#define FADC_FCR_INSEL_FLTBLK_CONN  2               /* this value programmed to FCRx.INSEL interconnects
                                                       filter blocks if possible */

/* values for gating mode (bitfield GM of register FADC.CFGRx) */
#define FADC_CFGR_GM_PERM_OFF       0               /* trigger source permanently disabled */
#define FADC_CFGR_GM_PERM_ON        1               /* trigger source permanently enabled */
#define FADC_CFGR_GM_ACT_HI         2               /* trigger source enabled on gating signal = high */
#define FADC_CFGR_GM_ACT_LO         3               /* trigger source enabled on gating signal = low */

/* significant values for FADC result (register FADC.RCHx) */
#define FADC_RCH_MAX_VAL            0x3FF           /* maximum possible FADC result */
#define FADC_RCH_DFFTL_0V_VAL       0x200           /* value representing 0V in differential sampling mode */

/* bit positions and masks for return value of calibration function Fadc_Clb() */
#define FADC_CLB_OK                 0               /* init value for calibration status = no error */
#define FADC_CLB_ERR_DVT_BP         12              /* deviation after calibration is out of spec */
#define FADC_CLB_ERR_CNV_TOUT_BP    13              /* conversion timeout occurred during calibration */
#define FADC_CLB_BLK_BP             14              /* calibration has been blocked by an already ongoing calibration */
#define FADC_CLB_NOT_PSBL_BP        15              /* calibration is not possible because it is not supported */
#define FADC_CLB_DVT_MSK            FADC_RCH_MAX_VAL
#define FADC_CLB_ERR_MSK            ( (1 << FADC_CLB_ERR_DVT_BP)      \
                                    | (1 << FADC_CLB_ERR_CNV_TOUT_BP) \
                                    | (1 << FADC_CLB_BLK_BP)          \
                                    | (1 << FADC_CLB_NOT_PSBL_BP)     )


/**
 ***********************************************************************************************************************
 *  Reads an analog input signal.
 *
 *  This function reads the result of the most recent conversion of the analog input channel selected by the arguments.
 *
 *  Depending on the channel specific configuration, it performs this task either by expanding the call to this
 *  function-like macro or by calling a "real" function. The latter is usually only necessary for channels where
 *  calibratable routing is required for the corresponding signal in the ADC HAL.
 *
 *  \param      idxDevice   Index of the device to read from (currently not used by FADC).
 *  \param      idxChannel  Index of the channel to read from.
 *  \return     The return value represents the normalised signal voltage, i.e. the ADC input
 *              voltage divided by the corresponding ADC reference voltage.
 *  \seealso    Fadc_AdcGetRatioFunc() Adc_GetRatio() Adc_Get()
 ***********************************************************************************************************************
 */

#define Fadc_AdcGetRatio(idxDevice, idxChannel) FADC_GET_RATIO_##idxChannel

/* please find the generated FADC_GET_RATIO_xx macros in fadc_auto_conf.h                                             */


/**
 ***********************************************************************************************************************
 *  Reads the reference voltage of an analog input.
 *
 *  This function reads the reference voltage which is used for the conversion of the analogue singal.
 *  For FADC this is fixed to 3.3V for all channels.
 *
 *  Depending on the channel specific configuration, it performs this task either by expanding the call to this
 *  function-like macro or by calling a "real" function. The latter is usually only necessary for channels where
 *  calibratable routing is required for the corresponding signal in the ADC HAL.
 *
 *  \param      idxDevice   Index of the device to read from (currently not used by FADC).
 *  \param      idxChannel  Index of the channel (not used as all channels have the same reference voltage).
 *  \return     The return value represents the FADC reference voltage in 200uV increments (3.3V / 200uV).
 *  \seealso    Fadc_AdcGetReferenceFunc() Adc_GetReference()
 ***********************************************************************************************************************
 */

#define Fadc_AdcGetReference(idxDevice, idxChannel) (sint16)(3300000UL / 200UL)


/**
 ***********************************************************************************************************************
 *  Returns the FId for requesting general ADC fault information from DSM.
 *
 *  If the AdcI driver detects a general (i.e. not signal-specific) fault of the internal ADC
 *  of the TriCore, it reports this defect to DSM. There are more than one sources of possible
 *  faults which result in more than one AdcI-related DFCs (diagnostic fault checks). As a user
 *  of ADC functionality, however, one is usually only interested in the more general information
 *  "may I expect that the ADC that converts the signal of interest still works (no matter what
 *  the particular reason for any possible malfunction actually is) and therefore returns
 *  plausible data?". This information can be retrieved from DSM by invoking the
 *  DSM_GetDscPermission() service which expects a function identifier (FId) as an argument.
 *  The FId required for answering the ADC user's question mentioned above is returned by the
 *  AdcI_AdcGetFId() function.
 *
 *  Depending on signal-specific configuration, this task is performed either by expanding
 *  the call to this function directly to the appropriate code or by calling a "real" function.
 *  The latter is usually only necessary for channels where calibratable routing is required
 *  for the corresponding signal in the ADC HAL.
 *
 *  \param      idxDevice   Index of the device to read from (currently not used by FADC).
 *  \param      idxChannel  Index of the channel (not used as all channels have the same reference voltage).
 *  \return     The returned FId gathers the results of all diagnostic fault checks carried out
 *              for the ADC which converts the selected signal.
 *  \seealso    AdcI_AdcGetFIdFunc() Adc_GetFId() DSM_GetDscPermission()
 ***********************************************************************************************************************
 */

#define Fadc_AdcGetFId(idxDevice, idxChannel) (FId_InhibitNever)


/*
 ***********************************************************************************************************************
 * Extern declarations
 ***********************************************************************************************************************
 */

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Fadc_Proc_Ini(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern sint16      Fadc_AdcGetRatioFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);
extern sint16      Fadc_AdcGetReferenceFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);
extern DSM_FIdType Fadc_AdcGetFIdFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);
extern uint        Fadc_Clb(uint numFadcChn_ui);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Adc_Interface_t Fadc_xAdcIfc_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END


/* _FADC_PUB_H */
#endif
