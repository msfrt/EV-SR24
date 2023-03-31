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
 * $Filename__:devlib_src_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:CRA1KOR$ 
 * $Date______:28.05.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:devlib_src_pub$ 
 * $Variant___:1.143.0$ 
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
 * 1.143.0; 0     28.05.2012 CRA1KOR
 *   Warnings and errors removed.
 * 
 * 1.6.0; 0     05.08.2008 KLN1SI
 *   Initial import from Clearcase 
 *      File name: devlib_src_pub.h
 *      Version: \main\basis\b_DE_DevLib\6
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DEVLIB_SRC_PUB_H
#define _DEVLIB_SRC_PUB_H


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */
typedef struct
{
    sint16 uMin_C;          /* Threshold for SRC -Min detection */
    sint16 uMax_C;          /* Threshold for SRC -Max detection */
} DevLib_SRCDataMnMx;

typedef struct
{
    sint16 SRC_uMin;          /* Threshold for SRC -Min detection */
    sint16 SRC_uMax;          /* Threshold for SRC -Max detection */
} DevLib_SRCDataMnMx_STR;

typedef struct
{
    sint16 uMin_C;          /* Threshold for SRC -Min detection */
    sint16 uMax_C;          /* Threshold for SRC -Max detection */
    sint16 uOpn_C;          /* Threshold for SRC -Open detection */
} DevLib_SRCDataMnMxOp;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__devlib__HighSpeed__START
sint16 DevLib_SRCMnMx( sint16 uRaw
                      ,DSM_DFCType DFC_SRCMin
                      ,DSM_DFCType DFC_SRCMax
                      ,const DevLib_SRCDataMnMx* ptrSRCData
                      ,const SrvX_CurveS16_t Transf_CUR
                      ,sint32 T0);

sint16 DevLib_SRCMnMxOp( sint16 uRaw
                        ,DSM_DFCType DFC_SRCMin
                        ,DSM_DFCType DFC_SRCMax
                        ,DSM_DFCType DFC_SRCOpn
                        ,const DevLib_SRCDataMnMxOp* ptrSRCData
                        ,const SrvX_CurveS16_t Transf_CUR
                        ,sint32 T0);
__PRAGMA_USE__CODE__devlib__HighSpeed__END

#endif
