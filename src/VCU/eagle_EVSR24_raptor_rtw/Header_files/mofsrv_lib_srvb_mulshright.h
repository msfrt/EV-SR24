/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:mofsrv_lib_srvb_mulshright.h$
 *
 * $Author____:GWR2SI$
 *
 * $Function__:add services for Ascet$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GWR2SI$
 * $Date______:10.07.2011$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib_srvb_mulshright$
 * $Variant___:18.0.0$
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
 * 18.0.0; 0     10.07.2011 GWR2SI
 *   add services for Ascet
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/


#ifndef _MOFSRV_LIB_SRVB_MULSHRIGHT_H
#define _MOFSRV_LIB_SRVB_MULSHRIGHT_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif

#define	MoFSrv_Lib_SrvB_MulShRight_S32S32_S16	MoFSrv_Lib_SrvB_MulShRight_S32S32_S16_inline
#define	MoFSrv_Lib_SrvB_MulShRight_S32S32_S32	MoFSrv_Lib_SrvB_MulShRight_S32S32_S32_inline
#define	MoFSrv_Lib_SrvB_MulShRight_S32S32_S8	MoFSrv_Lib_SrvB_MulShRight_S32S32_S8_inline
#define	MoFSrv_Lib_SrvB_MulShRight_S32S32_U16	MoFSrv_Lib_SrvB_MulShRight_S32S32_U16_inline
#define	MoFSrv_Lib_SrvB_MulShRight_S32S32_U32	MoFSrv_Lib_SrvB_MulShRight_S32S32_U32_inline
#define	MoFSrv_Lib_SrvB_MulShRight_S32S32_U8	MoFSrv_Lib_SrvB_MulShRight_S32S32_U8_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32S32_S16	MoFSrv_Lib_SrvB_MulShRight_U32S32_S16_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32S32_S32	MoFSrv_Lib_SrvB_MulShRight_U32S32_S32_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32S32_S8	MoFSrv_Lib_SrvB_MulShRight_U32S32_S8_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32S32_U16	MoFSrv_Lib_SrvB_MulShRight_U32S32_U16_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32S32_U32	MoFSrv_Lib_SrvB_MulShRight_U32S32_U32_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32S32_U8	MoFSrv_Lib_SrvB_MulShRight_U32S32_U8_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32U32_S16	MoFSrv_Lib_SrvB_MulShRight_U32U32_S16_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32U32_S32	MoFSrv_Lib_SrvB_MulShRight_U32U32_S32_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32U32_S8	MoFSrv_Lib_SrvB_MulShRight_U32U32_S8_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32U32_U16	MoFSrv_Lib_SrvB_MulShRight_U32U32_U16_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32U32_U32	MoFSrv_Lib_SrvB_MulShRight_U32U32_U32_inline
#define	MoFSrv_Lib_SrvB_MulShRight_U32U32_U8	MoFSrv_Lib_SrvB_MulShRight_U32U32_U8_inline


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_U32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_MulShRight_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_MulShRight_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8)
{
    uint32 Result_u32;
    sint64 Temp_s64;
    sint32 Temp_s32;
      
      asm volatile("  mul.u   %A[Temp_s64],%[X],%[Y]                  # calc 64 bit internal result                       \n\
                      jnz     %[N],1f                                 # standard is N>0                                   \n\
                      mov     %[Result], %L[Temp_s64]                 # hypothesis: input  <= MAXUINT                     \n\
                      j       2f                                      # control hypothesis                                \n\
                   1: rsub    %[Temp_s32],%[N],0                      # prepare N for sha                                 \n\
                      rsub    %[N],%[N],32                            # repare N for dextr                                \n\
                      dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[N]# do the right shift on internal 64 bit result      \n\
                      sh      %H[Temp_s64],%H[Temp_s64],%[Temp_s32]                                                       \n\
                   2: jz      %H[Temp_s64], 3f                        # jump if result is less than MAXUINT32             \n\
                      mov     %[Result], -1                           # otherwise saturate to MAXUINT32                   \n\
                   3:                                                                                                     \n\
          " : [Result] "=&d"(Result_u32), [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32),  [N] "+d"(N_u8)
                   : [X] "d"(X_u32), [Y] "d"(Y_u32) );
        
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return Result_u32;
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_S32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_MulShRight_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32,  uint8 N_u8);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_MulShRight_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32,  uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_U32_S32_inline(MoFSrv_Lib_SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_S16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_MulShRight_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_MulShRight_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_U32_S16_inline(MoFSrv_Lib_SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_U8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_MulShRight_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_MulShRight_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_U32_U8_inline(MoFSrv_Lib_SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_S8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_MulShRight_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_MulShRight_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_U32_S8_inline(MoFSrv_Lib_SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32U32_U16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulShRight_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulShRight_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_U32_U16_inline(MoFSrv_Lib_SrvB_MulShRight_U32U32_U32_inline(X_u32, Y_u32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_U32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_MulShRight_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_MulShRight_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8)
{
    uint32 Result_u32;
    sint64 Temp_s64;
    sint32 Temp_s32;

    asm volatile("                                                                                                  \n\
                    xor.t   %[Temp_s32],%[X],31,%[Y],31                    # check sign of result                   \n\
                    jz      %[Temp_s32],1f                                 # posititve result                       \n\
                    movh    %[Result],0                                    # return 0                               \n\
                    j       3f                                             # => end                                 \n\
                 1: abs     %[X],%[X]                                      # prepare for unsigend multiplication    \n\
                    abs     %[Y],%[Y]                                      # prepare for unsigend multiplication    \n\
                    jz      %[N],2f                                        # check N=0 as dextr is limited pos < 32 \n\
                    mul.u   %A[Temp_s64],%[X],%[Y]                         # calc 64 bit internal result            \n\
                    rsub    %[Temp_s32],%[N],32                            # prepare Temp_S32 for dextr             \n\
                    dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[Temp_s32]# right shift on internal 64 bit result  \n\
                    rsub    %[N],%[N],0                                    # prepare N for range check              \n\
					sh      %H[Temp_s64],%H[Temp_s64],%[N]                 # shift for range check                  \n\
                    jz      %H[Temp_s64], 3f                               # result is in range                     \n\
                 2: muls.u  %[Result],%[X],%[Y]                            # calculation if N = 0, saturation       \n\
				 3:                                                                                                 \n\
                 " : [Result] "=&d"(Result_u32), [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32), [N] "+d"(N_u8), [X] "+d"(X_s32), [Y] "+d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return Result_u32;
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_S32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_MulShRight_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_MulShRight_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8)
{
    sint32 Result_s32;
    sint64 Temp_s64;
    sint32 Temp_s32;

    asm volatile("  jz      %[N],1f                                         #check N=0 as position in dextr 32-N<32\n\
                    mul     %A[Temp_s64],%[X],%[Y]                          #calc 64 bit internal result           \n\
                    rsub    %[Temp_s32],%[N],32                             #prepare Temp_s32 for dextr instruction\n\
                    dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[Temp_s32] # = right shift of 64 bit result       \n\
                    rsub    %[N], %[N], 1                                   # prepare for range check              \n\
					sha     %H[Temp_s64], %H[Temp_s64],%[N]                 # identical shift like result          \n\
					cls     %[Temp_s32],%H[Temp_s64]                        # range check of result, step 3        \n\
                    mov     %[N], 31                                        # 31 + 1 sign bits expected            \n\
					jge     %[Temp_s32],%[N],2f                             # out of range => saturation           \n\
				 1:	muls    %[Result],%[X],%[Y]                             # out of range => saturation           \n\
                 2:                                                                                                \n\
                 " : [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32), [Result] "=&d"(Result_s32), [N] "+d"(N_u8)
                   : [X] "%d"(X_s32), [Y] "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (Result_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_S16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_MulShRight_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_MulShRight_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_S16_inline(MoFSrv_Lib_SrvB_MulShRight_S32S32_S32_inline(X_s32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_U8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_MulShRight_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_MulShRight_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_U8_inline(MoFSrv_Lib_SrvB_MulShRight_S32S32_S32_inline(X_s32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_S8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_MulShRight_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_MulShRight_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_S8_inline(MoFSrv_Lib_SrvB_MulShRight_S32S32_S32_inline(X_s32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_S32S32_U16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulShRight_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulShRight_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_U16_inline(MoFSrv_Lib_SrvB_MulShRight_S32S32_S32_inline(X_s32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_U32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_MulShRight_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_MulShRight_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8)
{
    uint32 Result_u32;
    sint64 Temp_s64;
    sint32 Temp_s32;

    asm volatile("  jz.t    %[Y],31,1f                              # calcualte when result is positive                 \n\
                    movh    %[Result],0                             # otherwise limit to zero                           \n\
                    j 4f                                                                                                \n\
                 1: mul.u   %A[Temp_s64],%[X],%[Y]                  # calc 64 bit internal result                       \n\
                    jnz     %[N],2f                                 # standard is N>0                                   \n\
                    mov     %[Result], %L[Temp_s64]                 # hypothesis: input  <= MAXUINT                     \n\
                    j       3f                                      # control hypothesis                                \n\
                 2: rsub    %[Temp_s32],%[N],0                      # prepare N for sha                                 \n\
                    rsub    %[N],%[N],32                            # repare N for dextr                                \n\
                    dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[N]# do the right shift on internal 64 bit result      \n\
                    sh      %H[Temp_s64],%H[Temp_s64],%[Temp_s32]                                                       \n\
                 3: jz      %H[Temp_s64], 4f                        # jump if result is less than MAXUINT32             \n\
                    mov     %[Result], -1                           # otherwise saturate to MAXUINT32                   \n\
                 4:                                                                                                     \n\
                 " : [Result] "=&d"(Result_u32), [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32), [N] "+d"(N_u8)
                   : [X] "d"(X_u32), [Y] "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return Result_u32;
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_S32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_MulShRight_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32,  uint8 N_u8);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_MulShRight_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32,  uint8 N_u8)
{
    sint32 Result_s32;
    sint64 Temp_s64;
    sint32 Temp_s32;
    sint32 Sgn_s32;
    
    
    asm volatile(" sh      %[Sgn],%[Y],-31                                 # remember sign of result               \n\
                   abs     %[Y],%[Y]                                       # absolute value of Y                   \n\
                   mul.u   %A[Temp_s64],%[X],%[Y]                          # calculate 64 bit unsigned result      \n\
                   jz      %[Sgn],0f                                       # positive result                       \n\
		           not     %L[Temp_s64]                                    # sign recovery                         \n\
                   not     %H[Temp_s64]                                    #                                       \n\
                   addx    %L[Temp_s64],%L[Temp_s64],1                     #                                       \n\
                   addc    %H[Temp_s64],%H[Temp_s64],0                     #                                       \n\
               0:  jz      %[N],1f                                         # avoid pos = 32 in dextr instruction   \n\
		           rsub    %[Temp_s32],%[N],32                             #prepare Temp_s32 for dextr instruction \n\
                   dextr   %[Result],%H[Temp_s64],%L[Temp_s64],%[Temp_s32] # = right shift of 64 bit result        \n\
                   j       2f                                              # go to standard calculation            \n\
	           1:  mov     %[Result],%L[Temp_s64]                          # N = 0, assume Low bytes as result     \n\
	           2:  rsub    %[N], %[N], 0                                   # prepare for range check               \n\
		           sha     %H[Temp_s64], %H[Temp_s64],%[N]                 # identical shift like result           \n\
		           cls     %[Temp_s32],%H[Temp_s64]                        # range check of result, step 3         \n\
                   mov     %[N], 31                                        # 31 + 1 sign bits expected             \n\
		           jlt     %[Temp_s32],%[N],3f                             # out of range => saturation            \n\
		           xor.t    %L[Temp_s64], %[Result],31, %H[Temp_s64],31    # prepare for check '+1' sign bit       \n\
		           jz       %L[Temp_s64],4f                                # +1 sign bit: in range => end          \n\
               3:  movh    %[Result],0x8000                                # saturation to MINSINT32               \n\
                   caddn   %[Result],%[Sgn],%[Result],-1                   # saturation to MAXSINT32               \n\
               4:                                                                                                  \n\
     " : [Result] "=&d"(Result_s32), [Temp_s64] "=&d"(Temp_s64) , [Temp_s32] "=&d"(Temp_s32) , [Sgn] "=&d"(Sgn_s32), [Y] "+d"(Y_s32), [N] "+d"(N_u8)
       : [X] "d"(X_u32) );
       
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return Result_s32;
}

/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_U8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_MulShRight_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_MulShRight_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_U32_U8_inline(MoFSrv_Lib_SrvB_MulShRight_U32S32_U32_inline(X_u32, Y_s32, N_u8));
}

/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_S8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_MulShRight_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_MulShRight_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_S8_inline(MoFSrv_Lib_SrvB_MulShRight_U32S32_S32_inline(X_u32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_U16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulShRight_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_MulShRight_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_U32_U16_inline(MoFSrv_Lib_SrvB_MulShRight_U32S32_U32_inline(X_u32, Y_s32, N_u8));
}


/**
 ***********************************************************************************************************************
 * SrvB_MulShRight_U32S32_S16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_MulShRight_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_MulShRight_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32, uint8 N_u8)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_S16_inline(MoFSrv_Lib_SrvB_MulShRight_U32S32_S32_inline(X_u32, Y_s32, N_u8));
}


#endif /* _MOFSRV_LIB_SRVB_MULSHRIGHT_H */
