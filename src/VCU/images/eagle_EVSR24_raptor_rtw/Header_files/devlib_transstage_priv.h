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
 * $Filename__:devlib_transstage_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:05.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_transstage_priv$ 
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
 * 1.6.0; 0     05.08.2008 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_transstage_priv.h
 *      Version: \main\basis\b_DE_DevLib\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_TRANSSTAGE_PRIV_H
#define _DEVLIB_TRANSSTAGE_PRIV_H

/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */
#define DEVLIB_FIRST_CALL_BP               0x00   /* first call of the function                   */

#define DEVLIB_RAMP_DIR_INFO_BITS_START    0x05   /* starting position of ramp direction info     */
#define DEVLIB_RAMP_DIR_INFO_LEN           0x02   /* length of ramp direction information         */

#define DEVLIB_RISING_RAMP                 0x01   /* ramp is rising                               */
#define DEVLIB_FALLING_RAMP                0x02   /* ramp is falling                              */

#endif
