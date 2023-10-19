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
 * $Filename__:srvx_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:For VW T5 project$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:ZIC2SI$ 
 * $Date______:11.09.2014$ 
 * $Class_____:SWHDR$ 
 * $Name______:srvx_conf$ 
 * $Variant___:1.16.0_69$ 
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
 * 1.16.0_69; 0     11.09.2014 ZIC2SI
 *   adaption due to AdressCalculator Error __ASW_NAMES__
 * 
 * 1.16.0; 0     04.09.2014 PIR5COB
 *   Updation of the conf for lookup map
 * 
 * 1.13.0_P1318; 1     12.03.2013 DAG3COB
 *   for including temporarily the definition of srvx_turnondlypsa
 * 
 * 1.13.0_P1318; 0     09.01.2013 AKM1COB
 *   SrvX changes for srv update in P1318..
 * 
 * 1.13.0; 0     30.03.2010 VKA2FE
 *   Migrated from ClearCase, derived from B_SRVX_Conf.13.0.0
 * 
 * 1.12.0; 0     14.12.2009 VKA2FE
 *   Derived from B_SRVX_Conf.12.0.0
 * 
 * 1.11.0; 0     18.10.2009 VKA2FE
 *   Delivery derived from B_SRVX_Conf.11.0.0
 * 
 * 1.10.0; 0     05.07.2009 VKA2FE
 *   Delivery B_SRVX_Conf.11.0.0
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _SRVX_CONF_H
#define _SRVX_CONF_H


/**
 ***********************************************************************************************************************
 * \moduledescription
 *                          Configuration part of the extended service library.
 *
 * \scope                   CONF
 ***********************************************************************************************************************
*/


/*Addresscalculator patch */

#ifdef DOGov_TrqCalc_ModId
#ifndef __ASW_NAMES__
#define __ASW_NAMES__
#endif
#endif

#ifdef LIGov_Governor_ModId
#ifndef __ASW_NAMES__
#define __ASW_NAMES__
#endif
#endif

/* Macro for code location */
/* Do not change these macros */

#define SRVX_LOCATION_CACHED            1
#define SRVX_LOCATION_INLINE            2
#define SRVX_LOCATION_SPRAM             3

/*
 ***********************************************************************************************************************
 * Users Configuration
 ***********************************************************************************************************************
 */

/**
    SRVX_IMPL_ASM_ENABLE: definition of assemblercode usage in all possible services.
    Values:     0  -  no assemblercode usage in any service
                1  -  all service witch are also written in assembler will be used in assembler
*/
#define SRVX_IMPL_ASM_ENABLE 1

/* definition of location of selected services                                                    */
/* values:     SRVX_LOCATION_CACHED  -  this service can only be called                           */
/*                                 and is located to the cached segment (0x8*)                    */
/*             SRVX_LOCATION_INLINE  -  this service will be inlined (and                         */
/*                                 there is no possibility for calling)                           */
/*             SRVX_LOCATION_SPRAM   -  this service can only be called                           */
/*                                 and is located to the SPRAM segment (0xD4)                     */


/**************************************************************************************************/
/* New DGS-SRV services                                                                           */
/**************************************************************************************************/

/**************************************************************************************************/
/* Following services can be set to:                                                              */
/* SRVX_LOCATION_CACHED or SRVX_LOCATION_INLINE or SRVX_LOCATION_SPRAM                            */
/**************************************************************************************************/
#define SRVX_IPOCURVEGROUP_U8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOCURVEGROUP_S8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOCURVEGROUP_U16_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_IPOCURVEGROUP_S16_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_IPOCURVEGROUP_S32_LOCATION         SRVX_LOCATION_CACHED

#define SRVX_LKUPCURVEGROUP_U8_LOCATION         SRVX_LOCATION_INLINE
#define SRVX_LKUPCURVEGROUP_S8_LOCATION         SRVX_LOCATION_INLINE
#define SRVX_LKUPCURVEGROUP_U16_LOCATION        SRVX_LOCATION_INLINE
#define SRVX_LKUPCURVEGROUP_S16_LOCATION        SRVX_LOCATION_INLINE


#define SRVX_IPOMAPGROUP_U8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOMAPGROUP_S8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOMAPGROUP_U16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAPGROUP_S16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAPGROUP_S32_LOCATION           SRVX_LOCATION_CACHED

#define SRVX_LKUPMAPGROUP_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_LKUPMAPGROUP_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_LKUPMAPGROUP_U16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_LKUPMAPGROUP_S16_LOCATION          SRVX_LOCATION_CACHED


/* Controller: Auxiliary Functions */
#define SRVX_CALCTEQ_S32_LOCATION               SRVX_LOCATION_CACHED
#define SRVX_CALCTEQAPP_S32_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_CTRLSETLIMIT_LOCATION              SRVX_LOCATION_CACHED
#define SRVX_DT1TYP1OUT_S16_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_DT1TYP1OUT_S8_LOCATION             SRVX_LOCATION_CACHED
#define SRVX_DT1TYP1SETSTATE_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_DT1TYP2OUT_S16_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_DT1TYP2OUT_S8_LOCATION             SRVX_LOCATION_CACHED
#define SRVX_DT1TYP2SETSTATE_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IOUT_S16_LOCATION                  SRVX_LOCATION_CACHED
#define SRVX_IOUT_S8_LOCATION                   SRVX_LOCATION_CACHED
#define SRVX_ISETSTATE_LOCATION                 SRVX_LOCATION_CACHED
#define SRVX_PDOUT_S16_LOCATION                 SRVX_LOCATION_CACHED
#define SRVX_PDOUT_S8_LOCATION                  SRVX_LOCATION_CACHED
#define SRVX_PDSETPARAM_LOCATION                SRVX_LOCATION_CACHED
#define SRVX_PDSETSTATE_LOCATION                SRVX_LOCATION_CACHED
#define SRVX_PIDOUT_S16_LOCATION                SRVX_LOCATION_CACHED
#define SRVX_PIDOUT_S8_LOCATION                 SRVX_LOCATION_CACHED
#define SRVX_PIDSETPARAM_LOCATION               SRVX_LOCATION_CACHED
#define SRVX_PIDSETSTATE_LOCATION               SRVX_LOCATION_CACHED
#define SRVX_PIOUT_S16_LOCATION                 SRVX_LOCATION_CACHED
#define SRVX_PIOUT_S8_LOCATION                  SRVX_LOCATION_CACHED
#define SRVX_PISETPARAM_LOCATION                SRVX_LOCATION_CACHED
#define SRVX_PISETSTATE_LOCATION                SRVX_LOCATION_CACHED
#define SRVX_POUT_S16_LOCATION                  SRVX_LOCATION_CACHED
#define SRVX_POUT_S8_LOCATION                   SRVX_LOCATION_CACHED
#define SRVX_PSETSTATE_LOCATION                 SRVX_LOCATION_CACHED
#define SRVX_PT1OUT_S16_LOCATION                SRVX_LOCATION_CACHED
#define SRVX_PT1OUT_S8_LOCATION                 SRVX_LOCATION_CACHED
#define SRVX_CTRLPT1SETSTATE_LOCATION           SRVX_LOCATION_CACHED

/* Extended services */
#define SRVX_DEBOUNCEBOOLEANINIT_LOCATION       SRVX_LOCATION_INLINE
#define SRVX_DEBOUNCEBOOLEANSETPARAM_LOCATION   SRVX_LOCATION_INLINE
#define SRVX_DEBOUNCEBOOLEAN_B_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_TRNONDLYBOOLEAN_B_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_TRNONDLYBOOLEANINIT_LOCATION       SRVX_LOCATION_INLINE
#define SRVX_TRNOFFDLYBOOLEAN_B_LOCATION        SRVX_LOCATION_CACHED
#define SRVX_TRNOFFDLYBOOLEANINIT_LOCATION      SRVX_LOCATION_INLINE
#define SRVX_RAMPCALC_LOCATION                  SRVX_LOCATION_CACHED
#define SRVX_RAMPCALCJUMP_LOCATION              SRVX_LOCATION_CACHED
#define SRVX_RAMPCALCSWITCH_S32_LOCATION        SRVX_LOCATION_CACHED
#define SRVX_RAMPOUT_S32_LOCATION               SRVX_LOCATION_INLINE
#define SRVX_RAMPSETPARAM_LOCATION              SRVX_LOCATION_INLINE
#define SRVX_RAMPINITSTATE_LOCATION             SRVX_LOCATION_INLINE
#define SRVX_RAMPCHECKACTIVITY_LOCATION         SRVX_LOCATION_INLINE
#define SRVX_RAMPGETSWITCHPOS_LOCATION          SRVX_LOCATION_INLINE

/* Filter services */
#define SRVX_FILTERCALCK_U16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_FILTERCALCKAPP_U16_LOCATION        SRVX_LOCATION_CACHED

#define SRVX_LPFILTERSCALC_LOCATION             SRVX_LOCATION_CACHED
#define SRVX_LPFILTERSOUT_S16_LOCATION          SRVX_LOCATION_INLINE
#define SRVX_LPFILTERSOUT_S8_LOCATION           SRVX_LOCATION_INLINE
#define SRVX_LPFILTERSSETSTATE_LOCATION         SRVX_LOCATION_INLINE

#define SRVX_LPFILTERUCALC_LOCATION             SRVX_LOCATION_CACHED
#define SRVX_LPFILTERUOUT_U16_LOCATION          SRVX_LOCATION_INLINE
#define SRVX_LPFILTERUOUT_U8_LOCATION           SRVX_LOCATION_INLINE
#define SRVX_LPFILTERUSETSTATE_LOCATION         SRVX_LOCATION_INLINE

#define SRVX_HPFILTERSCALC_LOCATION             SRVX_LOCATION_CACHED
#define SRVX_HPFILTERSOUT_S16_LOCATION          SRVX_LOCATION_INLINE
#define SRVX_HPFILTERSOUT_S8_LOCATION           SRVX_LOCATION_INLINE
#define SRVX_HPFILTERSSETSTATE_LOCATION         SRVX_LOCATION_INLINE

#define SRVX_HPFILTERUCALC_LOCATION             SRVX_LOCATION_CACHED
#define SRVX_HPFILTERUOUT_U16_LOCATION          SRVX_LOCATION_INLINE
#define SRVX_HPFILTERUOUT_U8_LOCATION           SRVX_LOCATION_INLINE
#define SRVX_HPFILTERUSETSTATE_LOCATION         SRVX_LOCATION_INLINE

/**************************************************************************************************/
/* Following services can be set to:                                                              */
/* SRVX_LOCATION_CACHED or SRVX_LOCATION_SPRAM                                                    */
/**************************************************************************************************/
#define SRVX_SEARCHDISTR_U8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_SEARCHDISTR_S8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_SEARCHDISTR_U16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_SEARCHDISTR_S16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_SEARCHDISTR_S16_S32_LOCATION       SRVX_LOCATION_CACHED

#define SRVX_IPOCURVE_S8_S8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_S8_U8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_S8_S16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_S8_U16_LOCATION           SRVX_LOCATION_CACHED

#define SRVX_IPOCURVE_S16_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_S16_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_S16_S16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_S16_U16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_S16_S32_LOCATION          SRVX_LOCATION_CACHED

#define SRVX_IPOCURVE_U8_S8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_U8_U8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_U8_S16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_U8_U16_LOCATION           SRVX_LOCATION_CACHED

#define SRVX_IPOCURVE_U16_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_U16_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_U16_S16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOCURVE_U16_U16_LOCATION          SRVX_LOCATION_CACHED



#define SRVX_LKUPCURVE_S8_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_S8_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_S8_S16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_S8_U16_LOCATION          SRVX_LOCATION_CACHED

#define SRVX_LKUPCURVE_S16_S8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_S16_U8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_S16_S16_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_S16_U16_LOCATION         SRVX_LOCATION_CACHED

#define SRVX_LKUPCURVE_U8_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_U8_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_U8_S16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_U8_U16_LOCATION          SRVX_LOCATION_CACHED

#define SRVX_LKUPCURVE_U16_S8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_U16_U8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_U16_S16_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_LKUPCURVE_U16_U16_LOCATION         SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_S8S8_S8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S8S8_S16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S8S8_U8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S8S8_U16_LOCATION           SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_S16S16_S8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16S16_S16_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16S16_S32_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16S16_U8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16S16_U16_LOCATION         SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_S16S8_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16S8_S16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16S8_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16S8_U16_LOCATION          SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_S16U8_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16U8_S16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16U8_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_S16U8_U16_LOCATION          SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_U8S8_S8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U8S8_S16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U8S8_U8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U8S8_U16_LOCATION           SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_U8U8_S8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U8U8_S16_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U8U8_U8_LOCATION            SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U8U8_U16_LOCATION           SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_U16S8_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16S8_S16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16S8_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16S8_U16_LOCATION          SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_U16S16_S8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16S16_S16_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16S16_U8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16S16_U16_LOCATION         SRVX_LOCATION_CACHED

#define SRVX_IPOMAP_U16U8_S8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16U8_S16_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16U8_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16U8_U16_LOCATION          SRVX_LOCATION_CACHED



#define SRVX_IPOMAP_U16U16_S8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16U16_S16_LOCATION         SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16U16_U8_LOCATION          SRVX_LOCATION_CACHED
#define SRVX_IPOMAP_U16U16_U16_LOCATION         SRVX_LOCATION_CACHED

#define SRVX_LKUPMAP_U16U16_U16_LOCATION        SRVX_LOCATION_CACHED
#define SRVX_LKUPMAP_U8U8_U8_LOCATION           SRVX_LOCATION_CACHED
#define SRVX_LKUPMAP_S16S16_S16_LOCATION        SRVX_LOCATION_CACHED
#define SRVX_LKUPMAP_S8S8_S8_LOCATION           SRVX_LOCATION_CACHED



/**************************************************************************************************/
/* New services (adapter)                                                                         */
/**************************************************************************************************/

#define SRVX_ADAPTER_LOCATION                   SRVX_LOCATION_CACHED

/**************************************************************************************************/
/* Following services can be set to:                                                              */
/* SRVX_LOCATION_CACHED or SRVX_LOCATION_SPRAM                                                    */
/**************************************************************************************************/
#define SRVX_DEADTIME_LOCATION                  SRVX_LOCATION_SPRAM
#define SRVX_DEBOUNCE_LOCATION                  SRVX_LOCATION_SPRAM
#define SRVX_DT1S16_LOCATION                    SRVX_LOCATION_CACHED
#define SRVX_DT1CTRLS16_LOCATION                SRVX_LOCATION_CACHED
#define SRVX_DT1WINS16_LOCATION                 SRVX_LOCATION_CACHED
#define SRVX_EXP_LOCATION                       SRVX_LOCATION_CACHED
#define SRVX_INTU8_LOCATION                     SRVX_LOCATION_SPRAM
#define SRVX_INTS16_LOCATION                    SRVX_LOCATION_SPRAM
#define SRVX_INTLIMU8_LOCATION                  SRVX_LOCATION_SPRAM
#define SRVX_INTLIMS16_LOCATION                 SRVX_LOCATION_SPRAM
#define SRVX_IPOCURVES16_LOCATION               SRVX_LOCATION_SPRAM
#define SRVX_IPOCURVES16U8_LOCATION             SRVX_LOCATION_SPRAM
#define SRVX_IPOCURVES16S8_LOCATION             SRVX_LOCATION_SPRAM
#define SRVX_IPOCURVEU8_LOCATION                SRVX_LOCATION_SPRAM
#define SRVX_IPOGROUPCURVES16_LOCATION          SRVX_LOCATION_SPRAM
#define SRVX_IPOGROUPCURVEU8_LOCATION           SRVX_LOCATION_SPRAM
#define SRVX_IPOGROUPMAPU8_LOCATION             SRVX_LOCATION_SPRAM
#define SRVX_IPOGROUPMAPS8_LOCATION             SRVX_LOCATION_SPRAM
#define SRVX_IPOGROUPMAPS16_LOCATION            SRVX_LOCATION_SPRAM
#define SRVX_IPOMAPS16U8_LOCATION               SRVX_LOCATION_SPRAM
#define SRVX_IPOMAPS16S16U8_LOCATION            SRVX_LOCATION_SPRAM
#define SRVX_IPOMAPS16S16S8_LOCATION            SRVX_LOCATION_SPRAM
#define SRVX_IPOMAPS16S16_LOCATION              SRVX_LOCATION_SPRAM
#define SRVX_IPOMAPU8S16_LOCATION               SRVX_LOCATION_SPRAM
#define SRVX_IPOMAPU8U8_LOCATION                SRVX_LOCATION_SPRAM
#define SRVX_IWINS16_LOCATION                   SRVX_LOCATION_CACHED
#define SRVX_PIWINS16_LOCATION                  SRVX_LOCATION_CACHED
#define SRVX_PT1S16_LOCATION                    SRVX_LOCATION_CACHED
#define SRVX_PT1U8_LOCATION                     SRVX_LOCATION_CACHED
#define SRVX_PWINS16_LOCATION                   SRVX_LOCATION_CACHED
#define SRVX_RAMP_LOCATION                      SRVX_LOCATION_CACHED
#define SRVX_RAMPSWITCH_LOCATION                SRVX_LOCATION_CACHED

#define SRVX_DYNIPOCURVES16_LOCATION            SRVX_LOCATION_SPRAM
#define SRVX_DYNIPOMAPS16_LOCATION              SRVX_LOCATION_SPRAM
#define SRVX_DYNIPOMAPS16EXTD_LOCATION          SRVX_LOCATION_SPRAM
#define SRVX_IPOMAPS16S16S8EXTD_LOCATION        SRVX_LOCATION_SPRAM

#define SRVX_IPODELTAFACTORU8_POINTS_LOCATION   SRVX_LOCATION_SPRAM
#define SRVX_IPOCURVES8_LOCATION                SRVX_LOCATION_SPRAM
#define SRVX_IPOCURVEU16_LOCATION               SRVX_LOCATION_SPRAM
#define SRVX_NOIPOCURVES16_LOCATION             SRVX_LOCATION_SPRAM
#define SRVX_NOIPOCURVES8_LOCATION              SRVX_LOCATION_SPRAM
#define SRVX_NOIPOCURVEU16_LOCATION             SRVX_LOCATION_SPRAM
#define SRVX_NOIPOCURVEU8_LOCATION              SRVX_LOCATION_SPRAM

#define SRVX_LKUPNEARMAP_U16U16_U16_LOCATION    SRVX_LOCATION_CACHED
#define SRVX_LKUPNEARMAP_U8U8_U8_LOCATION       SRVX_LOCATION_CACHED
#define SRVX_LKUPNEARMAP_S16S16_S16_LOCATION    SRVX_LOCATION_CACHED
#define SRVX_LKUPNEARMAP_S8S8_S8_LOCATION       SRVX_LOCATION_CACHED

#define SRVX_LKUPNEARMAPGROUP_U8_LOCATION       SRVX_LOCATION_CACHED
#define SRVX_LKUPNEARMAPGROUP_S8_LOCATION       SRVX_LOCATION_CACHED
#define SRVX_LKUPNEARMAPGROUP_U16_LOCATION      SRVX_LOCATION_CACHED
#define SRVX_LKUPNEARMAPGROUP_S16_LOCATION      SRVX_LOCATION_CACHED

/* _SRVX_CONF_H */
#endif
