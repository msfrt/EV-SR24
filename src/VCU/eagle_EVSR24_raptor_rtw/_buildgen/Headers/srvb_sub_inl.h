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
 * $Filename__:srvb_sub_inl.h$ 
 * 
 * $Author____:KDD2FE$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PIR5COB$ 
 * $Date______:21.08.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvb_sub_inl$ 
 * $Variant___:1.20.0$ 
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
 * 1.20.0; 1     21.08.2014 PIR5COB
 *   Review comments updated
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
 * 1.14.4; 0     05.08.2011 SW84FE
 *   Bugfix
 * 
 * 1.11.0; 1     13.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
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

#ifndef _SRVB_SUB_INL_H
#define _SRVB_SUB_INL_H

/*
 ***********************************************************************************************************************
 *
 * List of Functions
 *
 * SrvB_SUB_S32S32_U8,   SrvB_SUB_S32U32_U8,   SrvB_SUB_U32S32_U8,   SrvB_SUB_U32U32_U8
 * SrvB_SUB_S32S32_S8,   SrvB_SUB_S32U32_S8,   SrvB_SUB_U32S32_S8,   SrvB_SUB_U32U32_S8
 * SrvB_SUB_S32S32_U16,  SrvB_SUB_S32U32_U16,  SrvB_SUB_U32S32_U16,  SrvB_SUB_U32U32_U16
 * SrvB_SUB_S32S32_S16,  SrvB_SUB_S32U32_S16,  SrvB_SUB_U32S32_S16,  SrvB_SUB_U32U32_S16
 * SrvB_SUB_S32S32_U32,  SrvB_SUB_S32U32_U32,  SrvB_SUB_U32S32_U32,  SrvB_SUB_U3US32_U32
 * SrvB_SUB_S32S32_S32,  SrvB_SUB_S32U32_S32,  SrvB_SUB_U32S32_S32,  SrvB_SUB_U32U32_S32
 *
 * SrvB_AbsDiff_S32S32_S32,    SrvB_AbsDiff_S32S32_S16,    SrvB_AbsDiff_S32S32_S8
 * SrvB_AbsDiff_S32S32_U32,    SrvB_AbsDiff_S32S32_U16,    SrvB_AbsDiff_S32S32_U8
 * SrvB_AbsDiff_U32S32_U32,    SrvB_AbsDiff_U32S32_U16,    SrvB_AbsDiff_U32S32_U8
 * SrvB_AbsDiff_U32U32_U32,    SrvB_AbsDiff_U32U32_U16,    SrvB_AbsDiff_U32U32_U8
 *
 ***********************************************************************************************************************
 */

/**
 ***************************************************************************************************
 * \moduledescription
 *    Inline definition of 32-Bit substraction with saturation
 * \scope             [API]
 ***************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC SUBSTRACTION with 8 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_U8_inline
 *
 * sint32 sint32 substraction with uint8 saturation.
 *
 * Substract a signed 32-bit variable from a signed 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint8    (X_s32 - Y_s32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Sub_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /*  limitation */
    if (X_s32 <= Y_s32)
    {
        res_u32 = MINUINT8;
    }
    /* regular */
    else
    {
        res_u32 = ((uint32)(X_s32 - Y_s32));

       /* limitation */
        res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? (MAXUINT8) : (res_u32);
    }

    return ((uint8) res_u32);

#else
    /* the __SATBU instruction is a intrinsic define of the compiler
       It is available from hitec version 3.4.2.
       It is the equivalent for a sat.bu instruction but within control of the compiler.
    */

    sint32 res_s32;

        asm volatile(" subs     %0, %1, %2  \n\
                       max      %0, %0, 0   \n\
                       sat.bu   %0, %0      \n\
                     ": "=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );

        /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
        return ((uint8)res_s32);


/* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_U8_inline
 *
 * sint32 uint32 substraction with uint8 saturation.
 *
 * Substract a unsigned 32-bit variable from a signed 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint8    (X_s32 - Y_u32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Sub_S32U32_U8_inline(sint32 X_s32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /*  limitation */
    if( (X_s32 < 0) || (((uint32) X_s32) < Y_u32) )
    {
        res_u32 = MINUINT8;
    }
    /* regular */
    else
    {
        res_u32 = (((uint32) X_s32) - Y_u32);

       /* limitation */
        res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? (MAXUINT8) : (res_u32);
    }

    return ((uint8) res_u32);

#else

    uint8 res_u8;

    asm volatile(" max      %[res_u8]  , %[X_s32], 0           # avoids negative value of x_s32 \n\
                   subs.u   %[res_u8]  , %[res_u8]  , %[Y_u32] # saturated substraction         \n\
                   sat.bu   %[res_u8]                          # saturate to an unsigned byte   \n\
                 "
                 : [res_u8]"=&d"(res_u8)
                 : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u8);

#endif /* (SRVB_IMPL_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_U8_inline
 *
 * uint32 sint32 substraction with uint8 saturation.
 *
 * Substract a signed 32-bit variable from a unsigned 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint8    (X_u32 - Y_s32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Sub_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)
     uint32 res_u32;


    /* underflow */
    if( (Y_s32 > 0) && (X_u32 < (((uint32) Y_s32) + MINUINT32)) )
    {
        res_u32 = MINUINT8;
    }
    /* overflow */
    else if(
                (Y_s32 < 0) &&
                (
                    (  (Y_s32 > MINSINT32)  && ( (MAXUINT32 - X_u32) <  ((uint32) (-Y_s32)) )  )
                    ||
                    (  (Y_s32 == MINSINT32) && ( (MAXUINT32 - X_u32) < (((uint32) MAXSINT32) + 1) )  )
                )
           )
    {
        res_u32 = MAXUINT32;
    }
    /* regular*/
    else
    {
        /* result becomes smaller */
        if(Y_s32>=0)
        {
            res_u32 = (X_u32 - ((uint32) Y_s32));
        }
        /* result becomes bigger */
        else
        {
            /* normal case */
            if(Y_s32 > MINSINT32)
            {
                res_u32 = ( X_u32 + ((uint32) (-Y_s32)) );
            }
            /* special case */
            else
            {
                res_u32 = ( X_u32 + ((uint32) MAXSINT32) + 1 );
            }
        }
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? (MAXUINT8) : (res_u32);

    return ((uint8) res_u32);

#else

    uint32 res_u32;

    asm volatile("  jge  %2, 0, L1F_%=                   # if Y_s32 >= 0: limited unsigned subtraction \n\
                    sub %0, %1, %2                       # else unlimited unsigned subtraction \n\
                    jge.u  %0, %1, L2F_%=                # Y_s32 < 0 and no overflow, res_u32 > X_u32 \n\
                    movh   %0, 0x0000                    # set res_s32 zero \n\
                    addi   %0, %0, -1                    # set res_S32, MINUINT32 \n\
                    j L2F_%=                             # jump to the end\n\
             L1F_%=:                                     # saturated unsint addition \n\
                    subs.u %0, %1, %2                    # X_u32 - Y_s32 \n\
            L2F_%=:                                      \n\
                    sat.bu %0                            # limit to uint8 \n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint8) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */

}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_U8_inline
 *
 * uint32 uint32 substraction with uint8 saturation.
 *
 * Substract a unsigned 32-bit variable from a unsigned 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint8    (X_u32 - Y_u32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Sub_U32U32_U8_inline(uint32 X_u32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

     uint32 res_u32;


    /* underflow */
    if( X_u32 < (Y_u32 + MINUINT32) )
    {
        res_u32 = MINUINT8;
    }
    /* regular*/
    else
    {
        res_u32 = (X_u32 - Y_u32);

        /* limitation */
        res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? (MAXUINT8) : (res_u32);
    }

    return ((uint8) res_u32);

#else

    uint8 res_u8;


    asm volatile(" subs.u   %[res_u8], %[X_u32], %[Y_u32]    \n\
                   sat.bu   %[res_u8]                        \n\
                 "
                 : [res_u8]"=d"(res_u8)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u8);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_S8_inline
 *
 * sint32 sint32 substraction with sint8 saturation.
 *
 * Substract a signed 32-bit variable from a signed 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint8    (X_s32 - Y_s32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Sub_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    /* both operands even */
    if(  ( (X_s32 >= 0) && (Y_s32 >= 0) ) || ( (X_s32 < 0) && (Y_s32 < 0) )  )
    {
        res_s32 = (X_s32 - Y_s32);
    }
    /* one operand negative */
    else
    {
        if(Y_s32 >= 0)
        {
            /* underflow */
            if( Y_s32 > (X_s32 - MINSINT32) )
            {
                res_s32 = MINSINT32;
            }
            /* regular */
            else
            {
                res_s32 = (X_s32 - Y_s32);
            }
        }
        else
        {
            /* overflow */
            if( Y_s32 < (X_s32 - MAXSINT32) )
            {
                res_s32 = MAXSINT32;
            }
            /* regular */
            else
            {
                res_s32 = (X_s32 - Y_s32);
            }
        }
    }

    /* limitation */
    res_s32 = ( res_s32 > MAXSINT8 ) ? (MAXSINT8) : (res_s32);
    res_s32 = ( res_s32 < MINSINT8 ) ? (MINSINT8) : (res_s32);

    return ((sint8) res_s32);

#else

    sint32 res_s32;


    asm volatile(" subs     %0, %1, %2  \n\
                   sat.b    %0, %0      \n\
                 ": "=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                 /*       0            1        2   */

    /* MISRA RULE 30 VIOLATION: Res_s32 is written in the asm statement */
    return ((sint8)res_s32);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_S8_inline
 *
 * sint32 uint32 substraction with sint8 saturation.
 *
 * Substract a unsigned 32-bit variable from a signed 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint8    (X_s32 - Y_u32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Sub_S32U32_S8_inline(sint32 X_s32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint32 res_s32;


    /* 1. operand positive */
    if(X_s32 >= 0)
    {
        /* underflow */
        if( ( ((uint32) X_s32) + ((uint32) MAXSINT8) + 1 ) < Y_u32 )
        {
            res_s32 = MINSINT8;
        }
        /* regular */
        else
        {
            if( Y_u32 <= MAXSINT32 )
            {
                res_s32 = ( X_s32 - ((sint32) Y_u32) );
            }
            else
            {
                res_s32 = ( X_s32 - MAXSINT32 - ((sint32) (Y_u32 - ((uint32) MAXSINT32))) );
            }

        /* limitation */
        res_s32 = ( res_s32 > MAXSINT8 ) ? (MAXSINT8) : (res_s32);
        }
    }
    /* 1. operand negative */
    else
    {
        /* underflow */
        if( Y_u32 >= ((uint32) (X_s32 - MINSINT32)) )
        {
            res_s32 = MINSINT8;
        }
        /* regular */
        else
        {
            res_s32 = ( X_s32 - ((sint32) Y_u32) );

            /* limitation */
            res_s32 = ( res_s32 < MINSINT8 ) ? (MINSINT8) : (res_s32);
        }
    }

    return ((sint8) res_s32);

#else

    sint32 res_s32;


    asm volatile("  movh   %0, 0x8000       # set res_s32 to MAXSINT32 +1 = MINSINT32\n\
                    jlt.u  %2, %0, L1F_%=   # if Y_u32 <= MAXSINT32: jump to calculate the result \n\
                    jlt    %1, -1,  L2F_%=  # else, if X_s32 < -1, MINSINT32, jump to the end \n\
                    sub    %0, %1, %2       # else, else, unsigned subtraction \n\
                    jlt    %0, %1,  L2F_%=  # else, else, if res_s32 < x_s32, jump to the end \n\
                    movh  %0, 0x8000        # else, else, else, MINSINT32 \n\
                    j L2F_%=                # else, else, else, jump to the end \n\
            L1F_%=:                         # saturated sint subtraction \n\
                    subs %0, %1, %2         # X_u32 + Y_s32 \n\
            L2F_%=:                         \n\
                    sat.b %0                # limitation to sint8 \n\
                    " : "=&d" (res_s32) : "d"(X_s32), "d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint8) res_s32);

#endif   /* SRVB_IMPL_ASM_ENABLE==0 */

}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_S8_inline
 *
 * uint32 sint32 substraction with sint8 saturation.
 *
 * Substract a signed 32-bit variable from a unsigned 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint8    (X_u32 - Y_s32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Sub_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)
    sint32 res_s32;


    /* 2. operand positive */
    if(Y_s32>=0)
    {
        /* regular */
        if( X_u32 <= ((uint32) MAXSINT32) )
        {
            res_s32 = ((sint32) X_u32) - Y_s32;
        }
        /* regular */
        else if( ((uint32) Y_s32) >= (X_u32-((uint32) MAXSINT32)) )
        {
            res_s32 = (sint32) (X_u32 - ((uint32) Y_s32));
        }
        /* overflow */
        else
        {
            res_s32 = MAXSINT32;
        }
    }
    /* 2. operand negative */
    else
    {
        /* overflow */
        if(Y_s32==MINSINT32)
        {
            res_s32 = MAXSINT32;
        }
        /* overflow */
        else if( X_u32 > ((uint32) (MAXSINT32 + Y_s32)) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = ( ((sint32) X_u32) - Y_s32 );
        }
    }

    /* limitation */
    res_s32 = ( res_s32 < MINSINT8 ) ? (MINSINT8) : (res_s32);
    res_s32 = ( res_s32 > MAXSINT8 ) ? (MAXSINT8) : (res_s32);

    return ((sint8) res_s32);

#else

sint32 res_s32;
sint32 tmp_s32;

    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, L2F_%=               # if X_u32 <= MAXSINT32: jump to calculate the result \n\
                    jlt    %3,  0, L1F_%=               # else, if Y_s32 is negative: MAXSINT32 \n\
                    sub    %0, %2, %3                   # else: calculate with unlimited unsigned subtraction \n\
                    jlt    %0, 0,  L1F_%=               # if res_s32 > MAXSINT32: MAXSINT32 \n\
                    j L3F_%=                            # jump to the end\n\
            L1F_%=:                                     # limitation to MAXSINT32 \n\
                    addi  %0, %1, -1                    # res_s32 = (MAXSINT32 + 1) -1 \n\
                    j L3F_%=                            # jump to the end\n\
            L2F_%=:                                     # saturated sint subtraction \n\
                    subs %0, %2, %3                     # X_u32 + Y_s32 \n\
            L3F_%=:                                     \n\
                    sat.b %0                            # saturation to sint8\n\
                    " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

     /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint8)res_s32);

#endif /* SRVB_IMPL_ASM_ENABLE == 0 */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_S8_inline
 *
 * uint32 uint32 substraction with sint8 saturation.
 *
 * Substract a unsigned 32-bit variable from a unsigned 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint8    (X_u32 - Y_u32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Sub_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)
    sint32 res_s32;
    uint32 res_u32;


    /* positive */
    if(X_u32 > Y_u32)
    {
        res_u32 = (X_u32 - Y_u32);

        /* limit */
        res_s32 = ( res_u32 > ((uint32) MAXSINT8) ) ? (MAXSINT8) : ( ((sint32) res_u32) );
    }
    /* negative */
    else
    {
        res_u32 = (Y_u32 - X_u32);

        /* limit */
        if( res_u32 >= ((uint32)(MAXSINT32)+1) )
        {
            res_s32 = MINSINT8;
        }
        /* regular */
        else
        {
            res_s32 = (-((sint32) res_u32));

            /* limitation */
            res_s32 = ( res_s32 < MINSINT8 ) ? (MINSINT8) : (res_s32);
        }
    }

    return ((sint8) res_s32);
#else

    sint32 res_s32;
    sint32 tmp_s32;


    asm volatile(" sub    %0, %2, %3           # unsaturated subtraction\n\
                   xor.t  %1, %2, 31, %3, 31   # unequal signs: TRUE, equal signs: FALSE \n\
                   jlt    %1, 1, L1F_%=        # equal signs, jump to the end \n\
                   xor.t  %1, %0, 31, %3, 31   # unequal signs: TRUE: overflow \n\
                   jlt    %1, 1, L1F_%=        # no overflow, jump to the end \n\
                   movh   %0, 0x8000           # limit, res_s32 = MINSINT32 \n\
                   jge    %2, 0, L1F_%=        # x_s32 < 0, MIN, jump to the end \n\
                   addi   %0, %0, -1           # x_s32 >0, MAXSINT32 \n\
             L1F_%=:                           # end \n\
                   sat.b   %0                  # limit to a half word \n\
                 ": "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint8)res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC SUBSTRACTION with 16 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_U16_inline
 *
 * sint32 sint32 substraction with uint16 saturation.
 *
 * Substract a signed 32-bit variable from a signed 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint16   (X_s32 - Y_s32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Sub_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /*  limitation */
    if (X_s32 <= Y_s32)
    {
        res_u32 = MINUINT16;
    }
    /* regular */
    else
    {
        res_u32 = ((uint32)(X_s32 - Y_s32));

       /* limitation */
        res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? (MAXUINT16) : (res_u32);
    }

    return ((uint16) res_u32);

#else

    sint32 res_s32;


    asm volatile(" subs     %0, %1, %2      \n\
                   max      %0, %0, 0       \n\
                   sat.hu   %0, %0          \n\
                 ":"=d" (res_s32) : "d"(X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: Res_s32 is written in the asm statement */
    return ((uint16)res_s32);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_U16_inline
 *
 * sint32 uint32 substraction with uint16 saturation.
 *
 * Substract a unsigned 32-bit variable from a signed 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint16   (X_s32 - Y_u32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Sub_S32U32_U16_inline(sint32 X_s32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /*  limitation */
    if( (X_s32 < 0) || (((uint32) X_s32) < Y_u32) )
    {
        res_u32 = MINUINT16;
    }
    /* regular */
    else
    {
        res_u32 = (((uint32) X_s32) - Y_u32);

       /* limitation */
        res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? (MAXUINT16) : (res_u32);
    }

    return ((uint16) res_u32);

#else

    uint16 res_u32;

    asm volatile(" max      %[res_u32]  , %[X_s32], 0           # avoids negative value of x_s32    \n\
                   subs.u   %[res_u32]  , %[res_u32]  , %[Y_u32]    # saturated substraction            \n\
                   sat.hu   %[res_u32]                          # saturate to an uint16             \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return res_u32;

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_U16_inline
 *
 * uint32 sint32 substraction with uint16 saturation.
 *
 * Substract a signed 32-bit variable from a unsigned 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint16   (X_u32 - Y_s32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Sub_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)
     uint32 res_u32;


    /* underflow */
    if( (Y_s32 > 0) && (X_u32 < (((uint32) Y_s32) + MINUINT32)) )
    {
        res_u32 = MINUINT16;
    }
    /* overflow */
    else if(
                (Y_s32 < 0) &&
                (
                    (  (Y_s32 > MINSINT32)  && ( (MAXUINT32 - X_u32) <  ((uint32) (-Y_s32)) )  )
                    ||
                    (  (Y_s32 == MINSINT32) && ( (MAXUINT32 - X_u32) < (((uint32) MAXSINT32) + 1) )  )
                )
           )
    {
        res_u32 = MAXUINT32;
    }
    /* regular*/
    else
    {
        /* result becomes smaller */
        if(Y_s32>=0)
        {
            res_u32 = (X_u32 - ((uint32) Y_s32));
        }
        /* result becomes bigger */
        else
        {
            /* normal case */
            if(Y_s32 > MINSINT32)
            {
                res_u32 = ( X_u32 + ((uint32) (-Y_s32)) );
            }
            /* special case */
            else
            {
                res_u32 = ( X_u32 + ((uint32) MAXSINT32) + 1 );
            }
        }
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? (MAXUINT16) : (res_u32);

    return ((uint16) res_u32);

#else

    uint32 res_u32;


    asm volatile("  jge  %2, 0, L1F_%=                  # if Y_s32 >= 0: limited unsigned subtraction \n\
                    sub %0, %1, %2                      # else unlimited unsigned subtraction \n\
                    jge.u  %0, %1, L2F_%=               # Y_s32 < 0 and no overflow, res_u32 > X_u32 \n\
                    movh   %0, 0x0000                   # set res_s32 zero \n\
                    addi   %0, %0, -1                   # set res_S32, MINUINT32 \n\
                    j L2F_%=                            # jump to the end\n\
            L1F_%=:                                     # saturated unsint addition \n\
                    subs.u %0, %1, %2                   # X_u32 - Y_s32 \n\
            L2F_%=:                                     \n\
                    sat.hu %0                           # limit to uint16 \n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );


    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint16) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_U16_inline
 *
 * uint32 uint32 substraction with uint16 saturation.
 *
 * Substract a unsigned 32-bit variable from a unsigned 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint16   (X_u32 - Y_u32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Sub_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

     uint32 res_u32;


    /* underflow */
    if( X_u32 < (Y_u32 + MINUINT32) )
    {
        res_u32 = MINUINT16;
    }
    /* regular*/
    else
    {
        res_u32 = (X_u32 - Y_u32);

        /* limitation */
        res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? (MAXUINT16) : (res_u32);
    }

    return ((uint16) res_u32);

#else

    uint16 res_u32;


    asm volatile(" subs.u   %[res_u32], %[X_u32], %[Y_u32]    \n\
                   sat.hu   %[res_u32]                        \n\
                 "
                 : [res_u32]"=d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_S16_inline
 *
 * sint32 sint32 substraction with sint16 saturation.
 *
 * Substract a signed 32-bit variable from a signed 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint16   (X_s32 - Y_s32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Sub_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint32 res_s32;


    /* both operands even */
    if(  ( (X_s32 >= 0) && (Y_s32 >= 0) ) || ( (X_s32 < 0) && (Y_s32 < 0) )  )
    {
        res_s32 = (X_s32 - Y_s32);
    }
    /* one operand negative */
    else
    {
        if(Y_s32 >= 0)
        {
            /* underflow */
            if( Y_s32 > (X_s32 - MINSINT32) )
            {
                res_s32 = MINSINT32;
            }
            /* regular */
            else
            {
                res_s32 = (X_s32 - Y_s32);
            }
        }
        else
        {
            /* overflow */
            if( Y_s32 < (X_s32 - MAXSINT32) )
            {
                res_s32 = MAXSINT32;
            }
            /* regular */
            else
            {
                res_s32 = (X_s32 - Y_s32);
            }
        }
    }

    /* limitation */
    res_s32 = ( res_s32 > MAXSINT16 ) ? (MAXSINT16) : (res_s32);
    res_s32 = ( res_s32 < MINSINT16 ) ? (MINSINT16) : (res_s32);

    return ((sint16) res_s32);

#else

      sint32 res_s32;
    asm volatile(" subs  %0, %1, %2 \n\
                   sat.h %0, %0     \n\
                 ":"=%d" (res_s32) : "d"(X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint16)res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0)  */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_S16_inline
 *
 * sint32 uint32 substraction with sint16 saturation.
 *
 * Substract a unsigned 32-bit variable from a signed 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint16   (X_s32 - Y_u32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Sub_S32U32_S16_inline(sint32 X_s32, uint32 Y_u32))
{
#if(SRVB_IMPL_ASM_ENABLE==0 )
    sint32 res_s32;


    /* 1. operand positive */
    if(X_s32 >= 0)
    {
        /* underflow */
        if( ( ((uint32) X_s32) + ((uint32) MAXSINT16) + 1 ) < Y_u32 )
        {
            res_s32 = MINSINT16;
        }
        /* regular */
        else
        {
            if( Y_u32 <= MAXSINT32 )
            {
                res_s32 = ( X_s32 - ((sint32) Y_u32) );
            }
            else
            {
                res_s32 = ( X_s32 - MAXSINT32 - ((sint32) (Y_u32 - ((uint32) MAXSINT32))) );
            }

        /* limitation */
        res_s32 = ( res_s32 > MAXSINT16 ) ? (MAXSINT16) : (res_s32);
        }
    }
    /* 1. operand negative */
    else
    {
        /* underflow */
        if( Y_u32 >= ((uint32) (X_s32 - MINSINT32)) )
        {
            res_s32 = MINSINT16;
        }
        /* regular */
        else
        {
            res_s32 = ( X_s32 - ((sint32) Y_u32) );

            /* limitation */
            res_s32 = ( res_s32 < MINSINT16 ) ? (MINSINT16) : (res_s32);
        }
    }

    return ((sint16) res_s32);

#else

    sint32 res_s32;


    asm volatile("  movh   %0, 0x8000       # set res_s32 to MAXSINT32 +1 = MINSINT32\n\
                    jlt.u  %2, %0, L1F_%=   # if Y_u32 <= MAXSINT32:jump to calculate the result \n\
                    jlt    %1, -1,  L2F_%=  # else, if X_s32 < -1, MINSINT32, jump to the end \n\
                    sub    %0, %1, %2       # else, else, unsigned subtraction \n\
                    jlt    %0, %1,  L2F_%=  # else, else, if res_s32 < x_s32, jump to the end \n\
                    movh  %0, 0x8000        # else, else, else, MINSINT32 \n\
                    j L2F_%=                # else, else, else, jump to the end \n\
            L1F_%=:                         # saturated sint subtraction \n\
                    subs %0, %1, %2         # X_u32 + Y_s32 \n\
            L2F_%=:                         \n\
                    sat.h %0                # limitation to sint16 \n\
                    " : "=&d" (res_s32) : "d"(X_s32), "d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16) res_s32);

#endif   /* (SRVB_IMPL_ASM_ENABLE==0)  */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_S16_inline
 *
 * uint32 sint32 substraction with sint16 saturation.
 *
 * Substract a signed 32-bit variable from a unsigned 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint16   (X_u32 - Y_s32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Sub_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    /* 2. operand positive */
    if(Y_s32>=0)
    {
        /* regular */
        if( X_u32 <= ((uint32) MAXSINT32) )
        {
            res_s32 = ((sint32) X_u32) - Y_s32;
        }
        /* regular */
        else if( ((uint32) Y_s32) >= (X_u32-((uint32) MAXSINT32)) )
        {
            res_s32 = (sint32) (X_u32 - ((uint32) Y_s32));
        }
        /* overflow */
        else
        {
            res_s32 = MAXSINT32;
        }
    }
    /* 2. operand negative */
    else
    {
        /* overflow */
        if(Y_s32==MINSINT32)
        {
            res_s32 = MAXSINT32;
        }
        /* overflow */
        else if( X_u32 > ((uint32) (MAXSINT32 + Y_s32)) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = ( ((sint32) X_u32) - Y_s32 );
        }
    }

    /* limitation */
    res_s32 = ( res_s32 < MINSINT16 ) ? (MINSINT16) : (res_s32);
    res_s32 = ( res_s32 > MAXSINT16 ) ? (MAXSINT16) : (res_s32);

    return ((sint16) res_s32);

#else

sint32 res_s32;
sint32 tmp_s32;

    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, L2F_%=               # if X_u32 <= MAXSINT32:jump to calculate the result \n\
                    jlt    %3,  0, L1F_%=               # else, if Y_s32 is negative: MAXSINT32 \n\
                    sub    %0, %2, %3                   # else: calculate with unlimited unsigned subtraction \n\
                    jlt    %0, 0,  L1F_%=               # if res_s32 > MAXSINT32:MAXSINT32 \n\
                    j L3F_%=                            # jump to the end\n\
            L1F_%=:                                     # limitation to MAXSINT32 \n\
                    addi  %0, %1, -1                    # res_s32 = (MAXSINT32 + 1) -1 \n\
                    j L3F_%=                            # jump to the end\n\
            L2F_%=:                                     # saturated sint subtraction \n\
                    subs %0, %2, %3                     # X_u32 + Y_s32 \n\
            L3F_%=:                                     \n\
                    sat.h %0                            # saturation to sint16\n\
                    " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16)res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0)  */

}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_S16_inline
 *
 * uint32 uint32 substraction with sint16 saturation.
 *
 * Substract a unsigned 32-bit variable from a unsigned 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint16   (X_u32 - Y_u32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Sub_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)
    sint32 res_s32;
    uint32 res_u32;


    /* positive */
    if(X_u32 > Y_u32)
    {
        res_u32 = (X_u32 - Y_u32);

        /* limit */
        res_s32 = ( res_u32 > ((uint32) MAXSINT16) ) ? (MAXSINT16) : ( ((sint32) res_u32) );
    }
    /* negative */
    else
    {
        res_u32 = (Y_u32 - X_u32);

        /* limit */
        if( res_u32 >= ((uint32)(MAXSINT32)+1) )
        {
            res_s32 = MINSINT16;
        }
        /* regular */
        else
        {
            res_s32 = (-((sint32) res_u32));

            /* limitation */
            res_s32 = ( res_s32 < MINSINT16 ) ? (MINSINT16) : (res_s32);
        }
    }

    return ((sint16) res_s32);
#else

    sint32 res_s32;
    sint32 tmp_s32;


    asm volatile(" sub    %0, %2, %3           # unsaturated subtraction\n\
                   xor.t  %1, %2, 31, %3, 31   # unequal signs: TRUE, equal signs: FALSE \n\
                   jlt    %1, 1, L1F_%=        # equal signs, jump to the end \n\
                   xor.t  %1, %0, 31, %3, 31   # unequal signs: TRUE: overflow \n\
                   jlt    %1, 1, L1F_%=        # no overflow, jump to the end \n\
                   movh   %0, 0x8000           # limit, res_s32 = MINSINT32 \n\
                   jge    %2, 0, L1F_%=        # x_s32 < 0, MIN, jump to the end \n\
                   addi   %0, %0, -1           # x_s32 >0, MAXSINT32 \n\
             L1F_%=:                           # end \n\
                   sat.h   %0                  # limit to a half word \n\
                 ": "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_u32) );


    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16)res_s32);

/* SRVB_IMPL_ASM_ENABLE==0 */
#endif

}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC SUBSTRACTION with 32 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_U32_inline
 *
 * sint32 sint32 substraction with uint32 saturation.
 *
 * Substract a signed 32-bit variable from a signed 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint32    (X_s32 - Y_s32)            Result,    unsigned  32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Sub_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)
    uint32 res_u32;


    /*  limitation */
    if (X_s32 <= Y_s32)
    {
        res_u32 = MINUINT32;
    }
    /* regular */
    else
    {
        res_u32 = ((uint32)(X_s32 - Y_s32));
    }

    return (res_u32);
#else

    uint32 res_u32;


    asm volatile(" xor.t    %0, %1, 31, %2 31  # Have both parameters equal signs? \n\
                   jlt      %0, 1, L1F_%=      # If equal signs: jump to calculate the result\n\
                   jge      %2, 0, L2F_%=      # Else, If Y_s32>=0, than limit res_u32 = 0\n\
                   sub      %0, %1, %2         # Else, else X_s32 + |Y_s32| \n\
                   j        L3F_%=             # result is always in the range of uint32\n\
            L1F_%=:                            # subtraction \n\
                   subs     %0, %1, %2         # sign saturated \n\
                   jge      %0, 0, L3F_%=      # no limit required \n\
            L2F_%=:                            # limit \n\
                   mov       %0, 0x000         #res = zero \n\
            L3F_%=:                            \n\
                 ":"=&d"(res_u32) : "d"(X_s32), "d"(Y_s32));


    /* MISRA RULE 30 VIOLATION: Res_s32 is written in the asm statement */
    return (res_u32);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif

}




/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_U32_inline
 *
 * sint32 uint32 substraction with uint32 saturation.
 *
 * Substract a unsigned 32-bit variable from a signed 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint32    (X_s32 - Y_u32)            Result,    unsigned  32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Sub_S32U32_U32_inline(sint32 X_s32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /*  limitation */
    if( (X_s32 < 0) || (((uint32) X_s32) < Y_u32) )
    {
        res_u32 = MINUINT32;
    }
    /* regular */
    else
    {
        res_u32 = (((uint32) X_s32) - Y_u32);
    }

    return (res_u32);

#else

    uint32 res_u32;


    asm volatile(" max      %[res_u32]  , %[X_s32], 0               # avoids negative value of x_s32    \n\
                   subs.u   %[res_u32]  , %[res_u32],   %[Y_u32]    # saturated substraction            \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_U32_inline
 *
 * uint32 sint32 substraction with uint32 saturation.
 *
 * Substract a signed 32-bit variable from a unsigned 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint32    (X_u32 - Y_s32)            Result,    unsigned  32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Sub_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)
     uint32 res_u32;


    /* underflow */
    if( (Y_s32 > 0) && (X_u32 < (((uint32) Y_s32) + MINUINT32)) )
    {
        res_u32 = MINUINT32;
    }
    /* overflow */
    else if(
                (Y_s32 < 0) &&
                (
                    (  (Y_s32 > MINSINT32)  && ( (MAXUINT32 - X_u32) <  ((uint32) (-Y_s32)) )  )
                    ||
                    (  (Y_s32 == MINSINT32) && ( (MAXUINT32 - X_u32) < (((uint32) MAXSINT32) + 1) )  )
                )
           )
    {
        res_u32 = MAXUINT32;
    }
    /* regular*/
    else
    {
        /* result becomes smaller */
        if(Y_s32>=0)
        {
            res_u32 = (X_u32 - ((uint32) Y_s32));
        }
        /* result becomes bigger */
        else
        {
            /* normal case */
            if(Y_s32 > MINSINT32)
            {
                res_u32 = ( X_u32 + ((uint32) (-Y_s32)) );
            }
            /* special case */
            else
            {
                res_u32 = ( X_u32 + ((uint32) MAXSINT32) + 1 );
            }
        }
    }

    return (res_u32);

#else

    uint32 res_u32;


    asm volatile("  jge  %2, 0, L1F_%=                  # if Y_s32 >= 0: limited unsigned subtraction \n\
                    sub %0, %1, %2                      # else unlimited unsigned subtraction \n\
                    jge.u  %0, %1, L2F_%=               # Y_s32 < 0 and no overflow, res_u32 > X_u32 \n\
                    movh   %0, 0x0000                   # set res_s32 zero \n\
                    addi   %0, %0, -1                   # set res_S32, MINUINT32 \n\
                    j L2F_%=                            # jump to the end\n\
            L1F_%=:                                     # saturated unsigned addition \n\
                    subs.u %0, %1, %2                   # X_u32 - Y_s32 \n\
            L2F_%=:                                      \n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );


    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */

}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_U32_inline
 *
 * uint32 uint32 substraction with uint32 saturation.
 *
 * Substract a unsigned 32-bit variable from a unsigned 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint32    (X_u32 - Y_u32)            Result,    unsigned  32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Sub_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

     uint32 res_u32;


    /* underflow */
    if( X_u32 < (Y_u32 + MINUINT32) )
    {
        res_u32 = MINUINT32;
    }
    /* regular*/
    else
    {
        res_u32 = (X_u32 - Y_u32);
    }

    return (res_u32);

#else

    uint32 res_u32;


    asm volatile(" subs.u   %[res_u32], %[X_u32], %[Y_u32]    \n\
                 "
                 : [res_u32]"=d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_S32_inline
 *
 * sint32 sint32 substraction with sint32 saturation.
 *
 * Substract a signed 32-bit variable from a signed 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint32   (X_s32 - Y_s32)            Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Sub_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint32 res_s32;


    /* both operands even */
    if(  ( (X_s32 >= 0) && (Y_s32 >= 0) ) || ( (X_s32 < 0) && (Y_s32 < 0) )  )
    {
        res_s32 = (X_s32 - Y_s32);
    }
    /* one operand negative */
    else
    {
        if(Y_s32 >= 0)
        {
            /* underflow */
            if( Y_s32 > (X_s32 - MINSINT32) )
            {
                res_s32 = MINSINT32;
            }
            /* regular */
            else
            {
                res_s32 = (X_s32 - Y_s32);
            }
        }
        else
        {
            /* overflow */
            if( Y_s32 < (X_s32 - MAXSINT32) )
            {
                res_s32 = MAXSINT32;
            }
            /* regular */
            else
            {
                res_s32 = (X_s32 - Y_s32);
            }
        }
    }

    return (res_s32);

#else

    sint32 res_s32;


    asm volatile(" subs %0, %1, %2"
                   : "=&d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                     /*     0                 1           2       */

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);

/* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_S32_inline
 *
 * sint32 uint32 substraction with sint32 saturation.
 *
 * Substract a unsigned 32-bit variable from a signed 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint32   (X_s32 - Y_u32)            Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Sub_S32U32_S32_inline(sint32 X_s32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint32 res_s32;


    /* 1. operand positive */
    if(X_s32 >= 0)
    {
        /* underflow (MAXSINT32 + 1 == -MINSINT32) */
        if( ( ((uint32) X_s32) + ((uint32) MAXSINT32) + 1 ) < Y_u32 )
        {
            res_s32 = MINSINT32;
        }
        /* regular */
        else
        {
            if( Y_u32 <= MAXSINT32 )
            {
                res_s32 = ( X_s32 - ((sint32) Y_u32) );
            }
            else
            {
                res_s32 = ( X_s32 - MAXSINT32 - ((sint32) (Y_u32 - ((uint32) MAXSINT32))) );
            }
        }
    }
    /* 1. operand negative */
    else
    {
        /* underflow */
        if( Y_u32 >= ((uint32) (X_s32 - MINSINT32)) )
        {
            res_s32 = MINSINT32;
        }
        /* regular */
        else
        {
            res_s32 = ( X_s32 - ((sint32) Y_u32) );
        }
    }

    return (res_s32);

#else

    sint32 res_s32;

    asm volatile("  movh   %0, 0x8000       # set res_s32 to MAXSINT32 +1 = MINSINT32\n\
                    jlt.u  %2, %0, L1F_%=   # if Y_u32 <= MAXSINT32: jump to calculate the result \n\
                    jlt    %1, -1,  L2F_%=  # else, if X_s32 < -1, MINSINT32, jump to the end \n\
                    sub    %0, %1, %2       # else, else, unsigned subtraction \n\
                    jlt    %0, %1,  L2F_%=  # else, else, if res_s32 < x_s32, jump to the end \n\
                    movh  %0, 0x8000        # else, else, else, MINSINT32 \n\
                    j L2F_%=                # else, else, else, jump to the end \n\
            L1F_%=:                         # saturated sint subtraction \n\
                    subs %0, %1, %2         # X_u32 + Y_s32 \n\
            L2F_%=:                         \n\
                    " : "=&d" (res_s32) : "d"(X_s32), "d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);

/* SRVB_IMPL_ASM_ENABLE==0 */
#endif

}



/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_S32_inline
 *
 * uint32 sint32 substraction with sint32 saturation.
 *
 * Substract a signed 32-bit variable from a unsigned 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint32   (X_u32 - Y_s32)            Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Sub_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    /* 2. operand positive */
    if(Y_s32>=0)
    {
        /* regular */
        if( X_u32 <= ((uint32) MAXSINT32) )
        {
            res_s32 = ((sint32) X_u32) - Y_s32;
        }
        /* regular */
        else if( ((uint32) Y_s32) >= (X_u32-((uint32) MAXSINT32)) )
        {
            res_s32 = (sint32) (X_u32 - ((uint32) Y_s32));
        }
        /* overflow */
        else
        {
            res_s32 = MAXSINT32;
        }
    }
    /* 2. operand negative */
    else
    {
        /* overflow */
        if(Y_s32==MINSINT32)
        {
            res_s32 = MAXSINT32;
        }
        /* overflow */
        else if( X_u32 > ((uint32) (MAXSINT32 + Y_s32)) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = ( ((sint32) X_u32) - Y_s32 );
        }
    }

    return (res_s32);

#else

sint32 res_s32;
sint32 tmp_s32;


    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, L2F_%=               # if X_u32 <= MAXSINT32:jump to calculate the result \n\
                    jlt    %3,  0, L1F_%=               # else, if Y_s32 is negative: MAXSINT32 \n\
                    sub    %0, %2, %3                   # else: calculate with unlimited unsigned subtraction \n\
                    jlt    %0, 0,  L1F_%=               # if res_s32 > MAXSINT32:MAXSINT32 \n\
                    j L3F_%=                            # jump to the end\n\
            L1F_%=:                                     # limitation to MAXSINT32 \n\
                    addi  %0, %1, -1                    # res_s32 = (MAXSINT32 + 1) -1 \n\
                    j L3F_%=                            # jump to the end\n\
            L2F_%=:                                     # saturated sint subtraction \n\
                    subs %0, %2, %3                     # X_u32 + Y_s32 \n\
            L3F_%=:                                     \n\
                    " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

                        /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0)  */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_S32_inline
 *
 * uint32 uint32 substraction with sint32 saturation.
 *
 * Substract a unsigned 32-bit variable from a unsigned 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint32   (X_u32 - Y_u32)            Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Sub_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint32 res_s32;
    uint32 res_u32;


    /* positive */
    if(X_u32 > Y_u32)
    {
        res_u32 = (X_u32 - Y_u32);

        /* limit */
        res_s32 = ( res_u32 > ((uint32) MAXSINT32) ) ? (MAXSINT32) : ( ((sint32) res_u32) );
    }
    /* negative */
    else
    {
        res_u32 = (Y_u32 - X_u32);

        /* limit */
        if( res_u32 >= ((uint32)(MAXSINT32)+1) )
        {
            res_s32 = MINSINT32;
        }
        /* regular */
        else
        {
            res_s32 = (-((sint32) res_u32));
        }
    }

    return (res_s32);

#else

    sint32 res_s32;
    sint32 tmp_s32;


    asm volatile(" sub    %0, %2, %3           # unsaturated subtraction\n\
                   xor.t  %1, %2, 31, %3, 31   # unequal signs: TRUE, equal signs: FALSE \n\
                   jlt    %1, 1, L1F_%=        # equal signs, jump to the end \n\
                   xor.t  %1, %0, 31, %3, 31   # unequal signs: TRUE: overflow \n\
                   jlt    %1, 1, L1F_%=        # no overflow, jump to the end \n\
                   movh   %0, 0x8000           # limit, res_s32 = MINSINT32 \n\
                   jge    %2, 0, L1F_%=        # x_s32 < 0, MIN, jump to the end \n\
                   addi   %0, %0, -1           # x_s32 >0, MAXSINT32 \n\
             L1F_%=:                           # end \n\
                 ": "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_u32) );


    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC DIFFERENCE with 32 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_S32S32_S32_inline
 *
 * absolute difference of sint32 and sint32 saturated to sint32.
 *
 * Calculates the difference between a signed 32-bit and a signed 32-bit variable to a signed 32-bit result.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint32   abs(X_s32 - Y_s32)         Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_AbsDiff_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    res_s32 = SrvB_Sub_S32S32_S32_inline(X_s32, Y_s32);

    if(res_s32 < 0)
    {
       /* limitation and absolut value; abs(MINSINT32) = MAXSINT32 + 1 */
       res_s32 = ((res_s32 == MINSINT32) ? MAXSINT32 : (-res_s32));
    }

    return (res_s32);

#else

    sint32 temp_s32;

    asm volatile("absdifs %0,%1,%2" : "=d" (temp_s32) : "d" (X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(temp_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_S32S32_U32_inline
 *
 * absolute difference of sint32 and sint32 saturated to uint32.
 *
 * Calculates the difference between a signed 32-bit and a signed 32-bit variable to a unsigned 32-bit result.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows (underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint32   abs(X_s32 - Y_s32)         Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_AbsDiff_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if(X_s32 >= Y_s32)
    {
        res_u32 = ((uint32) (X_s32 - Y_s32));
    }
    else
    {
        res_u32 = ((uint32) (Y_s32 - X_s32));
    }

    return (res_u32);

#else

    uint32 res_u32;


    asm volatile("    \n\
             absdif %[res_u32], %[X_s32], %[Y_s32] # Perform the absolute difference \n\
        "
        : [res_u32]"=d"(res_u32)
        : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32)
        );

   /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_U32S32_U32_inline
 *
 * absolute difference of uint32 and sint32 saturated to uint32.
 *
 * Calculates the difference between a unsigned 32-bit and a signed 32-bit variable to a unsigned 32-bit result.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows (underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint32   abs(X_u32 - Y_s32)         Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_AbsDiff_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32))
{
#if(SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;

    if( (Y_s32 <= 0) || ((Y_s32 > 0) && (X_u32 >= ((uint32) Y_s32) )) )
    {
        res_u32 = SrvB_Sub_U32S32_U32_inline(X_u32, Y_s32);
    }
    else
    {
        res_u32 = SrvB_Sub_S32U32_U32_inline(Y_s32, X_u32);
    }

    return (res_u32);

#else

    uint32 res_u32;

    asm volatile("  jge  %2, 0, L1F_%=                  # if Y_s32 >= 0: limited unsigned subtraction \n\
                    abs  %0, %2                         # else abs(Y_s32) \n\
                    adds.u  %0, %0, %1                  # and x_u32 + abs(Y_s32) \n\
                    j L3F_%=                            # jump to the end\n\
            L1F_%=:                                     # saturated unint subtraction \n\
                    jlt.u   %2, %1, L2F_%=              # if X_u32 > Y_s32, (X_u32 - Y_s32) \n\
                    subs.u %0, %2, %1                   # else X_u32 < Y_s32, (Y_s32 - X_u32)\n\
                    j L3F_%=                            # jump to the end \n\
            L2F_%=:                                     # saturated uint subtraction \n\
                    subs.u %0, %1, %2                   # X_u32 - Y_s32 \n\
            L3F_%=:                                      \n\
                  " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_U32U32_U32_inline
 *
 * absolute difference of uint32 and uint32 saturated to uint32.
 *
 * Calculates the difference between a unsigned 32-bit and a unsigned 32-bit variable to a unsigned 32-bit result.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows (underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint32   abs(X_u32 - Y_u32)         Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_AbsDiff_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if(X_u32 >= Y_u32)
    {
        res_u32 = ((uint32) (X_u32 - Y_u32));
    }
    else
    {
        res_u32 = ((uint32) (Y_u32 - X_u32));
    }

    return (res_u32);

#else

    uint32 res_u32;


    asm volatile("    \n\
             subs.u %[res_u32], %[X_u32], %[Y_u32] # Perform a substraction                  \n\
             jnz %[res_u32], L1F_%=                    # Second argument is smaller: keep result \n\
             sub %[res_u32], %[Y_u32], %[X_u32]    # Second argument is bigger: recompute    \n\
            L1F_%=:  #  \n\
        "
        : [res_u32]"=&d"(res_u32)
        : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32)
        );

   /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC DIFFERENCE with 16 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_S32S32_S16_inline
 *
 * absolute difference of sint32 and sint32 saturated to sint16.
 *
 * Calculates the difference between a signed 32-bit and a signed 32-bit variable to a signed 16-bit result.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows (underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint16   abs(X_s32 - Y_s32)         Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_AbsDiff_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint16 res_s16;


    res_s16 = SrvB_Sub_S32S32_S16_inline(X_s32, Y_s32);

    if(res_s16 < 0)
    {
       /* limitation and absolut value; abs(MINSINT16) = MAXSINT16 + 1 */
       res_s16 = ((res_s16 == MINSINT16) ? MAXSINT16 : (-res_s16));
    }

    return (res_s16);

#else

    sint32 temp_s32;

    /*  The __SATH instruction is a intrinsic define of the compiler
                 It is available from hitec version 3.4.2.
                 It is the equivalent for a sat.h instruction but within control of the compiler.
            */
    #ifdef __SATH
    asm volatile("  absdifs %0,%1,%2                  \n\
                 ":"=d"(temp_s32) : "d" (X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATH(temp_s32);

    #else
    asm volatile("  absdifs %0,%1,%2                  \n\
                    sat.h   %0,%0                     \n\
                 ":"=d"(temp_s32) : "d" (X_s32), "d"(Y_s32));
                 /*     0            1        2 */

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint16)temp_s32);

    #endif /* __SATH */

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_S32S32_U16_inline
 *
 * absolute difference of sint32 and sint32 saturated to uint16.
 *
 * Calculates the difference between a signed 32-bit and a signed 32-bit variable to a unsigned 16-bit result.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows (underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint16   abs(X_s32 - Y_s32)         Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_AbsDiff_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if(X_s32 >= Y_s32)
    {
        res_u32 = ((uint32) (X_s32 - Y_s32));
    }
    else
    {
        res_u32 = ((uint32) (Y_s32 - X_s32));
    }

    /* limitation */
    res_u32 = (res_u32 > MAXUINT16) ? (MAXUINT16) : (res_u32);

    return ((uint16) res_u32);

#else

    uint32 res_u32;

    /* Note: This Asm Code is generated (Uz = |Xx - Xx|) (Both arguments have the same type) */
    /* temporary variable used */
    asm volatile("    \n\
             absdif %[res_u32], %[X_s32], %[Y_s32] # Perform the absolute difference \n\
             sat.hu %[res_u32]                     # Saturate on desired type u16    \n\
        "
        : [res_u32]"=d"(res_u32)
        : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32)
        );

   /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint16) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0)  */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_U32S32_U16_inline
 *
 * absolute difference of uint32 and sint32 saturated to uint16.
 *
 * Calculates the difference between a unsigned 32-bit and a signed 32-bit variable to a unsigned 16-bit result.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows (underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint16   abs(X_u32 - Y_s32)         Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_AbsDiff_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)
    uint16 res_u16;

    if( (Y_s32 <= 0) || ((Y_s32 > 0) && (X_u32 >= ((uint32) Y_s32) )) )
    {
        res_u16 = SrvB_Sub_U32S32_U16_inline(X_u32, Y_s32);
    }
    else
    {
        res_u16 = SrvB_Sub_S32U32_U16_inline(Y_s32, X_u32);
    }

    return (res_u16);

#else

    uint32 res_u32;

    asm volatile("  jge  %2, 0, L1F_%=                  # if Y_s32 >= 0: limited unsigned subtraction \n\
                    abs  %0, %2                         # else abs(Y_s32) \n\
                    adds.u  %0, %0, %1                  # and x_u32 + abs(Y_s32) \n\
                    j L3F_%=                            # jump to the end\n\
            L1F_%=:                                     # saturated unint subtraction \n\
                    jlt.u   %2, %1, L2F_%=              # if X_u32 > Y_s32, (X_u32 - Y_s32) \n\
                    subs.u %0, %2, %1                   # else X_u32 < Y_s32, (Y_s32 - X_u32)\n\
                    j L3F_%=                            # jump to the end \n\
            L2F_%=:                                     # saturated uint subtraction \n\
                    subs.u %0, %1, %2                   # X_u32 - Y_s32 \n\
            L3F_%=:                                      \n\
                    sat.hu %0                           # limit to uint16 \n\
                " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint16) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_U32U32_U16_inline
 *
 * absolute difference of uint32 and uint32 saturated to uint16.
 *
 * Calculates the difference between a unsigned 32-bit and a unsigned 32-bit variable to a unsigned 16-bit result.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows (underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint16   abs(X_u32 - Y_u32)         Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_AbsDiff_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if(X_u32 >= Y_u32)
    {
        res_u32 = ((uint32) (X_u32 - Y_u32));
    }
    else
    {
        res_u32 = ((uint32) (Y_u32 - X_u32));
    }

    /* limitation */
    res_u32 = (res_u32 > MAXUINT16) ? (MAXUINT16) : (res_u32);

    return ((uint16) res_u32);

#else

    uint32 res_u32;

    /* Note: This Asm Code is generated (Uz = |Xx - Xx|) (Both arguments have the same type) */
    /* temporary variable used */
    asm volatile("    \n\
             subs.u %[res_u32], %[X_u32], %[Y_u32]  # Perform a substraction                  \n\
             jnz %[res_u32], L1F_%=                 # Second argument is smaller: keep result \n\
             sub %[res_u32], %[Y_u32], %[X_u32]     # Second argument is bigger: recompute    \n\
        L1F_%=:                                     #                                         \n\
             sat.hu %[res_u32]                      # Saturate on desired type u16            \n\
        "
        : [res_u32]"=&d"(res_u32)
        : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32)
        );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint16) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC DIFFERENCE with 8 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_S32S32_S8_inline
 *
 * absolute difference of sint32 and sint32 saturated to sint8.
 *
 * Calculates the difference between a signed 32-bit and a signed 32-bit variable to a signed 8-bit result.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows (underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint8    abs(X_s32 - Y_s32)         Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_AbsDiff_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint8 res_s8;


    res_s8 = SrvB_Sub_S32S32_S8_inline(X_s32, Y_s32);

    if(res_s8 < 0)
    {
      /* limitation */
       res_s8 = ((res_s8 == MINSINT8) ? MAXSINT8 : (-res_s8));
    }

    return (res_s8);

#else

    sint32 res_s32;


    asm volatile("  absdifs %0,%1,%2                  \n\
                    sat.b   %0,%0                     \n\
                 ":"=d"(res_s32) : "d" (X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint8) res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_S32S32_U8_inline
 *
 * absolute difference of sint32 and sint32 saturated to uint8.
 *
 * Calculates the difference between a signed 32-bit and a signed 32-bit variable to a unsigned 8-bit result.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows (underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint8    abs(X_s32 - Y_s32)         Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_AbsDiff_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if(X_s32 >= Y_s32)
    {
        res_u32 = ((uint32) (X_s32 - Y_s32));
    }
    else
    {
        res_u32 = ((uint32) (Y_s32 - X_s32));
    }

    /* limitation */
    res_u32 = (res_u32 > MAXUINT8) ? (MAXUINT8) : (res_u32);

    return ((uint8) res_u32);

#else

    uint32 res_u32;

    /* Note: This Asm Code is generated (Uz = |Xx - Xx|) (Both arguments have the same type) */
    /* temporary variable used */
    asm volatile("    \n\
             absdif %[res_u32], %[X_s32], %[Y_s32] # Perform the absolute difference \n\
             sat.bu %[res_u32]                     # Saturate on desired type u8 \n\
        "
        : [res_u32]"=d"(res_u32)
        : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32)
        );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint8) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_U32S32_U8_inline
 *
 * absolute difference of uint32 and sint32 saturated to uint8.
 *
 * Calculates the difference between a unsigned 32-bit and a signed 32-bit variable to a unsigned 8-bit result.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows (underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint8    abs(X_u32 - Y_s32)         Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_AbsDiff_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)
    uint8 res_u8;

    if( (Y_s32 <= 0) || ((Y_s32 > 0) && (X_u32 >= ((uint32) Y_s32) )) )
    {
        res_u8 = SrvB_Sub_U32S32_U8_inline(X_u32, Y_s32);
    }
    else
    {
        res_u8 = SrvB_Sub_S32U32_U8_inline(Y_s32, X_u32);
    }

    return (res_u8);

#else

    uint32 res_u32;

    asm volatile("  jge  %2, 0, L1F_%=                  # if Y_s32 >= 0: limited unsigned subtraction \n\
                    abs  %0, %2                         # else abs(Y_s32) \n\
                    adds.u  %0, %0, %1                  # and x_u32 + abs(Y_s32) \n\
                    j L3F_%=                            # jump to the end\n\
            L1F_%=:                                     # saturated unint subtraction \n\
                    jlt.u   %2, %1, L2F_%=              # if X_u32 > Y_s32, (X_u32 - Y_s32) \n\
                    subs.u %0, %2, %1                   # else X_u32 < Y_s32, (Y_s32 - X_u32)\n\
                    j L3F_%=                            # jump to the end \n\
            L2F_%=:                                     # saturated uint subtraction \n\
                    subs.u %0, %1, %2                   # X_u32 - Y_s32 \n\
            L3F_%=:                                      \n\
                    sat.bu %0                           # limit to uint8 \n\
                " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint8) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_AbsDiff_U32U32_U8_inline
 *
 * absolute difference of uint32 and uint32 saturated to uint8.
 *
 * Calculates the difference between a unsigned 32-bit and a unsigned 32-bit variable to a unsigned 8-bit result.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows (underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint8    abs(X_u32 - Y_u32)         Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_AbsDiff_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if (X_u32 >= Y_u32)
    {
        res_u32 = ((uint32) (X_u32 - Y_u32));
    }
    else
    {
        res_u32 = ((uint32) (Y_u32 - X_u32));
    }

    /* limitation */
    res_u32 = (res_u32 > MAXUINT8) ? (MAXUINT8) : (res_u32);

    return ((uint8) res_u32);

#else

    uint32 res_u32;

    asm volatile("    \n\
             subs.u %[res_u32], %[X_u32], %[Y_u32]    # Perform a substraction                  \n\
             jnz %[res_u32], L1F_%=                   # Second argument is smaller: keep result \n\
             sub %[res_u32], %[Y_u32], %[X_u32]       # Second argument is bigger: recompute    \n\
      L1F_%=:                                         #                                         \n\
             sat.bu %[res_u32]                        # Saturate on desired type u8             \n\
        "
        : [res_u32]"=&d"(res_u32)
        : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32)
        );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint8) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/* SRVB_SUB_INL_H */
#endif

/*
 ***********************************************************************************************************************
 * EOF
 ***********************************************************************************************************************
 */
