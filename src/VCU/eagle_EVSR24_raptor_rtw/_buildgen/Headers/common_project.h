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
 * $Filename__:common_project.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:Project specific definitions for all C files$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:ZIC2SI$
 * $Date______:25.04.2012$
 * $Class_____:SWHDR$
 * $Name______:common_project$
 * $Variant___:1.0.0_DGSB_69$
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
 * 1.0.0_DGSB_69; 1     25.04.2012 ZIC2SI
 *   added workaround for BC_MO
 * 
 * 1.0.0_DGSB_69; 0     21.10.2011 ZIC2SI
 *   adapted to DGSB
 * 
 * 1.0.0_69; 3     19.08.2011 ZIC2SI
 *   workaround DSM_ResetDebRepIMPL added
 * 
 * 1.0.0_69; 2     13.05.2011 ZIC2SI
 *   added medc_fixconst_custom_dat.h + execon.h
 * 
 * 1.0.0_69; 1     23.08.2010 ZIC2SI
 *   adaption for CEL4-alternative (adapted to EOS1.15)
 * 
 * 1.0.0_69; 0     30.06.2010 ZIC2SI
 *   initial version
 * 
 * 1.0.0_HMC_ME1792; 0     10.03.2009 NOK2FE
 *   
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/




#ifndef _COMMON_PROJECT_H
#define _COMMON_PROJECT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *           Common header file
 *
 * \scope    INTERN
 ***************************************************************************************************
 */
/*--------------------------------------------------------------------------------------------------
 * Includes
 *--------------------------------------------------------------------------------------------------
 */
#include "gconf_sy_dat.h"

#include "medc_fixconst_custom_dat.h"
#include "execon.h"


/* workaround due to usage of DSM_ResetDebRepIMPL instead of DSM_RESETDEBREPIMPL */
#define DSM_ResetDebRepIMPL(DFC_XYZ,FAULT,ATTRIBUTES) \
                            (DSM_ResetDebRep(*(DFC_XYZ),(FAULT),(ATTRIBUTES)		   		))

/* workaround for bad reference in MoxTrqLos_Comp until it is fixed */
#define GET_VehMot_stPrpCrCtl (VehMot_stPrpCrCtl)


#endif /* _COMMON_PROJECT_H */
