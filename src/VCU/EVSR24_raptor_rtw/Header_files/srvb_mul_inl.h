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
 * $Filename__:srvb_mul_inl.h$ 
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
 * $Name______:srvb_mul_inl$ 
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
 * 1.14.4; 0     05.08.2011 SW84FE
 *   Bugfix
 * 
 * 1.14.1; 0     16.04.2010 VKA2FE
 *   Bugfix delivery, derived from B_SRVB.14.0.1
 * 
 * 1.14.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVB.14.0.0
 * 
 * 1.13.0; 0     09.02.2010 VKA2FE
 *   Derived from B_SRVB.13.0.0
 * 
 * 1.11.0; 0     03.07.2009 VKA2FE
 *   Delivery B_SRVB.11.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVB_MUL_INL_H
#define _SRVB_MUL_INL_H

/*
 ***********************************************************************************************************************
 *
 * List of Functions
 *
 * SrvB_Mul_S32S32_U8,          SrvB_Mul_U32S32_U8,          SrvB_Mul_U32U32_U8
 * SrvB_Mul_S32S32_S8,          SrvB_Mul_U32S32_S8,          SrvB_Mul_U32U32_S8
 * SrvB_Mul_S32S32_U16,         SrvB_Mul_U32S32_U16,         SrvB_Mul_U32U32_U16
 * SrvB_Mul_S32S32_S16,         SrvB_Mul_U32S32_S16,         SrvB_Mul_U32U32_S16
 * SrvB_Mul_S32S32_U32,         SrvB_Mul_U32S32_U32,         SrvB_Mul_U32U32_U32
 * SrvB_Mul_S32S32_S32,         SrvB_Mul_U32S32_S32,         SrvB_Mul_U32U32_S32
 *
 * SrvB_MulShRight_S32S32_U8,   SrvB_MulShRight_U32S32_U8,   SrvB_MulShRight_U32U32_U8
 * SrvB_MulShRight_S32S32_S8,   SrvB_MulShRight_U32S32_S8,   SrvB_MulShRight_U32U32_S8
 * SrvB_MulShRight_S32S32_U16,  SrvB_MulShRight_U32S32_U16,  SrvB_MulShRight_U32U32_U16
 * SrvB_MulShRight_S32S32_S16,  SrvB_MulShRight_U32S32_S16,  SrvB_MulShRight_U32U32_S16
 * SrvB_MulShRight_S32S32_U32,  SrvB_MulShRight_U32S32_U32,  SrvB_MulShRight_U32U32_U32
 * SrvB_MulShRight_S32S32_S32,  SrvB_MulShRight_U32S32_S32,  SrvB_MulShRight_U32U32_S32
 *
 *
 * SrvB_MulAdd_S32S32S32_S16    SrvB_MulAdd_U32U32U32_U16
 * SrvB_MulAdd_S32S32S32_S32    SrvB_MulAdd_U32U32U32_U32
  *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 *
 *
 * MULTIPLICATION FUNCTIONS
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_U8
 *
 * \brief Multiplies 2 sint32 variables and limits the result to an uint8 variable
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \return   uint8
 * \retval   (X_s32 * Y_s32) saturated to uint8
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Mul_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint32 tmp1_u32;
    uint32 tmp2_u32;

    /* unequal signs */
    if (((X_s32 >= 0L) && (Y_s32 <= 0L)) || ((X_s32 <= 0L) && (Y_s32 >= 0L)))
    {
        tmp1_u32 = 0UL;
    }
    /* equal signs and bot operands = 0 */
    else
    {
        tmp1_u32 = (uint32)X_s32;
        tmp2_u32 = (uint32)Y_s32;

        /* both operands are negative, calculate the  magnitude */
        if(X_s32 < 0L)
        {
            tmp1_u32 = ((uint32)(0xFFFFFFFF ^ tmp1_u32)) + 1UL;
            tmp2_u32 = ((uint32)(0xFFFFFFFF ^ tmp2_u32)) + 1UL;
        }

         /* calculate the result */
        if(tmp1_u32 <= (((uint32) MAXUINT8) / tmp2_u32))
        {
            tmp1_u32 *= tmp2_u32;
        }
        else
        {
            tmp1_u32 = (uint32) MAXUINT8;
        }
    }
    return ((uint8) tmp1_u32);

#else

    sint32 res_s32;


    /* the __SATBU instruction is a intrinsic define of the compiler
    It is available from hitec version 3.4.2.
    It is the equivalent for a sat.bu instruction but within control of the compiler.
    */
#ifdef __SATBU
    asm volatile("    muls %0, %1, %2                                           \n\
                      max  %0, %0, 0                                            \n\
                 "    :"=&d" (res_s32) : "d"(X_s32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATBU(res_s32);

#else
    asm volatile("    muls %0, %1, %2                                           \n\
                      max  %0, %0, 0                                            \n\
                      sat.bu   %0, %0                                           \n\
                 "    :"=&d" (res_s32) : "d"(X_s32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint8) res_s32);

#endif

#endif/* SRVB_IMPL_ASM_ENABLE==0 */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_U8
 *
 * \brief Multiplies an uint32 and a sint32 variable and limits the result to an uint8 variable
 *
 * \param    uint32 X_u32
 * \param    sint32 Y_s32
 * \return   uint8
 * \retval   (X_u32 * Y_s32) saturated to uint8
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Mul_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint32 res_u32;


    if ( (Y_s32 <= 0L) || (X_u32 == 0UL) )
    {
        res_u32 = 0UL;
    }
    else
    {
        if ((((uint32) MAXUINT8) / ((uint32)Y_s32)) >= X_u32)
        {
            res_u32 = X_u32 * ((uint32) Y_s32);
        }
        else
        {
            res_u32 = (uint32) MAXUINT8;
        }
    }

    return ((uint8) res_u32);

#else

    uint32 res_u32;


    asm volatile("  jge       %[Y_s32], 0, L1F_%=                 # jump if x_s32 is positive         \n\
                    mov       %[res_u32], 0                       # LIMIT: res_u32 = 0                \n\
                    j          L2F_%=                             # jump to the end                   \n\
             L1F_%=:                                                                                  \n\
                    muls.u    %[res_u32], %[X_u32],%[Y_s32]       # saturated multiplication          \n\
                    sat.bu    %[res_u32], %[res_u32]              # LIMIt: MAXUINT8                   \n\
             L2F_%=:                                              # end                               \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                         : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint8) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_U8
 *
 * \brief Multiplies 2 uint32 variabels and limits the result to an uint8 variable
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \return   uint8
 * \retval    (X_u32 * Y_u32) saturated to uint8
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Mul_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if (Y_u32 == 0ul)
    {
        res_u32 = 0UL;
    }
    else
    {
        res_u32 =  ((uint32)MAXUINT8) / Y_u32;

        if (res_u32 >= X_u32)
        {
            res_u32 = X_u32 * Y_u32;
        }
        else
        {
            res_u32 = (uint32)MAXUINT8;
        }
    }

    return ((uint8)res_u32);

#else

    uint32 res_u32;


    asm volatile(" muls.u   %[res_u32], %[X_u32], %[Y_u32]    # saturated signed multiplication \n\
                   sat.bu   %[res_u32]                        # limit to +255 (unsigned byte)   \n\
                 "
             : [res_u32]"=&d"(res_u32)
                         : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint8) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_S8
 *
 * \brief Multiplies 2 sint32 variables and limits the result to a sint8 variable
 *
 * \param    uint32 X_s32
 * \param    sint32 Y_s32
 * \return   sint8
 * \retval   (X_s32 * Y_s32) saturated to sint8
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Mul_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint8 res_s8;


    /* unequal signs */
    if ( ((Y_s32 < 0L) && (X_s32 > 0L)) || ( (X_s32 < 0L) && (Y_s32 > 0L)) )
    {
        if( X_s32 > 0L)
        {
            if ( X_s32 <= (((sint32)MINSINT8) / Y_s32))
            {
                res_s8 = ((sint8)X_s32) * ((sint8)Y_s32);
            }
            else
            {
                res_s8 = MINSINT8;
            }
        }
        else
        {
            if ( X_s32 >= (((sint32)MINSINT8) / Y_s32) )
            {
                res_s8 = ((sint8)X_s32) * ((sint8)Y_s32);
            }
            else
            {
                res_s8 = MINSINT8;
            }
        }
    }
    /* zero */
    else if ((Y_s32 == 0L) || (X_s32 == 0L))
    {
        res_s8 = 0;
    }
    /* equal signs */
    else
    {
        /*  X_s32 > 0  && Y_s32 > 0 */
        if( X_s32 > 0L)
        {
            if ( X_s32 <= (((sint32)MAXSINT8) / Y_s32))
            {
                res_s8 = ((sint8)X_s32) * ((sint8)Y_s32);
            }
            else
            {
                res_s8 = MAXSINT8;
            }
        }
        /*  X_s32 < 0  && Y_s32 < 0 */
        else
        {
            if ( X_s32 >= ( ((sint32)MAXSINT8) / Y_s32) )
            {
                res_s8 = ((sint8)X_s32) * ((sint8)Y_s32);
            }
            else
            {
                res_s8 = MAXSINT8;
            }
        }
    }

    return (res_s8);

#else

    sint32 res_s32;


    asm volatile("  muls      %0, %1, %2                                       \n\
                    sat.b     %0, %0                                           \n\
                 "  :"=&d" (res_s32) : "d"(X_s32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: Result is written in the asm statement */
    return ((sint8)res_s32);

#endif/* SRVB_IMPL_ASM_ENABLE == 0 */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_S8
 *
 * \brief Multiplies an uint32 and a sint32 variable and limits the result to a sint8 variable
 *
 * \param    uint32 X_u32
 * \param    sint32 Y_s32
 * \return   sint8
 * \retval   (X_s32 * Y_s32) saturated to sint8
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Mul_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint8 res_s8;


    /* Y_s32 >= 0: equal signs */
    if ( Y_s32 > 0L )
    {
        if(X_u32 <= ((uint32)MAXSINT8) / ((uint32)Y_s32))
        {
            res_s8 = ((sint8) X_u32) * ((sint8) Y_s32);
        }
        else
        {
            res_s8 = MAXSINT8;
        }
    }
    /* zero */
    else if ((X_u32 == 0L) || (Y_s32 == 0L))
    {
        res_s8 = 0;
    }
    /*  Y_s32 < 0: unequal signs */
    else
    {
        if (X_u32 <= (uint32)(((sint32)MINSINT8) / Y_s32))
        {
            res_s8 = ((sint8) X_u32) * ((sint8) Y_s32);
        }
        else
        {
            res_s8 = MINSINT8;
        }
    }

    return (res_s8);

#else

    sint32 res_s32;
    uint32 tmp_u32;

    asm volatile(" abs      %[tmp_u32], %[Y_s32]                # absolut value                      \n\
                   muls.u   %[res_s32], %[X_u32], %[tmp_u32]    # saturated unsigned multiplication  \n\
                   movh     %[tmp_u32],  0x8000                 # prepare MAXSINT32 +1   MINSINT32   \n\
                   jge      %[Y_s32], 0, L2F_%=                 # jump if y >= 0                     \n\
                   jge.u    %[res_s32], %[tmp_u32],L1F_%=       # jump if |y| >= MAXSINT32 +1        \n\
                   muls     %[res_s32], %[res_s32], -1          # saturated multiplication           \n\
                   j         L3F_%=                             # jump to the end                    \n\
               L1F_%=:                                                                               \n\
                   mov      %[res_s32], %[tmp_u32]              # LIMIT = MINSINT32                  \n\
                   j         L3F_%=                             # jump to the end                    \n\
               L2F_%=:                                                                               \n\
                   addi     %[tmp_u32], %[tmp_u32],  -1         # MAXSINT32                          \n\
                   min.u    %[res_s32], %[res_s32], %[tmp_u32]  # LIMIT = MAXSINT32                  \n\
               L3F_%=:                                                                               \n\
                   sat.b    %[res_s32], %[res_s32]              # LIMIT = MAXSINT8 / MINSINT8        \n\
                   "
             : [res_s32]"=&d"(res_s32), [tmp_u32]"=&d"(tmp_u32)
                         : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint8)res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_S8
 *
 * \brief Multiplies two uint32 variabels and limits the result to a sint8 variable
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \return   sint8
 * \retval   (X_u32 * Y_u32) saturated to sint8
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Mul_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint8 res_s8;


    if (Y_u32 <= 0UL)
    {
        res_s8 = 0;
    }
    else
    {
        res_s8 = ((sint8) (((uint32)MAXSINT8) / Y_u32));

        if ( ((uint32) res_s8) >= X_u32)
        {
            res_s8 = ( (sint8)( X_u32 * Y_u32) );
        }
        else
        {
            res_s8 = MAXSINT8;
        }
    }

    return (res_s8);

#else

    sint32 res_s32;

    asm volatile(" muls.u   %[res_s32], %[X_u32], %[Y_u32]      # saturated signed multiplication \n\
                   sat.bu   %[res_s32]                          # limit to +255 (unsigned byte)   \n\
                   sat.b    %[res_s32]                          # limited to a signed byte        \n\
                 "
             : [res_s32]"=&d"(res_s32)
                         : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint8) res_s32);

#endif /* (SRVB__ASM_ENABLE == 0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_U16
 *
 * \brief Multiplies two sint32 variables and limits the result to an uint16 variable
 *
 * \param    uint32 X_s32
 * \param    sint32 Y_s32
 * \return   uint16
 * \retval   (X_s32 * Y_s32) saturated to uint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Mul_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint32 tmp1_u32;
    uint32 tmp2_u32;

    /* unequal signs */
    if (((X_s32 >= 0L) && (Y_s32 <= 0L)) || ((X_s32 <= 0L) && (Y_s32 >= 0L)))
    {
        tmp1_u32 = 0UL;
    }
    /* equal signs and bot operands = 0 */
    else
    {
        tmp1_u32 = (uint32)X_s32;
        tmp2_u32 = (uint32)Y_s32;

        /* both operands are negative, calculate the  magnitude */
        if(X_s32 < 0L)
        {
            tmp1_u32 = ((uint32)(0xFFFFFFFF ^ tmp1_u32)) + 1UL;
            tmp2_u32 = ((uint32)(0xFFFFFFFF ^ tmp2_u32)) + 1UL;
        }

         /* calculate the result */
        if(tmp1_u32 <= (((uint32) MAXUINT16) / tmp2_u32))
        {
            tmp1_u32 *= tmp2_u32;
        }
        else
        {
            tmp1_u32 = (uint32) MAXUINT16;
        }
    }
    return ((uint16) tmp1_u32);

#else

    sint32 res_s32;


    asm volatile("  muls      %0, %1, %2                                       \n\
                    max       %0, %0, 0                                        \n\
                    sat.hu    %0, %0                                           \n\
                 "  :"=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
    /*      0           1       2   */

    /* MISRA RULE 30 VIOLATION: Res_s32 is written in the asm statement */
    return ((uint16) res_s32);

#endif /* SRVB_IMPL_ASM_ENABLE==0 */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_U16
 *
 * \brief Multiplies an uint32 and a sint32 variable and limits the result to an uint16 variable
 *
 * \param    uint32 X_u32
 * \param    sint32 Y_s32
 * \return   uint16
 * \retval   (X_u32 * Y_s32) saturated to uint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Mul_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint32 res_u32;


    if ((Y_s32 <= 0L) || (X_u32 <= 0ul))
    {
        res_u32 = 0UL;
    }
    else
    {
        res_u32 = ((uint32)MAXUINT16) / ((uint32)Y_s32);

        if (res_u32 >= X_u32)
        {
            res_u32 = X_u32 * ((uint32) Y_s32);
        }
        else
        {
            res_u32 = (uint32)MAXUINT16;
        }
    }

    return ((uint16)res_u32);

#else

    uint32 res_u32;


    asm volatile(" jge       %[Y_s32], 0, L1F_%=                 # jump if x_s32 is positive         \n\
                   mov       %[res_u32], 0                       # LIMIT: res_u32 = 0                \n\
                   j          L2F_%=                             # jump to the end                   \n\
               L1F_%=:                                                                               \n\
                   muls.u    %[res_u32], %[X_u32], %[Y_s32]      # saturated multiplication          \n\
                   sat.hu    %[res_u32], %[res_u32]              # LIMIt: MAXUINT16                  \n\
               L2F_%=:                                               # end                           \n\
                 "
             : [res_u32]"=&d"(res_u32)
                         : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint16) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}

/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_U16
 *
 * \brief Multiplies two uint32 variabels and limits the result to an uint16 variable
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \return   uint16
 * \retval    (X_u32 * Y_u32) saturated to uint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Mul_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if (Y_u32 == 0UL)
    {
        res_u32 = 0UL;
    }
    else
    {
        res_u32 = ((uint32)MAXUINT16) / Y_u32;

        if (res_u32 >= X_u32)
        {
            res_u32 =  X_u32 * Y_u32;
        }
        else
        {
            res_u32 = (uint32)MAXUINT16;
        }
    }

    return ((uint16)res_u32);

#else

    uint32 res_u32;


    asm volatile(" muls.u   %[res_u32], %[X_u32], %[Y_u32]      # saturated signed multiplication \n\
                   sat.hu   %[res_u32]                          # limit to unsigned half word     \n\
                 "
             : [res_u32]"=&d"(res_u32)
                         : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint16) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_S16
 *
 * \brief Multiplies two sint32 variables and limits the result to a sint16 variable
 *
 * \param    uint32 X_s32
 * \param    sint32 Y_s32
 * \return   sint16
 * \retval   (X_s32 * Y_s32) saturated to sint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Mul_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint16 res_s16;


    /* unequal signs */
    if ( ((Y_s32 < 0L) && (X_s32 > 0L)) || ((X_s32 < 0L) && (Y_s32 > 0L)) )
    {
        /*  X_s32 > 0  && Y_s32 < 0 */
        if( X_s32 > 0L)
        {
            if ( X_s32 <= ( ((sint32)MINSINT16) / Y_s32))
            {
                res_s16 = ((sint16)X_s32) * ((sint16)Y_s32);
            }
            else
            {
                res_s16 = MINSINT16;
            }
        }
        /*  X_s32 < 0  && Y_s32 < 0 */
        else
        {
            if ( X_s32 >= (((sint32)MINSINT16) / Y_s32) )
            {
                res_s16 = ((sint16)X_s32) * ((sint16)Y_s32);
            }
            else
            {
                res_s16 = MINSINT16;
            }
        }
    }
    /* zero */
    else if ((Y_s32 == 0L) || (X_s32 == 0L))
    {
        res_s16 = 0l;
    }
    /* equal signs */
    else
    {
        /*  X_s32 > 0  && Y_s32 > 0 */
        if( X_s32 > 0)
        {
            if ( X_s32 <= (((sint32)MAXSINT16) / Y_s32))
            {
                res_s16 = ((sint16) X_s32) * ((sint16) Y_s32);
            }
            else
            {
                res_s16 = MAXSINT16;
            }
        }
        /*  X_s32 < 0  && Y_s32 < 0 */
        else
        {
            if (X_s32 >= (((sint32)MAXSINT16) / Y_s32))
            {
                res_s16 = ((sint16)X_s32) * ((sint16)Y_s32);
            }
            else
            {
                res_s16 = MAXSINT16;
            }
        }
    }

    return (res_s16);

#else

    sint32 res_s32;


    /* the __SATH instruction is a intrinsic define of the compiler
    It is available from hitec version 3.4.2.
    It is the equivalent for a sat.h instruction but within control of the compiler.
    */
#ifdef __SATH
    asm volatile(" muls %0, %1, %2  \n\
                 ": "=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATH(res_s32);
#else
    asm volatile(" muls  %0, %1, %2  \n\
                   sat.h %0, %0      \n\
                 ": "=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16)res_s32);

#endif

#endif /* SRVB_IMPL_ASM_ENABLE==0 */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_S16
 *
 * \brief Multiplies an uint32 variable and a sint32 variable and limits the result to a sint16 variable
 *
 * \param    uint32 X_u32
 * \param    sint32 Y_s32
 * \return   sint16
 * \retval   (X_u32 * Y_s32) saturated to a sint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Mul_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint16 res_s16;


    /* Y_s32 >= 0: equal signs */
    if ( Y_s32 > 0L )
    {
        if(X_u32 <= ((uint32)(MAXSINT16) / ((uint32) Y_s32)))
        {
            res_s16 = ((sint16) X_u32) * ((sint16) Y_s32);
        }
        else
        {
            res_s16 = MAXSINT16;
        }
    }
    /* zero */
    else if ((X_u32 == 0L) || (Y_s32 == 0L))
    {
        res_s16 = 0l;
    }
    /*  Y_s32 < 0: unequal signs */
    else
    {
        if ( (X_u32) <= ((uint32)(MINSINT16 / Y_s32)) )
        {
            res_s16 = ((sint16) X_u32) * ((sint16) Y_s32);
        }
        else
        {
            res_s16 = MINSINT16;
        }
    }
    return (res_s16);

#else

    sint32 res_s32;
    uint32 tmp_u32;

    asm volatile(" abs      %[tmp_u32], %[Y_s32]                # absolut value                      \n\
                   muls.u   %[res_s32], %[X_u32], %[tmp_u32]    # saturated unsigned multiplication  \n\
                   movh     %[tmp_u32],  0x8000                 # prepare MAXSINT32 +1   MINSINT32   \n\
                   jge      %[Y_s32], 0, L2F_%=                 # jump if y >= 0                     \n\
                   jge.u    %[res_s32], %[tmp_u32],L1F_%=       # jump if |y| >= MAXSINT32 +1        \n\
                   muls     %[res_s32], %[res_s32], -1          # saturated multiplication           \n\
                   j         L3F_%=                             # jump to the end                    \n\
               L1F_%=:                                                                               \n\
                   mov      %[res_s32], %[tmp_u32]              # LIMIT = MINSINT32                  \n\
                   j         L3F_%=                             # jump to the end                    \n\
               L2F_%=:                                                                               \n\
                   addi     %[tmp_u32], %[tmp_u32],  -1         # MAXSINT32                          \n\
                   min.u    %[res_s32], %[res_s32], %[tmp_u32]  # LIMIT = MAXSINT32                  \n\
               L3F_%=:                                                                               \n\
                   sat.h    %[res_s32], %[res_s32]              # LIMIT = MAXSINT16 / MINSINT16      \n\
                   "
             : [res_s32]"=&d"(res_s32), [tmp_u32]"=&d"(tmp_u32)
                         : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint16)res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_S16
 *
 * \brief Multiplies two uint32 variabels and limits the result to a sint16 variable
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \return   sint16
 * \retval   (X_u32 * Y_u32) saturated to sint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Mul_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint16 res_s16;


    if (Y_u32 <= 0ul)
    {
        res_s16 = 0;
    }
    else
    {
        res_s16 = (sint16)(((uint32) MAXSINT16) / Y_u32) ;

        if( ((uint32)(res_s16)) >= X_u32)
        {
            res_s16 = ((sint16) X_u32) * ((sint16) Y_u32);
        }
        else
        {
            res_s16 = MAXSINT16;
        }
    }

    return (res_s16);


#else

    sint32 res_s32;

    asm volatile(" muls.u   %[res_s32], %[X_u32], %[Y_u32]      # saturated unsigned multiplication \n\
                   sat.hu   %[res_s32]                          # limited to positive half word     \n\
                   sat.h    %[res_s32]                          # limited to a signed half word     \n\
                 "
             : [res_s32]"=&d"(res_s32)
                         : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint16) res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_U32
 *
 * \brief Multiplies two sint32 variables and limits the result to an uint32 variable
 *
 * \param    uint32 X_s32
 * \param    sint32 Y_s32
 * \return   uint16
 * \retval   (X_s32 * Y_s32) saturated to uint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Mul_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint32 tmp1_u32;
    uint32 tmp2_u32;

    /* unequal signs */
    if (((X_s32 >= 0L) && (Y_s32 <= 0L)) || ((X_s32 <= 0L) && (Y_s32 >= 0L)))
    {
        tmp1_u32 = 0UL;
    }
    /* equal signs and bot operands = 0 */
    else
    {
        tmp1_u32 = (uint32)X_s32;
        tmp2_u32 = (uint32)Y_s32;

        /* both operands are negative, calculate the  magnitude */
        if(X_s32 < 0L)
        {
            tmp1_u32 = ((uint32)(0xFFFFFFFF ^ tmp1_u32)) + 1UL;
            tmp2_u32 = ((uint32)(0xFFFFFFFF ^ tmp2_u32)) + 1UL;
        }

         /* calculate the result */
        if(tmp1_u32 <= (MAXUINT32 / tmp2_u32))
        {
            tmp1_u32 *= tmp2_u32;
        }
        else
        {
            tmp1_u32 = MAXUINT32;
        }
    }
    return (tmp1_u32);

#else

    uint32 res_u32;
    uint32 tmp_u32;

    asm volatile(" xnor.t    %[res_u32], %[X_s32], 31, %[Y_s32], 31    # sigen comparison, equal signs: 1            \n\
                   jz        %[res_u32],  L1F_%=                       # unequal sigen, res_s32 = 0, jump to the end \n\
                   abs       %[tmp_u32], %[X_s32]                      # absolut value                               \n\
                   abs       %[res_u32], %[Y_s32]                      # absolut value                               \n\
                   muls.u    %[res_u32], %[res_u32], %[tmp_u32]        # saturated multiplication                    \n\
               L1F_%=:                                                 # end                                         \n\
                 "
             : [res_u32]"=&d"(res_u32), [tmp_u32]"=&d"(tmp_u32)
                         : [X_s32]"d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_U32
 *
 * \brief Multiplies an uint32 and a sint32 variable and limits the result to an uint32 variable
 *
 * \param    uint32 X_u32
 * \param    sint32 Y_s32
 * \return   uint32
 * \retval   (X_u32 * Y_s32) saturated to uint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Mul_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint32 res_u32;


    if ( (Y_s32 <= 0L) || (X_u32 <= 0L) )
    {
        res_u32 = 0ul;
    }
    else
    {
        res_u32 =  MAXUINT32 / ((uint32) Y_s32);

        if (res_u32 >= X_u32)
        {
            res_u32 =  X_u32  * ((uint32) Y_s32);
        }
        else
        {
            res_u32 = MAXUINT32;
        }
    }

    return (res_u32);

#else

    uint32 res_u32;


    asm volatile(" jge       %[Y_s32], 0, L1F_%=                 # jump if x_s32 is positive         \n\
                   mov       %[res_u32], 0                       # LIMIT: res_u32 = 0                \n\
                   j          L2F_%=                             # jump to the end                   \n\
               L1F_%=:                                                                               \n\
                   muls.u    %[res_u32], %[X_u32], %[Y_s32]      # saturated multiplication          \n\
               L2F_%=:                                           # end                               \n\
                 "
             : [res_u32]"=&d"(res_u32)
                         : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_U32
 *
 * \brief Multiplies 2 uint32 variables and limits the result to an uint32 variable
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \return   uint32
 * \retval   (X_u32 * Y_u32) saturated to uint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Mul_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    if (Y_u32 == 0)
    {
        res_u32 = 0;
    }
    else
    {
        res_u32 = MAXUINT32 / Y_u32;

        if (res_u32 >= X_u32)
        {
            res_u32 = X_u32 * Y_u32;
        }
        else
        {
            res_u32 = MAXUINT32;
        }
    }

    return (res_u32);

#else

    uint32 res_u32;


    asm volatile(" muls.u   %[res_u32], %[X_u32], %[Y_u32]    # saturated signed multiplication \n\
                 "
             : [res_u32]"=&d"(res_u32)
                         : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE == 0) */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_S32
 *
 * \brief Multiplies two sint32 variables and limits the result to a sint32 variable
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \return   sint32
 * \retval   (X_s32 * Y_s32) saturated to sint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Mul_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint32 res_s32;


    /* unequal signs */
    if ( ((Y_s32 < 0L) && (X_s32 > 0L)) || ((X_s32 < 0L) && (Y_s32 > 0L)) )
    {
        /*  X_s32 > 0  && Y_s32 < 0 */
        if( X_s32 > 0L)
        {
            if ( Y_s32  >= (MINSINT32 / X_s32))
            {
                res_s32 = X_s32 * Y_s32;
            }
            else
            {
                res_s32 = MINSINT32;
            }
        }
        /*  X_s32 < 0  && Y_s32 < 0 */
        else
        {
            if ( X_s32  >= (MINSINT32 / Y_s32))
            {
                res_s32 = X_s32 * Y_s32;
            }
            else
            {
                res_s32 = MINSINT32;
            }
        }
    }
    /* zero */
    else if ((Y_s32 == 0L) || (X_s32 == 0L))
    {
        res_s32 = 0L;
    }
    /* equal signs */
    else
    {
        /*  X_s32 > 0  && Y_s32 > 0 */
        if( X_s32 > 0)
        {
            if ( X_s32 <= (MAXSINT32 / Y_s32))
            {
                res_s32 = X_s32 * Y_s32;
            }
            else
            {
                res_s32 = MAXSINT32;
            }
        }
        /*  X_s32 < 0  && Y_s32 < 0 */
        else
        {
            if ( X_s32 >= (MAXSINT32 / Y_s32) )
            {
                res_s32 = X_s32 * Y_s32;
            }
            else
            {
                res_s32 = MAXSINT32;
            }
        }
    }

    return (res_s32);

#else

    sint32 res_s32;


    asm volatile("  muls %0, %1, %2"
               : "=&d" (res_s32) : "d"(X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s32);

#endif /* SRVB_IMPL_ASM_ENABLE==0 */
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_S32
 *
 * \brief Multiplies an uint32 variable and a sint32 variable and limits the result to a sint32 variable
 *
 * \param    uint32 X_u32
 * \param    sint32 Y_s32
 * \return   sint32
 * \retval   (X_u32 * Y_s32) saturated to a sint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Mul_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint32 res_s32;


    /* Y_s32 >= 0: equal signs */
    if ( Y_s32 > 0L )
    {
        if( X_u32 <= ((uint32)(MAXSINT32 / Y_s32)) )
        {
            res_s32 = ((sint32) X_u32) * Y_s32;
        }
        else
        {
            res_s32 = MAXSINT32;
        }
    }
    /* zero */
    else if ((X_u32 == 0L) || (Y_s32 == 0L))
    {
        res_s32 = 0L;
    }
    /*  Y_s32 < 0: unequal signs */
    else
    {
        if ( (X_u32) <= ((uint32)(MINSINT32 / Y_s32)) )
        {
            res_s32 = ((sint32) X_u32) * Y_s32;
        }
        else
        {
            res_s32 = MINSINT32;
        }
    }

    return (res_s32);

#else

    sint32 res_s32;
    uint32 tmp_u32;


    asm volatile(" abs      %[tmp_u32], %[Y_s32]                # absolut value                      \n\
                   muls.u   %[res_s32], %[X_u32], %[tmp_u32]    # saturated unsigned multiplication  \n\
                   movh     %[tmp_u32],  0x8000                 # prepare MAXSINT32 +1   MINSINT32   \n\
                   jge      %[Y_s32], 0, L2F_%=                     # jump if y >= 0                 \n\
                   jge.u    %[res_s32], %[tmp_u32], L1F_%=          # jump if |y| >= MAXSINT32 +1    \n\
                   muls     %[res_s32], %[res_s32], -1          # saturated multiplication           \n\
                   j         L3F_%=                                 # jump to the end                \n\
               L1F_%=:                                                                               \n\
                   mov      %[res_s32], %[tmp_u32]              # LIMIT = MINSINT32                  \n\
                   j         L3F_%=                                 # jump to the end                \n\
               L2F_%=:                                                                               \n\
                   addi     %[tmp_u32], %[tmp_u32],  -1         # MAXSINT32                          \n\
                   min.u    %[res_s32], %[res_s32], %[tmp_u32]  # LIMIT = MAXSINT32                  \n\
               L3F_%=:                                                                               \n\
                 "
             : [res_s32]"=&d"(res_s32), [tmp_u32]"=&d"(tmp_u32)
                         : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/**
 ***********************************************************************************************************************
 *
 * \brief Multiplies two uint32 variables and limits the result to a sint32 variable
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \return   sint32
 * \retval   (X_u32 * Y_u32) saturated to sint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Mul_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint32 res_s32;


    if (Y_u32 <= 0ul)
    {
        res_s32 = 0L;
    }
    else
    {
        res_s32 = ( (sint32)(MAXSINT32 / Y_u32) );

        if (((uint32) res_s32) >= X_u32)
        {
            res_s32 = ((sint32) X_u32) * ((sint32) Y_u32);
        }
        else
        {
            res_s32 = MAXSINT32;
        }
    }

    return (res_s32);

#else

    sint32 res_s32;
    sint32 tmp_s32;

    asm volatile(" muls.u   %[res_s32], %[X_u32], %[Y_u32]      # saturated unsigned multiplication       \n\
                   movh     %[tmp_s32],  0x8000                 # prepare MAXSINT32                       \n\
                   jlt.u    %[res_s32], %[tmp_s32], L1F_%=      # res_s32 < MAXSINT32 +1, jump to the end \n\
                   mov      %[res_s32], %[tmp_s32]              #                                         \n\
                   addi     %[res_s32], %[tmp_s32],  -1         # MAXSINT32                               \n\
               L1F_%=:                                          # end                                     \n\
                 "
             : [res_s32]"=&d"(res_s32), [tmp_s32]"=&d"(tmp_s32)
                         : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0) */
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * MULSHIFT-RIGHT FUNCTIONS
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_U32
 *
 * \brief Multiplies 2 uint32 variables and divides by 2^Shift
 *
 * Multiplies two uint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint32.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     uint32        Y_u32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint32                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_MulShRight_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint64 tmp_u64;

    /* interim tmp_s64 */
    /* no overflow: u32 * s32 = 2^31 * 2^32 = 2^63 < 2^64 = u64 */
    /* MISRA RULE 37 VIOLATION:: Arithmetic shift is done correctly by the compiler */
    tmp_u64  =  (((uint64) X_u32)  * ((uint64) Y_u32)) >> N_u8;


    /* limitation */
    if (tmp_u64 >= ((uint64) MAXUINT32))
    {
        tmp_u64 = ((uint64) MAXUINT32);
    }

    return((uint32) tmp_u64);

#else

    uint32 Result_u32;
    sint64 Temp_s64;
    sint32 Temp_s32;

      asm volatile("  mul.u   %A[Temp_s64],%[X],%[Y]                  # calc 64 bit internal result                 \n\
                      jnz     %[N],L1F_%=                             # standard is N>0                             \n\
                      mov     %[Result], %L[Temp_s64]                 # hypothesis: input  <= MAXUINT               \n\
                      j       L2F_%=                                  # control hypothesis                          \n\
               L1F_%=:rsub    %[Temp_s32],%[N],0                      # prepare N for sha                           \n\
                      rsub    %[N],%[N],32                            # repare N for dextr                          \n\
                      dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[N]# do the right shift on internal 64 bit result\n\
                      sh      %H[Temp_s64],%H[Temp_s64],%[Temp_s32]                                                 \n\
               L2F_%=:jz      %H[Temp_s64], L3F_%=                    # jump if result is less than MAXUINT32       \n\
                      mov     %[Result], -1                           # otherwise saturate to MAXUINT32             \n\
               L3F_%=:                                                                                              \n\
          " : [Result] "=&d"(Result_u32), [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32),  [N] "+d"(N_u8)
                   : [X] "d"(X_u32), [Y] "d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return Result_u32;

    /* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_S32
 *
 * \brief Multiplies 2 uint32 variables and divides by 2^Shift
 *
 * Multiplies two uint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint32.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     uint32        Y_u32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint32                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_MulShRight_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32,  uint8 N_u8))
{
    return SrvB_TypeLimiter_U32_S32_inline(SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_S16
 *
 * \brief Multiplies 2 uint32 variables and divides by 2^Shift
 *
 * Multiplies two uint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint16.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     uint32        Y_u32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint16                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_MulShRight_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8))
{
    return SrvB_TypeLimiter_U32_S16_inline(SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_U8
 *
 * \brief Multiplies 2 uint32 variables and divides by 2^Shift
 *
 * Multiplies two uint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint8.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     uint32        Y_u32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint8                     (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_MulShRight_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8))
{
    return SrvB_TypeLimiter_U32_U8_inline(SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_S8
 *
 * \brief Multiplies 2 uint32 variables and divides by 2^Shift
 *
 * Multiplies two uint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint8.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     uint32        Y_u32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint8                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_MulShRight_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8))
{
    return SrvB_TypeLimiter_U32_S8_inline(SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_U16
 *
 * \brief Multiplies 2 uint32 variables and divides by 2^Shift
 *
 * Multiplies two uint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint16.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     uint32        Y_u32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint16                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_MulShRight_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8))
{
    return SrvB_TypeLimiter_U32_U16_inline(SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_U32
 *
 * \brief Multiplies 2 sint32 variables and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint32.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     sint32        X_s32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint32                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_MulShRight_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint64 tmp_s64;

    /* interim tmp_s64 */
    /* no overflow: s32 * s32 = 2^31 * 2^31 = 2^62 < 2^63 = s64 */
    /* MISRA RULE 37 VIOLATION:: Arithmetic shift is done correctly by the compiler */
    tmp_s64  = (((sint64) X_s32) * ((sint64) Y_s32)) >> N_u8;

    /* limitation */
    tmp_s64 = ((tmp_s64 >= ((sint64) MAXUINT32)) ? ((sint64) MAXUINT32) : ((tmp_s64 <= 0) ? 0
               : tmp_s64));

    return((uint32) tmp_s64);

#else

    uint32 Result_u32;
    sint64 Temp_s64;
    sint32 Temp_s32;

    asm volatile("                                                                                                  \n\
                    xor.t   %[Temp_s32],%[X],31,%[Y],31                    # check sign of result                   \n\
                    jz      %[Temp_s32],L1F_%=                             # posititve result                       \n\
                    movh    %[Result],0                                    # return 0                               \n\
                    j       L3F_%=                                         # => end                                 \n\
             L1F_%=:abs     %[X],%[X]                                      # prepare for unsigend multiplication    \n\
                    abs     %[Y],%[Y]                                      # prepare for unsigend multiplication    \n\
                    jz      %[N],L2F_%=                                    # check N=0 as dextr is limited pos < 32 \n\
                    mul.u   %A[Temp_s64],%[X],%[Y]                         # calc 64 bit internal result            \n\
                    rsub    %[Temp_s32],%[N],32                            # prepare Temp_S32 for dextr             \n\
                    dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[Temp_s32]# right shift on internal 64 bit result  \n\
                    rsub    %[N],%[N],0                                    # prepare N for range check              \n\
                    sh      %H[Temp_s64],%H[Temp_s64],%[N]                 # shift for range check                  \n\
                    jz      %H[Temp_s64], L3F_%=                           # result is in range                     \n\
             L2F_%=:muls.u  %[Result],%[X],%[Y]                            # calculation if N = 0, saturation       \n\
             L3F_%=:                                                                                                \n\
                 " : [Result] "=&d"(Result_u32), [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32), [N] "+d"(N_u8), [X] "+d"(X_s32), [Y] "+d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return Result_u32;

    /* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_S32
 *
 * \brief Multiplies 2 sint32 variables and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint32.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     sint32        X_s32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint32                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_MulShRight_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint64 tmp_s64;

    /* interim tmp_s64 */
    /* MISRA RULE 37 VIOLATION:: Arithmetic shift is done correctly by the compiler */
    tmp_s64 = (((sint64) X_s32) * ((sint64) Y_s32)) >> N_u8;

    /* limitation */
    tmp_s64 = ((tmp_s64 >= ((sint64) MAXSINT32)) ? ((sint64) MAXSINT32)
               : ((tmp_s64 <= ((sint64)MINSINT32)) ? ((sint64)MINSINT32)
                  : tmp_s64));

    return((sint32)tmp_s64);

#else

    sint32 Result_s32;
    sint64 Temp_s64;
    sint32 Temp_s32;

    asm volatile("  jz      %[N],L1F_%=                                     #check N=0 as position in dextr 32-N<32\n\
                    mul     %A[Temp_s64],%[X],%[Y]                          #calc 64 bit internal result           \n\
                    rsub    %[Temp_s32],%[N],32                             #prepare Temp_s32 for dextr instruction\n\
                    dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[Temp_s32] # = right shift of 64 bit result       \n\
                    rsub    %[N], %[N], 1                                   # prepare for range check              \n\
                    sha     %H[Temp_s64], %H[Temp_s64],%[N]                 # identical shift like result          \n\
                    cls     %[Temp_s32],%H[Temp_s64]                        # range check of result, step 3        \n\
                    mov     %[N], 31                                        # 31 + 1 sign bits expected            \n\
                    jge     %[Temp_s32],%[N],L2F_%=                         # out of range => saturation           \n\
             L1F_%=:muls    %[Result],%[X],%[Y]                             # out of range => saturation           \n\
             L2F_%=:                                                                                               \n\
                 " : [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32), [Result] "=&d"(Result_s32), [N] "+d"(N_u8)
                   : [X] "%d"(X_s32), [Y] "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (Result_s32);

    /* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_S16
 *
 * \brief Multiplies 2 sint32 variables and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint16.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     sint32        X_S32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint16                    (X*Y) / 2^N

 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_MulShRight_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8))
{
    return SrvB_TypeLimiter_S32_S16_inline(SrvB_MulShRight_S32S32_S32_inline(X_s32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_U8
 *
 * \brief Multiplies 2 sint32 variables and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint8.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     sint32        X_S32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint32                    (X*Y) / 2^N

 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_MulShRight_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8))
{
    return SrvB_TypeLimiter_S32_U8_inline(SrvB_MulShRight_S32S32_S32_inline(X_s32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_S8
 *
 * \brief Multiplies 2 sint32 variables and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint8.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     sint32        X_S32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint8                     (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_MulShRight_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8))
{
    return SrvB_TypeLimiter_S32_S8_inline(SrvB_MulShRight_S32S32_S32_inline(X_s32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_U16
 *
 * \brief Multiplies 2 sint32 variables and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint16.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     sint32        X_S32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint16                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_MulShRight_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8))
{
    return SrvB_TypeLimiter_S32_U16_inline(SrvB_MulShRight_S32S32_S32_inline(X_s32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_U32
 *
 * \brief Multiplies uint32 with sint32 variable and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint32.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint32                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_MulShRight_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint64  tmp_s64;
    uint32  res_u32;


    /* MISRA RULE 37 VIOLATION:: Arithmetic shift is done correctly by the compiler */
    tmp_s64  = (((sint64) X_u32) * ((sint64) Y_s32)) >> N_u8;

    /* limitation */
    tmp_s64 = ((tmp_s64 >= ((sint64) MAXUINT32)) ? ((sint64) MAXUINT32) : ((tmp_s64 <= 0) ? 0
               : tmp_s64));
    res_u32 = ((uint32)tmp_s64);

    return(res_u32);

#else

    uint32 Result_u32;
    sint64 Temp_s64;
    sint32 Temp_s32;

    asm volatile("  jz.t    %[Y],31,L1F_%=                          # calcualte when result is positive             \n\
                    movh    %[Result],0                             # otherwise limit to zero                       \n\
                    j L4F_%=                                                                                        \n\
             L1F_%=:mul.u   %A[Temp_s64],%[X],%[Y]                  # calc 64 bit internal result                   \n\
                    jnz     %[N],L2F_%=                             # standard is N>0                               \n\
                    mov     %[Result], %L[Temp_s64]                 # hypothesis: input  <= MAXUINT                 \n\
                    j       L3F_%=                                  # control hypothesis                            \n\
             L2F_%=:rsub    %[Temp_s32],%[N],0                      # prepare N for sha                             \n\
                    rsub    %[N],%[N],32                            # repare N for dextr                            \n\
                    dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[N]# do the right shift on internal 64 bit result  \n\
                    sh      %H[Temp_s64],%H[Temp_s64],%[Temp_s32]                                                   \n\
             L3F_%=:jz      %H[Temp_s64], L4F_%=                    # jump if result is less than MAXUINT32         \n\
                    mov     %[Result], -1                           # otherwise saturate to MAXUINT32               \n\
             L4F_%=:                                                                                                \n\
                 " : [Result] "=&d"(Result_u32), [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32), [N] "+d"(N_u8)
                   : [X] "d"(X_u32), [Y] "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return Result_u32;

    /* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_S32
 *
 * \brief Multiplies uint32 with sint32 variable and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint32.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint32                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_MulShRight_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint64 tmp_s64;

    /* interim tmp_s64 */
    /* no overflow: u32 * s32 = 2^31 * 2^32 = 2^63 = s64 */
    /* MISRA RULE 37 VIOLATION:: Arithmetic shift is done correctly by the compiler */
    tmp_s64 = (((sint64) X_u32) * ((sint64)Y_s32)) >> N_u8;

    /* limitation */
    tmp_s64 = ((tmp_s64 >= ((sint64) MAXSINT32)) ? ((sint64) MAXSINT32)
               : ((tmp_s64 <= ((sint64) MINSINT32)) ? ((sint64) MINSINT32)
                  : tmp_s64));

    return ((sint32) tmp_s64);

#else

    sint32 Result_s32;
    sint64 Temp_s64;
    sint32 Temp_s32;
    sint32 Sgn_s32;


    asm volatile(" sh      %[Sgn],%[Y],-31                                 # remember sign of result               \n\
                   abs     %[Y],%[Y]                                       # absolute value of Y                   \n\
                   mul.u   %A[Temp_s64],%[X],%[Y]                          # calculate 64 bit unsigned result      \n\
                   jz      %[Sgn],L0F_%=                                   # positive result                       \n\
                   not     %L[Temp_s64]                                    # sign recovery                         \n\
                   not     %H[Temp_s64]                                    #                                       \n\
                   addx    %L[Temp_s64],%L[Temp_s64],1                     #                                       \n\
                   addc    %H[Temp_s64],%H[Temp_s64],0                     #                                       \n\
            L0F_%=:jz      %[N],L1F_%=                                     # avoid pos = 32 in dextr instruction   \n\
                   rsub    %[Temp_s32],%[N],32                             #prepare Temp_s32 for dextr instruction \n\
                   dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[Temp_s32] # = right shift of 64 bit result        \n\
                   j       L2F_%=                                          # go to standard calculation            \n\
            L1F_%=:mov     %[Result],%L[Temp_s64]                          # N = 0, assume Low bytes as result     \n\
            L2F_%=:rsub    %[N], %[N], 0                                   # prepare for range check               \n\
                   sha     %H[Temp_s64], %H[Temp_s64],%[N]                 # identical shift like result           \n\
                   cls     %[Temp_s32],%H[Temp_s64]                        # range check of result, step 3         \n\
                   mov     %[N], 31                                        # 31 + 1 sign bits expected             \n\
                   jlt     %[Temp_s32],%[N],L3F_%=                         # out of range => saturation            \n\
                   xor.t    %L[Temp_s64], %[Result],31, %H[Temp_s64],31    # prepare for check '+1' sign bit       \n\
                   jz       %L[Temp_s64],L4F_%=                            # +1 sign bit: in range => end          \n\
            L3F_%=:movh    %[Result],0x8000                                # saturation to MINSINT32               \n\
                   caddn   %[Result],%[Sgn],%[Result],-1                   # saturation to MAXSINT32               \n\
            L4F_%=:                                                                                                \n\
     " : [Result] "=&d"(Result_s32), [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32) , [Sgn] "=&d"(Sgn_s32), [Y] "+d"(Y_s32), [N] "+d"(N_u8)
       : [X] "d"(X_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return Result_s32;


    /* SRVB_IMPL_ASM_ENABLE==0 */
#endif
}

/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_U8
 *
 * \brief Multiplies uint32 with sint32 variable and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint8.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint8                     (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_MulShRight_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8))
{
    return SrvB_TypeLimiter_U32_U8_inline(SrvB_MulShRight_U32S32_U32_inline(X_u32, Y_s32, N_u8));
}

/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_S8
 *
 * \brief Multiplies uint32 with sint32 variable and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint8.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    sint8                     (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_MulShRight_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8))
{
    return SrvB_TypeLimiter_S32_S8_inline(SrvB_MulShRight_U32S32_S32_inline(X_u32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_U16
 *
 * \brief Multiplies uint32 with sint32 variable and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to uint16.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint16                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_MulShRight_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8))
{
    return SrvB_TypeLimiter_U32_U16_inline(SrvB_MulShRight_U32S32_U32_inline(X_u32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_S16
 *
 * \brief Multiplies uint32 with sint32 variable and divides by 2^Shift
 *
 * Multiplies two sint32 variables. The internal result is shifted arithmetic by N_u8 (keeping signed format).
 * This is a fast replacement of MulDiv where you would calculate (X*Y) / 2^N.
 * The output is satured to sint16.
 *
 * Restrictions:
 *  - Maximum allowed shift operand N_u8 is 32
 *
 * \param     uint32        X_u32       Input operand 1
 * \param     sint32        Y_s32       Input operand 2
 * \param     uint8         N_u8        Shift operand (0..32)
 * \return    uint16                    (X*Y) / 2^N
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_MulShRight_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8))
{
    return SrvB_TypeLimiter_S32_S16_inline(SrvB_MulShRight_U32S32_S32_inline(X_u32, Y_s32, N_u8));
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * MUL ADD FUNCTIONS
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_MulAdd_U32U32U32_U16
 *
 * \brief Multiplies two uint32 variables, adds a third one and limits the result to an uint16
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \param    uint32 Z_u32
 * \return   uint16
 * \retval   ((X_u32 * Y_u32) + Z_u32 )saturated to uint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_MulAdd_U32U32U32_U16_inline(uint32 X_u32, uint32 Y_u32, uint32 Z_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    uint64  res1_u64;
    uint64  res2_u64;


    /* interim res */
    res1_u64 = (((uint64)X_u32) * ((uint64)Y_u32));
    res2_u64 = res1_u64 + ((uint64)Z_u32);

    /* overflow, return MAXUINT16 */
    if(res2_u64 < res1_u64)
    {
        res2_u64 = ((uint64)MAXUINT16);
    }

    /* limitation */
    res2_u64 = ((res2_u64 >= ((uint64)MAXUINT16)) ? ((sint64)MAXUINT16) : res2_u64);

    return ((uint16)res2_u64);

#else

    uint32 res_u32;


    asm volatile(" madds.u  %0, %3, %2, %1   # unsigned Multiply-Add, Saturated \n\
                   sat.hu   %0, %0           # LIMIt: MAXUINT 16                \n\
                 "
               : "=d"(res_u32) : "d"(X_u32), "d"(Y_u32), "d"(Z_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint16) res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0)  */
}

/**
 ***********************************************************************************************************************
 * SrvB_MulAdd_S32S32S32_S16
 *
 * \brief Multiplies two sint32 variables, adds a third one and limits the result to a sint16
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \param    sint32 Z_s32
 * \return   sint16
 * \retval   ((X_s32 * Y_s32) + Z_s32 )saturated to sint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_MulAdd_S32S32S32_S16_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint64 res1_s64;
    sint64 res2_s64;


    /* interim res */
    res1_s64 = (sint64)X_s32 * Y_s32;
    res2_s64 = res1_s64 + ((sint64) Z_s32);

    /* select case, Z_s32>=0L, Z_s32<0L */
    if (Z_s32 >= 0L)
    {
        /* overflow, return MAXSINT16 */
        if(res2_s64 < res1_s64)
        {
            res2_s64 = ((sint64)MAXSINT16);
        }
    }
    else
    {
        /* underflow, return MINSINT16 */
        if(res2_s64 >= res1_s64)
        {
            res2_s64 = ((sint64)MINSINT16);
        }
    }


    /* limitation */
    res2_s64 = ((res2_s64 >= ((sint64)MAXSINT16)) ? ((sint64)MAXSINT16)
                : ((res2_s64 <= ((sint64)MINSINT16)) ? ((sint64)MINSINT16)
                   : res2_s64));


    return ((sint16)res2_s64);

#else

    sint32 res_s32;


    /* the __SATH instruction is a intrinsic define of the compiler
    It is available from hitec version 3.4.2.
    It is the equivalent for a sat.h instruction but within control of the compiler.
    */    
        asm volatile("madds  %0, %3, %2, %1    \n\
                      sat.h  %0, %0            \n\
                     ": "=d"(res_s32) : "d"(X_s32), "d"(Y_s32), "d"(Z_s32) );

        /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
        return ((sint16) res_s32);


    /* SRVB_IMPL_ASM_ENABLE==0 */
#endif

}


/**
 ***********************************************************************************************************************
 * SrvB_MulAdd_U32U32U32_U32
 *
 * \brief Multiplies two uint32 variables, adds a third one and limits the result to an uint32
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \param    uint32 Z_u32
 * \return   uint32
 * \retval   ((X_u32 * Y_u32) + Z_u32 )saturated to uint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_MulAdd_U32U32U32_U32_inline(uint32 X_u32, uint32 Y_u32, uint32 Z_u32))
{
#if (SRVB_IMPL_ASM_ENABLE==0 )

    uint64  res1_u64;
    uint64  res2_u64;


    /* interim res */
    res1_u64 = (((uint64)X_u32) * ((uint64)Y_u32));
    res2_u64 = res1_u64 + ((uint64)Z_u32);

    /* overflow, return MAXUINT32 */
    if(res2_u64 < res1_u64)
    {
        res2_u64 = ((sint64)MAXUINT32);
    }

    /* limitation */
    res2_u64 = ((res2_u64 >= ((sint64)MAXUINT32)) ? ((sint64)MAXUINT32) : res2_u64);

    return( (uint32)res2_u64);

#else

    uint32 res_u32;


    asm volatile("madds.u  %0, %3, %2, %1   # unsigned Multiply-Add, Saturated \n\
                 ": "=d"(res_u32) : "d"(X_u32), "d"(Y_u32), "d"(Z_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);

#endif /* (SRVB_IMPL_ASM_ENABLE==0)  */
}

/**
 ***********************************************************************************************************************
 * SrvB_MulAdd_S32S32S32_S32
 *
 * \brief Multiplies two sint32 variables, adds a third one and limits the result to a sint32
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \param    sint32 Z_s32
 * \return   sint32
 * \retval   ((X_s32 * Y_s32) + Z_s32 )saturated to sint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_MulAdd_S32S32S32_S32_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32))
{
#if (SRVB_IMPL_ASM_ENABLE==0)

    sint64  res1_s64;
    sint64  res2_s64;


    /* interim res */
    res1_s64 = (((sint64)X_s32) * ((sint64)Y_s32));
    res2_s64 = res1_s64 + ((sint64)Z_s32);

    /* select case Z_s32>=0L, Z_s32<0L */
    if (Z_s32 >= 0L)
    {
        /* overflow, return MAXSINT32 */
        if(res2_s64 < res1_s64)
        {
            res2_s64 = ((sint64)MAXSINT32);
        }
    }
    else
    {
        /* underflow, return MINSINT32 */
        if(res2_s64 >= res1_s64)
        {
            res2_s64 = ((sint64)MINSINT32);
        }
    }

    /* limitation */
    res2_s64 = ((res2_s64 >= ((sint64)MAXSINT32)) ? ((sint64)MAXSINT32)
                : ((res2_s64 <= ((sint64)MINSINT32)) ? ((sint64)MINSINT32)
                   : res2_s64));

    return ((sint32)res2_s64);

#else

    sint32 res_s32;


    asm volatile("madds   %0,%3,%1,%2 "
               : "=d"(res_s32) : "d"(X_s32), "d"(Y_s32), "d"(Z_s32));

    /* MISRA RULE 30 VIOLATION: the variable is written in the asm statement */
    return (res_s32);

#endif /* SRVB_IMPL_ASM_ENABLE==0 */
}

/* SRVB_MUL_INL_H */
#endif
