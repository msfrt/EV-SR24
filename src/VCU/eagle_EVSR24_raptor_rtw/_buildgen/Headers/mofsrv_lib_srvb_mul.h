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
 * $Filename__:mofsrv_lib_srvb_mul.h$
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
 * $Name______:mofsrv_lib_srvb_mul$
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


#ifndef _MOFSRV_LIB_SRVB_MUL_H
#define _MOFSRV_LIB_SRVB_MUL_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif

#define	MoFSrv_Lib_SrvB_Mul_S32S32_S16	MoFSrv_Lib_SrvB_Mul_S32S32_S16_inline
#define	MoFSrv_Lib_SrvB_Mul_S32S32_S32	MoFSrv_Lib_SrvB_Mul_S32S32_S32_inline
#define	MoFSrv_Lib_SrvB_Mul_S32S32_S8	MoFSrv_Lib_SrvB_Mul_S32S32_S8_inline
#define	MoFSrv_Lib_SrvB_Mul_S32S32_U16	MoFSrv_Lib_SrvB_Mul_S32S32_U16_inline
#define	MoFSrv_Lib_SrvB_Mul_S32S32_U32	MoFSrv_Lib_SrvB_Mul_S32S32_U32_inline
#define	MoFSrv_Lib_SrvB_Mul_S32S32_U8	MoFSrv_Lib_SrvB_Mul_S32S32_U8_inline
#define	MoFSrv_Lib_SrvB_Mul_U32S32_S16	MoFSrv_Lib_SrvB_Mul_U32S32_S16_inline
#define	MoFSrv_Lib_SrvB_Mul_U32S32_S32	MoFSrv_Lib_SrvB_Mul_U32S32_S32_inline
#define	MoFSrv_Lib_SrvB_Mul_U32S32_S8	MoFSrv_Lib_SrvB_Mul_U32S32_S8_inline
#define	MoFSrv_Lib_SrvB_Mul_U32S32_U16	MoFSrv_Lib_SrvB_Mul_U32S32_U16_inline
#define	MoFSrv_Lib_SrvB_Mul_U32S32_U32	MoFSrv_Lib_SrvB_Mul_U32S32_U32_inline
#define	MoFSrv_Lib_SrvB_Mul_U32S32_U8	MoFSrv_Lib_SrvB_Mul_U32S32_U8_inline
#define	MoFSrv_Lib_SrvB_Mul_U32U32_S16	MoFSrv_Lib_SrvB_Mul_U32U32_S16_inline
#define	MoFSrv_Lib_SrvB_Mul_U32U32_S32	MoFSrv_Lib_SrvB_Mul_U32U32_S32_inline
#define	MoFSrv_Lib_SrvB_Mul_U32U32_S8	MoFSrv_Lib_SrvB_Mul_U32U32_S8_inline
#define	MoFSrv_Lib_SrvB_Mul_U32U32_U16	MoFSrv_Lib_SrvB_Mul_U32U32_U16_inline
#define	MoFSrv_Lib_SrvB_Mul_U32U32_U32	MoFSrv_Lib_SrvB_Mul_U32U32_U32_inline
#define	MoFSrv_Lib_SrvB_Mul_U32U32_U8	MoFSrv_Lib_SrvB_Mul_U32U32_U8_inline


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_U8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Mul_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Mul_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32)
{
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
}

/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_U8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Mul_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Mul_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32)
{
   uint32 res_u32;

   
   asm volatile(" jge       %[Y_s32], 0, 1f                     # jump if x_s32 is positive         \n\
				  mov       %[res_u32], 0                       # LIMIT: res_u32 = 0                \n\
				  j          2f                                 # jump to the end                   \n\
              1:                                                                                    \n\
				  muls.u    %[res_u32], %[X_u32],%[Y_s32]       # saturated multiplication          \n\
				  sat.bu    %[res_u32], %[res_u32]				# LIMIt: MAXUINT8                   \n\
			  2:                                                # end                               \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint8) res_u32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_U8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Mul_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Mul_U32U32_U8_inline(uint32 X_u32, uint32 Y_u32)
{
    uint32 res_u32;


    asm volatile(" muls.u   %[res_u32], %[X_u32], %[Y_u32]    # saturated signed multiplication \n\
                   sat.bu   %[res_u32]                        # limit to +255 (unsigned byte)   \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint8) res_u32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_S8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Mul_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Mul_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32)
{
    sint32 res_s32;


    asm volatile("    muls      %0, %1, %2                                       \n\
                      sat.b     %0, %0                                           \n\
                 "    :"=&d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                      
    /* MISRA RULE 30 VIOLATION: Result is written in the asm statement */
    return ((sint8)res_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_S8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Mul_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Mul_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32)
{
    sint32 res_s32;
    uint32 tmp_u32;

    asm volatile("abs      %[tmp_u32], %[Y_s32]                # absolut value                      \n\
                  muls.u   %[res_s32], %[X_u32], %[tmp_u32]    # saturated unsigned multiplication  \n\
                  movh     %[tmp_u32],  0x8000                 # prepare MAXSINT32 +1   MINSINT32   \n\
                  jge      %[Y_s32], 0, 2f                     # jump if y >= 0                     \n\
                  jge.u    %[res_s32], %[tmp_u32],1f           # jump if |y| >= MAXSINT32 +1        \n\
                  muls     %[res_s32], %[res_s32], -1          # saturated multiplication           \n\
                  j         3f                                 # jump to the end                    \n\
               1:                                                                                   \n\
                  mov      %[res_s32], %[tmp_u32]              # LIMIT = MINSINT32                  \n\
                  j         3f                                 # jump to the end                    \n\
               2:                                                                                   \n\
                  addi 	   %[tmp_u32], %[tmp_u32],  -1         # MAXSINT32                          \n\
                  min.u    %[res_s32], %[res_s32], %[tmp_u32]  # LIMIT = MAXSINT32                  \n\
               3:                                                                                   \n\
                  sat.b	   %[res_s32], %[res_s32]	       # LIMIT = MAXSINT8 / MINSINT8        \n\
			   "
                 : [res_s32]"=&d"(res_s32), [tmp_u32]"=&d"(tmp_u32)
                 : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint8)res_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_S8  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Mul_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Mul_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32)
{
    sint32 res_s32;

    asm volatile(" muls.u   %[res_s32], %[X_u32], %[Y_u32]      # saturated signed multiplication \n\
                   sat.bu   %[res_s32]                          # limit to +255 (unsigned byte)   \n\
                   sat.b    %[res_s32]                          # limited to a signed byte        \n\
                 "
                 : [res_s32]"=&d"(res_s32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint8) res_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_U16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Mul_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Mul_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32)
{
    sint32 res_s32;


    asm volatile("    muls      %0, %1, %2                                       \n\
                      max       %0, %0, 0                                        \n\
                      sat.hu    %0, %0                                           \n\
                 "    :"=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                      /*      0           1       2   */

    /* MISRA RULE 30 VIOLATION: Res_s32 is written in the asm statement */
    return ((uint16) res_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_U16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Mul_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Mul_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32)
{
   uint32 res_u32;

   
   asm volatile(" jge       %[Y_s32], 0, 1f                     # jump if x_s32 is positive         \n\
				  mov       %[res_u32], 0                       # LIMIT: res_u32 = 0                \n\
				  j          2f                                 # jump to the end                   \n\
              1:                                                                                    \n\
				  muls.u    %[res_u32], %[X_u32], %[Y_s32]      # saturated multiplication          \n\
				  sat.hu    %[res_u32], %[res_u32]				# LIMIt: MAXUINT16                  \n\
			  2:                                                # end                               \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((uint16) res_u32);
}

/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_U16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Mul_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Mul_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32)
{
    uint32 res_u32;

	
    asm volatile(" muls.u   %[res_u32], %[X_u32], %[Y_u32]     # saturated signed multiplication \n\
                   sat.hu   %[res_u32]                          # limit to unsigned half word     \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint16) res_u32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_S16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Mul_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Mul_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32)
{
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
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_S16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Mul_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Mul_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32)
{
   sint32 res_s32;
   uint32 tmp_u32;

   asm volatile(" abs      %[tmp_u32], %[Y_s32]                # absolut value                      \n\
                  muls.u   %[res_s32], %[X_u32], %[tmp_u32]    # saturated unsigned multiplication  \n\
                  movh     %[tmp_u32],  0x8000                 # prepare MAXSINT32 +1   MINSINT32   \n\
				  jge      %[Y_s32], 0, 2f                     # jump if y >= 0                     \n\
                  jge.u    %[res_s32], %[tmp_u32],1f           # jump if |y| >= MAXSINT32 +1        \n\
				  muls     %[res_s32], %[res_s32], -1          # saturated multiplication           \n\
			      j         3f                                 # jump to the end                    \n\
			   1:                                                                                   \n\
                  mov      %[res_s32], %[tmp_u32]              # LIMIT = MINSINT32                  \n\
  				  j         3f                                 # jump to the end                    \n\
			   2: 	                                                                                \n\
                  addi 	   %[tmp_u32], %[tmp_u32],  -1         # MAXSINT32                          \n\
                  min.u    %[res_s32], %[res_s32], %[tmp_u32]  # LIMIT = MAXSINT32                  \n\
			   3: 	                                                                                \n\
                  sat.h	   %[res_s32], %[res_s32]		       # LIMIT = MAXSINT16 / MINSINT16      \n\
			   "
                 : [res_s32]"=&d"(res_s32), [tmp_u32]"=&d"(tmp_u32)
                 : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return ((sint16)res_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_S16  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Mul_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Mul_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32)
{
    sint32 res_s32;

    asm volatile(" muls.u   %[res_s32], %[X_u32], %[Y_u32]      # saturated unsigned multiplication \n\
                   sat.hu   %[res_s32]                          # limited to positive half word     \n\
                   sat.h    %[res_s32]                          # limited to a signed half word     \n\
                 "
                 : [res_s32]"=&d"(res_s32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint16) res_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_U32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Mul_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Mul_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32)
{
   uint32 res_u32;
   uint32 tmp_u32;
   
   asm volatile(" xnor.t    %[res_u32], %[X_s32], 31, %[Y_s32], 31    # sigen comparison, equal signs: 1            \n\
                  jz        %[res_u32],  1f                           # unequal sigen, res_s32 = 0, jump to the end \n\
				  abs 	    %[tmp_u32], %[X_s32]                      # absolut value                               \n\
				  abs       %[res_u32], %[Y_s32]                      # absolut value                               \n\
				  muls.u    %[res_u32], %[res_u32], %[tmp_u32]        # saturated multiplication                    \n\
			  1:                                                      # end                                         \n\
                 "
                 : [res_u32]"=&d"(res_u32), [tmp_u32]"=&d"(tmp_u32)
                 : [X_s32]"d"(X_s32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return (res_u32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_U32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Mul_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Mul_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32)
{
   uint32 res_u32;

   
   asm volatile(" jge       %[Y_s32], 0, 1f                     # jump if x_s32 is positive         \n\
				  mov       %[res_u32], 0                       # LIMIT: res_u32 = 0                \n\
				  j          2f                                 # jump to the end                   \n\
              1:                                                                                    \n\
				  muls.u    %[res_u32], %[X_u32], %[Y_s32]      # saturated multiplication          \n\
			  2:                                                # end                               \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return (res_u32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32U32_U32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Mul_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Mul_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32)
{
    uint32 res_u32;


    asm volatile(" muls.u   %[res_u32], %[X_u32], %[Y_u32]    # saturated signed multiplication \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_S32S32_S32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Mul_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Mul_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32)
{
    sint32 res_s32;


    asm volatile(" muls %0, %1, %2"
                      : "=&d" (res_s32) : "d"(X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_s32);
}


/**
 ***********************************************************************************************************************
 * SrvB_Mul_U32S32_S32  copied from SWHDR : srvb_mul_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Mul_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Mul_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32)
{
   sint32 res_s32;
   uint32 tmp_u32;

   
   asm volatile(" abs      %[tmp_u32], %[Y_s32]                # absolut value                      \n\
                  muls.u   %[res_s32], %[X_u32], %[tmp_u32]    # saturated unsigned multiplication  \n\
                  movh     %[tmp_u32],  0x8000                 # prepare MAXSINT32 +1   MINSINT32   \n\
				  jge      %[Y_s32], 0, 2f                     # jump if y >= 0                     \n\
                  jge.u    %[res_s32], %[tmp_u32], 1f          # jump if |y| >= MAXSINT32 +1        \n\
				  muls     %[res_s32], %[res_s32], -1          # saturated multiplication           \n\
			      j         3f                                 # jump to the end                    \n\
			   1:                                                                                   \n\
                  mov      %[res_s32], %[tmp_u32]              # LIMIT = MINSINT32                  \n\
  				  j         3f                                 # jump to the end                    \n\
			   2: 	                                                                                \n\
                  addi 	   %[tmp_u32], %[tmp_u32],  -1         # MAXSINT32                          \n\
                  min.u    %[res_s32], %[res_s32], %[tmp_u32]  # LIMIT = MAXSINT32                  \n\
			   3: 	                                                                                \n\
			   "
                 : [res_s32]"=&d"(res_s32), [tmp_u32]"=&d"(tmp_u32)
                 : [X_u32]"d"(X_u32), [Y_s32]"d"(Y_s32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return (res_s32);
}


/**
 ***********************************************************************************************************************
 * copied from SWHDR : srvb_mul_inl / 1.14.4; 0
 * \brief Multiplies two uint32 variables and limits the result to a sint32 variable
 * 
 * \param    uint32 X_u32
 * \param    uint32 Y_u32
 * \return   sint32
 * \retval   (X_u32 * Y_u32) saturated to sint32
 *
 ***********************************************************************************************************************
 */
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Mul_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Mul_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32)
{
   sint32 res_s32;
   sint32 tmp_s32;

   asm volatile(" muls.u   %[res_s32], %[X_u32], %[Y_u32]      # saturated unsigned multiplication       \n\
                  movh     %[tmp_s32],  0x8000                 # prepare MAXSINT32                       \n\
				  jlt.u    %[res_s32], %[tmp_s32], 1f          # res_s32 < MAXSINT32 +1, jump to the end \n\
				  mov      %[res_s32], %[tmp_s32]              #                                         \n\
				  addi 	   %[res_s32], %[tmp_s32],  -1         # MAXSINT32                               \n\
               1:                                              # end                                     \n\
				"
                 : [res_s32]"=&d"(res_s32), [tmp_s32]"=&d"(tmp_s32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
   return (res_s32);
}


#endif /* _MOFSRV_LIB_SRVB_MUL_H */
