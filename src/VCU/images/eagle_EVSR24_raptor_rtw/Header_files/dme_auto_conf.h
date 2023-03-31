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
 * $Filename__:dme_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:31.07.2009$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:dme_conf$ 
 * $Variant___:1.12.0$ 
 * $Revision__:0$ 
 * $Type______:HT$ 
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
 * 1.12.0; 0     31.07.2009 AWL2SI
 *   B_DME.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DME_AUTO_CONF_H
#define _DME_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              dme_auto_conf.h: calibration software - public configuration header file
 *
 * \scope           CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */



/*
 *********************************************************************
 * Defines
 *********************************************************************
 */

#define DME_NUM_MAX_COPY (64UL)     /* maximum number of bytes to copy */
#define DME_PTA_A9_RELATIVE

//#define DME_SERAM       /* no SERAM calibration                    */
#define DME_DATA_RETENTION_RAM
 /* #define DME_CHECKSUM_CRC32  - CRC32 algorithm not supported */


/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */

typedef enum
{
    DME_USER_CCP,
    DME_USER_DIAG,

    DME_NUM_USER            /* number of DME users          */
}Dme_User_t;

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */



/*
 *********************************************************************
 * Prototypes
 *********************************************************************
 */
__PRAGMA_USE__CODE__dme__NormalSpeed__START

__PRAGMA_USE__CODE__dme__NormalSpeed__END
/*
 *********************************************************************
 * Inline Functions
 *********************************************************************
 */

#ifdef DME_SERAM

/**
 *********************************************************************
 * Dme_SeramFastWriteTranslate - Translates calibration data addresses to SERAM.
 *
 * Translates calibration data addresses from a2l-addresses to address of SERAM working page.
 * This function is inteded to be used for fast cyclic caibration only. It must not be used for
 * general calibration.
 * It is only allowed to call this function, if Dme_SeramFastWriteAvailable returns TRUE
 * Attention: Function is only available when DME_SERAM is configured.
 *
 * \param       adData_cu32: calibration data address
 * \return      address of calibration data in SERAM emulation. Can be used for reading
 * \retval      not NULL: pointer to RAM
 * \retval      NULL:  address is not in area emulated by SERAM.
 * \seealso     Dme_SeramFastWriteAvailable
 * \usedresources
 *********************************************************************
 */
MEMLAY_USE_FORCE_INLINE(void* Dme_SeramFastWriteTranslate(const uint32 adData_cu32))
{
    void* Data_p = NULL;

    #ifdef MEMLAY_NUM_MAP_INFO
    uint32 ct_u32;
    for(ct_u32 = 0; ct_u32 < MEMLAY_NUM_MAP_INFO; ct_u32++)
    {
        if((adData_cu32 >= MemLay_MapInfo_cas[ct_u32].adFlashStart_u32) &&
           (adData_cu32 <=  MemLay_MapInfo_cas[ct_u32].adFlashEnd_u32))
        {
            Data_p = (void*)(adData_cu32 + MemLay_MapInfo_cas[ct_u32].OCRamOffset_u32);
        }
    }
    #else
        PARAM_UNUSED(adData_cu32);
    #endif

    return Data_p;
}
/* DME_SERAM */
#endif

/* _LIBRARYABILITY_H */
#endif
/* _DME_AUTO_CONF_H */
#endif
