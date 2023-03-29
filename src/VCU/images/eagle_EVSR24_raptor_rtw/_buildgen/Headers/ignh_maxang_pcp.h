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
 * $Filename__:ignh_maxang_pcp.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:Component Toolbox-Import$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:UWDAEMMR$
 * $Date______:18.05.2010$
 * $Class_____:SWHDR$
 * $Name______:ignh_maxang_pcp$
 * $Variant___:2.20.0$
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
 * 2.20.0; 0     18.05.2010 UWDAEMMR
 *   Implemented workaround for Tricore erratum PCP_TC.038
 * 
 * 2.14.1; 0     24.11.2008 HIA3SI
 *   Component Toolbox-Import
 * 
 * 2.14.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _IGNH_MAXANG_PCP_H
#define _IGNH_MAXANG_PCP_H

#include "ignh.h"
#include "ignh_pcp.h"
#include "pcp.h"


/* DPTR of an ignition channel "CHLNO" to access its data */
#define IGNH_CHL_DPTR(CHLNO)                  ((IGNH ## CHLNO ## _DPTR << PCP_R7_DPTR_POS_NDT)   | \
                                                                 (0x01 << PCP_R7_CEN_POS_NDT)    | \
                                                                 (0x01 << PCP_R7_IEN_POS_NDT))


/***************************************************************************************************/
/* Inline macros for PCP. */
/***************************************************************************************************/


/***************************************************************************************************
 * Clears the flag in the SRSS register of the LTC belonging to the given ignition channel and
 * triggers an interrupt in the srn of the ignition channel's gtc. So it signalizes the state
 * machine of a channel that the max. ignition angle has been reached. IAMAX_IR flag in ChlData.Flags
 * of ignition channel is set.
 *
 * Inputs: CHLNO - Number of ignition channel
 *         PRAM: - IGNH_FLAGS of certain ignition channel
 *
 * Registers changed: TMP0, TMP1
 *
 * ************************************************************************************************/

#define IGNH_RESET_LTCSRSS_TRIGGER_GTCINT(CHLNO, TMP0, TMP1)\
     ldl_il(TMP0, &(IGNH_CHL ## CHLNO ## _LTC_SRSC))\
     ldl_iu(TMP0, &(IGNH_CHL ## CHLNO ## _LTC_SRSC))      /* TMP0 := address of SRSC */\
     ld_i(TMP1, 0x0)\
     set(TMP1, IGNH_CHL ## CHLNO ## _LTC_SRS_BP)          /* TMP1 := mask for srsc */\
     st_f(TMP1, TMP0, 32)                                 /* write in srsc to reset ltc event flag */\
     /* triggger INT in SRN for GTCs of ign. channel */\
     ldl_il(TMP0, &(IGNH_CHL ## CHLNO ## _SRN_CTR))\
     ldl_iu(TMP0, &(IGNH_CHL ## CHLNO ## _SRN_CTR))\
     set_f(TMP0, GPTA0_SRC00_SETR_POS, 16)                /* initiate int in srn of gtcs */\
     /* set Flag IAMAX_IR atomically in ChlData of corresponding ignition channel */\
     ldl_il(r7, (IGNH_CHL_DPTR(CHLNO)))                   /* TMP0 = DPTR of ign. channel */\
     clr(r7, PCP_R7_IEN_POS_NDT)                          /* PCP_TC.038: disable IR with 2 ops afterwards */\
     ldl_iu(TMP1, (IGNH_FLAGS_IAM_IR_MASK))\
     ldl_il(TMP1, (IGNH_FLAGS_IAM_IR_MASK))               /* TMP = mask of IAMAX_IR */\
     ld_f(TMP0, TMP0, 32)                                 /* PCP_TC.038: dummy FPI read before MSET/MCLR */\
     mset_pi(TMP1, IGNH_FLAGS)                            /* set atomically IAM_IR flag */\
     set(r7, PCP_R7_IEN_POS_NDT)                          /* PCP_TC.038: reenable IR */


#endif
/* _IGNH_MAXANG_PCP_H */
