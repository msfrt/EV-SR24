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
 * $Filename__:dme_pub.h$
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
 * $Name______:dme_pub$
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
 * 1.16.0; 0     09.08.2010 HCJ2FE
 *   DCACHE support
 * 
 * 1.14.0; 0     23.11.2009 AWL2SI
 *   B_DME.14.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DME_PUB_H
#define _DME_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              dme_pub.h: calibration software - public headerfile
 *
 * \scope           API
 ***************************************************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */

/*
 *********************************************************************
 * Defines
 *********************************************************************
 */

/* Attention: most code does not support DME_NUM_PAGE > 2! */
#define DME_PAGE_0      0           /* reference page  */
#define DME_PAGE_1      1           /* working page    */
#define DME_NUM_PAGE    2           /* number of pages */

/* define for shutdown call in SYC */
#define DME_SHUTDOWN    Dme_Shutdown()
/* define for preliminary init in _main() */
#define DME_FIRST_INIT  Dme_FirstInit()

/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */

/* return values of the DME functions read, write, checksum, setcalpage, ... */
enum
{
    DME_ST_IDLE = 0,        /* No action was activated before, call GetStatus to set DME to IDLE */
    DME_ST_FINISHED,        /* Requested action completed successfully                  */
    DME_ST_REJECTED,        /* a dme driver function is already in use                  */
    DME_ST_OUT_OF_RAM,      /* Not enough RAM/regs available for requested action       */
    DME_ST_PAGE_NOT_VALID,  /* selected page is not available                           */
    DME_ST_BUSY             /* process started but not finished                         */
};

/* Infoblock for variant encoding (used by hexmod17) */
/* Must be located right after VDS MemLay Infoblock. */
/* Hexmod17 uses this dependency to get the address of this table */
typedef struct
{
    uint32 VariantPattern_u32;          /* variant pattern, value can be used to validate the     */
                                        /*   pressence of this structure                          */
    uint32 adVectTabFlashStart_u32;     /* address of first entry in master vector table,         */
    uint32 adVectTabFlashEnd_u32;       /* address of last entry in master vector table:          */
                                        /*   gives address of first byte after SERAP-dataset      */
                                        /*   last entry is not copied to variant vector tables    */
    uint32 adVectTabVariantStart_u32;   /* start address of memory reserved for variant vector    */
                                        /*   tables                                               */
    uint32 adVectTabVariantEnd_u32;     /* first address after the memory reserved for variant    */
                                        /*   vector tables                                        */
    uint32 adDataVariantStart_u32;      /* start address of memory reserved for data variants     */
    uint32 adDataVariantEnd_u32;        /* first address after the memory reserved for data       */
                                        /*   variants                                             */
    uint32 adDataReservedStart_u32;     /* start address of dataset area ignored by variant       */
                                        /*   encoding                                             */
    uint32 adDataReservedEnd_u32;       /* first address after the dataset area ignored by        */
                                        /*   variant encoding                                     */
    uint8  numVectTab_u8;               /* number of dataset variants (changed by hexmod17)       */
                                        /*   There must be (numVectTab_u8 - 1) vectortables       */
                                        /*   starting at adVectTabVariantStart_u32.               */
                                        /*   Each vector table has a size of                      */
                                        /*   (adVectTabFlashEnd_u32 - adVectTabFlashStart_u32)    */
} Dme_VariantInfoBlock_t;

typedef struct
{
    sint32 ctVectTabIndex_s32;
    uint32 ctStructOffset_u32;
} Dme_adCalData_t;

typedef struct
{
    uint32 adData_u32;  /* redirected address */
    uint32 numData_u32; /* size of redirected block */
} Dme_RedirectBlock_t;

/* Buffer for Dme_OvlSuspend() and Dme_OvlResume() */
/* Struct internals are not public! Only the name of the typedef is a fix interface */
/* memlay.h has to be reexported by dme.h */
typedef struct
{
    uint16 stEnable_u16;
}Dme_OvlSuspend_t;

/* Interface structures for copy to flash done in CB. */
/* Information buffer for Dme_CopyFlash* functions only: Structure elements must not be used from outside Dme */
/* Internal comment: Any structure layout change requires changing the value of ctVersion_u8. */
typedef struct
{
    uint32 adStart_u32;
    uint32 adLimit_u32;
    uint32 adOffset_u32;
}Dme_CopyFlashRedirect_t;

typedef struct
{
    uint8   ctVersion_u8;
    uint8   dummyfill_u8[3];
    uint8   numRedirectPre_u8;
    uint8   numRedirectPost_u8;
    uint16  numVectTabElement_u16;
    uint32* adVectTabFlash_pu32;
    uint32* adVectTabCopy_pu32;
    Dme_CopyFlashRedirect_t *Redirect_ps;
}Dme_CopyFlash_t;

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */

/* Dataset Variants */
/* Info block for variant management, necesarry for number of variants */
extern const Dme_VariantInfoBlock_t Dme_VariantInfoBlock_cs
    __attribute__ ((asection(".rodata.vds_infoblock","f=a")));

__PRAGMA_USE__dme__50ms_1s__RAM__x8__START
/* variable, visible in INCA */
extern sint8  Dme_ctDataSetVariant;

/* Inhibit variable for sleep mode of processor in background task. */
extern uint8  Dme_InhibitBgSleep_u8;
__PRAGMA_USE__dme__50ms_1s__RAM__x8__END

__PRAGMA_USE__dme__50ms_1s__RAM__x32__START
extern uint32 Dme_numBytesAvailable;
extern uint32 Dme_numBytesAvailableOvl;
__PRAGMA_USE__dme__50ms_1s__RAM__x32__END


/* Etk-T/Etk-S present state */
extern uint8 Dme_stETK_u8 __attribute__ ((asection(".zbss.ram0","f=awz")));

/* OCRAM present state */
extern uint8 Dme_stOcRam_u8 __attribute__ ((asection(".zbss.ram0","f=awz")));


/*
 *********************************************************************
 * Prototypes
 *********************************************************************
 */
__PRAGMA_USE__CODE__dme__NormalSpeed__START
/* Preliminary init in _main() */
extern void         Dme_FirstInit(void);

/* Processes */
extern void         Dme_Proc_Ini(void);
extern void         Dme_10ms_Proc(void);
extern void         Dme_Background_Proc(void);

/* Functions */
extern void         Dme_Reset(void);
extern uint32       Dme_Read(uint32 adRead_u32, uint32 ctCalPage_u32, uint32 numRead_u32,
                             uint8* xDestBuffer_pu8, uint32 ctUser_u32);
extern uint32       Dme_Write(uint32 adWrite_u32, uint32 ctCalPage_u32, uint32 numWrite_u32,
                              uint8* xSourceBuffer_pu8, uint32 ctUser_u32);
extern uint32       Dme_BuildChecksum(uint32 adStart_u32, uint32  ctCalPage_u32,
                                      uint32 numSize_u32, uint16* xChecksum_pu16,
                                      uint32 ctUser_u32);

extern uint32       Dme_SetCalPage(uint32 ctCalPage_u32);
extern uint8        Dme_GetCalPage(void);
extern uint32       Dme_GetState(uint32 ctUser_u32);

/* functions for selection of dataset variant */
/* dme_variant.c: */
extern void         Dme_LocateCalData(uint32 adData_u32,
                                      Dme_adCalData_t* const adCalData_cps);
extern uint32       Dme_GetAdCalDataByVariant(const sint32 ctVariant_cs32,
                                              const Dme_adCalData_t* const adCalData_cpcs);
extern uint32       Dme_GetSizeCalData(const Dme_adCalData_t* const adCalData_cpcs);

extern sint32       Dme_GetVariantByIdentifier(const uint32* const VariantId_cpcu32,
                                               const uint32 VariantId_cu32,
                                               const uint32 VariantIdMask_cu32);
extern void         Dme_SetDataVariant(sint32 ctVariant_s32);

/* dme_calmem.c */
extern void         Dme_Shutdown(void);

/* dme_ovlsuspend.c */
extern void         Dme_OvlSuspend(Dme_OvlSuspend_t* OvlSuspend_ps);
extern void         Dme_OvlResume(const Dme_OvlSuspend_t* const OvlSuspend_cpcs);

/* dme_cycliccalibration.c */
extern void         Dme_StartCyclicCalibration(uint32 ctUser_u32);
extern uint32       Dme_CheckCyclicCalibration(uint32 ctUser_u32);
extern uint32       Dme_SetCyclicCalibration(uint32 adVar_u32, uint32 ctCalPage_u32,
                                             uint32* adWrite_pu32, uint32 ctUser_u32);

/* dme_copyflashprepare.c */
extern Dme_CopyFlash_t* Dme_CopyFlashPrepare(uint32 ctCalPage_u32);

__PRAGMA_USE__CODE__dme__NormalSpeed__END

__PRAGMA_USE__CODE__dme__HighSpeed__START
/* dme_redirect.c */
extern Dme_RedirectBlock_t Dme_Redirect(uint32 adBlockData_u32);
__PRAGMA_USE__CODE__dme__HighSpeed__END

/* dme_copyflash.c: no pragma, use default section intentionally. File might be used in CB */
extern uint32       Dme_CopyFlashReadInit(const Dme_CopyFlash_t * const CopyFlash_cpcs);
extern void         Dme_CopyFlashRead(const Dme_CopyFlash_t * const CopyFlash_cpcs,
                                      uint32 adRead_u32, uint32 numRead_u32, uint8* xDestBuffer_pu8);

/*
 *********************************************************************
 * Inline Funktions
 *********************************************************************
 */

/**
 \api
 ***************************************************************************************************
 * Dme_EtkActive - Get current ETK detection state.
 *
 * Ask if ETK is active. Both ETK-T and ETK-S are detected.
 *
 * \param   no parameters used (void)
 * \return  return ETK state (only 8 bit used)
 * \retval  0:    no ETK
 * \retval  else: ETK active
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
/* function is only available, if memlay_auto_conf.h reexport was successfull */
#ifdef _MEMLAY_AUTO_CONF_H
MEMLAY_USE_FORCE_INLINE(uint32 Dme_EtkActive(void))
{
#if defined(MEMLAY_ETK_TYPE_ETKS) || defined(MEMLAY_ETK_TYPE_ETKT)
    return Dme_stETK_u8;
#else
    return 0;
#endif
}
#endif

/**
 \api
 ***************************************************************************************************
 * Dme_OcRamPresent - Get current OCRAM detection state.
 *
 * Ask if OCRAM = Optional Calibration RAM is present.
 *
 * \param   no parameters used (void)
 * \return  return OCRAM state (only 8 bit used)
 * \retval  0:    no OCRAM
 * \retval  else: OCRAM present
 * \seealso
 * \usedresources
 ***************************************************************************************************
 */
/* function is only available, if memlay_auto_conf.h reexport was successfull */
#ifdef _MEMLAY_AUTO_CONF_H
MEMLAY_USE_FORCE_INLINE(uint32 Dme_OcRamPresent(void))
{
#ifdef MEMLAY_OCRAM_START
    return Dme_stOcRam_u8;
#else
    return 0;
#endif
}
#endif



/* _DME_PUB_H */
#endif
