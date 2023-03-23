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
 * $Filename__:eec_pub.h$ 
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
 * $Name______:eec_pub$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: eec_pub.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _EEC_PUB_H
#define _EEC_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              eec_pub.h: calibration software - public headerfile
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */

/*
 *********************************************************************
 * Defines
 *********************************************************************
 */

/* for backward compatibility to older SYC version only, TO BE REMOVED */
#define EEC_PCPESTOP
#define Eec_StopPCPE()  Eec_Shutdown()
/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */

/*
 *********************************************************************
 * Prototypes
 *********************************************************************
 */
__PRAGMA_USE__CODE__csw__LowSpeed__START
extern void Eec_Init(void);
extern void Eec_Shutdown(void);
__PRAGMA_USE__CODE__csw__LowSpeed__END

/* _EEC_PUB_H */
#endif
