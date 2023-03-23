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
 * $Filename__:mofsrv_lib_srvb_div.h$
 *
 * $Author____:GWR2SI$
 *
 * $Function__:add services for Ascet$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:VEE1COB$
 * $Date______:25.03.2013$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib_srvb_div$
 * $Variant___:18.0.1$
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
 * 18.0.1; 1     25.03.2013 VEE1COB
 *   Comments updated at line 702 and 1039
 * 
 * 18.0.1; 0     19.03.2013 VEE1COB
 *    Bugfix of MoFSrv_Lib_SrvB_Div_S32U32_S16 and 
 *    MoFSrv_Lib_SrvB_Div_S32U32_S8
 * 
 * 18.0.0; 1     14.08.2011 GWR2SI
 *   reorder some services for better compare with L1
 * 
 * 18.0.0; 0     10.07.2011 GWR2SI
 *   add services for Ascet
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/


#ifndef _MOFSRV_LIB_SRVB_DIV_H
#define _MOFSRV_LIB_SRVB_DIV_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif


#define	MoFSrv_Lib_SrvB_Mul_S32S32_S64  MoFSrv_Lib_SrvB_Mul_S32S32_S64_inline
#define	MoFSrv_Lib_SrvB_Mul_U32U32_U64  MoFSrv_Lib_SrvB_Mul_U32U32_U64_inline
#define	MoFSrv_Lib_SrvB_DivMod_U32U32_U64  MoFSrv_Lib_SrvB_DivMod_U32U32_U64_inline
#define	MoFSrv_Lib_SrvB_Div_U64U32_U32  MoFSrv_Lib_SrvB_Div_U64U32_U32_inline
#define	MoFSrv_Lib_SrvB_Div_S64S32_S32  MoFSrv_Lib_SrvB_Div_S64S32_S32_inline


#define	MoFSrv_Lib_SrvB_Div_S32S32_S16	MoFSrv_Lib_SrvB_Div_S32S32_S16_inline
#define	MoFSrv_Lib_SrvB_Div_S32S32_S32	MoFSrv_Lib_SrvB_Div_S32S32_S32_inline
#define	MoFSrv_Lib_SrvB_Div_S32S32_S8	MoFSrv_Lib_SrvB_Div_S32S32_S8_inline
#define	MoFSrv_Lib_SrvB_Div_S32S32_U16	MoFSrv_Lib_SrvB_Div_S32S32_U16_inline
#define	MoFSrv_Lib_SrvB_Div_S32S32_U32	MoFSrv_Lib_SrvB_Div_S32S32_U32_inline
#define	MoFSrv_Lib_SrvB_Div_S32S32_U8	MoFSrv_Lib_SrvB_Div_S32S32_U8_inline
#define	MoFSrv_Lib_SrvB_Div_S32U32_S16	MoFSrv_Lib_SrvB_Div_S32U32_S16_inline
#define	MoFSrv_Lib_SrvB_Div_S32U32_S32	MoFSrv_Lib_SrvB_Div_S32U32_S32_inline
#define	MoFSrv_Lib_SrvB_Div_S32U32_S8	MoFSrv_Lib_SrvB_Div_S32U32_S8_inline
#define	MoFSrv_Lib_SrvB_Div_S32U32_U16	MoFSrv_Lib_SrvB_Div_S32U32_U16_inline
#define	MoFSrv_Lib_SrvB_Div_S32U32_U32	MoFSrv_Lib_SrvB_Div_S32U32_U32_inline
#define	MoFSrv_Lib_SrvB_Div_S32U32_U8	MoFSrv_Lib_SrvB_Div_S32U32_U8_inline
#define	MoFSrv_Lib_SrvB_Div_U32S32_S16	MoFSrv_Lib_SrvB_Div_U32S32_S16_inline
#define	MoFSrv_Lib_SrvB_Div_U32S32_S32	MoFSrv_Lib_SrvB_Div_U32S32_S32_inline
#define	MoFSrv_Lib_SrvB_Div_U32S32_S8	MoFSrv_Lib_SrvB_Div_U32S32_S8_inline
#define	MoFSrv_Lib_SrvB_Div_U32S32_U16	MoFSrv_Lib_SrvB_Div_U32S32_U16_inline
#define	MoFSrv_Lib_SrvB_Div_U32S32_U32	MoFSrv_Lib_SrvB_Div_U32S32_U32_inline
#define	MoFSrv_Lib_SrvB_Div_U32S32_U8	MoFSrv_Lib_SrvB_Div_U32S32_U8_inline
#define	MoFSrv_Lib_SrvB_Div_U32U32_S16	MoFSrv_Lib_SrvB_Div_U32U32_S16_inline
#define	MoFSrv_Lib_SrvB_Div_U32U32_S32	MoFSrv_Lib_SrvB_Div_U32U32_S32_inline
#define	MoFSrv_Lib_SrvB_Div_U32U32_S8	MoFSrv_Lib_SrvB_Div_U32U32_S8_inline
#define	MoFSrv_Lib_SrvB_Div_U32U32_U16	MoFSrv_Lib_SrvB_Div_U32U32_U16_inline
#define	MoFSrv_Lib_SrvB_Div_U32U32_U32	MoFSrv_Lib_SrvB_Div_U32U32_U32_inline
#define	MoFSrv_Lib_SrvB_Div_U32U32_U8	MoFSrv_Lib_SrvB_Div_U32U32_U8_inline



/*
 ***********************************************************************************************************************
 * INTERNAL ROUTINES  copied from SWHDR : srvb_div_inl / 1.14.4; 0
 *
 ***********************************************************************************************************************
 */
LOCAL_INLINE sint64 MoFSrv_Lib_SrvB_Mul_S32S32_S64_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint64 MoFSrv_Lib_SrvB_Mul_S32S32_S64_inline(sint32 X_s32, sint32 Y_s32)
{
    return ((sint64)X_s32*Y_s32);
}


LOCAL_INLINE uint64 MoFSrv_Lib_SrvB_Mul_U32U32_U64_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint64 MoFSrv_Lib_SrvB_Mul_U32U32_U64_inline(uint32 X_u32, uint32 Y_u32)
{
    return ((uint64)X_u32*Y_u32);
}


LOCAL_INLINE uint64u MoFSrv_Lib_SrvB_DivMod_U32U32_U64_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint64u MoFSrv_Lib_SrvB_DivMod_U32U32_U64_inline(uint32 X_u32, uint32 Y_u32)
{

    uint64u temp; /* quotient and remainder */
    uint32 temp_u32;
    uint32 sgn_u32;

    asm volatile("  jz       %[Y_u32],2f                 # check if divisor is zero                 \n\
                    clz      %[temp_u32],%[X_u32]        # check if ...                             \n\
                    mov      %[sgn_u32],24               # ...                                      \n\
                    jlt.u    %[temp_u32],%[sgn_u32],1f   # ... 8 bit division fits                  \n\
                                                                                                    \n\
                    dvinit.bu %A0,%[X_u32],%[Y_u32]      # init 8 bit division                      \n\
                    j 7f                                 #                                          \n\
                1:                                                                                  \n\
                    mov      %[sgn_u32],16               # ...                                      \n\
                    jlt.u    %[temp_u32],%[sgn_u32],4f   # ... 16 bit division fits                 \n\
                    dvinit.hu %A0,%[X_u32],%[Y_u32]      # init 16 bit division                     \n\
                    j 6f                                 #                                          \n\
                2:                                       # division by zero handling:               \n\
                    jnz      %[X_u32],25f                # check dividend is also zero              \n\
                    mov      %L0,1                       #  0/0=1                                   \n\
                    j        35f                          #  exit                                   \n\
               25:                                                                                  \n\
                    movh     %L0, 0x0000                 #  prepare limitation                      \n\
                    not      %L0                         #  MAXSINT32/MINSINT32                     \n\
               35:  mov      %H0, 0                      #  remainder = 0                           \n\
                    j        8f                          #  exit                                    \n\
                4:  dvinit.u %A0, %[X_u32], %[Y_u32]     # init 32 bit division                     \n\
                    dvstep.u %A0, %A0, %[Y_u32]                                                     \n\
                    dvstep.u %A0, %A0, %[Y_u32]                                                     \n\
                6:  dvstep.u %A0, %A0, %[Y_u32]          # 16 bit division                          \n\
                7:  dvstep.u %A0, %A0, %[Y_u32]          # 8 bit division                           \n\
                8:                                                                                  \n\
                    "
                  : "=&d"(temp.u64), [temp_u32] "=&d"(temp_u32), [sgn_u32] "=&d"(sgn_u32)
                  : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(temp);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U64U32_U32  copied from SWHDR : srvb_div_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_U64U32_U32_inline(uint64 X_u64, uint32 Y_u32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_U64U32_U32_inline(uint64 X_u64, uint32 Y_u32)
{
    uint64u temp_u64_un;
        
    /* using union to avoid the compiler's extra "mov" command for the return after assembler code */
    temp_u64_un.u64 = X_u64;

    asm volatile (
    "     jz        %[Y_u32],20f                        #jump for saturation if Y==0                          \n\
          jlt.u     %H[X_u64], %[Y_u32], 30f            #jump for calculation if result will be <= MAXUINT32  \n\
      20: mov       %L[X_u64], -1                       #saturation                                           \n\
          j         50f                                                                                        \n\
      30: jz.t      %[Y_u32],31,40f                     #jump for standard calculation when divisor < MAXSINT32\n\
          sh        %[Y_u32], -1                        #divide divisor                                        \n\
          dextr     %L[X_u64], %H[X_u64], %L[X_u64], 31 #divide dividends low bytes                            \n\
          sh        %H[X_u64], -1                       #divide dividends high bytes                           \n\
      40: dvstep.u  %A[X_u64], %A[X_u64], %[Y_u32]      #unsigned 32 bit division                              \n\
          dvstep.u  %A[X_u64], %A[X_u64], %[Y_u32]                                                             \n\
          dvstep.u  %A[X_u64], %A[X_u64], %[Y_u32]                                                             \n\
          dvstep.u  %A[X_u64], %A[X_u64], %[Y_u32]                                                             \n\
      50: " : [X_u64] "+d"(temp_u64_un.u64), [Y_u32] "+d"(Y_u32));
       
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(temp_u64_un.u64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S64S32_S32  copied from SWHDR : srvb_div_inl / 1.14.4; 0
 *
 * \brief sint64 sint32 division with sint32 saturation and check on divide by zero.
 *
 * Divide a signed 64-bit variable by a signed 32-bit variable and return the result as signed 32-bit variable.
 * The result is limited to MAXSINT32 (MINSINT32)  to prevent overflow (underflow).
 *
 * \param   sint64   X_s64                      Operand 1, signed   64-bit variable
 * \param   sint32   Y_s32                      Operand 2, signed   32-bit variable
 * \return   sint32   (X_s64 / Y_s32)            Result, signed 32-bit variable
 *
 * \f[ Res_{s32} = \frac{X_{s64}}{Y_{s32}}  \f]
 *
 * \image html https://inside-ws.bosch.com/FIRSTspiritWeb/wcms/wcms_c/media/de/system/layout/logos/bosch_logo~1.gif
 *
 ***********************************************************************************************************************
 */
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_S64S32_S32_inline(sint64 X_s64, sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_S64S32_S32_inline(sint64 X_s64, sint32 Y_s32)
{
    sint64u temp_s64_un;
    uint32  sign;
    
    /* using union to avoid the compiler's extra "mov" command for the return after assembler code */
    temp_s64_un.s64 = X_s64;

    asm volatile (
    "     xor       %[sign], %H[X_s64], %[Y_s32]        #define sign of the result                                \n\
          jz        %[Y_s32],45f                        #jump for saturation if Y==0                              \n\
          jz.t     %[Y_s32], 31, 5f                     #neg. sign of Y_s32 => change signs, otherwise jump to 5  \n\
          not       %[Y_s32]                            # sign change of Y_s32                                    \n\
          addi      %[Y_s32], %[Y_s32], 1               #                                                         \n\
      5:  jz.t     %H[X_s64], 31, 10f                   #neg. sign of X_s64 => change signs, otherwise jump to 10 \n\
          not       %H[X_s64]                           # sign change of X_s64                                    \n\
          not       %L[X_s64]                           #                                                         \n\
          addx      %L[X_s64], %L[X_s64], 1             #addition where overflow set carry bit in psw             \n\
          addc      %H[X_s64], %H[X_s64], 0             #add the carry bit from the step before                   \n\
      10: jge.u     %H[X_s64], %[Y_s32], 45f            #jump for saturation if result will be >= MAXUINT32       \n\
      30: jz.t      %[Y_s32],31,40f                     #jump for standard calculation when divisor < MAXSINT32  \n\
          sh        %[Y_s32], -1                        #divide divisor                                          \n\
          dextr     %L[X_s64], %H[X_s64], %L[X_s64], 31 #divide dividends low bytes                              \n\
          sh        %H[X_s64], -1                       #divide dividends high bytes                             \n\
      40: dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]      #unsigned 32 bit division                                \n\
          dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                               \n\
          dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                               \n\
          dvstep.u  %A[X_s64], %A[X_s64], %[Y_s32]                                                               \n\
          jnz.t      %L[X_s64], 31, 45f                 #avoid overflow in result, signed saturation             \n\
          jz.t       %[sign], 31, 50f                   #negative result expected, otherwise jump                \n\
          muls      %L[X_s64], %L[X_s64], -1            #negative result                                         \n\
          j         50f                                                                                          \n\
      45: movh      %L[X_s64], 0x8000                   # MINSINT32                                              \n\
          jnz.t     %[sign], 31, 50f                    #neg. sign => change signs                               \n\
          addi      %L[X_s64], %L[X_s64], -1            # MAXSINT32                                              \n\
      50: " : [sign] "=&d"(sign), [X_s64] "+d"(temp_s64_un.s64), [Y_s32] "+d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(temp_s64_un.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_S32  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32)
{
    sint64u temp; /* used for the wide division */

    asm volatile("  jz      %[Y_s32],1f                 # jump if Y_s32 is == 0                   \n\
                    jeq     %[Y_s32],-1,2f              # jump if Y_s32 == -1                     \n\
                                                        #avoid overflow in case of MINSINT32/(-1) \n\
                    dvinit  %A0,%[X_s32],%[Y_s32]                                                 \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                      \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                      \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                      \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                      \n\
                    dvadj   %A0,%A0,%[Y_s32]                                                      \n\
                    j       3f                                                                    \n\
               1:                                                                                 \n\
                    extr    %L0,%[X_s32],31,1           # look for the sign                       \n\
                    movh    %H0, 0x8000                 # prepare limitation                      \n\
                    caddn   %L0, %L0, %H0, -1           # MAXSINT32/MINSINT32                     \n\
                    j       3f                          # jump to the end                         \n\
               2:                                                                                 \n\
                    muls     %L0,%[X_s32],-1            # X_s32/(-1) = X_s32*(-1)                 \n\
               3:                                                                                 \n\
                  ": "=&d"(temp.s64)
                   : [X_s32] "d"(X_s32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint32)temp.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_S32  copied from SWHDR : srvb_div_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_U32S32_S32_inline(uint32 X_u32,sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_U32S32_S32_inline(uint32 X_u32,sint32 Y_s32)
{
    sint64u temp; /* used for the wide division */
    uint32  tmp_u32;

    asm volatile("  jnz         %[Y_s32],1f                 # jump if Y_s32 is <> 0            \n\
                    movh        %L0, 0x8000                 # prepare limitation               \n\
                    addi        %L0, %L0, -1                # MAXSINT32                        \n\
                    j           3f                          # jump to the end                  \n\
              1:                                                                               \n\
                    abs         %[tmp_u32], %[Y_s32]        # absolut value, incl. |MINSINT32| \n\
                    dvinit.u    %A0,%[X_u32],%[tmp_u32]                                        \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    extr        %H0, %L0,31,1               # |%L0| > MAXSINT32                \n\
                    jz          %H0, 2f                     # jump, if |%L0| < MAXSINT32       \n\
                    movh        %L0, 0x8000                 # limit: MINSINT32                 \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    caddn       %L0, %H0, %L0, -1           # Y_s32 >=0: MAXSINT32             \n\
                    j           3f                          # jump to the end                  \n\
              2:                                                                               \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, 3f                     # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
               3:                                                                              \n\
                    "
                    : "=&d"(temp.s64), [tmp_u32] "=&d"(tmp_u32)
                    : [X_u32] "d"(X_u32), [Y_s32] "d"(Y_s32) );

           /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint32) temp.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_S32_inline  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_S32U32_S32_inline(sint32 X_s32,uint32 Y_u32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_S32U32_S32_inline(sint32 X_s32,uint32 Y_u32)
{
    sint64u temp_s64;

    /* Note: This Assembler Code is generated (Sz = Sx / U32) */
    /* temporary variable used                                */
    asm volatile(" \n\
                    mov  %L0, 0                     # Load 0 into the result                    \n\
                                                    # check the -1 result                       \n\
                    movh   %H0, 0x8000              # use this temporary register               \n\
                    jne   %[Y_u32], %H0, 2f         # check whenever y_u32 is MAXSINT32 + 1     \n\
                    jne   %[X_s32], %H0, 2f         # check whenever x_s32 is MINSINT32         \n\
                    mov    %L0, -1                  # load the result of this special case: -1  \n\
                    j 1f                            # finish!                                   \n\
                 2:                                 # now start the normal operation            \n\
                    jnz.t  %[Y_u32], 31, 1f         # check if y_u32 is not too big             \n\
                                                    # perform the division now                  \n\
                    dvinit %A0, %[X_s32], %[Y_u32]  # initialisation                            \n\
                    dvstep %A0, %A0, %[Y_u32]       # division step 1 (8 bits)                  \n\
                    dvstep %A0, %A0, %[Y_u32]       # division step 2 (16 bits)                 \n\
                    dvstep %A0, %A0, %[Y_u32]       # division step 3 (24 bits)                 \n\
                    dvstep %A0, %A0, %[Y_u32]       # division step 4 (32 bits)                 \n\
                    dvadj %A0, %A0, %[Y_u32]        # result adjustment (signed operation only) \n\
                                                    # overflow occurs only if y_u32 == 0        \n\
                    jnz %[Y_u32], 1f                # if y_u32 != 0 jump to the end             \n\
                    movh %L0, 0x8000                # load minimum value MINSINT32              \n\
                    jnz.t %[X_s32], 31, 1f          # keep this result if x_s32 is negative     \n\
                    not   %L0                       # Complement (MAXSINT32) otherwise          \n\
                 1 :                                # end label                                 \n\
                  "
                  : [_temp_s64]"=&d"(temp_s64.s64)
                  : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_s64 is used within an asm-macro. MISRA cannot check this.  */
    return (sint32)temp_s64.s64s.l;
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_S32_inline  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_U32U32_S32_inline(uint32 X_u32,uint32 Y_u32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Div_U32U32_S32_inline(uint32 X_u32,uint32 Y_u32)
{
    sint64u temp; /* used for the wide division */

    asm volatile("  jnz         %[Y_u32],1f                 # jump if Y_s32 is <> 0         \n\
                    movh        %L0, 0x8000                 # prepare MAXSINT32             \n\
                    addi        %L0, %L0, -1                # MAXSINT32                     \n\
                    j           3f                          # jump to the end               \n\
              1:                                                                            \n\
                    dvinit.u    %A0,%[X_u32],%[Y_u32]                                       \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    movh        %H0, 0x8000                 # prepare MAXSINT32             \n\
                    jlt.u       %L0, %H0, 3f                # jump, if result < MAXSINT32   \n\
                    mov         %L0, %H0                    # limit: MAXSINT32              \n\
                    addi        %L0, %L0, -1                # MAXSINT32                     \n\
              3:                                                                            \n\
                    ": "=&d"(temp.s64)
                   : [X_u32] "d"(X_u32), [Y_u32] "d"(Y_u32) );

           /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint32) temp.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_U32  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_S32S32_U32_inline(sint32 X_s32,sint32 Y_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_S32S32_U32_inline(sint32 X_s32,sint32 Y_s32)
{
    sint64u temp; /* used for the wide division */

    asm volatile("  extr    %H0,%[X_s32],31,1           # look for the sign                  \n\
                    extr    %L0,%[Y_s32],31,1           # look for the sign                  \n\
                    jeq     %H0,%L0,1f                  # jump if sign(Y_s32) = sign(X_s32)  \n\
                    movh    %L0,0x0000                  # MINUINT = Zero                     \n\
                    j       4f                          # jump to the end                    \n\
              1:                                                                             \n\
                    jnz     %[Y_s32],2f                 # jump if Y_s32 is <> 0              \n\
                    movh    %L0, 0x000                  # prepare MAXUINT32                  \n\
                    addi    %L0, %L0, -1                # MAXUINT32                          \n\
                    j       4f                          # jump to the end                    \n\
              2:                                                                             \n\
                    jne     %[Y_s32],-1,3f              # jump if Y_s32 <> -1                \n\
                    mul     %L0,%[X_s32],-1             # unsaturated multiplication         \n\
                    j       4f                          # jump to the end                    \n\
              3:                                                                             \n\
                    dvinit  %A0,%[X_s32],%[Y_s32]                                            \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                 \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                 \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                 \n\
                    dvstep  %A0,%A0,%[Y_s32]                                                 \n\
                    dvadj   %A0,%A0,%[Y_s32]                                                 \n\
              4:                                                                             \n\
                    ": "=&d"(temp.s64)
                   : [X_s32] "d"(X_s32), [Y_s32] "d"(Y_s32) );

           /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(temp.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_U32_inline  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_S32U32_U32_inline(sint32 X_s32,uint32 Y_u32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_S32U32_U32_inline(sint32 X_s32,uint32 Y_u32)
{
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Uz = S32 / U32) */
    /* temporary variable used                                 */
    asm volatile(" \n\
                    mov    %L0, 0                      # load 0 into the result                   \n\
                    jnz.t  %[X_s32], 31, 1f            # keep this result if x_s32 is negative    \n\
                                                       # perform the division first               \n\
                    dvinit.u %A0, %[X_s32], %[Y_u32]   # initialisation                           \n\
                    dvstep.u %A0, %A0, %[Y_u32]        # division step 1 (8 bits)                 \n\
                    dvstep.u %A0, %A0, %[Y_u32]        # division step 2 (16 bits)                \n\
                    dvstep.u %A0, %A0, %[Y_u32]        # division step 3 (24 bits)                \n\
                    dvstep.u %A0, %A0, %[Y_u32]        # division step 4 (32 bits)                \n\
                                                       # overflow occurs only if y_u32 == 0       \n\
                    jnz %[Y_u32], 1f                   # if y_u32 != 0 jump to the end            \n\
                                                       # y_u32 == 0: overflow, discard the result \n\
                    mov %L0, -1                        # load 0xFFFFFFFF (MAXUINT32)              \n\
                 1 :                                   # end label                                \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint32)temp_u64.u64s.l;
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_U32_inline  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_U32S32_U32_inline(uint32 X_u32,sint32 Y_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_U32S32_U32_inline(uint32 X_u32,sint32 Y_s32)
{
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Ux = U32 / S32) */
    /* temporary variable used                                 */
    asm volatile(" \n\
                    mov    %L0, 0                    # load 0 into the result                   \n\
                    jnz.t  %[Y_s32], 31, 1f          # keep this result if y_s32 is negative    \n\
                                                     # perform the division first               \n\
                    dvinit.u %A0, %[X_u32], %[Y_s32] # initialisation                           \n\
                    dvstep.u %A0, %A0, %[Y_s32]      # division step 1 (8 bits)                 \n\
                    dvstep.u %A0, %A0, %[Y_s32]      # division step 2 (16 bits)                \n\
                    dvstep.u %A0, %A0, %[Y_s32]      # division step 3 (24 bits)                \n\
                    dvstep.u %A0, %A0, %[Y_s32]      # division step 4 (32 bits)                \n\
                                                     # overflow occurs only if y_s32 == 0       \n\
                    jnz %[Y_s32], 1f                 # if y_s32 != 0 jump to the end            \n\
                                                     # y_s32 == 0: overflow, discard the result \n\
                    mov %L0, -1                      # load 0xFFFFFFFF (MAXUINT32)              \n\
                 1 :                                 # end label                                \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint32)temp_u64.u64s.l;
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_U32  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_U32U32_U32_inline(uint32 X_u32,uint32 Y_u32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Div_U32U32_U32_inline(uint32 X_u32,uint32 Y_u32)
{
    uint64u temp; /* quotient and remainder */
    uint32 Result_u32;

    if( Y_u32 == 0)
    {
        Result_u32 = MAXUINT32;
    }
    else
    {
        temp = MoFSrv_Lib_SrvB_DivMod_U32U32_U64_inline(X_u32, Y_u32);
        Result_u32 = (uint32)temp.u64s.l;
    }
    return Result_u32;
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_S16  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Div_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Div_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_S16(MoFSrv_Lib_SrvB_Div_S32S32_S32_inline(X_s32, Y_s32));
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_S16  copied from SWHDR : srvb_div_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Div_U32S32_S16_inline(uint32 X_u32,sint32 Y_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Div_U32S32_S16_inline(uint32 X_u32,sint32 Y_s32)
{
    sint64u temp; /* used for the wide division */
    uint32  tmp_u32;

    asm volatile("  jnz         %[Y_s32],1f                 # jump if Y_s32 is <> 0            \n\
                    mov         %L0, 0x7FFF                 # MAXSINT16                        \n\
                    j           3f                          # jump to the end                  \n\
              1:                                                                               \n\
                    abs         %[tmp_u32], %[Y_s32]        # absolut value, incl. |MINSINT32| \n\
                    dvinit.u    %A0,%[X_u32],%[tmp_u32]                                        \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    mov.u       %H0, 0x8000                 # MAXSINT16 +1                     \n\
                    jlt.u       %L0, %H0, 2f                # jump, if result < MAXSINT16      \n\
                    mov         %L0, 0x7FFF                 # MAXSINT16                        \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, 3f                     # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
                    addi        %L0, %L0, -1                # MINSINT16                        \n\
              2:                                                                               \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, 3f                     # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
              3:                                                                               \n\
                    "
                    : "=&d"(temp.s64), [tmp_u32] "=&d"(tmp_u32)
                    : [X_u32] "d"(X_u32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16) temp.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_S16_inline  copied from SWHDR : srvb_div_inl / 1.16.1; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Div_S32U32_S16_inline(sint32 X_s32,uint32 Y_u32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Div_S32U32_S16_inline(sint32 X_s32,uint32 Y_u32)
{

    /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */
        sint64u temp_s64;
	uint32  tmp_u32;

    asm volatile("     jge.u   %[Y_u32], 1, 1f                # zero divisor check                        \n\
                       extr    %L0,%[X_s32],31,1              # look for the sign                         \n\
                       movh    %H0, 0x8000                    # prepare limitation                        \n\
                       caddn   %L0, %L0, %H0, -1              # MFX_MAXSINT32/MFX_MINSINT32               \n\
                       j       3f                             # jump to the end                           \n\
                    1:                                                                                    \n\
                       abs    %[tmp_u32],%[X_s32]             # take absolute value of x                  \n\
                       dvinit.hu %A0, %[tmp_u32], %[Y_u32]    # initialisation                            \n\
                       dvstep.u %A0, %A0, %[Y_u32]            # division step 1 (8 bits)                  \n\
                       dvstep.u %A0, %A0, %[Y_u32]            # division step 2 (16 bits)                 \n\
                       mov.u  %H0, 0x8000                     # MFX_MAXSINT16 +1                          \n\
                       jlt.u  %L0, %H0, 2f                    # jump, if result < MFX_MAXSINT16           \n\
                       mov    %L0, 0x7FFF                     # MFX_MAXSINT16                             \n\
                       extr   %H0,%[X_s32],31,1               # look for the sign                         \n\
                       jz     %H0, 3f                         # positive, jump to the end                 \n\
                       muls   %L0, %L0, -1                    # sign reconstitution                       \n\
                       addi   %L0, %L0, -1                    # MFX_MINSINT16                             \n\
                       j       3f  \n\
                    2:                                                                                    \n\
                       extr   %H0,%[X_s32],31,1               # look for the sign                         \n\
                       jz     %H0, 3f                         # positive, jump to the end                 \n\
                       muls   %L0, %L0, -1                    # sign reconstitution                       \n\
                    3: sat.h   %L0                            # MFX_MINSINT16/ MFX_MAXSINT16              \n\
                     "
                     : [_temp_s64]"=&d"(temp_s64.s64), [tmp_u32] "=&d"(tmp_u32)
                     : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 9.1 VIOLATION: Variable temp_s64 is used within an asm-statement  */
    return ((sint16)temp_s64.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_S16_inline  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Div_U32U32_S16_inline(uint32 X_u32,uint32 Y_u32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Div_U32U32_S16_inline(uint32 X_u32,uint32 Y_u32)
{
    sint64u temp; /* used for the wide division */

    asm volatile("  jnz         %[Y_u32],1f                 # jump if Y_s32 is <> 0         \n\
                    mov.u       %L0, 0x7FFF                 # MAXSINT16                     \n\
                    j           2f                          # jump to the end               \n\
              1:                                                                            \n\
                    dvinit.u    %A0,%[X_u32],%[Y_u32]                                       \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    mov.u       %H0, 0x8000                 # MAXSINT16 +1                  \n\
                    jlt.u       %L0, %H0, 2f                # jump, if result < MAXSINT16   \n\
                    mov.u       %L0, 0x7FFF                 # limit: MAXSINT16              \n\
              2:                                                                            \n\
                    ": "=&d"(temp.s64)
                   : [X_u32] "d"(X_u32), [Y_u32] "d"(Y_u32) );

           /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16) temp.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_U16  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Div_S32S32_U16_inline(sint32 X_s32,sint32 Y_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Div_S32S32_U16_inline(sint32 X_s32,sint32 Y_s32)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_U16(MoFSrv_Lib_SrvB_Div_S32S32_S32_inline(X_s32, Y_s32));
}




/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_U16_inline  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Div_U32S32_U16_inline(uint32 X_u32,sint32 Y_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Div_U32S32_U16_inline(uint32 X_u32,sint32 Y_s32)
{
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Ux = U32 / S32)                        */
    /* temporary variable used                                                        */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                    mov    %L0, 0                     # load 0 into the result                                  \n\
                    jnz.t  %[Y_s32], 31, 1f           # keep this result if y_s32 is negative                   \n\
                                                      # perform the division first                              \n\
                    dvinit.hu %A0, %[X_u32], %[Y_s32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_s32]       # division step 1 (8 bits)                                \n\
                    dvstep.u %A0, %A0, %[Y_s32]       # division step 2 (16 bits)                               \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, 1f                  # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 65535                  # load 0                                                  \n\
                 1 :                                  # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint16)temp_u64.u64s.l;
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_U16_inline  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Div_S32U32_U16_inline(sint32 X_s32,uint32 Y_u32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Div_S32U32_U16_inline(sint32 X_s32,uint32 Y_u32)
{
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Uz = S32 / U32)                        */
    /* temporary variable used                                                        */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                    mov    %L0, 0                     # load 0 into the result                                  \n\
                    jnz.t  %[X_s32], 31, 1f           # keep this result if x_s32 is negative                   \n\
                                                      # perform the division first                              \n\
                    dvinit.hu %A0, %[X_s32], %[Y_u32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 1 (8 bits)                                \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 2 (16 bits)                               \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, 1f                  # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 65535                  # load 0                                                  \n\
                 1 :                                  # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint16)temp_u64.u64s.l;
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_U16  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Div_U32U32_U16_inline(uint32 X_u32,uint32 Y_u32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Div_U32U32_U16_inline(uint32 X_u32,uint32 Y_u32)
{
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
                    jz.t %H0, 30, 1f                  # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 65535                  # load 0                                                  \n\
                 1 :                                  # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint16)temp_u64.u64s.l;
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
 * SrvB_Div_S32S32_S8  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Div_S32S32_S8_inline(sint32 X_s32,sint32 Y_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Div_S32S32_S8_inline(sint32 X_s32,sint32 Y_s32)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_S8(MoFSrv_Lib_SrvB_Div_S32S32_S32_inline(X_s32, Y_s32));
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_S8  copied from SWHDR : srvb_div_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Div_U32S32_S8_inline(uint32 X_u32,sint32 Y_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Div_U32S32_S8_inline(uint32 X_u32,sint32 Y_s32)
{
    sint64u temp; /* used for the wide division */
    uint32  tmp_u32;

    asm volatile("  jnz         %[Y_s32],1f                 # jump if Y_s32 is <> 0            \n\
                    mov         %L0, 0x007F                 # MAXSINT8                         \n\
                    j           3f                          # jump to the end                  \n\
              1:                                                                               \n\
                    abs         %[tmp_u32], %[Y_s32]        # absolut value, incl. |MINSINT32| \n\
                    dvinit.u    %A0,%[X_u32],%[tmp_u32]                                        \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    dvstep.u    %A0,%A0,%[tmp_u32]                                             \n\
                    mov.u       %H0, 0x0080                 # MAXSINT8 +1                      \n\
                    jlt.u       %L0, %H0, 2f                # jump, if result <= MAXSINT8      \n\
                    mov         %L0, 0x007F                 # MAXSINT8                         \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, 3f                     # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
                    addi        %L0, %L0, -1                # MINSINT8                         \n\
              2:                                                                               \n\
                    extr        %H0,%[Y_s32],31,1           # look for the sign                \n\
                    jz          %H0, 3f                     # positive, jump to the end        \n\
                    muls        %L0, %L0, -1                # sign reconstitution              \n\
              3:                                                                               \n\
                    "
                    : "=&d"(temp.s64), [tmp_u32] "=&d"(tmp_u32)
                    : [X_u32] "d"(X_u32), [Y_s32] "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint8) temp.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_S8  copied from SWHDR : srvb_div_inl / 1.16.1; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Div_S32U32_S8_inline(sint32 X_s32,uint32 Y_u32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Div_S32U32_S8_inline(sint32 X_s32,uint32 Y_u32)
{
       /* MISRA RULE 18.4 VIOLATION: Union is used for return value handling. This will avoid that the compiler
       adds an extra "mov" command for the return value from the assembler code. */

        sint64u temp_s64;
	uint32  tmp_u32;

    asm volatile("        jge.u   %[Y_u32], 1, 1f              # zero divisor check                    \n\
                          extr    %L0,%[X_s32],31,1            # look for the sign                     \n\
                          movh    %H0, 0x8000                  # prepare limitation                    \n\
                          caddn   %L0, %L0, %H0, -1            # MFX_MAXSINT32/MFX_MINSINT32           \n\
                          j       3f                           # jump to the end                       \n\
                       1:                                                                              \n\
                          abs    %[tmp_u32],%[X_s32]           # take absolute value of x              \n\
                          dvinit.u %A0, %[tmp_u32], %[Y_u32]   # initialisation                        \n\
                          dvstep.u %A0, %A0, %[Y_u32]          # division step 1 (8 bits)              \n\
                          dvstep.u %A0, %A0, %[Y_u32]          # division step 2 (16 bits)             \n\
                          dvstep.u %A0, %A0, %[Y_u32]          # division step 3 (24 bits)             \n\
                          dvstep.u %A0, %A0, %[Y_u32]          # division step 4 (32 bits)             \n\
                          mov.u  %H0, 0x8000                   # MFX_MAXSINT16 +1                      \n\
                          jlt.u  %L0, %H0, 2f                  # jump, if result < MFX_MAXSINT16       \n\
                          mov    %L0, 0x7FFF                   # MFX_MAXSINT16                         \n\
                          extr   %H0,%[X_s32],31,1             # look for the sign                     \n\
                          jz     %H0, 3f                       # positive, jump to the end             \n\
                          muls   %L0, %L0, -1                  # sign reconstitution                   \n\
                          addi   %L0, %L0, -1                  # MFX_MINSINT16                         \n\
                          j       3f                                                                   \n\
                       2:                                                                              \n\
                          extr   %H0,%[X_s32],31,1             # look for the sign                     \n\
                          jz     %H0, 3f                       # positive, jump to the end             \n\
                          muls   %L0, %L0, -1                  # sign reconstitution                   \n\
                       3: sat.b   %L0                          # MFX_MINSINT16/ MFX_MAXSINT16          \n\
                        "
                        : [_temp_s64]"=&d"(temp_s64.s64), [tmp_u32] "=&d"(tmp_u32)
                        : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 9.1 VIOLATION: Variable temp_s64 is used within an asm-statement  */

    return ((sint8)temp_s64.s64s.l);

}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_S8  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Div_U32U32_S8_inline(uint32 X_u32,uint32 Y_u32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Div_U32U32_S8_inline(uint32 X_u32,uint32 Y_u32)
{
    sint64u temp; /* used for the wide division */

    asm volatile("  jnz         %[Y_u32],1f                 # jump if Y_s32 is <> 0         \n\
                    mov.u       %L0, 0x7F                   # MAXSINT8                      \n\
                    j           2f                          # jump to the end               \n\
              1:                                                                            \n\
                    dvinit.u    %A0,%[X_u32],%[Y_u32]                                       \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    dvstep.u    %A0,%A0,%[Y_u32]                                            \n\
                    mov.u       %H0, 0x0080                 # MAXSINT8 +1                   \n\
                    jlt.u       %L0, %H0, 2f                # jump, if result < MAXSINT16   \n\
                    mov.u       %L0, 0x7F                   # limit: MAXSINT8               \n\
              2:                                                                            \n\
                    ": "=&d"(temp.s64)
                   : [X_u32] "d"(X_u32), [Y_u32] "d"(Y_u32) );

           /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint8) temp.s64s.l);
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32S32_U8  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Div_S32S32_U8_inline(sint32 X_s32,sint32 Y_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Div_S32S32_U8_inline(sint32 X_s32,sint32 Y_s32)
{
    return MoFSrv_Lib_SrvB_TypeLimiter_S32_U8(MoFSrv_Lib_SrvB_Div_S32S32_S32_inline(X_s32, Y_s32));
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32S32_U8  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Div_U32S32_U8_inline(uint32 X_u32,sint32 Y_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Div_U32S32_U8_inline(uint32 X_u32,sint32 Y_s32)
{
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Ux = U32 / S32)                        */
    /* temporary variable used                                                        */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                    mov    %L0, 0                     # load 0 into the result                                  \n\
                    jnz.t  %[Y_s32], 31, 1f           # keep this result if y_s32 is negative                   \n\
                                                      # perform the division first                              \n\
                    dvinit.bu %A0, %[X_u32], %[Y_s32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_s32]       # division step 1 (8 bits)                                \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, 1f                  # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 255                    # load 0                                                  \n\
                 1 :                                  # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint8)temp_u64.u64s.l;
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_S32U32_U8  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Div_S32U32_U8_inline(sint32 X_s32,uint32 Y_u32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Div_S32U32_U8_inline(sint32 X_s32,uint32 Y_u32)
{
    uint64u temp_u64;

    /* Note: This Assembler Code is generated (Uz = S32 / U32)                        */
    /* temporary variable used                                                        */
    /* MISRA RULE 5 VIOLATION: $ is used within an asm-macro. MISRA cannot check this */
    asm volatile(" \n\
                    mov    %L0, 0                     # load 0 into the result                                  \n\
                    jnz.t  %[X_s32], 31, 1f           # keep this result if x_s32 is negative                   \n\
                                                      # perform the division first                              \n\
                    dvinit.bu %A0, %[X_s32], %[Y_u32] # initialisation                                          \n\
                    dvstep.u %A0, %A0, %[Y_u32]       # division step 1 (8 bits)                                \n\
                                                      # read psw register                                       \n\
                    mfcr %H0, $psw                    # use the upper part of the result, this saves a register \n\
                    jz.t %H0, 30, 1f                  # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 255                    # load 0                                                  \n\
                 1 :                                  # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint8)temp_u64.u64s.l;
}


/**
 ***********************************************************************************************************************
 * SrvB_Div_U32U32_U8_inline  copied from SWHDR : srvb_div_inl / 1.14.3; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Div_U32U32_U8_inline(uint32 X_u32,uint32 Y_u32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Div_U32U32_U8_inline(uint32 X_u32,uint32 Y_u32)
{
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
                    jz.t %H0, 30, 1f                  # if no overflow, jump to the end                         \n\
                                                      # overflow, discard the result                            \n\
                    mov.u %L0, 255                    # load 0                                                  \n\
                 1 :                                  # end label                                               \n\
                  "
                  : [_temp_u64]"=&d"(temp_u64.u64)
                  : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );
    /* return the lower part of the temp variable. This saves a register */

    /* MISRA RULE 30 VIOLATION: Variable temp_u64 is used within an asm-macro. MISRA cannot check this.  */
    return (uint8)temp_u64.u64s.l;
}


#endif /* _MOFSRV_LIB_SRVB_DIV_H */
