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
 * $Filename__:memlay_confpriv.ht$
 * $Author____:KLMEYER$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:JWI2SI$
 * $Date______:12.10.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:memlay_confpriv$
 * $Variant___:1.14.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 0     12.10.2010 JWI2SI
 *   D-Cache for TC1793
 * 
 * 1.13.0; 0     29.01.2010 JWI2SI
 *   TC_1793
 * 
 * 1.12.0; 0     23.11.2009 AWL2SI
 *   B_MEMLAY.12.0.0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _MEMLAY_AUTO_CONFPRIV_H
#define _MEMLAY_AUTO_CONFPRIV_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              memlay_auto_confpriv.h: calibration software - private configuration header file
 *
 * \scope           CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#ifdef LINK_RUN
#ifdef MEMLAY_TPROT_START
/* import Configuration of TPROT, if TPROT component available */
#include "tprot_auto_def_conf.h"
#endif
#endif

/*
 *********************************************************************
 * Defines
 *********************************************************************
 */

#define MEMLAY_MPRAM_AREA ram0

/* Address translation of a memory block:                                   */
/* All addresses are shifted by 16 bit. Lower 16 address bits are removed.  */
/* Addresses are a multiple of 64kByte                                      */
#define MEMLAY_TRANSLATE24_TABLE \
    {\
        /* adStart24, adEnd24, adDelta32 */\
        {0x00u, 0x1Fu, 0x8000u},  /* 0x80000000: Flash         */ \
        {0x20u, 0x3Fu, 0x8060u},  /* 0x80800000: Flash         */ \
        {0x40u, 0x40u, 0xAFA7u},  /* 0xAFE70000: Ram PMU_OLDA  */ \
        {0x41u, 0x41u, 0xBFBFu},  /* 0xC0000000: Ram PMI_SPRAM */ \
        {0x42u, 0x43u, 0xAFBEu},  /* 0xB0000000: Ram LMU_RAM   */ \
        {0x44u, 0x45u, 0xCFBCu},  /* 0xD0000000: Ram DMI_RAM   */ \
        {0x48u, 0x49u, 0xAEB8u},  /* 0xAF000000: Flash         */ \
        {0x4Au, 0x4Bu, 0xAEBEu},  /* 0xAF080000: Flash         */ \
        {0x5Eu, 0x5Fu, 0xEFA7u},  /* 0xF0050000: Ram PCP_PRAM  */ /* 0xF0060000: Ram PCP_PCODE */ \
    }

/* #define MEMLAY_REINI_RESET */

#define MEMLAY_REINI_PROCESS



/* Memlay_Accpr Defines */
#define MEMLAY_ACCPR FALSE 

#define MEMLAY_ACCPR_DYNAMIC FALSE 

 


/*
 *********************************************************************
 * For linker command files only
 *********************************************************************
 */
#ifdef LINK_RUN

#define MEMLAY_ALL_SUBSECTIONS(SECTION) \
    *(SECTION.a8) \
    *(SECTION.a4) \
    *(SECTION.a2) \
    *(SECTION.a1) \
    *(SECTION)    \

/*
 *********************************************************************
 * For locate.inv only
 *********************************************************************
 */
#if defined(MEMLAY_LOCATE_VERSION)

    /* calculate RAM_FIX area */
    #ifdef MEMLAY_TPROT_START
        #if (SB_RAM_FIX_START < TPROT_RAM_FIX_START)
            /* SB_RAM_FIX is located before TPROT_RAM_FIX */
            #define MEMLAY_RAM_FIX_START    SB_RAM_FIX_START
            #define MEMLAY_RAM_FIX_END      TPROT_RAM_FIX_END
        #else
            /* TPROT_RAM_FIX is located before SB_RAM_FIX */
            #define MEMLAY_RAM_FIX_START    TPROT_RAM_FIX_START
            #define MEMLAY_RAM_FIX_END      SB_RAM_FIX_END
        #endif
    #else
        #define MEMLAY_RAM_FIX_START    SB_RAM_FIX_START
        #define MEMLAY_RAM_FIX_END      SB_RAM_FIX_END
    #endif

    /* machine specific address mappings */
    #if (MEMLAY_RAM_FIX_START == MEMLAY_PMI_SPRAM_START)
        /* FIX Ram is located at start of SPRAM */
        #define MEMLAY_SPRAM_START  (MEMLAY_RAM_FIX_END + 1)
        #define MEMLAY_SPRAM_END    MEMLAY_PMI_SPRAM_END
    #else
        #error "unsupported location of SB fix RAM"
    #endif

    #define MEMLAY_RAM0_START   MEMLAY_DMI_RAM_START
    #define MEMLAY_RAM0_END     MEMLAY_DMI_RAM_END

    #if defined(MEMLAY_PMU_OVRAM_START)
    #define MEMLAY_RAM1_START       MEMLAY_PMU_OVRAM_START
    #define MEMLAY_RAM1_END         MEMLAY_PMU_OVRAM_END
    #endif

    #if defined(MEMLAY_LMU_RAM_START)
    #define MEMLAY_RAM1_START       MEMLAY_LMU_RAM_START
    #define MEMLAY_RAM1_END         MEMLAY_LMU_RAM_END
    #endif

    #if defined(MEMLAY_DCACHE_RAM_START)
    #define MEMLAY_RAM2_START       MEMLAY_DCACHE_RAM_START
    #define MEMLAY_RAM2_END         MEMLAY_DCACHE_RAM_END
    #endif

    /* Automatic relocation depending on availability. Do not change. */
    #ifdef MEMLAY_RAM1_START
        #define MEMLAY_VAR1_AREA            ram1
    #else
        #define MEMLAY_VAR1_AREA            ram0
    #endif
    #ifdef MEMLAY_RAM2_START
        #define MEMLAY_VAR2_AREA            ram2
    #else
        #define MEMLAY_VAR2_AREA            MEMLAY_VAR1_AREA
    #endif

    #define MEMLAY_DPRAM_AREA           ram0

/* Begin of MEMLAY_LINK_LOCATE_PROLOG */

/* End of MEMLAY_LINK_LOCATE_PROLOG */

/* MEMLAY_LOCATE_VERSION */
#endif

/* LINK_RUN */
#endif

/* _LIBRARYABILITY_H */
#endif
/* _MEMLAY_AUTO_CONFPRIV_H */
#endif
