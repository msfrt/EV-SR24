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
 * $Filename__:srvf_limit_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVF.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NSL2COB$ 
 * $Date______:11.11.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_limit_inl$ 
 * $Variant___:1.22.1$ 
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
 * 1.22.1; 0     11.11.2014 NSL2COB
 *   -Bugfixed
 * 
 * 1.18.0; 0     25.04.2013 PIR5COB
 *   The following changes has been made in FC : SrvF:
 *   1. New mixed integer and float data type interpolation functionalities are 
 *   added.
 *   2. New float memory copy functionality is added.
 *   3. New float equality comparison function is added.
 *   
 *   Additionally, the variable DX in the function srvf_exp is renamed as Dx_r32
 *    to remove a build error due to multiple definitions.
 * 
 * 1.17.0; 1     27.12.2012 PIR5COB
 *   1. Removal of all possible MISRA warnings.
 *   
 *   2. Provision of inline options for new float functionalities.
 *   
 *   3. Removal of SATH specific switches
 * 
 * 1.17.0; 0     21.12.2012 PIR5COB
 *   1. Removal of all possible MISRA warnings.
 *   
 *   2. Provision of inline options for new float functionalities.
 *   
 *   3. Removal of SATH specific switches
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_LIMIT_INL_H
#define _SRVF_LIMIT_INL_H


/*
 ***********************************************************************************************************************
 *
 * List of Functions:
 *
 * SrvF_RangeLimiter_R32
 * SrvF_IsGreater_R32R32_B
 * SrvF_IsLower_R32R32_B
 * SrvF_IsNAN_B
 * SrvF_ValidationLimiter_R32
 * SrvF_RealToInteger_R32_U32
 * SrvF_RealToInteger_R32_S32
 * SrvF_RealToInteger_R32_U16
 * SrvF_RealToInteger_R32_S16
 * SrvF_RealToInteger_R32_U8
 * SrvF_RealToInteger_R32_S8
 * SrvF_IsFinite_B
 * SrvF_IsPlusInfinity_B
 * SrvF_IsMinusInfinity_B
 * SrvF_IntegertoReal_U8_R32_inline
 * SrvF_IntegertoReal_S8_R32_inline
 * SrvF_IntegertoReal_U16_R32_inline
 * SrvF_IntegertoReal_S16_R32_inline
 * SrvF_IntegertoReal_U32_R32_inline
 * SrvF_IntegertoReal_S32_R32_inline
 * SrvF_MemCopyR32
 * SrvF_IsEqual_R32_R32_B
 
 ***********************************************************************************************************************
 */


MEMLAY_USE_FORCE_INLINE(real32 SrvF_RangeLimiter_R32_inline(real32 X_r32, real32 Min_r32, real32 Max_r32))
{
    return ((X_r32 <= Min_r32) ? (Min_r32) : ((X_r32 >= Max_r32) ? (Max_r32) : (X_r32)));
}

/**
 ***************************************************************************************************
 * real32real32 comparision returns a bool value
 * compares two real32 inputs and return a bool value TRUE if first vaue is greater then the second
 * 
 *
 *\param   X_r32   First input value 
 *\param   Y_r32   Second input value
 *\Returns a bool value as a result of comparision
 ***************************************************************************************************
 */
 
MEMLAY_USE_FORCE_INLINE(bool SrvF_IsGreater_R32R32_B_inline(real32 X_r32,real32 Y_r32))
{
    uint32 input1_u32;
    uint32 input2_u32;    
    bool res_u32 = FALSE;

    input1_u32 = *((uint32 *)((void*)&X_r32));
    input2_u32 = *((uint32 *)((void*)&Y_r32));
	
	/* X_r32 is positive zero and Y_r32 is negative zero  */
    if ((input1_u32 == 0x00000000UL) && (input2_u32 == 0x80000000UL))
	{
		res_u32 = FALSE;
	}	
	
    /* X_r32 is positive and Y_r32 is negative */
    else if ((input1_u32 < 0x80000000UL) && (input2_u32 >= 0x80000000UL))
    {
       res_u32 = TRUE; 
    }
	
    /* X_r32 is negative and Y_r32 is positive */
    else if ((input1_u32 >= 0x80000000UL) && (input2_u32 < 0x80000000UL))
    {
        res_u32 = FALSE; 
    }
    /* Both are positive or negative */
	else
    {
        if (input1_u32 >= 0x80000000UL) 
        {  
            input1_u32 = input1_u32 & 0x7FFFFFFFUL;
            input2_u32 = input2_u32 & 0x7FFFFFFFUL; 
            if (input1_u32 < input2_u32) 
            {   
                res_u32 = TRUE;
            } 
            else
            {
                res_u32 = FALSE;
            }            
        }
        else
        {
            if (input1_u32 > input2_u32) 
            {   
                res_u32 = TRUE;
            }
            else
            {
                res_u32 = FALSE;
            }        
        }    
    }
    return (res_u32);
}

/**
 ***************************************************************************************************
 * real32real32 comparision returns a bool value
 * compares two real32 inputs and return a bool value TRUE if first vaue is lesser then the second
 * 
 *
 *\param   X_r32   First input value 
 *\param   Y_r32   Second input value
 *\Returns a bool value as a result of comparision
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvF_IsLower_R32R32_B_inline(real32 X_r32,real32 Y_r32))
{
    uint32 input1_u32; 
    uint32 input2_u32;    
    bool res_u32 = FALSE;

    input1_u32 = *((uint32 *)((void*)&X_r32));
    input2_u32 = *((uint32 *)((void*)&Y_r32));
	
	/* X_r32 is negative zero and Y_r32 is positive zero  */
    if ((input1_u32 == 0x80000000UL) && (input2_u32 == 0x00000000UL))
	{
		res_u32 = FALSE;
	}	
	
    /* X_r32 is positive and Y_r32 is negative */
    else if ((input1_u32 < 0x80000000UL) && (input2_u32 >= 0x80000000UL))
    {
       res_u32 = FALSE; 
    }	
    /* X_r32 is negative and Y_r32 is positive */
    else if ((input1_u32 >= 0x80000000UL) && (input2_u32 < 0x80000000UL))
    {
        res_u32 = TRUE; 
    }	
	/* Both are positive or negative */
    else 
    {
        if (input1_u32 >= 0x80000000UL) 
        {  
            input1_u32 = input1_u32 & 0x7FFFFFFFUL;
            input2_u32 = input2_u32 & 0x7FFFFFFFUL; 
            if (input1_u32 > input2_u32) 
            {   
                res_u32 = TRUE;
            } 
            else
            {
                res_u32 = FALSE;
            }            
        }
		
        else
        {
            if (input1_u32 < input2_u32) 
            {   
                res_u32 = TRUE;
            }
            else
            {
                res_u32 = FALSE;
            }        
        }    
    }
	
    return (res_u32);
}

/**
 ***************************************************************************************************
 * \brief   determines whether the given input value is a NaN.
 * \param   X_r32  Input value
 * Returns a bool value TRUE if the given input is a NaN patttern. 
 ***************************************************************************************************
 */
 
 MEMLAY_USE_FORCE_INLINE(bool SrvF_IsNAN_B_inline(real32 X_r32)) 
{
    uint32         bits_u32;
    bool           IsNAN;
    
    
    /* gets the bits from the real32 */
    bits_u32 = (*(uint32*)((void*)&X_r32));
	
	/* NAN pattern: E = 2^e_bits - 1 AND M <> 0 */
	bits_u32 &= 0x7FFFFFFFUL;
    
	if (bits_u32 > 0x7F800000UL)
	{
	    IsNAN = TRUE;
	}
    else
	{
	    IsNAN = FALSE;
	}
	return(IsNAN);
}

/**
 ***************************************************************************************************
 * Limits the input value to a particular range.
 *
 *
 *
 *
 *
 * \param           X_r32 Input value
 * \param           lower_limit_r32     Lower Saturation value
 * \param           upper_limit_r32     Upper Saturation value
 * \param           replace_value_r32   Substitute value in case of NaN inputs 
 ***************************************************************************************************
 */

 MEMLAY_USE_FORCE_INLINE(real32 SrvF_ValidationLimiter_R32_inline(real32 X_r32, real32 lower_limit_r32, real32 replace_value_r32, real32 upper_limit_r32))
{
  real32 res_r32;

  /* Check for NaN */
  if (SrvF_IsNAN_B_inline(X_r32))
  {
    return replace_value_r32;
  }
  else
  {
    /* Limiting to upper limit */
    res_r32 = ((SrvF_IsLower_R32R32_B_inline(X_r32,upper_limit_r32)) ? X_r32 : upper_limit_r32);
    
    /* Limiting to lower limit */
    return ((SrvF_IsGreater_R32R32_B_inline(res_r32,lower_limit_r32)) ? res_r32 : lower_limit_r32);
  }                            
}

/**
 ***************************************************************************************************
  * Conversion function between real32 and uint32.
 *
 * brief Converts a real32 variable to uint32 format.
 *
 *
 *
 *
 * \param           Var_r32 Input value
 * \return          Output value on uint32 format
 ***************************************************************************************************
 */
 MEMLAY_USE_FORCE_INLINE(uint32 SrvF_RealToInteger_R32_U32_inline(real32 Var_r32))
{
    uint32 res_u32;
    uint32 exp_u32;
    uint32 mant_u32;

    res_u32 = *((uint32 *)((void*)&Var_r32));

    
    /* Check for negative numbers , +0 and -0 . Values less than 1 but greater than 0 is rounded to 0 (.9999999)
       0x3F800000UL represents  1 .    */
    if ((res_u32 >= 0x80000000UL) || (res_u32 < 0x3F800000UL))
    {
        res_u32 = MINUINT32;
    }  
    else
    {
		 /* 4F800000 in float bit pattern indicates 4294967296 */
        if (res_u32 >= 0x4F800000UL)
        {
            res_u32 = MAXUINT32;
        }
        else
        {
            /* As sign bit is always 0 at this point , 23 bit shift in right gives the exponent */
            exp_u32 = (res_u32 >> 23UL);
			
            /* exp_u32 will be always >= 127 as float values are greater than 1 at this stage*/
            exp_u32 = exp_u32 - 127UL;
			
            /* Get 23 bit mantisasa part */
            mant_u32 = (res_u32 & 0x7FFFFFUL) ;
			
			/* Set the virtual 24th bit as 1 */
            mant_u32 = mant_u32 | 0x800000 ; 
			
			/* Extract the integer part by eliminating the extra mantissa bits */
            if (exp_u32 <= 23UL)
            {
                res_u32  = mant_u32 >> (23UL - exp_u32);
            }
			
			/* Append extra zero bits */
            else
            {                
                res_u32  = mant_u32 << (exp_u32 - 23UL);
            }

        }
    }
        

    return (res_u32);
}

/**
 ***************************************************************************************************
  * Conversion function between real32 and sint32.
 *
 * brief Converts a real32 variable to sint32 format.
 *
 *
 *
 *
 * \param           Var_r32 Input value
 * \return          Output value on sint32 format
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvF_RealToInteger_R32_S32_inline(real32 Var_r32))
{
    uint32 res_u32 = 0;
	sint32 res_s32 = 0;
    uint32 exp_u32;
    uint32 mant_u32;
    uint32 Is_Negative_u32;
    
    /* Gives IEEE754 float representation */
    res_u32 = *((uint32 *)((void*)&Var_r32));
    
    /* Get Sign bit */
    Is_Negative_u32 = (res_u32 >> 31UL);
    
    /* Get all other bits */
	res_u32 &= 0x7FFFFFFFUL;
    
    /* check for zero */
	if(res_u32 >= 0x3F800000UL)
    {	
        /* Overflow/Underflow check 
		   4F000000 in float bit pattern indicates 2147483648 */
        if (res_u32 >= 0x4F000000UL)
        {
            if(Is_Negative_u32 == 0UL)
            {
                res_s32 = MAXSINT32;
            }
            else
            {
                res_s32 = MINSINT32;
            }	
        }
        else 
        { 
		   
            /* 1 bit shift in left eliminates sign bit */
            exp_u32 = (res_u32 << 1UL) ;
            
            /* 23 bit shift in right gives the exponent */
            exp_u32 = (res_u32 >> 23UL) ;
            
            /* exp_u32 will be always >= 127 as float values are greater than 1 at this stage */
            exp_u32 = exp_u32 - 127UL;
            
            /* Get 23 bit mantisasa part **/
            mant_u32 = (res_u32 & 0x7FFFFFUL) ;
            
            /* Set the virtual 24th bit as 1 */
            mant_u32 = mant_u32 | 0x800000UL;
			
            /* Extract the integer part by eliminating the extra mantissa bits */
            if (exp_u32 <= 23UL)
            {
                res_s32  = (sint32)((uint32)mant_u32 >> (23UL - exp_u32));
            }
			/* Append extra zero bits */
            else
            {                
                res_s32  = (sint32)((uint32)mant_u32 << (exp_u32 - 23UL));
            }
            
            /* Negative Results */
			if(Is_Negative_u32 == 1UL)
			{
				res_s32 = -res_s32;
			}	
        }  
    }    
    return (res_s32);
}

/**
 ***************************************************************************************************
  * Conversion function between real32 and uint16.
 *
 * brief Converts a real32 variable to uint16 format.
 *
 *
 *
 *
 * \param           Var_r32 Input value
 * \return          Output value on uint16 format
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvF_RealToInteger_R32_U16_inline(real32 Var_r32))
{
	uint32 res_u32;
    
    res_u32 = SrvF_RealToInteger_R32_U32_inline(Var_r32);
    
    /* Limitation */
    if(res_u32 > (uint32)MAXUINT16)
    {
        res_u32 = (uint32)MAXUINT16;
    }  
    return ((uint16)res_u32);
}
/**
 ***************************************************************************************************
  * Conversion function between real32 and sint16.
 *
 * brief Converts a real32 variable to sint16 format.
 *
 *
 *
 *
 * \param           Var_r32 Input value
 * \return          Output value on sint16 format
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvF_RealToInteger_R32_S16_inline(real32 Var_r32))
{
	sint32 res_s32;
    
    res_s32 = SrvF_RealToInteger_R32_S32_inline(Var_r32);
    
    /* Limitation */
    if(res_s32 > (sint32)MAXSINT16)
    {
        res_s32 = (sint32)MAXSINT16;
    }
    if(res_s32 < (sint32)MINSINT16)
    {
        res_s32 = (sint32)MINSINT16;
    }    
    return ((sint16)res_s32);
}

/**
 ***************************************************************************************************
  * Conversion function betwenn real32 and uint8.
 *
 * brief Converts a real32 variable to uint8 format.
 *
 *
 *
 *
 * \param           Var_r32 Input value
 * \return          Output value on uint8 format
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvF_RealToInteger_R32_U8_inline(real32 Var_r32))
{
	uint32 res_u32;
    
    res_u32 = SrvF_RealToInteger_R32_U32_inline(Var_r32);
    
    /* Limitation */
    if(res_u32 > (uint32)MAXUINT8)
    {
        res_u32 = (uint32)MAXUINT8;
    }  
    return ((uint8)res_u32);
}

/**
 ***************************************************************************************************
  * Conversion function betwenn real32 and sint8.
 *
 * brief Converts a real32 variable to sint8 format.
 *
 *
 *
 *
 * \param           Var_r32 Input value
 * \return          Output value on sint8 format
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvF_RealToInteger_R32_S8_inline(real32 Var_r32))
{
	sint32 res_s32;
    
    res_s32 = SrvF_RealToInteger_R32_S32_inline(Var_r32);
    
    /* Limitation */
    if(res_s32 > (sint32)MAXSINT8)
    {
        res_s32 = (sint32)MAXSINT8;
    }
    if(res_s32 < (sint32)MINSINT8)
    {
        res_s32 = (sint32)MINSINT8;
    }    
    return ((sint8)res_s32);
}
/**
 ***************************************************************************************************
 * real32 value is given as input
 * Returns TRUE if the given input if a finite value.
 * 
 *
 *\param   X_r32  floating poing input value 
 *\Returns a bool value as a result of comparision
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvF_IsFinite_B_inline(real32 X_r32))
{
    uint32   bits_u32;
    bool     IsFinite_b;
    	
    /* Get the bit pattern of the input value */
    bits_u32 = (*(uint32*)((void*)&X_r32));
	
	/* Discard sign bit */
	bits_u32 &= 0x7FFFFFFFUL;
	
	/* Check for Finite value 
       The range for Finite value as per ieee754 standard is -MAXREAL32 to +MAXREAL32
	   As sign bit is ignored ,finite value is from 0 to MAXREAL32
 	   0x7F7FFFFFUL represents MAXREAL32 */ 	
	if(bits_u32 <= 0x7F7FFFFFUL)
	{
		IsFinite_b = TRUE;
	}
    else
	{
	    IsFinite_b = FALSE;
	}
	return(IsFinite_b);
}	

/**
 ***************************************************************************************************
 * real32 value is given as input
 * Returns TRUE if the given input has an positive infinity pattern.
 * 
 *
 *\param   X_r32  floating poing input value 
 *\Returns a bool value as a result of comparision
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvF_IsPlusInfinity_B_inline(real32 X_r32))
{
    uint32   bits_u32;
    bool     IsPlusInf_b;
    	
    /* Get the bit pattern of the input real32 value */
    bits_u32 = (*(uint32*)((void*)&X_r32));

	if(bits_u32 == 0x7F800000UL)
	{
	    IsPlusInf_b = TRUE;
	}
    else
	{
	    IsPlusInf_b = FALSE;
	}
	return(IsPlusInf_b);
}	

/**
 ***************************************************************************************************
 * real32 value is given as input
 * Returns TRUE if the given input has an Negative infinity pattern.
 * 
 *
 *\param   X_r32  floating poing input value 
 *\Returns a bool value as a result of comparision
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvF_IsMinusInfinity_B_inline(real32 X_r32))
{
    uint32   bits_u32;
    bool     IsMinusInf_b;
    
    
    /* gets the bits from the float */
    bits_u32 = (*(uint32*)((void*)&X_r32));
    
	if(bits_u32 == 0xFF800000UL)
	{
	    IsMinusInf_b = TRUE;
	}
    else
	{
	    IsMinusInf_b = FALSE;
	}
	return(IsMinusInf_b);
}	

/**
 ***************************************************************************************************
  * Conversion function between uint32 and real32.
 *
 * brief Converts a uint32 variable to real32 format.
 *
 *
 *
 *
 * \param           Var_u32 Input value
 * \return          Output value on real32 format
 ***************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IntegertoReal_U32_R32_inline(uint32 Var_u32))
{
    uint32 bits_u32 = 0UL;
    uint32 tmp_u32;
    uint32 mant_u32;
    sint32 exp_s32;
    uint8 count_u8 = 0;
    
    /* If Var_u32 is 0x0, then the float value will always be zero */
    if(Var_u32 != 0UL)
    {
        tmp_u32 = Var_u32;
        
        /* Count the (number of bits - 1) in Var_u32 without the leading zeros */
        while(tmp_u32 > 1UL)
        {
            count_u8++;
            tmp_u32 = tmp_u32 >> 1;
        }
        
        /* Calculate the exponent in IEEE754 format and add the bias value(127) */
        exp_s32 = count_u8 + 127L;
       
        /* Since 1 is implicit for normal value, it is removed from the mantissa part, Converting into normalized form*/
        tmp_u32 = Var_u32 ^ (1UL << count_u8);
            
         /* Mantissa of IEEE754 floationg point representation */
         if(count_u8 >= 23L)
         {
            mant_u32 = tmp_u32 >> (count_u8 - 23L);
         }
         else
         {
             mant_u32 = tmp_u32 << (23 - count_u8);
         }

         /* Bit representation of a IEEE754 floating point number */
         bits_u32 = ((uint32)exp_s32 << 23) | mant_u32;
        
         /* Rounding the value to the nearest representable floating point value. 
            Example: 16777217 cant be represented in float, it will be rounded to 16777218.
			Here, the addition of the 24th bit of mantissa part will be done */
         if(count_u8 > 23)
         {
			bits_u32 = bits_u32 + ((tmp_u32 >> (count_u8 - 24L)) & 1UL);
         }
    }
    
    return(*(real32*)((void*)&bits_u32));
}

/**
 ***************************************************************************************************
  * Conversion function between sint32 and real32.
 *
 * brief Converts a sint32 variable to real32 format.
 *
 *
 *
 *
 * \param           Var_s32 Input value
 * \return          Output value on real32 format
 ***************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IntegertoReal_S32_R32_inline(sint32 Var_s32))
{
    real32 res_r32;
    uint32 bits_u32;
    uint32 tmp_u32;
    uint32 sign_u32 = 0UL;
    
    /* Remove the sign of Var_s32 */
    if(Var_s32 < 0)
    {
        sign_u32 = 1UL;
        tmp_u32 = (uint32)(-Var_s32);
    }
    else
    {
        tmp_u32 = (uint32)(Var_s32);
    }
    
    res_r32 = SrvF_IntegertoReal_U32_R32_inline(tmp_u32);
    
    /* Place the sign bit at the 31st bit position  */
    bits_u32 = (*(uint32*)((void*)&res_r32)) | (sign_u32 << 31);
    
    return(*(real32*)((void*)&bits_u32));
}

/**
 ***************************************************************************************************
  * Conversion function between uint16 and real32.
 *
 * brief Converts a uint16 variable to real32 format.
 *
 *
 *
 *
 * \param           Var_u16 Input value
 * \return          Output value on real32 format
 ***************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IntegertoReal_U16_R32_inline(uint16 Var_u16))
{

    return(SrvF_IntegertoReal_U32_R32_inline((uint32)Var_u16));
}

/**
 ***************************************************************************************************
  * Conversion function between sint8 and real32.
 *
 * brief Converts a sint8 variable to real32 format.
 *
 *
 *
 *
 * \param           Var_s8 Input value
 * \return          Output value on real32 format
 ***************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IntegertoReal_S8_R32_inline(sint8 Var_s8))
{

    return(SrvF_IntegertoReal_S32_R32_inline((sint32)Var_s8));
}

/**
 ***************************************************************************************************
  * Conversion function between sint16 and real32.
 *
 * brief Converts a sint16 variable to real32 format.
 *
 *
 *
 *
 * \param           Var_s16 Input value
 * \return          Output value on real32 format
 ***************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IntegertoReal_S16_R32_inline(sint16 Var_s16))
{

    return(SrvF_IntegertoReal_S32_R32_inline((sint32)Var_s16));
}

/**
 ***************************************************************************************************
  * Conversion function between uint16 and real32.
 *
 * brief Converts a uint8 variable to real32 format.
 *
 *
 *
 *
 * \param           Var_u8 Input value
 * \return          Output value on real32 format
 ***************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(real32 SrvF_IntegertoReal_U8_R32_inline(uint8 Var_u8))
{

    return(SrvF_IntegertoReal_U32_R32_inline((uint32)Var_u8));
}

/**
 ***********************************************************************************************************************
 * SrvF_MemCopyR32
 *
 * \brief Copy memory containing float data.
 *
 * Memory copy service for float data. 
 * Number of float numbers to be copied should be mentioned
 * Source and destination can overlap. 
 * The float number occupies 4bytes of data. The user has to give number of float numbers to be copied.
 *
 * \param          real32*  			Dest_pr32  	destination address
 * \param          const    real32*    	Src_pcr32  	source address
 * \param          uint32   			N_u32     	number of FLOAT numbers to be copied
 * \return         void
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(void SrvF_MemCopyR32_inline(real32* Dest_pr32, const real32* Src_pcr32, uint32 N_u32))
{
    /* The function should perform copying only if there is atleast one float number to copy */
    if (N_u32 >= 1ul)
    {
        /* The source and the destination address is compared to implement the logic of overlapping address */ 
        /* If the source data is placed on a higher memory location to destination data */
        /* In this case copying takes place from lower memory address to higher( source position and above). */
        /* So that even if overlapping happens the source data is not lost */
        if(Dest_pr32 <= Src_pcr32)
        {
            /* Till the count is less than zero */
            while(N_u32 > 0ul)
            {
                /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment  */
                /* The date from the source location is copied to the destination location */
                *(Dest_pr32++) = *(Src_pcr32++);
                N_u32--;
            }
        }
        /* If the destination data is on a higher memory location to source data */
        /* In this case copying takes place from higher memory address to lower( highest source adress position and below). */
        /* So that even if overlapping happens the source data is not lost */
        else
        {
            /* The data is copied from the higher memory location to lower memory location */
            Dest_pr32 = &(Dest_pr32[N_u32 - 1]);
            Src_pcr32  = &(Src_pcr32[N_u32 - 1]);

            while(N_u32 > 0ul)
            {
                /* MISRA RULE 12.13 VIOLATION: -- operator is allowed for pointer decrement. */
                *(Dest_pr32--) = *(Src_pcr32--);
                N_u32--;
            }
        }
    }
}


/**
 ***********************************************************************************************************************
 * SrvF_IsEqual_R32_R32_B
 *
 * \brief The service compares if the two input numbers are equal with in the given precision
 *
 *
 * \param           X_r32     First number to be compared
 * \param           Y_r32     Second number to be compared
 * \param           Prs_r32   The input precision or deviation
 * \return          bool      TRUE - If the numbers are equal. FALSE - If numbers are not equal.
 * \This functiaonality works only when the input numbers are float. 
 * \If the number cannot be represented as float then the compiler would approximate.
    to the nearest float which can cause the functionality to provide wrong result.
 * \ The deviation input must be a postive float value.
 * \If the difference between input float number equal to the precision then the numbers are considered not equal.
 * \As per IEEE standard +0 and -0 and considered as +0 as same. 
 * \Positive numbers and negative numbers are compared. 
 * \If the difference between a postive number and a negative number is less than the precision then the numbers are considered equal.
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(bool SrvF_IsEqual_R32_R32_B_inline(real32 X_r32, real32 Y_r32, real32 Prs_r32))
{
    /* Local variables are declared to convert float numbers to uint32 number                        */
    uint32 X_u32;
    uint32 Y_u32;   
    uint32 Prs_u32;
    real32 Diff_r32;
    uint32 Diff_u32;
    bool IsEqualStat_b;
    
    /* Obtaining the bit pattern of the floating point numbers and the precision                       */
    X_u32 = *((uint32 *)((void*)&X_r32));
    Y_u32 = *((uint32 *)((void*)&Y_r32));
    Prs_u32 = *((uint32 *)((void*)&Prs_r32));
	
    /* This is a special case 
       If the deviation is 0.0  and if the input float numbers are same then both numbers are equal    */
    if(X_u32 == Y_u32)
    {
        IsEqualStat_b = TRUE;
    }
	
    /* Comparing the bit pattern of the difference number and input precision                                
       If the difference (between the numbers)is less than precision then the numbers are equal        */
    else
    {
	    /* The difference between the input numbers are obtained                                       */
		Diff_r32 = (X_r32 - Y_r32);
	
        /* The bit pattern of the difference is obtained and the sign bit is cleared                   */
        Diff_u32 = (*((uint32 *)((void*)&Diff_r32))) & 0x7FFFFFFFul;
	
	    /* If the input precision or deviation is more then the input float numbers are equal          */
	    if (Diff_u32 < Prs_u32) 
        {   
            IsEqualStat_b = TRUE;
        }
	
        /* If the difference (between the numbers)is greater than precision
     	    then the numbers are not equal                                                             */    
        else
        {
            IsEqualStat_b = FALSE;
        }
	}
	return(IsEqualStat_b);
}

/* _SRVF_LIMIT_INL_H */
#endif

