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
 * $Filename__:ads7841_pub.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LENZSI$ 
 * $Date______:03.08.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:ads7841_pub$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: ads7841_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _ADS7841_PUB_H
#define _ADS7841_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription : public header for ADS7841 device driver
 *
 * \scope             : API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 * Prototypes
 ***************************************************************************************************
 */
/* Prototypes of the I/O functions                                                                */
    __PRAGMA_USE__CODE__hwe__HighSpeed__START
extern sint16       Ads7841_AdcGetRatio      (uint8 idxDevice_u8, uint8 idxChannel_u8);
extern sint16       Ads7841_AdcGetReference  (uint8 idxDevice_u8, uint8 idxChannel_u8);
extern DSM_FIdType  Ads7841_AdcGetFId        (uint8 idxDevice_u8, uint8 idxChannel_u8);
extern void         Ads7841_AdcForceLow      (uint8 idxDevice_u8, uint8 idxChannel_u8);
extern void         Ads7841_AdcRelease       (uint8 idxDevice_u8, uint8 idxChannel_u8);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const        Adc_Interface_t          Ads7841_xInterface;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void         Ads7841_Proc             (void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void         Ads7841_Proc_Ini         (void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END
/* _ADS7841_PUB_H */
#endif
