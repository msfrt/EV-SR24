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
 * $Filename__:dio_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MTR1COB$
 * $Date______:22.06.2011$
 * $Class_____:SWHDR$
 * $Name______:dio_priv$
 * $Variant___:1.14.0$
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
 * 1.14.0; 0     22.06.2011 MTR1COB
 *   Macro DIO_NUM_ADCI_MODULES used in Dio_AdcGet() 
 *   changed form 2 to 3 for TC1793.
 * 
 * 1.9.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: dio_priv.h
 *      Version: \main\basis\b_CORE\5
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
#ifndef _DIO_PRIV_H
#define _DIO_PRIV_H


/**
 ***************************************************************************************************
 * \moduledescription
 * Private headerfile of DIO module.
 *
 * \scope          INTERN
 ***************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* Number of real ADC's to calculate pseudo ADC indexes */
#if (MACHINE_TYPE == TC_1766)
    #define DIO_NUM_ADCI_MODULES 1
#elif (MACHINE_TYPE == TC_1797 || MACHINE_TYPE == TC_1793)
    #define DIO_NUM_ADCI_MODULES 3
#else
    #define DIO_NUM_ADCI_MODULES 2
#endif


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
/* Defined structure contains two bit-coded fields of type 'bit32' for ADCx (x =0..2) channel
 * numbers. Every single bit of 32bit field is representing the converted logical state of ADCx
 * channel number. Bit '0' of bitfield 'Dio_stAdc_ab32[0]' represents ADC'0' channel '0', bit '2' of
 * bitfield 'Dio_stAdc_ab32[1]' represents ADC'1' channel '2', etc. Every time low level driver
 * 'Dio_AdcGet' is called, bitfields are update dependent on selected ADC and channel number.
 * Currently ADC0, ADC1 and ADC2 channels can be used as digital inputs.
 */
typedef struct
{
    bit32   Dio_stAdc_ab32[DIO_NUM_ADCI_MODULES];      // 32bit-coded field for ADCx channels
}Dio_ConvAdcValues_t;

typedef struct
{
    bit32   Dio_stCic751Adc_ab32[2];                   // 32bit-coded field for CIC751 ADC0 and ADC1 channels
}Dio_ConvCic751AdcValues_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__1_5ms__constant__x16__START
extern const sint16 Dio_xLeftSwitchPoint_cs16;              // Left switch point for DIO via ADC
extern const sint16 Dio_xRightSwitchPoint_cs16;             // Right switch point for DIO via ADC
__PRAGMA_USE__hwe__1_5ms__constant__x16__END

__PRAGMA_USE__hwe__1_5ms__RAM__s32__START
extern Dio_ConvAdcValues_t        Dio_xConvAdcValues_s;
#ifdef DIO_CIC751_ACTIVE
extern Dio_ConvCic751AdcValues_t  Dio_xConvCic751AdcValues_s;
#endif
__PRAGMA_USE__hwe__1_5ms__RAM__s32__END

__PRAGMA_USE__hwe__1_5ms__constant__x32__START
extern Dio_ConvAdcValues_t*       const Dio_ConvAdcValues_cps;          // Ptr to DIO/ADC struct
#ifdef DIO_CIC751_ACTIVE
extern Dio_ConvCic751AdcValues_t* const Dio_ConvCic751AdcValues_cps;    // Ptr to DIO/CIC751 struct
#endif
__PRAGMA_USE__hwe__1_5ms__constant__x32__END

#ifdef DIO_CY100_ACTIVE
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__START
extern bit8 Dio_xConvCy100AdcValues_ab8[CY100_NUM_ICS];
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__END
#endif


/* for external multiplexers connected to ADC */
#if (ADCI_NOF_MULTIPLEXERS > 0)
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__START
extern bit8 Dio_xConvAdcMuxValues_b8[ADCI_NOF_MULTIPLEXERS];
__PRAGMA_USE__hwe__1_5ms__RAM__arr8__END
#endif


/* _DIO_PRIV_H */
#endif
