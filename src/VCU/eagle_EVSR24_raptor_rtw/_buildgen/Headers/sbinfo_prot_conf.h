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
 * $Filename__:sbinfo_prot_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:06.11.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:sbinfo_prot_conf$ 
 * $Variant___:1.13.1$ 
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
 * 1.13.1; 0     06.11.2009 AWL2SI
 *   Right version of SB 13.0.0 migrated from ClearCase
 * 
 * 1.13.0; 0     03.08.2009 AWL2SI
 *   B_SB.13.0..0
 * 
 * 1.11.0; 0     27.01.2009 KLMEYER
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SBINFO_PROT_CONF_H
#define _SBINFO_PROT_CONF_H

/**
 *********************************************************************
 * \moduledescription
 *          Interface header file for INFO blocks
 *
 * \scope           [API]
 *********************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */

/* !!! Any changes here must be applied also to sbib_conf.c !!! */
/* Infos in internal info table of SB */
typedef enum
{
    SB_CRC32_ALGO_E,               /* CS algo: CRC32                                            */
    SB_ADD32_ALGO_E,               /* CS algo: ADD32                                            */
    SB_CRC32IFX_ALGO_E,            /* CS algo: CRC32, specific for IFX                          */
    SB_VESION_INFO_E,              /* SB Version info                                           */
    SB_TARGET_INFO_E,              /* SB Target Detect Info structure                           */
    SBRESET_ENV_E,                 /* SBReset Environement                                      */
    SBRESET_CONF_E,                /* SBReset Configuration                                     */
    SBFLASHDO_START_E,             /* Start address of flash handler                            */
    SBFLASHDO_SIZE_E,              /* Size of flash handler                                     */
    SBTARGET_CLRWPR_START_E,       /* Address of function to clear write protect of ext. flash  */
    SBTARGET_CLRWPR_SIZE_E,        /* Size of function to clear write protect of ext. flash     */
    SBTARGET_SETWPR_START_E,       /* Address of function to set write protect of ext. flash    */
    SBTARGET_SETWPR_SIZE_E,        /* Size of function to set write protect of ext. flash       */
    SBPOTEST_RESULT_E,             /* PowerOn Test result structure                             */
    SBFLASHDO_START_RAM_E,         /* Start address of flash code in the ram                    */
    SBRESET_SR_E,                  /* address of SoftReset relevant data                        */
    SB_ADD16_ALGO_E,               /* CS algo: ADD16                                            */
    SBRESET_ADDINFO_E,             /* SBReset: addtional information from SB to ASW             */
    SBRESET_EXTHISTBUF_E,          /* SBReset: reset history buffer                             */
    SB_NUM_INT_INFO_E              /* Number of infos of internal table                         */
}SB_IntInfo_t;

/* Infos in external info table of SB */
typedef enum
{
    SB_NUM_EXT_INFO_E                   /* Number of infos of external table */
}SB_ExtInfo_t;

/* Infos in internal info table of CB */
typedef enum
{
    CB_MAIN_E,
    CB_VERSION_INFO_E,
    CB_OFFSET_CB2_E,
    CB_NUMSB_INT_INFO_E
}CB_IntInfo_t;

/* Infos in internal info table of ASW */
typedef enum
{
    ASW0_MAIN_E,
    ASW0_VESION_INFO_E,
    ASW0_DUMMY_E,                        /* in versions before speed was referenced at this point */
    ASW0_NUMSB_INT_INFO_E
}ASW0_IntInfo_t;

typedef uint32 (SBIB_CsFunc_t) (uint32*, uint32*, uint32);

#endif
