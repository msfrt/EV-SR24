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
 * $Filename__:srvf_stat_inl.h$ 
 * 
 * $Author____:VKA2FE$ 
 * 
 * $Function__:Derived from B_SRVF.12.0.0$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NSL2COB$ 
 * $Date______:11.11.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvf_stat_inl$ 
 * $Variant___:1.22.1$ 
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
 * 1.22.1; 0     11.11.2014 NSL2COB
 *   -Bugfixed
 * 
 * 1.22.0; 2     21.08.2014 PIR5COB
 *   Updated after testing
 * 
 * 1.22.0; 1     21.08.2014 PIR5COB
 *   Updated review comments
 * 
 * 1.22.0; 0     11.08.2014 PIR5COB
 *   Functionality for calculation of float array average added.
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVF.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVF_STAT_INL_H
#define _SRVF_STAT_INL_H


/*
 ***********************************************************************************************************************
 *
 *  List of functions:
 *
 *  SrvF_Max_R32
 *  SrvF_Min_R32
 *  SrvF_ArrayAverage_R32U32_R32_inline
 * 
 ***********************************************************************************************************************
 */


typedef union
{
    real32 r32;            /* Float value */
    uint32 u32;             /* Bit representation of float */
} SrvF_r32u32u;


MEMLAY_USE_FORCE_INLINE(real32 SrvF_Abs_R32_inline(real32 X_r32))
{
    SrvF_r32u32u       res_r32u32u;

    res_r32u32u.r32 = X_r32;

    /* Gets the bits from the float */
    res_r32u32u.u32 &= 0x7FFFFFFFUL;

    return(res_r32u32u.r32);
}


MEMLAY_USE_FORCE_INLINE(real32 SrvF_Max_R32_inline(real32 X_r32, real32 Y_r32))
{
    return ((X_r32 > Y_r32) ? X_r32 : Y_r32);
}


MEMLAY_USE_FORCE_INLINE(real32 SrvF_Min_R32_inline(real32 X_r32, real32 Y_r32))
{
    return ((X_r32 < Y_r32) ? X_r32 : Y_r32);
}

/**
 ***********************************************************************************************************************
 * SrvF_ArrayAverage_R32U32_R32_inline
 *
 * \brief Calculates the average for the fiven input floating point array
 *
 *
 * Returns the average for the given input array..

 ***********************************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(real32 SrvF_ArrayAverage_R32U32_R32_inline(real32* Array_pr32, uint32 Count_u32))
{
    real32   Result_r32;
    uint32    i_u32;

    Result_r32 = Array_pr32[0];

    if(Count_u32 > 1UL)
    {
        for(i_u32 = 1UL; i_u32 < Count_u32 ; i_u32++)
        {
            Array_pr32++;
            Result_r32 += (*(Array_pr32));
        }
        Result_r32 = Result_r32 / Count_u32;
    }

    return (Result_r32);
}

/* SRVF_STAT_INL_H */
#endif
