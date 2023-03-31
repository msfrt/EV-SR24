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
 * $Filename__:cj135_template_conf.ht$
 * $Author____:LENZSI$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:NUT1HC$
 * $Date______:16.11.2012$
 * $Class_____:CONFTPLHDR$
 * $Name______:cj135_template_conf$
 * $Variant___:1.6.0$
 * $Revision__:4$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.6.0; 4     16.11.2012 NUT1HC
 *   Remove the feature DEBUG
 * 
 * 1.6.0; 3     20.01.2012 EGF2FE
 *   In this revision some confusing defines for device revision were removed.
 * 
 * 1.6.0; 2     21.12.2011 ABE3KOR
 *   Misra warnings are solved
 * 
 * 1.6.0; 1     16.12.2011 ABE3KOR
 *   Discrete powerstage related definisions are added.
 * 
 * 1.6.0; 0     11.10.2011 ABE3KOR
 *   Design of Cj135 driver is updated.
 * 
 * 1.3.3; 0     26.03.2011 EGF2FE
 *   Bugfix for state machine and detection of invalid RAM contents
 * 
 * 1.3.0; 0     20.08.2010 EGF2FE
 *   .
 * 
 * 1.2.0; 0     28.05.2010 EGF2FE
 *   Implementation of several improvements at the CJ135 device driver.
 *   - simplification at handling of writing data to register bank 
 *   - decrease of RAM resources for writing register bank
 *   - improvement of diagnosis functionality inside device driver
 *   - implementation of several minor review findings and test results
 *   - improvement of configuration by perl script (heater, interrupt, clock 
 *   connection)
 *   - preparation for support of 2 CJ135 devices (not complete)
 * 
 * 1.1.0; 0     27.11.2009 JWI2SI
 *   B_LSM.10.0.0
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CJ135_AUTO_CONF_H
#define _CJ135_AUTO_CONF_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Automatically generated configuration file for Cj135
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */




/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Compilerswitch for enabling/disabling the device driver Cj135 */
#define         CJ135_ACTIVE
#define         CJ135_NUM_ICS       2

/* Compilerswitch for enabling/disabling the device driver part for discrete powerStage */


/**************************************************************************************************/
/* List with index values to be passed as parameter to functions.                                 */
/* The first value 'CJ135_DEVDUMMY_NUM = 0' is only for dummy                                     */
/* because the first CJ135 must have the index '1'                                                */
/**************************************************************************************************/
enum CJ135_DEVICES
{
    CJ135_DEVDUMMY_NUM,
    CJ135_DEV1_NUM,
    CJ135_DEV2_NUM,
    CJ135_DEVMAX_NUM
};

/* Tolerance for interrupt intervals. */
/* Lower tolerance */
#define CJ135_INTINTERVAL_LIM_LOW   9490


/* Upper tolerance */
#define CJ135_INTINTERVAL_LIM_HIGH  10490


/* Masks for masking out parts of the register contents */
#define     CJ135_CHIPST_BNK_MSK                    0x01


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* Declaration of processes built dynamically by the configuration script of CJ135 */
__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern  void    Cj135_RdMeasVal_Proc(void);
extern  void    Cj135_HtrDpsDiaIntDev1_Proc(void);
extern  void    Cj135_HtrDpsDiaIntDev2_Proc(void);
extern  void    Cj135_HtrDpsDiaIntDev3_Proc(void);
extern  void    Cj135_HtrDpsDiaIntDev4_Proc(void);

__PRAGMA_USE__CODE__hwe__HighSpeed__END


/* _CJ135_AUTO_CONF_H */
#endif
