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
 * $Filename__:epmcas_adap_prot.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:restructuring of FC for improved diagnosis documentation and 
 *             maintenance$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TUC2SI$ 
 * $Date______:30.11.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcas_adap_prot$ 
 * $Variant___:1.26.0$ 
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
 * 1.26.0; 0     30.11.2011 TUC2SI
 *   Enhancement of adaptation strategies for the calibration phase
 * 
 * 1.24.0; 1     02.03.2011 TUC2SI
 *   MISRA warning commented
 * 
 * 1.24.0; 0     18.02.2011 TUC2SI
 *   new interface in EpmCaS_Adap
 * 
 * 1.23.0; 0     26.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _EPMCAS_ADAP_PROT_H
#define _EPMCAS_ADAP_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * protected header-file for camshaft. The variables and defines declared here could be used in
 * every EPM-file
 *
 * \scope               INTERN
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes to declare system constants
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/** States of EpmCaS_stRefAdap */
enum EpmCaS_stRefAdap_t
{
    EPMCAS_NOREQREFADAP,            // no reference adaption requested
    EPMCAS_REQREFADAP,              // reference adaption requested
    EPMCAS_REFADAPWRITE,            // result of reference adaption write to EEP
    EPMCAS_REFADAPSTOP,             // reference adaption requested
    EPMCAS_REFADAPERR               // reference adaption result is outside the tolerance
};


__PRAGMA_USE__epm__50ms_1s__RAM__arr8__START
/* MISRA RULE 1.2 VIOLATION: this is only extern statement, declaration is in c file */
extern enum   EpmCaS_stRefAdap_t EpmCaS_stRefAdap [];  // reference adaption request
__PRAGMA_USE__epm__50ms_1s__RAM__arr8__END

/*
 ***************************************************************************************************
 *Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern EpmCaS_stAdap_t EpmCaS_CheckRefAdapState(enum EpmHCaS_numCaS_t  numCaS);
__PRAGMA_USE__CODE__epm__HighSpeed__END
#endif
