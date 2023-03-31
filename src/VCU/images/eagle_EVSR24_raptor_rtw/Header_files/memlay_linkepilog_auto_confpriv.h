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
 * $Filename__:memlay_linkepilog_confpriv.ht$
 * $Author____:KLMEYER$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:JWI2SI$
 * $Date______:21.06.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:memlay_linkepilog_confpriv$
 * $Variant___:1.13.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.13.0; 0     21.06.2010 JWI2SI
 *   d-cache
 * 
 * 1.12.0; 0     23.11.2009 AWL2SI
 *   B_MEMLAY.12.0.0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _MEMLAY_LINKEPILOG_AUTO_CONFPRIV_H
#define _MEMLAY_LINKEPILOG_AUTO_CONFPRIV_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              memlay_linkepilog_auto_confpriv.h: calibration software - private configuration header file
 *              only to be included at end of locate.inv and group.inv
 *
 * \scope           CONF
 ***************************************************************************************************
 */

/* Common rule for usable RAM on TC1736/67/82/97 */
#define MEMLAY_CHECKLOC_SIGNAL_RULE(CHECKLOC_SIGNAL) \
(((0xAFE80000 <= CHECKLOC_SIGNAL) && (CHECKLOC_SIGNAL < 0xAFE90000)) || \
 ((0xC0000000 <= CHECKLOC_SIGNAL) && (CHECKLOC_SIGNAL < 0xE0000000)))


#ifdef LINK_RUN
/*
 *********************************************************************
 * For locate.inv only
 *********************************************************************
 */
#if defined(MEMLAY_LOCATE_VERSION)

/* Begin of MEMLAY_CHECKLOC_LIST */

/* End of MEMLAY_CHECKLOC_LIST */

/* Begin of MEMLAY_LINK_LOCATE_EPILOG */

/* End of MEMLAY_LINK_LOCATE_EPILOG */

/***********************************************************/
/* Do some fix checks. Stop on error.                      */
/***********************************************************/
#ifdef MEMLAY_DS1_START
_. = ASSERT ((MEMLAY_DS0_START < MEMLAY_DS1_START),
             "Wrong address order of DS0 and DS1: DS0 must be located before DS1!") ;
#endif

_. = ASSERT ((__SIZE_INTTAB & (__SIZE_INTTAB - 1)) == 0,
             "Interrupt vector table incomplete. Must be 2^n. Check OS!") ;

_. = ASSERT ((__INT_TABLE & (__SIZE_INTTAB - 1)) == 0,
             "Interrupt vector table missaligned. Must be aligned to its size. Check locate.inv!") ;

_. = ASSERT (__ASW_STACK_SIZE != 0,
             "Stacksize is ZERO, check your os_conf.c") ;

#ifdef MEMLAY_ENVRAM_MAXSIZE
_. = ASSERT ((__ENVRAM_END + 1 - __ENVRAM_START) <= MEMLAY_ENVRAM_MAXSIZE,
             "ENVRAM has overflowed, check EEP configuration") ;
#endif

_. = ASSERT ((__ASW_PROTECTED_RAM2_END + 1) <= SB_RAM_TEMP_START,
             ".zbss.protram in DMI-RAM has overflowed, reduce PROTECTED_RAM2") ;
/* hint: check does not take effect, if PROTECTED_RAM2 is in DMU-RAM or unused. */

/* Ensure that absolute addressed protected ram (.zbss.protram) is in DMI-RAM. */
/* PMU-OVRAM must not be used for absolute addressing, as bit access is not allowed on PMU.   */
_. = ASSERT ((__ASW_PROTECTED_RAM2_START - MEMLAY_DMI_RAM_START) <= 0x4000,
             ".zbss.protram must be located in the first 16 kBytes of DMI-RAM") ;

_. = ASSERT (MEMLAY_OFFSET_NONCACHED == 0x20000000,
             "MEMLAY_OFFSET_NONCACHED must be 0x20000000. Do not overwrite this in locate.inv!") ;

__REINI_SIZE = __INITVAR0_REINI_SIZE +
               __INITVAR1_REINI_SIZE +
               __INITVAR2_REINI_SIZE +
               __REINI_ZBSS_SIZE +
               __REINI_SBSS_SIZE +
               __REINI_BSS_SIZE;

#if (!defined(MEMLAY_REINI_RESET) && !defined(MEMLAY_REINI_PROCESS))
_. = ASSERT (__REINI_SIZE == 0,
             "REINI usage is inconsistent: If there is no reset on aborted afterrun and ReIni Task is not active, then ReIni sections must be empty!") ;
#endif

/* Only if ENVRAM_INITVAR is supported by the EEP driver, the section .data.envram can be used */
_. = ASSERT ((DEFINED(__EEP_ENVRAM_INITVAR_SUPPORTED) ? __EEP_ENVRAM_INITVAR_SUPPORTED : 0) || (__ENVRAM_INITVAR_SIZE == 0),
             "ENVRAM_INITVAR is not supported by the current EEP driver: the section .data.envram must be empty.") ;

/* Check size of manually aligned DPRAM sections: */
/* As the compiler/linker cannot guarantee proper alignment, each section must only contain */
/* symbols with the same size as the specified alignment. */
_. = ASSERT (((__DPRAM_A512_START - __DPRAM_A1024_START) & (1024 - 1)) == 0,
             "Size of section bss.dpram_a1024 is not a multiple of 1024!") ;
_. = ASSERT (((__DPRAM_A256_START - __DPRAM_A512_START)  & (512  - 1)) == 0,
             "Size of section bss.dpram_a512 is not a multiple of 512!") ;
_. = ASSERT (((__DPRAM_A128_START - __DPRAM_A256_START)  & (256  - 1)) == 0,
             "Size of section bss.dpram_a256 is not a multiple of 256!") ;
_. = ASSERT (((__DPRAM_A64_START  - __DPRAM_A128_START)  & (128  - 1)) == 0,
             "Size of section bss.dpram_a128 is not a multiple of 128!") ;
_. = ASSERT (((__DPRAM_A32_START  - __DPRAM_A64_START)   & (64   - 1)) == 0,
             "Size of section bss.dpram_a64 is not a multiple of 64!") ;
_. = ASSERT (((__DPRAM_A16_START  - __DPRAM_A32_START)   & (32   - 1)) == 0,
             "Size of section bss.dpram_a32 is not a multiple of 32!") ;
_. = ASSERT (((__DPRAM_A8_START   - __DPRAM_A16_START)   & (16   - 1)) == 0,
             "Size of section bss.dpram_a16 is not a multiple of 16!") ;

/* Check alignment of dpram data. __DPRAM_ALIGN is calculated in group.inv. It is always 2^n. */
_. = ASSERT (((__DPRAM_A1024_START) & (__DPRAM_ALIGN - 1)) == 0,
             "Start of dpram data is not aligned properly. This is most possibly caused by a editing error in locate.inv.") ;

/* DPRAM section must not cross 32kByte alignment borders, else unninteded wrap around may happen */
/* for non-circular buffers.  */
_. = ASSERT (((ADDR(.dpram) & ~ 0x7FFF) == ((ADDR(.dpram) + SIZEOF(.dpram) - 1) & ~ 0x7FFF)),
             ".dpram section must not cross 32kByte alignment borders: reduce DPRAM") ;
_. = ASSERT (((ADDR(.data.dpram) & ~ 0x7FFF) == ((ADDR(.data.dpram) + SIZEOF(.data.dpram) - 1) & ~ 0x7FFF)),
             ".data.dpram section must not cross 32kByte alignment borders: reduce initialised DPRAM") ;

/* Noncached sections must not be located in external flash. See Errata EBU_TC.H005 */
_. = ASSERT ((ADDR(.asw_const_noncached) >  (MEM_ROM_PFLASH_START + MEMLAY_OFFSET_NONCACHED)) &&
             (ADDR(.asw_const_noncached) <= (MEM_ROM_PFLASH_END   + MEMLAY_OFFSET_NONCACHED)),
             "Section .asw_const_noncached must be located in internal flash.") ;
_. = ASSERT ((ADDR(.code_mon_noncached)  >  (MEM_ROM_PFLASH_START + MEMLAY_OFFSET_NONCACHED)) &&
             (ADDR(.code_mon_noncached)  <= (MEM_ROM_PFLASH_END   + MEMLAY_OFFSET_NONCACHED)),
             "Section .code_mon_noncached must be located in internal flash.") ;
_. = ASSERT ((ADDR(.asw_code_noncached)  >  (MEM_ROM_PFLASH_START + MEMLAY_OFFSET_NONCACHED)) &&
             (ADDR(.asw_code_noncached)  <= (MEM_ROM_PFLASH_END   + MEMLAY_OFFSET_NONCACHED)),
             "Section .asw_code_noncached must be located in internal flash.") ;

#ifdef MEMLAY_DCACHE_START
/* ensure that noncached PTA-data is located in noncached internal flash if data cache is enabled */
_. = ASSERT ((ADDR(.ds0_ptadata_noncached) >  (MEM_ROM_PFLASH_START + MEMLAY_OFFSET_NONCACHED)) &&
             (ADDR(.ds0_ptadata_noncached) <= (MEM_ROM_PFLASH_END   + MEMLAY_OFFSET_NONCACHED)),
             "Section .ds0_ptadata_noncached must be located in noncached internal flash.") ;
_. = ASSERT ((__MO_DATACYCLICCHECK_START >  (MEM_ROM_PFLASH_START + MEMLAY_OFFSET_NONCACHED)) &&
             (__MO_DATACYCLICCHECK_START <= (MEM_ROM_PFLASH_END   + MEMLAY_OFFSET_NONCACHED)),
             "__MO_DATACYCLICCHECK_START must be located in noncached internal flash.") ;
#endif

#ifdef MEMLAY_DS0_LINK_OFFSET
    #if(MEMLAY_DS0_LINK_OFFSET != 0)
        #error "DS0 Link Offset is not anymore supported"
    #endif
#endif
#ifdef MEMLAY_DS1_LINK_OFFSET
    #if(MEMLAY_DS1_LINK_OFFSET != 0)
        #error "DS1 Link Offset is not anymore supported"
    #endif
#endif

/* finally export a required system symbol just to be sure, that the checks before are executed */
__MEMLAY_SB_START = MEMLAY_SB_START;

/* MEMLAY_LOCATE_VERSION */
#endif
/* LINK_RUN */
#endif
/* _LIBRARYABILITY_H */
#endif
/* _MEMLAY_LINKEPILOG_AUTO_CONFPRIV_H */
#endif
