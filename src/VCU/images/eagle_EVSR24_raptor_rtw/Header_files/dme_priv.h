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
 * $Filename__:dme_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JOP1COB$
 * $Date______:03.08.2011$
 * $Class_____:SWHDR$
 * $Name______:dme_priv$
 * $Variant___:1.17.0$
 * $Revision__:2$
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
 * 1.17.0; 2     03.08.2011 JOP1COB
 *   -DME_NUM_MAX_BYTES_IN_BACKGND made configurable
 *   
 *   -Review changes
 * 
 * 1.17.0; 1     28.07.2011 JOP1COB
 *   CRC32 Checksum implementation is made configurable
 * 
 * 1.17.0; 0     26.07.2011 JOP1COB
 *   DME: Support of CRC32 checksum algorithm
 * 
 * 1.16.0; 1     14.10.2010 HCJ2FE
 *   support for DCACHE and partly noncached dataset
 * 
 * 1.16.0; 0     03.09.2010 HCJ2FE
 *   DCACHE support
 * 
 * 1.15.0; 0     17.03.2010 JWI2SI
 *   support TC1793
 * 
 * 1.14.0; 0     23.11.2009 AWL2SI
 *   B_DME.14.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DME_PRIV_H
#define _DME_PRIV_H

/**
 *********************************************************************
 * \moduledescription
 *              dme_priv.h - all defs and vars for dme driver
 *
 * \scope           INTERN
 *********************************************************************
 */

/*
 *********************************************************************
 * Defines
 *********************************************************************
 */

/* enable DME debug traps */
//#define DME_DEBUG

/* Array sizes for free memory handling */
#define DME_NUM_CAL_RAM_FREE  2ul   /* number of free areas handled by driver       */
                                    /* must be larger or qual than any of the initialisation arrays in Dme_CalibrationRam_cs */

/* machine and memory type dependent initialisation values for elements of Dme_ps->Ovl_s */
/*   DME_*_MIN_OVLSIZE -> numMaxOvlSize_u32: minimum ovl size */
/*   DME_*_MAX_OVLSIZE -> numMinOvlSize_u16: maximum ovl size */
/*   DME_*_OVL_MEM_SEL -> RABRMemSelect_u8:  memory type bits of upper 8 bit of overlay RABR register */
#if ((MACHINE_TYPE == TC_1767) || (MACHINE_TYPE == TC_1797) || \
     (MACHINE_TYPE == TC_1782) || (MACHINE_TYPE == TC_1724))
/* internal Ovl size for tc1797/tc1767/tc1782/tc1724:   16 - 2k     */
#define DME_INT_MIN_OVLSIZE     0x10U
#define DME_INT_MAX_OVLSIZE    0x800U
#define DME_INT_OVL_MEM_SEL     0x00U
/* ED Ovl size for tc1797ED/tc1767ED/tc1782ED/tc1724ED: 1k - 128k   */
#define DME_ED_MIN_OVLSIZE     0x400U
#define DME_ED_MAX_OVLSIZE   0x20000U
#define DME_ED_OVL_MEM_SEL      0x40U
/* external Ovl size for tc1797ED/tc1797EO:             1k - 128k   */
#ifdef MEMLAY_OCRAM_OVERLAY
#define DME_EXT_MIN_OVLSIZE    0x400U
#define DME_EXT_MAX_OVLSIZE  0x20000U
#define DME_EXT_OVL_MEM_SEL     0x60U
#endif

#elif (MACHINE_TYPE == TC_1793)
/* common Ovl size for tc1793:                          32 - 128k   */
#define DME_MIN_OVLSIZE     0x20U
#define DME_MAX_OVLSIZE  0x20000U
/* internal Ovl for tc1793: */
#define DME_INT_OVL_MEM_SEL     0x00U
/* ED Ovl tc1793ED: */
#define DME_ED_OVL_MEM_SEL      0x40U
/* external Ovl for tc1793/tc1793ED: */
#define DME_EXT_OVL_MEM_SEL     0x60U

#else
#error "Machine type not supported."
#endif

/* Bits for Dme_ps->stEnable_u8 */
#define DME_ENABLE_PTA      0x01   /* serial calibration method DSERAP=PTA                           */
#define DME_ENABLE_OVL      0x02   /* serial calibration method overlay                              */
#define DME_ENABLE_SERAM    0x04   /* serial calibration method SERAM (full emulation in OCRAM)      */
#define DME_ENABLE_OCRAM    0x08   /* detection of external OCRAM allowed (also direkt ETKT access)  */
#define DME_ENABLE_OCRAM_OVL 0x10  /* overlay with external OCRAM allowed (also direkt ETKT access)  */

/* Bit for CalibrationRam */
#define DME_IS_OVL          0x01UL

/* Values for Dme_stCalMem_u8. */
/* Values > DME_CALMEM_INTERNAL support RAM data retention. */
#define DME_CALMEM_NONE     0   /* No calibration RAM available.                                  */
#define DME_CALMEM_INTERNAL 1   /* Internal calibration RAM used.                                 */
/*      DME_CALMEM_OCRAM16         External optional calibration RAM. Obsolete.                   */
#define DME_CALMEM_ED       2   /* Emulation Device used. Permanently powered.                    */
                                /* only usable if MEMLAY_EDRAM_START is defined                   */
#define DME_CALMEM_OCRAM    3   /* External RAM or ETKt with invalid dataset used. Permanently powered. */
                                /* Is used for SERAM, if SERAM is enabled in configuration        */
                                /* only usable if MEMLAY_OCRAM_ETKT_DME_START is defined          */
#define DME_CALMEM_OCRAM_RETENTION 4 /* Data retention area for DME_CALMEM_OCRAM                  */

/* Values for stCyclicCal_u8 */
#define DME_CYCLIC_CAL_DISABLE 0   /* cyclic calibration disabled. Reset state.             */
#define DME_CYCLIC_CAL_ENABLE  1   /* cyclic calibration enabled.                           */
#define DME_CYCLIC_CAL_OVL     2   /* cyclic calibration enabled, Overlay only.             */
                                   /* May only be set by Dme_WriteDo() in background task.  */

#define DME_FLASH_MASK         (~0x20000000ul)  /* Mask to get cached flash address */

/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */

/* Real address of current memory block */
typedef struct
{
    uint32 adData_u32;
    uint16 numData_u16;
    uint16 stIsRam_u16;
}Dme_MemoryBlock_t;

/* Calibration RAM to be used */
typedef struct
{
    uint32 adStart_u32; /* Start address */
    uint32 adNext_u32;  /* Address behind last Byte. */
                        /* When last bit is set, memory can be used for overlay */
}Dme_CalibrationRam_t;

/* state of dme driver, shows which functionality is active */
enum
{
    DME_ST_BUSY_WRITE_COMPARE = DME_ST_BUSY,/* write in progress: compare data                    */
    DME_ST_BUSY_WRITE_COPY,                 /* write in progress: allocate memory                 */
    DME_ST_BUSY_WRITE_COPY_OVL,             /* write in progress: allocate overlay memory         */
    DME_ST_BUSY_WRITE_DO,                   /* write in progress: copy changed data               */
    DME_ST_BUSY_CHECKSUM_8ADD16,             /* calculates checksum: add uint8 to uint16           */
	DME_ST_BUSY_CHECKSUM_CRC32               /* calculates checksum: CRC32 algorithm               */	
};

typedef struct
{
    uint32 adRequest_u32;           /* start address of action (write or checksum)                */
    void*  xBuffer_p;               /* pointer to data for action (write data or checksum)        */
    uint32 numBytes_u32;            /* number of bytes for action                                 */
    uint32 numBytesProcessed_u32;   /* number of bytes already processed                          */
    uint8  ctCalPage_u8;            /* calibration page used for action requested by tool         */
    uint8  stRequest_u8;            /* current action, must only set by Dme_SetAction() if idle   */
    uint8  stRequestCyclicCal_u8;   /* modifier for write action: cyclic calibration,             */
                                    /* cleared by Dme_SetAction()                                 */
}Dme_UserData_t;

typedef struct
{
    /* pointer to memory range */
    uint32 adBegin_u32;
    uint32 adNext_u32;
}Dme_MemoryConfig_t;

/* DME_OVL only */
typedef struct Dme_OvlSet_s
{
    uint32  regRABR_u32;            /* redirected address, 0 if Ovl disabled */
    uint32  regOTAR_u32;            /* Overlay address to be replaced        */
    uint32  regOMASK_u32;           /* Overlay address mask                  */
    struct Dme_OvlSet_s *Next_ps;   /* next element of link chain            */
} Dme_OvlSet_t;

typedef struct
{
    Dme_OvlSet_t OvlSet_s;                  /* first element of link chain for overlay register mirror */
    uint16  stOvlEnable_au16[DME_NUM_PAGE]; /* 2 overlay enable bit arrays */
    #ifndef DME_MAX_OVLSIZE
    uint32  numMaxOvlSize_u32;              /* maximum ovl size                     */
    uint16  numMinOvlSize_u16;              /* minimum ovl size                     */
    #endif
    uint8   RABRMemSelect_u8;               /* upper 8 bit of RABR register containing memory type bits */
}Dme_Ovl_t;

/* DME_PTA only */
typedef struct
{
    /* array with addresses of all avail. pages */
    uint32* adPage_apu32[DME_NUM_PAGE];
    uint32* adVectTabReference_pu32;
}Dme_Pta_t;

typedef struct
{
    /* pointer to flash ref. vecttable */
    uint32* adVectTabFlash_pu32;
    uint32  numVectTabElement_u32;
}Dme_PtaConfig_t;

/*
 *********************************************************************
 * Variables and Defines of linker labels
 *********************************************************************
 */
/* DME_PTA only */
MEMLAY_USE_LABEL(extern void*, __PTA_STARTVECT[]);        /* vecttab for PTA data begin           */
MEMLAY_USE_LABEL(extern void*, __PTA_ENDVECT[]);          /* PTA vecttab endpointer               */
MEMLAY_USE_LABEL(extern void*, __DME_VECTTAB_ELEMENTS[]); /* number of vectors in vecttab         */
MEMLAY_USE_LABEL(extern void*, __PTA_DATA_START[]);
MEMLAY_USE_LABEL(extern void*, __PTA_DATA_END[]);
MEMLAY_USE_LABEL(extern void*, __PTA_DATA0_END[]);

/* Memory for DSERAP dataset variants */
MEMLAY_USE_LABEL(extern void*, __VDS_FREE_START[]);
MEMLAY_USE_LABEL(extern void*, __VDS_FREE_END[]);

/* non ED-Memory for calibration */
MEMLAY_USE_LABEL(extern void*, __ASW_RAM0_FREE_START[]);
MEMLAY_USE_LABEL(extern void*, __ASW_RAM0_FREE_END[]);
MEMLAY_USE_LABEL(extern void*, __ASW_RAM1_FREE_START[]);
MEMLAY_USE_LABEL(extern void*, __ASW_RAM1_FREE_END[]);
MEMLAY_USE_LABEL(extern void*, __ASW_RAM2_FREE_START[]);
MEMLAY_USE_LABEL(extern void*, __ASW_RAM2_FREE_END[]);

/* ED-Memory for calibration */
MEMLAY_USE_LABEL(extern void*, __EDRAM_DYN_START[]);
MEMLAY_USE_LABEL(extern void*, __EDRAM_DYN_END[]);

/* Import of linker labels for initialized EDRAM */
MEMLAY_USE_LABEL(extern uint32, __EDRAM_CLEAR_START[]);
MEMLAY_USE_LABEL(extern uint32, __EDRAM_CLEAR_SIZE[]);
MEMLAY_USE_LABEL(extern uint32, __EDRAM_PROTECTED_START[]);
MEMLAY_USE_LABEL(extern uint32, __EDRAM_PROTECTED_SIZE[]);
MEMLAY_USE_LABEL(extern uint32, __EDRAM_STANDBY_START[]);
MEMLAY_USE_LABEL(extern uint32, __EDRAM_STANDBY_SIZE[]);
MEMLAY_USE_LABEL(extern uint32, __EDRAM_CALVAR_START[]);
MEMLAY_USE_LABEL(extern uint32, __EDRAM_CALVAR_SIZE[]);

/* Import of linker labels for measurement points area */
MEMLAY_USE_LABEL(extern uint32, __MPRAM_START[]);
MEMLAY_USE_LABEL(extern uint32, __MPRAM_END[]);
MEMLAY_USE_LABEL(extern uint32, __MPRAM_SIZE[]);

/* vector table in ETK: defined in linker command file */
/* Dme_adVectTabETK_au32 must be located in noncached memory */
MEMLAY_USE_LABEL(extern uint32, Dme_adVectTabETK_au32[]);

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */
__PRAGMA_USE__dme__1_5ms__RAM__s32__START
extern Dme_UserData_t Dme_UserData_as[]; /* initialized on Software-Reset, set on DME-Reset */
__PRAGMA_USE__dme__1_5ms__RAM__s32__END

extern volatile uint32 Dme_RamDetectVar_au32[2]
    __attribute__ ((asection(".bss.ocram_write","f=aw")));
extern uint32 Dme_CompRefETK_u32
    __attribute__ ((asection(".bss.distab_write","f=aw")));

__PRAGMA_USE__dme__1_5ms__RAM__x8__START
/* Calibration Memory type. used for reinitialization */
extern uint8 Dme_stCalMem_u8;
__PRAGMA_USE__dme__1_5ms__RAM__x8__END

/* ********************************** */

__PRAGMA_USE__dme__1_5ms__constant__s32__START
/* DME_PTA only */
extern const Dme_PtaConfig_t Dme_PtaConfig_cs;
__PRAGMA_USE__dme__1_5ms__constant__s32__END

__PRAGMA_USE__dme__50ms_1s__RAM__x1__START
/* only available if OCRAM configured */
extern _bit Dme_stOcRamDetect_b;
__PRAGMA_USE__dme__50ms_1s__RAM__x1__END

/* Variables for EDRAM initialization */
MEMLAY_USE_PROTRAM(extern uint8, Dme_stEdProtRam_u8);
extern uint32 Dme_CompRefEdRamStandby_u32 __attribute__ ((asection(".bss.edram_standby","f=aw")));
extern uint32 Dme_EdRamStandbyCs_u32      __attribute__ ((asection(".bss.edram_standby_cs","f=aw")));
extern uint32 Dme_EdRamCalVarCs_u32       __attribute__ ((asection(".bss.edram_calvar_cs","f=aw")));

/*
 *********************************************************************
 * Prototypes (local)
 *********************************************************************
 */

__PRAGMA_USE__CODE__dme__NormalSpeed__START
extern Dme_MemoryBlock_t Dme_GetCurrentBlock(const Dme_UserData_t* UserData_pcs);

extern uint32 Dme_SetAction(uint32 adRequest_u32, uint32 ctCalPage_u32, uint32 numBytes_u32,
                            uint8* xBuffer_pu8, uint32 stRequest_u32, Dme_UserData_t* UserData_ps);
extern void   Dme_BgChecksum(Dme_UserData_t *UserData_ps);

extern void   Dme_BgChecksumCrc32(Dme_UserData_t *UserData_ps);

extern void   Dme_WriteCompare(Dme_UserData_t* UserData_ps, Dme_MemoryBlock_t MemBlock_s);
extern void   Dme_WriteCopy(Dme_UserData_t *UserData_ps);
extern void   Dme_WriteDo(Dme_UserData_t *UserData_ps, Dme_MemoryBlock_t MemBlock_s);
extern uint32 Dme_ResetDo(uint32 stReset_u32);

/* dme_calmem.c */
extern void   Dme_OCRamDetect(void);
extern void   Dme_CalMemInitList(Dme_CalibrationRam_t* CalibrationRamFree_ps, uint32 stCalMem_u32);
extern void   Dme_CalcMemFree(const Dme_CalibrationRam_t* CalibrationRamFree_pcs);
extern uint32 Dme_DataRetentionChecksum(void);
extern uint32* Dme_Alloc(uint32 numReqSize_u32);

/* dme_variant.c */
extern uint32* Dme_GetDataVariantVecTab(void);

/*
 *********************************************************************
 * Prototypes for Pta
 *********************************************************************
 */
extern void    Dme_SetCalPagePta(uint32 ctCalPage_u32);
extern sint32  Dme_GetPtaGroup(uint32 adData_u32);

/*
 *********************************************************************
 * Prototypes for Ovl
 *********************************************************************
 */
extern uint32  Dme_WriteCopyOvl(const Dme_UserData_t *UserData_pcs);

extern void    Dme_EnableOverlayArea(uint32 stOvlEnable_u32);

/*
 *********************************************************************
 * Prototypes for SERAM
 *********************************************************************
 */
extern void   Dme_SetCalPageSeram(uint32 ctCalPage_u32);
__PRAGMA_USE__CODE__dme__NormalSpeed__END
/*
 *********************************************************************
 * Inline Functions
 *********************************************************************
 */
/* prevent following functions to be used in library, as they requre configuration defines */
#ifndef _LIBRARYABILITY_H
/**
 *********************************************************************
 * Dme_MapA2LtoLinkData - map calibration data addresses.
 *
 * Translate calibration data addresses from a2l-Addresses to mapped dataset.
 * This mapping is used for calibrating NOSERAP data with ETK-T
 *
 * \param       address to be translated
 * \retval      translated address
 * \seealso
 * \usedresources
 *********************************************************************
 */
MEMLAY_USE_FORCE_INLINE(uint32 Dme_MapA2LtoLinkData(uint32 adData_u32))
{
    /* copy all calibration data listed in map info table */
    #if (MEMLAY_DATASET_LINK_OFFSET != 0)
    #error "Link Offset is not anymore supported."
    #endif

    return adData_u32;
}

#if (MEMLAY_DATASET_LINK_OFFSET != 0)
/**
 *********************************************************************
 * Dme_EtkTMapFlash - Dataset mapping to flash.
 *
 * Make Flash visible at address of remapped Dataset.
 * Can only be used, when Dataset is in external Flash.
 * Mapping must match to basic memory layout defined in memlay_process.pm
 *
 * \param   no parameters used (void)
 * \return  no return (void)
 * \retval  void
 * \seealso
 * \usedresources
 *********************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void Dme_EtkTMapFlash(void))
{
    #if (MACHINE_TYPE == TC_1797)
        /* make Flash visible in a 16 MByte area */
        SrvB_SetBitField(EBU.ADDRSEL[0], EBU_ADDRSEL_MASK_POS, EBU_ADDRSEL_MASK_LEN, 3UL);

        /* set DCACHE invalidation flag */
        OVC.OCON = (1ul << OVC_OCON_DCINVAL_POS);
    #else
        #error "External bus link offset is only supported on TC1797"
    #endif

    return;
}

/**
 *********************************************************************
 * Dme_EtkTMapEnable - Dataset mapping to ETK-T.
 *
 * Make ETK-T visible at address of remapped Dataset
 * Can only be used, when Dataset is in external Flash.
 * Mapping must match to basic memory layout defined in memlay_process.pm
 *
 * \param   no parameters used (void)
 * \return  no return (void)
 * \retval  void
 * \seealso
 * \usedresources
 *********************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void Dme_EtkTMapEnable(void))
{
    #if (MACHINE_TYPE == TC_1797)
        /* make ETK-T visible in a 64 MByte area */
        SrvB_SetBitField(EBU.ADDRSEL[2], EBU_ADDRSEL_MASK_POS, EBU_ADDRSEL_MASK_LEN, 1UL);
        /* make Flash visible in a 8 MByte area */
        SrvB_SetBitField(EBU.ADDRSEL[0], EBU_ADDRSEL_MASK_POS, EBU_ADDRSEL_MASK_LEN, 4UL);

        /* set DCACHE invalidation flag */
        OVC.OCON = (1ul << OVC_OCON_DCINVAL_POS);
    #else
        #error "External bus link offset is only supported on TC1797"
    #endif
    return;
}
/* #endif MEMLAY_DATASET_LINK_OFFSET != 0 */
#endif
/* #endif _LIBRARYABILITY_H */
#endif
/* _DME_PRIV_H */
#endif
