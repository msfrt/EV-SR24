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
 * $Filename__:srvb_adapter_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVB.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MNA9COB$ 
 * $Date______:26.07.2016$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_adapter_inl$ 
 * $Variant___:1.24.1$ 
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
 * 1.24.1; 0     26.07.2016 MNA9COB
 *   Fix of neg_xx_xx functionalities
 * 
 * 1.21.1; 0     11.11.2014 NSL2COB
 *   -Bugfixed  for abs limit
 * 
 * 1.19.1; 0     25.07.2013 PIR5COB
 *   -
 * 
 * 1.17.0; 0     10.07.2012 SWC1COB
 *   enhancement of putbit functionality
 * 
 * 1.16.0; 1     19.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.16.0; 0     07.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.15.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvB
 * 
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.13.1; 0     24.02.2010 VKA2FE
 *   Bugfix delivery, derived from B_SRVB.13.0.1
 * 
 * 1.13.0; 0     09.02.2010 VKA2FE
 *   Derived from B_SRVB.13.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_ADAPTER_INL_H
#define _SRVB_ADAPTER_INL_H


/*********************************************************************************************************************/
/* Old GS specific service who has 16 bit interfaces are mapped with an inline service. */

MEMLAY_USE_FORCE_INLINE(uint16 div_U32U16_U16(uint16 high_dividend, uint16 lo_dividend, uint16 divisor))
{
    return (SrvB_Div_U32U32_U16_inline((high_dividend * 65536UL) + lo_dividend, divisor));
}


MEMLAY_USE_FORCE_INLINE(sint16 div_S32U16_S16(sint16 high_dividend, uint16 lo_dividend, uint16 divisor))
{
    return (SrvB_Div_S32U32_S16_inline(((sint32)high_dividend * 65536L) + lo_dividend, divisor));
}


MEMLAY_USE_FORCE_INLINE(sint16 div_S32S16_S16(sint16 high_dividend, uint16 lo_dividend, sint16 divisor))
{
    return (SrvB_Div_S32S32_S16_inline(((sint32)high_dividend * 65536L) + lo_dividend, divisor));
}


MEMLAY_USE_FORCE_INLINE(sint32 div_S32U16_S32(sint16 high_dividend, uint16 lo_dividend, uint16 divisor))
{
    return (SrvB_Div_S32U32_S32_inline(((sint32)high_dividend * 65536L) + lo_dividend, divisor));
}


MEMLAY_USE_FORCE_INLINE(sint32 add_S32S32_S32(sint16 hi_sum1, uint16 lo_sum1, sint16 hi_sum2, uint16 lo_sum2))
{
    return (SrvB_Add_S32S32_S32_inline((((sint32)hi_sum1 * 65536L) + lo_sum1), (((sint32)hi_sum2 * 65536L) + lo_sum2)));
}


MEMLAY_USE_FORCE_INLINE(sint32 add_S32U32_S32(sint16 hi_sum1, uint16 lo_sum1, uint16 hi_sum2, uint16 lo_sum2))
{
    return (SrvB_Add_U32S32_S32_inline(((hi_sum2 * 65536UL) + lo_sum2), (((sint32)hi_sum1 * 65536L) + lo_sum1)));
}


MEMLAY_USE_FORCE_INLINE(uint32 add_U32U32_U32(uint16 hi_sum1, uint16 lo_sum1, uint16 hi_sum2, uint16 lo_sum2))
{
    return (SrvB_Add_U32U32_U32_inline(((hi_sum1 * 65536UL) + lo_sum1), ((hi_sum2 * 65536UL) + lo_sum2)));
}


MEMLAY_USE_FORCE_INLINE(sint32 sub_S32S32_S32(sint16 hi_sum1, uint16 lo_sum1, sint16 hi_sum2, uint16 lo_sum2))
{
    return (SrvB_Sub_S32S32_S32_inline((((sint32)hi_sum1 * 65536L) + lo_sum1),(((sint32)hi_sum2 * 65536L) + lo_sum2)));
}


MEMLAY_USE_FORCE_INLINE(uint32 sub_U32U32_U32(uint16 hi_sum1, uint16 lo_sum1, uint16 hi_sum2, uint16 lo_sum2))
{
    return (SrvB_Sub_U32U32_U32_inline(((hi_sum1 * 65536UL) + lo_sum1), ((hi_sum2 * 65536UL) + lo_sum2)));
}


MEMLAY_USE_FORCE_INLINE(uint16 muldiv_U16U16U16_U16(uint16 f1, uint16 f2, uint16 d))
{
    return (SrvB_MulDiv_U32U32U32_U16_inline(f1,f2,d));
}


MEMLAY_USE_FORCE_INLINE(uint32 MulR163U16(uint16 x, uint16 y, uint16 z))
{
    return (SrvB_MulShRight_U32U32_U32_inline(x * y, z, 16));
}


MEMLAY_USE_FORCE_INLINE(uint32 mul_R16_3U16_U32(uint16 x, uint16 y, uint16 z))
{
    return (SrvB_MulShRight_U32U32_U32_inline(x * y, z, 16));
}


MEMLAY_USE_FORCE_INLINE(uint16 MulR14U16(uint16 x, uint16 y))
{
    return (SrvB_TypeLimiter_U32_U16_inline(((uint32)x * y) >> 14));
}


MEMLAY_USE_FORCE_INLINE(uint16 MulR15U16(uint16 x, uint16 y))
{
    return (SrvB_TypeLimiter_U32_U16_inline(((uint32)x * y) >> 15));
}


MEMLAY_USE_FORCE_INLINE(uint16 MulR16U16(uint16 x, uint16 y))
{
    return (SrvB_TypeLimiter_U32_U16_inline(((uint32)x * y) >> 16));
}


MEMLAY_USE_FORCE_INLINE(uint16 mul_R14_U16U16_U16(uint16 x, uint16 y))
{
    return (SrvB_TypeLimiter_U32_U16_inline(((uint32)x * y) >> 14));
}


MEMLAY_USE_FORCE_INLINE(uint16 mul_R15_U16U16_U16(uint16 x, uint16 y))
{
    return (SrvB_TypeLimiter_U32_U16_inline(((uint32)x * y) >> 15));
}


MEMLAY_USE_FORCE_INLINE(uint16 mul_R16_U16U16_U16(uint16 x, uint16 y))
{
    return (SrvB_TypeLimiter_U32_U16_inline(((uint32)x * y) >> 16));
}

/*********************************************************************************************************************/


MEMLAY_USE_FORCE_INLINE(uint32 SrvB_PutBit_ascet_inline(uint32 base_u32,uint32 pos_u32,uint32 val_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==1)
    uint32 ret_u32;
	asm ("	ne     %[val], %[val], 0                  \n\
			insert %[ret], %[base], %[val], %[pos], 1 \n\
		": [ret] "=d" (ret_u32) , [val] "+d" (val_u32): [base] "d" (base_u32), [pos] "d" (pos_u32)
	  );
    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return ret_u32;
#else
    SrvB_PutBitU32_inline(&base_u32, pos_u32, val_u32);
    return base_u32;
/* SRVB_IMPL_ASM_ENABLE */
#endif

}


MEMLAY_USE_FORCE_INLINE(uint32 SrvB_CopyBit_ascet(uint32 base1_u32,uint32 pos1_u32,uint32 base2_u32,uint32 pos2_u32))
{
    return SrvB_PutBit_ascet(base1_u32,pos1_u32,SrvB_GetBit(base2_u32,pos2_u32));
}


/* Negation */
MEMLAY_USE_FORCE_INLINE(sint8 neg_U8_S8_inline(uint8 x))
{
    sint32 tmp_s32 = -(long)x;
    if (tmp_s32 < -128l)
    {
        tmp_s32 = -128l;
    }
    return ((sint8)tmp_s32);
}

MEMLAY_USE_FORCE_INLINE(uint8 neg_S8_U8_inline(sint8 x))
{
    sint8 tmp_s8 = 0;
    if (x < (sint8)0)
    {
        tmp_s8 = -x;
    }
    return ((uint8)tmp_s8);
}

MEMLAY_USE_FORCE_INLINE(sint16 neg_U16_S16_inline(uint16 x))
{
    sint32 tmp_s32 = -(long)x;
    if (tmp_s32 < -32768l)
    {
        tmp_s32 = -32768l;
    }
    return ((sint16)tmp_s32);
}

MEMLAY_USE_FORCE_INLINE(uint16 neg_S16_U16_inline(sint16 x))
{
    sint16 tmp_s16 = 0;
    if (x < 0)
    {
        tmp_s16 = -x;
    }
    return ((uint16)tmp_s16);
}


MEMLAY_USE_FORCE_INLINE(sint32 neg_U32_S32_inline(uint32 x))
{
    uint32 tmp_u32 = 2147483648ul;
    if (x < tmp_u32)
    {
        tmp_u32 = (uint32)-(sint32)x;
    }
    return ((sint32)tmp_u32);
}

MEMLAY_USE_FORCE_INLINE(uint32 neg_S32_U32_inline(sint32 x))
{
    sint32 tmp_s32 = 0;
    if (x < (sint32)0)
    {
        tmp_s32 = -x;
    }
    return ((uint32)tmp_s32);
}

MEMLAY_USE_FORCE_INLINE(sint8  neg_S8_S8_inline(sint8 x))       { return (SrvB_Neg_S32_S8_inline((sint32)x)); }
MEMLAY_USE_FORCE_INLINE(sint16 neg_S8_S16_inline(sint16 x))     { return -(sint16)x; }
MEMLAY_USE_FORCE_INLINE(sint16 neg_U8_S16_inline(uint16 x))     { return -(sint16)x; }
MEMLAY_USE_FORCE_INLINE(sint16 neg_S16_S16_inline(sint16 x))    { return (SrvB_Neg_S32_S16_inline((sint32)x)); }
MEMLAY_USE_FORCE_INLINE(sint32 neg_S16_S32_inline(sint16 x))    { return -(sint32)x; }
MEMLAY_USE_FORCE_INLINE(sint32 neg_U16_S32_inline(uint16 x))    { return -(sint32)x; }
MEMLAY_USE_FORCE_INLINE(sint32 neg_S32_S32_inline(sint32 x))    { return (SrvB_Neg_S32_S32_inline(x)); }

/**
 ***************************************************************************************************
 * brief description: absolute value of sint32 operand with limitation SrvB_AbsLimit.
 *
 * detailed description:
 *        Calculates the absolute value of a signed 32 bit operand with
 *        result limitation
 *
 * \param    x_s32
 * \param    max
 * \return   Absolute value of x_s32    limited to max
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_AbsLimit_inline(sint32 x_s32, sint32 max_s32))
{
    sint32 Result_s32;

#if (SRVB_IMPL_ASM_ENABLE==0)
    if (max_s32 <= 0L)
    {
        Result_s32 = 0L;
    }
    else
    {
        if ((x_s32 <= -max_s32) || (x_s32 >= max_s32))
        {
            Result_s32 = max_s32;
        }
        else
        {
            Result_s32 = ((x_s32 < 0L) ? -x_s32 : x_s32);
        }
    }

#else

    sint32 TempMax_s32;

    asm volatile(" abss  %[Result_s32], %[x_s32]                            \n\
                   max   %[TempMax_s32],%[max_s32], 0                       \n\
                   min   %[Result_s32], %[Result_s32], %[TempMax_s32]   \n\
                 ": [Result_s32] "=&d" (Result_s32), [TempMax_s32] "=&d" (TempMax_s32)
                  : [x_s32] "d"(x_s32), [max_s32] "d"(max_s32) );
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
/* SRVB_IMPL_ASM_ENABLE==0 */
#endif
    return(Result_s32);
}

/**
 ***************************************************************************************************
 * brief description: absolute value of sint32 operand with limitation Abs32Limit.
 *
 * detailed description:
 *        Calculates the absolute value of a signed 32 bit operand with
 *        result limitation
 *
 * \param    x_s32
 * \param    max
 * \return   Absolute value of x_s32    limited to max
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 Abs32Limit_inline(sint32 x_s32, sint32 max_s32))
{
    sint32 Result_s32;

#if (SRVB_IMPL_ASM_ENABLE==0)
    if (max_s32 <= 0L)
    {
        Result_s32 = 0L;
    }
    else
    {
        if ((x_s32 <= -max_s32) || (x_s32 >= max_s32))
        {
            Result_s32 = max_s32;
        }
        else
        {
            Result_s32 = ((x_s32 < 0L) ? -x_s32 : x_s32);
        }
    }

#else

    sint32 TempMax_s32;

    asm volatile(" abss  %[Result_s32], %[x_s32]                            \n\
                   max   %[TempMax_s32],%[max_s32], 0                       \n\
                   min   %[Result_s32], %[Result_s32], %[TempMax_s32]   \n\
                 ": [Result_s32] "=&d" (Result_s32), [TempMax_s32] "=&d" (TempMax_s32)
                  : [x_s32] "d"(x_s32), [max_s32] "d"(max_s32) );
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
/* SRVB_IMPL_ASM_ENABLE==0 */
#endif
    return(Result_s32);
}

/**
 *********************************************************************
 * sliding average calculation of n values.
 *
 * The function calculates the sliding average of n sint16 operands.
 * These values are provided by a structure and via function parameter.
 * .
 * Protection against overflow is done due to usage of sint32 values.
 *
 * \param    ptr
 * \param    n
 * \return    summ(X[i])/n
 *********************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_AvrgSldngS16_inline(avrgsldngS16_t *p_avrstr, sint32 inp))
{
    (p_avrstr->summ) = ((p_avrstr->summ) - (sint32)(*(p_avrstr->p_act))) + inp;

    *(p_avrstr->p_act) = (sint16)inp;                               /* Index actualisation */

    if( (p_avrstr->p_act) == (p_avrstr->p_end) )                    /* Test if the end is reached*/
    {
        (p_avrstr->p_act) = (p_avrstr->p_beg);
    }
    else
    {
        (p_avrstr->p_act)++;
    }

    return (sint16)( (p_avrstr->summ) / (p_avrstr->n) );
}

/**
 ***************************************************************************************************
 * sliding average calculation of n values.
 *
 * The function calculates the sliding average of n sint32 operands.
 * These values are provided by a structure and via function parameter.
 * .
 * Protection against overflow is done due to usage of sint64 values.
 *
 * \param    ptr
 * \param    n
 * \return    summ(X[i])/n
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_AvrgSldngS32_inline(avrgsldngS32_t *p_avrstr, sint32 inp))
{
    (p_avrstr->summ) = ((p_avrstr->summ) - (sint64)(*(p_avrstr->p_act))) + (sint64)inp;

    *(p_avrstr->p_act) = inp;

    if( (p_avrstr->p_act) == (p_avrstr->p_end) )
    {
        (p_avrstr->p_act) = (p_avrstr->p_beg);
    }
    else
    {
        (p_avrstr->p_act)++;
    }

    return (SrvB_Div_S64S32_S32_inline(p_avrstr->summ,p_avrstr->n));
}

/**
 ***************************************************************************************************
 * sint16 counter.
 *
 * increments a sint16 value by one with saturation on every
 * activation, stores back the incremented value and returns
 * that value
 *
 * \param    counter_ps16
 * \return    incremented counter
 ***************************************************************************************************
 */
/* MISRA RULE 81 VIOLATION: A change of the interface can't be done (*counter_ps16 as const) to be
                            compatible to previous version of interface */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Counter16_inline(sint16 *counter_ps16))
{
    if ( (*counter_ps16) < MAXSINT16)
    {
        ++(*counter_ps16);
    }
    return(*counter_ps16);

}

/**
 ***************************************************************************************************
 * sint32 counter.
 *
 * increments a sint32 value by one with saturation on every
 * activation, stores back the incremented value and returns
 * that value
 *
 * \param    counter_ps32
 * \return    incremented counter
 ***************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Counter32_inline(sint32 *counter_ps32))
{

    if ( (*counter_ps32) < MAXSINT32)
    {
        (*counter_ps32)++;
    }
    /* MISRA RULE 81 VIOLATION: the variable is modified */
    return(*counter_ps32);

}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight16
 *
 * \brief Multiplies 2 sint32 variables, shift the interim value and limits the result to a sint16
 *
 * \param     sint32 X_u32
 * \param     sint32 Y_s32
 * \param     sint32 N_s32
 * \retval    ((X_s32 * Y_s32) : 2^N_u8 ) saturated to sint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_MulShRight16_inline(sint32 X_s32, sint32 Y_s32, sint32 N_s32))
{
    sint64 tmp_s64;

    /* interim tmp_s64 */
    /* MISRA RULE 37 VIOLATION:: Arithmetic shift is done correctly by the compiler */
    tmp_s64  = (((sint64)X_s32) * ((sint64)Y_s32))  >> N_s32;

    /* limitation */
    tmp_s64 = ((tmp_s64 >= ((sint64) MAXSINT16)) ? ((sint64) MAXSINT16)
                                                 : ((tmp_s64 <= ((sint64) MINSINT16)) ? ((sint64) MINSINT16)
                                                 : tmp_s64));

    return ((sint16) tmp_s64);
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight32
 *
 * \brief Multiplies 2 sint32 variables and limits the result to an uint8 variable
 *
 * \param     sint32 X_S32
 * \param     sint32 Y_s32
 * \param     sint32 N_s32
 * \retval    ((X_s32 * Y_s32) : 2^N_u8 ) saturated to sint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_MulShRight32_inline(sint32 X_s32, sint32 Y_s32, sint32 N_s32))
{
    sint64 tmp_s64;

    /* interim tmp_s64 */
    /* MISRA RULE 37 VIOLATION:: Arithmetic shift is done correctly by the compiler */
    tmp_s64 = (((sint64) X_s32) * ((sint64) Y_s32)) >> N_s32;

    /* limitation */
    tmp_s64 = ((tmp_s64 >= ((sint64) MAXSINT32)) ? ((sint64) MAXSINT32)
                                                 : ((tmp_s64 <= ((sint64)MINSINT32)) ? ((sint64)MINSINT32)
                                                 : tmp_s64));

    return((sint32)tmp_s64);
}

/* Needed for SrvB_Median5S16 */

MEMLAY_USE_FORCE_INLINE(void _swap_s16_inline(sint16* a,sint16* b))
{
	sint16 temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/* Needed for SrvB_Median5U8 */


MEMLAY_USE_FORCE_INLINE(void _swap_u8_inline(uint8* a,uint8* b))
{
	uint8 temp;
	temp=(*a);
	(*a)=(*b);
	(*b)=temp;
}

/* _SRVB_ADAPTER_INL_H */
#endif

