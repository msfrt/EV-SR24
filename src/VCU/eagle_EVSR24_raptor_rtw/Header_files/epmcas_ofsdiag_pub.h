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
 * $Filename__:epmcas_ofsdiag_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TUC2SI$ 
 * $Date______:27.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmcas_ofsdiag_pub$ 
 * $Variant___:1.23.0$ 
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
 * 1.23.0; 0     27.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMCAS_OFSDIAG_PUB_H                                /* protect multiple includes         */
#define _EPMCAS_OFSDIAG_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * public header-file of STC EPMCAS_OFSDIAG
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */

/** States in EpmCaS_stOfsErr */
enum EpmCaS_stOfsErr_t
{
    EPMCAS_OFS_AMBI,            // not yet any result available
    EPMCAS_OFS_NOEQUI_EDGE,     // edges of one working cycle analysed, but no equi edges detected
    EPMCAS_OFS_LOWEQUI_EDGE,    // edges of one working cycle analysed, but not enough edges found
    EPMCAS_OFS_NOREFPOS,        // equi edges found, but the absolut position of the edge is invalid
    EPMCAS_OFS_EXCEED,          // camshaft offset exceeds limit and debounced error signal is set
    EPMCAS_OFS_OK               // camshaft offset average value below or equal to the applic. limit
};

/** States in EpmCaS_stOfs */
enum EpmCaS_stOfs_t
{
    EPMCAS_OFS_WAITSEG,         // wait for first segment tooth
    EPMCAS_OFS_SEGCALC          // calculate offset for segment teeth
};


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmCaS_OfsDiag_Proc_SyncIni (void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

__PRAGMA_USE__CODE__epm__LowSpeed__START
extern void EpmCaS_OfsDiag_fcmclr (void);
__PRAGMA_USE__CODE__epm__LowSpeed__END

__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void EpmCaS_OfsDiag_100ms_Proc (void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END

/* _EPMCAS_OFSDIAG_PUB_H */
#endif
