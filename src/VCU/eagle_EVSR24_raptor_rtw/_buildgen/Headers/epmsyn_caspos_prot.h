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
 * $Filename__:epmsyn_caspos_prot.h$ 
 * 
 * $Author____:TUC2SI$ 
 * 
 * $Function__:changes in calibration docu$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TUC2SI$ 
 * $Date______:10.01.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:epmsyn_caspos_prot$ 
 * $Variant___:1.27.1$ 
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
 * 1.27.1; 0     10.01.2013 TUC2SI
 *   reset of signal table added in case of error
 * 
 * 1.25.0; 0     13.01.2011 OMO2FE
 *   change array ranges from axispoints to system constant
 * 
 * 1.22.0; 0     04.12.2009 TUC2SI
 *   changes in calibration docu
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EPMSYN_CASPOS_PROT_H
#define _EPMSYN_CASPOS_PROT_H



/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "epmcas_seg_dat.h"  /* necessary because of size of array EpmSyn_ctEdgeMapEqui */
                            
/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


#define EPMSYN_SHIFT_PLAUS    0x0F


/* states for EpmSyn_stCaSPos */
#define EPMSYN_CASPOS_NOTVALID  0 /* position not valid */
#define EPMSYN_SIGTAB_NOUPDATE  1 /* position not valid */
#define EPMSYN_SIGTAB_AMBI      2 /* position not valid */
#define EPMSYN_CASPOS_VALID     5 /* position valid */
#define EPMSYN_WRONG_SEG_LEN   10 /* error */
#define EPMSYN_SIGTAB_END      11 /* error */
#define EPMSYN_SIGTAB_SEQ      12 /* error */
#define EPMSYN_EXCEED_TOLC     13 /* error */
#define EPMSYN_CASPOS_SWTOFF   20 /* no evaluation */

/* states stRes */
#define SIGTAB_FOUND           14 /* SigTab is in RefTab */
#define SIGTAB_UPDATE          15 /* SigTab was updeted */


#define EPMSYN_NOSEG_EDGE     255        /* for no segment edges in EpmSyn_ctEdgeMap */

#define EPMSYN_FORWARDS         0
#define EPMSYN_BACKWARDS        1
#define EPMSYN_CTBACKEXTERN    20

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
#if (CASTYP_SY != 4)
typedef struct
{
    uint8  SigTab[ EPMCAS_NUMSEG_SC ];
    uint8  stSearch[ EPMCAS_NUMSEG_SC ];
    uint8  numSegInSigTab;
    sint8  ctSigTabLstEntr;
    sint8  ctWcycle;
    bool   stPreSeg;
    sint16 ctLstEdge;
    sint16 phiIniCaSPos;

} EpmSyn_CaSData_t;
#endif /* CASTYP_SY != 4 */
/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
#if (CASTYP_SY != 4)
__PRAGMA_USE__epm__nsync__RAM__s32__START
extern EpmSyn_CaSData_t EpmSyn_CaSData[NUMCASMAX];
__PRAGMA_USE__epm__nsync__RAM__s32__END
#endif /* CASTYP_SY != 4 */

#if ( (CASTYP_SY == 5) || (CASTYP_SY == 0) )
__PRAGMA_USE__epm__nsync__RAM__arr16__START
extern sint16 EpmSyn_phiVirtualEdge[NUMCASMAX];
__PRAGMA_USE__epm__nsync__RAM__arr16__END
#endif /* ( (CASTYP_SY == 5) || (CASTYP_SY == 0) ) */

__PRAGMA_USE__epm__nsync__RAM__arr8__START
extern uint8  EpmSyn_stCaSPos[];
#if ( (CASTYP_SY == 5) || (CASTYP_SY == 0) )
extern uint8  EpmSyn_stVirtualLev[NUMCASMAX];
#endif /* ( (CASTYP_SY == 5) || (CASTYP_SY == 0) ) */
extern uint8  EpmSyn_ctEdgeMapEqui[NUMCASMAX][EPMCAS_NUMSEG_SC];
extern uint8  EpmSyn_dSegSeriesShiftedGap[NUMCASMAX][EPMCAS_NUMSEG_SC];
extern sint8  EpmSyn_ctEdgeWcyOfs[NUMCASMAX];
__PRAGMA_USE__epm__nsync__RAM__arr8__END

__PRAGMA_USE__epm__nsync__RAM__x8__START
extern uint8  EpmSyn_stCasEval;
extern uint8  EpmSyn_stGapPos;
__PRAGMA_USE__epm__nsync__RAM__x8__END

#if (CASTYP_SY != 4)
__PRAGMA_USE__epm__nsync__InitRAM__x8__START
extern uint8  EpmSyn_ctBackwards;
__PRAGMA_USE__epm__nsync__InitRAM__x8__END
#endif /* CASTYP_SY != 4 */

__PRAGMA_USE__epm__nsync__RAM__arr8__START
extern bool   EpmSyn_stCasposValid[NUMCASMAX];
__PRAGMA_USE__epm__nsync__RAM__arr8__END



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

/**
 ***************************************************************************************************
 * Initialization of crankshaft position detection.
 ***************************************************************************************************
 */


/**
 ***************************************************************************************************
 * Initialization of camshaft position detection.
 ***************************************************************************************************
 */



/**
 ***************************************************************************************************
 * Initialization back rotation detection.
 *
 * This function must call only during ECU initialization
 *
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmSyn_ResetBackRot( void );
__PRAGMA_USE__CODE__epm__HighSpeed__END

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void EpmSyn_ResetSigTab( enum EpmHCaS_numCaS_t numCaS );
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif 
