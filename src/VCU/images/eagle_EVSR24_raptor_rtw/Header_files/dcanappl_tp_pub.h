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
 * $Filename__:dcanappl_tp_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:19.12.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:dcanappl_tp_pub$ 
 * $Variant___:8.8.0$ 
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
 * 8.8.0; 0     19.12.2008 MXA2SI
 *   Migrated from clearcase : B_DIAG_Conf.8.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef     _DCANAPPL_TP_PUB_H
#define     _DCANAPPL_TP_PUB_H


/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */

/*MISRARULE 90 VIOLATION: */
#define Dcan_TpSetRxTxFuncPtr(addr)       {DcanTp_rxFunc_pf = (addr)->Tp_rxFunc_p; \
                                           DcanTp_txFunc_pf = (addr)->Tp_txFunc_p;}
/*
 ***************************************************************************************************
 *    External data
 ***************************************************************************************************
 */

__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern Tp_rxFuncPtr_t           DcanTp_rxFunc_pf;
extern Tp_txFuncPtr_t           DcanTp_txFunc_pf;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END
/*
 ***************************************************************************************************
 *    Function prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__diagcom__NormalSpeed__START
void          Dcan_TpRegisterMsg        (uint8  numLMsgNo_u8, uint8   *buffer_pu8,                \
                                         uint16 len_u16, uint8  srcAddr_u8, uint8   destAddr_u8);
uint8         Dcan_TpGetMsgState        (uint8 numLMsgNo_u8, uint8 mask);
void          Dcan_TpAllocateMsgBuffer  (uint8 numLMsgNo_u8, uint8 reserveCode);
uint8         Dcan_TpGetDisconnectState (uint8 numLMsgNo_u8);
uint16        Dcan_TpGetMsgLen          (uint8 numLMsgNo_u8);
uint8*        Dcan_TpGetRxBufPtr        (uint8 numLMsgNo_u8);
uint8         Dcan_TpGetSrcAddr         (uint8 numLMsgNo_u8);
uint8         Dcan_TpGetDestAddr        (uint8 numLMsgNo_u8);
void          Dcan_TpConfMultipleResp   (uint8 numLMsgNo_u8, bool multipleState_b );
Tp_StatusType Dcan_TpCopySwitchBuffer   (uint8 numLMsgNo_u8, uint8* newBuffer, uint16 newLen);
Tp_StatusType Dcan_TpCallTxFunc         (uint8 hnd, uint16 size);
void          Dcan_TpResetChannel       (uint8 numLMsgNo_u8);
uint32        Dcan_TpGetLastReqRxTime   (uint8 numLMsgNo_u8);
void          Dcan_TpSetTxState         (uint8 numLMsgNo_u8);
void          Dcan_TpErrorCallback      (uint8 numLMsgNo_u8 , Tp_StatusType  ErrorInd );
void          Dcan_TpSetIdleState       (uint8 numLMsgNo_u8);
__PRAGMA_USE__CODE__diagcom__NormalSpeed__END

#endif /* _DCAN_TPAPPL_H */
