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
 * $Filename__:srvf_conf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PIR5COB$
 * $Date______:26.08.2014$
 * $Class_____:SWHDR$
 * $Name______:srvf_conf$
 * $Variant___:1.17.0$
 * $Revision__:1$
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
 * 1.17.0; 1     26.08.2014 PIR5COB
 *   Updation for new APIs
 * 
 * 1.17.0; 0     28.11.2013 HUH1COB
 *   I:
 * 
 * 1.16.0; 0     26.04.2013 PIR5COB
 *   Conf file updated for srv_1.20.0 release
 * 
 * 1.15.0; 0     24.12.2012 PIR5COB
 *   Provision of inline options for new float functionalities.
 * 
 * 1.14.0; 0     11.08.2011 SYA2COB
 *   Delivery of FCL SrvF_Conf
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVF_Conf.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVF_Conf.12.0.0
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _SRVF_CONF_H
#define _SRVF_CONF_H


/**
 ***************************************************************************************************
 * \moduledescription
 *                          Configuration part of the Float service library.
 *
 * \scope                   CONF
 ***************************************************************************************************
*/

/* Macro for code location              */
/* Do not change these macros           */

#define SRVF_LOCATION_CACHED            1
#define SRVF_LOCATION_INLINE            2
#define SRVF_LOCATION_SPRAM             3

/*
 ***************************************************************************************************
 * Users Configuration
 ***************************************************************************************************
 */

/**
    SRVF_IMPL_ASM_ENABLE: definition of assemblercode usage in all possible services.
    Values:     0  -  No assemblercode usage in any service.
                1  -  All service witch are also written in assembler will be used in assembler.
*/
#define SRVF_IMPL_ASM_ENABLE 1

/**************************************************************************************************/
/* Following services can be set to:                                                              */
/* SRVX_LOCATION_CACHED or SRVX_LOCATION_INLINE or SRVX_LOCATION_SPRAM                            */
/**************************************************************************************************/

#define SRVF_MEDIAN_R32_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_SORTASCR32_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_SORTDESCR32_LOCATION                   SRVF_LOCATION_CACHED

#define SRVF_SWITCHHYSTLR_R32_B_LOCATION            SRVF_LOCATION_CACHED
#define SRVF_SWITCHHYSTDR_R32_B_LOCATION            SRVF_LOCATION_CACHED
#define SRVF_SWITCHHYSTLD_R32_B_LOCATION            SRVF_LOCATION_CACHED
#define SRVF_SWITCHHYSTCHD_R32_B_LOCATION           SRVF_LOCATION_CACHED

#define SRVF_ABS_R32_LOCATION                       SRVF_LOCATION_CACHED
#define SRVF_MAX_R32_LOCATION                       SRVF_LOCATION_CACHED
#define SRVF_MIN_R32_LOCATION                       SRVF_LOCATION_CACHED


/* Controller: Auxiliary Functions */
#define SRVF_CALCTEQ_R32_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_CALCTEQAPP_R32_LOCATION                SRVF_LOCATION_CACHED
#define SRVF_CTRLSETLIMIT_LOCATION                  SRVF_LOCATION_CACHED
#define SRVF_DT1TYP1OUT_R32_LOCATION                SRVF_LOCATION_CACHED
#define SRVF_DT1TYP1SETSTATE_LOCATION               SRVF_LOCATION_CACHED
#define SRVF_DT1TYP2OUT_R32_LOCATION                SRVF_LOCATION_CACHED
#define SRVF_DT1TYP2SETSTATE_LOCATION               SRVF_LOCATION_CACHED
#define SRVF_IOUT_R32_LOCATION                      SRVF_LOCATION_CACHED
#define SRVF_ISETSTATE_LOCATION                     SRVF_LOCATION_CACHED
#define SRVF_PDOUT_R32_LOCATION                     SRVF_LOCATION_CACHED
#define SRVF_PDSETPARAM_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_PDSETSTATE_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_PIDOUT_R32_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_PIDSETPARAM_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_PIDSETSTATE_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_PIOUT_R32_LOCATION                     SRVF_LOCATION_CACHED
#define SRVF_PISETPARAM_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_PISETSTATE_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_POUT_R32_LOCATION                      SRVF_LOCATION_CACHED
#define SRVF_PT1OUT_R32_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_PT1SETSTATE_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_RANGELIMITER_R32_LOCATION              SRVF_LOCATION_CACHED

/* Extended services */
#define SRVF_RAMPCALC_LOCATION                      SRVF_LOCATION_CACHED
#define SRVF_RAMPCALCJUMP_LOCATION                  SRVF_LOCATION_CACHED
#define SRVF_RAMPCALCSWITCH_R32_LOCATION            SRVF_LOCATION_CACHED
#define SRVF_RAMPOUT_R32_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_RAMPSETPARAM_LOCATION                  SRVF_LOCATION_CACHED
#define SRVF_RAMPINITSTATE_LOCATION                 SRVF_LOCATION_CACHED
#define SRVF_RAMPCHECKACTIVITY_LOCATION             SRVF_LOCATION_CACHED
#define SRVF_RAMPGETSWITCHPOS_LOCATION              SRVF_LOCATION_CACHED

/* Filter services */
#define SRVF_FILTERCALCK_R32_LOCATION               SRVF_LOCATION_CACHED
#define SRVF_FILTERCALCKAPP_R32_LOCATION            SRVF_LOCATION_CACHED

#define SRVF_LPFILTERCALC_LOCATION                  SRVF_LOCATION_CACHED
#define SRVF_LPFILTEROUT_R32_LOCATION               SRVF_LOCATION_CACHED
#define SRVF_LPFILTERSETSTATE_LOCATION              SRVF_LOCATION_CACHED

#define SRVF_HPFILTERCALC_LOCATION                  SRVF_LOCATION_CACHED
#define SRVF_HPFILTEROUT_R32_LOCATION               SRVF_LOCATION_CACHED
#define SRVF_HPFILTERSETSTATE_LOCATION              SRVF_LOCATION_CACHED


/**************************************************************************************************/
/* Following services can be set to:                                                              */
/* SRVX_LOCATION_CACHED or SRVX_LOCATION_SPRAM                                                    */
/**************************************************************************************************/

/* Controller: Main Routines */
#define SRVF_DT1TYP1CALC_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_DT1TYP2CALC_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_ICALC_LOCATION                         SRVF_LOCATION_CACHED
#define SRVF_ILIMCALC_LOCATION                      SRVF_LOCATION_CACHED
#define SRVF_PCALC_LOCATION                         SRVF_LOCATION_CACHED
#define SRVF_PDCALC_LOCATION                        SRVF_LOCATION_CACHED
#define SRVF_PIDLIMTYP1CALC_LOCATION                SRVF_LOCATION_CACHED
#define SRVF_PIDLIMTYP2CALC_LOCATION                SRVF_LOCATION_CACHED
#define SRVF_PIDTYP1CALC_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_PIDTYP2CALC_LOCATION                   SRVF_LOCATION_CACHED
#define SRVF_PILIMTYP1CALC_LOCATION                 SRVF_LOCATION_CACHED
#define SRVF_PILIMTYP2CALC_LOCATION                 SRVF_LOCATION_CACHED
#define SRVF_PITYP1CALC_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_PITYP2CALC_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_PT1CALC_LOCATION                       SRVF_LOCATION_CACHED
/* New float services */
#define SRVF_ISNAN_B_LOCATION                       SRVF_LOCATION_CACHED
#define SRVF_ISGREATER_R32R32_B_LOCATION            SRVF_LOCATION_CACHED
#define SRVF_ISLOWER_R32R32_B_LOCATION              SRVF_LOCATION_CACHED
#define SRVF_VALIDATIONLIMITER_R32_LOCATION         SRVF_LOCATION_CACHED
#define SRVF_REALTOINTEGER_R32_U32_LOCATION         SRVF_LOCATION_CACHED
#define SRVF_REALTOINTEGER_R32_U16_LOCATION         SRVF_LOCATION_CACHED
#define SRVF_REALTOINTEGER_R32_U8_LOCATION          SRVF_LOCATION_CACHED
#define SRVF_REALTOINTEGER_R32_S32_LOCATION         SRVF_LOCATION_CACHED
#define SRVF_REALTOINTEGER_R32_S16_LOCATION         SRVF_LOCATION_CACHED
#define SRVF_REALTOINTEGER_R32_S8_LOCATION          SRVF_LOCATION_CACHED
#define SRVF_ISPLUSINFINITY_B_LOCATION              SRVF_LOCATION_CACHED
#define SRVF_ISMINUSINFINITY_B_LOCATION             SRVF_LOCATION_CACHED
#define SRVF_ISFINITE_B_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_MEMCOPYR32_LOCATION                    SRVF_LOCATION_CACHED
#define SRVF_ISEQUAL_R32_R32_B_LOCATION             SRVF_LOCATION_CACHED
#define SRVF_EXTRACT_FLOATBITFIELDS_R32_LOCATION    SRVF_LOCATION_CACHED
#define SRVF_ARRAYAVERAGE_R32U32_R32_LOCATION       SRVF_LOCATION_CACHED


/* _SRVF_CONF_H */
#endif
