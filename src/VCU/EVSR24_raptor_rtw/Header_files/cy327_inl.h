/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:cy327_inl.h$
 * $Author____:BAP2KOR$
 * $Function__:initial version$
 * $Domain____:SDOM$
 * $User______:DON1HC$
 * $Date______:23.02.2016$
 * $Class_____:SWHDR$
 * $Name______:cy327_inl$
 * $Variant___:1.19.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.19.0; 0     23.02.2016 DON1HC
 *   --Remove ARTUS Warnings.
 * 
 * 1.1.0; 0     05.10.2010 BAP2KOR
 *   Sensorsupply diagnostics and peripheral monitoring changes.
 * 
 * 1.0.0; 0     08.06.2010 BAP2KOR
 *   initial version
 * 
 * $

 ***************************************************************************************************
 </RBHead>*/


#ifndef _CY327_INL_H
#define _CY327_INL_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the inline function of the driver for the CY320
 *
 * \scope          API
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * Cy320_CheckPmErrorIni - Analyse if there was error initialization
 *
 * \param           ctChipIDX_u32  ... ChipId
 * \return          xReturnVal_b   ... TRUE:error FALSE:no error
 *
 ***************************************************************************************************
 */
static __inline__ uint32 Cy327_CheckPmErrorIni (uint32 ctChipIDX_u32) __attribute__ ((always_inline));

static __inline__ uint32 Cy327_CheckPmErrorIni (uint32 ctChipIDX_u32)
{
    ctChipIDX_u32--;
    return (Cy327_stIniErr_b32[ctChipIDX_u32]);
}


#endif
