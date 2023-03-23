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
 * $Filename__:epmhint_intgen_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GSU2KOR$
 * $Date______:12.10.2011$
 * $Class_____:SWHDR$
 * $Name______:epmhint_intgen_inf$
 * $Variant___:1.26.0$
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
 * 1.26.0; 1     12.10.2011 GSU2KOR
 *   Changes after review
 * 
 * 1.26.0; 0     06.10.2011 GSU2KOR
 *   RCMS00982183
 *   14-TDC ISR: interrupt service routine to call different tasks every 45 CrS
 * 
 * 1.23.0; 0     21.10.2009 OMO2FE
 *    Remove dependency to processor-type from Epmhint_intgen_inf.h
 * 
 * 1.22.0; 0     17.07.2009 TUC2SI
 *   transfer from CC
 * 
 * 1.18.1; 0     31.10.2008 MAH5COB
 *   Initial import from Clearcase 
 *      File name: epmhint_intgen_inf.h
 *      Version: \main\basis\b_Epm\2
 * 
 * 1.18.0; 0     31.07.2008 NESTORADMINSDOM
 *   EPM 18 migrated from CC
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHINT_INTGEN_INF_H
#define _EPMHINT_INTGEN_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * interface header for epmhint_intgen
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "epm.h"
#include "cpu.h"
#include "srvb.h"
#include "os.h"			/* ActivateTask function is used */


#include REG_CPS_H	 



/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

#include "epm_prot.h"


#ifndef _LIBRARYABILITY_H
#include "epmhint_intgen_dat.h"
#include "epm_msg.h"
#define EPMHCRS_INC_SELECT
#endif

#ifndef EPMHWE_SWTCPU_SY
  #error >>>> 'EPMHWE_SWTCPU_SY' undefined !
#endif

#if (EPMHWE_SWTCPU_SY == 0) // PCP
 #include "pcp_mnemonics.h"
 #include "pcp.h"
 #include "pcp_pramdef_auto_conf.h"
#endif

/*
 ***************************************************************************************************
 * Other Inline Functions
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Library functions with inline/no-inline implementation (always include the code)
 ***************************************************************************************************
 */


/* _EPMHINT_INTGEN_INF_H                                                                          */
#endif
