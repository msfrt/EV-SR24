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
 * $Filename__:$
 * $Author____:$
 * $Function__:$
 * $Domain____:$
 * $User______:$
 * $Date______:$
 * $Class_____:$
 * $Name______:$
 * $Variant___:$
 * $Revision__:$
 * $Type______:$
 * $State_____:$
 * $FDEF______:$
 *
 * List of changes
 * $History___:$
 ***************************************************************************************************
 </RBHead>*/

#ifndef _MLI_AUTO_CONF_H
#define _MLI_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H
 /*!
 *********************************************************************
 * \moduldescription
 *           automatically generated configuration file for MLI.
 *
 * \scope  CONF
 *********************************************************************
 */

 /*
 *********************************************************************
 * Includes
 *********************************************************************
 */
/* Module MLI0 is present in the used machine type TC_1793 */
#define MLI_MLI0_PRESENT

/* Module MLI1 is present in the used machine type TC_1793 */
#define MLI_MLI1_PRESENT

/* MLI module which is used for connection to emulation device */
#define MLI_ED_MODULE         MLI0

/* Number of devices connected to MLI */
#define MLI_NUM_DEV 	0	

/* Status of global monitoring */
#define MLI_MONITORING FALSE
/* Status of global debugging */
#define MLI_DEBUG FALSE
/* Status of error interrupts on module MLI0 */
#define MLI_ERROR_INT_MLI0 FALSE
/* Status of error interrupts on module MLI1 */
#define MLI_ERROR_INT_MLI1 FALSE


/* Type definition for MLI config: */
typedef struct
{
    uint32 adWindow_u32;
    uint32 adTCBAR_u32;
    uint32 adTRSTATR_u32;
    uint32 adRDATAR_u32;
    uint32 xMskRead_32;
    uint32 xMskWrite_32;
    uint8 xModule_u8;
}Mli_ConfType_t;




/* _LIBRARYABILITY_H                                                                              */
#endif

/* _MLI_AUTO_CONF_H                                                                               */
#endif
