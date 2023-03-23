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
 * $Filename__:i14229_cdi_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:19.12.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_cdi_pub$ 
 * $Variant___:1.7.0$ 
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
 * 1.7.0; 0     19.12.2008 MXA2SI
 *   Migrated from Clearcase :
 *   B_BASSVR.7.0.0
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229_CDI_PUB_H
#define _I14229_CDI_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      module header file for the service I14229_Cdi()
 *
 * \scope               [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/* Summary of configuration constants */
typedef struct
{
    const uint32  (*DTCGroup_pcu32);  /* Pointer to array of supported 'groupOfDTC'   */
    const uint8   (*DTCVisibility_pcu8); /* Pointer to array of visibility filter'    */
    uint32  GroupMask_u32;              /* Mask value to identify the group code        */
    uint8   MaxDTCGroup_u8;             /* Number of supported 'groupOfDTC'             */
    uint16  (*GetMoreParamsForNegResp)(uint8*);/* Fct. writes additional bytes to location of     */
                                                /* uint8*, and returns No of written bytes        */
} I14229_Cdi_Config_t;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void I14229_Cdi_Ini(void);

extern void I14229_Cdi(const void *Config_pv, DiagCom_Msg_t *Msg_ps);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END
#endif /* _I14229_CDI_PUB_H */
