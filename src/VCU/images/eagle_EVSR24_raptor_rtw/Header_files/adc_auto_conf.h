
#ifndef _ADC_AUTO_CONF_H
#define _ADC_AUTO_CONF_H

#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the configuration dependent parts of the public interface
 *                 of the ADC driver.
 *
 * \scope          CONF
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


#include "adci_friends.h"

// Include user header for callback functions


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/*
 *  Enum type used for defining symbols for  analog signals.
 *
 */

enum
{
    APP1_I_A,
    APP2_I_A,
    BattURaw_I_A,
    BattU_I_A,
    I_A_A016,
    I_A_A017,
    I_A_A018,
    I_A_A019,
    I_A_A037,
    I_A_A038,
    I_A_A040,
    I_A_A041,
    I_A_A042,
    I_A_A055,
    I_A_A059,
    I_A_A062,
    I_A_A082,
    I_A_A084,
    I_A_A097,
    I_A_A102,
    I_A_A103,
    I_A_A105,
    I_A_K011,
    I_A_K013,
    I_A_K030,
    I_A_K034,
    I_A_K035,
    I_A_K041,
    I_A_K042,
    I_A_K045,
    I_A_K051,
    I_A_K058,
    I_A_K075,
    I_A_STRTH,
    P_DMTL_ADC,
    UTEST
};


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */


/*
 *  Extern declaration of the signal descriptor table.
 *
 *  The signal descriptor table holds the specifications of all signals with calibratable
 *  routing. It is only defined if at least one signal is configured to have calibratable
 *  signal routing.
 */

/* <<No signal with calibratable routing configured>> */


/*
 *  Macros for signal location
 */

#define APP1_I_A_MSLOC             ANY
#define APP2_I_A_MSLOC             ANY
#define BattURaw_I_A_MSLOC         ANY
#define BattU_I_A_MSLOC            ANY
#define I_A_A016_MSLOC             ANY
#define I_A_A017_MSLOC             ANY
#define I_A_A018_MSLOC             ANY
#define I_A_A019_MSLOC             ANY
#define I_A_A037_MSLOC             ANY
#define I_A_A038_MSLOC             ANY
#define I_A_A040_MSLOC             ANY
#define I_A_A041_MSLOC             ANY
#define I_A_A042_MSLOC             ANY
#define I_A_A055_MSLOC             ANY
#define I_A_A059_MSLOC             ANY
#define I_A_A062_MSLOC             ANY
#define I_A_A082_MSLOC             ANY
#define I_A_A084_MSLOC             ANY
#define I_A_A097_MSLOC             ANY
#define I_A_A102_MSLOC             ANY
#define I_A_A103_MSLOC             ANY
#define I_A_A105_MSLOC             ANY
#define I_A_K011_MSLOC             ANY
#define I_A_K013_MSLOC             ANY
#define I_A_K030_MSLOC             ANY
#define I_A_K034_MSLOC             ANY
#define I_A_K035_MSLOC             ANY
#define I_A_K041_MSLOC             ANY
#define I_A_K042_MSLOC             ANY
#define I_A_K045_MSLOC             ANY
#define I_A_K051_MSLOC             ANY
#define I_A_K058_MSLOC             ANY
#define I_A_K075_MSLOC             ANY
#define I_A_STRTH_MSLOC            ANY
#define P_DMTL_ADC_MSLOC           ANY
#define UTEST_MSLOC                ANY


/*
 *  Macros for signal multiplexing
 */




/**
 ***************************************************************************************************
 *  start a conversion of an analog input signal by software.
 *
 *  This function starts a conversion of the analog input signal once selected by the xSignal
 *  argument.It performs this task by a macro technique (which expands the call to Adc_Trigger()
 *  to a call of the corresponding device driver).
 *
 *  \param      xSignal     Name of the analog input signal to convert.
 *  \return     TRUE if the request is accepted, otherwise FALSE
 *  \seealso
 ***************************************************************************************************
 */

#define Adc_Trigger(xSignal) ADC_TRIGGER_##xSignal




/**
 ***************************************************************************************************
 *  Reads an analog input signal.
 *
 *  This function reads the result of the most recent conversion of the analog input signal
 *  selected by the xSignal argument. Depending on signal-specific configuration, it performs
 *  this task either by a macro technique (which expands the call to Adc_Get() to a call of the
 *  corresponding device driver plus some extra HAL functionality) or by calling the implementation
 *  as a function (Adc_GetFunc()). The latter implementation is used only if calibratable
 *  routing is selected for the corresponding signal to provide maximum code efficiency for the
 *  standard case of non-calibratable routing.
 *
 *  The functionality implemented by Adc_Get() consists of the following parts:
 *
 *  - Routing: This maps a signal name (which usually describes the physical meaning of the
 *    respective analog signal) to a specific device/channel combination which defines where
 *    this signal is converted to its digital representation in the ECU hardware.
 *  - Conversion from normalized signal values measured at the corresponding ADC pin (as
 *    delivered by the device driver that controls the conversion of this analog signal to
 *    its digital representation) to a voltage which could be measured at the ECU pin where
 *    the actual signal source is connected to. This conversion takes the electrical properties
 *    of the entire signal path between the ECU pin and the ADC pin into account. It also
 *    hides device-specific properties such as ADC reference voltage.
 *  - Ratiometric correction: This technique is used to gain maximum accuracy for signals that
 *    depend on a supply voltage different from the supply voltage used as the ADC reference.
 *
 *  \param      xSignal     Name of the analog input signal to read.
 *  \return     The return value represents the voltage at the ECU pin where the selected signal
 *              is connected to. One count of the integer return value corresponds to a change
 *              of the voltage at the ECU pin which can be configured by the ADC_QUANTIZATION tag.
 *  \seealso    Adc_GetFunc() Adc_GetRatio() Adc_UpdateRatiometric()
 ***************************************************************************************************
 */

#define Adc_Get(xSignal) ADC_GET_##xSignal

#define ADC_GET_APP1_I_A             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 6)) * ((sint64) AdcI_AdcGetRatio(0, 6))) >> 31), 0)
#define ADC_GET_APP2_I_A             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 7)) * ((sint64) AdcI_AdcGetRatio(0, 7))) >> 31), 0)
#define ADC_GET_BattURaw_I_A         (sint16) (sint32)((uint32)(((sint32) AdcI_AdcGetReference(1, 7)) * ((sint32) AdcI_AdcGetRatio(1, 7))) >> 15)
#define ADC_GET_BattU_I_A            SrvB_Add16((sint32)((uint64)(((sint64) 3140) * ((sint64) AdcI_AdcGetReference(1, 7)) * ((sint64) AdcI_AdcGetRatio(1, 7))) >> 31), 0)
#define ADC_GET_I_A_A016             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 5)) * ((sint64) AdcI_AdcGetRatio(2, 5))) >> 31), 0)
#define ADC_GET_I_A_A017             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 4)) * ((sint64) AdcI_AdcGetRatio(2, 4))) >> 31), 0)
#define ADC_GET_I_A_A018             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 9)) * ((sint64) AdcI_AdcGetRatio(0, 9))) >> 31), 0)
#define ADC_GET_I_A_A019             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 10)) * ((sint64) AdcI_AdcGetRatio(2, 10))) >> 31), 0)
#define ADC_GET_I_A_A037             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 13)) * ((sint64) AdcI_AdcGetRatio(0, 13))) >> 31), 0)
#define ADC_GET_I_A_A038             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 2)) * ((sint64) AdcI_AdcGetRatio(0, 2))) >> 31), 0)
#define ADC_GET_I_A_A040             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(1, 6)) * ((sint64) AdcI_AdcGetRatio(1, 6))) >> 31), 0)
#define ADC_GET_I_A_A041             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(1, 2)) * ((sint64) AdcI_AdcGetRatio(1, 2))) >> 31), 0)
#define ADC_GET_I_A_A042             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 3)) * ((sint64) AdcI_AdcGetRatio(0, 3))) >> 31), 0)
#define ADC_GET_I_A_A055             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 11)) * ((sint64) AdcI_AdcGetRatio(2, 11))) >> 31), 0)
#define ADC_GET_I_A_A059             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 10)) * ((sint64) AdcI_AdcGetRatio(0, 10))) >> 31), 0)
#define ADC_GET_I_A_A062             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(1, 4)) * ((sint64) AdcI_AdcGetRatio(1, 4))) >> 31), 0)
#define ADC_GET_I_A_A082             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(1, 3)) * ((sint64) AdcI_AdcGetRatio(1, 3))) >> 31), 0)
#define ADC_GET_I_A_A084             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 15)) * ((sint64) AdcI_AdcGetRatio(0, 15))) >> 31), 0)
#define ADC_GET_I_A_A097             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 5)) * ((sint64) AdcI_AdcGetRatio(0, 5))) >> 31), 0)
#define ADC_GET_I_A_A102             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 11)) * ((sint64) AdcI_AdcGetRatio(0, 11))) >> 31), 0)
#define ADC_GET_I_A_A103             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 12)) * ((sint64) AdcI_AdcGetRatio(0, 12))) >> 31), 0)
#define ADC_GET_I_A_A105             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 8)) * ((sint64) AdcI_AdcGetRatio(0, 8))) >> 31), 0)
#define ADC_GET_I_A_K011             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 1)) * ((sint64) AdcI_AdcGetRatio(0, 1))) >> 31), 0)
#define ADC_GET_I_A_K013             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 7)) * ((sint64) AdcI_AdcGetRatio(2, 7))) >> 31), 0)
#define ADC_GET_I_A_K030             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 8)) * ((sint64) AdcI_AdcGetRatio(2, 8))) >> 31), 0)
#define ADC_GET_I_A_K034             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(1, 0)) * ((sint64) AdcI_AdcGetRatio(1, 0))) >> 31), 0)
#define ADC_GET_I_A_K035             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(0, 0)) * ((sint64) AdcI_AdcGetRatio(0, 0))) >> 31), 0)
#define ADC_GET_I_A_K041             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 0)) * ((sint64) AdcI_AdcGetRatio(2, 0))) >> 31), 0)
#define ADC_GET_I_A_K042             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 2)) * ((sint64) AdcI_AdcGetRatio(2, 2))) >> 31), 0)
#define ADC_GET_I_A_K045             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(1, 5)) * ((sint64) AdcI_AdcGetRatio(1, 5))) >> 31), 0)
#define ADC_GET_I_A_K051             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 9)) * ((sint64) AdcI_AdcGetRatio(2, 9))) >> 31), 0)
#define ADC_GET_I_A_K058             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 3)) * ((sint64) AdcI_AdcGetRatio(2, 3))) >> 31), 0)
#define ADC_GET_I_A_K075             SrvB_Add16((sint32)((uint64)(((sint64) 32768) * ((sint64) AdcI_AdcGetReference(2, 1)) * ((sint64) AdcI_AdcGetRatio(2, 1))) >> 31), 0)
#define ADC_GET_I_A_STRTH            SrvB_Add16((sint32)((uint64)(((sint64) 39830) * ((sint64) AdcI_AdcGetReference(2, 6)) * ((sint64) AdcI_AdcGetRatio(2, 6))) >> 31), 0)
#define ADC_GET_P_DMTL_ADC           SrvB_Add16((sint32)((uint64)(((sint64) 1342) * ((sint64) AdcI_AdcGetReference(1, 1)) * ((sint64) AdcI_AdcGetRatio(1, 1))) >> 31), 0)
#define ADC_GET_UTEST                SrvB_Add16((sint32)((uint64)(((sint64) 34292) * ((sint64) AdcI_AdcGetReference(0, 4)) * ((sint64) AdcI_AdcGetRatio(0, 4))) >> 31), 0)


/**
 ***************************************************************************************************
 *  Reads an analog input signal.
 *
 *  This function reads the result of the most recent conversion of the analog input signal
 *  selected by the xSignal argument. Depending on signal-specific configuration, it performs
 *  this task either by a macro technique (which expands the call to Adc_GetRatio() to a call of
 *  the corresponding device driver plus some extra HAL functionality) or by calling the
 *  implementation as a function (Adc_GetRatioFunc()). The latter implementation is used only if
 *  calibratable routing is selected for the corresponding signal to provide maximum code
 *  efficiency for the standard case of non-calibratable routing.
 *
 *  The functionality implemented by Adc_GetRatio() consists of the following parts:
 *
 *  - Routing: This maps a signal name (which usually describes the physical meaning of the
 *    respective analog signal) to a specific device/channel combination which defines where
 *    this signal is converted to its digital representation in the ECU hardware.
 *  - Ratiometric correction: This technique is used to gain maximum accuracy for signals that
 *    depend on a supply voltage different from the supply voltage used as the ADC reference.
 *
 *  \param      xSignal     Name of the analog input signal to read.
 *  \return     The return value represents the normalized signal voltage, i.e. the ADC input
 *              voltage divided by the corresponding ADC reference voltage.
 *  \seealso    Adc_GetRatioFunc() Adc_Get() Adc_UpdateRatiometric()
 ***************************************************************************************************
 */

#define Adc_GetRatio(xSignal) ADC_GET_RATIO_##xSignal

#define ADC_GET_RATIO_APP1_I_A             AdcI_AdcGetRatio(0, 6)
#define ADC_GET_RATIO_APP2_I_A             AdcI_AdcGetRatio(0, 7)
#define ADC_GET_RATIO_BattURaw_I_A         AdcI_AdcGetRatio(1, 7)
#define ADC_GET_RATIO_BattU_I_A            AdcI_AdcGetRatio(1, 7)
#define ADC_GET_RATIO_I_A_A016             AdcI_AdcGetRatio(2, 5)
#define ADC_GET_RATIO_I_A_A017             AdcI_AdcGetRatio(2, 4)
#define ADC_GET_RATIO_I_A_A018             AdcI_AdcGetRatio(0, 9)
#define ADC_GET_RATIO_I_A_A019             AdcI_AdcGetRatio(2, 10)
#define ADC_GET_RATIO_I_A_A037             AdcI_AdcGetRatio(0, 13)
#define ADC_GET_RATIO_I_A_A038             AdcI_AdcGetRatio(0, 2)
#define ADC_GET_RATIO_I_A_A040             AdcI_AdcGetRatio(1, 6)
#define ADC_GET_RATIO_I_A_A041             AdcI_AdcGetRatio(1, 2)
#define ADC_GET_RATIO_I_A_A042             AdcI_AdcGetRatio(0, 3)
#define ADC_GET_RATIO_I_A_A055             AdcI_AdcGetRatio(2, 11)
#define ADC_GET_RATIO_I_A_A059             AdcI_AdcGetRatio(0, 10)
#define ADC_GET_RATIO_I_A_A062             AdcI_AdcGetRatio(1, 4)
#define ADC_GET_RATIO_I_A_A082             AdcI_AdcGetRatio(1, 3)
#define ADC_GET_RATIO_I_A_A084             AdcI_AdcGetRatio(0, 15)
#define ADC_GET_RATIO_I_A_A097             AdcI_AdcGetRatio(0, 5)
#define ADC_GET_RATIO_I_A_A102             AdcI_AdcGetRatio(0, 11)
#define ADC_GET_RATIO_I_A_A103             AdcI_AdcGetRatio(0, 12)
#define ADC_GET_RATIO_I_A_A105             AdcI_AdcGetRatio(0, 8)
#define ADC_GET_RATIO_I_A_K011             AdcI_AdcGetRatio(0, 1)
#define ADC_GET_RATIO_I_A_K013             AdcI_AdcGetRatio(2, 7)
#define ADC_GET_RATIO_I_A_K030             AdcI_AdcGetRatio(2, 8)
#define ADC_GET_RATIO_I_A_K034             AdcI_AdcGetRatio(1, 0)
#define ADC_GET_RATIO_I_A_K035             AdcI_AdcGetRatio(0, 0)
#define ADC_GET_RATIO_I_A_K041             AdcI_AdcGetRatio(2, 0)
#define ADC_GET_RATIO_I_A_K042             AdcI_AdcGetRatio(2, 2)
#define ADC_GET_RATIO_I_A_K045             AdcI_AdcGetRatio(1, 5)
#define ADC_GET_RATIO_I_A_K051             AdcI_AdcGetRatio(2, 9)
#define ADC_GET_RATIO_I_A_K058             AdcI_AdcGetRatio(2, 3)
#define ADC_GET_RATIO_I_A_K075             AdcI_AdcGetRatio(2, 1)
#define ADC_GET_RATIO_I_A_STRTH            AdcI_AdcGetRatio(2, 6)
#define ADC_GET_RATIO_P_DMTL_ADC           AdcI_AdcGetRatio(1, 1)
#define ADC_GET_RATIO_UTEST                AdcI_AdcGetRatio(0, 4)

/**
 ***************************************************************************************************
 *  Reads an analog input signal.
 *
 *  This function reads the result of the most recent conversion of the analog input signal
 *  selected by the xSignal argument. Depending on signal-specific configuration, it performs
 *  this task either by a macro technique (which only expands the call to Adc_GetRawRatio() to a call of
 *  the corresponding device driver) or by calling the implementation as a function
 *  (Adc_GetRawRatioFunc()). The latter implementation is used only if calibratable routing is selected
 *  for the corresponding signal to provide maximum code efficiency for the standard case of
 *  non-calibratable routing.
 *
 *  The functionality implemented by Adc_GetRawRatio() consists of the routing only. This maps a
 *  signal name (which usually describes the physical meaning of the respective analog signal) to
 *  a specific device/channel combination which defines where this signal is converted to its
 *  digital representation in the ECU hardware. Different to Adc_GetRatio(), ratiometric
 *  correction is not performed here under all circumstances.
 *
 *  \param      xSignal     Name of the analog input signal to read.
 *  \return     The return value represents the normalized signal voltage, i.e. the ADC input
 *              voltage divided by the corresponding ADC reference voltage.
 *  \seealso    Adc_GetRawRatioFunc() Adc_GetRatioFunc() Adc_Get()
 ***************************************************************************************************
 */

#define Adc_GetRawRatio(xSignal) ADC_GET_RAW_RATIO_##xSignal

#define ADC_GET_RAW_RATIO_APP1_I_A             AdcI_AdcGetRatio(0, 6)
#define ADC_GET_RAW_RATIO_APP2_I_A             AdcI_AdcGetRatio(0, 7)
#define ADC_GET_RAW_RATIO_BattURaw_I_A         AdcI_AdcGetRatio(1, 7)
#define ADC_GET_RAW_RATIO_BattU_I_A            AdcI_AdcGetRatio(1, 7)
#define ADC_GET_RAW_RATIO_I_A_A016             AdcI_AdcGetRatio(2, 5)
#define ADC_GET_RAW_RATIO_I_A_A017             AdcI_AdcGetRatio(2, 4)
#define ADC_GET_RAW_RATIO_I_A_A018             AdcI_AdcGetRatio(0, 9)
#define ADC_GET_RAW_RATIO_I_A_A019             AdcI_AdcGetRatio(2, 10)
#define ADC_GET_RAW_RATIO_I_A_A037             AdcI_AdcGetRatio(0, 13)
#define ADC_GET_RAW_RATIO_I_A_A038             AdcI_AdcGetRatio(0, 2)
#define ADC_GET_RAW_RATIO_I_A_A040             AdcI_AdcGetRatio(1, 6)
#define ADC_GET_RAW_RATIO_I_A_A041             AdcI_AdcGetRatio(1, 2)
#define ADC_GET_RAW_RATIO_I_A_A042             AdcI_AdcGetRatio(0, 3)
#define ADC_GET_RAW_RATIO_I_A_A055             AdcI_AdcGetRatio(2, 11)
#define ADC_GET_RAW_RATIO_I_A_A059             AdcI_AdcGetRatio(0, 10)
#define ADC_GET_RAW_RATIO_I_A_A062             AdcI_AdcGetRatio(1, 4)
#define ADC_GET_RAW_RATIO_I_A_A082             AdcI_AdcGetRatio(1, 3)
#define ADC_GET_RAW_RATIO_I_A_A084             AdcI_AdcGetRatio(0, 15)
#define ADC_GET_RAW_RATIO_I_A_A097             AdcI_AdcGetRatio(0, 5)
#define ADC_GET_RAW_RATIO_I_A_A102             AdcI_AdcGetRatio(0, 11)
#define ADC_GET_RAW_RATIO_I_A_A103             AdcI_AdcGetRatio(0, 12)
#define ADC_GET_RAW_RATIO_I_A_A105             AdcI_AdcGetRatio(0, 8)
#define ADC_GET_RAW_RATIO_I_A_K011             AdcI_AdcGetRatio(0, 1)
#define ADC_GET_RAW_RATIO_I_A_K013             AdcI_AdcGetRatio(2, 7)
#define ADC_GET_RAW_RATIO_I_A_K030             AdcI_AdcGetRatio(2, 8)
#define ADC_GET_RAW_RATIO_I_A_K034             AdcI_AdcGetRatio(1, 0)
#define ADC_GET_RAW_RATIO_I_A_K035             AdcI_AdcGetRatio(0, 0)
#define ADC_GET_RAW_RATIO_I_A_K041             AdcI_AdcGetRatio(2, 0)
#define ADC_GET_RAW_RATIO_I_A_K042             AdcI_AdcGetRatio(2, 2)
#define ADC_GET_RAW_RATIO_I_A_K045             AdcI_AdcGetRatio(1, 5)
#define ADC_GET_RAW_RATIO_I_A_K051             AdcI_AdcGetRatio(2, 9)
#define ADC_GET_RAW_RATIO_I_A_K058             AdcI_AdcGetRatio(2, 3)
#define ADC_GET_RAW_RATIO_I_A_K075             AdcI_AdcGetRatio(2, 1)
#define ADC_GET_RAW_RATIO_I_A_STRTH            AdcI_AdcGetRatio(2, 6)
#define ADC_GET_RAW_RATIO_P_DMTL_ADC           AdcI_AdcGetRatio(1, 1)
#define ADC_GET_RAW_RATIO_UTEST                AdcI_AdcGetRatio(0, 4)

/**
 ***************************************************************************************************
 *  Reads the reference voltage of an analog input.
 *
 *  This function reads the reference voltage which is currently used for converting the analog
 *  input signal selected by the xSignal argument. In most cases, this is a constant voltage, e.g.
 *  3.3V or 5.0V. Depending on signal-specific configuration, it performs this task either by a
 *  macro technique (which simply replaces the call to Adc_GetReference() with a call of the
 *  corresponding driver function of the device which converts this signal) or by calling the
 *  implementation as a function (Adc_GetReferenceFunc()). The latter implementation is used only
 *  if calibratable routing is selected for the corresponding signal to provide maximum code
 *  efficiency for the standard case of non-calibratable routing.
 *
 *  \param      xSignal     Name of the analog input signal.
 *  \return     The return value represents the reference voltage used for converting the ADC
 *              signal specified by the xSignal argument. One count of the integer return value
 *              corresponds to a change of the reference voltage which can be configured by the
 *              ADC_QUANTIZATION tag.
 *  \seealso    Adc_GetReferenceFunc()
 ***************************************************************************************************
 */

#define Adc_GetReference(xSignal) ADC_GET_REFERENCE_##xSignal

#define ADC_GET_REFERENCE_APP1_I_A             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 6), 32768L, 16)
#define ADC_GET_REFERENCE_APP2_I_A             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 7), 32768L, 16)
#define ADC_GET_REFERENCE_BattURaw_I_A         AdcI_AdcGetReference(1, 7)
#define ADC_GET_REFERENCE_BattU_I_A            AdcI_AdcGetReference(1, 7)
#define ADC_GET_REFERENCE_I_A_A016             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 5), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A017             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 4), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A018             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 9), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A019             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 10), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A037             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 13), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A038             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 2), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A040             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(1, 6), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A041             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(1, 2), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A042             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 3), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A055             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 11), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A059             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 10), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A062             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(1, 4), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A082             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(1, 3), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A084             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 15), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A097             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 5), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A102             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 11), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A103             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 12), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_A105             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 8), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K011             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 1), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K013             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 7), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K030             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 8), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K034             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(1, 0), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K035             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 0), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K041             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 0), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K042             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 2), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K045             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(1, 5), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K051             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 9), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K058             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 3), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_K075             SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 1), 32768L, 16)
#define ADC_GET_REFERENCE_I_A_STRTH            SrvB_MulShRight16((sint32)AdcI_AdcGetReference(2, 6), 32768L, 16)
#define ADC_GET_REFERENCE_P_DMTL_ADC           SrvB_MulShRight16((sint32)AdcI_AdcGetReference(1, 1), 32768L, 16)
#define ADC_GET_REFERENCE_UTEST                SrvB_MulShRight16((sint32)AdcI_AdcGetReference(0, 4), 32768L, 16)


/**
 ***************************************************************************************************
 *  Forces an analog input line to low voltage.
 *
 *  This function activates a test mode for the input signal selected by the xSignal argument.
 *  Whenever this test mode is active, the analog input line corresponding to the selected
 *  signal is pulled low and the actual signal input is temporarily disconnected. The test mode
 *  is usually available only for a small subset of analog input lines and is only used for
 *  ADC monitoring, not for regular ADC functionality.
 *
 *  Depending on signal-specific configuration, this task is performed either by a
 *  macro technique (which simply replaces the call to Adc_ForceLow() with a call of the
 *  corresponding driver function of the device which converts this signal) or by calling the
 *  implementation as a function (Adc_ForceLowFunc()). The latter implementation is used only
 *  if calibratable routing is selected for the corresponding signal to provide maximum code
 *  efficiency for the standard case of non-calibratable routing.
 *
 *  \param      xSignal     Name of the analog input signal.
 *  \seealso    Adc_ForceLowFunc() Adc_Release()
 ***************************************************************************************************
 */

#define Adc_ForceLow(xSignal) ADC_FORCE_LOW_##xSignal

#define ADC_FORCE_LOW_APP1_I_A             AdcI_AdcForceLow(0, 6)
#define ADC_FORCE_LOW_APP2_I_A             AdcI_AdcForceLow(0, 7)
#define ADC_FORCE_LOW_BattURaw_I_A         AdcI_AdcForceLow(1, 7)
#define ADC_FORCE_LOW_BattU_I_A            AdcI_AdcForceLow(1, 7)
#define ADC_FORCE_LOW_I_A_A016             AdcI_AdcForceLow(2, 5)
#define ADC_FORCE_LOW_I_A_A017             AdcI_AdcForceLow(2, 4)
#define ADC_FORCE_LOW_I_A_A018             AdcI_AdcForceLow(0, 9)
#define ADC_FORCE_LOW_I_A_A019             AdcI_AdcForceLow(2, 10)
#define ADC_FORCE_LOW_I_A_A037             AdcI_AdcForceLow(0, 13)
#define ADC_FORCE_LOW_I_A_A038             AdcI_AdcForceLow(0, 2)
#define ADC_FORCE_LOW_I_A_A040             AdcI_AdcForceLow(1, 6)
#define ADC_FORCE_LOW_I_A_A041             AdcI_AdcForceLow(1, 2)
#define ADC_FORCE_LOW_I_A_A042             AdcI_AdcForceLow(0, 3)
#define ADC_FORCE_LOW_I_A_A055             AdcI_AdcForceLow(2, 11)
#define ADC_FORCE_LOW_I_A_A059             AdcI_AdcForceLow(0, 10)
#define ADC_FORCE_LOW_I_A_A062             AdcI_AdcForceLow(1, 4)
#define ADC_FORCE_LOW_I_A_A082             AdcI_AdcForceLow(1, 3)
#define ADC_FORCE_LOW_I_A_A084             AdcI_AdcForceLow(0, 15)
#define ADC_FORCE_LOW_I_A_A097             AdcI_AdcForceLow(0, 5)
#define ADC_FORCE_LOW_I_A_A102             AdcI_AdcForceLow(0, 11)
#define ADC_FORCE_LOW_I_A_A103             AdcI_AdcForceLow(0, 12)
#define ADC_FORCE_LOW_I_A_A105             AdcI_AdcForceLow(0, 8)
#define ADC_FORCE_LOW_I_A_K011             AdcI_AdcForceLow(0, 1)
#define ADC_FORCE_LOW_I_A_K013             AdcI_AdcForceLow(2, 7)
#define ADC_FORCE_LOW_I_A_K030             AdcI_AdcForceLow(2, 8)
#define ADC_FORCE_LOW_I_A_K034             AdcI_AdcForceLow(1, 0)
#define ADC_FORCE_LOW_I_A_K035             AdcI_AdcForceLow(0, 0)
#define ADC_FORCE_LOW_I_A_K041             AdcI_AdcForceLow(2, 0)
#define ADC_FORCE_LOW_I_A_K042             AdcI_AdcForceLow(2, 2)
#define ADC_FORCE_LOW_I_A_K045             AdcI_AdcForceLow(1, 5)
#define ADC_FORCE_LOW_I_A_K051             AdcI_AdcForceLow(2, 9)
#define ADC_FORCE_LOW_I_A_K058             AdcI_AdcForceLow(2, 3)
#define ADC_FORCE_LOW_I_A_K075             AdcI_AdcForceLow(2, 1)
#define ADC_FORCE_LOW_I_A_STRTH            AdcI_AdcForceLow(2, 6)
#define ADC_FORCE_LOW_P_DMTL_ADC           AdcI_AdcForceLow(1, 1)
#define ADC_FORCE_LOW_UTEST                AdcI_AdcForceLow(0, 4)


/**
 ***************************************************************************************************
 *  Releases an analog input line (counterpart to Adc_ForceLow()).
 *
 *  This function deactivates any test mode activated by a call to Adc_ForceLow() for the input
 *  signal selected by the xSignal argument. Depending on signal-specific configuration, this
 *  task is performed either by a macro technique (which simply replaces the call to Adc_Release()
 *  with a call of the corresponding driver function of the device which converts this signal) or
 *  by calling the implementation as a function (Adc_ReleaseFunc()). The latter implementation
 *  is used only if calibratable routing is selected for the corresponding signal to provide
 *  maximum code efficiency for the standard case of non-calibratable routing.
 *
 *  \param      xSignal     Name of the analog input signal.
 *  \seealso    Adc_ReleaseFunc() Adc_ForceLow()
 ***************************************************************************************************
 */

#define Adc_Release(xSignal) ADC_RELEASE_##xSignal

#define ADC_RELEASE_APP1_I_A             AdcI_AdcRelease(0, 6)
#define ADC_RELEASE_APP2_I_A             AdcI_AdcRelease(0, 7)
#define ADC_RELEASE_BattURaw_I_A         AdcI_AdcRelease(1, 7)
#define ADC_RELEASE_BattU_I_A            AdcI_AdcRelease(1, 7)
#define ADC_RELEASE_I_A_A016             AdcI_AdcRelease(2, 5)
#define ADC_RELEASE_I_A_A017             AdcI_AdcRelease(2, 4)
#define ADC_RELEASE_I_A_A018             AdcI_AdcRelease(0, 9)
#define ADC_RELEASE_I_A_A019             AdcI_AdcRelease(2, 10)
#define ADC_RELEASE_I_A_A037             AdcI_AdcRelease(0, 13)
#define ADC_RELEASE_I_A_A038             AdcI_AdcRelease(0, 2)
#define ADC_RELEASE_I_A_A040             AdcI_AdcRelease(1, 6)
#define ADC_RELEASE_I_A_A041             AdcI_AdcRelease(1, 2)
#define ADC_RELEASE_I_A_A042             AdcI_AdcRelease(0, 3)
#define ADC_RELEASE_I_A_A055             AdcI_AdcRelease(2, 11)
#define ADC_RELEASE_I_A_A059             AdcI_AdcRelease(0, 10)
#define ADC_RELEASE_I_A_A062             AdcI_AdcRelease(1, 4)
#define ADC_RELEASE_I_A_A082             AdcI_AdcRelease(1, 3)
#define ADC_RELEASE_I_A_A084             AdcI_AdcRelease(0, 15)
#define ADC_RELEASE_I_A_A097             AdcI_AdcRelease(0, 5)
#define ADC_RELEASE_I_A_A102             AdcI_AdcRelease(0, 11)
#define ADC_RELEASE_I_A_A103             AdcI_AdcRelease(0, 12)
#define ADC_RELEASE_I_A_A105             AdcI_AdcRelease(0, 8)
#define ADC_RELEASE_I_A_K011             AdcI_AdcRelease(0, 1)
#define ADC_RELEASE_I_A_K013             AdcI_AdcRelease(2, 7)
#define ADC_RELEASE_I_A_K030             AdcI_AdcRelease(2, 8)
#define ADC_RELEASE_I_A_K034             AdcI_AdcRelease(1, 0)
#define ADC_RELEASE_I_A_K035             AdcI_AdcRelease(0, 0)
#define ADC_RELEASE_I_A_K041             AdcI_AdcRelease(2, 0)
#define ADC_RELEASE_I_A_K042             AdcI_AdcRelease(2, 2)
#define ADC_RELEASE_I_A_K045             AdcI_AdcRelease(1, 5)
#define ADC_RELEASE_I_A_K051             AdcI_AdcRelease(2, 9)
#define ADC_RELEASE_I_A_K058             AdcI_AdcRelease(2, 3)
#define ADC_RELEASE_I_A_K075             AdcI_AdcRelease(2, 1)
#define ADC_RELEASE_I_A_STRTH            AdcI_AdcRelease(2, 6)
#define ADC_RELEASE_P_DMTL_ADC           AdcI_AdcRelease(1, 1)
#define ADC_RELEASE_UTEST                AdcI_AdcRelease(0, 4)


/**
 ***************************************************************************************************
 *  Returns the FId for requesting general ADC fault information from DSM.
 *
 *  If any ADC driver detects a general (i.e. not signal-specific) fault of the ADC encapsulated
 *  by this driver, it reports this defect to DSM. There might be more than one source of
 *  possible faults for a particular ADC device perhaps resulting in more than one DFCs
 *  (diagnostic fault checks) per device. As a user of ADC functionality, however, one is usually
 *  only interested in the more general information "may I expect that the ADC that converts the
 *  signal of interest still works (no matter what the particular reason for any possible
 *  malfunction actually is) and therefore returns plausible data?". This information can be
 *  retrieved from DSM by invoking the DSM_GetDscPermission() service which expects a function
 *  identifier (FId) as an argument. The FId required for answering the ADC user's question
 *  mentioned above is returned by the Adc_GetFId() function.
 *
 *  Depending on signal-specific configuration, this task is performed either by a
 *  macro technique (which simply replaces the call to Adc_GetFId() with a call of the
 *  corresponding driver function of the device which converts this signal) or by calling the
 *  implementation as a function (Adc_GetFIdFunc()). The latter implementation is used only
 *  if calibratable routing is selected for the corresponding signal to provide maximum code
 *  efficiency for the standard case of non-calibratable routing.
 *
 *  \param      xSignal     Name of the analog input signal possibly affected by general ADC faults.
 *  \return     The returned FId gathers the results of all diagnostic fault checks carried out
 *              for the ADC which converts the selected signal.
 *  \seealso    Adc_GetFIdFunc() DSM_GetDscPermission()
 ***************************************************************************************************
 */

#define Adc_GetFId(xSignal) ADC_GET_FID_##xSignal

#define ADC_GET_FID_APP1_I_A             AdcI_AdcGetFId(0, 6)
#define ADC_GET_FID_APP2_I_A             AdcI_AdcGetFId(0, 7)
#define ADC_GET_FID_BattURaw_I_A         AdcI_AdcGetFId(1, 7)
#define ADC_GET_FID_BattU_I_A            AdcI_AdcGetFId(1, 7)
#define ADC_GET_FID_I_A_A016             AdcI_AdcGetFId(2, 5)
#define ADC_GET_FID_I_A_A017             AdcI_AdcGetFId(2, 4)
#define ADC_GET_FID_I_A_A018             AdcI_AdcGetFId(0, 9)
#define ADC_GET_FID_I_A_A019             AdcI_AdcGetFId(2, 10)
#define ADC_GET_FID_I_A_A037             AdcI_AdcGetFId(0, 13)
#define ADC_GET_FID_I_A_A038             AdcI_AdcGetFId(0, 2)
#define ADC_GET_FID_I_A_A040             AdcI_AdcGetFId(1, 6)
#define ADC_GET_FID_I_A_A041             AdcI_AdcGetFId(1, 2)
#define ADC_GET_FID_I_A_A042             AdcI_AdcGetFId(0, 3)
#define ADC_GET_FID_I_A_A055             AdcI_AdcGetFId(2, 11)
#define ADC_GET_FID_I_A_A059             AdcI_AdcGetFId(0, 10)
#define ADC_GET_FID_I_A_A062             AdcI_AdcGetFId(1, 4)
#define ADC_GET_FID_I_A_A082             AdcI_AdcGetFId(1, 3)
#define ADC_GET_FID_I_A_A084             AdcI_AdcGetFId(0, 15)
#define ADC_GET_FID_I_A_A097             AdcI_AdcGetFId(0, 5)
#define ADC_GET_FID_I_A_A102             AdcI_AdcGetFId(0, 11)
#define ADC_GET_FID_I_A_A103             AdcI_AdcGetFId(0, 12)
#define ADC_GET_FID_I_A_A105             AdcI_AdcGetFId(0, 8)
#define ADC_GET_FID_I_A_K011             AdcI_AdcGetFId(0, 1)
#define ADC_GET_FID_I_A_K013             AdcI_AdcGetFId(2, 7)
#define ADC_GET_FID_I_A_K030             AdcI_AdcGetFId(2, 8)
#define ADC_GET_FID_I_A_K034             AdcI_AdcGetFId(1, 0)
#define ADC_GET_FID_I_A_K035             AdcI_AdcGetFId(0, 0)
#define ADC_GET_FID_I_A_K041             AdcI_AdcGetFId(2, 0)
#define ADC_GET_FID_I_A_K042             AdcI_AdcGetFId(2, 2)
#define ADC_GET_FID_I_A_K045             AdcI_AdcGetFId(1, 5)
#define ADC_GET_FID_I_A_K051             AdcI_AdcGetFId(2, 9)
#define ADC_GET_FID_I_A_K058             AdcI_AdcGetFId(2, 3)
#define ADC_GET_FID_I_A_K075             AdcI_AdcGetFId(2, 1)
#define ADC_GET_FID_I_A_STRTH            AdcI_AdcGetFId(2, 6)
#define ADC_GET_FID_P_DMTL_ADC           AdcI_AdcGetFId(1, 1)
#define ADC_GET_FID_UTEST                AdcI_AdcGetFId(0, 4)

/**
 ***************************************************************************************************
 *  Selects an analog input.
 *
 *  This function switchs to channel which is currently selected by the xSignal argument.
 *  This task is performed by a macro technique (which simply replaces the call to Adc_Select()
 *  with a call of the corresponding driver function of the device which converts this signal).
 *  This function is only used for the signal which is triggered by external event.
 *
 *  \param      xSignal     Name of the analog input signal.
 *  \return     None.
 *  \seealso
 ***************************************************************************************************
 */

#define Adc_Select(xSignal) ADC_SELECT_##xSignal




/**
 ***************************************************************************************************
 *  Return ratiometric factor
 *
 *  This inline function returns the ratiometric factor.
 *
 *  \param      none.
 *  \return     sint32
 *  \seealso
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * signalspecific macro definitions activated by tag <ADC_DEFINE_REQUEST>
 ***************************************************************************************************
 */


/* _LIBRARYABILITY_H                                                                              */
#endif

/* _ADC_AUTO_CONF_H */
#endif
