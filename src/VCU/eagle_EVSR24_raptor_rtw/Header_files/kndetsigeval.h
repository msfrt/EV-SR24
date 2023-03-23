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
 *    Administrative Information (automatically filled in by [N]estor)   *
 *************************************************************************
 *
 * $Filename__:kndetsigeval.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Repository:SDOM$
 * $User______:KHC2ST$
 * $Date______:01.09.2010$
 * $Class_____:SWHDR$
 * $Name______:kndetsigeval$
 * $Variant___:2.4.0$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $generated_:$
 *************************************************************************
 *
 * $FDEF______:$
 *
 *************************************************************************
 * Points to be taken into consideration when/if the H-file is modified:
 *
 * $LinkTo____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 2.4.0; 1     01.09.2010 KHC2ST
 *   changes after code review
 * 
 * 2.4.0; 0     25.08.2010 KHC2ST
 *   MISRA warnings removed
 * 
 * 2.3.0; 0     01.06.2010 KHC2ST
 *   new configuration concept
 * 
 * 2.2.0; 0     18.02.2009 KHC2ST
 *   migration from Mx17 SWHDR KnDetSigEval 2.20;0
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $
 *
 *************************************************************************
</RBHead>*/


#ifndef KNDET_SIGEVAL_H_ModId   /* protection of doubleincluding */
#define KNDET_SIGEVAL_H_ModId

#include "cdrv_memlay.h"




/**
 ***************************************************************************************************
 * \moduledescription
 * Knock detection filter Calculation
 *
 * \scope  INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * change description:
 *
 * 11aug03 GS-EC/EFB3 Gangolf Mansmann
 * actual version
 *
 * 04aug03 GS-EC/EFB3 Gangolf Mansmann
 * new.
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Includes (import needed interfaces)
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* MISRA RULE 3.1 VIOLATION: 
charcater could not be changed */
#define __MEMLAY_ASW_CODE_PRG__          __attribute__ ((section (".spram_fnc,\"ax\",@progbits")))
 /*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

 /*
 ***************************************************************************************************
 * Variables (declaration of public variables)
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes (declaration of public functions)
 ***************************************************************************************************
 */

CODE_FAST(extern void KnDetSigEval(uint32 KnDet_adNewVal, bool KnDet_bWinEnd));

extern void KnDetSigEval_Ini(void);

CODE_FAST(extern uint32 KnDet_AAfilterfir2(   uint64s read,
                    uint32  loops,
                    uint64s save
                ) );


CODE_FAST(extern void KnDet_FracCalc(uint64s base, uint32 num));


CODE_FAST(extern void KnDet_KEcopydiagl(uint32 reqSigEvalMode, uint64s source, uint64s dest, uint32 loop));


#if (SY_KRZMF > 0)
CODE_FAST(extern void KnDet_KEfilter( uint64s read,
                uint32  keloop,
                uint32  keintaccuadr_,
				uint32  keaddrtmp
             ));
#else
CODE_FAST(extern void KnDet_KEfilter( uint64s read,
                uint32  keloop,
                uint32  keintaccuadr_,
                uint32  keadrfilter_
             ));
#endif


#endif /* belongs to #ifndef KNDET_SIGEVAL_H_ModId */
