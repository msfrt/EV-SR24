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
 * $Filename__:srvb_add_inl.h$ 
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
 * $Name______:srvb_add_inl$ 
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

#ifndef _SRVB_ADD_INL_H
#define _SRVB_ADD_INL_H

/**
 ***********************************************************************************************************************
 * \file srvb_add_inl.h
 * \brief Service Library Header (Inline) with ARITHMETIC ADDITION
 *
 * Implementation of ARITHMETIC ADDITION with 32-Bit inputs and 32- ,16- and 8-Bit output.
 * The output is satured to prevent overflows and underflows.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 * List of Functions
 *
 * SrvB_Add_S32S32_S32_inline,   SrvB_Add_U32S32_S32_inline,   SrvB_Add_U32U32_S32_inline
 * SrvB_Add_S32S32_U32_inline,   SrvB_Add_U32S32_U32_inline,   SrvB_Add_U32U32_U32_inline
 *
 * SrvB_Add_S32S32_S16_inline,   SrvB_Add_U32S32_S16_inline,   SrvB_Add_U32U32_S16_inline
 * SrvB_Add_S32S32_U16_inline,   SrvB_Add_U32S32_U16_inline,   SrvB_Add_U32U32_U16_inline
 *
 * SrvB_Add_S32S32_S8_inline,    SrvB_Add_U32S32_S8_inline,    SrvB_Add_U32U32_S8_inline
 * SrvB_Add_S32S32_U8_inline,    SrvB_Add_U32S32_U8_inline,    SrvB_Add_U32U32_U8_inline
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * \moduledescription
 *    Inline definition of 32-Bit addition with saturation
 * \scope             [API]
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC ADDITION with 32 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_S32_inline
 *
 * sint32 sint32 addition with sint32 saturation.
 *
 * Add two signed 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed 32-bit variable
 * \return  sint32   (X_s32 + Y_s32)            Result,    signed 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Add_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    /* both operands positive */
    if( (X_s32 >= 0) && (Y_s32 >= 0) )
    {
        /* overflow */
        if( Y_s32 > (MAXSINT32 - X_s32) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = (X_s32 + Y_s32);
        }
    }
    /* both operands negative */
    else if( (X_s32 < 0) && (Y_s32 < 0) )
    {
        /* underflow */
        if( Y_s32 < (MINSINT32 - X_s32) )
        {
            res_s32 = MINSINT32;
        }
        /* regular */
        else
        {
            res_s32 = (X_s32 + Y_s32);
        }
    }
    /* one operand negative */
    else
    {
        /* regular */
        res_s32 = (X_s32 + Y_s32);
    }

    return (res_s32);

#else
    sint32 res_s32;

    asm volatile(" adds %0, %1, %2    \n\
                 ":"=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                /*        0           1       2   */

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_S32_inline
 *
 * uint32 sint32 addition with sint32 saturation.
 *
 * Add a unsigned 32-bit variable to a signed 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint32   (X_u32 + Y_s32)            Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Add_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;

    /* operand 2 positive */
    if(Y_s32>=0)
    {
        /* overflow */
        if( X_u32 > ((uint32) (MAXSINT32 - Y_s32)) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = ( ((sint32) X_u32) + Y_s32);
        }
    }
    /* operand 2 negative */
    else
    {
        /* checking range */
        if(X_u32>MAXSINT32)
        {
            /* normal case */
            if(Y_s32 > MINSINT32)
            {
                /* overflow */
                if( (X_u32 - ((uint32)MAXSINT32)) > ((uint32) (-Y_s32)) )
                {
                    res_s32 = MAXSINT32;
                }
                /* regular */
                else
                {
                    res_s32 = ( (sint32) (X_u32-(uint32)(-Y_s32)) );
                }
            }
            /* special case */
            else
            {
                res_s32 = ((sint32) (X_u32 - (((uint32) MAXSINT32) + 1)) );
            }

        }
        /* regular */
        else
        {

            res_s32 = ((sint32) X_u32 + Y_s32);
        }
    }

    return (res_s32);

#else

sint32 res_s32;
sint32 tmp_s32;

    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, L2F_%=               # if X_u32 <= MAXSINT32: jump to calculate the result \n\
                    jge  %3, 0, L1F_%=                  # else, if Y_s32 is positive: MAXSINT32 \n\
                    add %0, %2, %3                      # else: calculate with unlimited unsigned addition \n\
                    jlt  %0, 0, L1F_%=                  # if res_s32 > MAXSINT32: MAXSINT32 \n\
                    j L3F_%=                            # jump to the end\n\
                L1F_%=:                                 # limitation to MAXSINT32 \n\
                    addi  %0, %1, -1                    # res_s32 = (MAXSINT32 + 1) -1 \n\
                    j L3F_%=                            # jump to the end\n\
                L2F_%=:                                 # saturated sint addition \n\
                    adds %0, %2, %3                     # X_u32 + Y_s32 \n\
                L3F_%=:                                 \n\
                    " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_S32_inline
 *
 * uint32 uint32 addition with sint32 saturation.
 *
 * Add a unsigned 32-bit variable to a unsigned 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint32   (X_u32 + Y_u32)            Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Add_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* overflow */
    if ( Y_u32 > (MAXUINT32 - X_u32) )
    {
        res_u32 = MAXUINT32;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 + Y_u32);
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint) MAXSINT32) ) ? ((uint) MAXSINT32) : (res_u32);

    return ((sint32) res_u32);

#else

    sint32 res_s32;

    asm volatile(" adds.u   %[res_s32], %[X_u32], %[Y_u32]                                \n\
                   jz.t     %[res_s32], 31, L1F_%=        # test if the upper bit is set  \n\
                                                             # it is set: overflow           \n\
                   mov      %[res_s32], -1                # load 0xFFFF FFFF              \n\
                   sh       %[res_s32], -1                # res contains 0x7FFF FFFF      \n\
                L1F_%=:                                                                      \n\
                "
                 : [res_s32]"=d"(res_s32)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_U32_inline
 *
 * sint32 sint32 addition with uint32 saturation.
 *
 * Add a signed 32-bit variable to a signed 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint32   (X_s32 + Y_s32)            Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Add_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;
    sint32 res_s32;


    /* both operands negative */
    if( (X_s32 < 0) && (Y_s32 < 0) )
    {
        res_u32 = MINUINT32;
    }
    /* both operands positive */
    else if(  (X_s32 >= 0) && (Y_s32 >= 0) )
    {
        res_u32 = ( ((uint32) X_s32) + ((uint32) Y_s32) );
    }
    /* one operand negative */
    else
    {
        res_s32 = X_s32 + Y_s32;

        /* limitation */
        res_u32 = ( res_s32 < ((sint32) MINUINT32) ) ? (MINUINT32) : ((uint32) res_s32);
    }

    return (res_u32);

#else

    uint32 res_u32;
    uint32 test;


    asm volatile(" or       %[test] , %[X_s32], %[Y_s32]           # used for the test                 \n\
                   add      %[res_u32]  , %[X_s32], %[Y_s32]   # addition of positive values,      \n\
                                                               # no overflow possible              \n\
                   jz.t     %[test] , 31 , L1F_%=              # exit if no parameter is negative  \n\
                                                               # else discard the result           \n\
                   adds     %[res_u32]  , %[X_s32], %[Y_s32]   # saturated signed addition         \n\
                   max      %[res_u32]  , %[res_u32]  , 0      # keep positive part                \n\
                L1F_%=:                                                                                \n\
                 "
                 : [res_u32]"=&d"(res_u32), [test]"=&d"(test)
                 : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return res_u32;

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_U32_inline
 *
 * uint32 sint32 addition with uint32 saturation.
 *
 * Add a unsigned 32-bit variable to a signed 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint32   (X_u32 + Y_s32)            Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Add_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* both operands positive */
    if(Y_s32>=0)
    {
        /* overflow */
        if( ((uint32)Y_s32) > (MAXUINT32 - X_u32) )
        {
            res_u32 = MAXUINT32;
        }
        /* regular */
        else
        {
            res_u32 = ( X_u32 + ((uint32)Y_s32) );
        }
    }
    /* second operand negative */
    else
    {
        /* regular */
        if( (Y_s32 > MINSINT32) && ( X_u32 > ((uint32)(-Y_s32)) ) )
        {
            res_u32 = ( X_u32-(uint32)(-Y_s32) );
        }
        /* regular special case */
        else if( (Y_s32 == MINSINT32) && (X_u32 > (((uint32) MAXSINT32)+1)) )
        {
            res_u32 = ( X_u32-(((uint32)MAXSINT32)+1) );
        }
        /* underflow */
        else
        {
            res_u32 = MINUINT32;
        }
    }

   return (res_u32);

#else

    uint32 res_u32;


    asm volatile("  jge  %2, 0, L1F_%=                  # if Y_s32 is positive: limited Addition \n\
                    add %0, %1, %2                      # unlimited unsigned addition\n\
                    jlt.u  %0, %1, L2F_%=               # Y < 0 and |y| > x, res_u32 > X_u32, limit \n\
                    mov  %0, 0x0000                     # else: limitation to res_s32 = 0 \n\
                    j L2F_%=                            # jump to the end\n\
                L1F_%=:                                 # saturated unsint addition \n\
                    adds.u %0, %1, %2                   # X_u32 + Y_s32 \n\
                L2F_%=:                                  \n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );


    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_U32_inline
 *
 * uint32 uint32 addition with uint32 saturation.
 *
 * Add a unsigned 32-bit variable to a unsigned 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint32   (X_u32 + Y_u32)            Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Add_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* overflow */
    if (Y_u32 > (MAXUINT32 - X_u32))
    {
        res_u32 = MAXUINT32;
    }
    /* regular */
    else
    {
       res_u32 = (X_u32 + Y_u32);
    }

    return (res_u32);

#else

    uint32 res_u32;

    asm volatile(" adds.u   %[res_u32], %[X_u32], %[Y_u32]                          \n\
                 "
                 : [res_u32]"=d"(res_u32)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC ADDITION with 16 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_S16_inline
 *
 * sint16 sint32 addition with sint16 saturation.
 *
 * Add a signed 32-bit variable to a signed 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint16   (X_s32 + Y_s32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Add_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    /* both operands positive */
    if( (X_s32 >= 0) && (Y_s32 >= 0) )
    {
        /* overflow */
        if( Y_s32 > (MAXSINT32 - X_s32) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = (X_s32 + Y_s32);
        }

       /* limitation */
       res_s32 = ( res_s32 > MAXSINT16 ) ? (MAXSINT16) : (res_s32);
    }
    /* both operands negative */
    else if( (X_s32 < 0) && (Y_s32 < 0) )
    {
        /* underflow */
        if( Y_s32 < (MINSINT32 - X_s32) )
        {
            res_s32 = MINSINT32;
        }
        /* regular */
        else
        {
            res_s32 = (X_s32 + Y_s32);
        }

        /* limitation */
        res_s32 = ( res_s32 < MINSINT16 ) ? (MINSINT16) : (res_s32);
    }
    /* one operand negative */
    else
    {
        /* regular */
        res_s32 = (X_s32 + Y_s32);

        /* limitation */
        res_s32 = ( res_s32 < MINSINT16 ) ? (MINSINT16) : (res_s32);
        res_s32 = ( res_s32 > MAXSINT16 ) ? (MAXSINT16) : (res_s32);
    }

    return ((sint16) res_s32);

#else

    sint32 res_s32;

    /* the __SATH instruction is a intrinsic define of the compiler
       It is available from hitec version 3.4.2.
       It is the equivalent for a sat.h instruction but within control of the compiler.
    */
    #ifdef __SATH
    asm volatile(" adds %0, %1, %2    \n\
                 ":"=d"(res_s32): "d"(X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATH(res_s32);
                 /*         0       1        2      */
    /* SRVB_IMPL_ASM_ENABLE == 0 */
    #else
    asm volatile(" adds %0, %1, %2    \n\
                   sat.h %0,%0        \n\
                 ":"=d"(res_s32): "d"(X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16)res_s32);

    #endif

#endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_S16_inline
 *
 * uint32 sint32 addition with sint16 saturation.
 *
 * Add a unsigned 32-bit variable to a signed 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint16   (X_u32 + Y_s32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Add_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;

    /* operand 2 positive */
    if(Y_s32>=0)
    {
        /* overflow */
        if( X_u32 > ((uint32) (MAXSINT32 - Y_s32)) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = ( ((sint32) X_u32) + Y_s32);
        }

        /* limitation */
        res_s32 = ( res_s32 > MAXSINT16 ) ? (MAXSINT16) : (res_s32);
    }
    /* operand 2 negative */
    else
    {
        if(X_u32>MAXSINT32)
        {
            /* overflow */
            if( (X_u32-((uint32) MAXSINT32)) > ((uint32) (-Y_s32)) )
            {
                res_s32 = MAXSINT32;
            }
            /* regular */
            else
            {
                res_s32 = ( (sint32) (X_u32-(uint32)(-Y_s32)) );
            }
        }
        else
        {
           /* regular */
            res_s32 = ((sint32) X_u32 + Y_s32);
        }

        /* limitation */
        res_s32 = ( res_s32 < MINSINT16 ) ? (MINSINT16) : (res_s32);
        res_s32 = ( res_s32 > MAXSINT16 ) ? (MAXSINT16) : (res_s32);
    }

    return ((sint16) res_s32);


#else
sint32 res_s32;
sint32 tmp_s32;

    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, L2F_%=               # if X_u32 <= MAXSINT32: jump to calculate the result \n\
                    jge  %3, 0, L1F_%=                  # else, if Y_s32 is positive: MAXSINT16 \n\
                    add %0, %2, %3                      # else: calculate with unlimited unsigned addition \n\
                    jlt  %0, 0, L1F_%=                  # if res_s32 > MAXSINT32: MAXSINT16 \n\
                    j L3F_%=                            # jump to the end\n\
                L1F_%=:                                 # limitation to MAXSINT16 \n\
                    mov  %0, 0x7FFF                     # res_s32 = MAXSINT16 \n\
                    j L3F_%=                            # jump to the end\n\
                L2F_%=:                                 # saturated sint addition \n\
                    adds %0, %2, %3                     # X_u32 + Y_s32 \n\
                L3F_%=:                                 \n\
                    sat.h %0                            # limit to sint16 \n\
                        " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint16) res_s32);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_S16_inline
 *
 * uint32 uint32 addition with sint16 saturation.
 *
 * Add a unsigned 32-bit variable to a unsigned 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint16   (X_u32 + Y_u32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Add_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* overflow */
    if ( Y_u32 > (MAXUINT32 - X_u32) )
    {
        res_u32 = MAXUINT32;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 + Y_u32);
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint) MAXSINT16) ) ? ((uint) MAXSINT16) : (res_u32);

    return ((sint16) res_u32);

#else
    sint16 res_s16;

    asm volatile(" adds.u   %[res_s16], %[X_u32], %[Y_u32]                        \n\
                   sat.hu   %[res_s16]                      # limit to 65535      \n\
                   sat.h    %[res_s16]                      # limit to 32767      \n\
                 "
                 : [res_s16]"=d"(res_s16)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s16);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_U16_inline
 *
 * sint32 sint32 addition with uint16 saturation.
 *
 * Add a signed 32-bit variable to a signed 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint16   (X_s32 + Y_s32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Add_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;
    sint32 res_s32;


    /* both operands negative */
    if( (X_s32 < 0) && (Y_s32 < 0) )
    {
        /* limitation */
        res_u32 = MINUINT16;
    }
    /* both operands positive */
    else if(  (X_s32 >= 0) && (Y_s32 >= 0) )
    {
        res_u32 = ( ((uint32) X_s32) + ((uint32) Y_s32) );

       /* limitation */
       res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? ((uint32) MAXUINT16) : (res_u32);
    }
    /* one operand negative */
    else
    {
        res_s32 = X_s32 + Y_s32;

       /* limitation */
       res_u32 = ( res_s32 < ((sint32) MINUINT16) ) ? ((uint32) MINUINT16) : ((uint32) res_s32);
       res_u32 = ( res_s32 > ((sint32) MAXUINT16) ) ? ((uint32) MAXUINT16) : (res_u32);
    }

    return ((uint16) res_u32);

#else

    uint16 res_u16;

    asm volatile(" adds     %[res_u16], %[X_s32], %[Y_s32]           \n\
                   max      %[res_u16], %[res_u16]  , 0           \n\
                   sat.hu   %[res_u16]                               \n\
                 "
                 : [res_u16]"=d"(res_u16)
                 : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u16);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_U16_inline
 *
 * uint32 sint32 addition with uint16 saturation.
 *
 * Add a unsigned 32-bit variable to a signed 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint16   (X_s32 + Y_s32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Add_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* both operands positive */
    if(Y_s32>=0)
    {
        /* overflow */
        if( ((uint32)Y_s32) > (MAXUINT32 - X_u32) )
        {
            res_u32 = MAXUINT32;
        }
        /* regular */
        else
        {
            res_u32 = ( X_u32 + ((uint32)Y_s32) );
        }
    }
    /* second operand negative */
    else
    {
        /* regular */
        if( (Y_s32 > MINSINT32) && ( X_u32 > ((uint32)(-Y_s32)) ) )
        {
            res_u32 = ( X_u32-(uint32)(-Y_s32) );
        }
        /* regular special case */
        else if( (Y_s32 == MINSINT32) && (X_u32 > (((uint32) MAXSINT32)+1)) )
        {
            res_u32 = ( X_u32-(((uint32)MAXSINT32)+1) );
        }
        /* underflow */
        else
        {
            res_u32 = MINUINT32;
        }
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? ((uint32) MAXUINT16) : (res_u32);

   return ((uint16) res_u32);
#else

    uint32 res_u32;


    asm volatile("  jge  %2, 0, L1F_%=                  # if Y_s32 is positive: limited Addition \n\
                    add %0, %1, %2                      # unlimited unsigned addition\n\
                    jlt.u  %0, %1, L2F_%=               # Y < 0 and |y| > x, res_u32 > X_u32, limit \n\
                    mov  %0, 0x0000                     # else: limitation to res_s32 = 0 \n\
                    j L2F_%=                            # jump to the end\n\
                L1F_%=:                                 # saturated unsint addition \n\
                    adds.u %0, %1, %2                   # X_u32 + Y_s32 \n\
                L2F_%=:                                 # limitation required \n\
                    sat.hu %0                           # limit to 16 bit uint variable\n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );


    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint16) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_U16_inline
 *
 * uint32 uint32 addition with uint16 saturation.
 *
 * Add a unsigned 32-bit variable to a unsigned 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint16   (X_s32 + Y_s32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Add_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* overflow */
    if (Y_u32 > (MAXUINT32 - X_u32))
    {
        res_u32 = MAXUINT32;
    }
    /* regular */
    else
    {
       res_u32 = (X_u32 + Y_u32);
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? ((uint32) MAXUINT16) : (res_u32);

    return ((uint16) res_u32);

#else

    uint16 res_u16;

    asm volatile(" adds.u   %[res_u16], %[X_u32], %[Y_u32]    \n\
                   sat.hu   %[res_u16]                        \n\
                 "
                 : [res_u16]"=d"(res_u16)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u16);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC ADDITION with 8 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_S8_inline
 *
 * sint32 sint32 addition with uint8 saturation.
 *
 * Add a signed 32-bit variable to a signed 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint8    (X_s32 + Y_s32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Add_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    /* both operands positive */
    if( (X_s32 >= 0) && (Y_s32 >= 0) )
    {
        /* overflow */
        if( Y_s32 > (MAXSINT32 - X_s32) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = (X_s32 + Y_s32);
        }

       /* limitation */
       res_s32 = ( res_s32 > MAXSINT8 ) ? (MAXSINT8) : (res_s32);
    }
    /* both operands negative */
    else if( (X_s32 < 0) && (Y_s32 < 0) )
    {
        /* underflow */
        if( Y_s32 < (MINSINT32 - X_s32) )
        {
            res_s32 = MINSINT32;
        }
        /* regular */
        else
        {
            res_s32 = (X_s32 + Y_s32);
        }

        /* limitation */
        res_s32 = ( res_s32 < MINSINT8 ) ? (MINSINT8) : (res_s32);
    }
    /* one operand negative */
    else
    {
        /* regular */
        res_s32 = (X_s32 + Y_s32);

        /* limitation */
        res_s32 = ( res_s32 < MINSINT8 ) ? (MINSINT8) : (res_s32);
        res_s32 = ( res_s32 > MAXSINT8 ) ? (MAXSINT8) : (res_s32);
    }

    return ((sint8) res_s32);

#else

    sint8 res_s8;

    asm volatile(" adds     %[res_s8], %[X_s32], %[Y_s32]    \n\
                   sat.b    %[res_s8]                        \n\
                 "
                 : [res_s8]"=d"(res_s8)
                 : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s8);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_S8_inline
 *
 * uint32 sint32 addition with sint8 saturation.
 *
 * Add a unsigned 32-bit variable to a signed 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint8    (X_u32 + Y_s32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Add_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;

    /* operand 2 positive */
    if(Y_s32>=0)
    {
        /* overflow */
        if( X_u32 > ((uint32) (MAXSINT32 - Y_s32)) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = ( ((sint32) X_u32) + Y_s32);
        }

        /* limitation */
        res_s32 = ( res_s32 > MAXSINT8 ) ? (MAXSINT8) : (res_s32);
    }
    /* operand 2 negative */
    else
    {
        if(X_u32>MAXSINT32)
        {
            /* overflow */
            if( (X_u32- ((uint32) MAXSINT32)) > ((uint32) (-Y_s32)) )
            {
                res_s32 = MAXSINT32;
            }
            /* regular */
            else
            {
                res_s32 = ( (sint32) (X_u32-((uint32)(-Y_s32))) );
            }
        }
        else
        {
           /* regular */
            res_s32 = ((sint32) X_u32 + Y_s32);
        }

        /* limitation */
        res_s32 = ( res_s32 < MINSINT8 ) ? (MINSINT8) : (res_s32);
        res_s32 = ( res_s32 > MAXSINT8 ) ? (MAXSINT8) : (res_s32);
    }

    return ((sint8) res_s32);

#else

sint32 res_s32;
sint32 tmp_s32;


    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, L2F_%=               # if X_u32 <= MAXSINT32: jump to calculate the result \n\
                    jge  %3, 0, L1F_%=                  # else, if Y_s32 is positive: MAXSINT8 \n\
                    add %0, %2, %3                      # else: calculate with unlimited unsigned addition \n\
                    jlt  %0, 0, L1F_%=                  # if res_s32 > MAXSINT32: MAXSINT8 \n\
                    j L3F_%=                            # jump to the end\n\
                L1F_%=:                                 # limitation to MAXSINT8 \n\
                    mov  %0, 0x007F                     # res_s32 = MAXSINT8 \n\
                    j L3F_%=                            # jump to the end\n\
                L2F_%=:                                 # saturated sint addition \n\
                    adds %0, %2, %3                     # X_u32 + Y_s32 \n\
                L3F_%=:                                 \n\
                    sat.b %0                            # limit to sint8 \n\
                    " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint8) res_s32);

#endif  /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_S8_inline
 *
 * uint32 uint32 addition with sint8 saturation.
 *
 * Add a unsigned 32-bit variable to a unsigned 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint8    (X_u32 + Y_u32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Add_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* overflow */
    if ( Y_u32 > (MAXUINT32 - X_u32) )
    {
        res_u32 = MAXUINT32;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 + Y_u32);
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint) MAXSINT8) ) ? ((uint) MAXSINT8) : (res_u32);

    return ((sint8) res_u32);

#else

    sint8 res_s8;

    asm volatile(" adds.u   %[res_s8], %[X_u32], %[Y_u32]                       \n\
                   min.u    %[res_s8], %[res_s8], 127         #limit to 127  \n\
                 "
                 : [res_s8]"=d"(res_s8)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s8);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_U8_inline
 *
 * sint32 sint32 addition with uint8 saturation.
 *
 * Add a signed 32-bit variable to a signed 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint8    (X_s32 + Y_s32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Add_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;
    sint32 res_s32;


    /* both operands negative */
    if( (X_s32 < 0) && (Y_s32 < 0) )
    {
        /* limitation */
        res_u32 = MINUINT8;
    }
    /* both operands positive */
    else if(  (X_s32 >= 0) && (Y_s32 >= 0) )
    {
        res_u32 = ( ((uint32) X_s32) + ((uint32) Y_s32) );

       /* limitation */
       res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? ((uint32) MAXUINT8) : (res_u32);
    }
    /* one operand negative */
    else
    {
        res_s32 = X_s32 + Y_s32;

       /* limitation */
       res_u32 = ( res_s32 < ((sint32) MINUINT8) ) ? ((uint32) MINUINT8) : ((uint32) res_s32);
       res_u32 = ( res_s32 > ((sint32) MAXUINT8) ) ? ((uint32) MAXUINT8) : (res_u32);
    }

    return ((uint8) res_u32);

#else

    uint8 res_u8;

    asm volatile(" adds     %[res_u8], %[X_s32], %[Y_s32]          \n\
                   max      %[res_u8], %[res_u8]  , 0           \n\
                   sat.bu   %[res_u8]                              \n\
                 "
                 : [res_u8]"=d"(res_u8)
                 : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u8);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_U8_inline
 *
 * uint32 sint32 addition with uint8 saturation.
 *
 * Add a unsigned 32-bit variable to a signed 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint8    (X_s32 + Y_s32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Add_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* both operands positive */
    if(Y_s32>=0)
    {
        /* overflow */
        if( ((uint32)Y_s32) > (MAXUINT32 - X_u32) )
        {
            res_u32 = MAXUINT8;
        }
        /* regular */
        else
        {
            res_u32 = ( X_u32 + ((uint32)Y_s32) );
        }
    }
    /* second operand negative */
    else
    {
        /* regular */
        if( (Y_s32 > MINSINT32) && ( X_u32 > ((uint32)(-Y_s32)) ) )
        {
            res_u32 = ( X_u32-(uint32)(-Y_s32) );
        }
        /* regular special case */
        else if( (Y_s32 == MINSINT32) && (X_u32 > (((uint32) MAXSINT32)+1)) )
        {
            res_u32 = ( X_u32-(((uint32)MAXSINT32)+1) );
        }
        /* underflow */
        else
        {
            res_u32 = MINUINT32;
        }
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? ((uint32) MAXUINT8) : (res_u32);

   return ((uint8) res_u32);

 #else

    uint32 res_u32;

    asm volatile("  jge  %2, 0, L1F_%=                  # if Y_s32 is positive: limited Addition \n\
                    add %0, %1, %2                      # unlimited unsigned addition\n\
                    jlt.u  %0, %1, L2F_%=               # Y < 0 and |y| > x, res_u32 > X_u32, limit \n\
                    mov  %0, 0x0000                     # else: limitation to res_s32 = 0 \n\
                    j L2F_%=                            # jump to the end\n\
                L1F_%=:                                 # saturated unsint addition \n\
                    adds.u %0, %1, %2                   # X_u32 + Y_s32 \n\
                L2F_%=:                                 # limitation required \n\
                    sat.bu %0                           # limit to a 8 bit uint variable\n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint8) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_U8_inline
 *
 * uint32 uint32 addition with uint8 saturation.
 *
 * Add a unsigned 32-bit variable to a unsigned 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint8    (X_s32 + Y_s32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Add_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* overflow */
    if (Y_u32 > (MAXUINT32 - X_u32))
    {
        res_u32 = MAXUINT32;
    }
    /* regular */
    else
    {
       res_u32 = (X_u32 + Y_u32);
    }

    /* limitation */
    res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? ((uint32) MAXUINT8) : (res_u32);

    return ((uint8) res_u32);

#else

    uint8 res_u8;

    asm volatile(" adds.u   %[res_u8], %[X_u32], %[Y_u32]    \n\
                   sat.bu   %[res_u8]                        \n\
                 "
                 : [res_u8]"=d"(res_u8)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u8);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}

/* SRVB_ADD_INL_H */
#endif
