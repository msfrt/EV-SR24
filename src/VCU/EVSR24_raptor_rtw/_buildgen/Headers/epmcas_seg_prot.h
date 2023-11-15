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
 * $Filename__:epmcas_seg_prot.h$
 *
 * $Author____:TUC2SI$
 *
 * $Function__:restructuring of FC for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:TUC2SI$
 * $Date______:15.05.2012$
 * $Class_____:SWHDR$
 * $Name______:epmcas_seg_prot$
 * $Variant___:1.36.0$
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
 * 1.36.0; 0     15.05.2012 TUC2SI
 *   deactivation of camshaft speed calculation and camshaft shift angle 
 *   calculation on not stable sensor signals
 * 
 * 1.31.0; 1     25.02.2011 TUC2SI
 *   new system constants
 * 
 * 1.31.0; 0     18.02.2011 TUC2SI
 *   new interface for the camshaft control
 * 
 * 1.23.0; 1     14.12.2009 OMO2FE
 *   restructuring of FC for improved diagnosis documentation and maintenance
 *   changes in calibration-docu
 * 
 * 1.23.0; 0     27.11.2009 TUC2SI
 *   restructuring of FC for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
#ifndef _EPMCAS_SEG_PROT_H
#define _EPMCAS_SEG_PROT_H



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


/* defines for bitpositions in EpmCaS_dSegSeries_C */
#define EPMCAS_EQUIDEDGE_POS    6
#define EPMCAS_CRSGAP_POS       5
#define EPMCAS_CASLEV_POS       4
#define EPMCAS_SEG_POS          0
#define EPMCAS_SEG_LEN          4

/* defines for Bitpositions and mask in EpmCaS_stNEng */
#define EPMCAS_HIGHSPEED_POS    0
#define EPMCAS_DYNLOW_POS       1
#define EPMCAS_DYNHIGH_POS      2
#define EPMCAS_FID_POS  		3
#define EPMCAS_STNENGVALID_POS  7
#define EPMCAS_STNENGERR_MSK    0x07    // mask for all errors in EpmCaS_stNEng
/* defines for bitpositions in EpmCaS_swtSeg_C */
#define EPMCAS_DSBLSTADAPCHK_POS 0

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


#define NO_ANGLE 0      //no camshaft angle calculation
#define VIA_MESSAGE 1   //camshaft angle provided as message
#define VIA_SERVICE 2   //camshaft angle calculated by the service function


#define RET_OK      0  //angle calculation OK
#define RET_SYNADP  1  //not synchronized or camshaft not adapted
#define RET_PERM    2  //no FId permission for this camshaft
#define RET_PREP    3  //access to camshaft hw-buffer not possible
#define RET_GETLST  4  //last edge not available in the buffer
#define RET_GETCUR  5  //current edge not available in the buffer
#define RET_NOVALIDEDGE 6 //valid position on the camshaft has not been found until now
#define RET_MECHLIM 8  //mechanical limits exceeded


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


__PRAGMA_USE__epm__nsync__RAM__arr16__START
//**************************************************************************************************
//** Extern declarations of camshaft segment
//**************************************************************************************************
/** EpmCaS_phiRefPos[][]: applicated edge-position on camshafts [degCrS] */
extern sint16 EpmCaS_phiRefPos[NUMCASMAX][EPMCAS_NUMSEG_SC];
__PRAGMA_USE__epm__nsync__RAM__arr16__END



__PRAGMA_USE__epm__nsync__RAM__x8__START
//**************************************************************************************************
//** Extern declarations of camshaft segment
//**************************************************************************************************

/** EpmCaS_numEdgeMax: number of edges on the camshaft. The value is a copy of the applicationvalue
   EpmCaS_numSegSerLst_C */
extern uint8 EpmCaS_numEdgeMax;
//number of equidistant edges calculated from EpmCaS_dSegSeries_CA
extern uint8 EpmCaS_numEquiEdge;
__PRAGMA_USE__epm__nsync__RAM__x8__END

extern const uint8* EpmCaS_dSegSeries_p;//obsolete interface, not for new functions

__PRAGMA_USE__epm__nsync__RAM__arr8__START
extern uint8 EpmCaS_dSegSeriesInt[];
__PRAGMA_USE__epm__nsync__RAM__arr8__END

extern const sint16* EpmCaS_phiSegLen_p;


/*
 ***************************************************************************************************
 *Prototypes
 ***************************************************************************************************
 */

#endif
