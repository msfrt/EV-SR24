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
 * $Filename__:srvb_div_inl.h$
 *
 * $Author____:KDD2FE$
 *
 * $Function__:Component Toolbox-Import$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MNA9COB$
 * $Date______:29.07.2016$
 * $Class_____:SWHDR$
 * $Name______:srvb_div_inl$
 * $Variant___:1.24.1$
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
 * 1.24.1; 1     29.07.2016 MNA9COB
 *   Review comments update
 * 
 * 1.24.1; 0     27.07.2016 MNA9COB
 *   Bug fix of following functionalities:
 *   SrvB_Div_U64U32_S32
 *   SrvB_Div_U64U32_U32
 *   SrvB_Div_S64U32_S32
 *   SrvB_Div_S64U32_U32
 * 
 * 1.20.0; 0     18.08.2014 PIR5COB
 *   Lebels for ASM services got updated
 * 
 * 1.18.0; 0     21.12.2012 PIR5COB
 *   1. All possible MISRA comments are removed
 *   
 *   2. Removal of SAT specific switches
 * 
 * 1.17.1; 0     25.07.2012 NDI1COB
 *   SrvB_Div_S32U32_S16 and SrvB_Div_S32U32_S8 assembly computations do not 
 *   return proper results
 *   When X = MINSINT32 and Y = (MAXSINT32 + 1) the returned result from 
 *   assembly code is 0 instead of -1
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
 * 1.14.4; 0     03.08.2011 SW84FE
 *   Bugfix
 * 
 * 1.14.3; 0     31.01.2011 VKA2FE
 *   Removal of a nested comment
 * 
 * $
 *
 *************************************************************************
</RBHead>*/



#ifndef _SRVB_DIV_INL_H
#define _SRVB_DIV_INL_H

#include "srvb_limit.h"
#include "srvb_limit_inl.h"

#define MAXSINT64 0x7FFFFFFFFFFFFFFFLL
#define MINSINT64 ( -(MAXSINT64) -1LL)

/*
 ***********************************************************************************************************************
 *
 * List of Functions
 *
 *     SrvB_Div_U64U32_U32,
 *     SrvB_Div_S64S32_S32,                     SrvB_Div_S64S32_U32,
 *     SrvB_Div_S64U32_S32,                     SrvB_Div_S64U32_U32,
 *     SrvB_Div_U64S32_S32,                     SrvB_Div_U64S32_U32,
 *     SrvB_Div_U64U32_S32,
 *
 *     SrvB_Div_S32S32_S32,                     SrvB_Div_S32S32_S16,                      SrvB_Div_S32S32_S8,
 *     SrvB_Div_U32S32_S32,                     SrvB_Div_U32S32_S16,                      SrvB_Div_U32S32_S8,
 *     SrvB_Div_S32U32_S32,                     SrvB_Div_S32U32_S16,                      SrvB_Div_S32U32_S8,
 *     SrvB_Div_U32U32_S32,                     SrvB_Div_U32U32_S16,                      SrvB_Div_U32U32_S8,
 *     SrvB_Div_S32S32_U32,                     SrvB_Div_S32S32_U16,                      SrvB_Div_S32S32_U8,
 *     SrvB_Div_U32S32_U32,                     SrvB_Div_U32S32_U16,                      SrvB_Div_U32S32_U8,
 *     SrvB_Div_S32U32_U32,                     SrvB_Div_S32U32_U16,                      SrvB_Div_S32U32_U8,
 *     SrvB_Div_U32U32_U32,                     SrvB_Div_U32U32_U16,                      SrvB_Div_U32U32_U8,
 *
 *     SrvB_Mod_S32S32_S32,                     SrvB_Mod_S32S32_S16,                      SrvB_Mod_S32S32_S8,
 *     SrvB_Mod_U32U32_U32,                     SrvB_Mod_U32U32_U16,                      SrvB_Mod_U32U32_U8,
 *
 *     SrvB_MulDiv_S32S32S32_S32,               SrvB_MulDiv_S32S32S32_S16
 *     SrvB_MulDiv_S32S32S32_U16
 *     SrvB_MulDiv_U32U32U32_U32,               SrvB_MulDiv_U32U32U32_U16
 *
 *
 ***********************************************************************************************************************
 */


/*
 ***********************************************************************************************************************
 *
 *
 *
 * INTERNAL ROUTINES
 *
 *
 *
 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(sint64u SrvB_DivMod_S32S32_S64_inline(sint32 X_s32, sint32 Y_s32))
{
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* quotient and remainder */
    sint32 temp_s32;
    sint32 sgn_s32;

    asm volatile("      jz       %[Y_s32],L2F_%=             # check if divisor is zero                \n\
                        jeq      %[Y_s32],-1,L3F_%=          # check special case: divisor = -1        \n\
                        cls      %[temp_s32],%[X_s32]        # check if ...                            \n\
                        mov      %[sgn_s32],23               # ...                                     \n\
                        jlt.u    %[temp_s32],%[sgn_s32],L1F_%=   # ... 8 bit division fits             \n\
                                                                                                       \n\
                        dvinit.b %A0,%[X_s32],%[Y_s32]       # init 8 bit division                     \n\
                        j L6F_%=                             #                                         \n\
              L1F_%=:                                                                                  \n\
                        jlt.u    %[temp_s32],15,L4F_%=      # ... 16 bit division fits                 \n\
                        dvinit.h %A0,%[X_s32],%[Y_s32]      # init 16 bit division                     \n\
                        j L5F_%=                            #                                          \n\
              L2F_%=:                                       # division by zero handling:               \n\
                        jnz      %[X_s32],L25F_%=           # check dividend is also zero              \n\
                        mov      %L0,1                      #  0/0=1                                   \n\
                        mov      %H0,0                      #  remainder = 0                           \n\
                        j        L8F_%=                     #  exit                                    \n\
              L25F_%=:  extr     %L0,%[X_s32],31,1          # look for the sign                        \n\
                        movh     %H0, 0x8000                #  prepare limitation                      \n\
                        caddn    %L0, %L0, %H0, -1          #  MAXSINT32/MINSINT32                     \n\
                        j        L35F_%=                    #  exit                                    \n\
              L3F_%=:                                       # special case handling:                   \n\
                        muls     %L0,%[X_s32], -1           #  saturated multiplication                \n\
              L35F_%=:  mov      %H0, 0                     #  calculate remainder                     \n\
                        j        L8F_%=                     #  exit                                    \n\
              L4F_%=:                                                                                  \n\
                        dvinit   %A0,%[X_s32],%[Y_s32]      # init 32 bit division                     \n\
                        dvstep   %A0,%A0,%[Y_s32]           # 32 bit division                          \n\
                        dvstep   %A0,%A0,%[Y_s32]                                                      \n\
              L5F_%=:   dvstep   %A0,%A0,%[Y_s32]           # 16 bit division                          \n\
              L6F_%=:   dvstep   %A0,%A0,%[Y_s32]           # 8 bit division                           \n\
              L7F_%=:   dvadj    %A0,%A0,%[Y_s32]                                                      \n\
              L8F_%=:                                                                                  \n\
                  ": "=&d"(temp.s64), [temp_s32] "=&d"(temp_s32), [sgn_s32] "=&d"(sgn_s32)
                   : [X_s32] "d"(X_s32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return(temp);
}

MEMLAY_USE_FORCE_INLINE(uint64u SrvB_DivMod_U32U32_U64_inline(uint32 X_u32, uint32 Y_u32))
{
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp; /* quotient and remainder */
    uint32 temp_u32;
    uint32 sgn_u32;

    asm volatile("      jz       %[Y_u32],L2F_%=             # check if divisor is zero                 \n\
                        clz      %[temp_u32],%[X_u32]        # check if ...                             \n\
                        mov      %[sgn_u32],24               # ...                                      \n\
                        jlt.u    %[temp_u32],%[sgn_u32],L1F_%= # ... 8 bit division fits                  \n\
                                                                                                        \n\
                        dvinit.bu %A0,%[X_u32],%[Y_u32]      # init 8 bit division                      \n\
                        j L7F_%=                             #                                          \n\
                L1F_%=:                                                                                 \n\
                        mov      %[sgn_u32],16               # ...                                      \n\
                        jlt.u    %[temp_u32],%[sgn_u32],L4F_%=   # ... 16 bit division fits             \n\
                        dvinit.hu %A0,%[X_u32],%[Y_u32]      # init 16 bit division                     \n\
                        j L6F_%=                             #                                          \n\
                L2F_%=:                                      # division by zero handling:               \n\
                        jnz      %[X_u32],L25F_%=            # check dividend is also zero              \n\
                        mov      %L0,1                       #  0/0=1                                   \n\
                        j        L35F_%=                     #  exit                                    \n\
               L25F_%=:                                                                                 \n\
                        movh     %L0, 0x0000                 #  prepare limitation                      \n\
                        not      %L0                         #  MAXSINT32/MINSINT32                     \n\
               L35F_%=: mov      %H0, 0                      #  remainder = 0                           \n\
                        j        L8F_%=                      #  exit                                    \n\
                L4F_%=: dvinit.u %A0, %[X_u32], %[Y_u32]     # init 32 bit division                     \n\
                        dvstep.u %A0, %A0, %[Y_u32]                                                     \n\
                        dvstep.u %A0, %A0, %[Y_u32]                                                     \n\
                L6F_%=: dvstep.u %A0, %A0, %[Y_u32]          # 16 bit division                          \n\
                L7F_%=: dvstep.u %A0, %A0, %[Y_u32]          # 8 bit division                           \n\
                L8F_%=:                                                                                 \n\
                        "
                      : "=&d"(temp.u64), [temp_u32] "=&d"(temp_u32), [sgn_u32] "=&d"(sgn_u32)
                      : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return(temp);
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC DIVISION with 32 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */
/**
 ***********************************************************************************************************************
 * SrvB_Div_U64U32_U32
 *
 * \brief uint64 uint32 division with uint32 saturation and check on divide by zero.
 *
 * Divide an unsigned 64-bit variable by a unsigned 32-bit variable and return the result as unsigned 32-bit varaible.
 * The result is limited to MAXUINT32 (MINUINT32) to prevent overflow (underflow).
 * Note, this function is used in all other 64bit divisor variants.
 *
 * \param   uint64   X_u64                      Operand 1, unsigned 64-bit variable
 * \param   sint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint32   (X_s64 / Y_u32)            Result,  unsigned 32-bit variable
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Div_U64U32_U32_inline(uint64 X_u64, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint64u tmp_u64s;
    uint64  res_u64 = 0;
    uint32  tmp_u32;
    uint    i = 0;

    /* create union */
    tmp_u64s.u64 = X_u64;


    /* avoid zero divisor  */
    if(Y_u32 == 0ul)
    {
        /* limitation of result in case of a zero divisor */
        res_u64 = MAXUINT32;
    }
    else if (Y_u32 > 0x7FFFFFFFul)
    {
        /* calculate the interim result */
        tmp_u32 = tmp_u64s.u64s.h;
        res_u64 = ((uint64) tmp_u32);

        /* calculate the rest */
        tmp_u64s.u64 -= ((uint64) tmp_u32) * ((uint64) Y_u32);

        /* as long as the high Bytes are filled */
        while (tmp_u64s.u64s.h > 0)
        {
            /* calculate the interim result */
            tmp_u32 = tmp_u64s.u64s.h;
            res_u64 += ((uint64) tmp_u32);

            /* calculate the rest */
            tmp_u64s.u64 -= ((uint64) tmp_u32) * ((uint64) Y_u32);
        }
        tmp_u32 = tmp_u64s.u64s.l / Y_u32;
        res_u64 += ((uint64) tmp_u32);

        /* limitation  */
        res_u64 = ( (res_u64 > ((uint64)MAXUINT32)) ? ((uint64)MAXUINT32) : res_u64 );
    }
    else
    {
        /* divide the high bytes */
        tmp_u32 = tmp_u64s.u64s.h / Y_u32;

        /* calculate the interim result */
        res_u64 = res_u64 + tmp_u32;

        /* calculate the rest */
        tmp_u64s.u64s.h -= tmp_u32 * Y_u32;

        if ( res_u64 < ((uint64)MAXUINT32) )
        {
            while (i < 32)
            {
                /* go just one bit to the right */
                res_u64      <<= 1;
                tmp_u64s.u64 <<= 1;

                /* modulo */
                tmp_u32  = tmp_u64s.u64s.h / Y_u32;

                /*  oddment  */
                tmp_u64s.u64s.h -= tmp_u32 * Y_u32;

                /* new interim result */
                res_u64  = res_u64 + ((uint64)tmp_u32);

                /* limit your further efforts in case of maximum value */
                if ( res_u64 >= ((uint64)MAXUINT32) )
                {
                    i = 32;
                }
                i++;
            }
        }
        /* limitation  */
        res_u64 = ( (res_u64 > ((uint64)MAXUINT32)) ? ((uint64)MAXUINT32) : res_u64 );
    }

    return( (uint32) res_u64 );

#else
   
    uint64 temp_u64;
    uint64 temp1_u64;
    uint32 shift_u32 = 32u;
    uint32 res_u32 = 0xFFFFFFFFu;
     
    temp_u64 = X_u64;
    
    if ( Y_u32 != 0u )
    { 

    asm volatile (
    "     jge.u     %H[X_u64], %[Y_u32], L50F_%=        #jump to end if result will be >= MAXUINT32             \n\
          mov       %[res],0                            # load zero in result                                   \n\
 L40B_%=: clz       %H[Y_u64], %H[X_u64]                #leading zeroes of high word of dividend                \n\
          min       %H[Y_u64],%[shift],%H[Y_u64]        #compare with #bits of dividend to be processed         \n\
          sub       %[shift], %[shift], %H[Y_u64]       #adjust remaining dividend bits                         \n\
          sh        %H[X_u64],%H[X_u64],%H[Y_u64]       #shift high part left                                   \n\
          rsub      %L[Y_u64], %H[Y_u64],32             #t2 = 32- clz                                           \n\
          rsub      %L[Y_u64]                           #                                                       \n\
          sh        %L[Y_u64], %L[X_u64], %L[Y_u64]     #shift low part right                                   \n\
          sh        %L[X_u64], %L[X_u64], %H[Y_u64]     #keep remaining bits of low part of dividend            \n\
          or        %H[X_u64], %H[X_u64], %L[Y_u64]     #put new dividend together                              \n\
          sh        %[res],%[res],%H[Y_u64]             #shift result accordingly                               \n\
          jge.u     %H[X_u64],%[Y_u32],L60F_%=          #compare hp of x & divisor and branch if hp of x >= divisor\n\
          jz        %[shift],L50F_%=                    #check & jump to validate result if div is already processed\n\
          sh        %[res],%[res],1                     #shift result by 1                                     \n\
          addi      %[res],%[res],1                     #add 1 to result                                       \n\
          sh        %H[X_u64],%H[X_u64],1               # shift the 64-bit dividend left by 1                  \n\
          sh        %L[Y_u64],%L[X_u64],-31             #                                                      \n\
          or        %H[X_u64],%H[X_u64],%L[Y_u64]                                                              \n\
          sub       %H[X_u64],%H[X_u64],%[Y_u32]        # compute hp of dividend for next iteration            \n\
          sh        %L[X_u64], %L[X_u64], 1             #                                                      \n\
          addi      %[shift],%[shift],-1                # shift = shift -1                                     \n\
          j         L70F_%=                                                                                    \n\
 L60F_%=: dvinit.u  %A[Y_u64], %H[X_u64], %[Y_u32]      # Intialise the dividend                               \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      # Perform 32 bit division                              \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          or        %[res],%[res],%L[Y_u64]             # append new result                                    \n\
          muls.u    %L[Y_u64],%L[Y_u64], %[Y_u32]       # compute the rest by modulo                           \n\
          sub       %H[X_u64],%H[X_u64],%L[Y_u64]       # compute the dividend for next iteration              \n\
 L70F_%=: jnz       %[shift],L40B_%=                    # check if dividend is already processed if not loop   \n\
 L50F_%=: " : [X_u64] "+d"(temp_u64), [Y_u64] "=d"(temp1_u64),
              [Y_u32] "+d"(Y_u32),[shift] "+d" (shift_u32),[res] "+d" (res_u32) );
    }
    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return(res_u32);
    
/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 ***********************************************************************************************************************
 * SrvB_Div_S64S32_S32
 *
 * \brief sint64 sint32 division with sint32 saturation and check on divide by zero.
 *
 * Divide a signed 64-bit variable by a signed 32-bit variable and return the result as signed 32-bit variable.
 * The result is limited to MAXSINT32 (MINSINT32)  to prevent overflow (underflow).
 *
 * \param   sint64   X_s64                      Operand 1, signed   64-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return   sint32   (X_s64 / Y_s32)           Result, signed 32-bit variable
 *
 * \f[ Res_{s32} = \frac{X_{s64}}{Y_{s32}}  \f]
 *
 * \image html https://inside-ws.bosch.com/FIRSTspiritWeb/wcms/wcms_c/media/de/system/layout/logos/bosch_logo~1.gif
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Div_S64S32_S32_inline(sint64 X_s64, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)
    uint64  tmp_u64;
    uint32  tmp_u32;
    uint32  div_u32;
    sint32  res_s32 = 1L;


    /* convert the dividend  to uint64,  calculate the sign of the result */
    if (X_s64 < 0LL)
    {
        tmp_u64   = ((X_s64 < - MAXSINT64) ?  0x8000000000000000ULL :  ((uint64) -X_s64) );
        res_s32   *= -1L;
    }
    else
    {
        tmp_u64  = ((uint64) (X_s64));
    }

    /* convert the divisor to uint32, calculate the sign of the result */
    if (Y_s32 < 0L)
    {
        div_u32   = ((Y_s32 == MINSINT32) ? 0x80000000UL : ((uint32) -Y_s32));
        res_s32   *= -1L;
    }
    else
    {
        div_u32  = ((uint32) (Y_s32));
    }

    /* 64 bit  uint division, zero divisor is avoided by the SrvB_Div_U64U32_U32 routine  */
    tmp_u32 = SrvB_Div_U64U32_U32(tmp_u64, div_u32);

    if (tmp_u32 > ((uint32) MAXSINT32))
    {
        res_s32  = ((res_s32 == -1L) ? MINSINT32 : MAXSINT32);
    }
    else
    {
        res_s32 *= ((sint32) (tmp_u32));
    }

    return( res_s32 );

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp_s64_un;
    uint32  sign;

    /* using union to avoid the compiler's extra "mov" command for the return after assembler code */
    temp_s64_un.s64 = X_s64;

    asm volatile (
        "         xor       %[sign], %H[X_s64], %[Y_s32]        #define sign of the result                                \n\
                  jz        %[Y_s32],L45F_%=                    #jump for saturation if Y==0                              \n\
                  jz.t     %[Y_s32], 31, L5F_%=                 #neg. sign of Y_s32 => change signs, otherwise jump to 5  \n\
                  not       %[Y_s32]                            # sign change of Y_s32                                    \n\
                  addi      %[Y_s32], %[Y_s32], 1               #                                                         \n\
          L5F_%=: jz.t     %H[X_s64], 31, L10F_%=               #neg. sign of X_s64 => change signs, otherwise jump to 10 \n\
                  not       %H[X_s64]                           # sign change of X_s64                                    \n\
                  not       %L[X_s64]                           #                                                         \n\
                  addx      %L[X_s64], %L[X_s64], 1             #addition where overflow set carry bit in psw             \n\
                  addc      %H[X_s64], %H[X_s64], 0             #add the carry bit from the step before                   \n\
          L10F_%=:jge.u     %H[X_s64], %[Y_s32], L45F_%=        #jump for saturation if result will be >= MAXUINT32       \n\
          L30F_%=:jz.t      %[Y_s32],31,L40F_%=                 #jump for standard calculation when divisor < MAXSINT32   \n\
                  sh        %[Y_s32], -1                        #divide divisor                                           \n\
                  dextr     %L[X_s64], %H[X_s64], %L[X_s64], 31 #divide dividends low bytes                               \n\
                  sh        %H[X_s64], -1                       #divide dividends high bytes                              \n\
          L40F_%=:dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]      #unsigned 32 bit division                                 \n\
                  dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                                \n\
                  dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                                \n\
                  dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                                \n\
                  jnz.t      %L[X_s64], 31, L45F_%=            #avoid overflow in result, signed saturation              \n\
                  jz.t       %[sign], 31, L50F_%=              #negative result expected, otherwise jump                 \n\
                  muls      %L[X_s64], %L[X_s64], -1           #negative result                                          \n\
                  j         L50F_%=                                                                                      \n\
          L45F_%=:movh      %L[X_s64], 0x8000                  # MINSINT32                                               \n\
                  jnz.t     %[sign], 31, L50F_%=               #neg. sign => change signs                                \n\
                  addi      %L[X_s64], %L[X_s64], -1           # MAXSINT32                                               \n\
          L50F_%=:" : [sign] "=&d"(sign), [X_s64] "+d"(temp_s64_un.s64), [Y_s32] "+d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint32)temp_s64_un.s64s.l);

/* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S64S32_U32
 *
 * \brief sint64 sint32 division with uint32 saturation and check on divide by zero.
 *
 * Divide a signed 64-bit variable by a signed 32-bit variable and return the result as unsigned 32-bit. variable
 * The result is limited to MAXUINT32  (MINUINT32) to  prevent overflow (underflow).
 *
 * \param   sint64   X_s64                      Operand 1, signed 64-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed 32-bit variable
 * \return  uint32   (X_s64 / Y_s32)            Result,  unsigned 32-bit variable
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Div_S64S32_U32_inline(sint64 X_s64, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint64  tmp_u64;
    uint32  div_u32;
    uint32  res_u32;


    /* calculate if the result will be  < 0 => MINUINT32 = 0 */
    if( ((X_s64 < 0) && (Y_s32 >= 0)) || ((X_s64 >= 0) && (Y_s32 < 0)))
    {
        res_u32 = MINUINT32;
    }
    /* avoid zero divisor is not required,it is done by the  SrvB_Div_U64U32_U32 service */
    else
    {
        /* convert the dividend  to uint64  */
        if (X_s64 <= -1LL)
        {
            tmp_u64   = ((X_s64 < - MAXSINT64) ?  0x8000000000000000ULL :  ((uint64) -X_s64));
        }
        else
        {
            tmp_u64  = ((uint64) (X_s64));
        }
        /* convert the divisor to uint32, calculate the sign of the result */
        if (Y_s32 <= -1L)
        {
            div_u32   = ((Y_s32 == MINSINT32) ? 0x80000000UL : ((uint32) -Y_s32));
        }
        else
        {
            div_u32  = ((uint32) Y_s32);
        }

        /* 64 bit  uint division  */
        res_u32 = SrvB_Div_U64U32_U32(tmp_u64, div_u32);
    }

    return( res_u32 );

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp_s64_un;
    uint32  temp_u32;

    /* using union to avoid the compiler's extra "mov" command for the return after assembler code */
    temp_s64_un.s64 = X_s64;

    asm volatile (
    "         xor       %[temp_u32], %H[X_s64], %[Y_s32]    # define sign of the result                            \n\
              jnz.t     %[temp_u32], 31, L45F_%=            # neg. sign => saturation                              \n\
              jz        %[Y_s32],L20F_%=                    #jump for saturation if Y==0                           \n\
              jz.t      %[Y_s32], 31, L10F_%=               # boths signs are positive => next step of calculation \n\
              not       %[Y_s32]                            # sign change of Y_s32                                 \n\
              addi      %[Y_s32], %[Y_s32], 1               #                                                      \n\
              not       %H[X_s64]                           # sign change of X_s64                                 \n\
              not       %L[X_s64]                           #                                                      \n\
              addx      %L[X_s64], %L[X_s64], 1             # addition where overflow set carry bit in psw         \n\
              addc      %H[X_s64], %H[X_s64], 0             # add the carry bit from the step before               \n\
      L10F_%=:jlt.u     %H[X_s64], %[Y_s32], L30F_%=        #jump for calculation if result will be <= MAXUINT32   \n\
      L20F_%=:mov       %L[X_s64], -1                       #saturation                                            \n\
              j         L50F_%=                                                                                   \n\
      L30F_%=:jz.t      %[Y_s32],31,L40F_%=                 #jump for standard calculation when divisor < MAXSINT32\n\
              sh        %[Y_s32], -1                        #divide divisor                                        \n\
              dextr     %L[X_s64], %H[X_s64], %L[X_s64], 31 #divide dividends low bytes                            \n\
              sh        %H[X_s64], -1                       #divide dividends high bytes                           \n\
      L40F_%=:dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]      #unsigned 32 bit division                              \n\
              dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                             \n\
              dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                             \n\
              dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                             \n\
              j         L50F_%=                                                                                   \n\
      L45F_%=:movh      %L[X_s64], 0                        #saturation zo MINUINT32 = 0                           \n\
      L50F_%=:" : [temp_u32] "=&d"(temp_u32), [X_s64] "+d"(temp_s64_un.s64), [Y_s32] "+d"(Y_s32) );


    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return(temp_s64_un.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
***********************************************************************************************************************
* SrvB_Div_S64U32_S32
*
* \brief sint64 uint32 division with sint32 saturation and check on divide by zero.
*
* Divide a signed 64-bit variable by a unsigned 32-bit variable and return the result as signed 32-bit varaible.
* The result is limited to MAXSINT32 (MINSINT32) to  prevent overflow (underflow).
*
* \param   sint64   X_s64                      Operand 1, signed 64-bit variable
* \param   sint32   Y_u32                      Operand 2, unsigned 32-bit variable
* \return  sint32   (X_s64 / Y_u32)            Result,  signed 32-bit variable
*
***********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Div_S64U32_S32_inline(sint64 X_s64, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint64  tmp_u64;
    uint32  tmp_u32;
    sint32  res_s32 = 1L;

    /* convert the dividend  to uint64,  calculate the sign of the result */
    if (X_s64 <= -1)
    {
        tmp_u64   = ((X_s64 < (- MAXSINT64)) ?  0x8000000000000000ULL :  ((uint64) -X_s64) );
        res_s32   *= -1L;
    }
    else
    {
        tmp_u64  = ((uint64) (X_s64));
    }

    /* 64 bit  uint division, zeroo divisor protection is dane by SrvB_Div_U64U32_U32   */
    tmp_u32 = SrvB_Div_U64U32_U32(tmp_u64, Y_u32);

    if (tmp_u32 > ((uint) MAXSINT32))
    {
        res_s32  = ( (res_s32 == -1L) ? MINSINT32 : MAXSINT32 ) ;
    }
    else
    {
        res_s32 *= ((sint32) tmp_u32);
    }

    return( res_s32 );

#else

    sint64 temp_s64;
    uint32 sign;
    uint64 temp1_s64;
    uint32 shift_u32 = 32u;
    uint32 res_u32 = 0;
    
    temp_s64 = X_s64;
 
    asm volatile (
    "     extr      %[sign], %H[X_s64], 31, 1           #sign sign extension                                   \n\
          jz        %[Y_u32], L30F_%=                   #jump for saturation if Y==0                           \n\
          jz        %[sign], L20F_%=                    #jump if result is positive                            \n\
          rsub      %H[X_s64]                           # sign change of X_s64                                 \n\
          rsub      %L[X_s64]                           #                                                      \n\
          cadd      %H[X_s64],%L[X_s64],%H[X_s64],-1    # 2's compliment of X_s64                              \n\
 L20F_%=: jge.u     %H[X_s64], %[Y_u32], L30F_%=        #jump for saturation if result will be > MAXUINT32     \n\
 L40B_%=:clz       %H[Y_u64], %H[X_s64]                #leading zeroes of high word of dividend                \n\
          min       %H[Y_u64],%[shift],%H[Y_u64]        #compare with #bits of dividend to be processed        \n\
          sub       %[shift], %[shift], %H[Y_u64]       #adjust remaining dividend bits                        \n\
          sh        %H[X_s64],%H[X_s64],%H[Y_u64]       #shift high part left                                  \n\
          rsub      %L[Y_u64], %H[Y_u64],32             #t2 = 32- clz                                          \n\
          rsub      %L[Y_u64]                           #                                                      \n\
          sh        %L[Y_u64], %L[X_s64], %L[Y_u64]     #shift low part right                                  \n\
          sh        %L[X_s64], %L[X_s64], %H[Y_u64]     #keep remaining bits of low part of dividend           \n\
          or        %H[X_s64], %H[X_s64], %L[Y_u64]     #put new dividend together                             \n\
          sh        %[res],%[res],%H[Y_u64]             #shift result accordingly                              \n\
          jge.u     %H[X_s64],%[Y_u32],L60F_%=          #compare hp of x & divisor and branch if hp of x >= divisor\n\
          jz        %[shift],L80F_%=                    #check & jump to validate result if div is already processed\n\
          sh        %[res],%[res],1                     #shift result by 1                                     \n\
          addi      %[res],%[res],1                     #                                                      \n\
          sh        %H[X_s64],%H[X_s64],1               # shift the 64-bit dividend left by 1                  \n\
          sh        %L[Y_u64],%L[X_s64],-31             #                                                      \n\
          or        %H[X_s64],%H[X_s64],%L[Y_u64]       #                                                      \n\
          sub       %H[X_s64],%H[X_s64],%[Y_u32]        # compute hp of dividend for next iteration            \n\
          sh        %L[X_s64], %L[X_s64], 1             #                                                      \n\
          addi      %[shift],%[shift],-1                # shift = shift -1                                     \n\
          j         L70F_%=                                                                                    \n\
 L60F_%=: dvinit.u  %A[Y_u64], %H[X_s64], %[Y_u32]      # Intialise the dividend                               \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      # Perform 32 bit division                              \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          or        %[res],%[res],%L[Y_u64]             # append new result                                    \n\
          muls.u    %L[Y_u64],%L[Y_u64], %[Y_u32]       # compute the rest by modulo                           \n\
          sub       %H[X_s64],%H[X_s64],%L[Y_u64]       # compute the dividend for next iteration              \n\
 L70F_%=: jnz       %[shift],L40B_%=                   # check if dividend is already processed if not loop    \n\
 L80F_%=: jnz.t     %[res], 31, L30F_%=                 #avoid overflow in result, signed saturation           \n\
          jz        %[sign], L50F_%=                    #positive result                                       \n\
          muls      %[res], %[res], -1                  #negative result                                       \n\
          j         L50F_%=                             #go to the end                                         \n\
 L30F_%=: movh      %[res], 0x8000                      # MINSINT32                                            \n\
          caddn     %[res], %[sign], %[res], -1         # MAXSINT32                                            \n\
 L50F_%=: " : [sign] "=d"(sign), [X_s64] "+d"(temp_s64), [Y_u32] "+d"(Y_u32),
              [Y_u64] "=d"(temp1_s64),[shift] "+d" (shift_u32),[res] "+d" (res_u32));
    
    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint32) res_u32);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 ***********************************************************************************************************************
 * SrvB_Div_S64U32_U32
 *
 * \brief sint64 uint32 division with uint32 saturation and check on divide by zero.
 *
 * Divide a signed 64-bit variable by a unsigned 32-bit variable and return the result as unsigned 32-bit varaible.
 * The result is limited to MAXUINT32 (MINUINT32) to prevent overflow (underflow).
 *
 * \param   sint64   X_s64                      Operand 1, signed 64-bit variable
 * \param   sint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint32   (X_s64 / Y_u32)            Result,  unsigned 32-bit variable
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Div_S64U32_U32_inline(sint64 X_s64, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32  res_u32;


    /* calculate if the result will be  > MAXUINT321 = 0 */
    if(X_s64 < 0LL)
    {
        res_u32 = MINUINT32;
    }
    /* avoid zero divisor is not required,it is done by the  SrvB_Div_U64U32_U32 service */
    else
    {
        /* 64 bit  uint division */
        res_u32 = SrvB_Div_U64U32_U32( (uint64) X_s64, Y_u32);
    }

    return( res_u32 );

#else
 
    sint64 temp_s64;
    uint64 temp1_s64;
    uint32 shift_u32 = 32u;
    uint32 res_u32 = 0;
    
    temp_s64 = X_s64;
    
    if( temp_s64>= 0 )
    {
  
    asm volatile (
    "     jz        %[Y_u32],L20F_%=                    #jump for saturation if Y==0                             \n\
          jlt.u     %H[X_s64], %[Y_u32], L40FB_%=        #jump for calculation if result will be <= MAXUINT32     \n\
 L20F_%=: mov       %[res], -1                          #saturation                                              \n\
          j         L50F_%=                                                                                      \n\
 L40FB_%=:clz       %H[Y_u64], %H[X_s64]                # leading zeroes of high word of dividend                \n\
          min       %H[Y_u64],%[shift],%H[Y_u64]        # compare with #bits of dividend to be processed         \n\
          sub       %[shift], %[shift], %H[Y_u64]       # adjust remaining dividend bits                         \n\
          sh        %H[X_s64],%H[X_s64],%H[Y_u64]       # shift high part left                                   \n\
          rsub      %L[Y_u64], %H[Y_u64],32             # t2 = 32- clz                                           \n\
          rsub      %L[Y_u64]                           #                                                        \n\
          sh        %L[Y_u64], %L[X_s64], %L[Y_u64]     # shift low part right                                   \n\
          sh        %L[X_s64], %L[X_s64], %H[Y_u64]     # keep remaining bits of low part of dividend            \n\
          or        %H[X_s64], %H[X_s64], %L[Y_u64]     # put new dividend together                              \n\
          sh        %[res],%[res],%H[Y_u64]             # shift result accordingly                               \n\
          jge.u     %H[X_s64],%[Y_u32],L60F_%=          # compare hp of x & divisor and branch if hp of x >= divisor\n\
          jz        %[shift],L50F_%=                    # check & jump to validate result if div is already processed\n\
          sh        %[res],%[res],1                     # shift result by 1                                      \n\
          addi      %[res],%[res],1                     # add 1 to result                                        \n\
          sh        %H[X_s64],%H[X_s64],1               # shift the 64-bit dividend left by 1                    \n\
          sh        %L[Y_u64],%L[X_s64],-31             #                                                        \n\
          or        %H[X_s64],%H[X_s64],%L[Y_u64]       #                                                        \n\
          sub       %H[X_s64],%H[X_s64],%[Y_u32]        # compute hp of dividend for next iteration              \n\
          sh        %L[X_s64], %L[X_s64], 1             #                                                        \n\
          addi      %[shift],%[shift],-1                # shift = shift -1                                       \n\
          j         L70F_%=                                                                                      \n\
 L60F_%=: dvinit.u  %A[Y_u64], %H[X_s64], %[Y_u32]      # Intialise the dividend                                 \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      # Perform 32 bit division                                \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                        \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                        \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                        \n\
          or        %[res],%[res],%L[Y_u64]             # append new result                                      \n\
          muls.u    %L[Y_u64],%L[Y_u64], %[Y_u32]       # compute the rest by modulo                             \n\
          sub       %H[X_s64],%H[X_s64],%L[Y_u64]       # compute the dividend for next iteration                \n\
 L70F_%=: jnz       %[shift],L40FB_%=                   # check if dividend is already processed if not loop     \n\
 L50F_%=: " : [X_s64] "+d"(temp_s64), [Y_u64] "=d"(temp1_s64),
              [Y_u32] "+d"(Y_u32),[shift] "+d" (shift_u32),[res] "+d" (res_u32) );
    }

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return(res_u32);
    
/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 ***********************************************************************************************************************
 * SrvB_Div_U64S32_S32
 *
 * \brief Uint64 sint32 division with sint32 saturation and check on divide by zero.
 *
 * Divide an unsigned 64-bit variable by a signed 32-bit variable and return the result as signed 32-bit variable.
 * The result is limited to MAXSINT32 (MINSINT32)  to prevent overflow (underflow).
 *
 * \param   uint64   X_u64                       Operand 1, unsigned 64-bit variable
 * \param   sint32   Y_s32                       Operand 2, signed 32-bit variable
 * \return   sint32   (X_u64 / Y_s32)            Result, signed 32-bit variable
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Div_U64S32_S32_inline(uint64 X_u64, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32  tmp_u32;
    uint32  div_u32;
    sint32  res_s32 = 1L;


    /* convert the divisor to uint32, calculate the sign of the result */
    /* convert the divisor to uint32, calculate the sign of the result */
    if (Y_s32 < 0L)
    {
        div_u32   = ( (Y_s32 == MINSINT32) ? 0x80000000UL : ((uint32) -Y_s32) );
        res_s32   *= -1L;
    }
    else
    {
        div_u32  = ((uint32) Y_s32 );
    }

    /* 64 bit  uint division, zeroo divisor protection is dane by SrvB_Div_U64U32_U32   */
    tmp_u32 = SrvB_Div_U64U32_U32(X_u64, div_u32);

    if ( tmp_u32 > (uint32) MAXSINT32 )
    {
        res_s32  = ( (res_s32 == -1L) ? MINSINT32 : MAXSINT32 ) ;
    }
    else
    {
        res_s32 *= ((sint32) tmp_u32);
    }

    return( res_s32 );

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64_un;
    uint32  sign_u32;
    uint32  Y_u32;

    /* using union to avoid the compiler's extra "mov" command for the return after assembler code */
    temp_u64_un.u64 = X_u64;

    asm volatile ("\n\
              sh       %[sign], %[Y_s32],-31                  #check sign of result                         \n\
              abs      %[Y_u32], %[Y_s32]                     #calculate abs(Y_s32)                         \n\
                                                              #look for saturation                          \n\
              jz        %[Y_u32], L20F_%=                     #jump for saturation if Y==0                  \n\
              jlt.u     %[Y_u32], %H[X_u64], L20F_%=          #jump for saturation if result > MAXUINT32    \n\
                                                              #respect TRICORE errata: overflow in dvstep.u \n\
              jz.t      %[Y_u32],31,L30F_%=                   #if MSB(divisor) == 0 => standard calculation \n\
              sh        %[Y_u32], -1                          #divide divisor                               \n\
              dextr     %L[X_u64], %H[X_u64], %L[X_u64], 31   #divide dividends low bytes                   \n\
              sh        %H[X_u64], -1                         #divide dividends high bytes                  \n\
      L30F_%=:dvstep.u  %A[X_u64], %A[X_u64], %[Y_u32]        #unsigned 32 bit division                     \n\
              dvstep.u  %A[X_u64], %A[X_u64], %[Y_u32]                                                      \n\
              dvstep.u  %A[X_u64], %A[X_u64], %[Y_u32]                                                      \n\
              dvstep.u  %A[X_u64], %A[X_u64], %[Y_u32]                                                      \n\
              jnz.t     %L[X_u64],31, L20F_%=                 #saturation to sint32 bit range               \n\
              jz        %[sign], L50F_%=                      #positive result is ok => end                 \n\
              muls      %L[X_u64],%L[X_u64],-1                #negative result is expected                  \n\
              j         L50F_%=                               # end                                         \n\
      L20F_%=:movh      %L[X_u64], 0x8000                     #saturation to MINSINT32                      \n\
              caddn     %L[X_u64],%[sign],%L[X_u64], -1       #conditioned saturation to MAXSINT32          \n\
      L50F_%=:" : [Y_u32] "=&d"(Y_u32), [sign] "=&d"(sign_u32) , [X_u64] "+d"(temp_u64_un.u64)
            : [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint32)(temp_u64_un.u64s.l));

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
***********************************************************************************************************************
* SrvB_Div_U64S32_U32
*
* \brief unsint64 sint32 division with uint32 saturation and check on divide by zero.
*
* Divide an unsigned 64-bit variable by a signed 32-bit variable and return the result as unsigned 32-bit. variable
* The result is limited to MAXUINT32  (MINUINT32) to  prevent overflow (underflow).
*
* \param   uint64   X_u64                      Operand 1, unsigned 64-bit variable
* \param   sint32   Y_s32                      Operand 2, signed 32-bit variable
* \return  uint32   (X_u64 / Y_s32)            Result,  unsigned 32-bit variable
*
***********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Div_U64S32_U32_inline(uint64 X_u64, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32  res_u32;


    /* calculate if the result will be  > MAXUINT321 = 0 */
    if(Y_s32 < 0L)
    {
        res_u32 = 0L;
    }
    else
    {
        /* 64 bit  uint division */
        res_u32 = SrvB_Div_U64U32_U32( X_u64 , (uint32) Y_s32  );
    }

    return( res_u32 );

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64_un;

    /* using union to avoid the compiler's extra "mov" command for the return after assembler code */
    temp_u64_un.u64 = X_u64;


    asm volatile ("\n\
              jz.t      %[Y_s32], 31, L10F_%=                 # Y_s32 is positive, regular calculation       \n\
              movh      %L[X_u64], 0                          # else  saturation to zero                     \n\
              j         L50F_%=                               # jump to the end                              \n\
      L10F_%=:jz        %[Y_s32], L20F_%=                     # jump for saturation when Y==0                \n\
              jge.u     %H[X_u64], %[Y_s32], L20F_%=          # jump for saturation if result > MAXUINT32    \n\
                                                              # avoid overflow in dvstep instruction         \n\
              jz.t      %[Y_s32],31,L30F_%=                   # if MSB(divisor) == 0 => standard calculation \n\
              sh        %[Y_s32], -1                          # divide divisor                               \n\
              dextr     %L[X_u64], %H[X_u64], %L[X_u64], 31   # divide dividends low bytes                   \n\
              sh        %H[X_u64], -1                         # divide dividends high bytes                  \n\
      L30F_%=:dvstep.u  %A[X_u64], %A[X_u64], %[Y_s32]        # unsigned 32 bit division                     \n\
              dvstep.u  %A[X_u64], %A[X_u64], %[Y_s32]                                                       \n\
              dvstep.u  %A[X_u64], %A[X_u64], %[Y_s32]                                                       \n\
              dvstep.u  %A[X_u64], %A[X_u64], %[Y_s32]                                                       \n\
              j         L50F_%=                               # => end                                       \n\
      L20F_%=:mov       %L[X_u64], -1                         # saturation to MAXUINT32                      \n\
      L50F_%=:":[X_u64] "+d"(temp_u64_un.u64), [Y_s32] "+d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return(temp_u64_un.u64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 ***********************************************************************************************************************
 * SrvB_Div_U64U32_S32
 *
 * \brief unsint64 uint32 division with sint32 saturation and check on divide by zero.
 *
 * Divide an unsigned 64-bit variable by a unsigned 32-bit variable and return the result as signed 32-bit varaible.
 * The result is limited to MAXSINT32 (MINSINT32) to  prevent overflow (underflow).
 *
 * \param   uint64   X_u64                      Operand 1, unsigned 64-bit variable
 * \param   sint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint32   (X_s64 / Y_u32)            Result,  signed 32-bit variable
 *
  ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Div_U64U32_S32_inline(uint64 X_u64, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return SrvB_TypeLimiter_U32_S32_inline(SrvB_Div_U64U32_U32_inline(X_u64, Y_u32));

#else
   
    uint64 temp_u64;
    uint64 temp1_u64;
    uint32 shift_u32 = 32u;
    sint32 res_s32 = 0x7FFFFFFFl;        
    
    temp_u64 = X_u64;
           
    if ( Y_u32 != 0u )
    {

    asm volatile (
    "     mov       %[res],0                            # load zero in result                                   \n\
          jge.u     %H[X_u64], %[Y_u32], L30F_%=        #jump for calculation if result will be <= MAXUINT32    \n\
L40FB_%=: clz       %H[Y_u64], %H[X_u64]                #leading zeroes of high word of dividend                \n\
          min       %H[Y_u64],%[shift],%H[Y_u64]        #compare with #bits of dividend to be processed         \n\
          sub       %[shift], %[shift], %H[Y_u64]       #adjust remaining dividend bits                         \n\
          sh        %H[X_u64],%H[X_u64],%H[Y_u64]       #shift high part left                                   \n\
          rsub      %L[Y_u64], %H[Y_u64],32             #t2 = 32- clz                                           \n\
          rsub      %L[Y_u64]                           #                                                       \n\
          sh        %L[Y_u64], %L[X_u64], %L[Y_u64]     #shift low part right                                   \n\
          sh        %L[X_u64], %L[X_u64], %H[Y_u64]     #keep remaining bits of low part of dividend            \n\
          or        %H[X_u64], %H[X_u64], %L[Y_u64]     #put new dividend together                              \n\
          sh        %[res],%[res],%H[Y_u64]             #shift result accordingly                               \n\
          jge.u     %H[X_u64],%[Y_u32],L60F_%=          #compare hp of x & divisor and branch if hp of x >= divisor\n\
          jz        %[shift],L20F_%=                    #check & jump to validate result if div is already processed\n\
          sh        %[res],%[res],1                     #shift result by 1                                     \n\
          addi      %[res],%[res],1                     #add 1 to result                                       \n\
          sh        %H[X_u64],%H[X_u64],1               # shift the 64-bit dividend left by 1                  \n\
          sh        %L[Y_u64],%L[X_u64],-31             #                                                      \n\
          or        %H[X_u64],%H[X_u64],%L[Y_u64]                                                              \n\
          sub       %H[X_u64],%H[X_u64],%[Y_u32]        # compute hp of dividend for next iteration            \n\
          sh        %L[X_u64], %L[X_u64], 1             #                                                      \n\
          addi      %[shift],%[shift],-1                # shift = shift -1                                     \n\
          j         L70F_%=                                                                                    \n\
L60F_%=:  dvinit.u  %A[Y_u64], %H[X_u64], %[Y_u32]      # Intialise the dividend                               \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      # Perform 32 bit division                              \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          dvstep.u  %A[Y_u64], %A[Y_u64], %[Y_u32]      #                                                      \n\
          or        %[res],%[res],%L[Y_u64]             # append new result                                    \n\
          muls.u    %L[Y_u64],%L[Y_u64], %[Y_u32]       # compute the rest by modulo                           \n\
          sub       %H[X_u64],%H[X_u64],%L[Y_u64]       # compute the dividend for next iteration              \n\
L70F_%=:  jnz       %[shift],L40FB_%=                   # check if dividend is already processed if not loop   \n\
L20F_%=:  jz.t      %[res], 31, L50F_%=                 #avoid overflow in result                              \n\
L30F_%=:  movh      %[res], 0x8000                      #saturation                                            \n\
          addi      %[res],%[res],-1                    #shift = shift -1                                     \n\
L50F_%=: " : [X_u64] "+d"(temp_u64), [Y_u64] "=d"(temp1_u64),
              [Y_u32] "+d"(Y_u32),[shift] "+d" (shift_u32),[res] "+d" (res_s32) );
                }
    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_S32
 *
 * \brief sint32 sint32 division with sint32 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a signed 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint32   (X_s32 / Y_s32)            Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Div_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    /* divide by zero */
    if(Y_s32 == 0)
    {
        /* limitation */
        res_s32 = ( (X_s32 >= 0) ? (MAXSINT32) : (MINSINT32));

    }
    else
    {
        /* special case */
        if( (Y_s32 == -1) && (X_s32 == MINSINT32) )
        {
            res_s32 = MAXSINT32;
        }
        /* regular */
        else
        {
            res_s32 = (X_s32 / Y_s32);
        }
    }

    return (res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* used for the wide division */

    asm volatile("  jz      %[Y_s32],L1F_%=              # jump if Y_s32 is == 0                   \n\
                    jeq     %[Y_s32],-1,L2F_%=           # jump if Y_s32 == -1                     \n\
                                                         #avoid overflow in case of MINSINT32/(-1) \n\
                    dvinit  %A0,%[X_s32],%[Y_s32]                                                  \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                       \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                       \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                       \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                       \n\
                    dvadj   %A0,%A0,%[Y_s32]                                                       \n\
                    j       L3F_%=                                                                 \n\
           L1F_%=:                                                                                 \n\
                    extr    %L0,%[X_s32],31,1            # look for the sign                       \n\
                    movh    %H0, 0x8000                  # prepare limitation                      \n\
                    caddn   %L0, %L0, %H0, -1            # MAXSINT32/MINSINT32                     \n\
                    j       L3F_%=                       # jump to the end                         \n\
           L2F_%=:                                                                                 \n\
                    muls     %L0,%[X_s32],-1             # X_s32/(-1) = X_s32*(-1)                 \n\
           L3F_%=:                                                                                 \n\
                  ": "=&d"(temp.s64)
                   : [X_s32] "d"(X_s32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint32)temp.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
***********************************************************************************************************************
* SrvB_Div_U32S32_S32
*
* \brief uint32 sint32 division with sint32 saturation and check on divide by zero.
*
* Divide a unsigned 32-bit variable by a signed 32-bit variable and return the result as signed 32-bit.
* The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
*
* \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
* \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
* \return  sint32   (X_u32 / Y_s32)            Result,    signed   32-bit
***********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Div_U32S32_S32_inline(uint32 X_u32,sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32  res_s32;
    uint32  tmp1_u32;


    if(Y_s32 == 0)
    {
        /* limitation */
        res_s32 = MAXSINT32;
    }
    else
    {
        if (Y_s32 > 0)
        {
          /* Y_s32 is typecasted to uint32 to take care of values of X_u32 greater than MAXSINT32 */
          tmp1_u32 = (X_u32 / (uint32)Y_s32);

          res_s32  = (sint32)tmp1_u32;

          /* Overflow condition */

            if (res_s32 < 0)
            {
                res_s32 =  MAXSINT32;
            }
        }
        else   /* Y_s32 <= 0 */
        {
            /* Special case */
            if( (X_u32 == MAXUINT32) && (Y_s32 == -1) )
            {
                res_s32 = MINSINT32;
            }
            else
            {

                /* MISRA RULE 21.1 VIOLATION: the variable is intentionally type casted to uint32 */
                tmp1_u32 = (uint32)Y_s32;
                tmp1_u32 = ((uint32)((0xFFFFFFFFUL  ^  tmp1_u32) + 1UL));
                tmp1_u32 = X_u32 / tmp1_u32 ;

                /* Limitation */
                /* Eg: X_u32 = 2147483649 ,Y_s32 = -1 .At this point tmp1_u32 is > MAXSINT32*/
                if (tmp1_u32 > (uint32)MAXSINT32 )
                {
                    res_s32 = MINSINT32;
                }
                else /* Apply the sign back */
                {
                    res_s32 = ((sint32)((0xFFFFFFFFUL  ^  tmp1_u32) + 1UL));
                }
            }
       }
    }

    return (res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* used for the wide division */
    uint32  tmp_u32;

    asm volatile("  jnz         %[Y_s32],L1F_%=            # jump if Y_s32 is <> 0            \n\
                    movh        %L0, 0x8000                # prepare limitation               \n\
                    addi        %L0, %L0, -1               # MAXSINT32                        \n\
                    j           L3F_%=                     # jump to the end                  \n\
          L1F_%=:                                                                              \n\
                    abs         %[tmp_u32], %[Y_s32]       # absolut value, incl. |MINSINT32| \n\
                    dvinit.u    %A0,%[X_u32],%[tmp_u32]                                        \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    extr        %H0, %L0,31,1              # |%L0| > MAXSINT32                \n\
                    jz          %H0, L2F_%=                # jump, if |%L0| < MAXSINT32       \n\
                    movh        %L0, 0x8000                # limit: MINSINT32                 \n\
                    extr        %H0,%[Y_s32],31,1          # look for the sign                \n\
                    caddn       %L0, %H0, %L0, -1          # Y_s32 >=0: MAXSINT32             \n\
                    j           L3F_%=                     # jump to the end                  \n\
          L2F_%=:                                                                             \n\
                    extr        %H0,%[Y_s32],31,1          # look for the sign                \n\
                    jz          %H0, L3F_%=                # positive, jump to the end        \n\
                    muls        %L0, %L0, -1               # sign reconstitution              \n\
           L3F_%=:                                                                            \n\
                    "
                    : "=&d"(temp.s64), [tmp_u32] "=&d"(tmp_u32)
                    : [X_u32] "d"(X_u32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint32) temp.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_S32_inline
 *
 * \brief sint32 uint32 division with sint32 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a unsigned 32-bit variable and return the result as signed 32-bit.
 * The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint32   (X_s32 / Y_u32)            Result,    signed   32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Div_S32U32_S32_inline(sint32 X_s32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    if (Y_u32 > MAXSINT32)
    {
        /* special case */
        if ((X_s32 == MINSINT32) && (Y_u32 == ((uint32) MAXSINT32 + 1)))
        {
            res_s32 = -1;
        }
        /* denominator too big */
        else
        {
            res_s32 = 0;
        }
    }
    else
    {
        /* divide by zero */
        if (Y_u32 == 0)
        {
            /* limitation */
            res_s32 = (X_s32 < 0) ? (MINSINT32) : (MAXSINT32);
        }
        /* regular */
        else
        {
            res_s32 = X_s32 / ((sint32) Y_u32);
        }
    }

    return (res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp_s64;

    /* Note: This Assembler Code is generated (Sz = Sx / U32) */
    /* temporary variable used                                */
    asm volatile(" \n\
                    mov  %L0, 0                     # Load 0 into the result                    \n\
                                                    # check the -1 result                       \n\
                    movh   %H0, 0x8000              # use this temporary register               \n\
                    jne   %[Y_u32], %H0, L2F_%=     # check whenever y_u32 is MAXSINT32 + 1     \n\
                    jne   %[X_s32], %H0, L2F_%=     # check whenever x_s32 is MINSINT32         \n\
                    mov    %L0, -1                  # load the result of this special case: -1  \n\
                   j L1F_%=                         # finish!                                   \n\
             L2F_%=:                                # now start the normal operation            \n\
                    jnz.t  %[Y_u32], 31, L1F_%=     # check if y_u32 is not too big             \n\
                                                    # perform the division now                  \n\
                    dvinit %A0, %[X_s32], %[Y_u32]  # initialisation                            \n\
                    dvstep %A0, %A0, %[Y_u32]       # division step 1 (8 bits)                  \n\
                    dvstep %A0, %A0, %[Y_u32]       # division step 2 (16 bits)                 \n\
                    dvstep %A0, %A0, %[Y_u32]       # division step 3 (24 bits)                 \n\
                    dvstep %A0, %A0, %[Y_u32]       # division step 4 (32 bits)                 \n\
                    dvadj %A0, %A0, %[Y_u32]        # result adjustment (signed operation only) \n\
                                                    # overflow occurs only if y_u32 == 0        \n\
                    jnz %[Y_u32], L1F_%=            # if y_u32 != 0 jump to the end             \n\
                    movh %L0, 0x8000                # load minimum value MINSINT32              \n\
                    jnz.t %[X_s32], 31, L1F_%=      # keep this result if x_s32 is negative     \n\
                    not   %L0                       # Complement (MAXSINT32) otherwise          \n\
              L1F_%=:                               # end label                                 \n\
                  "
                  : [_temp_s64]"=&d"(temp_s64.s64)
                  : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_s64 is used within an asm-macro. MISRA cannot check this.  */
    return (sint32)temp_s64.s64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
***********************************************************************************************************************
* SrvB_Div_U32U32_S32_inline
*
* \brief sint32 uint32 division with sint32 saturation and check on divide by zero.
*
* Divide a unsigned 32-bit variable by a unsigned 32-bit variable and return the result as signed 32-bit.
* The result is limited to MAXSINT32 (MINSINT32) prevent overflows(underflows).
*
* \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
* \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
* \return  sint32   (X_u32 / Y_u32)            Result,    signed   32-bit
***********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Div_U32U32_S32_inline(uint32 X_u32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;
    uint32 res_u32;


    /* divide by zero */
    if(Y_u32 == 0)
    {
        /* limitation */
        res_s32 = MAXSINT32;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 / Y_u32);

        /* limitation */
        res_s32 = ( res_u32 > ((uint32) MAXSINT32) ) ? (MAXSINT32) : ((sint32) res_u32);
    }

    return (res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* used for the wide division */

    asm volatile("  jnz         %[Y_u32],L1F_%=             # jump if Y_s32 is <> 0         \n\
                    movh        %L0, 0x8000                 # prepare MAXSINT32             \n\
                    addi        %L0, %L0, -1                # MAXSINT32                     \n\
                    j           L3F_%=                      # jump to the end               \n\
          L1F_%=:                                                                           \n\
                    dvinit.u    %A0,%[X_u32],%[Y_u32]                                       \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    movh        %H0, 0x8000                 # prepare MAXSINT32             \n\
                    jlt.u       %L0, %H0, L3F_%=            # jump, if result < MAXSINT32   \n\
                    mov         %L0, %H0                    # limit: MAXSINT32              \n\
                    addi        %L0, %L0, -1                # MAXSINT32                     \n\
          L3F_%=:                                                                           \n\
                    ": "=&d"(temp.s64)
                   : [X_u32] "d"(X_u32), [Y_u32] "d"(Y_u32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint32) temp.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_U32
 *
 * \brief sint32 sint32 division with uint32 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a signed 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint32   (X_s32 / Y_s32)            Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Div_S32S32_U32_inline(sint32 X_s32,sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;
    sint32 res_s32;


    /* divide by zero */
    if(Y_s32 == 0)
    {
        /* limitation */
        res_u32 = ( (X_s32 >= 0) ? (MAXUINT32) : (MINUINT32));
    }
    /* special case */
    else if( (Y_s32 == -1) && (X_s32 == MINSINT32) )
    {
        res_u32 = ( ((uint32) MAXSINT32) + 1 );
    }
    /* regular */
    else
    {
        res_s32 = (X_s32 / Y_s32);

        /* limitation */
        res_u32 = (res_s32 < 0) ? (MINUINT32) : ((uint32) res_s32);
    }

    return (res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* used for the wide division */

    asm volatile("  extr    %H0,%[X_s32],31,1           # look for the sign                  \n\
                    extr    %L0,%[Y_s32],31,1           # look for the sign                  \n\
                    jeq     %H0,%L0,L1F_%=              # jump if sign(Y_s32) = sign(X_s32)  \n\
                    movh    %L0,0x0000                  # MINUINT = Zero                     \n\
                    j       L4F_%=                      # jump to the end                    \n\
          L1F_%=:                                                                            \n\
                    jnz     %[Y_s32],L2F_%=             # jump if Y_s32 is <> 0              \n\
                    movh    %L0, 0x000                  # prepare MAXUINT32                  \n\
                    addi    %L0, %L0, -1                # MAXUINT32                          \n\
                    j       L4F_%=                      # jump to the end                    \n\
          L2F_%=:                                                                            \n\
                    jne     %[Y_s32],-1,L3F_%=          # jump if Y_s32 <> -1                \n\
                    mul     %L0,%[X_s32],-1             # unsaturated multiplication         \n\
                    j       L4F_%=                      # jump to the end                    \n\
          L3F_%=:                                                                            \n\
                    dvinit  %A0,%[X_s32],%[Y_s32]                                            \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                 \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                 \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                 \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                 \n\
                    dvadj   %A0,%A0,%[Y_s32]                                                 \n\
          L4F_%=:                                                                            \n\
                    ": "=&d"(temp.s64)
                   : [X_s32] "d"(X_s32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return(temp.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
***********************************************************************************************************************
* SrvB_Div_S32U32_U32_inline
*
* \brief sint32 uint32 division with uint32 saturation and check on divide by zero.
*
* Divide a signed 32-bit variable by a unsigned 32-bit variable and return the result as unsigned 32-bit.
* The result is limited to MAXUINT32 (MINUINT32) prevent overflows(underflows).
*
* \param   sint32   X_s32                      Operand 1, signed   32-bit variable
* \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
* \return  uint32   (X_s32 / Y_u32)            Result,    unsigned 32-bit
***********************************************************************************************************************
*/
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Div_S32U32_U32_inline(sint32 X_s32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if (X_s32 < 0)
    {
        /* limitation */
        res_u32 = MINUINT32;
    }
    else
    {
        /* limitation */
        res_u32 = (Y_u32 == 0) ? (MAXUINT32) : ( ((uint32) X_s32) / Y_u32 );
    }

    return (res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Uz = S32 / U32) */
    /* temporary variable used                                 */
    asm volatile(" \n\
                    mov    %L0, 0                      # load 0 into the result                   \n\
                    jnz.t  %[X_s32], 31, L1F_%=        # keep this result if x_s32 is negative    \n\
                                                       # perform the division first               \n\
                    dvinit.u %A0, %[X_s32], %[Y_u32]   # initialisation                           \n\
                    dvstep.u %A0, %A0, %[Y_u32]        # division step 1 (8 bits)                 \n\
                    dvstep.u %A0, %A0, %[Y_u32]        # division step 2 (16 bits)                \n\
                    dvstep.u %A0, %A0, %[Y_u32]        # division step 3 (24 bits)                \n\
                    dvstep.u %A0, %A0, %[Y_u32]        # division step 4 (32 bits)                \n\
                                                       # overflow occurs only if y_u32 == 0       \n\
                    jnz %[Y_u32], L1F_%=               # if y_u32 != 0 jump to the end            \n\
                                                       # y_u32 == 0: overflow, discard the result \n\
                    mov %L0, -1                        # load 0xFFFFFFFF (MAXUINT32)              \n\
              L1F_%=:                                  # end label                                \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint32)temp_u64.u64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_U32_inline
 *
 * \brief uint32 sint32 division with uint32 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a signed 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint32   (X_u32 / Y_s32)            Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Div_U32S32_U32_inline(uint32 X_u32,sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if (Y_s32 < 0)
    {
        /* limitation */
        res_u32 = MINUINT32;
    }
    else
    {
        /* limitation */
        res_u32 = (Y_s32 == 0) ? (MAXUINT32) : ( X_u32 / ((uint32) Y_s32) );
    }

    return (res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Ux = U32 / S32) */
    /* temporary variable used                                 */
    asm volatile(" \n\
                    mov    %L0, 0                    # load 0 into the result                   \n\
                    jnz.t  %[Y_s32], 31, L1F_%=      # keep this result if y_s32 is negative    \n\
                                                     # perform the division first               \n\
                    dvinit.u %A0, %[X_u32], %[Y_s32] # initialisation                           \n\
                    dvstep.u %A0, %A0, %[Y_s32]      # division step 1 (8 bits)                 \n\
                    dvstep.u %A0, %A0, %[Y_s32]      # division step 2 (16 bits)                \n\
                    dvstep.u %A0, %A0, %[Y_s32]      # division step 3 (24 bits)                \n\
                    dvstep.u %A0, %A0, %[Y_s32]      # division step 4 (32 bits)                \n\
                                                     # overflow occurs only if y_s32 == 0       \n\
                    jnz %[Y_s32], L1F_%=             # if y_s32 != 0 jump to the end            \n\
                                                     # y_s32 == 0: overflow, discard the result \n\
                    mov %L0, -1                      # load 0xFFFFFFFF (MAXUINT32)              \n\
              L1F_%=:                                # end label                                \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint32)temp_u64.u64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_U32
 *
 * \brief uint32 uint32 division with uint32 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a unsigned 32-bit variable and return the result as unsigned 32-bit.
 * The result is limited to MAXUINT32 (MINUINT32) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint32   (X_u32 / Y_u32)            Result,    unsigned 32-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Div_U32U32_U32_inline(uint32 X_u32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if(Y_u32 == 0)
    {
        res_u32 = MAXUINT32;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 / Y_u32);
    }

    return (res_u32);

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used in Tricore/Hightec specific code. Here union handling is correct.  */
    uint64u temp; /* quotient and remainder */
    uint32 Result_u32;

    if( Y_u32 == 0)
    {
        Result_u32 = MAXUINT32;
    }
    else
    {
        temp = SrvB_DivMod_U32U32_U64_inline(X_u32, Y_u32);
        Result_u32 = (uint32)temp.u64s.l;
    }
    return Result_u32;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC DIVISION with 16 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_S16
 *
 * \brief sint32 sint32 division with sint16 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a signed 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint16   (X_s32 / Y_s32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Div_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32))
{
    return SrvB_TypeLimiter_S32_S16_inline(SrvB_Div_S32S32_S32_inline(X_s32, Y_s32));
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_S16
 *
 * \brief uint32 sint32 division with sint16 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a signed 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint16   (X_u32 / Y_s32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Div_U32S32_S16_inline(uint32 X_u32,sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32  res_s32;
    uint32  tmp1_u32;


    if(Y_s32 == 0)
    {
        /* limitation */
        res_s32 = (sint32)MAXSINT16;
    }
    else
    {
        if (Y_s32 > 0)
        {
          /* Y_s32 is typecasted to uint32 to take care of values of X_u32 greater than MAXSINT32 */
          tmp1_u32 = (X_u32 / (uint32)Y_s32);

          res_s32  = (sint32)tmp1_u32;

          /* Overflow condition */

            if ((res_s32 < 0) || (res_s32 > (sint32)MAXSINT16))
            {
                res_s32 =  (sint32)MAXSINT16;
            }

        }
        else   /* Y_s32 <= 0 */
        {
            /* Special case */
            if( (X_u32 == MAXUINT32) && (Y_s32 == -1) )
            {
                res_s32 = (sint32)MINSINT16;
            }
            else
            {

                /* MISRA RULE 21.1 VIOLATION: the variable is intentionally type casted to uint32 */
                tmp1_u32 = (uint32)Y_s32;
                tmp1_u32 = (uint32)((0xFFFFFFFFUL  ^  tmp1_u32) + 1UL);
                tmp1_u32 = X_u32 / tmp1_u32 ;

                /* Limitation */
                /* Eg: X_u32 = 2147483649 ,Y_s32 = -1 .At this point tmp1_u32 is > MAXSINT32*/
                if (tmp1_u32 > (uint32)MAXSINT32 )
                {
                    res_s32 = (sint32)MINSINT16;
                }
                else
                {
                    res_s32 = (sint32)((0xFFFFFFFFUL  ^  tmp1_u32) + 1UL);
                    /* limit to MINSINT16 */
                    if  (res_s32 < (sint32)MINSINT16 )
                    {
                        res_s32 = (sint32)MINSINT16;
                    }
                }
            }
       }
    }

    return ((sint16)res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* used for the wide division */
    uint32  tmp_u32;

    asm volatile("  jnz         %[Y_s32],L1F_%=             # jump if Y_s32 is <> 0            \n\
                    mov         %L0, 0x7FFF                 # MAXSINT16                        \n\
                    j           L3F_%=                      # jump to the end                  \n\
          L1F_%=:                                                                              \n\
                    abs         %[tmp_u32], %[Y_s32]        # absolut value, incl. |MINSINT32| \n\
                    dvinit.u    %A0,%[X_u32],%[tmp_u32]                                        \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    mov.u       %H0, 0x8000                 # MAXSINT16 +1                     \n\
                    jlt.u       %L0, %H0, L2F_%=            # jump, if result < MAXSINT16      \n\
                    mov         %L0, 0x7FFF                 # MAXSINT16                        \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, L3F_%=                 # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
                    addi        %L0, %L0, -1                # MINSINT16                        \n\
          L2F_%=:                                                                              \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, L3F_%=                 # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
          L3F_%=:                                                                              \n\
                    "
                    : "=&d"(temp.s64), [tmp_u32] "=&d"(tmp_u32)
                    : [X_u32] "d"(X_u32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint16) temp.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif


}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_S16_inline
 *
 * \brief sint32 uint32 division with sint16 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a unsigned 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint16   (X_s32 / Y_u32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Div_S32U32_S16_inline(sint32 X_s32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    if (Y_u32 > MAXSINT32)
    {
        /* special case */
        if ((X_s32 == MINSINT32) && (Y_u32 == ((uint32) MAXSINT32 + 1)))
        {
            res_s32 = -1;
        }
        /* denominator too big */
        else
        {
            res_s32 = 0;
        }
    }
    else
    {
        /* divide by zero */
        if (Y_u32 == 0)
        {
            /* limitation */
            res_s32 = (X_s32 < 0) ? (MINSINT16) : (MAXSINT16);
        }
        /* regular */
        else
        {
            res_s32 = X_s32 / ((sint32) Y_u32);

            /* limitation */
            res_s32 = (res_s32 > MAXSINT16) ? (MAXSINT16) : (res_s32);
            res_s32 = (res_s32 < MINSINT16) ? (MINSINT16) : (res_s32);
        }
    }

    return ((sint16) res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp_s64;
    uint32  tmp_u32;

    asm volatile("     jge.u   %[Y_u32], 1, L1F_%=            # zero divisor check                        \n\
                       extr    %L0,%[X_s32],31,1              # look for the sign                         \n\
                       movh    %H0, 0x8000                    # prepare limitation                        \n\
                       caddn   %L0, %L0, %H0, -1              # MFX_MAXSINT32/MFX_MINSINT32               \n\
                       j       L3F_%=                         # jump to the end                           \n\
                L1F_%=:                                                                                   \n\
                       abs    %[tmp_u32],%[X_s32]             # take absolute value of x                  \n\
                       dvinit.hu %A0, %[tmp_u32], %[Y_u32]    # initialisation                            \n\
                       dvstep.u %A0, %A0, %[Y_u32]            # division step 1 (8 bits)                  \n\
                       dvstep.u %A0, %A0, %[Y_u32]            # division step 2 (16 bits)                 \n\
                       mov.u  %H0, 0x8000                     # MFX_MAXSINT16 +1                          \n\
                       jlt.u  %L0, %H0, L2F_%=                # jump, if result < MFX_MAXSINT16           \n\
                       mov    %L0, 0x7FFF                     # MFX_MAXSINT16                             \n\
                       extr   %H0,%[X_s32],31,1               # look for the sign                         \n\
                       jz     %H0, L3F_%=                     # positive, jump to the end                 \n\
                       muls   %L0, %L0, -1                    # sign reconstitution                       \n\
                       addi   %L0, %L0, -1                    # MFX_MINSINT16                             \n\
                       j       L3F_%=                                                                     \n\
                L2F_%=:                                                                                   \n\
                       extr   %H0,%[X_s32],31,1               # look for the sign                         \n\
                       jz     %H0, L3F_%=                     # positive, jump to the end                 \n\
                       muls   %L0, %L0, -1                    # sign reconstitution                       \n\
                L3F_%=:  sat.h   %L0                          # MFX_MINSINT16/ MFX_MAXSINT16              \n\
                     "
                     : [_temp_s64]"=&d"(temp_s64.s64), [tmp_u32] "=&d"(tmp_u32)
                     : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 9.1 VIOLATION: Variable temp_s64 is used within an asm-statement  */
    return ((sint16)temp_s64.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_S16_inline
 *
 * \brief sint32 uint32 division with sint16 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a unsigned 32-bit variable and return the result as signed 16-bit.
 * The result is limited to MAXSINT16 (MINSINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint16   (X_u32 / Y_u32)            Result,    signed   16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Div_U32U32_S16_inline(uint32 X_u32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;
    uint32 res_u32;


    /* divide by zero */
    if(Y_u32 == 0)
    {
        /* limitation */
        res_s32 = MAXSINT16;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 / Y_u32);

        /* limitation */
        res_s32 = ( res_u32 > ((uint32) MAXSINT16) ) ? (MAXSINT16) : ((sint32) res_u32);
    }

    return ((sint16) res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* used for the wide division */

    asm volatile("  jnz         %[Y_u32],L1F_%=             # jump if Y_s32 is <> 0         \n\
                    mov.u       %L0, 0x7FFF                 # MAXSINT16                     \n\
                    j           L2F_%=                      # jump to the end               \n\
          L1F_%=:                                                                           \n\
                    dvinit.u    %A0,%[X_u32],%[Y_u32]                                       \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    mov.u       %H0, 0x8000                 # MAXSINT16 +1                  \n\
                    jlt.u       %L0, %H0, L2F_%=            # jump, if result < MAXSINT16   \n\
                    mov.u       %L0, 0x7FFF                 # limit: MAXSINT16              \n\
          L2F_%=:                                                                           \n\
                    ": "=&d"(temp.s64)
                   : [X_u32] "d"(X_u32), [Y_u32] "d"(Y_u32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint16) temp.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_U16
 *
 * \brief sint32 sint32 division with uint16 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a signed 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint16   (X_s32 / Y_s32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Div_S32S32_U16_inline(sint32 X_s32,sint32 Y_s32))
{
    return SrvB_TypeLimiter_S32_U16_inline(SrvB_Div_S32S32_S32_inline(X_s32, Y_s32));
}




/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_U16_inline
 *
 * \brief uint32 sint32 division with uint16 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a signed 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint16   (X_u32 / Y_s32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Div_U32S32_U16_inline(uint32 X_u32,sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if (Y_s32 < 0)
    {
        /* limitation */
        res_u32 = MINUINT16;
    }
    else
    {
        /* limitation */
        res_u32 = (Y_s32 == 0) ? (MAXUINT16) : ( X_u32 / ((uint32) Y_s32) );
        res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? ((uint32) MAXUINT16) : (res_u32);
    }

    return ((uint16) res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Ux = U32 / S32)                        */
    /* temporary variable used                                                        */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                    mov    %L0, 0                     # load 0 into the result                                  \n\
                    jnz.t  %[Y_s32], 31, L1F_%=       # keep this result if y_s32 is negative                   \n\
                                                      # perform the division first                              \n\
                    dvinit.hu %A0, %[X_u32], %[Y_s32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_s32]       # division step 1 (8 bits)                                \n\
                    dvstep.u %A0, %A0, %[Y_s32]       # division step 2 (16 bits)                               \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, L1F_%=              # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 65535                  # load 0                                                  \n\
              L1F_%=:                                 # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint16)temp_u64.u64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_U16_inline
 *
 * \brief sint32 uint32 division with uint16 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a unsigned 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint16   (X_s32 / Y_u32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Div_S32U32_U16_inline(sint32 X_s32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if (X_s32 < 0)
    {
        /* limitation */
        res_u32 = MINUINT16;
    }
    else
    {
        /* limitation */
        res_u32 = (Y_u32 == 0) ? (MAXUINT16) : ( ((uint32) X_s32) / Y_u32 );
        res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? ((uint32) MAXUINT16) : (res_u32);
    }

    return ((uint16) res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Uz = S32 / U32)                        */
    /* temporary variable used                                                        */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                    mov    %L0, 0                     # load 0 into the result                                  \n\
                    jnz.t  %[X_s32], 31, L1F_%=       # keep this result if x_s32 is negative                   \n\
                                                      # perform the division first                              \n\
                    dvinit.hu %A0, %[X_s32], %[Y_u32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 1 (8 bits)                                \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 2 (16 bits)                               \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, L1F_%=              # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 65535                  # load 0                                                  \n\
              L1F_%=:                                 # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint16)temp_u64.u64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_U16
 *
 * \brief uint32 uint32 division with uint16 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a unsigned 32-bit variable and return the result as unsigned 16-bit.
 * The result is limited to MAXUINT16 (MINUINT16) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint16   (X_u32 / Y_u32)            Result,    unsigned 16-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Div_U32U32_U16_inline(uint32 X_u32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if(Y_u32 == 0)
    {
        /* limitation */
        res_u32 = MAXUINT16;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 / Y_u32);

        /* limitation */
        res_u32 = ( res_u32 > ((uint32) MAXUINT16) ) ? ((uint32) MAXUINT16) : (res_u32);
    }

    return ((uint16) res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Cz = Ax / Ax)                          */
    /* temporary variable used                                                        */
    /* the sign of the temporary variable matches the sign of the returned type       */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                                                      # perform the division first                              \n\
                    dvinit.hu %A0, %[X_u32], %[Y_u32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 1 (8 bits)                                \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 2 (16 bits)                               \n\
                                                      # check overflow                                          \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, L1F_%=              # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 65535                  # load 0                                                  \n\
              L1F_%=:                                 # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint16)temp_u64.u64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC DIVISION with 8 Bit return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_S8
 *
 * \brief sint32 sint32 division with sint8 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a signed 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint8    (X_s32 / Y_s32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Div_S32S32_S8_inline(sint32 X_s32,sint32 Y_s32))
{
    return SrvB_TypeLimiter_S32_S8_inline(SrvB_Div_S32S32_S32_inline(X_s32, Y_s32));
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_S8
 *
 * \brief uint32 sint32 division with sint8 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a signed 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  sint8    (X_u32 / Y_s32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Div_U32S32_S8_inline(uint32 X_u32,sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32  res_s32;
    uint32  tmp1_u32;


    if(Y_s32 == 0)
    {
        /* limitation */
        res_s32 = (sint32)MAXSINT8;
    }
    else
    {
        if (Y_s32 > 0)
        {
          /* Y_s32 is typecasted to uint32 to take care of values of X_u32 greater than MAXSINT32 */
            tmp1_u32 = (X_u32 / (uint32)Y_s32);

            res_s32  = (sint32)tmp1_u32;

          /* Overflow condition */

            if ((res_s32 < 0) || (res_s32 > (sint32)MAXSINT8))
            {
                res_s32 =  (sint32)MAXSINT8;
            }

        }
        else   /* Y_s32 <= 0 */
        {
            /* Special case */
            if( (X_u32 == MAXUINT32) && (Y_s32 == -1) )
            {
                res_s32 = (sint32)MINSINT8;
            }
            else
            {

                /* MISRA RULE 21.1 VIOLATION: the variable is intentionally type casted to uint32 */
                tmp1_u32 = (uint32)Y_s32;
                tmp1_u32 = (uint32)((0xFFFFFFFFUL  ^  tmp1_u32) + 1UL);
                tmp1_u32 = X_u32 / tmp1_u32 ;

                /* Limitation*/
                /* Eg: X_u32 = 2147483649 ,Y_s32 = -1 .At this point tmp1_u32 is > MAXSINT32*/
                if (tmp1_u32 > (uint32)MAXSINT32 )
                {
                    res_s32 = (sint32)MINSINT8;
                }
                else
                {
                    res_s32 = (sint32)((0xFFFFFFFFUL  ^  tmp1_u32) + 1UL);

                    /* limit to MINSINT16 */
                    if  (res_s32 < (sint32)MINSINT8 )
                    {
                        res_s32 = (sint32)MINSINT8;
                    }
                }
            }
       }
    }

    return ((sint8)res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* used for the wide division */
    uint32  tmp_u32;

    asm volatile("  jnz         %[Y_s32],L1F_%=            # jump if Y_s32 is <> 0            \n\
                    mov         %L0, 0x007F                # MAXSINT8                         \n\
                    j           L3F_%=                     # jump to the end                  \n\
              L1F_%=:                                                                          \n\
                    abs         %[tmp_u32], %[Y_s32]       # absolut value, incl. |MINSINT32| \n\
                    dvinit.u    %A0,%[X_u32],%[tmp_u32]                                        \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    mov.u       %H0, 0x0080                 # MAXSINT8 +1                      \n\
                    jlt.u       %L0, %H0, L2F_%=            # jump, if result <= MAXSINT8      \n\
                    mov         %L0, 0x007F                 # MAXSINT8                         \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, L3F_%=                 # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
                    addi        %L0, %L0, -1                # MINSINT8                         \n\
              L2F_%=:                                                                          \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, L3F_%=                 # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
              L3F_%=:                                                                          \n\
                    "
                    : "=&d"(temp.s64), [tmp_u32] "=&d"(tmp_u32)
                    : [X_u32] "d"(X_u32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint8) temp.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif

}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_S8
 *
 * \brief sint32 uint32 division with sint8 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a unsigned 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint8    (X_s32 / Y_u32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Div_S32U32_S8_inline(sint32 X_s32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;


    if (Y_u32 > MAXSINT32)
    {
        /* special case */
        if ((X_s32 == MINSINT32) && (Y_u32 == ((uint32) MAXSINT32 + 1)))
        {
            res_s32 = -1;
        }
        /* denominator too big */
        else
        {
            res_s32 = 0;
        }
    }
    else
    {
        /* divide by zero */
        if (Y_u32 == 0)
        {
            /* limitation */
            res_s32 = (X_s32 < 0) ? (MINSINT8) : (MAXSINT8);
        }
        /* regular */
        else
        {
            res_s32 = X_s32 / ((sint32) Y_u32);

            /* limitation */
            res_s32 = (res_s32 > MAXSINT8) ? (MAXSINT8) : (res_s32);
            res_s32 = (res_s32 < MINSINT8) ? (MINSINT8) : (res_s32);
        }
    }

    return ((sint8) res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp_s64;
    uint32  tmp_u32;

    asm volatile("        jge.u   %[Y_u32], 1, L1F_%=          # zero divisor check                    \n\
                          extr    %L0,%[X_s32],31,1            # look for the sign                     \n\
                          movh    %H0, 0x8000                  # prepare limitation                    \n\
                          caddn   %L0, %L0, %H0, -1            # MFX_MAXSINT32/MFX_MINSINT32           \n\
                          j       L3F_%=                       # jump to the end                       \n\
                   L1F_%=:                                                                             \n\
                          abs    %[tmp_u32],%[X_s32]           # take absolute value of x              \n\
                          dvinit.u %A0, %[tmp_u32], %[Y_u32]   # initialisation                        \n\
                          dvstep.u %A0, %A0, %[Y_u32]          # division step 1 (8 bits)              \n\
                          dvstep.u %A0, %A0, %[Y_u32]          # division step 2 (16 bits)             \n\
                          dvstep.u %A0, %A0, %[Y_u32]          # division step 3 (24 bits)             \n\
                          dvstep.u %A0, %A0, %[Y_u32]          # division step 4 (32 bits)             \n\
                          mov.u  %H0, 0x8000                   # MFX_MAXSINT16 +1                      \n\
                          jlt.u  %L0, %H0, L2F_%=              # jump, if result < MFX_MAXSINT16       \n\
                          mov    %L0, 0x7FFF                   # MFX_MAXSINT16                         \n\
                          extr   %H0,%[X_s32],31,1             # look for the sign                     \n\
                          jz     %H0, L3F_%=                   # positive, jump to the end             \n\
                          muls   %L0, %L0, -1                  # sign reconstitution                   \n\
                          addi   %L0, %L0, -1                  # MFX_MINSINT16                         \n\
                          j       L3F_%=                                                              \n\
                   L2F_%=:                                                                             \n\
                          extr   %H0,%[X_s32],31,1             # look for the sign                     \n\
                          jz     %H0, L3F_%=                   # positive, jump to the end             \n\
                          muls   %L0, %L0, -1                  # sign reconstitution                   \n\
                   L3F_%=:sat.b   %L0                          # MFX_MINSINT16/ MFX_MAXSINT16          \n\
                        "
                        : [_temp_s64]"=&d"(temp_s64.s64), [tmp_u32] "=&d"(tmp_u32)
                        : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 9.1 VIOLATION: Variable temp_s64 is used within an asm-statement  */
    return ((sint8)temp_s64.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif

}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_S8
 *
 * \brief sint32 uint32 division with sint8 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a unsigned 32-bit variable and return the result as signed 8-bit.
 * The result is limited to MAXSINT8 (MINSINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  sint8    (X_u32 / Y_u32)            Result,    signed    8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Div_U32U32_S8_inline(uint32 X_u32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    sint32 res_s32;
    uint32 res_u32;


    /* divide by zero */
    if(Y_u32 == 0)
    {
        /* limitation */
        res_s32 = MAXSINT8;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 / Y_u32);

        /* limitation */
        res_s32 = ( res_u32 > ((uint32) MAXSINT8) ) ? (MAXSINT8) : ((sint32) res_u32);
    }

    return ((sint8) res_s32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    sint64u temp; /* used for the wide division */

    asm volatile("  jnz         %[Y_u32],L1F_%=             # jump if Y_s32 is <> 0         \n\
                    mov.u       %L0, 0x7F                   # MAXSINT8                      \n\
                    j           L2F_%=                      # jump to the end               \n\
          L1F_%=:                                                                           \n\
                    dvinit.u    %A0,%[X_u32],%[Y_u32]                                       \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    mov.u       %H0, 0x0080                 # MAXSINT8 +1                   \n\
                    jlt.u       %L0, %H0, L2F_%=            # jump, if result < MAXSINT16   \n\
                    mov.u       %L0, 0x7F                   # limit: MAXSINT8               \n\
          L2F_%=:                                                                           \n\
                    ": "=&d"(temp.s64)
                   : [X_u32] "d"(X_u32), [Y_u32] "d"(Y_u32) );

    /* MISRA RULE 9.1 VIOLATION: the variable is writen in the asm statement */
    return((sint8) temp.s64s.l);

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_U8
 *
 * \brief sint32 sint32 division with uint8 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a signed 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint8    (X_s32 / Y_s32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Div_S32S32_U8_inline(sint32 X_s32,sint32 Y_s32))
{
    return SrvB_TypeLimiter_S32_U8_inline(SrvB_Div_S32S32_S32_inline(X_s32, Y_s32));
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_U8
 *
 * \brief uint32 sint32 division with uint8 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a signed 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return  uint8    (X_u32 / Y_s32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Div_U32S32_U8_inline(uint32 X_u32,sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if (Y_s32 < 0)
    {
        /* limitation */
        res_u32 = MINUINT8;
    }
    else
    {
        /* limitation */
        res_u32 = (Y_s32 == 0) ? (MAXUINT8) : ( X_u32 / ((uint32) Y_s32) );
        res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? ((uint32) MAXUINT8) : (res_u32);
    }

    return ((uint8) res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Ux = U32 / S32)                        */
    /* temporary variable used                                                        */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                    mov    %L0, 0                     # load 0 into the result                                  \n\
                    jnz.t  %[Y_s32], 31, L1F_%=       # keep this result if y_s32 is negative                   \n\
                                                      # perform the division first                              \n\
                    dvinit.bu %A0, %[X_u32], %[Y_s32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_s32]       # division step 1 (8 bits)                                \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, L1F_%=              # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 255                    # load 0                                                  \n\
              L1F_%=:                                 # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint8)temp_u64.u64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_U8
 *
 * \brief sint32 uint32 division with uint8 saturation and check on divide by zero.
 *
 * Divide a signed 32-bit variable by a unsigned 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   sint32   X_s32                      Operand 1, signed   32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint8    (X_s32 / Y_u32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Div_S32U32_U8_inline(sint32 X_s32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if (X_s32 < 0)
    {
        /* limitation */
        res_u32 = MINUINT8;
    }
    else
    {
        /* limitation */
        res_u32 = (Y_u32 == 0) ? (MAXUINT8) : ( ((uint32) X_s32) / Y_u32 );
        res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? ((uint32) MAXUINT8) : (res_u32);
    }

    return ((uint8) res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Uz = S32 / U32)                        */
    /* temporary variable used                                                        */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile("                                                                                              \n\
                    mov    %L0, 0                     # load 0 into the result                                  \n\
                    jnz.t  %[X_s32], 31, L1F_%=       # keep this result if x_s32 is negative                   \n\
                                                      # perform the division first                              \n\
                    dvinit.bu %A0, %[X_s32], %[Y_u32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 1 (8 bits)                                \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, L1F_%=              # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 255                    # load 0                                                  \n\
              L1F_%=:                                 # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint8)temp_u64.u64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_U8_inline
 *
 * \brief uint32 uint32 division with uint8 saturation and check on divide by zero.
 *
 * Divide a unsigned 32-bit variable by a unsigned 32-bit variable and return the result as unsigned 8-bit.
 * The result is limited to MAXUINT8 (MINUINT8) prevent overflows(underflows).
 *
 * \param   uint32   X_u32                      Operand 1, unsigned 32-bit variable
 * \param   uint32   Y_u32                      Operand 2, unsigned 32-bit variable
 * \return  uint8    (X_u32 / Y_u32)            Result,    unsigned  8-bit
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Div_U32U32_U8_inline(uint32 X_u32,uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32 res_u32;


    /* divide by zero */
    if(Y_u32 == 0)
    {
        /* limitation */
        res_u32 = MAXUINT8;
    }
    /* regular */
    else
    {
        res_u32 = (X_u32 / Y_u32);

        /* limitation */
        res_u32 = ( res_u32 > ((uint32) MAXUINT8) ) ? ((uint32) MAXUINT8) : (res_u32);
    }

    return ((uint8) res_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Cz = Ax / Ax)                          */
    /* temporary variable used                                                        */
    /* the sign of the temporary variable matches the sign of the returned type       */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                                                      # perform the division first                              \n\
                    dvinit.bu %A0, %[X_u32], %[Y_u32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 1 (8 bits)                                \n\
                                                      # check overflow                                          \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, L1F_%=              # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 255                    # load 0                                                  \n\
              L1F_%=:                                 # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 9.1 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint8)temp_u64.u64s.l;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}



/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC MODULO DIVISION
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 * SrvB_Mod_U32U32_U32
 *
 * \brief Calculates X modulo Y. Checks if Y is zero. In this case the function returns zero.
 *
 * \param           X_u32   Value that will be divided by Y
 * \param           Y_u32   Divisor, that devides X
 * \return          Returns the remainder of the divions X / Y
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_Mod_U32U32_U32_inline (uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return (Y_u32 == 0UL) ? 0UL : (X_u32 % Y_u32);

#else
    /* MISRA RULE 18.4 VIOLATION: Union is used in Tricore/Hightec specific code. Here union handling is correct.  */
    uint64u temp; /* quotient and remainder */
    uint32 Result_u32;

    temp = SrvB_DivMod_U32U32_U64_inline(X_u32, Y_u32);
    Result_u32 = (uint32)temp.u64s.h;

    return Result_u32;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 **********************************************************************************************************************
 * SrvB_Mod_S32S32_S32
 *
 * \brief Calculates X modulo Y. Checks if Y is zero. In this case the function returns zero.
 *
 * \param           X_s32   Value that will be divided by Y
 * \param           Y_s32   Divisor, that devides X
 * \return          Returns the remainder of the divions X / Y. The sign of the result is the same as X.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_Mod_S32S32_S32_inline (sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return (Y_s32 == 0) ? 0L : (X_s32 % Y_s32);

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used in Tricore/Hightec specific code. Here union handling is correct.  */
    sint64u temp; /* quotient and remainder */
    sint32 Result_s32;

    temp = SrvB_DivMod_S32S32_S64_inline(X_s32, Y_s32);
    Result_s32 = (sint32)temp.s64s.h;

    return Result_s32;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 **********************************************************************************************************************
 * SrvB_Mod_U32U32_U16
 *
 * \brief Calculates X modulo Y. Checks if Y is zero. In this case the function returns zero.
 *
 * \param           X_u32   Value that will be divided by Y
 * \param           Y_u32   Divisor, that devides X
 * \return          Returns the remainder of the divions X / Y
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_Mod_U32U32_U16_inline (uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return (SrvB_TypeLimiter_U32_U16_inline((Y_u32 == 0) ? 0UL : (X_u32 % Y_u32)));

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used in Tricore/Hightec specific code. Here union handling is correct.  */
    uint64u temp; /* quotient and remainder */
    uint16 Result_u16;

    temp = SrvB_DivMod_U32U32_U64_inline(X_u32, Y_u32);
    Result_u16 = SrvB_TypeLimiter_U32_U16_inline((uint32)temp.u64s.h);

    return Result_u16;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 **********************************************************************************************************************
 * SrvB_Mod_S32S32_S16
 *
 * \brief Calculates X modulo Y. Checks if Y is zero. In this case the function returns zero.
 *
 * \param           X_s32   Value that will be divided by Y
 * \param           Y_s32   Divisor, that devides X
 * \return          Remainder of the divions X / Y. The sign of the result is the same as X.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_Mod_S32S32_S16_inline (sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return (SrvB_TypeLimiter_S32_S16_inline((Y_s32 == 0) ? 0L : (X_s32 % Y_s32)));

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used in Tricore/Hightec specific code. Here union handling is correct.  */
    sint64u temp; /* quotient and remainder */
    sint16 Result_s16;

    temp = SrvB_DivMod_S32S32_S64_inline(X_s32, Y_s32);
    Result_s16 = SrvB_TypeLimiter_S32_S16_inline((sint32)temp.s64s.h);

    return Result_s16;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 **********************************************************************************************************************
 * SrvB_Mod_U32U32_U8
 *
 * \brief Calculates X modulo Y. Checks if Y is zero. In this case the function returns zero.
 *
 * \param           X_u32   Value that will be divided by Y
 * \param           Y_u32   Divisor, that devides X
 * \return          Returns the remainder of the divions X / Y
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint8 SrvB_Mod_U32U32_U8_inline (uint32 X_u32, uint32 Y_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return (SrvB_TypeLimiter_U32_U8_inline((Y_u32 == 0) ? 0UL : (X_u32 % Y_u32)));

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used in Tricore/Hightec specific code. Here union handling is correct.  */
    uint64u temp; /* quotient and remainder */
    uint8 Result_u8;

    temp = SrvB_DivMod_U32U32_U64_inline(X_u32, Y_u32);
    Result_u8 = SrvB_TypeLimiter_U32_U8_inline((uint32)temp.u64s.h);

    return Result_u8;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}

/**
 **********************************************************************************************************************
 * SrvB_Mod_S32S32_S8
 *
 * \brief Calculates X modulo Y. Checks if Y is zero. In this case the function returns zero.
 *
 * \param           X_s32   Value that will be divided by Y
 * \param           Y_s32   Divisor, that devides X
 * \return          Returns the remainder of the divions X / Y. The sign of the result is the same as X.
 **********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint8 SrvB_Mod_S32S32_S8_inline (sint32 X_s32, sint32 Y_s32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    return (SrvB_TypeLimiter_S32_S8_inline((Y_s32 == 0) ? 0L : (X_s32 % Y_s32)));

#else

    /* MISRA RULE 18.4 VIOLATION: Union is used in Tricore/Hightec specific code. Here union handling is correct.  */
    sint64u temp; /* quotient and remainder */
    sint8 Result_s8;

    temp = SrvB_DivMod_S32S32_S64_inline(X_s32, Y_s32);
    Result_s8 = SrvB_TypeLimiter_S32_S8_inline((sint32)temp.s64s.h);

    return Result_s8;

/* (SRVB_IMPL_ASM_ENABLE == 0) */
#endif
}


/*
 ***********************************************************************************************************************
 *
 *
 *
 * ARITHMETIC COUPLED MULTIPLICATION AND DIVISION with 32 Bit and 16 BIT return value.
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_U32U32U32_U32
 *
 * \brief Multiplies two uint32 variables, divides the interim value by a third one and limits the result to a uint32
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \param    uint32 Z_u32
 * \return   uint32
 * \retval   ((X_u32 * Y_u32) / Z_u32 )saturated to uint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 SrvB_MulDiv_U32U32U32_U32_inline(uint32 X_u32, uint32 Y_u32, uint32 Z_u32))
{
    return SrvB_Div_U64U32_U32_inline((uint64)X_u32 * Y_u32, Z_u32);
}


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_U32U32U32_U16
 *
 * \brief Multiplies two uint32 variables, dividesthe interim value by a third one and limits the result to an uint16
 *
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \param    uint32 Z_u32
 * \return   uint16
 * \retval   ((X_u32 * Y_u32)  /  Z_u32 )saturated to uint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_MulDiv_U32U32U32_U16_inline(uint32 X_u32, uint32 Y_u32, uint32 Z_u32))
{
    return SrvB_TypeLimiter_U32_U16_inline(SrvB_MulDiv_U32U32U32_U32_inline(X_u32, Y_u32, Z_u32));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_S32S32S32_S32
 *
 * \brief Multiplies two sint32 variables, divides the interim value by a third one and limits the result to a sint16
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \param    sint32 Z_s32
 * \return   sint32
 * \retval   ((X_u32 * Y_u32) / Z_u32 )saturated to sint32
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint32 SrvB_MulDiv_S32S32S32_S32_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32))
{
    return SrvB_Div_S64S32_S32_inline((sint64)X_s32 * Y_s32, Z_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_S32S32S32_S16
 *
 * \brief Multiplies two sint32 variables, divides the interim value by a third one and limits the result to a sint16
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \param    sint32 Z_s32
 * \return   sint16
 * \retval   ((X_u32 * Y_u32) / Z_u32 )saturated to sint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(sint16 SrvB_MulDiv_S32S32S32_S16_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32))
{
    return SrvB_TypeLimiter_S32_S16_inline(SrvB_MulDiv_S32S32S32_S32_inline(X_s32, Y_s32, Z_s32));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulDiv_S32S32S32_U16
 *
 * \brief Multiplies two sint32 variables, divides the interim value by a third one and limits the result to a sint16
 *
 * \param    sint32 X_s32
 * \param    sint32 Y_s32
 * \param    sint32 Z_s32
 * \return   uint16
 * \retval   ((X_u32 * Y_u32)  /  Z_u32 ) saturated to uint16
 *
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint16 SrvB_MulDiv_S32S32S32_U16_inline(sint32 X_s32, sint32 Y_s32, sint32 Z_s32))
{
    return SrvB_TypeLimiter_S32_U16_inline(SrvB_MulDiv_S32S32S32_S32_inline(X_s32, Y_s32, Z_s32));
}

/* _SRVB_DIV_INL_H */
#endif
