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
 * $Filename__:l9959_inl.h$
 *
 * $Author____:ROG2SI$
 *
 * $Function__:initial version$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:HRB5KOR$
 * $Date______:08.05.2014$
 * $Class_____:SWHDR$
 * $Name______:l9959_inl$
 * $Variant___:1.6.0$
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
 * 1.6.0; 0     08.05.2014 HRB5KOR
 *   Review Implementation
 * 
 * 1.0.0; 4     03.06.2011 ROG2SI
 *   changes after review
 * 
 * 1.0.0; 3     23.05.2011 ROG2SI
 *   develop version
 * 
 * 1.0.0; 2     06.04.2011 ROG2SI
 *   develop version
 * 
 * 1.0.0; 1     09.03.2011 ROG2SI
 *   further development
 * 
 * 1.0.0; 0     03.11.2010 ROG2SI
 *   initial version
 * 
 * $
 *
 *************************************************************************
</RBHead>*/


#ifndef _L9959_INL_H
#define _L9959_INL_H

#ifndef L9959_NOT_USED

static __inline__ bit32 L9959_CheckPmErrorIni (uint32 numDev_u32) __attribute__ ((always_inline));

/**
 ***************************************************************************************************
 * L9959_CheckPmErrorIni - Analyse if there was error initialization
 *
 * \param           ctChipIDX_u32  ... ChipId
 * \return          xReturnVal_b   ... TRUE:error FALSE:no error
 *
 ***************************************************************************************************
 */

static __inline__ bit32 L9959_CheckPmErrorIni (uint32 numDev_u32)
{
    /* Starts with zero now */
    numDev_u32--;
    /* Return that we have an error in case the bit is not set */
    return(!(SrvB_GetBitU8_B(L9959_stIniFinished_u8,numDev_u32)));
}

#endif /* endif L9959_NOT_USED */
#endif

