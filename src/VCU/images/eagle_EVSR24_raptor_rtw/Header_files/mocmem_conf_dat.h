#ifndef _MOCMEM_CONF_DAT_H
#define _MOCMEM_CONF_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant ECU_GENR_SY */


/* ECU_GENR_SY Typ=sw */
#ifndef ECU_GENR_SY
  #define ECU_GENR_SY 2L
#elif (ECU_GENR_SY != 2L)
  #error >>>> 'ECU_GENR_SY' multiple defined
#endif


/* Referenced System Constant MOCRAM_CO_END_OF_TABLE */


/* MOCRAM_CO_END_OF_TABLE Typ=ul */
#ifndef MOCRAM_CO_END_OF_TABLE
  #define MOCRAM_CO_END_OF_TABLE 252645135ul
#endif


/* Local System Constant MOCMEM_CONF_COMPLETE_RAMCHK_MAIN */


/* MOCMEM_CONF_COMPLETE_RAMCHK_MAIN Typ=sl */
#ifndef MOCMEM_CONF_COMPLETE_RAMCHK_MAIN
  #define MOCMEM_CONF_COMPLETE_RAMCHK_MAIN 0L
#elif (MOCMEM_CONF_COMPLETE_RAMCHK_MAIN != 0L)
  #error >>>> 'MOCMEM_CONF_COMPLETE_RAMCHK_MAIN' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_DATAUSAPMEDC17_OFFSET */


/* MOCMEM_CONF_DATAUSAPMEDC17_OFFSET Typ=sl */
#ifndef MOCMEM_CONF_DATAUSAPMEDC17_OFFSET
  #define MOCMEM_CONF_DATAUSAPMEDC17_OFFSET 11L
#elif (MOCMEM_CONF_DATAUSAPMEDC17_OFFSET != 11L)
  #error >>>> 'MOCMEM_CONF_DATAUSAPMEDC17_OFFSET' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_DATAUSAPMEDC17_R9 */


/* MOCMEM_CONF_DATAUSAPMEDC17_R9 Typ=sl */
#ifndef MOCMEM_CONF_DATAUSAPMEDC17_R9
  #define MOCMEM_CONF_DATAUSAPMEDC17_R9 12L
#elif (MOCMEM_CONF_DATAUSAPMEDC17_R9 != 12L)
  #error >>>> 'MOCMEM_CONF_DATAUSAPMEDC17_R9' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_DATA_CHECK */


/* MOCMEM_CONF_DATA_CHECK Typ=sl */
#ifndef MOCMEM_CONF_DATA_CHECK
  #define MOCMEM_CONF_DATA_CHECK 13L
#elif (MOCMEM_CONF_DATA_CHECK != 13L)
  #error >>>> 'MOCMEM_CONF_DATA_CHECK' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_DATA_DME */


/* MOCMEM_CONF_DATA_DME Typ=sl */
#ifndef MOCMEM_CONF_DATA_DME
  #define MOCMEM_CONF_DATA_DME 13L
#elif (MOCMEM_CONF_DATA_DME != 13L)
  #error >>>> 'MOCMEM_CONF_DATA_DME' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_DATA_ROM */


/* MOCMEM_CONF_DATA_ROM Typ=sl */
#ifndef MOCMEM_CONF_DATA_ROM
  #define MOCMEM_CONF_DATA_ROM 10L
#elif (MOCMEM_CONF_DATA_ROM != 10L)
  #error >>>> 'MOCMEM_CONF_DATA_ROM' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_DMEOVL_REPEX_DISABLE */


/* MOCMEM_CONF_DMEOVL_REPEX_DISABLE Typ=sl */
#ifndef MOCMEM_CONF_DMEOVL_REPEX_DISABLE
  #define MOCMEM_CONF_DMEOVL_REPEX_DISABLE 0L
#elif (MOCMEM_CONF_DMEOVL_REPEX_DISABLE != 0L)
  #error >>>> 'MOCMEM_CONF_DMEOVL_REPEX_DISABLE' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_DSM_SUPPORT */


/* MOCMEM_CONF_DSM_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_DSM_SUPPORT
  #define MOCMEM_CONF_DSM_SUPPORT 0L
#elif (MOCMEM_CONF_DSM_SUPPORT != 0L)
  #error >>>> 'MOCMEM_CONF_DSM_SUPPORT' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_EXTREQ_SUPPORT */


/* MOCMEM_CONF_EXTREQ_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_EXTREQ_SUPPORT
  #define MOCMEM_CONF_EXTREQ_SUPPORT 0L
#elif (MOCMEM_CONF_EXTREQ_SUPPORT != 0L)
  #error >>>> 'MOCMEM_CONF_EXTREQ_SUPPORT' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_MSG_SUPPORT */


/* MOCMEM_CONF_MSG_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_MSG_SUPPORT
  #define MOCMEM_CONF_MSG_SUPPORT 1L
#elif (MOCMEM_CONF_MSG_SUPPORT != 1L)
  #error >>>> 'MOCMEM_CONF_MSG_SUPPORT' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_NOF_RAMCHK */


/* MOCMEM_CONF_NOF_RAMCHK Typ=ub */
#ifndef MOCMEM_CONF_NOF_RAMCHK
  #define MOCMEM_CONF_NOF_RAMCHK 32u
#endif


/* Local System Constant MOCMEM_CONF_NOF_ROMCHK */


/* MOCMEM_CONF_NOF_ROMCHK Typ=uw */
#ifndef MOCMEM_CONF_NOF_ROMCHK
  #define MOCMEM_CONF_NOF_ROMCHK 250u
#endif


/* Local System Constant MOCMEM_CONF_NUM_RAMBLOCK_AROER */


/* MOCMEM_CONF_NUM_RAMBLOCK_AROER Typ=ub */
#ifndef MOCMEM_CONF_NUM_RAMBLOCK_AROER
  #define MOCMEM_CONF_NUM_RAMBLOCK_AROER 7u
#endif


/* Local System Constant MOCMEM_CONF_NUM_RAMBLOCK_MAIN1 */


/* MOCMEM_CONF_NUM_RAMBLOCK_MAIN1 Typ=ub */
#ifndef MOCMEM_CONF_NUM_RAMBLOCK_MAIN1
  #define MOCMEM_CONF_NUM_RAMBLOCK_MAIN1 4u
#endif


/* Local System Constant MOCMEM_CONF_NUM_RAMBLOCK_MAIN2 */


/* MOCMEM_CONF_NUM_RAMBLOCK_MAIN2 Typ=ub */
#ifndef MOCMEM_CONF_NUM_RAMBLOCK_MAIN2
  #define MOCMEM_CONF_NUM_RAMBLOCK_MAIN2 4u
#endif


/* Local System Constant MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS */


/* MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS Typ=ub */
#ifndef MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS
  #define MOCMEM_CONF_NUM_RAMBLOCK_MAIN_SYS 5u
#endif


/* Local System Constant MOCMEM_CONF_NVRAM_HIST_SUPPORT */


/* MOCMEM_CONF_NVRAM_HIST_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_NVRAM_HIST_SUPPORT
  #define MOCMEM_CONF_NVRAM_HIST_SUPPORT 1L
#elif (MOCMEM_CONF_NVRAM_HIST_SUPPORT != 1L)
  #error >>>> 'MOCMEM_CONF_NVRAM_HIST_SUPPORT' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_RAM_RST_REPEXOK_DIS */


/* MOCMEM_CONF_RAM_RST_REPEXOK_DIS Typ=sl */
#ifndef MOCMEM_CONF_RAM_RST_REPEXOK_DIS
  #define MOCMEM_CONF_RAM_RST_REPEXOK_DIS 0L
#elif (MOCMEM_CONF_RAM_RST_REPEXOK_DIS != 0L)
  #error >>>> 'MOCMEM_CONF_RAM_RST_REPEXOK_DIS' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_ROM_ADD16_SUPPORT */


/* MOCMEM_CONF_ROM_ADD16_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_ROM_ADD16_SUPPORT
  #define MOCMEM_CONF_ROM_ADD16_SUPPORT 1L
#elif (MOCMEM_CONF_ROM_ADD16_SUPPORT != 1L)
  #error >>>> 'MOCMEM_CONF_ROM_ADD16_SUPPORT' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_ROM_ADD32_SUPPORT */


/* MOCMEM_CONF_ROM_ADD32_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_ROM_ADD32_SUPPORT
  #define MOCMEM_CONF_ROM_ADD32_SUPPORT 1L
#elif (MOCMEM_CONF_ROM_ADD32_SUPPORT != 1L)
  #error >>>> 'MOCMEM_CONF_ROM_ADD32_SUPPORT' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_ROM_CRC32_SUPPORT */


/* MOCMEM_CONF_ROM_CRC32_SUPPORT Typ=sl */
#ifndef MOCMEM_CONF_ROM_CRC32_SUPPORT
  #define MOCMEM_CONF_ROM_CRC32_SUPPORT 1L
#elif (MOCMEM_CONF_ROM_CRC32_SUPPORT != 1L)
  #error >>>> 'MOCMEM_CONF_ROM_CRC32_SUPPORT' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_ROM_USE_ADD16_OPT64 */


/* MOCMEM_CONF_ROM_USE_ADD16_OPT64 Typ=sl */
#ifndef MOCMEM_CONF_ROM_USE_ADD16_OPT64
  #define MOCMEM_CONF_ROM_USE_ADD16_OPT64 1L
#elif (MOCMEM_CONF_ROM_USE_ADD16_OPT64 != 1L)
  #error >>>> 'MOCMEM_CONF_ROM_USE_ADD16_OPT64' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_SERIES_TOOLCHAIN */


/* MOCMEM_CONF_SERIES_TOOLCHAIN Typ=sl */
#ifndef MOCMEM_CONF_SERIES_TOOLCHAIN
  #define MOCMEM_CONF_SERIES_TOOLCHAIN 1L
#elif (MOCMEM_CONF_SERIES_TOOLCHAIN != 1L)
  #error >>>> 'MOCMEM_CONF_SERIES_TOOLCHAIN' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_USE_DSYNC */


/* MOCMEM_CONF_USE_DSYNC Typ=sl */
#ifndef MOCMEM_CONF_USE_DSYNC
  #define MOCMEM_CONF_USE_DSYNC 1L
#elif (MOCMEM_CONF_USE_DSYNC != 1L)
  #error >>>> 'MOCMEM_CONF_USE_DSYNC' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_USE_NVRAM */


/* MOCMEM_CONF_USE_NVRAM Typ=sl */
#ifndef MOCMEM_CONF_USE_NVRAM
  #define MOCMEM_CONF_USE_NVRAM 0L
#elif (MOCMEM_CONF_USE_NVRAM != 0L)
  #error >>>> 'MOCMEM_CONF_USE_NVRAM' multiple defined
#endif


/* Local System Constant MOCMEM_CONF_WDT_TIME_RAM_REPEX */


/* MOCMEM_CONF_WDT_TIME_RAM_REPEX Typ=ul */
#ifndef MOCMEM_CONF_WDT_TIME_RAM_REPEX
  #define MOCMEM_CONF_WDT_TIME_RAM_REPEX 0ul
#endif


/* Local System Constant MOCMEM_CONF_WDT_TIME_ROM_REPEX */


/* MOCMEM_CONF_WDT_TIME_ROM_REPEX Typ=ul */
#ifndef MOCMEM_CONF_WDT_TIME_ROM_REPEX
  #define MOCMEM_CONF_WDT_TIME_ROM_REPEX 0ul
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_

#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MoCRAM_Co -- */
/* +++++ Addressschema Mo_DataNoCyclicCheckByte +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema $notInEprom +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema $notInEprom +++++ */


#undef _DAT_H
#endif /* _MOCMEM_CONF_DAT_H */
