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
 * $Filename__:reset_swreset_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:27.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:reset_swreset_priv$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     27.08.2008 KLMEYER
 *   Update: Core delivery 2008-07
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 *              Private headerfile for SWReset
 *
 * \scope           INTERN
 ***************************************************************************************************
 */
#ifndef _RESET_SWRESET_PRIV_H
#define _RESET_SWRESET_PRIV_H


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
#define RESET_TIMREG_STARTVALUE 0x00000000ull

/* protected RAM should be initialised */
/* marker is set in SB to a SBRESET_PROTRAM_CLEAR  0xA1B2 when the protected RAM should be cleared*/
#define RESET_PROTRAM_IS_CLEARED  0xC396

#define RESET_EARLYRAMCLEARPATTERN  0xABCD1234ul


#define RESET_GETCONFIG(conf, table, index) (*((const uint8*)(*((conf)+(table)))+(index)))

/* mask for reset config table */
#define RESET_CONFTABLE_MSK 0xF000
/* mask for reset conf id */
#define RESET_CONFID_MSK    0x0FFF

typedef enum
{
    RESET_HISTBUF_IDLE,
    RESET_HISTBUF_INIT,
    RESET_HISTBUF_INITPOLL
}Reset_StateHistBufProc_t;


/*
 ***************************************************************************************************
 * Variables and Constants
 ***************************************************************************************************
 */
MEMLAY_USE_LABEL(extern uint32, __ASW_PROTECTED_RAM0_START);
MEMLAY_USE_LABEL(extern uint32, __ASW_PROTECTED_RAM0_END);
MEMLAY_USE_LABEL(extern uint32, __ASW_PROTECTED_RAM1_START);
MEMLAY_USE_LABEL(extern uint32, __ASW_PROTECTED_RAM1_END);
MEMLAY_USE_LABEL(extern uint32, __ASW_PROTECTED_RAM2_START);
MEMLAY_USE_LABEL(extern uint32, __ASW_PROTECTED_RAM2_END);

/* pointer to addtional reset information in FIX-RAM */
MEMLAY_USE_EARLY_CLEARED_RAM(extern SBReset_AddInfo_t, *Reset_dAddInfo_ps);
MEMLAY_USE_EARLY_CLEARED_RAM(extern uint32, Reset_stEarlyRAMCleared_u32);



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__eos__HighSpeed__START
extern void Reset_InitSWResetConfig(const SBReset_ConfSWReset_t *dSWResetConfig_pcs);
extern bool Reset_CheckForLoop(void);
__PRAGMA_USE__CODE__eos__HighSpeed__END


#endif
