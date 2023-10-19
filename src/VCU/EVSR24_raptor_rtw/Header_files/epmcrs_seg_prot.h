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
 * $Filename__:epmcrs_seg_prot.h$
 *
 * $Author____:TUC2SI$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:CRH5KOR$
 * $Date______:02.07.2014$
 * $Class_____:SWHDR$
 * $Name______:epmcrs_seg_prot$
 * $Variant___:1.35.4$
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
 * 1.35.4; 0     02.07.2014 CRH5KOR
 *   RQONE00400969 ::(CP340112) implementing CEP in the diesel 1115 - EPM
 * 
 * 1.33.0; 1     02.05.2012 IOM2FE
 *   Update of EpmCrS_TTOutput 
 *   : output variable of tooth times can be selected
 * 
 * 1.33.0; 0     04.04.2012 IOM2FE
 *   Update of EpmCrS_TTOutput 
 *   : output variable of tooth times can be selected
 * 
 * 1.29.0; 0     17.05.2011 IOM2FE
 *   New subfunction EpmCrS_TTOutput
 *   Update for CRS_TAA_SY
 * 
 * 1.28.0; 0     23.12.2010 IOM2FE
 *   - service routine EpmCrS_tiSegCalc
 *   - array size of EpmCrS_tiInc_mp limited to EPMHCRS_NUMINC
 *   - consideration of the case (EPM_SPD_CALC_SY == 2)
 * 
 * 1.26.0; 0     19.07.2010 MRC2FE
 *   Transformation of global c-variables EpmCrS_phiSeg and EpmCrS_ctInc to 
 *   messages.
 * 
 * 1.23.0; 0     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMCRS_SEG_PROT_H
#define _EPMCRS_SEG_PROT_H


/*
 ***************************************************************************************************
 * Atomic generated includes not allowed but no other way is possible
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * extern-declarations for owned messages
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCrS_TTOutput( void );
extern void EpmCrS_TTMeasure( void );
extern bool EpmCrS_tiSegCalc (uint8 stSigMode, uint16 numTeeth, sint32 *tiSeg);
__PRAGMA_USE__CODE__epm__HighSpeed__END


#endif
