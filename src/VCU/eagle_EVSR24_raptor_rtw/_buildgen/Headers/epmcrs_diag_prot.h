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
 * $Filename__:epmcrs_diag_prot.h$
 *
 * $Author____:TUC2SI$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:CAD2SI$
 * $Date______:16.12.2009$
 * $Class_____:SWHDR$
 * $Name______:epmcrs_diag_prot$
 * $Variant___:1.23.0$
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
 * 1.23.0; 1     16.12.2009 CAD2SI
 *   Add feature sensor polarity check
 * 
 * 1.23.0; 0     01.12.2009 TUC2SI
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMCRS_DIAG_PROT_H
#define _EPMCRS_DIAG_PROT_H


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


/* Bit positions of EpmCrS_stDiag, only for EPM internal state of crankshaft diagnosis */
#define EPMCRS_DIAG_NO_SIG  0
#define EPMCRS_DIAG_ERR_SIG 1
#define EPMCRS_DIAG_DGI     2
/* state of EpmCrS_stDiag for no error */
#define EPMCRS_DIAG_SIG_OK  0
/* Masks of EpmCrS_stSigDiagSrc */
// bitmask for all DGI signal errors (less than forward, greater than backward, and between)
#define DGISIGERRMSK ((1 << EPMHCRS_MINPF_POS) + (1 << EPMHCRS_MAXPR_POS) +                        \
                      (1 << EPMHCRS_NOPFPR_POS))

// bitmask for standard sensor signal errors
#define STDSIGERRMSK  ((1 << EPMHCRS_LONGPER_POS) + (1 << EPMHCRS_SHORTPER_POS) +                 \
                      (1 << EPMHCRS_GAPCRIT2_POS) + (1 << EPMHCRS_TIMEOUT_POS) +                  \
                      (1 << EPMHCRS_GAPCRIT1_POS) + (1 << EPMHCRS_NOGAP_POS))



/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
 MEMLAY_USE_ENVRAM(extern sint32, EpmCrS_ctSumRRNotPlaus);
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

__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void EpmCrS_Diag_ChkDGIErr (bool stALEDiag, sint16 phidiff);
extern bool EpmCrS_SPCEnableCond(void);
extern void EpmCrS_SPC(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

#endif
