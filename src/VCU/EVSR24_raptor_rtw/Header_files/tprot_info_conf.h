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
 * $Filename__:tprot_info_conf.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AWL2SI$ 
 * $Date______:03.02.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:tprot_info_conf$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     03.02.2010 AWL2SI
 *   B_TPROT.11.0.0
 * 
 * 1.9.0; 0     27.01.2009 AWL2SI
 *   B_TPROT.9.0.0
 * 
 * 1.8.0; 0     16.12.2008 AWL2SI
 *   update from CC to B_TPROT.8.0.0
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
#ifndef _TPROT_INFO_CONF_H
#define _TPROT_INFO_CONF_H

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

/* !!! Any changes here must be applied also to tprot_info_conf.c !!! */
/* Infos in internal info table of TPROT */
typedef enum
{
    TPROT_VERSION_INFO_E,
    TPROT_TP_PROG_INI_E,
    TPROT_TP_INI_E,
    TPROT_AUTH_F1_E,
    TPROT_AUTH_F2_E,
    TPROT_AUTH_F3_E,
    TPROT_AUTH_F4_E,
    TPROT_AUTH_F5_E,
    TPROT_ECUMODE_GETMODE_E,
    TPROT_RTTP_F1_E,
    TPROT_RTTP_F2_E,
    TPROT_RTTP_F3_E,
    TPROT_TEST1_E,
    TPROT_TEST2_E,
    TPROT_FW_F1_E,
    TPROT_FW_F2_E,
    TPROT_FW_F3_E,
    TPROT_FW_F4_E,
    TPROT_FW_F5_E,
    TPROT_FW_F6_E,
    TPROT_FW_F7_E,
    TPROT_PASSWD_F1_E,
    TPROT_SIGN_F1_E,
    TPROT_SIGN_F2_E,
    TPROT_SIGN_F3_E,
    TPROT_HASH_F1_E,
    TPROT_HASH_F2_E,
    TPROT_HASH_F3_E,
    TPROT_RTTP_F4_E,
    TPROT_ECUMODE_F1_E,
    TPROT_ECUMODE_F2_E,
    TPROT_CIPHER_F1_E,
    TPROT_CIPHER_F2_E,
    TPROT_CIPHER_F3_E,
    TPROT_CFGSRV_F1_E,
    TPROT_ECUMODE_F3_E,
    TPROT_VERSION_WORD_E,
    TPROT_MAGIC_WORD_E,
    TPROT_PAV_PRJ1_WORD_E,
    TPROT_PAV_F1_E,
    TPROT_CEP_F1_E,
    TPROT_CEP_F2_E,
    TPROT_CEP_IDENT_E,
    TPROT_TP_CONF2_E,
    TPROT_PAV_PASSWD_WORD_E,
    TPROT_HASH_F4_E,
    TPROT_NUM_INT_INFO_E                /* Number of infos of internal table    */
}TPROT_IntInfo_t;

/* Infos in external info table of SB */
typedef enum
{
    TPROT_TP_CONF_E,
    TPROT_PAV_E,
    TPROT_VERSION_E,
    TPROT_NUM_EXT_INFO_E                   /* Number of infos of external table    */
}TPROT_ExtInfo_t;


#endif
