/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:core_main.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:RAT1COB$
 * $Date______:25.06.2010$
 * $Class_____:SWHDR$
 * $Name______:core_main$
 * $Variant___:1.14.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 0     25.06.2010 RAT1COB
 *   Core_Env support of TC1724 TC1782 TC1793
 * 
 * 1.10.0; 0     27.01.2009 KLMEYER
 *   B_CORE_ENV.10.0.0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 *   Headerfile of Core main initialization
 *
 * \scope          API
 ***************************************************************************************************
 */
#ifndef _CORE_MAIN_H
#define _CORE_MAIN_H

/*---------------------------------------------------------------------
 * Includes
 *---------------------------------------------------------------------
 */

#include "core_env.h"
#include "memlay.h"
#include "core_main_priv.h"
#include "mli.h"
#include "eec.h"
#include "reset.h"
#include "dme.h"
#include "cpu.h"
/* etks.h is conditionally included by dme.h */

/* to save code, if no cache setup required. */
#if !defined(MEMLAY_CACHE_INIT)
    #define MEMLAY_CACHE_INIT()
#endif

/* to be compatible with older DME drivers. */
#if !defined(DME_FIRST_INIT)
    #define DME_FIRST_INIT
#endif

/* to be compatible to configuration without ETKS */
#if !defined(ETKS_FIRST_INIT)
    #define ETKS_FIRST_INIT
#endif

#define CORE_MAIN()                                                                                \
    CORE_MAIN_1();                                                                                 \
    /* SWReset initialisation.                                                                     \
       This function must be called before other Reset-functions are called */                     \
    Reset_SWResetInit();                                                                           \
    CORE_MAIN_2();                                                                                 \
    /* only to avoid MISRA-warnings due to ; */                                                    \
    do{}while(0)

#define CORE_MAIN_GLOBREG()                                                                        \
    /* Init global register (a0, a1, a8, a9) */                                                    \
    CORE_GLOBREG_INIT                                                                              \
    /* only to avoid MISRA-warnings due to ; */                                                    \
    do{}while(0)

#define CORE_MAIN_1()                                                                              \
    /* Init global register (a0, a1, a8, a9) */                                                    \
    CORE_MAIN_GLOBREG();                                                                           \
    /* Set ASTACK (A10) */                                                                         \
    CORE_ASTACK_INIT                                                                               \
    /* Set BIV- and ISP-register */                                                                \
    CORE_BIV_ISTACK_INIT                                                                           \
    /* cache setup, if required */                                                                 \
    MEMLAY_CACHE_INIT();                                                                           \
    /* Clear RAM */                                                                                \
    CORE_RAM_ZERO                                                                                  \
    /* Init CSA-area: no function calls allowed before */                                          \
    CORE_CSA_INIT                                                                                  \
    /* only to avoid MISRA-warnings due to ; */                                                    \
    do{}while(0)

#define CORE_MAIN_2()                                                                              \
    /* Initialise RAM-areas. Protected RAM excluded. Will be initialised later. */                 \
    MemLay_RamInit();                                                                              \
                                                                                                   \
    /* Protected RAM-area initialisation */                                                        \
    Reset_ProtRamInit();                                                                           \
                                                                                                   \
    /* SWReset handler */                                                                          \
    Reset_SWResetHandler();                                                                        \
                                                                                                   \
    /* initialise internal watchdog */                                                             \
    Cpu_SetWatchdogTimeout(500UL);                                                                 \
                                                                                                   \
    /* check for old, unsupported CPUs */                                                          \
    CORE_CHECK_UNSUPPORTED_CPUS();                                                                 \
                                                                                                   \
    /* check consistency of system clock frequency set up by the startup block with the system */  \
    /* clock frequency for which the SW has been compiled.                                     */  \
    /* If a mismatch is detected, start RB flash programming.                                  */  \
    /* Currently active for every machine type!                                                */  \
    CORE_CHECK_CLKCSTNC();                                                                         \
                                                                                                   \
    /* if this was a power on reset and this is an ed device */                                    \
    if (Cpu_IsED() != FALSE)                                                                       \
    {                                                                                              \
        /* Init Mli */                                                                             \
        Mli_Init();                                                                                \
                                                                                                   \
        /* Init EEC */                                                                             \
        Eec_Init();                                                                                \
                                                                                                   \
        /* has to be called after EEC init */                                                      \
        ETKS_FIRST_INIT;                                                                           \
    }                                                                                              \
    DME_FIRST_INIT;                                                                                \
                                                                                                   \
    /* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */    \
    /* The following call initialises the clocks of the TriCore peripherals!                 */    \
    /* - Access to peripherals (ADC, CAN, SSC,...) is ONLY allowed AFTER this initialisation */    \
    /* - Beyond this point, it is NOT possible any more to use MLI connection to ED device   */    \
    /* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */    \
                                                                                                   \
    /* initialise peripheral module clocks */                                                      \
    Cpu_Proc_Ini();                                                                                \
                                                                                                   \
    /* only to avoid MISRA-warnings due to ; */                                                    \
    do{}while(0)

#endif
