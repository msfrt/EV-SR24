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
 * $Filename__:adci_prot.h$ 
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
 * $Name______:adci_prot$ 
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
 *      File name: adci_prot.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _ADCI_PROT_H
#define _ADCI_PROT_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                 Header file defining the configuration independent parts of the protected
 *                 interface of the driver for the internal ADC of the TriCore.
 *
 * \scope          API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define ADCI_NUM_DEMUX_REGISTERS    16
#define ADCI_NUM_DEMUX_GROUPS        2
#define ADCI_DEMUX_MIRROR_SIZE      (ADCI_NUM_DEMUX_GROUPS * ADCI_NUM_DEMUX_REGISTERS)

/*
 ***************************************************************************************************
 * typedefs
 ***************************************************************************************************
 */
typedef enum
{
    ADCI_ORDERSTATUS_EMPTY          = 0x00,
    ADCI_ORDERSTATUS_ACCEPTED       = 0x01,
    ADCI_ORDERSTATUS_STARTED        = 0x02,
    ADCI_ORDERSTATUS_CONVERTED      = 0x03,
    ADCI_ORDERSTATUS_FINISHED       = 0x04,
    ADCI_ORDERSTATUS_E              = 0x80,
    ADCI_ORDERSTATUS_E_QUEUEFULL    = 0x81,
    ADCI_ORDERSTATUS_E_PARAMETER    = 0x82,
    ADCI_ORDERSTATUS_E_CHANNEL      = 0x83,
    ADCI_ORDERSTATUS_E_ADCBUSY      = 0x84
}AdcI_SwQueue_OrderState_e;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__adc__LowSpeed__START
    // Initialization process
    extern void AdcI_Ini(void);

    // Second initialization process
    extern void AdcI_Ini2(void);

    // Implementation of AdcI_AdcForceLow as a function (mainly for calibratable routing)
    extern void AdcI_AdcForceLowFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);

    // Implementation of AdcI_AdcRelease as a function (mainly for calibratable routing)
    extern void AdcI_AdcReleaseFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);
__PRAGMA_USE__CODE__adc__LowSpeed__END

__PRAGMA_USE__CODE__adc__NormalSpeed__START
    // Implementation of AdcI_AdcGetRatio as a function (mainly for calibratable routing)
    extern sint16 AdcI_AdcGetRatioFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);

    // Implementation of AdcI_AdcGetReference as a function (mainly for calibratable routing)
    extern sint16 AdcI_AdcGetReferenceFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);

    // Implementation of AdcI_AdcGetFId as a function (mainly for calibratable routing)
    extern DSM_FIdType AdcI_AdcGetFIdFunc(uint8 idxDevice_u8, uint8 idxChannel_u8);

    // AdcI_AdcTrigger with queue support
    extern AdcI_SwQueue_OrderState_e AdcI_AdcTriggerFunc (uint8 idxDevice_u8, 
                                                          uint8 idxChannel_u8,
                                                          void  (* callBack_pf)(void));
__PRAGMA_USE__CODE__adc__NormalSpeed__END

__PRAGMA_USE__adc__1_5ms__RAM__arr16__START
    // Table containing demultiplexed and normalized conversion results from ADC0 (provided by PCP)
    extern sint16 AdcI_DemuxResultsAdc0_as16[];
__PRAGMA_USE__adc__1_5ms__RAM__arr16__END

/* _ADCI_PROT_H                                                                                   */
#endif
