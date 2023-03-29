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
 * $Filename__:uaccappl_ecuid_conf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAH5KOR$
 * $Date______:23.06.2015$
 * $Class_____:SWHDR$
 * $Name______:uaccappl_ecuid_conf$
 * $Variant___:NEWEAGLE$
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
 * NEWEAGLE; 0     23.06.2015 DAH5KOR
 *   ComDia package customised for New Eagle projects
 * 
 * 5.1.0; 3     16.01.2012 JAG2ABT
 *   Review findings
 * 
 * 5.1.0; 2     25.11.2011 JAG2ABT
 *   corrected fingerprint init value
 * 
 * 5.1.0; 1     24.11.2011 JAG2ABT
 *   corrections in documentation
 * 
 * 5.1.0; 0     30.09.2011 JAG2ABT
 *   new: functions for virt. signals to read bit variables
 *   first set of DIDs
 *   additional logistics data
 *   initialisation of the max. reprog. attempts
 * 
 * 5.0.0; 2     22.07.2011 JAG2ABT
 *   Changes after review
 * 
 * 5.0.0; 1     05.05.2011 JAG2ABT
 *   Platform Ferrari_Maserati
 * 
 * 5.0.0; 0     23.11.2010 DUE2ABT
 *   first version for maserati
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _UACCAPPL_ECUID_CONF_H
#define _UACCAPPL_ECUID_CONF_H

#include PROJECT_H                  /* project specific header file       */

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Interface of access utilities
 *
 * \scope               [API]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define UACCAPPL_SUPPCODE_RB         {0x00, 0x03}  /* DC's Supplier Code for Robert Bosch GmbH                     */




/**************************************************************************************************/
/* Diagnostic specification information                                                           */

#define UACCAPPL_DIAGSPEC_PROTVER  0x07               /* Byte 0:  Diagnostic Protocol Version         */
#define UACCAPPL_DIAGSPEC_REQDEF   0x67               /* Byte 1:  Requirements Defintion Version      */
#define UACCAPPL_DIAGSPEC_REQSTD   0xB8               /* Byte 2:  Requirements standard               */
#define UACCAPPL_DIAGSPECINFO     { UACCAPPL_DIAGSPEC_PROTVER, \
                                    UACCAPPL_DIAGSPEC_REQDEF,  \
                                    UACCAPPL_DIAGSPEC_REQSTD }


/***************************************************************************************************
                       Some defines needed for CCP Exchange ID service
                       see also UACCAPPL_A2LTRANSLATION_CONF.h
***************************************************************************************************/

#define UACCAPPL_ECUNAME           {'M','E','D','1','7','3','4'} /* ME17.7 or MED177, 6 character or numers + 1 space (space at the end is obligatory) */
#define UACCAPPL_INFO1_ASC_LEN    9  /* Length of INFO Address string including terminating space */
#define UACCAPPL_ECUNAME_LEN      7  /* Length of ECU Name string including terminating space     */
#define UACCAPPL_A2LNAME_LEN     32  /* (MAX) Length of A2LName string including terminating zero */

#ifndef SY_CANVAR
  #error >>>> 'SY_CANVAR' undefined
#elif (SY_CANVAR == 5)
/* define the first initialisation value for the SW release info  */
#define UACCAPPL_SWRELINFO_YEAR   11 /* Byte 0:  SW Release year  */
#define UACCAPPL_SWRELINFO_MONTH  12 /* Byte 1:  SW Release month */
#define UACCAPPL_SWRELINFO_DAY     1 /* Byte 2:  SW Release day   */

/***************************************************************************************************
                       Build the Identifiying structure PRG
***************************************************************************************************/
#define UACCAPPL_ECUID_PRG    \
{ (uint8*)NULL,           /* Adress of EPROM Kennung - Copy of EPK in Program Section             */\
  UACCAPPL_DIAGSPECINFO,  /* DiagnosticSpecificationInformation                                   */\
  (const uint8*)&RP_MB_NUMBER_PST,        /* SoftwarePartNumber (A-Sachnum., MB-Num.) Address (Flash location)  */\
  (const uint8*)&RP_UAccAppl_SwVerInfoAsw_CA, /* SoftwareVersionInformation (Year, Week, Patchlevel)(Flash location)*/\
  UACCAPPL_SUPPCODE_RB,   /* Supplier Code of Software Supplier for Program                       */\
}

/***************************************************************************************************
                       Build the Identifiying structure DATA
***************************************************************************************************/
#define UACCAPPL_ECUID_DAT  \
{ (const uint8*)&RP_UAccAppl_SwVerInfoDs_CA, /* SoftwareVersionInformation (Year, Week, Patchlevel)(Flash location)*/\
  (const uint8*)&RP_MB_NUMBER_DATA,        /* SoftwarePartNumber (A-Sachnum., MB-Num.) Address (Flash location)  */\
  (const uint8*)&RP_MB_NUMBER_ECU,         /* ECUPartNumber (A-Sachnum., MB-Num.) Address (Flash location)       */\
  (const uint8*)&RP_UAccAppl_FlowNumber_ASC,   /* FlowNumber       */\
  (const uint8*)NULL,                      /* Info 1 Label Address (Flash location)                               */\
  (const uint8*)NULL,                      /* Address of EPROM Kennung - Original EPK in Data section              */\
  (const uint8*)&UAccAppl_EcuIDA2l[0],     /* Address of customers a2l Filename                                   */\
  (const uint8*)&RP_UAccAppl_SwSupplierDs_CA, /* Supplier Code of Software Supplier for Data                        */\
  (const uint8*)&RP_UAccAppl_ActvDiagInfo_CA,  /* Active Diagnsotic Information                                  */\
}

#elif (SY_CANVAR == 4)

/***************************************************************************************************
                       Build the Identifiying structure PRG
***************************************************************************************************/
#define UACCAPPL_ECUID_PRG    \
{ NULL,                       /* Address of EPROM Kennung - Copy of EPK in Program Section */\
  (const uint8*)&RP_UACC_SSECUSN_ASC, /* Software Part Number (Flash location) */\
  (const uint8*)&RP_UACC_SSECUSVN_CA, /* Software Version Information (Flash location) */\
  (const uint8*)&RP_UACC_SWNAME_ASC,  /* Software Name (Flash location) */\
  (const uint8*)&RP_UACC_BRIF_ASC,    /* BRIF (Flash location) */\
  (const uint8*)&RP_UACC_PD_CA,       /* PD Programming Date (Flash location) */\
}

/***************************************************************************************************
                       Build the Identifiying structure DATA
***************************************************************************************************/
#define UACCAPPL_ECUID_DAT  \
{ (const uint8*)&RP_UACC_VMECUHN_ASC,  /* ECU Part Number Address (Flash location) */\
  (const uint8*)&RP_UACC_SSECUHN_ASC, /* Hardware Part Number Address (Flash location) */\
  (const uint8*)&RP_UACC_SSECUHVN_C,  /* Hardware Version Info Address (Flash location) */\
  (const uint8*)&RP_UACC_EROTAN_ASC,  /* EROTAN  Address (Flash location) */\
  (const uint8*)&RP_SNOET,    /* SNOET  Address (Flash location) */\
  (const uint8*)NULL,         /* Adress of EPROM Kennung - Original EPK in Data section */\
  (const uint8*)NULL,         /* Adress of customers a2l Filename */\
}

#else
  #error >>>> 'SY_CANVAR' FC not compatible to its value
#endif

#endif /* _UACCAPPL_ECUID_CONF_H */


