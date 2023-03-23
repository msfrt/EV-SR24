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
 * $Filename__:i14229_cdtc_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_cdtc_pub$ 
 * $Variant___:1.1.0$ 
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
 * 1.1.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: I14229_CDTC_PUB
 *      Variant: B_BASSVR.6.0.0
 *      Revision: 0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229_CDTC_PUB_H
#define _I14229_CDTC_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      module header file for the service I14229_Cdtc()
 *
 * \scope               [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void I14229_Cdtc(void *Config_pv, DiagCom_Msg_t *Msg_ps);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END
#endif /* _I14229_CDTC_PUB_H */
