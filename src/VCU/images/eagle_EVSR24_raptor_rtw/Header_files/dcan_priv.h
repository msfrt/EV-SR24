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
 * $Filename__:dcan_priv.h$ 
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
 * $Name______:dcan_priv$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dcan_priv.h
 *      Version: \main\18
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 
 
/*!
 *********************************************************************
 * \moduldescription
 *          private header file for Dcan layer
 *
 * \scope   INTERN
 *********************************************************************
 */

#ifndef _DCAN_PRIV_H
#define _DCAN_PRIV_H

/*
 **************************************************************************************************
 *    Include files
 **************************************************************************************************
 */

#ifndef NOINLINE
#define NOINLINE
#endif




/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */


#define DCAN_STOP_PROTOCOL_REQUEST           0x01u
#define DCAN_TIMING_CHANGE_REQUEST           0x02u
#define DCAN_EXEC_FUNCTION_REQUEST           0x04u
#define DCAN_PENDING_P2MAX_REQUEST           0x08u
#define DCAN_BDRATE_CHANGE_REQUEST           0x10u

#define DCAN_P3MIN                           DIAG_MS_TO_TICKS_LIB( 0ul )
#define DCAN_P4MIN                           DIAG_MS_TO_TICKS_LIB( 5ul )

#define DEVIATION                            (19ul) /* in 0/00 */
#define DCAN_BAUDRATE_MIN(val)               ((val)-(((val)*DEVIATION)/1000ul))
#define DCAN_BAUDRATE_MAX(val)               ((val)+(((val)*DEVIATION)/1000ul))

/*
 **************************************************************************************************
 *    Type definitions
 **************************************************************************************************
 */

typedef enum
{
    DCAN_WORK_IDLE_E,
    DCAN_NO_PROTOCOL_E,
    DCAN_WORK_POSTINIT_E,
    DCAN_WAIT_FOR_P2MIN_E,
    DCAN_TX_IN_PROGRESS_E,
    DCAN_RX_IN_PROGRESS_E,
    DCAN_TX_RETRY_E
} Dcan_workStatus_t;


/*
 **************************************************************************************************
 *    External data
 **************************************************************************************************
 */

__PRAGMA_USE__diagcom__10ms__RAM__s32__START
extern         DataLinkVirtualTable     Dcan_interfaceTable_s;
__PRAGMA_USE__diagcom__10ms__RAM__s32__END

__PRAGMA_USE__diagcom__10ms__RAM__arr32__START

extern         DiagCom_ti_t                Dcan_reqTimings;
extern         DiagCom_ti_t                Dcan_tiDefault;
extern         DiagCom_ti_t                Dcan_tiLimit;
extern         DiagCom_ti_t                Dcan_currentTimings;
__PRAGMA_USE__diagcom__10ms__RAM__arr32__END

__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern const   Dcan_canSwitchBdRatePtr_t Dcan_canSwitchBdRate_pf;

extern         uint32                   Dcan_tiLastRx_u32;
extern         uint32                   Dcan_tiLastTx_u32;
extern         uint32                   Dcan_reqBaudrate_u32;

extern         Diag_WakeUp_e            Dcan_wakeUpRet_e;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END

__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern         Dcan_workStatus_t        Dcan_workStatus_e;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END

__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern         Dcan_conf_t              *Dcan_conf_pcs;
extern         Dcan_addrConfig_t        *Dcan_addrConfig_ps;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END

__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern         void                     (*Dcan_reqFunction_pf)(void);
__PRAGMA_USE__diagcom__10ms__RAM__x32__END

__PRAGMA_USE__diagcom__10ms__RAM__x8__START

extern         uint8                    Dcan_numAddrConfig_u8;
extern         uint8                    Dcan_testerAddress_u8;
extern         uint8                    Dcan_changeRequests_u8;
extern         uint8                    Dcan_reqPendingMode_b;
__PRAGMA_USE__diagcom__10ms__RAM__x8__END

__PRAGMA_USE__diagcom__10ms__constant__x8__START
extern         uint8 const              Dcan_Medium;
__PRAGMA_USE__diagcom__10ms__constant__x8__END

__PRAGMA_USE__diagcom__10ms__RAM__x8__START
extern         uint8                    Dcan_numTPMsgNo_u8;
extern         bool                     Dcan_txFinished_b;
__PRAGMA_USE__diagcom__10ms__RAM__x8__END



/*
 **************************************************************************************************
 *    Internal data
 **************************************************************************************************
 */


/*
 **************************************************************************************************
 *    Variables
 **************************************************************************************************
 */

/*
 **************************************************************************************************
 *    Function prototypes
 **************************************************************************************************
 */
__PRAGMA_USE__CODE__diagcom__NormalSpeed__START
uint8          Dcan_GetProtType         (void);

void           Dcan_TxRx                (uint8*,
                                         uint16,
                                         uint8*,
                                         uint16,
                                         uint8);
uint32         Dcan_GetTxTimeout        (void);
DiagCom_PrepRet_e Dcan_PrepareTimings      (DiagCom_ti_t*);
void           Dcan_SetTimings          (void);
DiagCom_ti_t*     Dcan_GetTimings          (DiagCom_tiMode_e);
void           Dcan_ExecFunction        (void(*)(void));
void           Dcan_ProtEnd             (void);
DiagCom_PrepRet_e   Dcan_PrepareBaudrate   (uint32 baudrate);
void           Dcan_SetBaudrate         (void);
uint32         Dcan_GetDefaultBaudrate  (void);
void           Dcan_GetKeyBytesDummy    (uint8  *unused);
void           Dcan_TerminateLayer      (void);

void           Dcan_ReqPendingCtrl      (bool pendingMode_b);
void           Dcan_DoChanges           (void);


bool           Dcan_WorkProcess         (void);


DiagCom_PrepRet_e Dcan_PrepareBaudrateDummy    (uint32  unused);
void           Dcan_SetBaudrateDummy        (void);
void           Dcan_SetTPapi                ( Dcan_addrConfig_t* );
void           Dcan_InitTimings             (Dcan_addrConfig_t*);
void           Dcan_SetConfig               ( Dcan_conf_t *conf_pcs );
void           Dcan_activateProt            (uint8 addrIndex_u8);
void           Dcan_initChannel             (uint8 addrIndex_u8);

__PRAGMA_USE__CODE__diagcom__NormalSpeed__END
/*
 **************************************************************************************************
 *    Implementation
 **************************************************************************************************
 */


#endif /* _DCAN_PRIV_H */
