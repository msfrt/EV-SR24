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
 * $Filename__:epmsrv_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NF72FE$ 
 * $Date______:17.11.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmsrv_prot$ 
 * $Variant___:1.20.0$ 
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
 * 1.20.0; 0     17.11.2008 NF72FE
 *   Initial import from Clearcase 
 *      File name: epmsrv_prot.h
 *      Version: \main\basis\b_Epm\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMSRV_PROT_H
#define _EPMSRV_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  protected header for EPM service routines
 *
 * \scope INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 * State information Error indicator for crankshaft signal.
 * \arg 1..24           - numTDCMIAP (number of TDC backward for MIAP)
 * \arg EXTRAPOLATION   - Extrapolation
 * \arg ERRORSTGY       - Error strategy
 * \arg ERRORCRS        - Error crankshaft signal
 * \arg ERRORMIAP       - Error MIAP
 */
#define EPMSRV_EXTRAPOLATION    26
#define EPMSRV_ERRORSTGY        253
#define EPMSRV_ERRORCRS         254
#define EPMSRV_ERRORMIAP        255


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
extern bool EpmSrv_IntervLOpen(sint16 min, sint16 x, sint16 max);
extern bool EpmSrv_IntervROpen(sint16 min, sint16 x, sint16 max);
extern bool EpmSrv_IntervClsd(sint16 min, sint16 x, sint16 max);

#endif
