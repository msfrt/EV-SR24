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
 * $Filename__:epm_spd_prot.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PIE2SI$
 * $Date______:12.10.2011$
 * $Class_____:SWHDR$
 * $Name______:epm_spd_prot$
 * $Variant___:1.33.0$
 * $Revision__:2$
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
 * 1.33.0; 2     12.10.2011 PIE2SI
 *   Update after integration:
 *   remove system constant from header files
 * 
 * 1.33.0; 1     31.08.2011 PIE2SI
 *   Update after vehicle test
 * 
 * 1.33.0; 0     18.07.2011 PIE2SI
 *   Checkin for first review and testing
 * 
 * 1.26.0; 0     09.04.2010 PIE2SI
 *   Update after review
 * 
 * 1.25.0; 1     18.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * 1.25.0; 0     17.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPM_SPD_PROT_H
#define _EPM_SPD_PROT_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
/* special subroutine for SSM3 prediction software */
extern bool EpmSpd_GetNEng(sint16 phiStart, uint16 numInc, sint32* nEngHiRes);

#endif
