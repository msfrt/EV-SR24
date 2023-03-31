/*********************************************************************************************
 *   This is an automatically generated file! D o  n o t   e d i t ! 
 *   
 *   The file is created by the DSM scripts based on the information given by the
 *   MSR modul definition files.
 *  
 *********************************************************************************************/
/* definitions of response of event macros */
#ifndef _DSMAUX_AUTO_CONFPROT_H
#define _DSMAUX_AUTO_CONFPROT_H

/**************************************************************/ 

/* marker for time triggers: */ 
#define DSMAUX_CT_DTRG_TIME    1 
/* marker for drving cycle triggers : */ 
#define DSMAUX_CT_DTRG_DC    1 
/* marker for drving cycle triggers which require FSS behaviour: */ 
#define DSMAUX_CT_DTRG_DC_FSS    7 
/* marker for driving cycle time triggers : */ 
#define DSMAUX_CT_DTRG_DC_TIME_FSS    7 
/* marker for driving cycle time triggers : */ 
#define DSMAUX_CT_DTRG_DC_TIME    7 



/* number of DemInitMonitorForEventCallbacks : */ 
#define DSM_INIT_MONITORS_FUNCTION_NR    0 

/* number of DemInitMonitorForEventCallbacks : */ 
#define DSM_INIT_MONITORS_PORTS_NR    0 

#if(DSM_INIT_MONITORS_FUNCTION_NR >0)
/* extern to function table : */ 
typedef uint8 Std_ReturnType; /* local typedef as long as autosar datatype header is unclear */ 
extern Std_ReturnType (*const DSM_InitMonEvtFunc[]) (uint8 InitMonitorKind);
#endif
#if(DSM_INIT_MONITORS_PORTS_NR >0)
/* include prototypes for port function calls */ 
#include "Rte_Dem.h"
#endif
/* Prototypes of used call back functions  */


/* defines of call back functions depending on the event types */



/* defines of internal constant depending on the event types */

/* define of internal constant of event DSM_EVT_TYP_DFP_SUSFRZTAKE  */
#define DSM_EVT_TYP_DFP_SUSFRZTAKE_CALL 0

/* define of internal constant of event DSM_EVT_TYP_DFP_SUSFRZ_CPYFRM  */
#define DSM_EVT_TYP_DFP_SUSFRZ_CPYFRM_CALL 0

/* define of internal constant of event DSM_EVT_TYP_DFP_SUSFRZ_CPYTO  */
#define DSM_EVT_TYP_DFP_SUSFRZ_CPYTO_CALL 0

/* define of internal constant of event DSM_EVT_TYP_ENVTAKE  */
#define DSM_EVT_TYP_ENVTAKE_CALL 0

/* define of internal constant of event DSM_EVT_TYP_FRZTAKE  */
#define DSM_EVT_TYP_FRZTAKE_CALL 0

/* define of internal constant of event DSM_EVT_TYP_IMDTDETN_ERR  */
#define DSM_EVT_TYP_IMDTDETN_ERR_CALL 0

/* define of internal constant of event DSM_EVT_TYP_NEW_ENTRY  */
#define DSM_EVT_TYP_NEW_ENTRY_CALL 0

/* define of internal constant of event DSM_EVT_TYP_RESTORE_PDTC  */
#define DSM_EVT_TYP_RESTORE_PDTC_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHK_ERR  */
#define DSM_EVT_TYP_STCHK_ERR_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHK_ERRDEB  */
#define DSM_EVT_TYP_STCHK_ERRDEB_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHK_OK  */
#define DSM_EVT_TYP_STCHK_OK_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHK_OKHEALED  */
#define DSM_EVT_TYP_STCHK_OKHEALED_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHK_OKHEALED_2_ERRDEB  */
#define DSM_EVT_TYP_STCHK_OKHEALED_2_ERRDEB_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHNG_ERR2OK  */
#define DSM_EVT_TYP_STCHNG_ERR2OK_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHNG_ERR2OK_ACT  */
#define DSM_EVT_TYP_STCHNG_ERR2OK_ACT_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHNG_HEAL2DLT  */
#define DSM_EVT_TYP_STCHNG_HEAL2DLT_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STCHNG_OK2ERR  */
#define DSM_EVT_TYP_STCHNG_OK2ERR_CALL 0

/* define of internal constant of event DSM_EVT_TYP_STENTRY_CONFIRMED  */
#define DSM_EVT_TYP_STENTRY_CONFIRMED_CALL 0

/* define of internal constant of event DSM_EVT_TYP_TSTFLAG_ERR  */
#define DSM_EVT_TYP_TSTFLAG_ERR_CALL 0

/* define of internal constant of event DSM_EVT_TYP_TSTFLAG_OK  */
#define DSM_EVT_TYP_TSTFLAG_OK_CALL 0


/* Prototypes of used InitMonitorForEvent callback functions in AR31 format */

#endif

