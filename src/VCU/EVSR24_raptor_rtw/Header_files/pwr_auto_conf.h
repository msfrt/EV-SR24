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
 * $Filename__:pwr_template_conf.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:EHF2SI$
 * $Date______:28.10.2010$
 * $Class_____:CONFTPLHDR$
 * $Name______:pwr_template_conf$
 * $Variant___:1.16.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.16.0; 0     28.10.2010 EHF2SI
 *   Cj950 new
 * 
 * 1.14.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: pwr_template_conf.ht
 *      Version: \main\7
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _PWR_AUTO_CONF_H
#define _PWR_AUTO_CONF_H

/* pwr_process.pm@@\main\basis\b_CORE\20 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
#include "hbr.h"              /* include for module HBR */
#include "l9959.h"            /* include for module L9959 */
#include "cy327.h"            /* include for module CY327 */
#include "cj950.h"            /* include for module Cj950 */


/*
 ***************************************************************************************************
 * H-Bridge macros
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * SwitchOff-Function
 ***************************************************************************************************
 */
#define PWR_SWITCHOFF_FUNCTION_EXISTS

/*
 ***************************************************************************************************
 * 5V monitoring functions (VMT)
 ***************************************************************************************************
 */

/* The Main PVMT device is the CJ950 */
#define PWR_PVMT_ON_CJ950
#define Pwr_VmtSetUpLi(VAL)                   Cj950_Pvmt(CJ950_TEST_UPPER_THRESHOLD, 0)
#define Pwr_VmtSetLoLi(VAL)                   Cj950_Pvmt(CJ950_TEST_LOWER_THRESHOLD, 0)
#define Pwr_VmtNormal(VAL)                    Cj950_Pvmt(CJ950_TEST_NORMAL_THRESHOLD, 0)

/* Note: the Interface Pwr_GetStatcon() is obsolete and should not be used anymore!               */
#define Pwr_GetStatcon                        Cj950_EvalDiagReg



/*
 ***************************************************************************************************
 * reinitialization function call for either R2S2 or Cj945
 ***************************************************************************************************
 */
#define PWR_SOPINI_FKT        Cj950_Proc_ReInit()


/*
 ***************************************************************************************************
 * Defines for 5V monitoring functions (VMT)
 ***************************************************************************************************
 */

#define PWR_VMT_BP_ABE        CJ950_VMT_BP_ABE

#define PWR_VMT_MSK_ABE       CJ950_VMT_MSK_ABE

#define PWR_VMT_BP_POR        CJ950_VMT_BP_POR

#define PWR_VMT_MSK_POR       CJ950_VMT_MSK_POR

#define PWR_VMT_BP_DIS1       CJ950_VMT_BP_DIS1

#define PWR_VMT_MSK_DIS1      CJ950_VMT_MSK_DIS1

#define PWR_VMT_BP_DIS2       CJ950_VMT_BP_DIS2

#define PWR_VMT_MSK_DIS2      CJ950_VMT_MSK_DIS2

#define PWR_VMT_BP_OUTSTBY    CJ950_VMT_BP_OUTSTBY

#define PWR_VMT_MSK_OUTSTBY   CJ950_VMT_MSK_OUTSTBY
 

/*
 ***************************************************************************************************
 * Macros for 5V monitoring functions (VMT)
 ***************************************************************************************************
 */
#define PWR_VMT_BP_OV   CJ950_VMT_BP_OV
#define PWR_VMT_MSK_OV  CJ950_VMT_MSK_OV
#define PWR_VMT_BP_UV   CJ950_VMT_BP_UV
#define PWR_VMT_MSK_UV  CJ950_VMT_MSK_UV


/*
 ***************************************************************************************************
 * Changing the scb-mode
 ***************************************************************************************************
 */
                                                                                      
typedef enum                                                                          
{                                                                                     
    PWR_Cj950_1,
    PWR_Cj950_2,
    PWR_Cj950_3                                                                     
} Pwr_ChipNames_t;                                                                    
                                                                                      
                                                                                      
/* routing for Pwr_ScbMode(CHIP, STAGE, STATE) */                                     
#define Pwr_ScbMode(CHIP, STAGE, STATE)         PWR_SCBFUNC_##CHIP(STAGE, STATE)      
                                                                                      
#define PWR_SCBFUNC_PWR_Cj950_1(STAGE, STATE)   (((STATE) != FALSE) ?                 \
                               Cj950_ScbMode(0, STAGE, 0) : Cj950_ScbMode(0, STAGE, 1) )
#define PWR_SCBFUNC_PWR_Cj950_2(STAGE, STATE)   (((STATE) != FALSE) ?                 \
                               Cj950_ScbMode(1, STAGE, 0) : Cj950_ScbMode(1, STAGE, 1) )
#define PWR_SCBFUNC_PWR_Cj950_3(STAGE, STATE)   (((STATE) != FALSE) ?                 \
                               Cj950_ScbMode(2, STAGE, 0) : Cj950_ScbMode(2, STAGE, 1) )
                                                                 



#endif
