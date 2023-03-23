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
 * $Filename__:srvb_stat_inl.h$ 
 * 
 * $Author____:KDD2FE$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:18.08.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_stat_inl$ 
 * $Variant___:1.20.0$ 
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
 * 1.20.0; 0     18.08.2014 PIR5COB
 *   Lebels for ASM services got updated
 * 
 * 1.18.0; 0     21.12.2012 PIR5COB
 *   1. All possible MISRA comments are removed
 *   
 *   2. Removal of SAT specific switches
 * 
 * 1.16.0; 1     19.12.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.16.0; 0     18.11.2011 SYA2COB
 *   This version is made with the concept of compiler independency.
 * 
 * 1.15.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvB
 * 
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVB.12.0.0
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * 1.10.0; 0     17.12.2008 KDD2FE
 *   Migration from CC with label B_SRVB.10.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_STAT_INL_H
#define _SRVB_STAT_INL_H

/*
 ***********************************************************************************************************************
 *
 *  List of functions:
 *
 *  SrvB_Average_S32S32_S32
 *                             SrvB_AverageArray_S16        SrvB_AverageArray_S32
 *                             SrvB_AverageSliding_S16      SrvB_AverageSliding_S32
 *
 *  SrvB_Max_U8                SrvB_Max_U16                 SrvB_Max_U32
 *  SrvB_Max_S8                SrvB_Max_S16                 SrvB_Max_S32
 *  SrvB_Min_U8                SrvB_Min_U16                 SrvB_Min_U32
 *  SrvB_Min_S8                SrvB_Min_S16                 SrvB_Min_S32
 *
 *  SrvB_Abs_S32_S8            SrvB_Abs_S32_S16             SrvB_Abs_S32_S32
 *  SrvB_Abs_S32_U8            SrvB_Abs_S32_U16             SrvB_Abs_S32_U32
 *
 * SrvB_Neg_S32_S16            SrvB_Neg_S32_S32             SrvB_Neg_S32_S8
 * SrvB_Neg_S32_U16            SrvB_Neg_S32_U32             SrvB_Neg_S32_U8
 * SrvB_Neg_U32_S16            SrvB_Neg_U32_S32             SrvB_Neg_U32_S8
 *
 ***********************************************************************************************************************
 */

 /*
 ***********************************************************************************************************************
 *
 *
 *
 * AVERAGE FUNCTIONS
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 *
 * SrvB_Average_S32S32_S32
 *
 * \brief The function calculates the average of two sint32 operands. Algorithm protects overflow.
 *
 * \param   sint32  X_s32     first operand
 * \param   sint32  Y_s32     second operand
 * \return  sint32
 * \retval  (X_s32 + Y_s32) / 2
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Average_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32))
{

#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;

    res_s32 = (sint32)(((sint64)X_s32 + (sint64)Y_s32) / 2l);
    return(res_s32);

#else

    sint32 res_s32;
    sint32 temp1_s32;
    sint32 temp2_s32;



    asm volatile( "addx %0, %3, %4         # extended summation of X_s32 and Y_s32      \n\
                   jne   %0, -1, L1F_%=    # calculation required                       \n\
                   movh  %0, 0x0000        # result is zero                             \n\
                   j      L2F_%=           # jump to the end                            \n\
             L1F_%=:                                                                    \n\
                   extr %1, %3, 31, 1                                                   \n\
                   extr %2, %4, 31, 1                                                   \n\
                   addc %1, %1, %2         # sign  calculation                          \n\
                   cadd %0, %1, %0, 1      # rounding behaviour, neg. result            \n\
                   dextr %0,%1,%0, 31      # double register, etract, shift by one      \n\
             L2F_%=:                                                                    \n\
                  ": "=&d" (res_s32), "=&d"(temp1_s32), "=&d"(temp2_s32) : "d"(X_s32), "d"(Y_s32) );


    /* MISRA RULE 30 VIOLATION: The variable is written in the asm statement */
    return(res_s32);

#endif

}


/**
 ***********************************************************************************************************************
 * SrvB_AverageArray_S16
 *
 * \brief Average calculation of N_u8 values provided by array. Protection against overflow is done by algorithm.
 *
 * \param    *sint16[]  Array_pcs16    pointer to the sint16-array, within the values X[i] to average
 * \param    uint8      N_u8           length of the array
 * \return   sint16
 * \retval   sum(X[i]) / N_u8
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_AverageArray_S16_inline(const sint16 *Array_pcs16, uint8 N_u8))
{
    sint32  res_s32;
    uint    i;

    res_s32 = Array_pcs16[0];

    if(N_u8 > 1)
    {
        for(i = 1U; i < ((uint)(N_u8)); i++)
        {
            Array_pcs16++;
            res_s32 += (*Array_pcs16);
        }
        res_s32 /= ((sint32)(N_u8));
    }

    return ((sint16)res_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_AverageArray_S32
 *
 * \brief Average calculation of N_u8 values provided by array. Protection against overflow is done by algorithm.
 *
 * \param    *sint32[]     Array_pcs32    pointer to the sint32, within the values X[i] to average
 * \param    uint8         N_u8           length of the array
 * \return   sint32
 * \retval   sum(X[i]) / N_u8
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_AverageArray_S32_inline(const sint32 *Array_pcs32, uint8 N_u8))
{
    sint64 tmp_s64;
    uint   i;

    tmp_s64 = Array_pcs32[0];

    if(N_u8 > 1)
    {
        for(i = 1U; i <((uint)( N_u8)) ; i++)
        {
            Array_pcs32++;
            tmp_s64 += (*(Array_pcs32));
        }
        tmp_s64 = (sint64)SrvB_Div_S64S32_S32(tmp_s64, (sint32)N_u8);
    }

    return ((sint32)tmp_s64);
}

/*
 *********************************************************************************************************************
 *
 *  SrvB_AverageSliding_S16
 *
 * \brief The function calculates the new average of listed values, after a swap of one defined value.
 *
 * \param  SrvB_AvrgsldngS16_t*     Struct_pst      pointer to an Array of sint16 operands X[i]
 * \param   sint16                  Inp_s16         value of a defined operand to swap
 * \return  sint16
 * \retval  sum(X[i])/n                             average of the listed sint16 operands past swap
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_AverageSliding_S16_inline(SrvB_AvrgsldngS16_t *const Struct_cpst, sint16 Inp_s16))
{

     sint32 tmp_s32;

     /* calculate the new sum */
     Struct_cpst->sum_s32     = ((Struct_cpst->sum_s32 - ((sint32) (*(Struct_cpst->act_ps16)))) + ((sint32) (Inp_s16)));

     /* swap the actual value (act) against the new one (Inp) */
     *Struct_cpst->act_ps16   = Inp_s16;

     /* compare references */
     if( Struct_cpst->act_ps16 == Struct_cpst->end_ps16 )
     {
         /* close the  memory loop */
         Struct_cpst->act_ps16 = Struct_cpst->beg_ps16;
     }
     else
     {
         /* actualize actual reference */
         (Struct_cpst->act_ps16)++;
     }

     tmp_s32 = (Struct_cpst->sum_s32 / ((sint32)(Struct_cpst->N_u8)));

     return ((sint16)(tmp_s32));

}


/*
 ***********************************************************************************************************************
 *
 * SrvB_AverageSliding_S32
 *
 * \brief The function calculates the new average of listed values, after a swap of one defined value. *     .
 *
 *
 * \param   SrvB_AvrgsldngS32_t*        Struct_cpst      pointer to an Array of sint16 operands
 * \param   sint32                      Inp_s32          value of a defined operand to swap
 * \return
 * \retval  sum(X[i])/n,                                 average of the listed sint32 operands past swap
 ***********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_AverageSliding_S32_inline(SrvB_AvrgsldngS32_t *const Struct_cpst, sint32 Inp_s32))
{

     /* calculate the new sum */
     Struct_cpst->sum_s64      = ((Struct_cpst->sum_s64 - ((sint64) (*(Struct_cpst->act_ps32)))) + ((sint64) (Inp_s32)));

     /* swap the actual value (act) against the new one (Inp) */
     *Struct_cpst->act_ps32    = Inp_s32;

     /* compare references */
     if( Struct_cpst->act_ps32 == Struct_cpst->end_ps32 )
     {
         /* close the  memory loop */
         Struct_cpst->act_ps32 = Struct_cpst->beg_ps32;
     }
     else
     {
         /* actualize actual reference */
         (Struct_cpst->act_ps32)++;
     }

     return (SrvB_Div_S64S32_S32(Struct_cpst->sum_s64, (sint32)Struct_cpst->N_u8));

}


 /*
 ***********************************************************************************************************************
 *
 *
 *
 * MAX FUNCTIONS
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
*
 * SrvB_Max_U8
 *
 * \brief Returns the maximum of two uint8 variables
 *
 * \param   uint8   X_u8    First value for compare
 * \param   uint8   Y_u8    Second value for comparebase
 * \return  uint8
 * \retval  Maximum value(X_u8, Y_u8)
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Max_U8_inline(uint8 X_u8, uint8 Y_u8))
{
    return ((X_u8 > Y_u8) ? X_u8 : Y_u8);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Max_S8
 *
 * \brief Returns the maximum of two sint8 variables
 *
 * \param   sint8   X_s8    First value for compare
 * \param   sint8   y_s8    Second value for comparebase
 * \return  sint8
 * \retval  Maximum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Max_S8_inline(sint8 X_s8, sint8 Y_s8))
{
    return (( X_s8 > Y_s8) ?  X_s8 : Y_s8);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Max_U16
 *
 * \brief Returns the maximum of two uint16 variables
 *
 * \param   x_u16    First value for compare
 * \param   y_u16    Second value for comparebase
 * \return  uint16
 * \retval  Maximum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Max_U16_inline(uint16 X_u16, uint16 Y_u16))
{
    return ((X_u16 > Y_u16) ? X_u16 : Y_u16);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Max_S16
 *
 * \brief Returns the maximum of two sint16 variables
 *
 * \param   X_s16    First value for compare
 * \param   Y_s16    Second value for comparebase
 * \return  sint16
 * \retval  Maximum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Max_S16_inline(sint16 X_s16, sint16 Y_s16))
{
    return ((X_s16 > Y_s16) ? X_s16 : Y_s16);
}


/**
 **********************************************************************************************************************
 * SrvB_Max_U32
 *
 * \brief Returns the maximum of two uint32 variables
 *
 * \param   X_u32    First value for compare
 * \param   Y_u32    Second value for comparebase
 * \return  uint32
 * \retval  Maximum value
 *
 **********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Max_U32_inline(uint32 X_u32, uint32 Y_u32))
{
    return ((X_u32 > Y_u32) ? X_u32 : Y_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_Max_S32
 *
 * Returns the maximum of two sint32 variables
 *
 * \param   sint32  X_s32    First value for compare
 * \param   sint32  Y_s32    Second value for comparebase
 * \return  sint32
 * \retval  Maximum value
 *
 **********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Max_S32_inline(sint32 X_s32, sint32 Y_s32))
{
    return ((X_s32 > Y_s32) ? X_s32 : Y_s32);
}

/*
 **********************************************************************************************************************
 *
 *
 * MIN FUNCTIONS
 *
 *
 **********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 *
 * SrvB_Min_U8
 *
 * \brief Returns the minimum of two uint8 variables
 *
 * \param   uint8   X_u8     First value for compare
 * \param   uint8   Y_u8     Second value for comparebase
 * \return  uint8
 * \retval  Minimum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Min_U8_inline(uint8 X_u8, uint8 Y_u8))
{
    return ((X_u8 < Y_u8) ? X_u8 : Y_u8);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Min_S8
 *
 * \brief Returns the minimum of two sint8 variables
 *
 * \param   sint8   X_s8     First value for compare
 * \param   sint8   Y_s8     Second value for comparebase
 * \return  sint8
 * \retval  Minimum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Min_S8_inline(sint8 X_s8, sint8 Y_s8))
{
    return ((X_s8 < Y_s8) ? X_s8 : Y_s8);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Min_U16
 *
 * \brief Returns the minimum of two uint16 variables
 *
 * \param   uint16    X_u16     First value for compare
 * \param   uint16    Y_u16     Second value for comparebase
 * \return  uint16
 * \retval  Minimum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Min_U16_inline(uint16 X_u16, uint16 Y_u16))
{
    return ((X_u16 < Y_u16) ? X_u16 : Y_u16);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Min_S16
 *
 * \brief Returns the minimum of two sint16 variables
 *
 * \param   sint16  X_s16     First value for compare
 * \param   sint16  Y_s16     Second value for comparebase
 * \return  sint16
 * \retval  Minimum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Min_S16_inline(sint16 X_s16, sint16 Y_s16))
{
    return ((X_s16 < Y_s16) ? X_s16 : Y_s16);
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Min_U32
 *
 * \brief Returns the minimum of two uint32 variables
 *
 * \param   uint32  X_u32     First value for compare
 * \param   uint32  Y_u32     Second value for comparebase
 * \return  uint32
 * \retval  Minimum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Min_U32_inline(uint32 X_u32, uint32 Y_u32))
{
    return ((X_u32 < Y_u32) ? X_u32 : Y_u32);
}


/**
 **********************************************************************************************************************
 * SrvB_Min_S32
 *
 * \brief Returns the minimum of two sint32 variables
 *
 * \param   sint32  X_s32     First value for compare
 * \param   sint32  Y_s32     Second value for comparebase
 * \return  sint32
 * \retval  Minimum value
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Min_S32_inline(sint32 X_s32, sint32 Y_s32))
{
    return ((X_s32 < Y_s32) ? X_s32 : Y_s32);
}

/*
 **********************************************************************************************************************
 *
 *
 * ABS FUNCTIONS
 *
 *
 **********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_U8
 *
 * \brief Absolute value of a sint32 operand with uint8 saturation.
 *
 * \param   sint32  X_s32
 * \return  uint8
 * \retval  Absolute value of X_s32 saturated to uint8
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Abs_S32_U8_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 result_s32;

    if (X_s32 >= 0L)
    {
        result_s32 = ((X_s32 >= ((sint32)MAXUINT8)) ? ((sint32)MAXUINT8) : X_s32);
    }
    else
    {
        result_s32 = ((X_s32 <= ((sint32)(-MAXUINT8))) ? ((sint32)MAXUINT8) : -X_s32);
    }

    return (uint8)result_s32;

#else

    sint32 result_s32;

    /* the __SATBU instruction is a intrinsic define of the compiler
       It is available from hitec version 3.4.2.
       It is the equivalent for a sat.bu instruction but within control of the compiler.
    */
    #ifdef __SATBU
    asm volatile("absdifs %0,%1, 0  \n\
                 ":"=d" (result_s32 ): "d" (X_s32) );
                /*         0           1   */
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATBU(result_s32);

    /* SRVB_IMPL_ASM_ENABLE==0 */
    #else
    asm volatile("absdifs %0,%1, 0  \n\
                  sat.bu %0, %0     \n\
                 ":"=d" (result_s32 ): "d" (X_s32) );
                /*         0           1   */

     /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (uint8)(result_s32);

    #endif

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_U16
 *
 * \brief Absolute value of a sint32 operand with uint16 saturation.
 *
 * \param   sint32  X_s32
 * \return  uint16
 * \return  Absolute value of X_s32 saturated to uint16
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Abs_S32_U16_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint16 result_u16;

    /* This C code is generated (Abs(Sx) -> Uy) */
    /* compute absolute value */
    if(X_s32 < 0)
    {
        /* Input underflow */
        if (X_s32 <= (sint32)(-MAXUINT16))
        {
            result_u16 = MAXUINT16;
        }
        else
        {
            result_u16 = (uint16)(-X_s32);
        }
    }
    else
    {
        /* Input overflow */
        if (X_s32 > (sint32)MAXUINT16)
        {
            result_u16 = MAXUINT16;
        }
        else
        {
            result_u16 = (uint16)(X_s32);
        }
    }

   return result_u16;

#else

    uint16 result_u16;

    /* This Asm code is generated (Abs(Sx) -> Uy) */
    asm volatile("    \n\
             abs %[result_u16], %[X_s32]  # compute absolute value     \n\
             sat.hu %[result_u16]         # limit the result to an u16 \n\
        "
        : [result_u16]"=d"(result_u16)
        : [X_s32]"d"(X_s32)
        );

   /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return (result_u16);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_U32
 *
 * \brief Absolute value of sint32 operand with uint32 saturation.
 *
 * \param   sint32  X_s32
 * \return  Absolute value of X_s32 saturated to uint32
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Abs_S32_U32_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 result_u32;

    if(X_s32 < 0)
    {
        result_u32 = ((X_s32 != MINSINT32) ? (uint32)(-X_s32) : 0x80000000ul) ;
    }
    else
    {
        result_u32 = ((uint32)(X_s32));
    }

    return result_u32;

#else

    uint32 result_u32;

    /* This Asm code is generated (Abs(Sx) -> Uy) */
    asm volatile("    \n\
             abs %[result_u32], %[X_s32] # compute absolute value \n\
        "
        : [result_u32]"=d"(result_u32)
        : [X_s32]"d"(X_s32)
        );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (result_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_S8
 *
 * \brief Absolute value of sint32 operand with sint8 saturation.
 *
 * \param   sint32   X_s32
 * \return  sint8
 * \retval  Absolute value of X_s32 saturated to sint8
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Abs_S32_S8_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint8 result_s8;

    /* This C code is generated (Abs(Sx) -> Sy) */
    /* compute absolute value */
    if(X_s32 < 0)
    {
        /* Input underflow */
        if (X_s32 <= (sint32)MINSINT8)
        {
            result_s8 = MAXSINT8;
        }
        else
        {
            result_s8 = (sint8)(-X_s32);
        }
    }
    else
    {
        /* Input overflow */
        if (X_s32 > (sint32)MAXSINT8)
        {
            result_s8 = MAXSINT8;
        }
        else
        {
            result_s8 = (sint8)(X_s32);
        }
    }

   return (result_s8);

#else

    sint8 result_s8;

    /* This Asm code is generated (Abs(Sx) -> Sy) */
    asm volatile("    \n\
             abss %[result_s8], %[X_s32]  # compute saturated absolute value \n\
             sat.b %[result_s8]           # limit the result to a s8         \n\
        "
        : [result_s8]"=d"(result_s8)
        : [X_s32]"d"(X_s32)
        );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return result_s8;

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_S16
 *
 * \brief Absolute value of sint32 operand with sint16 saturation.
 *
 * \param   sint32  X_s32
 * \return  sint16
 * \retval  Absolute value of X_s32 saturated to sint16
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Abs_S32_S16_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint16 result_s16;

    if (X_s32 >= 0L)
    {
        result_s16 = ((sint16) (X_s32  > ((sint32)MAXSINT16)) ? MAXSINT16 : ((sint16)(X_s32)));
    }
    else
    {
        result_s16 = ((sint16) (X_s32 <= ((sint32)MINSINT16)) ? MAXSINT16 : ((sint16)(-X_s32)));
    }

    return result_s16;

#else

    sint32 result_s32;

    /* the __SATH instruction is a intrinsic define of the compiler
       It is available from hitec version 3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
    */
    
        asm volatile("absdifs %0,%1, 0  \n\
                      sat.h   %0,%0     \n\
                     ": "=d" (result_s32) : "d" (X_s32) );
                     /*         0           1   */
        /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
        return((sint16)result_s32);


/* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 **********************************************************************************************************************
 *
 * SrvB_Abs_S32_S32
 *
 * \brief Absolute value of sint32 operand with sint32 saturation.
 *
 * \param  sint32   X_s32
 * \return sint32
 * \retval Absolute value of X_s32 saturated to sint32
 *
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Abs_S32_S32_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 result_s32;

    if (X_s32 >= 0L)
    {
        result_s32 = X_s32;
    }
    else
    {
        /* Saturation for the min value */
        result_s32 = ((X_s32 == MINSINT32) ? MAXSINT32 : -X_s32);
    }

    return (result_s32);

#else

    sint32 result_s32;

    asm volatile("absdifs %0,%1, 0 "
                :"=d"(result_s32) : "d"(X_s32) );
                /*          0       1   */

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (result_s32);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
 **********************************************************************************************************************
 *
 *
 *
 * NEGATION FUNCTIONS
 *
 *
 *
 **********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 * SrvB_Neg_S32_S32
 *
 * \brief Invert the sign of a sint32 number.
 *
 * The output is satured to prevent under/overflows.
 * Foumlua: b = -1 * a
 * Example1:  a = 5 -> b = -5
 * Example2:  a = MINSINT32 -> b = MAXSINT32
 *
 * Warning: Users of assembler implementation must not input MINSINT32!
 *
 * \param   sint32  X_s32    Input value
 * \return  sint32  Input value with inverted sign, satured
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Neg_S32_S32_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    X_s32 = ((sint32) ~((uint32) X_s32));
    return ( (X_s32 != MAXSINT32) ? (X_s32 + 1) : (X_s32) );

#else

    sint32 res_s32;
    asm volatile("  rsubs   %[res_s32], %[X_s32], 0        # reverse substract with saturatation \n\
                 " : [res_s32] "=d" (res_s32) : [X_s32]"d"(X_s32) );

    /* MISRA RULE 30 VIOLATION: The variable is written in the asm statement */
    return (res_s32);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
**********************************************************************************************************************
* SrvB_Neg_S32_S16
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Example1:  a = 5 -> b = -5
* Example2:  a = MINSINT32 -> b = MAXSINT16
*
* \param   sint32  X_s32    Input value
* \return  sint16  Input value with inverted sign, satured
**********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Neg_S32_S16_inline(sint32 X_s32))
{
    X_s32 = SrvB_Neg_S32_S32_inline(X_s32);
    return ( (sint16) SrvB_TypeLimiter_S32_S16_inline(X_s32) );
}


/**
**********************************************************************************************************************
* SrvB_Neg_S32_S8
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Example1:  a = 5 -> b = -5
* Example2:  a = MINSINT32 -> b = MAXSINT8
*
* \param   sint32  X_s32    Input value
* \return  sint8  Input value with inverted sign, satured
**********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Neg_S32_S8_inline(sint32 X_s32))
{
    X_s32 = SrvB_Neg_S32_S32_inline(X_s32);
    return ( (sint8) SrvB_TypeLimiter_S32_S8_inline(X_s32) );
}


/**
**********************************************************************************************************************
* SrvB_Neg_S32_U16
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Example1:  a = 5 -> b = -5
* Example2:  a = MINSINT32 -> b = MAXUINT16
*
* \param   sint32  X_s32    Input value
* \return  uint16  Input value with inverted sign, satured
**********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Neg_S32_U16_inline(sint32 X_s32))
{
    X_s32 = SrvB_Neg_S32_S32_inline(X_s32);
    return ( (uint16) SrvB_TypeLimiter_S32_U16_inline(X_s32) );
}


/**
**********************************************************************************************************************
* SrvB_Neg_S32_U32
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Example1:  a = 5 -> b = -5
* Example2:  a = MINSINT32 -> b = MAXSINT32+1
*
* \param   sint32  X_s32    Input value
* \return  uint32  Input value with inverted sign, satured
**********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Neg_S32_U32_inline(sint32 X_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    /* normal case */
    if(X_s32!=MINSINT32)
    {
        X_s32 = SrvB_Neg_S32_S32_inline(X_s32);
        return ( (uint32) SrvB_TypeLimiter_S32_U32_inline(X_s32) );
    }
    /* special case */
    else
    {
        return ( ((uint32) MAXSINT32) + 1 );
    }

#else

    uint32 res_u32;


    asm volatile("  min     %[res_u32], %[X_s32], 0 # keep the negative part        \n\
                    rsub    %[res_u32]              # negation                      \n\
                 " : [res_u32] "=&d" (res_u32) : [X_s32]"d"(X_s32) );

    /* MISRA RULE 30 VIOLATION: The variable is written in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/**
 **********************************************************************************************************************
 * SrvB_Neg_S32_U8
 *
 * \brief Invert the sign of a sint32 number.
 *
 * The output is satured to prevent under/overflows.
 * Foumlua: b = -1 * a
 * Example1:  a = 5 -> b = -5
 * Example2:  a = MINSINT32 -> b = MAXUINT8
 *
 * \param   sint32  X_s32    Input value
 * \return  uint8  Input value with inverted sign, satured
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Neg_S32_U8_inline(sint32 X_s32))
{
    X_s32 = SrvB_Neg_S32_S32_inline(X_s32);
    return ((uint8)SrvB_TypeLimiter_S32_U8_inline(X_s32));
}


/**
 **********************************************************************************************************************
 * SrvB_Neg_U32_S32
 *
 * \brief Invert the sign of a uint32 number.
 *
 * The output is satured to prevent under/overflows.
 * Foumlua: b = -1 * a
 * Example1:  a = 5 -> b = -5
 * Example2:  a = MINSINT32 -> b = MAXSINT32
 *
 * \param   uint32  X_u32    Input value
 * \return  sint32  Input value with inverted sign, satured
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Neg_U32_S32_inline(uint32 X_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 temp_s32;
    /* in range */
    if( X_u32 < ( ((uint32) MAXSINT32) + 1 ) )
    {
        temp_s32 = SrvB_Neg_S32_S32_inline( (sint32) X_u32 );
    }
    /* out of range */
    else
    {
        temp_s32 = MINSINT32;
    }

    return (temp_s32);

#else

    asm volatile(" jz.t   %[X_u32], 31, L1F_%=  # test if the upper bit cleared    \n\
                                                # saturate otherwise               \n\
                   movh   %[X_u32], 0x8000      # load MINSINT32                   \n\
               L1F_%=:                                                             \n\
                   rsub   %[X_u32]              # negation                         \n\
                 " :  [X_u32]"+d"(X_u32) );

                 return ((sint32) X_u32);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
**********************************************************************************************************************
* SrvB_Neg_U32_S16
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Example1:  a = 5 -> b = -5
* Example2:  a = MINSINT32 -> b = MAXSINT16
*
* \param   uint32  X_u32    Input value
* \return  sint16  Input value with inverted sign, satured
**********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Neg_U32_S16_inline(uint32 X_u32))
{
    return ((sint16)SrvB_TypeLimiter_S32_S16_inline(SrvB_Neg_U32_S32_inline(X_u32)));
}


/**
**********************************************************************************************************************
* SrvB_Neg_U32_S8
*
* \brief Invert the sign of a sint32 number.
*
* The output is satured to prevent under/overflows.
* Foumlua: b = -1 * a
* Example1:  a = 5 -> b = -5
* Example2:  a = MINSINT32 -> b = MAXSINT8
*
* \param   uint32  X_u32    Input value
* \return  sint8   Input value with inverted sign, satured
**********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Neg_U32_S8_inline(uint32 X_u32))
{
    return ((sint8)SrvB_TypeLimiter_S32_S8_inline(SrvB_Neg_U32_S32_inline(X_u32)));
}


/* SRVB_STAT_INL_H */
#endif
