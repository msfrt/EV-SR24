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
 * $Filename__:memlay_priv.h$ 
 * 
 * $Author____:AWL2SI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:23.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:memlay_priv$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     23.11.2009 AWL2SI
 *   B_MEMLAY.12.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/**
 ***************************************************************************************************
 * \moduledescription
 *  Private Header File for Memlay
 *
 * \scope  INTERN
 ***************************************************************************************************
 */

#ifndef _MEMLAY_PRIV_H
#define _MEMLAY_PRIV_H


#ifdef MEMLAY_RTMO_EXIST
    #if (RTMO_ENABLED == 1)
    #define MEMLAY_RTMO_ENABLED   1
    #else
    #define MEMLAY_RTMO_ENABLED   0
    #endif
#else
    #define MEMLAY_RTMO_ENABLED   0
#endif

#ifdef MEMLAY_MMO_EXIST
    #if (MMO_ENABLED == 1)
    #define MEMLAY_MMO_ENABLED   1
    #else
    #define MEMLAY_MMO_ENABLED   0
    #endif
#else
    #define MEMLAY_MMO_ENABLED   0
#endif


/*
 ***************************************************************************************************
 *    Type definitions
 ***************************************************************************************************
 */

/* element of Memory area description */
typedef struct
{
    uint32 adStart_u32;      /* Start Address of the Block */
    uint32 adEnd_u32;        /* End Address of the Block */
    uint16 readPerm_u16;     /* Read permission to the Block */
    uint16 writePerm_u16;    /* Write permission to the Block */
    /* a call of CheckFunction_pf returns access protection mask */
    bit16 (*CheckFunction_pf)(uint32 adStart_u32, uint32 size_u32, uint8 direction_u8);
} Memlay_AccPr_Area_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__eos__10ms__constant__s32__START
#if (MEMLAY_ACCPR)
extern Memlay_AccPr_Area_t const Memlay_AccPrDefArea_cas[MEMLAY_NUM_STAT_ELEM];
#endif
#if (MEMLAY_ACCPR_DYNAMIC)
extern Memlay_AccPr_Area_t const Memlay_AccPrDynDefArea_cas[MEMLAY_NUM_DYN_ELEM] ;
#endif
__PRAGMA_USE__eos__10ms__constant__s32__END


/* _MEMLAY_PRIV_H */
#endif
