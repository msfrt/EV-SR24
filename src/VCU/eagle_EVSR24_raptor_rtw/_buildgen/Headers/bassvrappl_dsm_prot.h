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
 * $Filename__:bassvrappl_dsm_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:07.02.2012$
 * $Class_____:SWHDR$
 * $Name______:bassvrappl_dsm_prot$
 * $Variant___:34.0.0$
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
 * 34.0.0; 0     07.02.2012 JAG2ABT
 *   Added new routine for DSM access
 * 
 * 6.6.0; 0     29.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: bassvrappl_dsm_prot.h
 *      Version: \main\basis\b_CORE\15
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _BASSVRAPPL_DSM_PROT_H
#define _BASSVRAPPL_DSM_PROT_H

/**
 ***************************************************************************************************
 * moduledescription
 *         private header file DSM interface functions for stored data transmission functional unit
 *
 * scope               [CONF]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* Dsm interface functions for stored data transmission functional unit */

/* set the visibility filter for the groups of DTCs. default ALL will be set
   This function must be called once before processing DSM functions */
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void BasSvrAppl_DSM_SetFltVisibility(uint idFlt_ui);
/* clear all DTC entry stored in Fault code memory server */
extern uint BasSvrAppl_DSM_ClrAll(void);
/* clear single or group of DTC entry stored in Fault code memory server (FCM)*/
extern uint BasSvrAppl_DSM_ClrEntry(uint idxEntry_ui);
/* Get DTC ID (entry) available in the server */
extern uint BasSvrAppl_DSM_GetDTC(uint idxEntry);
/*Get numberof DTCs avaialable in the server */
extern uint BasSvrAppl_DSM_GetNumDTC(void);
/* query status of clear task */
extern uint BasSvrAppl_DSM_GetStClr(void);

extern uint BasSvrAppl_DSM_GetEnvAvl(void);
/* Status of DTC Control Setting Service */
extern uint8 BasSvrAppl_DSM_GetCtlSetting(uint8 DTCSettingType_u8, uint8* dataBuffer_pu8,
                                                                uint16 numBytesIncSetType_u16);
/* set the visibility filter to all. This function must be called once
   before processing DSM functions */
extern void BasSvrAppl_DSM_SetVisFltALL(void);
extern uint16  BasSvrAppl_DSM_GetSigDID(uint16 numSignal_u16);

/* number of supported DFCs */
extern uint BasSvrAppl_DSM_GetNumDFC(void);
/* Read the DTC for the Check  */
extern uint BasSvrAppl_DSM_GetDTCDFC(uint idxDFC_ui);

/* functions for clearing group of DTCS */
extern uint BasSvrAppl_DSM_AddClrList(uint idxEntry_ui);
extern uint BasSvrAppl_DSM_ClrList(void);

/* functions for I14229 - RDTC sub function 09 */
extern uint BasSvrAppl_DSM_GetSeverity(uint idxDFC_ui);
extern uint BasSvrAppl_DSM_GetFuncUnit(uint idxDFC_ui);

/* Function for checking the DFC Class*/
extern uint8 BasSvrAppl_DSM_Chk_DFC_Class(uint16 ReqDTC_u16,uint8 TempidxDTC_u8);

__PRAGMA_USE__CODE__bassvr__NormalSpeed__END
/* _BASSVRAPPL_DSM_PROT_H */
#endif
