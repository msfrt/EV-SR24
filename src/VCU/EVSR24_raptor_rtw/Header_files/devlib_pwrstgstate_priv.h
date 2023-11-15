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
 * $Filename__:devlib_pwrstgstate_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:manual$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:11.11.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_pwrstgstate_priv$ 
 * $Variant___:1.141.0$ 
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
 * 1.141.0; 0     11.11.2008 KLN1SI
 *   This version is created by migration tool
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_PWRSTGSTATE_PRIV_H
#define _DEVLIB_PWRSTGSTATE_PRIV_H           /* Prevent this header from further inclusions.    */

/*
 ***************************************************************************************************
 * Type defenitions for the structures.
 ***************************************************************************************************
 */
/* Structure for hysterisis check on battery voltage correction factor */
typedef struct
{
    sint16 facLowHysLo_C;            /* Lower limit for battery voltage correction factor below 1 */
    sint16 facLowHysHi_C;            /* Upper limit for battery voltage correction factor below 1 */
    sint16 facHighHysLo_C;           /* Lower limit for battery voltage correction factor above 1 */
    sint16 facHighHysHi_C;           /* Upper limit for battery voltage correction factor above 1 */
} DevLib_HysBattCorFac_t;

/* Hysterisis check limits for battery voltage check */
typedef struct
{
    sint16 BattLoHysLo_C;       /* lower threshold for the low battery voltage hysterisis check   */
    sint16 BattLoHysHi_C;       /* higher threshold for the low battery voltage hysterisis check  */
    sint16 BattHiHysLo_C;       /* lower  threshold for the high battery voltage hysterisis check */
    sint16 BattHiHysHi_C;       /* higher threshold for the high battery voltage hysterisis check */
} DevLib_BattHysPar_t;

#endif
