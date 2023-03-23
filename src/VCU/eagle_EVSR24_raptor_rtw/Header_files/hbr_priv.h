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
 * $Filename__:hbr_priv.h$
 *
 * $Author____:PMR2KOR$
 *
 * $Function__:Header files$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:BIL1HC$
 * $Date______:26.09.2012$
 * $Class_____:SWHDR$
 * $Name______:hbr_priv$
 * $Variant___:1.6.0$
 * $Revision__:1$
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
 * 1.6.0; 1     26.09.2012 BIL1HC
 *   Update after review
 * 
 * 1.6.0; 0     24.09.2012 BIL1HC
 *   HBR setOut immediately support
 * 
 * 1.5.0; 0     10.05.2012 KHL1HC
 *   Support Signal Location, Signal Invert, and Signal Reverse
 * 
 * 1.4.0; 3     07.10.2011 BIL1HC
 *   Hbr update: remove macro interface definition, using function pointer 
 *   interface.
 *   The behavior is unchanged when theres no HBR configured.
 * 
 * 1.4.0; 2     22.09.2011 BIL1HC
 *   Hbr update: remove macro interface definition, using function pointer 
 *   interface.
 * 
 * 1.4.0; 1     17.08.2011 PTE1KOR
 *   To provide interface functions instead of macros
 * 
 * 1.4.0; 0     17.08.2011 PTE1KOR
 *   To provide function interface instead of Macros
 * 
 * 1.0.0; 0     04.08.2010 PMR2KOR
 *   HBR Header files
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _HBR_PRIV_H
#define _HBR_PRIV_H
/**
 ***************************************************************************************************
 * \moduledescription
 * Abstraction layer provides common interfaces for all H-Bridge peripherals
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * FCT Section: include public header of the atomic component Y
 ***************************************************************************************************
 */
#ifdef HBR_LAYER_USED
/*
 ****************************************************************
 * Structure stores the pointer functions which reference to
 * all H-Bridge interfaces of a supported peripheral
 * Ref: hbr_DevFuncTable
 ***************************************************************
 */
typedef struct Hbr_DevFuncTable_st
{
    bool    (*SOn_pfn)(uint, uint, bool);            /* Hbr_Switchon          */
    bool    (*SOff_pfn)(uint, uint, bool);           /* Hbr_Switchoff         */
    bool    (*SDty_pfn)(uint, uint, sint16, bool);   /* Hbr_SetOutDtyCyc      */
    bool    (*SPrd_pfn)(uint, uint, uint32, bool);   /* Hbr_SetOutPeriod      */
    uint8   (*GStatus_pfn)(uint, uint, bool);        /* Hbr_GetStatus         */
    uint32  (*GDiag_pfn)(uint, uint, bool);          /* Hbr_GetDiagInfo       */
    bool    (*ReqTst_pfn)(uint, uint);               /* Hbr_ReqTstPulse       */
    bool    (*ReqSwOff_pfn)(uint, uint);             /* Hbr_ReqSwtOffModeDiag */
    uint8   (*StSwOff_pfn)(uint, uint);              /* Hbr_StSwtOffModeDiag  */
    bool    (*MonStart_pfn)(uint, uint);             /* Hbr_Mon_Start         */
    bool    (*MonReqStatus_pfn)(uint, uint);         /* Hbr_Mon_ReqStatus     */
    bool    (*MonEnd_pfn)(uint, uint);               /* Hbr_Mon_End           */
}Hbr_DevFuncTable_t;

/*
 *********************************************************
 * The array stores the pointer function of all devices
 * Each element stores a Hbr_DevFuncTable_t of each device
 * Defined in Hbr_auto_conf.c
 * Ref: Hbr_Device_t
 *********************************************************
 */
extern const Hbr_DevFuncTable_t hbr_DevFuncTable[];

/*
 *********************************************************
 * Structure stores routing information of HBr signal.
 * Ref: hbr_Signal_Routing
 *********************************************************
 */
typedef struct Hbr_Signal_Routing_st
{
    Hbr_Device_t  hbrDevice;         /* H-Bridge device (CJ230, CJ930, CY146, L9959, TLE8209) */
    uint          hbrDeviceNum;      /* Index of the peripheral                               */
    uint          hbrBridgeNum;      /* Index of the H-Bridge on a device                     */
    bool          monitoringEnabled; /* Monitoring is supported on this device or not?        */
    bool          inversionEnabled;  /* Signal inversion is supported on the signal or not?   */
    bool          reverseEnabled;    /* Signal reverse is supported on the signal or not?     */
} Hbr_Signal_Routing_t;

/*
 *********************************************************
 * Array stores the routing information of all HBr signals
 * Defined in hbr_auto_conf.c
 * Ref: Hbr_Signal_t
 *********************************************************
 */
extern const Hbr_Signal_Routing_t hbr_Signal_Routing[];

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool Hbr_IntSetOutDtyCyc(Hbr_Signal_t signal, sint16 duty_s16, bool isImmediate_b);
extern bool Hbr_IntSetOutPeriod(Hbr_Signal_t signal, uint32 period_u32, bool isImmediate_b);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

#endif   /* HBR_LAYER_USED */

#endif   /* _HBR_PRIV_H */
