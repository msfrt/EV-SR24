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
 * $Filename__:epm_spd_pub.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:restructuring of FCs for improved diagnosis documentation and 
 *             maintenance$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PIE2SI$
 * $Date______:20.12.2011$
 * $Class_____:SWHDR$
 * $Name______:epm_spd_pub$
 * $Variant___:1.34.0$
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
 * 1.34.0; 0     20.12.2011 PIE2SI
 *   Update for Epm_nEngLowSpdXP and Epm_tiSegLowSpd in case of rotation change
 *   
 *   Update of requirements for prediction
 * 
 * 1.33.0; 2     04.11.2011 PIE2SI
 *   Update for usage in old BC Epm
 *   
 * 
 * 1.33.0; 1     12.10.2011 PIE2SI
 *   Update after integration:
 *   remove system constant from header files
 * 
 * 1.33.0; 0     31.08.2011 PIE2SI
 *   Update after vehicle test
 * 
 * 1.29.0; 1     16.02.2011 PIE2SI
 *   Update after LC tests
 * 
 * 1.29.0; 0     03.12.2010 PIE2SI
 *   Update
 * 
 * 1.26.0; 0     09.04.2010 PIE2SI
 *   Update after review
 * 
 * 1.25.0; 0     17.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMSPD_PUB_H
#define _EPMSPD_PUB_H

/*
 ***************************************************************************************************
 * public defines
 ***************************************************************************************************
 */
/** States of Message Epm_stSpd: inside enum  */
#define EPM_SPD_HOLD_BACKUP     5	/* THIS STATE NOT SET IN Epm_Spd CODE and enum, but keep for compatibility */

/* Factor 7324 to calculate nEng from [degCrS/us] to rpm [360 deg/min] with resolution 0,5rpm    */
/*  - phiSeg [degCrS]     : with 1/ANGLE_RES (1/45.511111)= 0.02197 deg resolution               */
/*  - tiSeg [us]        : with 200ns resolution                                             */
/* us->s , s->min       : 1000000 * 60                                                      */
/* nEng res of 0.5 rpm  : NENGRESFAC  = 2                                                   */
/* 360 deg in ANGLE_RES_FL : EPM_PHIMAX / 2 => (720/2) * 45.511111 = 16384                     */
/* ==> 7324 = (1000000 * 60 * NENGRESFAC) / (EPM_PHIMAX / 2 * ANGLE_RES_FL)                 */
#define EPM_FACSPD              7324L

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
/** enum for speed calculation states of message Epm_stSpd:*/
enum Epm_SpdStates
{
    EPM_SPD_CRS, /* 0 speed is calculated from crankshaft signal*/
    EPM_SPD_HOLD,/* 1    hold (freeze) to last value*/
    EPM_SPD_ZERO,/* 2    set speed to zero*/
    EPM_SPD_CAS,/* 3    speed is calculated from camshaft signal*/
    EPM_SPD_BACKUP /* 4    speed is calculated from camshaft signal in backup mode*/
};
/** enum of states of speed extrapolation for Epm_stLowSpdXP: */
enum Epm_LowSpdXPStates
{
    EPM_SET_TO_ZERO_e,
    EPM_HOLD_LAST_PERIOD_e,
    EPM_HOLD_AT_GAP_e,
    EPM_HOLD_AT_GAP_REV_e,
    EPM_EXTRAPOLATE_e,
    EPM_DIR_CHANGE_e
};
/** enum for near of far from TDC in state Epm_stPredict: */
enum Epm_LowSpdPredictStates
{
    EPM_TDC_NEAR_e,
    EPM_TDC_FAR_e
};
/** enum for direction change states Epm_stDirChange_mp:  */
enum Epm_DirChangeStates
{
    EPM_FORW_REV_CHANGE_e = -1,
    EPM_NO_DIR_CHANGE_e = 0,
    EPM_REV_FORW_CHANGE_e = 1
};

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
/* the process prototypes are not used in new systems but may be used by older OS configuration
* and stay for compatibility reasons*/
__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void Epm_Spd_10ms_Proc(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END
__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void Epm_Spd_1ms_Proc(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END
__PRAGMA_USE__CODE__epm__LowSpeed__START
extern void Epm_Spd_OBDSrv_Proc_200ms(void);
__PRAGMA_USE__CODE__epm__LowSpeed__END
__PRAGMA_USE__CODE__epm__NormalSpeed__START
extern void Epm_Spd_Proc_IniEnd(void);
__PRAGMA_USE__CODE__epm__NormalSpeed__END
__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void Epm_Spd_Syn_Proc(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif
