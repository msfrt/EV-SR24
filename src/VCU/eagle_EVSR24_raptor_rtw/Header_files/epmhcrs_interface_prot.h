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
 * $Filename__:epmhcrs_interface_prot.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:OMO2FE$
 * $Date______:16.12.2009$
 * $Class_____:SWHDR$
 * $Name______:epmhcrs_interface_prot$
 * $Variant___:1.23.0$
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
 * 1.23.0; 0     16.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCRS_INTERFACE_PROT_H
#define _EPMHCRS_INTERFACE_PROT_H


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
//services from epmhcrs_interface
extern void EpmHCrS_SetPlausWin(sint32 tiGlitchFilter, uint8 facIncPlausLow,
                                uint8 facIncPlausHigh, uint8 facGapPlausHigh);
extern void EpmHCrS_SetGapCrit(uint8 facGapCrit1, uint8 facGapCrit2);
extern void EpmHCrS_SetIgnLimit(sint32 tiIgnSig, uint8 numIgnInc, sint16 nMinInc, sint16 nMaxInc);
extern void EpmHCrS_CodedGap_Ini (void);
extern void EpmHCrS_Gap12_Ini (void);
extern void EpmHCrS_IAS_Ini (void);
extern void EpmHCrS_DGI_Ini (void);
extern void EpmHCrS_CY30_Ini (void);


/* _EPMHCRS_INTERFACE_PROT_H */
#endif
