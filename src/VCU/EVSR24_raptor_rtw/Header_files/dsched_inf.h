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
 * $Filename$ 
 * 
 * $Author$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User$ 
 * $Date______:14.02.2011$ 
 * $Class_____:SWHDR$ 
 * $Name$ 
 * $Variant___:1.4.0$ 
 * $Revision$ 
 * $Typ$ 
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
 * 1.4.0; 0     14.02.2011 ZUZ2SI
 *   change include in header files after swb in another PVER
 * 
 * 1.3.0; 4     22.11.2010 HAHILLNE
 *   Merge to support 2 different 2ECU features
 *   (from DSMBas_2.8.1_WORKINT - GC : DSMBas2ECU  1.0.0; 5
 *    and DSMBas_2.8.0_VW_2ECU - GC : DSMBas2ECU  2.0.0; 0)
 * 
 * 1.3.0; 3     01.09.2010 HAHILLNE
 *   warning removal
 *   (hidden system constant)
 * 
 * 1.3.0; 2     11.08.2010 ABM1KOR
 *   Changes for DSCHED correction for 2 ECU.
 * 
 * 1.3.0; 1     18.03.2010 ABM1KOR
 *   (303391): Changes to implement 2 ECU interface feature.
 * 
 * 1.3.0; 0     13.03.2010 ABM1KOR
 *   (303391): Changes to implement 2 ECU interface feature.
 * 
 * 1.2.0; 0     05.08.2009 FTT2SI
 *   In case less than 2 scheduled FIds are used structure DSCHED_Excl is not 
 *   created.
 * 
 * 1.0.0_1; 0     11.12.2008 PKA2SI
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DSCHED
 * \scope   API
 *********************************************************************
 */

#ifndef _DSCHED_INF_H
#define _DSCHED_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */
 
#include "common.h"             /* for some projects the system constant COENG_EOMALTI_SC 
                                                                            is needed in coeng.h */
#include "coeng.h"              /* for constants COEOM_OPMODE_MSK and COEOM_STAGE_MSK*/
#include "srvb.h"             /* include service lib, because the dsm headers use its macros      */
#include "memlay.h"
#include "dsm.h"              /* Interface Type definitions, equates and prototypes               */



/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */

#include "dsm_confprot.h"
#include "dfc_prot.h"      /* Status array prototype                                              */
#include "dfes_prot.h"     /* Mask and access macros for the status words from the lib            */
#include "dinh_prot.h"     /* Mask and access macros for the status words from the lib            */
#include "dsq_prot.h"      /* Mask and access macros for the status words from the lib            */

#include "dsmrdy_prot.h"   /* prototype for readiness clear                                       */
#include "dinh_prot.h"     /* prototype to clear mode 7 visibility in FIds                        */
#include "dfp_prot.h"      /* prototype to clear mode 7 visibility in FIds                        */
#include "dsmaux_prot.h"   /* access to cache-d started condition (prior DSM_GetStStrtEnd())      */



#ifndef _LIBRARYABILITY_H
#include "dsched_eval_dat.h"
#include "dsched_cal_dat.h"
#include "dsched_prot.h"   /* needs CMBTYP_SY and DSCHED_COEOM_SY */
#include "dsched_auto_confpriv.h"
#include "dsched_inl.h"

#if (HESRV_HETYP_SY == 1)
#include "dsched_msg.h"
/* same dependency of system constants as in pavast; same usage of system constants in code */
/* only if (HESRV_HETYP_SY == HESRV_MASTERSLAVE) the following system constants are visible */
#if ((DSM_DSM2SG_SY > 0) && (DSM2SG_FID_SY > 0))
#if (DSM2SG_ASCETINF_SC > 0)
#ifndef _DCOMPFID_GETFIDCOMP_IMPL_
  #define _DCOMPFID_GETFIDCOMP_IMPL_   /* workaround: define declaration of DCOMPFID_GETFIDCOMP_IMPL_getFidComp */
#endif
#include "dcompfid.h"
#else
#include "dcompfid_prot.h"
#endif

#endif /* ((DSM_DSM2SG_SY > 0) && (DSM2SG_FID_SY > 0))  - 2SG support for FIDs */
#endif /* 2SG case  */

#endif

#endif
