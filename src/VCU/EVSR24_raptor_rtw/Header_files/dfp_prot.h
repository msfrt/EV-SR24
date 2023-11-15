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
 * $Filename__:dfp_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:09.03.2012$
 * $Class_____:SWHDR$
 * $Name______:dfp_prot$
 * $Variant___:2.3.0$
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
 * 2.3.0; 0     09.03.2012 MMO2FE
 *   Compiler Independence warnings removal
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfp_prot.h
 *      Version: \main\5
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DFP_PROT_H
#define _DFP_PROT_H


/**
 ***************************************************************************************************
 * \moduledescription
 *             DSM - Legacy interface
 *
 * \scope      INT
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define  SY_DSM_FA_FADEMSK_ENABLE  0
#define  SY_DSM_SHADOW_ENABLE     0









/*
 ***************************************************************************************************
 * Variable Prototypes
 ***************************************************************************************************
 */

extern const uint16 DSM_DfpToDFC[];

__PRAGMA_USE__dsm__1_5ms__constant__arr8__START
extern const uint8 DSM_UDStep[];
__PRAGMA_USE__dsm__1_5ms__constant__arr8__END

__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16 DSM_ctCfgDFPMax;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END

/*
 ***************************************************************************************************
 * prototype definitions
 ***************************************************************************************************
 */

/* belongs to legacy interface - therefore here declared -> otherwise InfoTyp public  */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
InfoType DFES_GetInfoLine(uint idxFES);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END



#endif
