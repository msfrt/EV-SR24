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
 * $Filename__:epmbca_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:CAD2SI$ 
 * $Date______:22.09.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmbca_prot$ 
 * $Variant___:1.21.1$ 
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
 * 1.21.1; 0     22.09.2010 CAD2SI
 *   BugFix: Testinjections with Schicht - injections
 * 
 * 1.21.0; 1     16.10.2009 TUC2SI
 *   header fixed
 * 
 * 1.21.0; 0     07.04.2009 OMO2FE
 *   Transfer from CC to SDOM
 * 
 * 1.18.1; 0     06.11.2008 MAH5COB
 *   Initial import from Clearcase 
 *      File name: epmbca_prot.h
 *      Version: \main\basis\b_EpmBCa\2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMBCA_PROT_H
#define _EPMBCA_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * protected header-file for backup camshaft. The variables and defines declared here could be used
 * in every EPM-file
 *
 * \scope               INTERN
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
#define TSTINJ_POS  0
#define RESYNC_POS  1
#define SYNC_POS    2

// possible states of state machine backup camshaft
enum EpmBCa_stTstInj_t
{
    EPMBCA_STVOID,
    EPMBCA_STINJ,
    EPMBCA_STWAITCALC,
    EPMBCA_STCALC,
    EPMBCA_STNOSYNC,
    EPMBCA_STSYNC
};

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmBCa_TstInj_Init(void);

extern uint8 EpmBCa_TstInj(void);

extern sint16 EpmBCa_CalcFacSegTime(uint8 numCyl);
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif
