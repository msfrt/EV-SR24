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
 * $Filename__:ccpappl_priv.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:HMA2KOR$
 * $Date______:24.03.2011$
 * $Class_____:SWHDR$
 * $Name______:ccpappl_priv$
 * $Variant___:7.13.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 7.13.0; 0     24.03.2011 HMA2KOR
 *   Platform: Migrated from Clearcase - CCP.14.0.0
 *   Changes includes the following CREQs in Clearcase
 *   RCMS00976696: Adapter module canif_ccp.c moved to CCP
 * 
 * 7.10.0; 0     06.08.2009 MXA2SI
 *   Migrated from platform
 *   B_CCP.10.0.0
 *   B_CCP_Conf.10.0.0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/



#ifndef _CCPAPPL_PRIV_H
#define _CCPAPPL_PRIV_H


/**
 ***************************************************************************************************
 * \moduldescription
 *                   Configuration header file for CCP module
 *
 * \scope  CONF
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 *    Includes
 ***************************************************************************************************
 */
#if(CCP_CAN_DRIVER == CUBAS_CANIF)
__PRAGMA_USE__CODE__ccp__HighSpeed__START

extern uint8 Ccp_CanIf_ReadTxMsgBuffer (PduIdType pdu_id);
__PRAGMA_USE__CODE__ccp__HighSpeed__END
#endif


#endif
