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
 * $Filename__:memlay_info_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SHA2ABT$ 
 * $Date______:14.06.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:memlay_info_conf$ 
 * $Variant___:1.12.0_69$ 
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
 * 1.12.0_69; 1     14.06.2011 SHA2ABT
 *   changed enum of DS0Ext_IntInfo_t in memlay_info_conf.h
 * 
 * 1.12.0_69; 0     15.12.2010 JAG2ABT
 *   changes for uaccappl_ecuid integration
 * 
 * 1.9.0; 0     26.08.2008 KLMEYER
 *   Update: Core delivery 2008-07
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _MEMLAY_INFO_CONF_H
#define _MEMLAY_INFO_CONF_H

/**
 *********************************************************************
 * \moduledescription
 *              Internal info table of ASW
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
/* !!! Any changes here must be applied also to memlay_info_conf.c !!! */
/* Infos in internal info table of SB */
typedef enum
{
    ASW0_TPROT_CONF_E = ASW0_NUMSB_INT_INFO_E,
    ASW0_ECUID_INFO_E,
    ASW0_DATASETID_E,
    ASW0_NUM_INT_INFO_E
}ASW0Ext_IntInfo_t;


typedef enum
{
    ASW0_TPROT_CONF_EXT_INFO_E,
    ASW0_NUM_EXT_INFO_E
}ASW0_ExtInfo_t;

typedef enum
{
    ASW1_NUM_INT_INFO_E = 0,

}ASW1Ext_IntInfo_t;

typedef enum
{
    DS0_ECUID_INFO_E = 0,
    DS0_DATASETID_E,
    DS0_UNUSED_E,
    DS0_NUM_INT_INFO_E
}DS0Ext_IntInfo_t;

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */

/* MISRA RULE 27 VIOLATION: variable names are configureable */
extern const void * const ASW0_IntInfo_cap[];
extern const void * const ASW0_ExtInfo_cap[ASW0_NUM_EXT_INFO_E] __attribute__ ((asection(".rodata.asw0_info","f=a")));
extern const void * const DS0_IntInfo_cap[];

/*
 *********************************************************************
 * used functions
 *********************************************************************
 */

/* _MEMLAY_INFO_CONF_H */
#endif
