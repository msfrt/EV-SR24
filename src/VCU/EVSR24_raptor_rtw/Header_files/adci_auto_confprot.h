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
 * $Filename__:adci_auto_confprot.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:adci_auto_confprot$ 
 * $Variant___:1.11.0$ 
 * $Revision__:0$ 
 * $Type______:HT$ 
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
 * 1.11.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: adci_auto_confprot.ht
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/* MISRA RULE 1 VIOLATION: Maximum '#if...' nesting exceeds 8 levels ,
 * can't do anything - levels are needed... */
#ifndef _ADCI_AUTO_CONFPROT_H
#define _ADCI_AUTO_CONFPROT_H

#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the configuration dependent parts of the public interface
 *                 of the driver for the internal ADC of the TriCore.
 *
 * \scope          CONF
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* prototypes for auto generated ISRs */

__PRAGMA_USE__CODE__adc__HighSpeed__START

__PRAGMA_USE__CODE__adc__HighSpeed__END

/* generate defines */
#define ADCI_NOF_SWTRIGGERS      0
#define ADCI_NOF_ADCS            3
#define ADCI_NOF_MULTIPLEXERS    0


/* enum for bitpositions in errorStatus_u16 */
enum
{
    ADCI_E_TIMER_WRONGRESULT,
    ADCI_E_TIMER_UNKNOWNISRREQUEST,
    ADCI_E_EVENT_UNKNOWNISRREQUEST,
    ADCI_E_EVENT2_UNKNOWNISRREQUEST,
    ADCI_E_EVENT3_UNKNOWNISRREQUEST,
    ADCI_E_SOFTWARE_QUEUEFULL,
    ADCI_E_SOFTWARE_QUEUEPARAMETER,
    ADCI_E_SOFTWARE_UNKNOWNISRREQUEST,
    ADCI_E_COMMON_WRONGRESOLUTION,
    ADCI_E_COMMON_WRONGCHANNEL,
    ADCI_E_COMMON_WRONGREFERENCE,
    ADCI_E_MULTIPLEXER_WRONGRESULT,
    ADCI_E_MULTIPLEXER_DMALOSS
};

typedef struct
{
    uint16 tiCalibration_u16;
    uint16 tiIniConversion_u16;
    uint16 errorStatus_u16;
    uint16 errorCtr_u16;
    sint16 swTriggerCtr_s16;
} AdcI_stMonitoring_t;


/**
 ***************************************************************************************************
 *  Reads an analog input signal.
 *
 *  This function reads the result of the most recent conversion of the analog input channel
 *  selected by the arguments. Depending on channel-specific configuration, it performs this
 *  task either by expanding the call to this function directly to the appropriate code or by
 *  calling a "real" function. The latter is usually only necessary for channels where
 *  calibratable routing is required for the corresponding signal in the ADC HAL.
 *
 *  \param      idxDevice   Index of the device to read from (e.g. 0 for ADC0, 1 for ADC1).
 *  \param      idxChannel  Index of the channel to read from.
 *  \return     The return value represents the normalized signal voltage, i.e. the ADC input
 *              voltage divided by the corresponding ADC reference voltage.
 *  \seealso    AdcI_AdcGetRatioFunc() Adc_GetRatio() Adc_Get()
 ***************************************************************************************************
 */

#define AdcI_AdcGetRatio(idxDevice, idxChannel) ADCI_GET_RATIO_##idxDevice##_##idxChannel

#define ADCI_GET_RATIO_0_0    AdcI_Reg2Ratio(ADC0.RESR[0], 12)
#define ADCI_GET_RATIO_0_1    AdcI_Reg2Ratio(ADC0.RESR[1], 12)
#define ADCI_GET_RATIO_0_10   AdcI_Reg2Ratio(ADC0.RESR[10], 12)
#define ADCI_GET_RATIO_0_11   AdcI_Reg2Ratio(ADC0.RESR[11], 12)
#define ADCI_GET_RATIO_0_12   AdcI_Reg2Ratio(ADC0.RESR[12], 12)
#define ADCI_GET_RATIO_0_13   AdcI_Reg2Ratio(ADC0.RESR[13], 12)
#define ADCI_GET_RATIO_0_15   AdcI_Reg2Ratio(ADC0.RESR[15], 12)
#define ADCI_GET_RATIO_0_2    AdcI_Reg2Ratio(ADC0.RESR[2], 12)
#define ADCI_GET_RATIO_0_3    AdcI_Reg2Ratio(ADC0.RESR[3], 12)
#define ADCI_GET_RATIO_0_4    AdcI_Reg2Ratio(ADC0.RESR[4], 12)
#define ADCI_GET_RATIO_0_5    AdcI_Reg2Ratio(ADC0.RESR[5], 12)
#define ADCI_GET_RATIO_0_6    AdcI_Reg2Ratio(ADC0.RESR[6], 12)
#define ADCI_GET_RATIO_0_7    AdcI_Reg2Ratio(ADC0.RESR[7], 12)
#define ADCI_GET_RATIO_0_8    AdcI_Reg2Ratio(ADC0.RESR[8], 12)
#define ADCI_GET_RATIO_0_9    AdcI_Reg2Ratio(ADC0.RESR[9], 12)
#define ADCI_GET_RATIO_1_0    AdcI_Reg2Ratio(ADC1.RESR[0], 12)
#define ADCI_GET_RATIO_1_1    AdcI_Reg2Ratio(ADC1.RESR[1], 12)
#define ADCI_GET_RATIO_1_2    AdcI_Reg2Ratio(ADC1.RESR[2], 12)
#define ADCI_GET_RATIO_1_3    AdcI_Reg2Ratio(ADC1.RESR[3], 12)
#define ADCI_GET_RATIO_1_4    AdcI_Reg2Ratio(ADC1.RESR[4], 12)
#define ADCI_GET_RATIO_1_5    AdcI_Reg2Ratio(ADC1.RESR[5], 12)
#define ADCI_GET_RATIO_1_6    AdcI_Reg2Ratio(ADC1.RESR[6], 12)
#define ADCI_GET_RATIO_1_7    AdcI_Reg2Ratio(ADC1.RESR[7], 12)
#define ADCI_GET_RATIO_2_0    AdcI_Reg2Ratio(ADC2.RESR[0], 12)
#define ADCI_GET_RATIO_2_1    AdcI_Reg2Ratio(ADC2.RESR[1], 12)
#define ADCI_GET_RATIO_2_10   AdcI_Reg2Ratio(ADC2.RESR[10], 12)
#define ADCI_GET_RATIO_2_11   AdcI_Reg2Ratio(ADC2.RESR[11], 12)
#define ADCI_GET_RATIO_2_2    AdcI_Reg2Ratio(ADC2.RESR[2], 12)
#define ADCI_GET_RATIO_2_3    AdcI_Reg2Ratio(ADC2.RESR[3], 12)
#define ADCI_GET_RATIO_2_4    AdcI_Reg2Ratio(ADC2.RESR[4], 12)
#define ADCI_GET_RATIO_2_5    AdcI_Reg2Ratio(ADC2.RESR[5], 12)
#define ADCI_GET_RATIO_2_6    AdcI_Reg2Ratio(ADC2.RESR[6], 12)
#define ADCI_GET_RATIO_2_7    AdcI_Reg2Ratio(ADC2.RESR[7], 12)
#define ADCI_GET_RATIO_2_8    AdcI_Reg2Ratio(ADC2.RESR[8], 12)
#define ADCI_GET_RATIO_2_9    AdcI_Reg2Ratio(ADC2.RESR[9], 12)


/**
 ***************************************************************************************************
 *  Reads an analog input signal.
 *
 *  This function reads the result of the most recent conversion of the analog input channel
 *  selected by the arguments. It performes this task by expanding the call to this function 
 *  directly to the appropriate code. There is no functional implementation for this.
 *
 *  \param      idxDevice   Index of the device to read from (e.g. 0 for ADC0, 1 for ADC1).
 *  \param      idxChannel  Index of the channel to read from.
 *  \return     The return value is the raw conversion result.
 *  \seealso    AdcI_AdcGetRatioFunc() Adc_GetRatio() Adc_Get()
 ***************************************************************************************************
 */

#define AdcI_AdcGetRawRatio(idxDevice, idxChannel) ADCI_GET_RAW_RATIO_##idxDevice##_##idxChannel

#define ADCI_GET_RAW_RATIO_0_0    ((ADC0.RESR[0] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_1    ((ADC0.RESR[1] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_10   ((ADC0.RESR[10] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_11   ((ADC0.RESR[11] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_12   ((ADC0.RESR[12] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_13   ((ADC0.RESR[13] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_15   ((ADC0.RESR[15] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_2    ((ADC0.RESR[2] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_3    ((ADC0.RESR[3] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_4    ((ADC0.RESR[4] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_5    ((ADC0.RESR[5] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_6    ((ADC0.RESR[6] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_7    ((ADC0.RESR[7] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_8    ((ADC0.RESR[8] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_0_9    ((ADC0.RESR[9] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_1_0    ((ADC1.RESR[0] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_1_1    ((ADC1.RESR[1] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_1_2    ((ADC1.RESR[2] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_1_3    ((ADC1.RESR[3] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_1_4    ((ADC1.RESR[4] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_1_5    ((ADC1.RESR[5] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_1_6    ((ADC1.RESR[6] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_1_7    ((ADC1.RESR[7] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_0    ((ADC2.RESR[0] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_1    ((ADC2.RESR[1] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_10   ((ADC2.RESR[10] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_11   ((ADC2.RESR[11] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_2    ((ADC2.RESR[2] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_3    ((ADC2.RESR[3] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_4    ((ADC2.RESR[4] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_5    ((ADC2.RESR[5] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_6    ((ADC2.RESR[6] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_7    ((ADC2.RESR[7] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_8    ((ADC2.RESR[8] & 0x00000FFFul))
#define ADCI_GET_RAW_RATIO_2_9    ((ADC2.RESR[9] & 0x00000FFFul))


/**
 ***************************************************************************************************
 *  Reads the reference voltage of an analog input.
 *
 *  This function reads the reference voltage which is currently used at the analog input
 *  channel selected by the arguments. In most cases, this is a constant voltage, e.g.
 *  3.3V. Depending on channel-specific configuration, it performs this task either by
 *  expanding the call to this function directly to the appropriate code (usually simply a
 *  fixed number) or by calling a "real" function. The latter is usually only necessary for
 *  channels where calibratable routing is required for the corresponding signal in the ADC HAL.
 *
 *  \param      idxDevice   Index of the device (e.g. 0 for ADC0, 1 for ADC1).
 *  \param      idxChannel  Index of the channel.
 *  \return     The return value represents the reference voltage used for converting the ADC
 *              channel specified by the arguments. One count of the integer return value
 *              corresponds to a 200uV increment of the reference voltage.
 *  \seealso    AdcI_AdcGetReferenceFunc() Adc_GetReference()
 ***************************************************************************************************
 */

#define AdcI_AdcGetReference(idxDevice, idxChannel) ADCI_GET_REFERENCE_##idxDevice##_##idxChannel

#define ADCI_GET_REFERENCE_0_0    (25000)
#define ADCI_GET_REFERENCE_0_1    (25000)
#define ADCI_GET_REFERENCE_0_10   (25000)
#define ADCI_GET_REFERENCE_0_11   (25000)
#define ADCI_GET_REFERENCE_0_12   (25000)
#define ADCI_GET_REFERENCE_0_13   (25000)
#define ADCI_GET_REFERENCE_0_15   (25000)
#define ADCI_GET_REFERENCE_0_2    (25000)
#define ADCI_GET_REFERENCE_0_3    (25000)
#define ADCI_GET_REFERENCE_0_4    (25000)
#define ADCI_GET_REFERENCE_0_5    (25000)
#define ADCI_GET_REFERENCE_0_6    (25000)
#define ADCI_GET_REFERENCE_0_7    (25000)
#define ADCI_GET_REFERENCE_0_8    (25000)
#define ADCI_GET_REFERENCE_0_9    (25000)
#define ADCI_GET_REFERENCE_1_0    (25000)
#define ADCI_GET_REFERENCE_1_1    (25000)
#define ADCI_GET_REFERENCE_1_2    (25000)
#define ADCI_GET_REFERENCE_1_3    (25000)
#define ADCI_GET_REFERENCE_1_4    (25000)
#define ADCI_GET_REFERENCE_1_5    (25000)
#define ADCI_GET_REFERENCE_1_6    (25000)
#define ADCI_GET_REFERENCE_1_7    (25000)
#define ADCI_GET_REFERENCE_2_0    (25000)
#define ADCI_GET_REFERENCE_2_1    (25000)
#define ADCI_GET_REFERENCE_2_10   (25000)
#define ADCI_GET_REFERENCE_2_11   (25000)
#define ADCI_GET_REFERENCE_2_2    (25000)
#define ADCI_GET_REFERENCE_2_3    (25000)
#define ADCI_GET_REFERENCE_2_4    (25000)
#define ADCI_GET_REFERENCE_2_5    (25000)
#define ADCI_GET_REFERENCE_2_6    (25000)
#define ADCI_GET_REFERENCE_2_7    (25000)
#define ADCI_GET_REFERENCE_2_8    (25000)
#define ADCI_GET_REFERENCE_2_9    (25000)


/**
 ***************************************************************************************************
 *  Forces an analog input line to low voltage.
 *
 *  This function activates a test mode for the input channel selected by the arguments.
 *  Whenever this test mode is active, the analog input line corresponding to the selected
 *  channel is pulled low and the actual signal input is temporarily disconnected. The test
 *  mode is available only for the analog input line AN07 and is only used for ADC monitoring,
 *  not for regular ADC functionality.
 *
 *  Depending on signal-specific configuration, this task is performed either by expanding
 *  the call to this function directly to the appropriate code or by calling a "real" function.
 *  The latter is usually only necessary for channels where calibratable routing is required
 *  for the corresponding signal in the ADC HAL.
 *
 *  This function is only available for channels where test mode functionality is requested
 *  by configuration to allow consistency checking at the earliest possible stage in the
 *  development process (i.e. during configuration time).
 *
 *  \param      idxDevice   Index of the device (e.g. 0 for ADC0, 1 for ADC1).
 *  \param      idxChannel  Index of the channel.
 *  \seealso    AdcI_AdcForceLowFunc() Adc_ForceLow() AdcI_AdcRelease() Adc_Release()
 ***************************************************************************************************
 */

#define AdcI_AdcForceLow(idxDevice, idxChannel) ADCI_FORCE_LOW_##idxDevice##_##idxChannel

#define ADCI_FORCE_LOW_0_7    Cpu_ResetEndinit(); Reg_ClrBit(ADC0, APR, APR_RG1); Reg_SetBit(ADC0, GLOBCFG, GLOBCFG_MTM7); Reg_SetBit(ADC0, APR, APR_RG1); Cpu_SetEndinit()


/**
 ***************************************************************************************************
 *  Releases an analog input line (counterpart to AdcI_AdcForceLow()).
 *
 *  This function deactivates any test mode activated by a call to AdcI_AdcForceLow() for the
 *  input channel selected by the arguments. Depending on channel-specific configuration, this
 *  task is performed either by expanding the call to this function directly to the appropriate
 *  code or by calling a "real" function. The latter is usually only necessary for channels
 *  where calibratable routing is required for the corresponding signal in the ADC HAL.
 *
 *  This function is only available for channels where test mode functionality is requested
 *  by configuration to allow consistency checking at the earliest possible stage in the
 *  development process (i.e. during configuration time).
 *
 *  \param      idxDevice   Index of the device (e.g. 0 for ADC0, 1 for ADC1).
 *  \param      idxChannel  Index of the channel.
 *  \seealso    AdcI_AdcReleaseFunc() Adc_Release() AdcI_AdcForceLow() Adc_ForceLow()
 ***************************************************************************************************
 */

#define AdcI_AdcRelease(idxDevice, idxChannel) ADCI_RELEASE_##idxDevice##_##idxChannel

#define ADCI_RELEASE_0_7      Cpu_ResetEndinit(); Reg_ClrBit(ADC0, APR, APR_RG1); Reg_ClrBit(ADC0, GLOBCFG, GLOBCFG_MTM7); Reg_SetBit(ADC0, APR, APR_RG1); Cpu_SetEndinit()


/**
 ***************************************************************************************************
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
 *  \param      idxDevice   Index of the device (e.g. 0 for ADC0, 1 for ADC1).
 *  \param      idxChannel  Index of the channel which is possibly affected by general ADC faults.
 *  \return     The returned FId gathers the results of all diagnostic fault checks carried out
 *              for the ADC which converts the selected signal.
 *  \seealso    AdcI_AdcGetFIdFunc() Adc_GetFId() DSM_GetDscPermission()
 ***************************************************************************************************
 */

#define AdcI_AdcGetFId(idxDevice, idxChannel) (FId_InhibitNever)



/**
 ***************************************************************************************************
 *  Selects an analog input.
 *
 *  This function switchs to channel which is currently selected by the xSignal argument.
 *  This task is performed by a macro technique by expanding the call to this function directly to
 *  the appropriate code. This function is only used for signal which is triggred by external event.
 *
 *  \param      xSignal     Name of the analog input signal.
 *  \return     None.
 *  \seealso
 ***************************************************************************************************
 */

#define AdcI_AdcSelect(idxDevice, idxChannel) ADCI_SELECT_##idxDevice##_##idxChannel



/*
 ***************************************************************************************************
 *  Request a conversion with channel injection
 *
 *  This is the implementation of AdcI_AdcTrigger as macro, it differentiates the different 
 *  signals and calls the functional implementation, the special thing is, that for TC17x6
 *  the callback-pointer has to be added.
 *  \param      idxDevice   Index of the device to read from (e.g. 0 for ADC0, 1 for ADC1).
 *  \param      idxChannel  Index of the channel to trigger from.
 *  \return     TRUE or FALSE 
 *  \seealso
 ***************************************************************************************************
 */

#define AdcI_AdcTrigger(idxDevice, idxChannel) ADCI_TRIGGER_##idxDevice##_##idxChannel



/**
 ***************************************************************************************************
 *  signalspecific macro definitions
 *
 *  In this section some ADCI internal defines are generated to support the complex driver modules
 *  accessing the ADCI internal registers. These registers must be used carefully 
 ***************************************************************************************************
 */




/* _LIBRARYABILITY_H                                                                              */
#endif

/* _ADCI_AUTO_CONFPROT_H                                                                          */
#endif
