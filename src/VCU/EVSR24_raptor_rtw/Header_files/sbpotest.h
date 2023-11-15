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
 * $Filename__:sbpotest.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:27.01.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:sbpotest$ 
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
 * 1.11.0; 0     27.01.2009 KLMEYER
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SBPOTEST_H
#define _SBPOTEST_H

/*!
 *********************************************************************
 * \moduldescription
 *          Header file for TSW
 *
 * \scope
 *********************************************************************
 */

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */
/* PowerOn Test results */
enum {
    /* flags of Infoblock check */
    SBPOTEST_IB_CHECK_IB_FAIL_BP = 0,
    SBPOTEST_IB_CHECK_CSTAB_FAIL_BP,
    SBPOTEST_IB_CHECK_CSBLOCK_FAIL_BP,
    SBPOTEST_IB_CHECK_EMPTY_BP,
    SBPOTEST_IB_COMPIDFAIL_BP,
    SBPOTEST_IB_ENDPATTERN_FAIL_BP,
    SBPOTEST_IB_CB_OK_BP,
    SBPOTEST_IB_CB_END_BP,
    SBPOTEST_IB_CB_COPYPAGE_BP,
    SBPOTEST_IB_TPB_OK_BP,
    SBPOTEST_SB_COPYPAGE_BP,
    SBPOTEST_HSB_FAIL_BP,
    SBPOTEST_IB_CONFIG_FAILURE_BP,
    SBPOTEST_IB_CHAIN_INTERRUPTED_BP,
    SBPOTEST_SB_MISMATCH_CPU_BP
};

typedef struct {
    uint8 dType_u8;
    uint32 stResult_u32;
    uint8 dInfo_au8[8];
} SBPOTest_Result_t;

#endif
