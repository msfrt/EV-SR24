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
 * $Filename__:diag_distrib_pub.h$ 
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
 * $Name______:diag_distrib_pub$ 
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
 *      File name: diag_distrib_pub.h
 *      Version: \main\9
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _DIAG_DISTRIB_PUB_H
#define _DIAG_DISTRIB_PUB_H

/*!
 *********************************************************************
 * \moduldescription
 *      Private header for Diag  service distributor
 *
 * \scope  INTERN
 *********************************************************************
 */



/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */

/* Status of search: */
#define DIAG_ST_NOTFOUND_DB8   0              /* Service identifier not found                   */
#define DIAG_ST_SUPPORTED_DB8  MBIT0           /* Service identifier exists in table             */
#define DIAG_ST_OPMODE_OK_DB8  MBIT1           /* Service is supported in current operation mode */
#define DIAG_ST_DIAMODE_OK_DB8 MBIT2           /* Service is supported in current diag. mode     */


/* SID of escape code service: */
#define DIAG_NEGR_D_ESCCODE_DU8    0x80

/* Positions of parameters in request: */
#define DIAG_NEGR_D_MP_MSSID       0x00

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* Pointer to current configuration structure     */
__PRAGMA_USE__diagcom__10ms__RAM__x32__START

extern const DiagCom_ConfDistr_t* Diag_ConfDistr_pcs;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END

#endif /* _DIAG_DISTRIB_H */
