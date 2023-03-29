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
 * $Filename__:dio_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MTR1COB$ 
 * $Date______:15.05.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:dio_pub$ 
 * $Variant___:1.18.0$ 
 * $Revision__:2$ 
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
 * 1.18.0; 2     15.05.2013 MTR1COB
 *   review command updates
 * 
 * 1.18.0; 1     13.05.2013 MTR1COB
 *   Function namechanged  OL dia
 * 
 * 1.18.0; 0     08.05.2013 MTR1COB
 *   OL diagnostic switchoff and switch  function implement for CJ950 an d R2S2
 * 
 * 1.12.0; 0     15.02.2011 MMO1SI
 *   Fix compiler warning in cy100 part
 * 
 * 1.11.0; 0     12.11.2010 AHT2FE
 *   Add DioGetErrorInfoFunc
 * 
 * 1.9.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: dio_pub.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _DIO_PUB_H
#define _DIO_PUB_H


/**
 ***************************************************************************************************
 * \moduledescription
 * Public headerfile of DIO module.
 *
 * \scope          API
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Typedefs
 ***************************************************************************************************
 */

/** Type used for identifying digital signals */
typedef uint16 Dio_Signal_t;

/** Dio_SignalDesc_t, structure for the description of a signal.
    This structure is used for runtime routing via signal configuration tables.
    The signal will be routed using module specific Get- or Set function given by pointers.
 */
typedef struct
{
           bool         (*Get_pfn)(uint16, uint16);          /**< Ptr to 'Get' func.              */
           void         (*Set_pfn)(uint16, uint16, bool);    /**< Ptr to 'Set' func.              */
           void         (*ClearErr_pfn)(uint16, uint16);     /**< Ptr to 'ClearErr' func.         */
           uint32       (*GetErrorInfo_pfn)(uint16, uint16); /**< Ptr to 'GetErrorInfo' func.     */
           uint32       (*TstImp_pfn)(uint16, uint16);       /**< Ptr to 'Tst_Imp' func.          */
           uint8        (*OLcurrSwOff_pfn)(uint16, uint16);  /**< Ptr to 'Switch OFF OL diagnostic' func.          */		
	       uint8        (*OLcurrSwOn_pfn)(uint16, uint16);   /**< Ptr to 'Switch ON OL diagnostic' func.          */
           const        DSM_FIdType  *xFId;                  /**< Name of Function Identifier     */
           uint16       numPort_u16;                         /**< Port resp. ID on module         */
           uint16       numPin_u16;                          /**< Pin resp power stage on module  */
}Dio_SignalDesc_t;


/** Dio_FuncTab_t, structure of functions and required parameters routed during runtime.
    This structure is used for runtime routing via configuration table using module specific
    SwitchOff- resp. TstImp function given by function pointers.
 */
typedef struct
{
           void         (*SwitchOff_pfn)(uint16, uint16, bool); /**< Ptr to 'SwitchOff' func.     */
           uint32       (*TstImp_pfn)(uint16, uint16);          /**< Ptr to 'Tst_Imp' func.       */
           uint16       numPort_u16;                            /**< Port resp. ID on module      */
           uint16       numPin_u16;                             /**< Pin resp. power stage        */
           bool         stInv_b;                                /**< Invertation of signal        */
}Dio_FuncTab_t;


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
/** Resource tables for digital input signals defined in dio_conf.c. The table has to be defined as
    'public' because macros in configuration file 'dio_conf.h' may rout directly to the entry in
    configuration table when signal should be changed by calibration also.
 */
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Dio_SignalDesc_t Dio_SignalInTable_ca[];

/** Resource tables for digital output signals defined in dio_conf.c. The table has to be defined as
    'public' because macros in configuration file 'dio_conf.h' may rout directly to the entry in
    configuration table when signal should be changed by calibration also.
 */
extern const Dio_SignalDesc_t Dio_SignalOutTable_ca[];

/** Resource table for digital output signals defined in dio_conf.c.
    Table is used for SwitchOff resp. TstImp functionality implemented as functions.
 */
extern const Dio_FuncTab_t Dio_FuncTable_ca[];
__PRAGMA_USE__hwe__1_5ms__constant__s32__END


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
/* Standard I/O interfaces */
extern bool        Dio_Get(Dio_Signal_t xSignal);
extern void        Dio_Set(Dio_Signal_t xSignal, bool stValue_b);

/* Interface functions for Power Stage diagnosis */
extern uint32      Dio_GetErrorInfo(Dio_Signal_t xSignal);
extern uint32      Dio_GetErrorInfoFunc(Dio_Signal_t xSignal);
extern uint32      Dio_TstImp(Dio_Signal_t xSignal);
extern uint32      Dio_TstImpFunc(Dio_Signal_t xSignal);
extern uint8       Dio_OLcurr_SwOff(Dio_Signal_t xSignal);
extern uint8       Dio_OLcurr_SwOn(Dio_Signal_t xSignal);
extern void        Dio_ClearErr(Dio_Signal_t xSignal);
extern void        Dio_SwitchOffFunc(Dio_Signal_t xSignal);

/* Standard I/O interfaces via configuration tables */
extern bool        Dio_GetIndirect(const Dio_SignalDesc_t* signal_pcs);
extern void        Dio_SetIndirect(const Dio_SignalDesc_t* signal_pcs, bool stValue_b);
extern uint32      Dio_GetErrorInfoIndirect(const Dio_SignalDesc_t* signal_pcs);
extern uint32      Dio_TstImpIndirect(const Dio_SignalDesc_t* signal_pcs);
extern uint8       Dio_OLcurr_SwOffIndirect(const Dio_SignalDesc_t* signal_pcs);
extern uint8       Dio_OLcurr_SwOnIndirect(const Dio_SignalDesc_t* signal_pcs);
extern void        Dio_ClearErrIndirect(const Dio_SignalDesc_t* signal_pcs);
extern DSM_FIdType Dio_GetFIdIndirect(const Dio_SignalDesc_t* signal_pcs);

/* I/O interfaces via "Dummy" module */
extern bool        Dio_DummyGet(uint16 numPort_u16, uint16 numPin_u16);
extern void        Dio_DummySet(uint16 numPort_u16, uint16 numPin_u16, bool stValue_b);
extern uint32      Dio_DummyGetErrorInfo(uint16 numPort_u16, uint16 numPin_u16);
extern uint32      Dio_DummyTstImp(uint16 numPort_u16, uint16 numPin_u16);
extern uint8       Dio_DummyOLcurrSw(uint16 numPort_u16, uint16 numPin_u16);
extern void        Dio_DummyClearErr(uint16 numPort_u16, uint16 numPin_u16);
extern void        Dio_DummySwitchOff(uint16 numPort_u16, uint16 numPin_u16, bool stInv_b);

/* Bidirectional I/O interfaces */
extern bool        Dio_GetBiDir(Dio_Signal_t xSignal);
extern void        Dio_SetBiDir(Dio_Signal_t xSignal, bool stValue_b);

/* ADC I/O interfaces */
extern bool        Dio_AdcGet(uint16 numAdc_u16, uint16 numChannel_u16);
extern bool        Dio_Cic751AdcGet(uint16 numAdc_u16, uint16 numChannel_u16);
extern bool        Dio_Cy100AdcGet(uint16 idxDevice_ui, uint16 idxChannel_ui);

/* DSM I/O interfaces */
extern DSM_FIdType Dio_GetFId(Dio_Signal_t xSignal);

/* Initialize process for I/O */
extern void        Dio_Proc_Ini(void);

/* Interface to get hardware relevant information of signal */
extern uint16      Dio_GetNumPort(Dio_Signal_t xSignal);
extern uint16      Dio_GetNumPin(Dio_Signal_t xSignal);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* _DIO_PUB_H */
#endif
