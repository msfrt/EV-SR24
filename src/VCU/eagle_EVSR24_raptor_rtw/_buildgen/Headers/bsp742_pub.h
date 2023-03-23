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
 * $Filename__:bsp742_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VIN4KOR$ 
 * $Date______:13.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:bsp742_pub$ 
 * $Variant___:1.7.0$ 
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
 * 1.7.0; 0     13.05.2010 VIN4KOR
 *   Misra Warning Removal
 * 
 * 1.6.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: bsp742_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _BSP742_PUB_H
#define _BSP742_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription :
 *                       public header for _BSP742_PUB_H device driver
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Typedef
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void   Bsp742_SwitchOff        (uint16 xChip_u16, uint16 xStage_u16, bool xnotUsed_b);
extern void   Bsp742_DioSet           (uint16 numChip_u16, uint16 numPwstg_u16, bool stValue_b);

extern uint32 Bsp742_TstImp           (uint16 numChip_u16, uint16 numPwstg_u16);
extern void   Bsp742_PwmPpty          (uint16 numChip_u16 , uint16 numPwstg_u16, uint32 tiLow_u32, uint32 tiHigh_u32);
extern void   Bsp742_DioPpty          (uint16 numChip_u16 , uint16 numPwstg_u16, bool stValue_b);

extern uint32 Bsp742_GetErrorInfo     (uint16 numChip_u16, uint16 numPwstg_u16);
extern void   Bsp742_ClearErr         (uint16 numChip_u16, uint16 numPwstg_u16);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void   Bsp742_Proc             (void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END
/* _BSP742_PUB_H */
#endif
