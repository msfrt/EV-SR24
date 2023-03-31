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
 * $Filename__:reset_prot.h$ 
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
 * $Name______:reset_prot$ 
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
 *              header file for reset modul
 *
 * \scope           API
 ***************************************************************************************************
 */
#ifndef _RESET_PROT_H
#define _RESET_PROT_H

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
#define RESET_STORE_COMPL(word) (~(word))

/* Number of flash errors which should be stored */
#define RESET_NUM_FLASH_ERRORS    10


/*
 ***************************************************************************************************
 * Variables and Constants
 ***************************************************************************************************
 */
/* global variables for SWReset */
/* points to the actual SWReset configuration data */
#ifdef MEMLAY_USE_EARLY_CLEARED_RAM
MEMLAY_USE_EARLY_CLEARED_RAM(extern const SBReset_ConfSWReset_t, **Reset_dActConfSWReset_ppcs);
#else
__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern const SBReset_ConfSWReset_t **Reset_dActConfSWReset_ppcs;
__PRAGMA_USE__eos__1_5ms__RAM__x32__END
#endif


/* structure for softreset pins */
#ifdef RESET_SOFTRESETCONFIGURED
__PRAGMA_USE__eos__1_5ms__constant__s32__START
extern const Reset_SoftResetPin_t Reset_SoftResetPin_sa[];
__PRAGMA_USE__eos__1_5ms__constant__s32__END
#endif


/* table of testmasks */
__PRAGMA_USE__eos__1_5ms__constant__arr16__START
extern const uint16 Reset_dConfMaskTable_cu16[];
__PRAGMA_USE__eos__1_5ms__constant__arr16__END

/* table of different loopconditions */
__PRAGMA_USE__eos__1_5ms__constant__s32__START
extern const SBReset_LoopCondSWReset_t Reset_dLoopCondTable_cs[];
__PRAGMA_USE__eos__1_5ms__constant__s32__END

/* table of different callback functions */
__PRAGMA_USE__eos__1_5ms__constant__x32__START
extern SBReset_CallbackFctPtr_t const Reset_dCallbackFctPtrTable_cpfn[];
__PRAGMA_USE__eos__1_5ms__constant__x32__END

/* Reset configuration for ASW */
__PRAGMA_USE__eos__1_5ms__constant__s32__START
extern const SBReset_ConfSWReset_t Reset_dConfSWReset_cs;
__PRAGMA_USE__eos__1_5ms__constant__s32__END


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
extern void _main(void);


#endif
