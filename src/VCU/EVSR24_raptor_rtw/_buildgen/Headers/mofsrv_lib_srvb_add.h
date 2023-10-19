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
 * $Filename__:mofsrv_lib_srvb_add.h$
 *
 * $Author____:GWR2SI$
 *
 * $Function__:add services for Ascet$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GWR2SI$
 * $Date______:14.08.2011$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib_srvb_add$
 * $Variant___:18.0.0$
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


#ifndef _MOFSRV_LIB_SRVB_ADD_H
#define _MOFSRV_LIB_SRVB_ADD_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif

#define	MoFSrv_Lib_SrvB_Add_S32S32_S16	MoFSrv_Lib_SrvB_Add_S32S32_S16_inline
#define	MoFSrv_Lib_SrvB_Add_S32S32_S32	MoFSrv_Lib_SrvB_Add_S32S32_S32_inline
#define	MoFSrv_Lib_SrvB_Add_S32S32_S8	MoFSrv_Lib_SrvB_Add_S32S32_S8_inline
#define	MoFSrv_Lib_SrvB_Add_S32S32_U16	MoFSrv_Lib_SrvB_Add_S32S32_U16_inline
#define	MoFSrv_Lib_SrvB_Add_S32S32_U32	MoFSrv_Lib_SrvB_Add_S32S32_U32_inline
#define	MoFSrv_Lib_SrvB_Add_S32S32_U8	MoFSrv_Lib_SrvB_Add_S32S32_U8_inline
#define	MoFSrv_Lib_SrvB_Add_U32S32_S16	MoFSrv_Lib_SrvB_Add_U32S32_S16_inline
#define	MoFSrv_Lib_SrvB_Add_U32S32_S32	MoFSrv_Lib_SrvB_Add_U32S32_S32_inline
#define	MoFSrv_Lib_SrvB_Add_U32S32_S8	MoFSrv_Lib_SrvB_Add_U32S32_S8_inline
#define	MoFSrv_Lib_SrvB_Add_U32S32_U16	MoFSrv_Lib_SrvB_Add_U32S32_U16_inline
#define	MoFSrv_Lib_SrvB_Add_U32S32_U32	MoFSrv_Lib_SrvB_Add_U32S32_U32_inline
#define	MoFSrv_Lib_SrvB_Add_U32S32_U8	MoFSrv_Lib_SrvB_Add_U32S32_U8_inline
#define	MoFSrv_Lib_SrvB_Add_U32U32_S16	MoFSrv_Lib_SrvB_Add_U32U32_S16_inline
#define	MoFSrv_Lib_SrvB_Add_U32U32_S32	MoFSrv_Lib_SrvB_Add_U32U32_S32_inline
#define	MoFSrv_Lib_SrvB_Add_U32U32_S8	MoFSrv_Lib_SrvB_Add_U32U32_S8_inline
#define	MoFSrv_Lib_SrvB_Add_U32U32_U16	MoFSrv_Lib_SrvB_Add_U32U32_U16_inline
#define	MoFSrv_Lib_SrvB_Add_U32U32_U32	MoFSrv_Lib_SrvB_Add_U32U32_U32_inline
#define	MoFSrv_Lib_SrvB_Add_U32U32_U8	MoFSrv_Lib_SrvB_Add_U32U32_U8_inline


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_S32_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Add_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Add_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32)
{
    sint32 res_s32;

    asm volatile(" adds %0, %1, %2    \n\
                 ":"=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                /*        0           1       2   */

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_S32_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Add_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Add_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32)
{
sint32 res_s32;
sint32 tmp_s32;

    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, 2f                   # if X_u32 <= MAXSINT32: jump to calculate the result \n\
                    jge  %3, 0, 1f                      # else, if Y_s32 is positive: MAXSINT32 \n\
                    add %0, %2, %3                      # else: calculate with unlimited unsigned addition \n\
                    jlt  %0, 0, 1f                      # if res_s32 > MAXSINT32: MAXSINT32 \n\
                    j 3f                                # jump to the end\n\
                1:                                      # limitation to MAXSINT32 \n\
                    addi  %0, %1, -1                    # res_s32 = (MAXSINT32 + 1) -1 \n\
                    j 3f                                # jump to the end\n\
                2:                                      # saturated sint addition \n\
                    adds %0, %2, %3                     # X_u32 + Y_s32 \n\
                3:                                      \n\
                    " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_S32_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Add_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Add_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32)
{
    sint32 res_s32;

    asm volatile(" adds.u   %[res_s32], %[X_u32], %[Y_u32]                                \n\
                   jz.t     %[res_s32], 31, 1f            # test if the upper bit is set  \n\
                                                             # it is set: overflow           \n\
                   mov      %[res_s32], -1                # load 0xFFFF FFFF              \n\
                   sh       %[res_s32], -1                # res contains 0x7FFF FFFF      \n\
                1:                                                                           \n\
                "
                 : [res_s32]"=d"(res_s32)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_U32_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Add_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Add_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32)
{
    uint32 res_u32;
    uint32 test;


    asm volatile(" or       %[test] , %[X_s32], %[Y_s32]           # used for the test                 \n\
                   add      %[res_u32]  , %[X_s32], %[Y_s32]    # addition of positive values,      \n\
                                                                   # no overflow possible              \n\
                   jz.t     %[test] , 31 , 1f                      # exit if no parameter is negative  \n\
                                                                   # else discard the result           \n\
                   adds     %[res_u32]  , %[X_s32], %[Y_s32]    # saturated signed addition         \n\
                   max      %[res_u32]  , %[res_u32]  , 0    # keep positive part                \n\
                1:                                                                                     \n\
                 "
                 : [res_u32]"=&d"(res_u32), [test]"=&d"(test)
                 : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return res_u32;
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_U32_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Add_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Add_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32)
{
    uint32 res_u32;


    asm volatile("  jge  %2, 0, 1f                      # if Y_s32 is positive: limited Addition \n\
                    add %0, %1, %2                      # unlimited unsigned addition\n\
                    jlt.u  %0, %1, 2f                   # Y < 0 and |y| > x, res_u32 > X_u32, limit \n\
                    mov  %0, 0x0000                     # else: limitation to res_s32 = 0 \n\
                    j 2f                                # jump to the end\n\
                1:                                      # saturated unsint addition \n\
                    adds.u %0, %1, %2                   # X_u32 + Y_s32 \n\
                2:                                       \n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );


    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_U32_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Add_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Add_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32)
{
    uint32 res_u32;

    asm volatile(" adds.u   %[res_u32], %[X_u32], %[Y_u32]                          \n\
                 "
                 : [res_u32]"=d"(res_u32)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_S16_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Add_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Add_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32)
{
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
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_S16_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Add_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Add_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32)
{
sint32 res_s32;
sint32 tmp_s32;

    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, 2f                   # if X_u32 <= MAXSINT32: jump to calculate the result \n\
                    jge  %3, 0, 1f                      # else, if Y_s32 is positive: MAXSINT16 \n\
                    add %0, %2, %3                      # else: calculate with unlimited unsigned addition \n\
                    jlt  %0, 0, 1f                      # if res_s32 > MAXSINT32: MAXSINT16 \n\
                    j 3f                                # jump to the end\n\
                1:                                      # limitation to MAXSINT16 \n\
                    mov  %0, 0x7FFF                     # res_s32 = MAXSINT16 \n\
                    j 3f                                # jump to the end\n\
                2:                                      # saturated sint addition \n\
                    adds %0, %2, %3                     # X_u32 + Y_s32 \n\
                3:                                      \n\
                    sat.h %0                            # limit to sint16 \n\
                        " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint16) res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_S16_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Add_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Add_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32)
{
    sint16 res_s16;

    asm volatile(" adds.u   %[res_s16], %[X_u32], %[Y_u32]                        \n\
                   sat.hu   %[res_s16]                      # limit to 65535      \n\
                   sat.h    %[res_s16]                      # limit to 32767      \n\
                 "
                 : [res_s16]"=d"(res_s16)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s16);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_U16_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Add_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Add_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32)
{
    uint16 res_u16;

    asm volatile(" adds     %[res_u16], %[X_s32], %[Y_s32]           \n\
                   max      %[res_u16], %[res_u16]  , 0           \n\
                   sat.hu   %[res_u16]                               \n\
                 "
                 : [res_u16]"=d"(res_u16)
                 : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u16);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_U16_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Add_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Add_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32)
{
    uint32 res_u32;


    asm volatile("  jge  %2, 0, 1f                      # if Y_s32 is positive: limited Addition \n\
                    add %0, %1, %2                      # unlimited unsigned addition\n\
                    jlt.u  %0, %1, 2f                   # Y < 0 and |y| > x, res_u32 > X_u32, limit \n\
                    mov  %0, 0x0000                     # else: limitation to res_s32 = 0 \n\
                    j 2f                                # jump to the end\n\
                1:                                      # saturated unsint addition \n\
                    adds.u %0, %1, %2                   # X_u32 + Y_s32 \n\
                2:                                      # limitation required \n\
                    sat.hu %0                           # limit to 16 bit uint variable\n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );


    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint16) res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_U16_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Add_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Add_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32)
{
    uint16 res_u16;

    asm volatile(" adds.u   %[res_u16], %[X_u32], %[Y_u32]    \n\
                   sat.hu   %[res_u16]                        \n\
                 "
                 : [res_u16]"=d"(res_u16)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u16);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_S8_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Add_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Add_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32)
{
    sint8 res_s8;

    asm volatile(" adds     %[res_s8], %[X_s32], %[Y_s32]    \n\
                   sat.b    %[res_s8]                        \n\
                 "
                 : [res_s8]"=d"(res_s8)
                 : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s8);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_S8_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Add_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Add_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32)
{
sint32 res_s32;
sint32 tmp_s32;


    asm volatile("  movh  %1, 0x8000                    # set res_s32 to MAXSINT32 +1\n\
                    jlt.u  %2, %1, 2f                   # if X_u32 <= MAXSINT32: jump to calculate the result \n\
                    jge  %3, 0, 1f                      # else, if Y_s32 is positive: MAXSINT8 \n\
                    add %0, %2, %3                      # else: calculate with unlimited unsigned addition \n\
                    jlt  %0, 0, 1f                      # if res_s32 > MAXSINT32: MAXSINT8 \n\
                    j 3f                                # jump to the end\n\
                1:                                      # limitation to MAXSINT8 \n\
                    mov  %0, 0x007F                     # res_s32 = MAXSINT8 \n\
                    j 3f                                # jump to the end\n\
                2:                                      # saturated sint addition \n\
                    adds %0, %2, %3                     # X_u32 + Y_s32 \n\
                3:                                      \n\
                    sat.b %0                            # limit to sint8 \n\
                    " : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint8) res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_S8_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Add_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Add_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32)
{
    sint8 res_s8;

    asm volatile(" adds.u   %[res_s8], %[X_u32], %[Y_u32]                       \n\
                   min.u    %[res_s8], %[res_s8], 127         #limit to 127  \n\
                 "
                 : [res_s8]"=d"(res_s8)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s8);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_S32S32_U8_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Add_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Add_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32)
{
    uint8 res_u8;

    asm volatile(" adds     %[res_u8], %[X_s32], %[Y_s32]          \n\
                   max      %[res_u8], %[res_u8]  , 0           \n\
                   sat.bu   %[res_u8]                              \n\
                 "
                 : [res_u8]"=d"(res_u8)
                 : [X_s32]"%d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u8);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32S32_U8_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Add_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Add_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32)
{
    uint32 res_u32;

    asm volatile("  jge  %2, 0, 1f                      # if Y_s32 is positive: limited Addition \n\
                    add %0, %1, %2                      # unlimited unsigned addition\n\
                    jlt.u  %0, %1, 2f                   # Y < 0 and |y| > x, res_u32 > X_u32, limit \n\
                    mov  %0, 0x0000                     # else: limitation to res_s32 = 0 \n\
                    j 2f                                # jump to the end\n\
                1:                                      # saturated unsint addition \n\
                    adds.u %0, %1, %2                   # X_u32 + Y_s32 \n\
                2:                                      # limitation required \n\
                    sat.bu %0                           # limit to a 8 bit uint variable\n\
                    " : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint8) res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Add_U32U32_U8_inline  copied from SWHDR : srvb_add_inl / 1.11.0; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Add_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Add_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32)
{
    uint8 res_u8;

    asm volatile(" adds.u   %[res_u8], %[X_u32], %[Y_u32]    \n\
                   sat.bu   %[res_u8]                        \n\
                 "
                 : [res_u8]"=d"(res_u8)
                 : [X_u32]"%d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u8);
}


#endif /* _MOFSRV_LIB_SRVB_ADD_H */
