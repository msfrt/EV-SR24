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
 * $Filename__:adci_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:30.03.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:adci_inl$ 
 * $Variant___:1.13.0$ 
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
 * 1.13.0; 1     30.03.2010 LENZSI
 *   random function moved from adci to cbadci
 * 
 * 1.13.0; 0     24.03.2010 LENZSI
 *   add new machine type to header files
 * 
 * 1.12.0; 0     24.11.2009 AWL2SI
 *   B_ADC.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _ADCI_INL_H
#define _ADCI_INL_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the inline function of the driver for the internal ADC
 *                 of the TriCore.
 *
 * \scope          API
 ***************************************************************************************************
 */



/**
 ***************************************************************************************************
 *  Converts a (device-dependent) result register value into a (device-independent) ratio.
 *
 *  This function has to be public because it is called as part of the macro implementation of
 *  AdcI_AdcGetRatio().
 *
 *  \param      regResult_u32   Result register contents.
 *  \param      xResolution_u8  Resolution of the result.
 *  \return     The return value represents the normalized signal voltage, i.e. the ADC input
 *              voltage divided by the corresponding ADC reference voltage.
 *  \seealso    AdcI_AdcGetRatio() Adc_GetRatio()
 ***************************************************************************************************
 */

static __inline__ sint16 AdcI_Reg2Ratio(uint32 regResult_u32, uint8 xResolution_u8) __attribute__ ((always_inline));
static __inline__ sint16 AdcI_Reg2Ratio(uint32 regResult_u32, uint8 xResolution_u8)
{
    // Strip away everything but the actual result
    regResult_u32 &= 0x00000FFFul;

    // Shift the result three bits to the left resulting in (almost) the desired
    // output range of 0x0000..0x7FFx (x depends on the channel's resolution)
    regResult_u32 <<= 3;

    // Fill the (15 - xResolution_u8) rightmost bits which are now 0 with the leftmost
    // part of the result by ORing it with the result right-shifted by (xResolution_u8)
    // bits
    regResult_u32 |= (regResult_u32 >> xResolution_u8);

    // Now we always have an output range of 0..0x7FFF regardless of the resolution
    // -> cast it to sint16 and return it
    return ((sint16) regResult_u32);
}

/* _ADCI_INL_H  */
#endif
