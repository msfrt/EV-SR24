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
 * $Filename__:injhpfi_maxang_pcp.h$
 *
 * $Author____:HIA3SI$
 *
 * $Function__:Ported from Nestor
 *             CDCOMP : INJHPFI  2.80; 1
 *             
 *             CRQ 275122
 *             ressource reduction to 1 gtc and 1ltc$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GEHAAF$
 * $Date______:04.10.2010$
 * $Class_____:SWHDR$
 * $Name______:injhpfi_maxang_pcp$
 * $Variant___:2.10.1$
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
 * 2.10.1; 0     04.10.2010 GEHAAF
 *   MISRA - Warnings removed (hexneutral)
 *   
 * 
 * 2.8.0; 0     14.10.2009 HIA3SI
 *   Ported from Nestor
 *   CDCOMP : INJHPFI  2.80; 1
 *   
 *   CRQ 275122
 *   ressource reduction to 1 gtc and 1ltc
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _INJHPFI_MAXANG_PCP_H
#define _INJHPFI_MAXANG_PCP_H

#include "injhpfi.h"
#include "injhpfi_pcp.h"
#include "pcp.h"


/***************************************************************************************************/
/* Inline macros for PCP. */
/***************************************************************************************************/


/***************************************************************************************************
 * Clears the flag in the SRSS register of the LTC belonging to the given injecion channel and
 * triggers an interrupt in the srn of the injection channel's gtc. So it signalizes the state
 * machine of a channel that the max. injection angle has been reached.
 *
 * Inputs: CHLNO - Number of injection channel
 *
 * Registers changed: TMP0, TMP1
 *
 * ************************************************************************************************/

#define INJHPFI_RESET_LTCSRSS_TRIGGER_GTCINT(CHLNO, TMP0, TMP1)\
     ldl_il(TMP0, &(INJHPFI_LTC_CH ## CHLNO ## _SRSC))\
     ldl_iu(TMP0, &(INJHPFI_LTC_CH ## CHLNO ## _SRSC))         /* TMP0 := address of SRSC */\
     ld_i(TMP1, 0x0)\
     set(TMP1, INJHPFI_LTC_CH ## CHLNO ## _SRS_BP)               /* TMP1 := mask for srsc */\
     st_f(TMP1, TMP0, 32)                                      /* write in srsc to reset ltc event flag */\
     /* triggger INT in SRN for GTCs of injection channel */\
     ldl_il(TMP0, &(INJHPFI_GTC_CH ## CHLNO ## _SRN_CTR))\
     ldl_iu(TMP0, &(INJHPFI_GTC_CH ## CHLNO ## _SRN_CTR))\
     set_f(TMP0, GPTA_SRC_SETR_POS, 16)                         /* initiate int in srn of gtcs */\


#endif /*  #ifndef _INJHPFI_MAXANG_PCP_H */
