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
 * $Filename__:std_types.h$
 * $Author____:LEH2ABT$
 * $Function__:Component Toolbox-Import$
 * $Domain____:SDOM$
 * $User______:RAT1COB$
 * $Date______:25.10.2010$
 * $Class_____:SWHDR$
 * $Name______:std_types$
 * $Variant___:1.14.0$
 * $Revision__:1$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.14.0; 1     25.10.2010 RAT1COB
 *   std_types.h updated
 * 
 * 1.14.0; 0     25.06.2010 MZT2FE
 *   
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/


#ifndef _STD_TYPES_H
#define _STD_TYPES_H


/**
 **********************************************************************************************************************
 * \moduledescription
 *           AUTOSAR Standard Types
 *           According to Document Version 1.3.0, Part of Release 4.0, Revision 1
 * \scope    INTERN
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
 */
#include "Platform_Types.h"
#include "Compiler.h"

/*
 **********************************************************************************************************************
 * Types and Defines
 **********************************************************************************************************************
 */

/* File version information, this defines are needed for RTA-OS 3.1/4.0
 * Maybe later RTA-OS Versions do not need this and we could remove this 3 defines!
 */
#define STD_AR_MAJOR_VERSION  4
#define STD_AR_MINOR_VERSION  0
#define STD_AR_PATCH_VERSION  0


/* File version information */
#define STD_TYPES_AR_RELEASE_MAJOR_VERSION     4
#define STD_TYPES_AR_RELEASE_MINOR_VERSION     0
#define STD_TYPES_AR_RELEASE_REVISION_VERSION  0

/* Because E_OK is already defined within OSEK, the symbol E_OK has to be shared. To avoid name clashes and     */
/* redefinition problems, the symbols have to be defined in the following way (approved within implementation): */
#ifndef STATUSTYPEDEFINED
    #define STATUSTYPEDEFINED
    #define E_OK 0x00      /* No error occurs            */
    typedef unsigned char StatusType; /* OSEK compliance */
#endif
#define E_NOT_OK   0x01    /* An error occurs            */

#define STD_HIGH   0x01    /* Physical state 5V or 3.3V  */
#define STD_LOW    0x00    /* Physical state 0V          */

#define STD_ACTIVE 0x01    /* Logical state active       */
#define STD_IDLE   0x00    /* Logical state idle         */

#define STD_ON     0x01    /* On state                   */
#define STD_OFF    0x00    /* Off state                  */


/* Standard Return Type */
typedef uint8 Std_ReturnType;


/* Standard Version Info Type */
typedef struct
{
    uint16 vendorID;
    uint16 moduleID;
	uint8 instanceID;
    uint8 sw_major_version;
    uint8 sw_minor_version;
    uint8 sw_patch_version;
} Std_VersionInfoType;


/* _STD_TYPES_H */
#endif
