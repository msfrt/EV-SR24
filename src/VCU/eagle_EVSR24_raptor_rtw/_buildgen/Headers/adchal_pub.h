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
 * $Filename__:adchal_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:HGJ2FE$
 * $Date______:25.06.2010$
 * $Class_____:SWHDR$
 * $Name______:adchal_pub$
 * $Variant___:1.13.0$
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
 * 1.13.0; 0     25.06.2010 HGJ2FE
 *   RCMS00929498: ADC: Provide ratiometric variant type C (Car_PU_02)
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: adchal_pub.h
 *      Version: \main\8
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/




#ifndef _ADCHAL_PUB_H
#define _ADCHAL_PUB_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the configuration independent parts of the public interface
 *                 of the ADC driver.
 *
 * \scope          API
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/// Flag specifying ratiometric correction for a particular signal
#define ADC_SIGNAL_RATIOMETRIC 0x01


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/**
 *  Type used for identifying analog signals.
 */

typedef uint8 Adc_Signal_t;


/**
 *  Type for describing the ADC interface to lower HWE layers.
 *
 *  This type is used for defining the implementation of the interface for analog signals on
 *  layers lower than the hardware abstraction layer. Each hardware driver in the peripheral
 *  device layer or the low level driver layer which provides services to be used by the ADC
 *  HAL must implement such an interface.
 *
 *  Although this structure is only relevant for HAL <-> PDL/LLD communication, it has to be
 *  defined as a public type because a pointer to a structure of this type is part of the
 *  (necessarily public) signal description.
 */

typedef struct
{
    /// Pointer to the implementation of the XXX_AdcGetRatio function
    sint16 (* AdcGetRatio_pfn)(uint8 idxDevice_u8, uint8 idxChannel_u8);

    /// Pointer to the implementation of the XXX_AdcGetReference function
    sint16 (* AdcGetReference_pfn)(uint8 idxDevice_u8, uint8 idxChannel_u8);

    /// Pointer to the implementation of the XXX_AdcForceLow function
    void (* AdcForceLow_pfn)(uint8 idxDevice_u8, uint8 idxChannel_u8);

    /// Pointer to the implementation of the XXX_AdcRelease function
    void (* AdcRelease_pfn)(uint8 idxDevice_u8, uint8 idxChannel_u8);

    /// Pointer to the implementation of the XXX_AdcGetFId function
    DSM_FIdType (* AdcGetFId_pfn)(uint8 idxDevice_u8, uint8 idxChannel_u8);

} Adc_Interface_t;


/**
 *  Type for describing all HAL-related properties of an analog signal.
 *
 *  This structure is mainly used for calibratable routing via a signal configuration tables
 *  which contains structures of this type. It has to be public because it is referenced in
 *  application code in case of calibratable routing.
 */

typedef struct
{
    /// Pointer to the device-specific implementation of the analog signal interface
    const Adc_Interface_t *xInterface_p;

    /// Factor for converting voltage at ADC pin to voltage at ECU pin (neutral = 0x10000)
    sint32 rFactor_s32;

    /// Quantization for converting voltage at ADC pin to voltage at ECU pin
    sint32 rQuant_s32;

    /// Offset for converting voltage at ADC pin to voltage at ECU pin
    sint16 uOffset_s16;

    /// Zero-based index of the device that delivers the requested signal
    uint8 idxDevice_u8;

    /// Zero-based Index of the channel that delivers the requested signal
    uint8 idxChannel_u8;

    /// Flags for special signal properties (e.g. ratiometric conversion)
    uint8 xFlags_u8;

} Adc_SignalDescriptor_t;


/**
 *  Type to hold static data for calculation of ratiometric correction factor
 *  (currently used for variant C)
 */

typedef struct
{
    /// Summed up samples of the ratiometric reference voltage
    sint32 uSummedSamples_s32;

    /// Number of samples summed up in uSummedSamples_s32
    uint32 numSamples_u32;

} Adc_Ratiometric_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */


__PRAGMA_USE__CODE__adc__LowSpeed__START
    // Initialization process
    extern void Adc_Ini(void);

    // Implementation of Adc_ForceLow as a function (mainly for calibratable routing)
    extern void Adc_ForceLowFunc(const Adc_SignalDescriptor_t *xSignalDescriptor_pc);

    // Implementation of Adc_Release as a function (mainly for calibratable routing)
    extern void Adc_ReleaseFunc(const Adc_SignalDescriptor_t *xSignalDescriptor_pc);

    // Implementation of Adc_GetFId as a function (mainly for calibratable routing)
    extern DSM_FIdType Adc_GetFIdFunc(const Adc_SignalDescriptor_t *xSignalDescriptor_pc);
__PRAGMA_USE__CODE__adc__LowSpeed__END

__PRAGMA_USE__CODE__adc__NormalSpeed__START
    // Implementation of Adc_GetRatio as a function (mainly for calibratable routing)
    extern sint16 Adc_GetRatioFunc(const Adc_SignalDescriptor_t *xSignalDescriptor_pc);

    // Implementation of Adc_GetRawRatio as a function (mainly for calibratable routing)
    extern sint16 Adc_GetRawRatioFunc(const Adc_SignalDescriptor_t *xSignalDescriptor_pc);

    // Implementation of Adc_GetReference as a function (mainly for calibratable routing)
    extern sint16 Adc_GetReferenceFunc(const Adc_SignalDescriptor_t *xSignalDescriptor_pc);

    // Function for updating the correction factor of signals using ratiometric conversion
    extern void Adc_UpdateRatiometric(void);
__PRAGMA_USE__CODE__adc__NormalSpeed__END

__PRAGMA_USE__CODE__adc__HighSpeed__START
    // Implementation of Adc_Get as a function (mainly for calibratable routing)
    extern sint16 Adc_GetFunc(const Adc_SignalDescriptor_t *xSignalDescriptor_pc);

    // Callback function to collect ADC samples of ratiometric reference voltage
    extern void Adc_ClbckRatiometric(void);
__PRAGMA_USE__CODE__adc__HighSpeed__END


__PRAGMA_USE__adc__1_5ms__InitRAM__s32__START
    // Correction factor used for ratiometric conversion
    extern volatile sint32 Adc_xRatiometricFactor_s32;
__PRAGMA_USE__adc__1_5ms__InitRAM__s32__END

/* _ADCHAL_PUB_H                                                                                  */
#endif
