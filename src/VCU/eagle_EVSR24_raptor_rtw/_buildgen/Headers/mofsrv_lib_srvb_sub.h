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
 * $Filename__:mofsrv_lib_srvb_sub.h$
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
 * $Name______:mofsrv_lib_srvb_sub$
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


#ifndef _MOFSRV_LIB_SRVB_SUB_H
#define _MOFSRV_LIB_SRVB_SUB_H

#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif

#define	MoFSrv_Lib_SrvB_Sub_S32S32_S16	MoFSrv_Lib_SrvB_Sub_S32S32_S16_inline
#define	MoFSrv_Lib_SrvB_Sub_S32S32_S32	MoFSrv_Lib_SrvB_Sub_S32S32_S32_inline
#define	MoFSrv_Lib_SrvB_Sub_S32S32_S8	MoFSrv_Lib_SrvB_Sub_S32S32_S8_inline
#define	MoFSrv_Lib_SrvB_Sub_S32S32_U16	MoFSrv_Lib_SrvB_Sub_S32S32_U16_inline
#define	MoFSrv_Lib_SrvB_Sub_S32S32_U32	MoFSrv_Lib_SrvB_Sub_S32S32_U32_inline
#define	MoFSrv_Lib_SrvB_Sub_S32S32_U8	MoFSrv_Lib_SrvB_Sub_S32S32_U8_inline
#define	MoFSrv_Lib_SrvB_Sub_S32U32_S16	MoFSrv_Lib_SrvB_Sub_S32U32_S16_inline
#define	MoFSrv_Lib_SrvB_Sub_S32U32_S32	MoFSrv_Lib_SrvB_Sub_S32U32_S32_inline
#define	MoFSrv_Lib_SrvB_Sub_S32U32_S8	MoFSrv_Lib_SrvB_Sub_S32U32_S8_inline
#define	MoFSrv_Lib_SrvB_Sub_S32U32_U16	MoFSrv_Lib_SrvB_Sub_S32U32_U16_inline
#define	MoFSrv_Lib_SrvB_Sub_S32U32_U32	MoFSrv_Lib_SrvB_Sub_S32U32_U32_inline
#define	MoFSrv_Lib_SrvB_Sub_S32U32_U8	MoFSrv_Lib_SrvB_Sub_S32U32_U8_inline
#define	MoFSrv_Lib_SrvB_Sub_U32S32_S16	MoFSrv_Lib_SrvB_Sub_U32S32_S16_inline
#define	MoFSrv_Lib_SrvB_Sub_U32S32_S32	MoFSrv_Lib_SrvB_Sub_U32S32_S32_inline
#define	MoFSrv_Lib_SrvB_Sub_U32S32_S8	MoFSrv_Lib_SrvB_Sub_U32S32_S8_inline
#define	MoFSrv_Lib_SrvB_Sub_U32S32_U16	MoFSrv_Lib_SrvB_Sub_U32S32_U16_inline
#define	MoFSrv_Lib_SrvB_Sub_U32S32_U32	MoFSrv_Lib_SrvB_Sub_U32S32_U32_inline
#define	MoFSrv_Lib_SrvB_Sub_U32S32_U8	MoFSrv_Lib_SrvB_Sub_U32S32_U8_inline
#define	MoFSrv_Lib_SrvB_Sub_U32U32_S16	MoFSrv_Lib_SrvB_Sub_U32U32_S16_inline
#define	MoFSrv_Lib_SrvB_Sub_U32U32_S32	MoFSrv_Lib_SrvB_Sub_U32U32_S32_inline
#define	MoFSrv_Lib_SrvB_Sub_U32U32_S8	MoFSrv_Lib_SrvB_Sub_U32U32_S8_inline
#define	MoFSrv_Lib_SrvB_Sub_U32U32_U16	MoFSrv_Lib_SrvB_Sub_U32U32_U16_inline
#define	MoFSrv_Lib_SrvB_Sub_U32U32_U32	MoFSrv_Lib_SrvB_Sub_U32U32_U32_inline
#define	MoFSrv_Lib_SrvB_Sub_U32U32_U8	MoFSrv_Lib_SrvB_Sub_U32U32_U8_inline


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_U8_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Sub_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Sub_S32S32_U8_inline(sint32 X_s32, sint32 Y_s32)
{
    /* the __SATBU instruction is a intrinsic define of the compiler
       It is available from hitec version 3.4.2.
       It is the equivalent for a sat.bu instruction but within control of the compiler.
    */

    sint32 res_s32;

    #ifdef __SATBU
    asm volatile(" subs     %0, %1, %2  \n\
                   max      %0, %0, 0   \n\
                 ": "=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                     
	/* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATBU(res_s32);
    
	#else
    asm volatile(" subs     %0, %1, %2  \n\
                   max      %0, %0, 0   \n\
                   sat.bu   %0, %0      \n\
                 ": "=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                 
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint8)res_s32);
    #endif
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_U8_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Sub_S32U32_U8_inline(sint32 X_s32,uint32 Y_u32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Sub_S32U32_U8_inline(sint32 X_s32,uint32 Y_u32)
{
    uint8 res_u8;

    asm volatile(" max      %[res_u8]  , %[X_s32], 0           # avoids negative value of x_s32 \n\
                   subs.u   %[res_u8]  , %[res_u8]  , %[Y_u32] # saturated substraction         \n\
                   sat.bu   %[res_u8]                          # saturate to an unsigned byte   \n\
                 "
                 : [res_u8]"=&d"(res_u8)
                 : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u8);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_U8_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Sub_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Sub_U32S32_U8_inline(uint32 X_u32, sint32 Y_s32)
{
    uint32 res_u32;

	asm volatile("  jge  %2, 0, 1f						# if Y_s32 >= 0: limited unsigned subtraction \n\
					sub %0, %1, %2						# else unlimited unsigned subtraction \n\
					jge.u  %0, %1, 2f					# Y_s32 < 0 and no overflow, res_u32 > X_u32 \n\
				    movh   %0, 0x0000                    # set res_s32 zero \n\
				    addi   %0, %0, -1                    # set res_S32, MINUINT32 \n\
					j 2f					         	# jump to the end\n\
				1:					     			    # saturated unsint addition \n\
					subs.u %0, %1, %2             		# X_u32 - Y_s32 \n\
				2:					                     \n\
					sat.bu %0                           # limit to uint8 \n\
					" : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );
					
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint8) res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_U8_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Sub_U32U32_U8_inline(uint32 X_u32,uint32 Y_u32);
LOCAL_INLINE uint8 MoFSrv_Lib_SrvB_Sub_U32U32_U8_inline(uint32 X_u32,uint32 Y_u32)
{
    uint8 res_u8;


    asm volatile(" subs.u   %[res_u8], %[X_u32], %[Y_u32]    \n\
                   sat.bu   %[res_u8]                        \n\
                 "
                 : [res_u8]"=d"(res_u8)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u8);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_S8_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Sub_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Sub_S32S32_S8_inline(sint32 X_s32, sint32 Y_s32)
{
    sint32 res_s32;


    asm volatile(" subs     %0, %1, %2  \n\
                   sat.b    %0, %0      \n\
                 ": "=d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                 /*       0            1        2   */

    /* MISRA RULE 30 VIOLATION: Res_s32 is written in the asm statement */
    return ((sint8)res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_S8_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Sub_S32U32_S8_inline(sint32 X_s32, uint32 Y_u32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Sub_S32U32_S8_inline(sint32 X_s32, uint32 Y_u32)
{
    sint32 res_s32;

	
	asm volatile("  movh   %0, 0x8000		# set res_s32 to MAXSINT32 +1 = MINSINT32\n\
					jlt.u  %2, %0, 1f		# if Y_u32 <= MAXSINT32: jump to calculate the result \n\
				    jlt    %1, -1,  2f		# else, if X_s32 < -1, MINSINT32, jump to the end \n\
					sub    %0, %1, %2		# else, else, unsigned subtraction \n\
					jlt    %0, %1,  2f		# else, else, if res_s32 < x_s32, jump to the end \n\
					movh  %0, 0x8000		# else, else, else, MINSINT32 \n\
					j 2f					# else, else, else, jump to the end \n\
				1:						    # saturated sint subtraction \n\
					subs %0, %1, %2         # X_u32 + Y_s32 \n\
				2:						 	\n\
					sat.b %0                # limitation to sint8 \n\
					" : "=&d" (res_s32) : "d"(X_s32), "d"(Y_u32) );

	/* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint8) res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_S8_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Sub_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Sub_U32S32_S8_inline(uint32 X_u32, sint32 Y_s32)
{
sint32 res_s32;
sint32 tmp_s32;

	asm volatile("  movh  %1, 0x8000					# set res_s32 to MAXSINT32 +1\n\
					jlt.u  %2, %1, 2f					# if X_u32 <= MAXSINT32: jump to calculate the result \n\
					jlt    %3,  0, 1f		  		    # else, if Y_s32 is negative: MAXSINT32 \n\
					sub    %0, %2, %3					# else: calculate with unlimited unsigned subtraction \n\
					jlt    %0, 0,  1f					# if res_s32 > MAXSINT32: MAXSINT32 \n\
					j 3f					         	# jump to the end\n\
				1:						             	# limitation to MAXSINT32 \n\
					addi  %0, %1, -1            		# res_s32 = (MAXSINT32 + 1) -1 \n\
					j 3f					         	# jump to the end\n\
				2:						         		# saturated sint subtraction \n\
					subs %0, %2, %3             		# X_u32 + Y_s32 \n\
				3:						 				\n\
					sat.b %0                            # saturation to sint8\n\
					" : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

	 /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint8)res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_S8_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Sub_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint8 MoFSrv_Lib_SrvB_Sub_U32U32_S8_inline(uint32 X_u32, uint32 Y_u32)
{
    sint32 res_s32;
	sint32 tmp_s32;


    asm volatile(" sub    %0, %2, %3           # unsaturated subtraction\n\
	               xor.t  %1, %2, 31, %3, 31   # unequal signs: TRUE, equal signs: FALSE \n\
				   jlt    %1, 1, 1f            # equal signs, jump to the end \n\
	               xor.t  %1, %0, 31, %3, 31   # unequal signs: TRUE: overflow \n\
				   jlt    %1, 1, 1f            # no overflow, jump to the end \n\
				   movh   %0, 0x8000           # limit, res_s32 = MINSINT32 \n\
				   jge    %2, 0, 1f 		   # x_s32 < 0, MIN, jump to the end \n\
				   addi   %0, %0, -1           # x_s32 >0, MAXSINT32 \n\
	             1:                            # end \n\
				   sat.b   %0                  # limit to a half word \n\
				 ": "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint8)res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_U16_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Sub_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Sub_S32S32_U16_inline(sint32 X_s32, sint32 Y_s32)
{
    sint32 res_s32;


    asm volatile(" subs     %0, %1, %2      \n\
                   max      %0, %0, 0       \n\
                   sat.hu   %0, %0          \n\
                 ":"=d" (res_s32) : "d"(X_s32), "d"(Y_s32));

    /* MISRA RULE 30 VIOLATION: Res_s32 is written in the asm statement */
    return ((uint16)res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_U16_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Sub_S32U32_U16_inline(sint32 X_s32, uint32 Y_u32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Sub_S32U32_U16_inline(sint32 X_s32, uint32 Y_u32)
{
    uint16 res_u32;

    asm volatile(" max      %[res_u32]  , %[X_s32], 0           # avoids negative value of x_s32    \n\
                   subs.u   %[res_u32]  , %[res_u32]  , %[Y_u32]    # saturated substraction            \n\
                   sat.hu   %[res_u32]                          # saturate to an uint16             \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return res_u32;
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_U16_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Sub_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Sub_U32S32_U16_inline(uint32 X_u32, sint32 Y_s32)
{
    uint32 res_u32;


	asm volatile("  jge  %2, 0, 1f						# if Y_s32 >= 0: limited unsigned subtraction \n\
					sub %0, %1, %2						# else unlimited unsigned subtraction \n\
					jge.u  %0, %1, 2f					# Y_s32 < 0 and no overflow, res_u32 > X_u32 \n\
				    movh   %0, 0x0000                    # set res_s32 zero \n\
				    addi   %0, %0, -1                    # set res_S32, MINUINT32 \n\
					j 2f					         	# jump to the end\n\
				1:					     			    # saturated unsint addition \n\
					subs.u %0, %1, %2             		# X_u32 - Y_s32 \n\
				2:					                     \n\
					sat.hu %0                           # limit to uint16 \n\
					" : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );

					
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((uint16) res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_U16_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Sub_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint16 MoFSrv_Lib_SrvB_Sub_U32U32_U16_inline(uint32 X_u32, uint32 Y_u32)
{
    uint16 res_u32;


    asm volatile(" subs.u   %[res_u32], %[X_u32], %[Y_u32]    \n\
                   sat.hu   %[res_u32]                        \n\
                 "
                 : [res_u32]"=d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_S16_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Sub_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Sub_S32S32_S16_inline(sint32 X_s32, sint32 Y_s32)
{
      sint32 res_s32;


    /* The __SATH instruction is a intrinsic define of the compiler
                It is available from hitec version 3.4.2.
               It is the equivalent for a sat.h instruction but within control of the compiler.
           */
    #ifdef __SATH
    asm volatile(" subs  %0, %1, %2 \n\
                 ":"=%d" (res_s32) : "d"(X_s32), "d"(Y_s32));
                   
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return __SATH(res_s32);

    #else
    asm volatile(" subs  %0, %1, %2 \n\
                   sat.h %0, %0     \n\
                 ":"=%d" (res_s32) : "d"(X_s32), "d"(Y_s32));
                   
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return ((sint16)res_s32);

    #endif /* #ifdef __SATH */
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_S16_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Sub_S32U32_S16_inline(sint32 X_s32, uint32 Y_u32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Sub_S32U32_S16_inline(sint32 X_s32, uint32 Y_u32)
{
    sint32 res_s32;

	
	asm volatile("  movh   %0, 0x8000		# set res_s32 to MAXSINT32 +1 = MINSINT32\n\
					jlt.u  %2, %0, 1f		# if Y_u32 <= MAXSINT32: jump to calculate the result \n\
				    jlt    %1, -1,  2f		# else, if X_s32 < -1, MINSINT32, jump to the end \n\
					sub    %0, %1, %2		# else, else, unsigned subtraction \n\
					jlt    %0, %1,  2f		# else, else, if res_s32 < x_s32, jump to the end \n\
					movh  %0, 0x8000		# else, else, else, MINSINT32 \n\
					j 2f					# else, else, else, jump to the end \n\
				1:						    # saturated sint subtraction \n\
					subs %0, %1, %2         # X_u32 + Y_s32 \n\
				2:						 	\n\
					sat.h %0                # limitation to sint16 \n\
					" : "=&d" (res_s32) : "d"(X_s32), "d"(Y_u32) );

	/* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16) res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_S16_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Sub_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Sub_U32S32_S16_inline(uint32 X_u32, sint32 Y_s32)
{
sint32 res_s32;
sint32 tmp_s32;

	asm volatile("  movh  %1, 0x8000					# set res_s32 to MAXSINT32 +1\n\
					jlt.u  %2, %1, 2f					# if X_u32 <= MAXSINT32: jump to calculate the result \n\
					jlt    %3,  0, 1f		  		    # else, if Y_s32 is negative: MAXSINT32 \n\
					sub    %0, %2, %3					# else: calculate with unlimited unsigned subtraction \n\
					jlt    %0, 0,  1f					# if res_s32 > MAXSINT32: MAXSINT32 \n\
					j 3f					         	# jump to the end\n\
				1:						             	# limitation to MAXSINT32 \n\
					addi  %0, %1, -1            		# res_s32 = (MAXSINT32 + 1) -1 \n\
					j 3f					         	# jump to the end\n\
				2:						         		# saturated sint subtraction \n\
					subs %0, %2, %3             		# X_u32 + Y_s32 \n\
				3:						 				\n\
					sat.h %0                            # saturation to sint16\n\
					" : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

	/* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16)res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_S16_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Sub_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint16 MoFSrv_Lib_SrvB_Sub_U32U32_S16_inline(uint32 X_u32, uint32 Y_u32)
{
    sint32 res_s32;
	sint32 tmp_s32;


    asm volatile(" sub    %0, %2, %3           # unsaturated subtraction\n\
	               xor.t  %1, %2, 31, %3, 31   # unequal signs: TRUE, equal signs: FALSE \n\
				   jlt    %1, 1, 1f            # equal signs, jump to the end \n\
	               xor.t  %1, %0, 31, %3, 31   # unequal signs: TRUE: overflow \n\
				   jlt    %1, 1, 1f            # no overflow, jump to the end \n\
				   movh   %0, 0x8000           # limit, res_s32 = MINSINT32 \n\
				   jge    %2, 0, 1f 		   # x_s32 < 0, MIN, jump to the end \n\
				   addi   %0, %0, -1           # x_s32 >0, MAXSINT32 \n\
	             1:                            # end \n\
				   sat.h   %0                  # limit to a half word \n\
				 ": "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_u32) );
                   

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return((sint16)res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_U32_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Sub_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Sub_S32S32_U32_inline(sint32 X_s32, sint32 Y_s32)
{
    uint32 res_u32;


    asm volatile(" xor.t    %0, %1, 31, %2 31  # Have both parameters equal signs? \n\
                   jlt      %0, 1, 1f          # If equal signs: jump to calcualte the result\n\
                   jge      %2, 0, 2f          # Else, If Y_s32>=0, than limit res_u32 = 0\n\
				   sub      %0, %1, %2         # Else, else X_s32 + |Y_s32| \n\
				   j        3f                 # result is always in the range of uint32\n\
				1:                             # subtraction \n\
				   subs     %0, %1, %2         # sign saturated \n\
				   jge      %0, 0, 3f          # no limit required \n\
				2:                             # limit \n\
				   mov       %0, 0x000         #res = zero \n\
				3:                             \n\
                 ":"=&d"(res_u32) : "d"(X_s32), "d"(Y_s32));


    /* MISRA RULE 30 VIOLATION: Res_s32 is written in the asm statement */
    return (res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_U32_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Sub_S32U32_U32_inline(sint32 X_s32, uint32 Y_u32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Sub_S32U32_U32_inline(sint32 X_s32, uint32 Y_u32)
{
    uint32 res_u32;


    asm volatile(" max      %[res_u32]  , %[X_s32], 0               # avoids negative value of x_s32    \n\
                   subs.u   %[res_u32]  , %[res_u32],   %[Y_u32]    # saturated substraction            \n\
                 "
                 : [res_u32]"=&d"(res_u32)
                 : [X_s32]"d"(X_s32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_U32_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Sub_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Sub_U32S32_U32_inline(uint32 X_u32, sint32 Y_s32)
{
    uint32 res_u32;


	asm volatile("  jge  %2, 0, 1f						# if Y_s32 >= 0: limited unsigned subtraction \n\
					sub %0, %1, %2						# else unlimited unsigned subtraction \n\
					jge.u  %0, %1, 2f					# Y_s32 < 0 and no overflow, res_u32 > X_u32 \n\
				    movh   %0, 0x0000                    # set res_s32 zero \n\
				    addi   %0, %0, -1                    # set res_S32, MINUINT32 \n\
					j 2f					         	# jump to the end\n\
				1:					     			    # saturated unsint addition \n\
					subs.u %0, %1, %2             		# X_u32 - Y_s32 \n\
				2:					                     \n\
					" : "=&d" (res_u32) : "d"(X_u32), "d"(Y_s32) );

					
    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_U32_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Sub_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE uint32 MoFSrv_Lib_SrvB_Sub_U32U32_U32_inline(uint32 X_u32, uint32 Y_u32)
{
    uint32 res_u32;


    asm volatile(" subs.u   %[res_u32], %[X_u32], %[Y_u32]    \n\
                 "
                 : [res_u32]"=d"(res_u32)
                 : [X_u32]"d"(X_u32), [Y_u32]"d"(Y_u32) );

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return (res_u32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32S32_S32_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Sub_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Sub_S32S32_S32_inline(sint32 X_s32, sint32 Y_s32)
{
    sint32 res_s32;


    asm volatile(" subs %0, %1, %2"
                   : "=&d" (res_s32) : "d"(X_s32), "d"(Y_s32) );
                     /*     0                 1           2       */

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_S32U32_S32_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Sub_S32U32_S32_inline(sint32 X_s32, uint32 Y_u32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Sub_S32U32_S32_inline(sint32 X_s32, uint32 Y_u32)
{
    sint32 res_s32;

	asm volatile("  movh   %0, 0x8000		# set res_s32 to MAXSINT32 +1 = MINSINT32\n\
					jlt.u  %2, %0, 1f		# if Y_u32 <= MAXSINT32: jump to calculate the result \n\
				    jlt    %1, -1,  2f		# else, if X_s32 < -1, MINSINT32, jump to the end \n\
					sub    %0, %1, %2		# else, else, unsigned subtraction \n\
					jlt    %0, %1,  2f		# else, else, if res_s32 < x_s32, jump to the end \n\
					movh  %0, 0x8000		# else, else, else, MINSINT32 \n\
					j 2f					# else, else, else, jump to the end \n\
				1:						    # saturated sint subtraction \n\
					subs %0, %1, %2         # X_u32 + Y_s32 \n\
				2:						 	\n\
					" : "=&d" (res_s32) : "d"(X_s32), "d"(Y_u32) );

	/* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);
}



/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32S32_S32_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Sub_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Sub_U32S32_S32_inline(uint32 X_u32, sint32 Y_s32)
{
sint32 res_s32;
sint32 tmp_s32;


	asm volatile("  movh  %1, 0x8000					# set res_s32 to MAXSINT32 +1\n\
					jlt.u  %2, %1, 2f					# if X_u32 <= MAXSINT32: jump to calculate the result \n\
					jlt    %3,  0, 1f		  		    # else, if Y_s32 is negative: MAXSINT32 \n\
					sub    %0, %2, %3					# else: calculate with unlimited unsigned subtraction \n\
					jlt    %0, 0,  1f					# if res_s32 > MAXSINT32: MAXSINT32 \n\
					j 3f					         	# jump to the end\n\
				1:						             	# limitation to MAXSINT32 \n\
					addi  %0, %1, -1            		# res_s32 = (MAXSINT32 + 1) -1 \n\
					j 3f					         	# jump to the end\n\
				2:						         		# saturated sint subtraction \n\
					subs %0, %2, %3             		# X_u32 + Y_s32 \n\
				3:						 				\n\
					" : "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_s32) );

						/* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);
}


/*
 ***********************************************************************************************************************
 * SrvB_Sub_U32U32_S32_inline  copied from SWHDR : srvb_sub_inl / 1.14.4; 0
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
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Sub_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32);
LOCAL_INLINE sint32 MoFSrv_Lib_SrvB_Sub_U32U32_S32_inline(uint32 X_u32, uint32 Y_u32)
{
    sint32 res_s32;
	sint32 tmp_s32;


    asm volatile(" sub    %0, %2, %3           # unsaturated subtraction\n\
	               xor.t  %1, %2, 31, %3, 31   # unequal signs: TRUE, equal signs: FALSE \n\
				   jlt    %1, 1, 1f            # equal signs, jump to the end \n\
	               xor.t  %1, %0, 31, %3, 31   # unequal signs: TRUE: overflow \n\
				   jlt    %1, 1, 1f            # no overflow, jump to the end \n\
				   movh   %0, 0x8000           # limit, res_s32 = MINSINT32 \n\
				   jge    %2, 0, 1f 		   # x_s32 < 0, MIN, jump to the end \n\
				   addi   %0, %0, -1           # x_s32 >0, MAXSINT32 \n\
	             1:                            # end \n\
				 ": "=&d" (res_s32), "=&d" (tmp_s32) : "d"(X_u32), "d"(Y_u32) );
                   

    /* MISRA RULE 30 VIOLATION: the variable is writen in the asm statement */
    return(res_s32);
}


#endif /* _MOFSRV_LIB_SRVB_SUB_H */
