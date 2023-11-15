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
 * $Filename__:cbversion.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:customer configurable file$
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:06.09.2011$
 * $Class_____:SWHDR$
 * $Name______:cbversion$
 * $Variant___:78.0.0$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 78.0.0; 1     06.09.2011 JAG2ABT
 *   Additional logistics data
 * 
 * 78.0.0; 0     24.03.2011 JAG2ABT
 *   Project Ferrari specific
 * 
 * 65.0.0; 0     07.09.2010 DUE2ABT
 *   new version for ferrari maserati
 * 
 * 1.1.0; 0     04.11.2008 MXA2SI
 *   .
 * 
 * 1.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Migrated from MX17 eASEE for DA Move VC4
 *   SWHDR : cbversion  1.0.0_ME1770_1.20; 0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CBVERSION_H
#define _CBVERSION_H

/**
 *********************************************************************
 * \moduledescription
 *              CB version
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
#define CB_VERSION_LEN            41
#define CB_SWVERSION_LEN          2
#define CB_HWVERSION_LEN          1
#define CB_HWSNR_LEN              11
#define CB_SWTTINR_LEN            11
#define CB_SWSNR_LEN              10
#define CB_ECUNR_LEN              11
#define CB_SUPPCODE_LEN           0x02
#define CB_SWRELINFO_LEN          0x03
#define CB_DIAGINFO_LEN           0x04
#define CB_ACTV_DIAG_INFO_LEN     3
#define CB_PROGDATE_LEN           4
#define CB_TESTERCODE_LEN         10
#define CB_VIN_LEN                17
#define CB_EROTAN_LEN             6
#define CB_SNOET_LEN              5
#define CB_SWNAME_LEN             21
#define CB_BRIF_LEN               8

/*
  Define the assignment Modul => Index in Version Info and Fingerprint
*/

#define CB_IDX_BOOT  0
#define CB_IDX_CODE  1
#define CB_IDX_DATA  2

/*
 *********************************************************************
 * Type definition
 *********************************************************************
 */

/* If changing this struct,
   consider the Version_cu8 must be at the first place to fulfil the InfoTab expectation.
   Otherwise adaptions to Int InfoTable are necessary (see Memlay_Info_conf)
   !!! HwSuppCode_cs must be last Element of structure, because it may be accessed adress stable
       from Drive Software

*/
typedef struct
{
  uint8 Version_cu8[CB_VERSION_LEN];              /* CB version string                            */
  uint8 SwPartNum[CB_SWSNR_LEN];                  /* CB SW Part Number, A-Sachnummer              */
  uint8 ActvDiagInfo_cs[CB_ACTV_DIAG_INFO_LEN];   /* Activ diagnostic info                        */
  uint8 SWVersionInfo_cs[CB_SWVERSION_LEN];       /* bootsoftware version information             */
  uint8 SuppCode_cs[CB_SUPPCODE_LEN];             /* Software supplier code                       */
  uint8 DiagInfo_cs[CB_DIAGINFO_LEN];             /* diagnostic specific information              */
  uint8 SwRelDate[CB_SWRELINFO_LEN];              /* CB Release Date                              */
  uint8 HwSuppCode_cs[CB_SUPPCODE_LEN];           /* Hardware supplier code, must be last element */
}CB_EcuId_t;


 typedef struct
 {
   uint32 Validation; /* Version of CB Compatibility Id */
   uint32 Id;
 }CB_HwId_t;


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




#endif

