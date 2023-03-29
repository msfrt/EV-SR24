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
 * $Filename__:srvb_mem_inl.h$ 
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
 * $Name______:srvb_mem_inl$ 
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
 * 1.19.1; 0     25.07.2013 PIR5COB
 *   -
 * 
 * 1.15.0; 0     10.08.2011 SYA2COB
 *   Delivery of FC SrvB
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

#ifndef _SRVB_MEM_INL_H
#define _SRVB_MEM_INL_H

/**
 ***********************************************************************************************************************
 * \file srvb_mem_inl.h
 * \brief Service Library Header (Inline) with MEMORY FUNCTIONS
 *
 * Implementation of MEMORY FUNCTIONS with 32- ,16- and 8-Bit inputs.
 * You can copy, fill up and swap memeory locations.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 * Service Library Header (Inline) with MEMORY FUNCTIONS
 *
 * Implementation of MEMORY FUNCTIONS with 32- ,16- and 8-Bit sources and targets.
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 * List of Functions
 *
 * SrvB_MemCopyU8          SrvB_MemFill8           SrvB_MemSwapU8_B
 * SrvB_MemCopyU16         SrvB_MemFillU16         SrvB_MemSwapU16_B
 * SrvB_MemCopyU32         SrvB_MemFillU32         SrvB_MemSwapU32_B
 *
 *
 ***********************************************************************************************************************
 */

/*
 ***********************************************************************************************************************
 *
 *
 *
 * MEMORY COPY FUNCTIONS
 *
 *
 *
 ***********************************************************************************************************************
 */

/**
 ***********************************************************************************************************************
 * SrvB_MemCopyU8
 *
 * \brief Copy memory in 8 bit uints
 *
 * Memory copy routine. Source and destination can overlap.
 *
 * \param          uint8*  Dest_pu8  destination address
 * \param    const uint8*  Src_pcu8  source address
 * \param          uint32  N_u32       number of BYTES to be copied
 * \return         void
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_MemCopyU8_inline(uint8* Dest_pu8, const uint8* Src_pcu8, uint32 N_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32   i;


    /* check */
    if (N_u32 > 0ul)
    {
        i = N_u32;


        if(Dest_pu8 <= Src_pcu8)
        {
            while(i > 0ul)
            {
                /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
                *(Dest_pu8++) = *(Src_pcu8++);
                i--;
            }
        }
        else
        {
            Dest_pu8 = &(Dest_pu8[i - 1]);
            Src_pcu8 = &(Src_pcu8[i - 1]);

            while(i > 0ul)
            {
                /* MISRA RULE 12.13 VIOLATION: -- operator is allowed for pointer decrement. */
                *(Dest_pu8--) = *(Src_pcu8--);
                i--;
            }
        }
    }


#else

    uint32 tmp_u32;
    uint32 tmp_n;		
    uint8* ct_pu8;
    
    if (N_u32 > 0ul)
    {
		tmp_n  =  (N_u32 - 1ul);
        ct_pu8 = ((uint8*)(N_u32 - 1ul));

        /* fast forward copy loop */
        asm volatile(
            "                                    \n\
	    		ge.a   %[tmp],%[src],%[Dst]      \n\
	    		jz     %[tmp],L2F_%=             \n\
        L1B_%=: ld.bu  %[tmp],[%[src]+]1         \n\
                st.b   [%[Dst]+]1,%[tmp]         \n\
                loop   %[cnt],L1B_%=             \n\
	    		j      L4F_%=                    \n\
        L2F_%=:	addsc.a %[Dst],%[Dst],%[n],0     \n\
	    		addsc.a %[src],%[src],%[n],0     \n\
        L3B_%=: ld.bu  %[tmp],[%[src]+]-1        \n\
                st.b   [%[Dst]+]-1,%[tmp]        \n\
                loop   %[cnt],L3B_%=             \n\
        L4F_%=: "
        : [tmp]"=&d"(tmp_u32),[Dst]"+a"(Dest_pu8), [src]"+a"(Src_pcu8), [cnt]"+a"(ct_pu8): [n]"d"(tmp_n)  : "memory");
             /*   0                 1                2               3            4 */
    }

    /* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_MemCopyU16
 *
 * \brief Copy memory in 16 bit uints
 *
 * Memory copy routine. Source and destination can overlap. Pointer parameters must be 2 Byte aligned
 * The size should be a multiple of 2. If not, it is rounded down to the next multiple of 2.
 *
 * \param          uint16*  Dest_pu16  destination address
 * \param    const uint16*  Src_pcu16  source address
 * \param          uint32   N_u32        number of BYTES to be copied
 * \return         void
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_MemCopyU16_inline(uint16* Dest_pu16, const uint16* Src_pcu16, uint32 N_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32   i;


    if (N_u32 > 1ul)
    {
        i = (N_u32 / 2ul);

        if(Dest_pu16 <= Src_pcu16)
        {
            while(i > 0ul)
            {
                /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
                *(Dest_pu16++) = *(Src_pcu16++);
                i--;
            }
        }
        else
        {
            Dest_pu16 = &(Dest_pu16[i - 1]);
            Src_pcu16  = &(Src_pcu16[i - 1]);

            while(i > 0ul)
            {
                /* MISRA RULE 12.13 VIOLATION: -- operator is allowed for pointer decrement. */
                *(Dest_pu16--) = *(Src_pcu16--);
                i--;
            }
        }
    }

#else

    uint32 tmp_u32;
    uint32 tmp_n;		
    uint8* ct_pu8;
	
    if (N_u32 > 1ul)
    {
		tmp_n  =  ((N_u32 / 2ul) - 1ul);
        ct_pu8 = (uint8*)((N_u32 / 2ul) - 1ul);

        /* fast forward copy loop */
        asm volatile(
            "                                \n\
	    		ge.a   %[tmp],%[src],%[Dst]      \n\
	    		jz     %[tmp],L2F_%=             \n\
        L1B_%=: ld.hu  %[tmp],[%[src]+]2         \n\
                st.h   [%[Dst]+]2,%[tmp]         \n\
                loop   %[cnt],L1B_%=             \n\
	    		 j     L4F_%=                    \n\
        L2F_%=:	addsc.a %[Dst],%[Dst],%[n],1     \n\
	    		addsc.a %[src],%[src],%[n],1     \n\
        L3B_%=: ld.hu  %[tmp],[%[src]+]-2        \n\
                st.h   [%[Dst]+]-2,%[tmp]        \n\
                loop   %[cnt],L3B_%=             \n\
        L4F_%=: "
        : [tmp]"=&d"(tmp_u32),[Dst]"+a"(Dest_pu16), [src]"+a"(Src_pcu16), [cnt]"+a"(ct_pu8): [n]"d"(tmp_n)  : "memory");
        /*   0                 1                2               3            4 */
    }

    /* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_MemCopyU32
 *
 * \brief Copy memory in 32 bit uints
 *
 * Memory copy routine. Source and destination can overlap. Pointer parameters must be 4 Byte aligned.
 *  The size should be a multiple of 4. If not, it is rounded down to the next multiple of 4.
 *
 * \param          uint32*  Dest_pu32 destination address
 * \param    const uint32*  Src_pcu32 source address
 * \param          uint32   N_u32       number of BYTES to be copied
 * \return         void
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_MemCopyU32_inline(uint32* Dest_pu32, const uint32* Src_pcu32, uint32 N_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32    i;

    if (N_u32 > 1ul)
    {
        i = (N_u32 / 4ul);

        if(Dest_pu32 <= Src_pcu32)
        {
            while(i > 0ul)
            {
                /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
                *(Dest_pu32++) = *(Src_pcu32++);
                i--;
            }
        }
        else
        {
            Dest_pu32 = &(Dest_pu32[i - 1]);
            Src_pcu32  = &(Src_pcu32[i - 1]);

            while(i > 0ul)
            {
                /* MISRA RULE 12.13 VIOLATION: -- operator is allowed for pointer decrement. */
                *(Dest_pu32--) = *(Src_pcu32--);
                i--;
            }
        }
    }


#else

    uint32 tmp_u32;
    uint32 tmp_n;		
    uint8* ct_pu8;
    
    if (N_u32 > 3ul)
    {
		tmp_n  =  ((N_u32 / 4ul) - 1ul);
        ct_pu8 = (uint8*)((N_u32 / 4ul) - 1ul);

        /* fast forward copy loop */
        asm volatile(
            "                                     \n\
    	 		ge.a   %[tmp],%[src],%[Dst]       \n\
    	 		jz     %[tmp],L2F_%=              \n\
        L1B_%=: ld.w  %[tmp],[%[src]+]4           \n\
                st.w   [%[Dst]+]4,%[tmp]          \n\
                loop   %[cnt],L1B_%=              \n\
    	 		 j     L4F_%=                     \n\
        L2F_%=:	addsc.a %[Dst],%[Dst],%[n],2      \n\
    	 		addsc.a %[src],%[src],%[n],2      \n\
        L3B_%=: ld.w   %[tmp],[%[src]+]-4         \n\
                st.w   [%[Dst]+]-4,%[tmp]         \n\
                loop   %[cnt],L3B_%=              \n\
        L4F_%=: "
    : [tmp]"=&d"(tmp_u32),[Dst]"+a"(Dest_pu32), [src]"+a"(Src_pcu32), [cnt]"+a"(ct_pu8): [n]"d"(tmp_n)  : "memory");
        /*   0                 1                2               3            4 */
    }

    /* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
***********************************************************************************************************************
*
*
*
* MEMORY FILL FUNCTIONS
*
*
*
***********************************************************************************************************************
*/


/**
 ***********************************************************************************************************************
 * SrvB_MemFillU8
 *
 * \brief Fill memory with 8 bit pattern in 8 bit uints
 *
 * Memory initialization routine. 8 Bit Pattern is written to the destination.
 *
 * \param          uint8*  Dest_pu8     destination address
 * \param    const uint8*  Pattern_u8   fill pattern
 * \param          uint32  N_u32         number of BYTES to be initialized
 * \return         void
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_MemFillU8_inline(uint8* Dest_pu8, uint8 Pattern_u8, uint32 N_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32   i;

    if (N_u32 > 0ul)
    {
        for( i = N_u32 ; i > 0 ; i-- )
        {
            /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
            *(Dest_pu8++) = Pattern_u8;
        }
    }

#else

    uint8* ct_pu8;


    if (N_u32 > 0ul)
    {
        ct_pu8      = ((uint8*)(N_u32 - 1ul));

        /* fast forward copy loop */
        asm volatile(
            "                   \n\
        L1B_%=:                 \n\
            st.b   [%0+]1,%2    \n\
            loop   %1,L1B_%=    \n\
            "
    : "+a"(Dest_pu8), "+a"(ct_pu8) :  "d"(Pattern_u8): "memory");
        /*   0               1              2    */
    }

    /* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_MemFillU16
 *
 * \brief Fill memory with 16 bit pattern in 16 bit uints
 *
 * Memory initialization routine. 16 Bit Pattern is written to the destination. Destination must be 2 Byte aligned.
 * The size should be a multiple of 2 Bytes, otherwise it is rounded down to a multiple of 2 Bytes.
 *
 * \param          uint16 * Dest_pu16      destination address
 * \param    const uint16 * Pattern_u16    fill pattern
 * \param          uint32   N_u32           number of BYTES to be initialized
 * \return         void
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_MemFillU16_inline(uint16* Dest_pu16, uint16 Pattern_u16, uint32 N_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32   i;

    if (N_u32 > 1ul)
    {
        for( i = (N_u32 / 2ul) ; i > 0 ; i-- )
        {
            /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
            *(Dest_pu16++) = Pattern_u16;
        }
    }

#else

    uint8* ct_pu16;


    if (N_u32 > 1ul)
    {
        ct_pu16      = (uint8*)(((N_u32) / 2ul) - 1ul);

        /* fast forward copy loop */
        asm volatile(
            "                   \n\
        L1B_%=:                 \n\
            st.h   [%0+]2,%2    \n\
            loop   %1,L1B_%=    \n\
            "
    : "+a"(Dest_pu16), "+a"(ct_pu16) : "d"(Pattern_u16): "memory");
        /*   0                1             2     */
    }

    /* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/**
 ***********************************************************************************************************************
 * SrvB_MemFillU32
 *
 * \brief Fill memory with 32 bit pattern in 32 bit uints
 *
 * Memory initialization routine. 32 Bit Pattern is written to the destination. Destination must be 4 Byte aligned.
 * The size should be a multiple of 4 Bytes, otherwise it is rounded down to a multiple of 4 Bytes.
 *
 * \param          uint32* Dest_pu32     destination address
 * \param    const uint32* Pattern_u32   fill pattern
 * \param          uint32  N_u32          number of BYTES to be initialized
 * \return         void
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void SrvB_MemFillU32_inline(uint32* Dest_pu32, uint32 Pattern_u32, uint32 N_u32))
{
#if (SRVB_IMPL_ASM_ENABLE == 0)

    uint32   i;

    if (N_u32 > 3ul)
    {
        for( i = (N_u32 / 4ul) ; i > 0 ; i-- )
        {
            /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
            *(Dest_pu32++) = Pattern_u32;
        }
    }

#else

    uint32* ct_pu32;

    if (N_u32 > 3u)
    {
        ct_pu32      = (uint32*)((N_u32 / 4ul) - 1ul);

        /* fast forward copy loop */
        asm volatile(
            "                   \n\
        L1B_%=:                 \n\
            st.w   [%0+]4,%2    \n\
            loop   %1,L1B_%=    \n\
            "
    : "+a"(Dest_pu32), "+a"(ct_pu32) : "d"(Pattern_u32): "memory");
        /*   0                1             2     */


    }

    /* SRVB_IMPL_ASM_ENABLE == 0 */
#endif
}


/*
***********************************************************************************************************************
*
*
*
* MEMORY SWAP FUNCTIONS
*
*
*
***********************************************************************************************************************
*/


/**
 ***********************************************************************************************************************
 * SrvB_MemSwapU8_B
 *
 * \brief Swap memory in 8 bit uints
 *
 * Swap the contents of two NON OVERLAPPING memory spaces of the SAME SIZE specified by start adresses "src1" and "src2"
 * and size N_u32. If both memories overlap the return value is FALSE, otherwise the return value is TRUE .
 *
 * \param       uint8       Src1_pu8      Pointer to first source address
 * \param       uint8       Src2_pu8      Pointer to second source address
 * \param       uint32      N_u32           Number of BYTES that shall be swapped
 * \return      bool        res           success of operation, TRUE = success, FALSE = failure
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_MemSwapU8_B_inline(uint8* Src1_pu8, uint8* Src2_pu8, uint32 N_u32))
{
    uint32  i;
    uint8   tmp_u8;
    bool    res;

    res = FALSE;

    /* number of swaps, necessary */
    i = N_u32;

    if(((&(Src1_pu8[i]) <= Src2_pu8) || (&(Src2_pu8[i]) <= Src1_pu8)) && (i > 0ul))
    {

        for( ; i > 0 ; i-- )
        {
            tmp_u8        = *Src1_pu8;
            /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
            *(Src1_pu8++) = *Src2_pu8;
            *(Src2_pu8++) = tmp_u8;
        }
        res = TRUE;
    }
    return (res);
}


/**
 ***********************************************************************************************************************
 * SrvB_MemSwapU16_B
 *
 * \brief Swap memory in 16 bit uints
 *
 * Swap the contents of two NON OVERLAPPING memory spaces of the SAME SIZE specified by start adresses "src1" and "src2"
 * and the size N_u32.The size should be a multiple of 2. If not, it is rounded down to the next multiple of 2.
 * If both memories overlap the return value is FALSE, otherwise the return value is TRUE .
 *
 * \param       uint16      Src1_pu16     Pointer to first source address
 * \param       uint16      Src2_pu16     Pointer to second source address
 * \param       uint32      N_u32           Number of BYTES that shall be swapped
 * \return      bool        res           success of operation, TRUE = success, FALSE = failure
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_MemSwapU16_B_inline(uint16* Src1_pu16, uint16* Src2_pu16, uint32 N_u32))
{
    uint32   i;
    uint16   tmp_u16;
    bool     res;

    res = FALSE;
    /* number of swaps, necessary */
    i = (N_u32 / 2U);

    if(((&(Src1_pu16[i]) <= Src2_pu16) || (&(Src2_pu16[i]) <= Src1_pu16)) && (i > 0ul))
    {

        for( ; i > 0 ; i-- )
        {
            tmp_u16        = *Src1_pu16;
            /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
            *(Src1_pu16++) = *Src2_pu16;
            *(Src2_pu16++) = tmp_u16;
        }
        res = TRUE;
    }
    return (res);
}


/**
 ***********************************************************************************************************************
 * SrvB_MemSwapU32_B
 *
 * \brief Swap memory in 32 bit uints
 *
 * Swap the contents of two NON OVERLAPPING memory spaces of the SAME SIZE specified by start adresses "src1" and "src2"
 * and the size N_u32.The size should be a multiple of 4. If not, it is rounded down to the next multiple of 4.
 * If both memories overlap the return value is FALSE, otherwise the return value is TRUE .
 *
 * \param       uint32      Src1_pu32    Pointer to first source address
 * \param       uint32      Src2_pu32    Pointer to second source address
 * \param       uint32      N_u32          Number of BYTES that shall be swapped
 * \return      bool        res          success of operation, TRUE = success, FALSE = failure
 ***********************************************************************************************************************
 */
MEMLAY_USE_FORCE_INLINE(bool SrvB_MemSwapU32_B_inline(uint32* Src1_pu32, uint32* Src2_pu32, uint32 N_u32))
{
    uint32   i;
    bool     res;
    uint32   tmp_u32;

    res = FALSE;
    /* number of swaps, necessary */
    i = (N_u32 / 4u);

    if(((&(Src1_pu32[i]) <= Src2_pu32) || (&(Src2_pu32[i]) <= Src1_pu32)) && (i > 0ul))
    {

        for( ; i > 0 ; i-- )
        {
            tmp_u32        = *Src1_pu32;
            /* MISRA RULE 12.13 VIOLATION: ++ operator is allowed for pointer increment. */
            *(Src1_pu32++) = *Src2_pu32;
            *(Src2_pu32++) = tmp_u32;
        }
        res = TRUE;
    }
    return (res);
}

/* SRVB_MEM_INL_H */
#endif
