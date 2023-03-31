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
 * $Filename__:dme_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:HCJ2FE$
 * $Date______:09.08.2010$
 * $Class_____:SWHDR$
 * $Name______:dme_inf$
 * $Variant___:1.16.0$
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
 * 1.16.0; 1     09.08.2010 HCJ2FE
 *   DCACHE support
 * 
 * 1.16.0; 0     09.08.2010 HCJ2FE
 *   DCACHE Support
 * 
 * 1.15.0; 0     17.03.2010 JWI2SI
 *   support TC1793
 * 
 * 1.14.0; 0     23.11.2009 AWL2SI
 *   B_DME.14.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DME_INF_H
#define _DME_INF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      dme_inf.h: calibration software - interface headerfile
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "dme.h"

#include "cpu.h"
#include "memlay.h"
#include "memlay_friends.h"
#include "srvb.h"
#include "eec.h"
#include "eec_friends.h"

#include "reg.h"
#include REG_CSFR_H
#include REG_OVC_H

#if (MACHINE_TYPE == TC_1793)
#include REG_LMU_H
#else
#include REG_PMU_H
#endif

#if ((MACHINE_TYPE == TC_1797) || (MACHINE_TYPE == TC_1793))
#include REG_EBU_H
#endif

#ifndef _LIBRARYABILITY_H
#include "dme_dat.h"
/* _LIBRARYABILITY_H */
#endif


/*
 ***************************************************************************************************
 * Protected Includes (package wide includes)
 ***************************************************************************************************
 */

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

/* _DME_INF_H                                                                          */
#endif
