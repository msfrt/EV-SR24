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
 * $Filename__:dcan_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:HMA2KOR$ 
 * $Date______:01.04.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:dcan_pub$ 
 * $Variant___:9.9.1$ 
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
 * 9.9.1; 0     01.04.2011 HMA2KOR
 *   Migrated from clearcase with the mentioned bugfix:
 *   RCMS00816973: BugFix: Protocol preemption is not handled properly if low 
 *   priority protocol arrives 
 *   in the middle of high priority request
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dcan_pub.h
 *      Version: \main\9
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          header file for Dcan layer
 *
 * \scope   INTERN
 *********************************************************************
 */

#ifndef _DCAN_PUB_H
#define _DCAN_PUB_H

/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */

#define DCAN_TEMP_BUF_SIZE  8

/*
 **************************************************************************************************
 *    Type definitions
 **************************************************************************************************
 */


/* return values */
/* function pointer types */
typedef void                        ( Dcan_func_t )( void );
typedef Dcan_func_t *               Dcan_func_p;
typedef Dcan_func_p                 Dcan_callBack_p;
typedef Dcan_func_p const           Dcan_funcPtrTab_cs[];

typedef bool ( Dcan_canSwitchBdRate_t)(uint8 numDev,uint32 bdRate);

typedef Dcan_canSwitchBdRate_t*     Dcan_canSwitchBdRatePtr_t;

/* Enumeration for elements of Dcan_ti_pu32 array */
typedef enum
{
    DCAN_P2MIN,         /* P2CAN_Server   */
    DCAN_P2MAX,     /* P2CAN_Client   */
    DCAN_P3MAX,     /* S3Server        */
    NUMDCANTIMINGS
} Dcan_tiIndex_e;

typedef uint32 Dcan_ti_t[NUMDCANTIMINGS];


typedef const struct
{
    uint8                 numTPMsgNo_u8;
    DiagCom_MediumID_t    mediumID_u8;
    uint8                 protocolId_u8;
    uint8                 preemptable_u8; /* set to 0 if the protocol is not pre-emptable */
    uint32                defaultBaudrate_u32;
    Diag_Addr_t const     (*dAddresses_pcu8);    /* array of supported addresses    */
    uint8                 WorkAddrCnt_u8;            /* counter for the size of address table   */
    void                  (*workInit_pf)(void);
    Dcan_ti_t const       (*DefaultTimings);  /*  Indexd of the default timing parameter */
    Dcan_ti_t const       (*TimingLimits);        /*  Indexd of the Limits of timing parameter */
    Tp_apiFunctions_t     *tpApiFunctions_pcs;
    bool                  (*CheckCondition_pf)(void);  /* protocol specific condition check fn */
    DiagCom_ConfDistr_t const   *SrvTable_pcs;  /* protocol specific service table */
} Dcan_addrConfig_t;


typedef const struct
{
    uint8                   numAddrConfig_cu8;
    Dcan_addrConfig_t       *iniAddresses_pcs;
    Diag_WakeUp_e           ( *reInitWakeup_pf) (DataLinkVirtualTable **interfaceTable_pps,
                                                                bool     *iniBufferRequest);
    Dcan_canSwitchBdRatePtr_t  canSwitchBdRate_pf;
    void                    (*sessionTimeout_pf)(void); /* Function pointer (sessionTimeout_pf())
                                                which will be called on session/protocol timeout */
    uint8                   indexDefaultProtocol_cu8;  /* here configure which block in the address
                                                    config table (which protocol) is the default
                                                    protocol started after reset. */
    uint16                  ringbuffermaxlength_cu16;  /* maximun possible ring buffer length using
                                                        CAN as medium                            */
    uint8*                  tempBuffer_pu8;          /*  pointer to temp buffer for reception */
} Dcan_conf_t;

/*
 **************************************************************************************
 *    Variables
 **************************************************************************************
 */

__PRAGMA_USE__diagcom__10ms__RAM__x8__START
extern  uint8   Dcan_numROEMsgNo_u8;
extern  bool    Dcan_stReceiving_b;
extern  bool    Dcan_stReceiveTx_b;
__PRAGMA_USE__diagcom__10ms__RAM__x8__END

/*
 **************************************************************************************************
 *    Function prototypes
 **************************************************************************************************
 */
__PRAGMA_USE__CODE__diagcom__NormalSpeed__START
extern Diag_WakeUp_e    Dcan_Wakeup        ( DataLinkVirtualTable** interfaceTable_pps,
                      bool *iniBufferRequest);

extern Diag_WakeUp_e    Dcan_Wakeup_ReIni  ( DataLinkVirtualTable** interfaceTable_pps,
                      bool *iniBufferRequest);

extern void             Dcan_ResetWakeup   ( void );
__PRAGMA_USE__CODE__diagcom__NormalSpeed__END

__PRAGMA_USE__diagcom__10ms__constant__x32__START
extern Diag_WakeUp_e   (*const Dcan_ReInitWakeup_pf)(DataLinkVirtualTable** interfaceTable_pps,
                                                    bool *iniBufferRequest);

__PRAGMA_USE__diagcom__10ms__constant__x32__END
__PRAGMA_USE__CODE__diagcom__NormalSpeed__START

extern void             Dcan_InitLayer    ( Dcan_conf_t *conf_pcs );

extern void             Dcan_ResetP3Timer ( void );

extern void             Dcan_SwitchBaudrateInit( void );


extern void           Dcan_WorkInit            (void);


__PRAGMA_USE__CODE__diagcom__NormalSpeed__END

/*
 **************************************************************************************************
 *    Implementation
 **************************************************************************************************
 */


#endif /* _DCAN_PUB_H */
