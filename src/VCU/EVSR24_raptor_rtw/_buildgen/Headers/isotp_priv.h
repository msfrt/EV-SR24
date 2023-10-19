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
 * $Filename__:isotp_priv.h$ 
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
 * $Name______:isotp_priv$ 
 * $Variant___:1.5.0$ 
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
 * 1.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: isotp_priv.h
 *      Version: \main\22
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 


#ifndef _ISOTP_PRIV_H
#define _ISOTP_PRIV_H


/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */

#define ISOTP_PCI_SF             0x00       /* PCI byte of Single Frame          */
#define ISOTP_PCI_FF             0x10       /* PCI byte of First  Frame          */
#define ISOTP_PCI_CF             0x20       /* PCI byte of Consecutive Frame     */
#define ISOTP_PCI_FC             0x30       /* PCI byte of Flow Control          */

#define ISOTP_FC_CTS             0x00       /* Clear To Send                     */
#define ISOTP_FC_WTS             0x01       /* Wait  To Send                     */
#define ISOTP_FC_OVR             0x02       /* Overflow Flow Control             */

#define ISOTP_STATE_IDLE         0x00       /* idle state                        */
#define ISOTP_STATE_WTSFCTX      0x01       /* wait for FC tx after FF           */
#define ISOTP_STATE_CFRX         0x02       /* reception of CF                   */
#define ISOTP_STATE_TXCONFIRM    0x04       /* AsAr timeout monitoring state     */
#define ISOTP_STATE_WAITFC       0x10       /* wait for flow control             */
#define ISOTP_STATE_SENDCF       0x20       /* transmission of CF                */
#define ISOTP_STATE_CTSFCTX      0x40       /* wait for FC tx after FF           */
#define ISOTP_STATE_OVRFCTX      0x80

#define ISOTP_IDLE               0x00       /* Idle state                        */
#define ISOTP_RX_PROGRESS        0x01       /* Receive in progress               */
#define ISOTP_TX_PROGRESS        0x02       /* Transmit in progress              */

#define ISOTP_MAXREQLEN(Buf_len)    ((Buf_len) + 1) /*For adding the SID while checking the lemgth*/


/*
 ***************************************************************************************************
 *    External data
 ***************************************************************************************************
 */

__PRAGMA_USE__tp__1_5ms__RAM__x32__START
extern IsoTp_constParam_t*      IsoTp_constParam_p;          /* ptr to glbl cfg struct */
__PRAGMA_USE__tp__1_5ms__RAM__x32__END

__PRAGMA_USE__tp__1_5ms__RAM__x8__START
extern uint8                    IsoTp_numMsg_u8;             /* nof. TP messages       */
__PRAGMA_USE__tp__1_5ms__RAM__x8__END

__PRAGMA_USE__CODE__tp__NormalSpeed__START
extern void            IsoTp_RxMsg               ( uint16 msgHandle_u16,uint32* msgId_pu32, \
                                                   uint8* msgDlc_pu8,uint8* msgData_pu8);
extern void            IsoTp_TxCallback          ( uint16 msgHandle_u16,uint32 *msgId_pu32, \
                                                   uint8 *msgDlc_pu8,  uint8 *msgData_pu8);
__PRAGMA_USE__CODE__tp__NormalSpeed__END


/*
 ***************************************************************************************************
 *    Function prototypes
 ***************************************************************************************************
 */

void            IsoTp_SetConfig           (IsoTp_constParam_t* constParam_p );

__PRAGMA_USE__CODE__tp__HighSpeed__START
void            IsoTp_SendCf              (uint8 idx_u8);
void            IsoTp_SendFlowControl     (uint8 idx, uint8 fctype);
__PRAGMA_USE__CODE__tp__HighSpeed__END

uint8           IsoTp_DummyCalcSrcAddr    (uint8 unused);
uint32          IsoTp_DummySetID          (uint8 unused);

__PRAGMA_USE__CODE__tp__NormalSpeed__START
void            IsoTp_CopyData            (uint8*  src, uint8*  dest, uint8 len);
__PRAGMA_USE__CODE__tp__NormalSpeed__END

#endif
