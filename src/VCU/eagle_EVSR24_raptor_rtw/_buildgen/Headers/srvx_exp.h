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
 * $Filename__:srvx_exp.h$ 
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
 * $Name______:srvx_exp$ 
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

#ifndef _SRVX_EXP_H
#define _SRVX_EXP_H

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
 * Prototypes
 ***************************************************************************************************
 */

#if   (SRVX_EXP_LOCATION == SRVX_LOCATION_CACHED)

    extern sint32 SrvX_Exp(sint32 X_s32);

#elif (SRVX_EXP_LOCATION == SRVX_LOCATION_INLINE)

    #error >>>>'The function SrvX_Exp can\'t be inlined: Configuration not supported'

#elif (SRVX_EXP_LOCATION == SRVX_LOCATION_SPRAM)

    MEMLAY_USE_SPRAM_CODE(extern sint32 SrvX_Exp(sint32 X_s32));

#else

    #error >>>> 'Configuration for SrvX_Exp not supported'

 /* SRVX_EXP_LOCATION */
#endif


/* SRVX_EXP_H */
#endif
