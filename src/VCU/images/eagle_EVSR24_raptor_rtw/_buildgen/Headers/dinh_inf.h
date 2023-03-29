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
 * $Filename__:dinh_inf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:HAHILLNE$ 
 * $Date______:22.11.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:dinh_inf$ 
 * $Variant___:2.10.0$ 
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
 * 2.10.0; 0     22.11.2010 HAHILLNE
 *   Merge to support 2 different 2ECU features
 *   (from DSMBas_2.8.1_WORKINT - GC : DSMBas2ECU  1.0.0; 5
 *    and DSMBas_2.8.0_VW_2ECU - GC : DSMBas2ECU  2.0.0; 0)
 *   
 * 
 * 2.8.0; 0     29.03.2010 ABM1KOR
 *   Change in header file structuring. No functional changes done.
 * 
 * 2.6.0; 1     18.03.2010 ABM1KOR
 *   (303391): Header file correction.
 * 
 * 2.6.0; 0     13.03.2010 ABM1KOR
 *   (303391): Changes to implement 2 ECU interface feature.
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dinh_inf.h
 *      Version: \main\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/*
 *********************************************************************
 * \moduldescription
 *          Interface header file for DFES
 * \scope   API
 *********************************************************************
 */

#ifndef _DINH_INF_H
#define _DINH_INF_H


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "srvb.h"             /* include service lib, because the dsm headers use its macros      */
#include "cpu.h"              /* enable / disable interrupt definition                            */
#include "memlay.h"
#include "dsm.h"              /* Interface Type definitions, equates and prototypes               */


/*
 ***************************************************************************************************
 * Protected Includes
 ***************************************************************************************************
 */

#include "dfc_prot.h"         /* Status array prototype                                           */
#include "dfes_prot.h"        /* Mask and access macros for the status words from the lib         */
#include "dinh_prot.h"         /* Mask and access macros for the status words from the lib        */
#include "dsq_prot.h"          /* Mask and access macros for the status words from the lib        */
#include "dinh_prot.h"     /* prototype to clear mode 7 visibility in FIds */
#include "dfp_prot.h"      /* prototype to clear mode 7 visibility in FIds */

#ifndef _LIBRARYABILITY_H
 /* include the damos headerfile */
#include "dinh_dat.h"
 /* include the configuration header */
#include "dsmconf_auto_confprot.h"

#if (HESRV_HETYP_SY == HESRV_MASTERSLAVE)
  /* used in 2SG system */
#if (DSM_DSM2SG_SY > 0)
   /* DSM support for 2SG requested */

#if (DSM2SG_DFC_SY > 0)
    /* 2SG services for DFCs supported */
#if (DSM2SG_ASCETINF_SC > 0)
     /* ASCET coded 2SG support */
#ifndef _DCOMPDFC_CLRMODE7VIS_IMPL_ 
  #define _DCOMPDFC_CLRMODE7VIS_IMPL_   /* workaround: define declaration of DCOMPDFC_CLRMODE7VIS_IMPL_clrMode7Vis */
#endif
#include "dcompdfc.h"
#else
      /* manual coded 2SG support */
#include "dcompdfc_prot.h"
#endif
#endif /*(DSM2SG_DFC_SY > 0) - DFC support*/


#if (DSM2SG_FID_SY > 0)
    /* 2SG services for FID supported */
#if (DSM2SG_ASCETINF_SC > 0)
     /* ASCET coded 2SG support */
#ifndef _DCOMPFID_GETFIDCOMP_IMPL_
  #define _DCOMPFID_GETFIDCOMP_IMPL_   /* workaround: define declaration of DCOMPFID_GETFIDCOMP_IMPL_getFidComp */
#endif
#include "dcompfid.h"
#else
/* manual coded 2SG support */
#include "dcompfid_prot.h"
#endif
#endif /* (DSM2SG_FID_SY > 0) - FID support */

#endif /* (DSM_DSM2SG_SY > 0) - DSM support for 2SG */

#include "dinh_msg.h"
#endif /* HESRV_HETYP_SY == HESRV_MASTERSLAVE */ 
       
#endif /* non libraryability */


#endif
