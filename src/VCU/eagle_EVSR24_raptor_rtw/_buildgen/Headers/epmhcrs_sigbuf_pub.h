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
 * $Filename__:epmhcrs_sigbuf_pub.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:APJ1KOR$
 * $Date______:25.09.2013$
 * $Class_____:SWHDR$
 * $Name______:epmhcrs_sigbuf_pub$
 * $Variant___:1.33.0$
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
 * 1.33.0; 1     25.09.2013 APJ1KOR
 *   -
 * 
 * 1.33.0; 0     20.09.2013 APJ1KOR
 *   RQONE00229485_MWF_Merkmal_EPM_M276LA_VC15_AEV23529
 * 
 * 1.32.0; 0     29.04.2013 MLA8SI
 *   Extension of TTMeasure functionality
 * 
 * 1.31.0; 0     25.07.2011 OMO2FE
 *   A function to access tooth-times with a higher-resolution is needed for the
 *    function CmbEst_CmbEgyEvln.
 *   
 *   EpmHCrS_GetBufSeg: Already Present - Get segment times from the buffer 
 *   [micro-sec]
 *   EpmHCrS_GetBufSegHi : Has to be created - Get segment times from the buffer
 *    with high resolution [nano-sec]
 *   
 * 
 * 1.27.0; 0     27.01.2011 PAW2FE
 *   Append increased quantization of TAA correction values from sint8 to sint16
 *    dependent to the system constant TWCOR_HIRES_SC.
 * 
 * 1.25.0; 0     25.03.2010 PAW2FE
 *   Moving Headers needed for function EpmHCrS_GetBufPerTAA () to public-header
 *    instead of protected-header.
 * 
 * 1.23.0; 0     16.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCRS_SIGBUF_PUB_H                                  /* protect multiple includes  */
#define _EPMHCRS_SIGBUF_PUB_H



/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

 
 /*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


 
/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
// Pointer to the EpmHCrS_ctInc
extern volatile uint16 * const EpmHCrS_ctInc_cpu16;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
//services from epmhcrs_sigbuf
extern uint8  EpmHCrS_GetBufSeg( sint16 phiAbs, sint16 phiLen, sint32* tiSeg);
extern uint8  EpmHCrS_GetBufSegHi( sint16 phiAbs, sint16 phiLen, sint32* tiSeg);
extern uint8  EpmHCrS_GetBufSegFBC( sint16 phiAbs, sint16 phiLen, sint32* tiSeg);
extern uint8  EpmHCrS_GetBufSegRaw( sint16 phiAbs, sint16 phiLen, sint32 *tiSeg);
extern uint8  EpmHCrS_GetBufSegOBD( sint16 numInc, sint32 *tiSeg, uint32 *tiStampInc);
extern uint8  EpmHCrS_GetBufPerRaw( sint16 numPer, sint32* tiPer);
extern uint8  EpmHCrS_GetBufNumPer( sint16 numPer, sint32 tiPer[], sint16 *idxWr, uint16 *ctInc);
extern uint8  EpmHCrS_GetBufNumPerRaw( sint16 numPer, sint32 tiPer[], sint16 *idxWr, uint16 *ctInc);
extern uint8  EpmHCrS_GetBufSegLenMIAP( sint16 phiBase, sint32 tiSeg, sint16* phiLen, uint8 numTDCMIAP);
extern sint16 EpmHCrS_GetAgBufLen( sint16 phiAbs);
extern sint16 EpmHCrS_GetNumValidTooth( void );
extern void EpmHCrS_TAA_Ini( void);
extern void EpmHCrS_SetTAABuf( const sint8 IncCorBuf[], sint numIncCorBuf, sint idxIncCorBuf);
extern void EpmHCrS_SetTAABufHiRes( const sint16 IncCorBuf[], sint numIncCorBuf, sint idxIncCorBuf);
extern uint8 EpmHCrS_GetBufPerTAA (sint16 numPer, sint32* tiPer);
/* _EPMHCRS_SIGBUF_PUB_H */
#endif
