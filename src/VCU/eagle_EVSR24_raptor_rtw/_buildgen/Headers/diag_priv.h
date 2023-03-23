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
 * $Filename__:diag_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JMH5KOR$ 
 * $Date______:16.01.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:diag_priv$ 
 * $Variant___:8.9.1$ 
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
 * 8.9.1; 0     16.01.2014 JMH5KOR
 *   Supported APIs for the RCMS00890100 Bugfix:Low priority protocol 
 *   pre-emption over high priority protocol when high priority protocol is in 
 *   WAIT state is moved from diag_priv.h to diag_sess_pub.h.
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diag_priv.h
 *      Version: \main\12
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diag_priv.h
 *      Version: \main\12
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _DIAG_PRIV_H
#define _DIAG_PRIV_H

/*!
 *********************************************************************
 * \moduldescription
 *      Private header file for session layer
 *
 * \scope  INTERN
 *********************************************************************
 */






/*
 **************************************************************************************************
 *    Type definitions
 **************************************************************************************************
 */

typedef void (*Diag_State_t)(void);

/* Defenition of state arrays */
enum
{
 DIAG_RECEIVE_STATE,
 DIAG_SEND_STATE,
 DIAG_SENDAGAIN_STATE,
 DIAG_AGAIN_STATE,
 DIAG_WAIT_STATE,
 DIAG_WAITEND_STATE,
 DIAG_RINGWAIT_STATE
};

enum
{
 DIAG_RP_WAIT_STATE,
 DIAG_HS_WAIT_STATE,
 DIAG_RP_SEND_STATE,
 DIAG_HS_RECEIVE_STATE,
 DIAG_HS_SEND_STATE
};

/*
 **************************************************************************************************
 *    External data
 **************************************************************************************************
 */

/* MISRA RULE 104 VIOLATION:   Using non-const pointer to function  */
__PRAGMA_USE__diagcom__10ms__constant__arr32__START
extern Diag_State_t const Diag_rphsStateArray_cpf[];
__PRAGMA_USE__diagcom__10ms__constant__arr32__END
/* MISRA RULE 104 VIOLATION:   Using non-const pointer to function  */
__PRAGMA_USE__diagcom__10ms__RAM__s32__START
extern Diag_State_t Diag_state_pf;
extern Diag_State_t Diag_rphsState_pf;
__PRAGMA_USE__diagcom__10ms__RAM__s32__END

__PRAGMA_USE__diagcom__10ms__constant__arr32__START
extern Diag_State_t const Diag_stateArray_cpf[];
__PRAGMA_USE__diagcom__10ms__constant__arr32__END

__PRAGMA_USE__diagcom__10ms__RAM__x8__START

extern bool         Diag_stIniRequestBuffer_b;

extern bool         Diag_stWarmStart_b;
__PRAGMA_USE__diagcom__10ms__RAM__x8__END
__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern uint8*       Diag_dBuffer_pu8;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END
/* The actual WakeupInterface. It's state is STIMU_ACTIVE or STIMU_OK. */
__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern const WakeupInterface (*Diag_dWup_pcs);
__PRAGMA_USE__diagcom__10ms__RAM__x32__END
/* The actual medium's virtual table. It will be returned in the function
 * GetActive as active medium to the caller.
 */
__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern DataLinkVirtualTable* Diag_mediumVirtTable_ps;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END
/* This variable must be set if the service should be called
 * in the states: Diag_Sendagain and Diag_Again. Whith other
 * words, the Diag state machine's state will be not changed,
 * unless Diag_stCallServiceAgain_b is true. */
__PRAGMA_USE__diagcom__10ms__RAM__x8__START
extern bool         Diag_stCallServiceAgain_b;

/* The response pending code */
extern uint8        Diag_responsePendingCode_u8;

/* The busy request code */
extern uint8        Diag_busyRequestCode_u8;

extern bool         Diag_stHandShakeError_b;

extern bool         Diag_stEventService_b;

extern bool         Status_StReceiving_b;

/* Ring buffer transmission status variables */
extern uint8        Diag_stRingBufTx_u8;  /* Ring Buffer Tx. status: enable or not */
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
void Diag_Receive (void);
void Diag_Send    (void);
void Diag_Sendagain(void);
void Diag_Again   (void);
void Diag_Wait    (void);
void Diag_WaitEnd (void);
void Diag_Rp_Wait (void);
void Diag_Rp_Send (void);
void Diag_Hs_Send (void);
void Diag_Hs_Receive (void);
void Diag_Hs_Wait(void);
void Diag_RingWait(void);
void Diag_reset (void);

extern void Diag_Distributor(void);
extern void Diag_IniComState(void);
extern const DataLinkVirtualTable * Diag_GetActiveMedium(void);
extern void Diag_sendWarmResetResponse (void);

__PRAGMA_USE__CODE__diagcom__NormalSpeed__END

#define Diag_iniBufferRequested() (Diag_stIniRequestBuffer_b)

/*
 **************************************************************************************************
 *    Implementation
 **************************************************************************************************
 */


#endif /* _DIAGPI_H */
