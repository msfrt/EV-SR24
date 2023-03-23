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
 * $Filename__:uaccappl_ecuid.h$
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
 * $Name______:uaccappl_ecuid$
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
 * 5.1.0; 1     17.01.2012 JAG2ABT
 *   Review findings
 * 
 * 5.1.0; 0     30.09.2011 JAG2ABT
 *   new: functions for virt. signals to read bit variables
 *   first set of DIDs
 *   additional logistics data
 *   initialisation of the max. reprog. attempts
 * 
 * 5.0.0; 1     05.05.2011 JAG2ABT
 *   Platform Ferrari_Maserati
 * 
 * 5.0.0; 0     09.11.2010 DUE2ABT
 *   first version for maserati
 * 
 * 1.3.0; 0     30.01.2009 DIB2SI
 *   Component Toolbox-Import
 * 
 * 1.2.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: uaccappl_ecuid
 *      Variant: 1.20
 *      Revision: 0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _UACCAPPL_ECUID_H
#define _UACCAPPL_ECUID_H

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
/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

#ifndef SY_CANVAR
  #error >>>> 'SY_CANVAR' undefined
#elif (SY_CANVAR == 5)

/***************************************************************************************************
*                        Program related software identification                                   *
*                                                                                                  *
***************************************************************************************************/

typedef struct
{
  uint8* adEpk;           /* Adress of EPROM Kennung - Copy of EPK in Program Section             */
  uint8 DiagSpecInfo[3];  /* DiagnosticSpecificationInformation                                   */
  const uint8* adSwPartNum;    /* SoftwarePartNumber (A-Sachnummer, MB-Nummer)                         */
  const uint8* adSwVerInfo;     /* SoftwareVersionInformation (Year, Week, Patchlevel)                  */
  uint8 SuppCode[2];      /* Supplier Code of Software Supplier                                   */
}UAccAppl_EcuIdPrg_t;


/***************************************************************************************************
*                                Data related software identification                              *
* Following struct contains some addresses of calibratable data. Please note:                      *
*    - this is needed to access the data from CB                                                   *
*    - the adresses represent the flash(!) location.                                               *
*      If calibrated, this values may differ from them shown in calibration tool                   *
*                                                                                                  *
***************************************************************************************************/
typedef struct
{
  const uint8* adSwVerInfo;    /* SoftwareVersionInformation (Year, Week, Patchlevel)(Flash location)   */
  const uint8* adSwPartNum;    /* SoftwarePartNumber (A-Sachnummer, MB-Nummer) Adress (Flash location)  */
  const uint8* adECUPartNum;   /* ECUPartNumber (A-Sachnummer, MB-Nummer) Adress (Flash location)       */
  const uint8* adFlowNum;      /* FlowNumber Adress (Flash location)                                    */
  const uint8* adInfo1;        /* Info 1 Label Adress (Flash location)                                  */
  const uint8* adEpk;          /* Adress of EPROM Kennung - Original EPK in Data section                */
  const uint8* adDCa2lName;    /* Adress of customers a2l Filename                                      */
  const uint8* adSuppCode;     /* Supplier Code of Software Supplier                                    */
  const uint8* adActvDiagInfo; /* 3 bytes of Active Diagnostic Information (4th Byte dynamically build) */
}UAccAppl_EcuIdData_t;

#elif (SY_CANVAR == 4)

/***************************************************************************************************
*                        Program related software identification                                   *
*                                                                                                  *
***************************************************************************************************/

typedef struct
{
  uint8* adEpk;             /* Adress of EPROM Kennung - Copy of EPK in Program Section */
  const uint8* adSwPartNum; /* SoftwarePartNumber (SW-TTNR)                             */
  const uint8* adSwVerInfo; /* SoftwareVersionInformation                               */
  const uint8* adSwName;    /* SoftwareName                                             */
  const uint8* adBrif;      /* BRIF                                                     */
  const uint8* adProgDate;  /* Programming Date                                         */
}UAccAppl_EcuIdPrg_t;


/***************************************************************************************************
*                                Data related software identification                              *
* Following struct contains some addresses of calibratable data. Please note:                      *
*    - this is needed to access the data from CB                                                   *
*    - the adresses represent the flash(!) location.                                               *
*      If calibrated, this values may differ from them shown in calibration tool                   *
*                                                                                                  *
***************************************************************************************************/
typedef struct
{
  const uint8* adECUPartNum;   /* ECU PartNumber  Adress (Flash location)                */
  const uint8* adHWPartNum;    /* Hardware PartNumber  Adress (Flash location)           */
  const uint8* adHWVerInfo;    /* Hardware Version Info  Adress (Flash location)         */
  const uint8* adErotan;       /* EROTAN (Flash location)                                */
  const uint8* adSnoet;        /* SNOET (Flash location)                                 */
  const uint8* adEpk;          /* Adress of EPROM Kennung - Original EPK in Data section */
  const uint8* adDCa2lName;    /* Adress of customers a2l Filename                       */
}UAccAppl_EcuIdData_t;

#else
  #error >>>> 'SY_CANVAR' FC not compatible to its value
#endif

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
extern UAccAppl_EcuIdData_t UAccAppl_EcuIdData __attribute__ ((asection(".data.ds_version","f=a")));
extern UAccAppl_EcuIdPrg_t  UAccAppl_EcuIdPrg  __attribute__ ((asection(".data.asw_version","f=a")));

extern void UAccAppl_EcuId_fillwithblank(uint8* src, uint8 num);

#endif  /* _UACC_ECUID_H */

