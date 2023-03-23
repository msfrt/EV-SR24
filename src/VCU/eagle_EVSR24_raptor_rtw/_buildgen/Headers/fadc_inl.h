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
 * $Filename__:fadc_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:fadc_inl$ 
 * $Variant___:1.4.0$ 
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
 * 1.4.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: fadc_inl.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _FADC_INL_H
#define _FADC_INL_H

/**
 ***********************************************************************************************************************
 *  Converts a FADC result register value of a positive input into a device independent ratio.
 *
 *  This function has to be public because it is called as part of the macro implementation of Fadc_AdcGetRatio().
 *  It converts the FADC result register value of a single ended converion (gain = 2) of the positive input pin
 *  into a device independent ratio.
 *
 *  \param      regResult_u32   Result register contents.
 *  \return     The return value represents the normalised signal voltage.
 *  \seealso    Fadc_AdcGetRatio() Adc_GetRatio()
 ***********************************************************************************************************************
 */

static __inline__ sint16 Fadc_Reg2RatioPos(uint32 regRslt_u32) __attribute__ ((always_inline));
static __inline__ sint16 Fadc_Reg2RatioPos(uint32 regRslt_u32)
{
    /* masking of the FADC result is not necessary as the only content of the result register is the 10 bit value */

    /* normalise the register contents
       -> the following operation ensures that the full range of the normalised value from 0x0000 to 0x7FFF is covered
       -> without the right hand part of the OR operator the range would only be 0x0000 to 0x7FE0 */
    regRslt_u32 = (regRslt_u32 << 5) | (regRslt_u32 >> 5);

    /* return the normalised value as sint16 */
    return ((sint16) regRslt_u32);
}


/**
 ***********************************************************************************************************************
 *  Converts a FADC result register value of a negative input into a device independent ratio.
 *
 *  This function has to be public because it is called as part of the macro implementation of Fadc_AdcGetRatio().
 *  It converts the FADC result register value of a single ended converion (gain = 2) of the negative input pin
 *  into a device independent ratio.
 *
 *  \param      regResult_u32   Result register contents.
 *  \return     The return value represents the normalised signal voltage.
 *  \seealso    Fadc_AdcGetRatio() Adc_GetRatio()
 ***********************************************************************************************************************
 */

static __inline__ sint16 Fadc_Reg2RatioNeg(uint32 regRslt_u32) __attribute__ ((always_inline));
static __inline__ sint16 Fadc_Reg2RatioNeg(uint32 regRslt_u32)
{
    /* masking of the FADC result is not necessary as the only content of the result register is the 10 bit value */

    /* invert the result register value
       -> this is necessary as a single ended converion of the negative input pin with gain = 2 has the following
          representation (see TriCore user manual):
          FAINxN =   0V -> FADC conversion result = 1023 (= maximum FADC result value)
          FAINxN = 3.3V -> FADC conversion result =    0 (= minimum FADC result value) */
    regRslt_u32 = FADC_RCH_MAX_VAL - regRslt_u32;

    /* normalise the register contents
       -> the following operation ensures that the full range of the normalised value from 0x0000 to 0x7FFF is covered
       -> without the right hand part of the OR operator the range would only be 0x0000 to 0x7FE0 */
    regRslt_u32 = (regRslt_u32 << 5) | (regRslt_u32 >> 5);

    /* return the normalised value as sint16 */
    return ((sint16) regRslt_u32);
}

/* _FADC_INL_H  */
#endif
