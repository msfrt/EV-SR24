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
 * $Filename__:srvx_exp_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_exp_inl$ 
 * $Variant___:1.8.0$ 
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
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SRVX_EXP_INL_H
#define _SRVX_EXP_INL_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Exponential function. Calculated via interpolation of precaluclated array
 *
 * \scope               API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define DX 13UL                    /**< dx = 0.125 => DX = 0x2000 = 2^13                          */
#define LIMIT_ABSOLUTE 0x40000UL   /**< 4 Limit for interpolation                                 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

extern const uint16 SrvX_Exp_Y_Val[];

/**
 ***************************************************************************************************
 * Exponential function.
 *
 * Calulates the value e^-x by interpolation. (x is passed as positive value)
 *
 * \param     X_s32 input value, Range: 0 - 0x40000 = ([0 - 4] * 2^16)
 * \return    Returns e^-x quantized by 2^16 ( [1 .. 0.018316] = [e^0 .. e^-4] = [65536 .. 1200]
 ***************************************************************************************************
 */

MEMLAY_USE_FORCE_INLINE(sint32 SrvX_Exp_inline(sint32 X_s32))
{
    uint32 Ind;
    sint32 RetVal;

    /* limit input value to range [0, 4] */
    if(((uint32)X_s32 >> 16) < (LIMIT_ABSOLUTE >> 16))
    {
        Ind  = (uint32)X_s32 >> DX;        /* calculate index and interpolate */
        RetVal = (sint32)((uint32)SrvX_Exp_Y_Val[Ind] -
                          ((((uint32)X_s32 - (Ind << DX)) *
                           (uint32)(SrvX_Exp_Y_Val[Ind] - SrvX_Exp_Y_Val[Ind + 1UL])) >> DX));
    }
    else
    {
        RetVal = (sint32)(SrvX_Exp_Y_Val[(LIMIT_ABSOLUTE >> DX)]);
    }
    return RetVal;
}

/* _SRVX_EXP_INL_H */
#endif
