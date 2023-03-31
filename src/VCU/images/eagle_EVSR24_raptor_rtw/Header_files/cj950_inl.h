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
 * $Filename__:cj950_inl.h$ 
 * 
 * $Author____:EHF2SI$ 
 * 
 * $Function__:first new version$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:YTU1HC$ 
 * $Date______:04.01.2016$ 
 * $Class_____:SWHDR$ 
 * $Name______:cj950_inl$ 
 * $Variant___:1.4.1$ 
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
 * 1.4.1; 0     04.01.2016 YTU1HC
 *   Version 1 checking for cj950 report file correction
 *   RQONE00765706
 * 
 * 1.0.0; 1     28.10.2010 EHF2SI
 *   adaptations
 * 
 * 1.0.0; 0     21.09.2010 EHF2SI
 *   new created
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _CJ950_INL_H
#define _CJ950_INL_H

#ifndef CJ950_NOT_IN_SYSTEM
/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the inline function of the driver for the Cj950
 *
 * \scope          API
 ***************************************************************************************************
 */


static __inline__ uint32 Cj950_CheckPmErrorIni(uint32 ctChipIDX_u32);
/***************************************************************************************************
 * CJ950_CheckPmErrorIni - Analyse if there was error initialization
 *
 * \param           ctChipIDX_u32  ... ChipId
 * \return          xReturnVal_b   ... TRUE:error FALSE:no error
 *
 ***************************************************************************************************
*/

static __inline__ uint32 Cj950_CheckPmErrorIni (uint32 ctChipIDX_u32)
{
    ctChipIDX_u32--;
    return (CJ950_stIniErr_b32[ctChipIDX_u32]);
}


#endif
/*  _CJ950_INL_H                                                                                 */
#endif
