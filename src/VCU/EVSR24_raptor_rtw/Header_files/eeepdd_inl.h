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
 * $Filename__:eeepdd_inl.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MZT2FE$ 
 * $Date______:14.04.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:eeepdd_inl$ 
 * $Variant___:1.16.0$ 
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
 * 1.16.0; 0     14.04.2010 MZT2FE
 *   B_EEP.16.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EEEPDD_INL_H
#define _EEEPDD_INL_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                      EEEPDD EEP Emulation Page Device Data Flash
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

static __inline__ uint32 Eeepdd_GetPLCAdr(uint16 xPageIdx_u16);
static __inline__ void Eeepdd_SetPLCEntry(uint16 xPageIdx_u16, uint32 adPage_u32);


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

/* Macro to calculation array position inside PLC depending to page index */
#define EEEPDD_CALC_PLCIDX(PAGEIDX)  ((((PAGEIDX) & 0xFF00) != 0xCC00)                     \
                                       ? ((PAGEIDX) - 1)                                           \
                                       : (Eeepdd_MaxPageIndex_cu16 - ((PAGEIDX) & 0xFF) - 1))

/* Macro to get an entry from PLC */
#define EEEPDD_GET_PLCENTRY(PAGEIDX) ((((PAGEIDX) & 0xFF00) != 0xCC00)                             \
                                       ? (Eeepdd_PageLocationCache_au16[(PAGEIDX) - 1])            \
                                       : (Eeepdd_PageLocationCache_au16[Eeepdd_MaxPageIndex_cu16 - \
                                                                        ((PAGEIDX) & 0xFF) - 1]))


/**
 ***************************************************************************************************
 * Eeepdd_GetPLCAdr
 *
 * This inline function will deliver flash adress of a specific page
 * Adress will be read from page location cache (PLC). It is considered in which of both sectors
 * the requested page is located.
 * A detailed description of the structure of the PLC can be found in EEP documentation (ADD).
 *
 * \param   xPageIdx_u16   - Page index of requested page
 * \return  Adress in flash of requested page
 ***************************************************************************************************
 */
static __inline__ uint32 Eeepdd_GetPLCAdr(uint16 xPageIdx_u16)
{
    uint16 xEntry_u16;


    /* Read entry from page location cache */
    xEntry_u16 = (uint16)EEEPDD_GET_PLCENTRY(xPageIdx_u16);

    /* Return address
                                       calculate sector addignment */
    return (Eeepdd_adFlashStart_cau32[((xEntry_u16 & 0x8000) >> 15)]
                                      /* calculate real offset address */
                                     + ((uint32)(xEntry_u16 & 0x7FFF) * EEEPDD_PAGESIZE));
}


/**
 ***************************************************************************************************
 * Eeepdd_SetPLCEntry
 *
 * This inline function will set an entry in page location cache (PLC)
 * A detailed description of the structure of the PLC can be found in EEP documentation (ADD).
 *
 * \param   xPageIdx_u16   - Page index of corresponding page
 * \param   adPage_u32     - Adress of corresponding page
 * \return  none
 ***************************************************************************************************
 */
static __inline__ void Eeepdd_SetPLCEntry(uint16 xPageIdx_u16, uint32 adPage_u32)
{
    uint16 xEntry_u16;


    /* Set bit for sector assignment and subtract sector basis address */
    if (adPage_u32 >= Eeepdd_adFlashStart_cau32[EEEPDD_SECTOR_1])
    {
        xEntry_u16 = 0x8000;
        adPage_u32 -= Eeepdd_adFlashStart_cau32[EEEPDD_SECTOR_1];
    }
    else
    {
        xEntry_u16 = 0x0000;
        adPage_u32 -= Eeepdd_adFlashStart_cau32[EEEPDD_SECTOR_0];
    }

    /* Calculate and set relativ address */
    xEntry_u16 |= ((uint16)(adPage_u32 / EEEPDD_PAGESIZE) & 0x7FFF);


    /* Place entry in page location cache */
    Eeepdd_PageLocationCache_au16[EEEPDD_CALC_PLCIDX(xPageIdx_u16)] = xEntry_u16;
}

/*  _EEEPDD_INL_H */
#endif
