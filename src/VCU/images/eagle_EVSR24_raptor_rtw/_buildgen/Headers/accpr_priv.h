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
 * $Filename__:accpr_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:accpr_priv$ 
 * $Variant___:2.6.0$ 
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
 * 2.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: accpr_priv.h
 *      Version: \main\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


/**
 ***************************************************************************************************
 * \moduledescription
 *                   Private Header File for Accpr Module
 *
 * \scope  INTERN
 ***************************************************************************************************
 */

#ifndef _ACCPR_PRIV_H
#define _ACCPR_PRIV_H





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
    bit16  readPerm_b16;     /* Read permission to the Block */
    bit16  writePerm_b16;    /* Write permission to the Block */
    /* a call of CheckFunction_pf returns access protection mask */
    bit16 (*CheckFunction_pf)(uint32 adStart_u32, uint32 size_u32, uint8 direction_u8);
} AccPr_Area_t;


/* memory area configuration */
typedef const struct
{
    const  AccPr_Area_t *Area_pcs;     /* Pointer to memory block */
    uint16 numArea_u16 ;               /* number of configured  blocks  */

} AccPr_AreaConfig_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__accpr__10ms__RAM__x32__START
extern  AccPr_AreaConfig_t   * AreaConfig_ps ;
extern  AccPr_AreaConfig_t   * AreaConfig_Dyn_ps ;
__PRAGMA_USE__accpr__10ms__RAM__x32__END

__PRAGMA_USE__accpr__10ms__constant__s32__START
extern  AccPr_AreaConfig_t   AccPr_Config_cs ;
extern  AccPr_AreaConfig_t   AccPr_Config_Dyn_cs ;
__PRAGMA_USE__accpr__10ms__constant__s32__END

__PRAGMA_USE__CODE__accpr__NormalSpeed__START
extern void AccPr_SetConfiguration(AccPr_AreaConfig_t  * Accpr_conf_ps ) ;
__PRAGMA_USE__CODE__accpr__NormalSpeed__END



#endif
