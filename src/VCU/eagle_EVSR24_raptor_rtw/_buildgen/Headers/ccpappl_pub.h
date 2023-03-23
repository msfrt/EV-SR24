/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:ccpappl_pub.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:MXA2SI$
 * $Date______:06.08.2009$
 * $Class_____:SWHDR$
 * $Name______:ccpappl_pub$
 * $Variant___:7.10.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 7.10.0; 0     06.08.2009 MXA2SI
 *   Migrated from platform
 *   B_CCP.10.0.0
 *   B_CCP_Conf.10.0.0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CCPAPPL_PUB_H                                  /* protect multiple includes              */
#define _CCPAPPL_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      public header file for atomic component ccpappl_std
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
    #define CCP_CANTX_OK  (uint8)CAN_TX_OK       /* This is specific to BOSCH CAN Driver*/


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/* prototype for  memory adapter */
__PRAGMA_USE__CODE__ccp__HighSpeed__START

extern uint8  Ccp_CheckReadAddrMem (uint32 adpage_u32, uint8 numPage_u8, uint8 Size_u8, uint8* errorCode);
extern uint8  Ccp_WriteMem (uint32 addest_u32, uint8 destPage_u8, uint32 adSrc_u32,
                      uint8 Size_u8 , uint8* errorCode_pu8);
extern uint8  Ccp_ReadMem (uint32 adDest_u32, uint32 adSrc_u32, uint8 SrcPage_u8,
                      uint8 Size_u8, uint8* errorCode_pu8) ;
extern uint8  Ccp_SetAppPageMem (uint32  pageAddr, uint8 page, uint8* errorCode);
extern void   Ccp_GetAppPageMem (uint32* pageAddr, uint8* page, uint8* errorCode);
extern uint8  Ccp_BuildChecksum16Mem (uint32 adbase_u32, uint8 numPage_u8, uint32 Size_u32,
                                uint16* chksum_pu16, uint8* errorCode_pu8);
extern void   Ccp_MoveMem (uint32  adDest_u32 , uint8 destPage_u8,  uint32  adSrc_u32,
                    uint8 srcPage_u8 ,  uint32  size_u32 , uint8* errorCode_pu8) ;
__PRAGMA_USE__CODE__ccp__HighSpeed__END


/* Prototype to CAN adaptor functions */
__PRAGMA_USE__CODE__ccp__HighSpeed__START

extern bool    Ccp_RxMsgCan (uint16 msgHandle, uint8* Data_Field_PB ) ;
extern bool    Ccp_TxMsgwIDCan (uint16 MsgBufNr, uint32 ID, uint8* DataPtr) ;
extern uint32  Ccp__ReadMsgIdCan ( uint16 msgHandle ) ;
extern bool   Ccp_CanGetHandleStatus( uint16 Ccp_firstmsghandle, uint16 Ccp_lastmsghandle );
__PRAGMA_USE__CODE__ccp__HighSpeed__END




__PRAGMA_USE__CODE__ccp__LowSpeed__START
extern  void Ccp_Sess_Proc_Ini(void);
extern  void Ccp_Daq_Proc_100ms(void);
__PRAGMA_USE__CODE__ccp__LowSpeed__END

__PRAGMA_USE__CODE__ccp__HighSpeed__START
extern  void Ccp_Sess_Proc(void);
#if (CCP_1MS_DAQ == CCP_DAQ_ENABLE)
extern  void Ccp_Daq_Proc_1ms(void);
#endif
extern  void Ccp_Daq_Proc_2ms(void);
extern  void Ccp_DaqSync_Proc(void);
__PRAGMA_USE__CODE__ccp__HighSpeed__END

__PRAGMA_USE__CODE__ccp__NormalSpeed__START
extern  void Ccp_Daq_Proc_10ms(void);
__PRAGMA_USE__CODE__ccp__NormalSpeed__END

/* Following functions are required for CalWup Mode for Cold start testing */
__PRAGMA_USE__CODE__ccp__LowSpeed__START
extern   void  Ccp_SessCalWup_Proc_Ini(void);
__PRAGMA_USE__CODE__ccp__LowSpeed__END

__PRAGMA_USE__CODE__ccp__HighSpeed__START
extern   void  Ccp_SessCalWup_Proc(void);
extern   void  Ccp_DaqCalWup_Proc_2ms(void);
extern   void  Ccp_DaqCalWupSync_Proc(void);
__PRAGMA_USE__CODE__ccp__HighSpeed__END

__PRAGMA_USE__CODE__ccp__NormalSpeed__START
extern   void  Ccp_DaqCalWup_Proc_10ms(void);
__PRAGMA_USE__CODE__ccp__NormalSpeed__END

__PRAGMA_USE__CODE__ccp__LowSpeed__START
extern   void  Ccp_DaqCalWup_Proc_100ms(void);
__PRAGMA_USE__CODE__ccp__LowSpeed__END



/* Following Callback function is to check for Enabling/Disabling CCP depending on user specific condition */

__PRAGMA_USE__CODE__ccp__HighSpeed__START
extern   bool  CcpAppl_CheckCondition(void);
__PRAGMA_USE__CODE__ccp__HighSpeed__END


/*
 ***************************************************************************************************
 * Prototypes for functions which can be used as inline or normal C-implementation
 ***************************************************************************************************
 */


/* _CCPAPPL_PUB_H                                                                                 */
#endif
