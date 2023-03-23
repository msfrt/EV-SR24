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
 * $Filename__:fadc_template_conf.ht$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AUB5COB$
 * $Date______:19.08.2017$
 * $Class_____:CONFTPLHDR$
 * $Name______:fadc_template_conf$
 * $Variant___:1.7.2$
 * $Revision__:0$
 * $Type______:HT$
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
 * 1.7.2; 0     19.08.2017 AUB5COB
 *   1. FADC_GEN_CFG_OFS_CAL_REPEAT is added to choose Calibration repetition 
 *   option
 *   2. Five dummy conversion before calibration to ensure Calibration procedure
 *    to provide best result on first iteration itself.
 *   3. Still Calibration is not provided best result, then repeat the 
 *   calibration procedure. Maximum five time repeat the Calibration procedure 
 *   to find best result. Still Calibration procedure provide more deviation, 
 *   then Fadc provides error.
 * 
 * 1.7.1; 0     04.11.2014 BMU2COB
 *   RQONE00465086
 *   
 *   Fadc_Clb - unnecessary conversion timeout error during calibration if 
 *   Fadc_Clb is scheduled used 
 *   
 *   along with any highpriority task which might interrupt the calibration 
 *   routine.
 * 
 * 1.6.0; 0     28.05.2010 HGJ2FE
 *   RCMS00915275: FADC: Improve complex driver support
 * 
 * 1.3.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: fadc_template_conf.ht
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _FADC_AUTO_CONF_H
#define _FADC_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/*
 ***********************************************************************************************************************
 * Defines
 ***********************************************************************************************************************
 */

/* generated macro for offset error tolerance */
/* This macro will be generated even if there is no configuration present for Fadc*/
/* This is necessary to avoid compiler warnings as Fadc_Clb uses FADC_CLB_OFS_MAX_DVT */
/* generate macro for the offset tolerance FADC_CLB_OFS_MAX_DVT */
#define FADC_CLB_OFS_MAX_DVT                                3U

/* generated macro to enable offset calibration repetition(Max 5 times) if not able to find best calibration */
/* This macro will be generated even if there is no configuration present for Fadc*/
/* This is necessary to avoid compiler warnings as Fadc_Clb uses FADC_OFFSET_CLB_REPEAT */
/* generate macro for to enable offset calibration repetition - FADC_OFFSET_CLB_REPEAT */
#define FADC_OFFSET_CLB_REPEAT                              FALSE

/* generated named interface macros */
/* macros for FADC channel named KNDET_KS1 */
#define FADC_CHN_KNDET_KS1                                  1
#define FADC_KNDET_KS1_CFGR                                 FADC.CFGR[1]
#define FADC_KNDET_KS1_ACR                                  FADC.ACR[1]
#define FADC_KNDET_KS1_RCH                                  FADC.RCH[1]
#define FADC_KNDET_KS1_GCR_RCT_BP                           1
#define FADC_KNDET_KS1_GCR_RCT_MSK                          0x00000002UL
#define FADC_KNDET_KS1_CFGR_GSEL_VAL                        7

/* macros for FADC channel named KNDET_KS3 */
#define FADC_CHN_KNDET_KS3                                  2
#define FADC_KNDET_KS3_CFGR                                 FADC.CFGR[2]
#define FADC_KNDET_KS3_ACR                                  FADC.ACR[2]
#define FADC_KNDET_KS3_RCH                                  FADC.RCH[2]
#define FADC_KNDET_KS3_GCR_RCT_BP                           2
#define FADC_KNDET_KS3_GCR_RCT_MSK                          0x00000004UL

/* macros for FADC channel named KNDET_KS4 */
#define FADC_CHN_KNDET_KS4                                  3
#define FADC_KNDET_KS4_CFGR                                 FADC.CFGR[3]
#define FADC_KNDET_KS4_ACR                                  FADC.ACR[3]
#define FADC_KNDET_KS4_RCH                                  FADC.RCH[3]
#define FADC_KNDET_KS4_GCR_RCT_BP                           3
#define FADC_KNDET_KS4_GCR_RCT_MSK                          0x00000008UL

/* macros for FADC filter block named KNDET_FLT0 */
#define FADC_FLT_KNDET_FLT0                                 0
#define FADC_KNDET_FLT0_FRR                                 FADC.FRR0
#define FADC_KNDET_FLT0_FCR                                 FADC.FCR0
#define FADC_KNDET_FLT0_GCR_RSTF_BP                         9
#define FADC_KNDET_FLT0_GCR_RSTF_MSK                        0x00000200

/* macros for FADC filter block named KNDET_FLT1 */
#define FADC_FLT_KNDET_FLT1                                 1
#define FADC_KNDET_FLT1_FRR                                 FADC.FRR1
#define FADC_KNDET_FLT1_FCR                                 FADC.FCR1
#define FADC_KNDET_FLT1_GCR_RSTF_BP                         10
#define FADC_KNDET_FLT1_GCR_RSTF_MSK                        0x00000400

/* macros for FADC service request line named KNDET */
#define FADC_SRL_KNDET                                      0


/* generated DSCHED macros */
/* no DSCHED configuration present */

/* generated timer interval macros */
/* macros for timer interval named KNDET */
#define FADC_CFGR_TMR_KNDET                                 0x00361000UL
#define FADC_KNDET_CFGR_CTF_VAL                             0x00000001UL
#define FADC_KNDET_CFGR_CTREL_VAL                           0x00000036UL
#define FADC_KNDET_TMR_ACT                                  622


/* generated ADC HAL macros */
/* no ADC HAL channels configured for FADC */

/* _LIBRARYABILITY_H */
#endif

/* _FADC_AUTO_CONF_H */
#endif
