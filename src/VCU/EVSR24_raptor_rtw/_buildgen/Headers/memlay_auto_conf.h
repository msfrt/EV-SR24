/*
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  __
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *  C O R E
 *
 ***************************************************************************************************
 */

#ifndef _MEMLAY_AUTO_CONF_H
#define _MEMLAY_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 *********************************************************************
 * \moduldescription
 *           automatically generated configuration file for MemLay.
 *
 * \scope  CONF
 *********************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */
#include "memlay_pub.h"

/* if this header is used in C-context, add type suffix to constant values */
/* in linker context, do not use suffixes                                  */
#ifdef LINK_RUN
   #define _MEMLAY_UL(x) x
#else
   #define _MEMLAY_UL(x) x##UL
#endif

#ifdef LINK_RUN
  /* check versions of linker command files */
  #if defined(MEMLAY_LOCATE_VERSION)
    #if (MEMLAY_LOCATE_VERSION != 1300)
      #error "MemLay locate version mismatch. Please update locate.inv"
    #endif
  #elif defined(MEMLAY_GROUP_VERSION)
    #if (MEMLAY_GROUP_VERSION != 1300)
      #error "MemLay group version mismatch. Please update group.inv"
    #endif
  #else
    #error "MemLay version mismatch. Please update group.inv and locate.inv or check for LINK_RUN"
  #endif
#endif

/* Define for Enabling SB version check for Real Time protection from SB 13.0.0 onwards. */
#define MEMLAY_RTPROTECT_SB_VERSION_CHECK_EXISTS

/* ib entry for module tprot*/
#define MEMLAY_TPROT_CFG_REF ((void*)(uint32)&Tprot_Config_cs)

/* Constant size of an epilog */
#define MEMLAY_SIZE_OF_EPILOG       _MEMLAY_UL(0x90)

/*  Defines for RealTime Protection interaction with MMO or RTMO */
#define MEMLAY_MMO_EXIST 

#define MEMLAY_RTMO_EXIST 

/*  RealTime Protection mode */
/* MEMLAY_EDRAM_START is only defined, if EDRAM is available */
#define MEMLAY_EDRAM_START          _MEMLAY_UL(0xBF000000)
#define MEMLAY_EDRAM_END            _MEMLAY_UL(0xBF0BFFFF)

/* Overlay register usage */
#define MEMLAY_NUM_OVERLAY_TOTAL    _MEMLAY_UL(0x10)
#define MEMLAY_NUM_OVERLAY_DME      _MEMLAY_UL(0x10)

#define MEMLAY_DS0_LINK_OFFSET      _MEMLAY_UL(0x0)

/* Offset of access to Dataset. External Flash or ETK-T is visible there */
#define MEMLAY_DATASET_LINK_OFFSET  _MEMLAY_UL(0x0)

/* Memlay layout configuration of CB */
#define MEMLAY_CB_START             _MEMLAY_UL(0x80000000)
#define MEMLAY_CB_END               _MEMLAY_UL(0x8000FD03)

/* Memlay layout configuration of ASW0 */
#define MEMLAY_ASW0_START           _MEMLAY_UL(0x80020000)
#define MEMLAY_ASW0_END             _MEMLAY_UL(0x801FFFFF)

/* Memlay layout configuration of ASW1 */
#define MEMLAY_ASW1_START           _MEMLAY_UL(0x80800000)
#define MEMLAY_ASW1_END             _MEMLAY_UL(0x8097FFFF)

/* Memlay layout configuration of DS0 */
#define MEMLAY_DS0_START            _MEMLAY_UL(0x80980000)
#define MEMLAY_DS0_END              _MEMLAY_UL(0x809FBFFF)
#define MEMLAY_DS0_PHYSEND          _MEMLAY_UL(0x809FFFFF)

/* Memlay layout configuration of TPROT */
#define MEMLAY_TPROT_START          _MEMLAY_UL(0x80014000)
#define MEMLAY_TPROT_END            _MEMLAY_UL(0x80017FFF)

/* Memlay layout configuration of SB */
#define MEMLAY_SB_START             _MEMLAY_UL(0x80018000)
#define MEMLAY_SB_END               _MEMLAY_UL(0x8001FFFF)

/* User defined memory blocks */
/* Memlay layout configuration of CB_RESERVED */
#define MEMLAY_CB_RESERVED_START    _MEMLAY_UL(0x8000FD04)
#define MEMLAY_CB_RESERVED_END      _MEMLAY_UL(0x8000FFFF)

/* Memlay layout configuration of CTPROT_RESERVED */
#define MEMLAY_CTPROT_RESERVED_START _MEMLAY_UL(0x80010000)
#define MEMLAY_CTPROT_RESERVED_END  _MEMLAY_UL(0x80013FFF)

/* Memlay layout configuration of PMU_OLDA */
#define MEMLAY_PMU_OLDA_START       _MEMLAY_UL(0xAFE70000)
#define MEMLAY_PMU_OLDA_END         _MEMLAY_UL(0xAFE77FFF)

/* Memlay layout configuration of LMU_RAM */
#define MEMLAY_LMU_RAM_START        _MEMLAY_UL(0xB0000000)
#define MEMLAY_LMU_RAM_END          _MEMLAY_UL(0xB001FFFF)

/* Memlay layout configuration of PMI_SPRAM */
#define MEMLAY_PMI_SPRAM_START      _MEMLAY_UL(0xC0000000)
#define MEMLAY_PMI_SPRAM_END        _MEMLAY_UL(0xC0007FFF)

/* Memlay layout configuration of DMI_RAM */
#define MEMLAY_DMI_RAM_START        _MEMLAY_UL(0xD0000000)
#define MEMLAY_DMI_RAM_END          _MEMLAY_UL(0xD001FFFF)

/* Memlay layout configuration of PCP_PRAM */
#define MEMLAY_PCP_PRAM_START       _MEMLAY_UL(0xF0050000)
#define MEMLAY_PCP_PRAM_END         _MEMLAY_UL(0xF0053FFF)

/* Memlay layout configuration of PCP_PCODE */
#define MEMLAY_PCP_PCODE_START      _MEMLAY_UL(0xF0060000)
#define MEMLAY_PCP_PCODE_END        _MEMLAY_UL(0xF0063FFF)

#define MEMLAY_NUM_PROT_RAM_INFO    _MEMLAY_UL(3)
#define MEMLAY_NUM_RAM_INFO         _MEMLAY_UL(5)
#define MEMLAY_NUM_CSA              _MEMLAY_UL(0x50)

/* #define MEMLAY_MPRAM_AREA_... */




#ifndef LINK_RUN
__PRAGMA_USE__eos__50ms_1s__constant__s32__START
extern const MemLay_RamInfo_t MemLay_ProtRamInfo_cas[MEMLAY_NUM_PROT_RAM_INFO];
extern const MemLay_RamInfo_t MemLay_RamInfo_cas[MEMLAY_NUM_RAM_INFO];
__PRAGMA_USE__eos__50ms_1s__constant__s32__END

#endif

/* _LIBRARYABILITY_H */
#endif
/* _MEMLAY_AUTO_CONF_H */
#endif
