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
 * $Filename__:dsmaux_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:PKA2SI$ 
 * $Date______:07.10.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:dsmaux_inf$ 
 * $Variant___:2.14.0$ 
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
 * 2.14.0; 0     07.10.2011 PKA2SI
 *   support AUTOSAR InitMonitorForEvent callbacks
 * 
 * 2.9.0; 1     01.12.2010 HAHILLNE
 *   Correction of contitional expression in 2ECU context
 * 
 * 2.9.0; 0     26.11.2010 HAHILLNE
 *   merge of both 2SG versions added
 * 
 * 2.6.0; 0     18.03.2010 ABM1KOR
 *   (303391): Header file correction.
 * 
 * 2.3.0; 0     16.06.2009 PKA2SI
 *   CC-LABEL B_DSM.14.1.0
 *   ResponseOnEvent extension
 *   TCSORT freezeframe timing
 * 
 * 2.2.0; 0     09.12.2008 PKA2SI
 *   import from CC : dsmaux_inf.h  \main\basis\b_CORE\3
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmaux_inf.h
 *      Version: \main\10
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DSMAUX
 * \scope   API
 *********************************************************************
 */

#ifndef _DSMAUX_INF_H
#define _DSMAUX_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
#include "eep.h"            /* non volatile RAM support                                           */
#include "dsm.h"
#include "syc.h"
#include "os.h"             /* ActivateTask, OS_DSM_4hDCY_PostDrv_Task, OS_DSM_4hDCY_Ini_Task     */

/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */
#include "dsm_confprot.h"
#include "dsmaux_prot.h"
#include "dfc_prot.h"
#include "dfes_prot.h"
#include "dinh_prot.h"
#include "dfes_prot.h"
#include "dsmdur_prot.h"
#include "dsmrdy_prot.h"
#include "diumpr_prot.h"
#include "dfes_dia_prot.h"          /* DFES_ctVisible visible to be extended in fcmclear          */
#include "ddrc_prot.h"



#ifndef _LIBRARYABILITY_H
#include "dsmaux_dat.h"     /* data specification       */
#include "dsched_cal_dat.h" /* provide CMBTYP_SY and DSCHED_COEOM_SY for dsched_prot.h */
#include "dsched_prot.h"    /* needs CMBTYP_SY and DSCHED_COEOM_SY */
#include "dsmaux_msg.h"     /* include  of MCOP-header  */
#include "dsmaux_auto_confprot.h"  /* DSMAUX response on event call back function definitions     */
#include "dsmaux_auto_confpriv.h"  /* DSMAUX number of triggers nedded for initialization         */
#include "ddrc_auto_prot.h"
#include "dsmconf_auto_confprot.h"  /* include the configuration header */
#include "dfes_auto_pub.h"          /* publish freeze frame size for TCSORT (copy freeze frame to single cyl. entry) */
#endif

#if (DSM_DSM2SG_SY > 0) 
#if (DSM2SG_ASCETINF_SC == 0)

#if (DSM2SG_FID_SY > 0)
#include "dcompfid_prot.h"    /* Header to access ReInit interface of DCompFid module */
#endif

#if (DSM2SG_DFC_SY > 0)
#include "dcompdfc_prot.h"     /* Header to access ReInit interface of DCompdfc module */
#endif

#if (DSM2SG_DSQ_SY > 0)
#include "dcompdsq_prot.h"    /* Header to access ReInit interface of DCompDsq module */
#endif

#endif /* ((DSM2SG_ASCETINF_SC == 0))- 2SG support in manual coding requested */
#endif /* (DSM_DSM2SG_SY > 0) */

#endif
