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
 * $Filename__:i14229appl_confprot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DUE2ABT$
 * $Date______:26.08.2011$
 * $Class_____:SWHDR$
 * $Name______:i14229appl_confprot$
 * $Variant___:18.0.0$
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
 * 18.0.0; 1     26.08.2011 DUE2ABT
 *   modification after maserati integration
 * 
 * 18.0.0; 0     20.09.2010 DUE2ABT
 *   new version for maserati
 * 
 * 6.6.0; 0     30.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: i14229appl_confprot.h
 *      Version: \main\basis\b_CORE\15
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _I14229APPL_CONFPROT_H
#define _I14229APPL_CONFPROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *            Private configuration header for I14229 module
 *
 * \scope              [INTERN]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "i14229_seca_prot.h"
#include "i14229_cc_prot.h"

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* configuration for I14229 dynamically define by data identifier - read memory by address format*/
/* uint32 record_name[max record entries + End of table] */
__PRAGMA_USE__bassvr__10ms__RAM__arr32__START
extern uint32 I14229_Dddi_RecordF300_u32[];
extern uint32 I14229_Dddi_RecordF301_u32[];
extern uint32 I14229_Dddi_RecordF302_u32[];
__PRAGMA_USE__bassvr__10ms__RAM__arr32__END
/* DID table in RAM */
__PRAGMA_USE__bassvr__10ms__constant__s32__START
#ifdef _I14229_DDDI_PUB_H
extern const I14229_Dddi_DIdVarTable_t I14229_Dddi_DIdVarTable_s[];
#endif
#ifdef _I14229_RDBI_PUB_H
extern const I14229_Rdbi_DIdTable_t I14229_Rdbi_DIdTable_cs[];
#endif
__PRAGMA_USE__bassvr__10ms__constant__s32__END
/* Storage area of LId's within a request  */
__PRAGMA_USE__bassvr__10ms__RAM__s32__START
#ifdef _I14229_RDBI_PUB_H
extern I14229_Rdbi_VarStatic_t I14229_Rdbi_ArrayDid_s[];
#endif
__PRAGMA_USE__bassvr__10ms__RAM__s32__END
/* reset accept function */
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern uint8 I14229_Reset_Accept(const void* Config_pv,uint8 index_u8);

/* diagnostic session control - functions */
extern uint16 I14229_Dsc_DefaultStart(void);
extern uint16 I14229_Dsc_AllowClientId(uint32 ctDiaSess_u32);
#ifdef _I14229_DDDI_PUB_H
extern uint16 I14229_Dddi_ReadByDId(void *Statics_pv, uint8 stMode_u8);
#endif
#ifdef _I14229_RDBI_PUB_H
extern const I14229_Rdbi_DIdTable_t * I14229_Dddi_GetConfStPtr(uint16 * MaxDIds_u16);
#endif
extern uint16 I14229_Dsc_Extended(void);
extern uint16 I14229_Dsc_ProgStart(void);
extern uint16 I14229_RC_CheckProgPreConditions(DiagCom_Msg_t *Msg_ps);
extern void I14229_Dsc_FillSessRecordCB(DiagCom_Msg_t *Msg_ps);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

#endif
