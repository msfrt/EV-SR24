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
 * $Filename__:cb_info_conf.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:definition of einum for customer InfoTab$
 * $Domain____:SDOM$
 * $User______:DUE2ABT$
 * $Date______:07.09.2010$
 * $Class_____:SWHDR$
 * $Name______:cb_info_conf$
 * $Variant___:65.0.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 65.0.0; 0     07.09.2010 DUE2ABT
 *   new version for ferrari maserati
 * 
 * 3.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Migrated from MX17 eASEE for DA Move VC4
 *   SWHDR : cb_info_conf  007_B.2.0.0_G1.10.0; 1
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CB_INFO_CONF_H
#define _CB_INFO_CONF_H

/**
 *********************************************************************
 * \moduledescription
 *          Interface header file for customer CB INFO blocks
 *
 * \scope           [CONF]
 *********************************************************************
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

/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */

/* Infos in internal info table of CB                                       */
/* The first elements of the info Table are described in sbinfo_prot_conf.h */
/* Here can be defined customer specific elements                           */
typedef enum
{
    CB_REPROG_INI_E = CB_NUMSB_INT_INFO_E,
    CB_CBCOMPID_E,   /* Compatibility Id for CB Exchange */
    CB_NUMCB_INT_INFO_E
}CBExt_IntInfo_t;


/* Infos in external info table of CB                                       */
/* Here can be defined customer specific elements                           */
/* These entries can be used from external tools (container tool)           */
typedef enum
{
    CB_SWSNR_E,
    CB_SWVERSION_E,
    CB_SWVERSIONBOOT_E,
    CB_ACTVDIAGINFO_E,
    CB_SECA_MASKALGO_E,
    CB_TPROT_PUBKEYNAME_E,
    CB_TPROT_PUBKEY_E,
    CB_NUMCB_EXT_INFO_E
}CBExt_ExtInfo_t;

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */

/*
 *********************************************************************
 * used functions
 *********************************************************************
 */
extern const void * const CB_IntInfo_cap[] __attribute__ ((asection (".info_tab,\"a\",@progbits")));
extern const void * const CB_ExtInfo_cap[] __attribute__ ((asection (".info_tab,\"a\",@progbits")));


/* _CB_INFO_CONF_H                                                                                */
#endif

