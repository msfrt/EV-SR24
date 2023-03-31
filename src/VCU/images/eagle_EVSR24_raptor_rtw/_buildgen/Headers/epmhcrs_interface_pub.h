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
 * $Filename__:epmhcrs_interface_pub.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PIE2SI$
 * $Date______:10.06.2010$
 * $Class_____:SWHDR$
 * $Name______:epmhcrs_interface_pub$
 * $Variant___:1.25.0$
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
 * 1.25.0; 0     10.06.2010 PIE2SI
 *   KEEPDGISYNC: new interrupt type definition
 * 
 * 1.23.0; 0     16.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCRS_INTERFACE_PUB_H                                  /* protect multiple includes  */
#define _EPMHCRS_INTERFACE_PUB_H



/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
#define EPMHCRS_AGCNT_MSK   0x7FFF      /**< mask (length) of 720 deg in angle base */
#define EPMHCRS_AGCNT_MAX   0xFFFFFFUL  /**< max. value of angle base 720 deg * 512 revolutions */
#define EpmHCrS_GetAngleCnt (EPMHCRS_GPTAX.GTTIM1)  /**< get value of the the angle-clock */



/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
//services from epmhcrs_interface
extern sint32 EpmHCrS_CnvAg( sint32 phiAbs, sint32 phiLimit);
extern sint32 EpmHCrS_CnvAgCor( sint32 phiAbs, sint32 phiLimit);
extern sint16 EpmHCrS_CnvGT12AgAbs( sint32 GT1Ticks);
extern sint16 EpmHCrS_CnvGT12AgAbsCor(sint32 GT1Ticks);
extern sint16 EpmHCrS_GetCurrPos( void);
extern sint16 EpmHCrS_GetCurrPosCor( void);
extern void EpmHCrS_DisblNewSync (bool flag);
extern void EpmHCrS_KeepDGISync (bool flag);

/* _EPMHCRS_INTERFACE_PUB_H */
#endif
