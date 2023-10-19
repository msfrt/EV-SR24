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
 * $Filename__:epmcas_diag_prot.h$
 *
 * $Author____:TUC2SI$
 *
 * $Function__:restructuring of FC for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:TUC2SI$
 * $Date______:28.02.2011$
 * $Class_____:SWHDR$
 * $Name______:epmcas_diag_prot$
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
 * 1.25.0; 0     28.02.2011 TUC2SI
 *   documentation for sensor polarity check added
 * 
 * 1.23.0; 1     14.12.2009 CAD2SI
 *   Add feature sensor polarity check
 * 
 * 1.23.0; 0     26.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
#ifndef _EPMCAS_DIAG_PROT_H
#define _EPMCAS_DIAG_PROT_H


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
/** States in EpmCaS_stDiag */
enum EpmCaS_stDiag_t
{
    EPMCAS_DIAG_OFF,    //diagnosis is deactivated
    EPMCAS_DIAG_PATMAT, //diagnosis checks the the result of the pattern matching
    EPMCAS_DIAG_CTEDGE, //diagnosis checks the number of camshaft edges per working cycle
    EPMCAS_DIAG_NO_SIG, //diagnosis waits for edges, pattern matching not active
	EPMCAS_DIAG_STOP	//diagnosis has detected an error and was stopped (error should not be healed until next EPM_MODE_VERIFY)
};

/** States in EpmCaS_stDiagErr */
enum EpmCaS_stDiagErr_t
{
    EPMCAS_DIAG_AMBI,       // not yet a valid camshaft diagnosis result available
    EPMCAS_DIAG_OK,         // camshaft diagnosis successful
    EPMCAS_DIAG_NOSIG,      // camshaft diagnosis detects no signal
    EPMCAS_DIAG_ERRSIG      // camshaft diagnosis detects errorneous signal
};

/**  states for EpmCaS_stDiagSPC */
enum
{
    EPMCAS_DIAG_PENDING,
    EPMCAS_DIAG_DEBHEAL,
    EPMCAS_DIAG_HEAL,
    EPMCAS_DIAG_DEBSET,
    EPMCAS_DIAG_SET
};

/*
 ***************************************************************************************************
 * Messages
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations for owned messages
 ***************************************************************************************************
 */


__PRAGMA_USE__epm__nsync__RAM__arr8__START
/** EpmCaS_stDiag: indication of activation, deactivation of pattern matching to epmsyn. */
extern enum EpmCaS_stDiag_t EpmCaS_stDiag[NUMCASMAX];

/** EpmCaS_stDiagErr: internal state for error on camshaft signal.*/
extern enum EpmCaS_stDiagErr_t EpmCaS_stDiagErr[NUMCASMAX];

__PRAGMA_USE__epm__nsync__RAM__arr8__END

/*
 ***************************************************************************************************
 *Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern bool EpmCaS_SPCEnableCond(enum EpmHCaS_numCaS_t ctCaS);
extern void EpmCaS_SPC(enum EpmHCaS_numCaS_t ctCaS);
extern void EpmCaS_ActivatePatmat(enum EpmHCaS_numCaS_t numCaS);
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif
