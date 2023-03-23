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
 * $Filename__:pcp_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Peripheral Control Processor$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:pcp_priv$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: pcp_priv.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PCP_PRIV_H
#define _PCP_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 * PCP private header.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* set up interrupt priority and TOS in R6 for exit interrupt                                     */
#define PCP_LOAD_R6_INIT                ((PCP_LOAD_PRIO << PCP_R6_SRPN_POS) |                      \
                                         (0x01UL        << PCP_R6_TOS_POS))

/* estimated number of ticks it takes to switch PCP channels/context                              */
#define PCP_LOAD_NUM_CHNL_SWT_TICKS     10

/* loop counter to waste some time in Pcp_Load function
   -> estimated value causing about 10us run time on 75MHz METIS
   -> value is not critical since actual run time of the Pcp_Load function is measured online
      during its first call                                                                       */
#define PCP_LOAD_NUM_LOOPS              150UL


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* PCP load measurement structure for hold variables                                              */
typedef struct
{
    uint32  tiStampLastMon_u32;
    uint16  tiPcpLoadRunTime_u16;
    uint16  numPcpLoadCalls_u16;
} Pcp_LoadHold_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__hwe__50ms_1s__RAM__s32__START
extern Pcp_LoadHold_t Pcp_xLoadHold_s;
__PRAGMA_USE__hwe__50ms_1s__RAM__s32__END

__PRAGMA_USE__hwe__50ms_1s__RAM__x16__START
extern sint16         Pcp_rAvrLoad_s16;
extern sint16         Pcp_rAvrLoadMax_s16;
__PRAGMA_USE__hwe__50ms_1s__RAM__x16__END


/* _PCP_PRIV_H */
#endif
