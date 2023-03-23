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
 * $Filename__:srvf_convert_inl.h$
 *
 * $Author____:SYA2COB$
 *
 * $Function__:Addition of new API SrvF_Extract_FloatBitFields_R32$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SYA2COB$
 * $Date______:25.08.2014$
 * $Class_____:SWHDR$
 * $Name______:srvf_convert_inl$
 * $Variant___:1.22.0$
 * $Revision__:2$
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
 * 1.22.0; 2     25.08.2014 SYA2COB
 *   review comment update
 * 
 * 1.22.0; 1     22.08.2014 SYA2COB
 *   -
 * 
 * 1.22.0; 0     21.08.2014 SYA2COB
 *   Addition of new API SrvF_Extract_FloatBitFields_R32
 * 
 * $
 *
 *************************************************************************
</RBHead>*/

#ifndef SRVF_CONVERT_INL_H_
#define SRVF_CONVERT_INL_H_


 /**
  *******************************************************************************************************************
  * SrvF_FloatBitPatternExtract_U32_inline
  *
  * \brief Functionality extract the float bit fields and returns as uint32.
  *    This a private function of SrvF.
  *
  */
 MEMLAY_USE_FORCE_INLINE(uint32 SrvF_FloatBitPatternExtract_U32_inline(real32 X_r32))
{
   uint32 integer_u32;
   asm volatile ("" : "=d" (integer_u32) : "0" (X_r32));
   return integer_u32;
}
 /**
  *******************************************************************************************************************
  * SrvF_Extract_FloatBitFields_R32
  *
  * \brief Functionality split the float bit fields and update vis respective pointers
  *
  *
  * Restrictions:
  * The denormal values will not be considered as valid inputs to the  function,
  * and will not be validated/processed .
  * No additional check will be made for overflow/underflow protection.
  *
  * Dependencies: SrvF_FloatBitPatternExtract_U32_inline
  *  -
  *
  * Resources:
  *  -
  *
  * \param     real32   X_r32            Input float value.
  * \param     uint32*  sign_pu32        Pointer with which sign bit is updated.
  * \param     uint32*  exponent_pu32    Pointer with which exponent bits are updated.
  * \param     uint32*  mantissa_pu32    Pointer with which mantissa bits are updated.
  * \return    void
  ***********************************************************************************************************************
  */

MEMLAY_USE_FORCE_INLINE( void SrvF_Extract_FloatBitFields_R32_inline(real32 X_r32,uint32* sign_pu32,
                                                  uint32* exponent_pu32,uint32* mantissa_pu32))
{
     uint32 input1_u32;

     input1_u32 = SrvF_FloatBitPatternExtract_U32_inline(X_r32);
     *sign_pu32     = (input1_u32 >> 31U);
     *mantissa_pu32 = input1_u32 & 0x007FFFFFU;
     *exponent_pu32  = ((input1_u32 >> 23U) & 0x000000FFU);

}

#endif /* SRVF_CONVERT_INL_H_ */
