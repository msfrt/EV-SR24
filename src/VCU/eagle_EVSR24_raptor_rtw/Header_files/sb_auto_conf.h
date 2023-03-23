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

#ifndef _SB_AUTO_CONF_H
#define _SB_AUTO_CONF_H

 /*!
 *********************************************************************
 * \moduldescription
 *           automatically generated configuration file for SB.
 *
 * \scope  CONF
 *********************************************************************
 */

/* Defines for boot type */
#define INTERN   0
#define EXTERN   1

/* Boot type of SB */
#define SB_BOOT_TYPE INTERN

/* Start address of SB fix ram area */
#define SB_RAM_FIX_START 0xC0000000

/* End address of SB fix ram area (last byte)*/
#define SB_RAM_FIX_END 0xC000013F

/* Start address of SB temp ram area */
#define SB_RAM_TEMP_START 0xD0000800

/* End address of SB temp ram area (last byte)*/
#define SB_RAM_TEMP_END 0xD00047FF

#endif
