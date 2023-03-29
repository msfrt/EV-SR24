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
 * $Filename__:epmsrv_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PUC2FE$
 * $Date______:09.10.2013$
 * $Class_____:SWHDR$
 * $Name______:epmsrv_pub$
 * $Variant___:1.23.0$
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
 * 1.23.0; 0     09.10.2013 PUC2FE
 *   RQONE00253427: Taking over of developed EpmSrv_CnvAg2IncAbsRoundOff() from 
 *   FC : EpmSrv_Lib  3.1.0; 1 to the platform FC : EpmSrv_Lib  1.29.0
 * 
 * 1.22.1; 0     30.08.2012 KAG4FE
 *   (RQONE00063870) bugfix for the following Macros:EPMSRV_CNVT2AG, 
 *   EPMSRV_CNVAG2T
 * 
 * 1.22.0; 0     15.08.2012 KAG4FE
 *   
 * 
 * 1.21.0; 2     29.05.2012 NHI1KOR
 *   1.Changes in GC:Epmsrv
 * 
 * 1.21.0; 1     27.03.2012 NHI1KOR
 *   Review changes
 * 
 * 1.21.0; 0     11.03.2010 OMO2FE
 *   interface changes: remove EpmSrv_getLstCylECU ( ) and EpmSrv_getNxtCylECU (
 *    ) because they are not used
 * 
 * 1.20.0; 0     17.11.2008 NF72FE
 *   Initial import from Clearcase 
 *      File name: epmsrv_pub.h
 *      Version: \main\basis\b_Epm\13
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMSRV_PUB_H                                  /* protect multiple includes              */
#define _EPMSRV_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * public header of STC EPMSRV
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

/* Macro converts a angle into internal quantisation */
#define PHI(x) ((((x) * EPM_PHIMAX) + EPM_PHICRSREV) / (EPM_PHICRSREV * EPM_NUMCRSREVWCY))

// defines for strategy of function EpmSrv_CnvAgT2Ag
#define EPMSRV_CNVAGT2AG_EXTP       1
#define EPMSRV_CNVAGT2AG_MIAP       2



/*********************************************************/
/*                                                       */
/* Definitions for converting time, angle and increments */
/*                                                       */
/*********************************************************/
/** Angle size factor of one increment in 1/deg */
#define EPM_INCAGFAC             ((real32)EPM_PHICRSREV / (real32)EPMHCRS_NUMINC)

//** Integer factor for 1 deg (4551)  it result of following calculation: (0x8000/720) * 100.
//** Multiplication with factor 100 is done to get an precision that is high enaugh
#define EPM_AGONEFAC             (sint32) (ANGLE_RES_FL * 100.0f)

/**
 ***************************************************************************************************
 * Calculates for a given ignition position the corresponding TDC.
 *
 * This macro returns for a given position of the ignition sequence ctCyl the corresponding TDC.
 * ctCyl has a range from 0 upto NUMCYLMAX_SY - 1. The TDC comes out of an application
 * array (Epm_numFireSeg_C[NUMCYLMAX_SY -1] which contains the ignition sequence of the physical
 * cylinders over a complete engine working cycle.
 * This version works only for a single system and doesn't support master/slave systems.
 *
 * \param uint8 ctCyl number of ignition position for which a TDC should returned.
 * \retval uint8 depending TDC to ctCyl
 ***************************************************************************************************
 */
/* MISRA RULE 93 VIOLATION: macro neeeds less ressources */
#define EPMSRV_GETNUMTDC(ctCyl) (Epm_numFireSeg_C[ctCyl])

/**
 ***************************************************************************************************
 * Returns the first ignition position.
 *
 * This macro has as result ever of value zero because this is the first ignition position.
 *
 * \retval NULL
 ***************************************************************************************************
 */
#define EPMSRV_GETFRSTCYL       0

/**
 ***************************************************************************************************
 * This macro returns the angle for a given ignition position.
 *
 * For each ignition position a angle is saved in the applicable array Epm_phiTDC. The angle values
 * are normalized in the following way: 1degree = 0x07fff/720.
 * The user has to take care, that the input paramater is in a correct range otherwise unexpected
 * errors can happen.
 *
 * \param uint8 ctCyl ignition position for that the angle is wanted.
 * \retval sint16 depending phiTDC to ctCyl.
 * \usedresources Epm_phiTDC
 ***************************************************************************************************
 */
/* MISRA RULE 93 VIOLATION: macro needs less ressources */
#define EPMSRV_GETAGCYL(ctCyl)  (Epm_phiCyl[ctCyl])

/**
 ***************************************************************************************************
 * Converts time to angle.
 *
 * Input for this function are time and speed. Under consideration of both time and speed an
 * depending angle is calculated. The output is the a normalized angle value.
 *
 * The formular is:
 *
 *
 *      ag =  tiDiff * nEng * EPM_N_RES_FL * ANGLE_RES_FL * 360
 *                                           ------------------
 *                                            FAC_USEC_TO_RPM
 *
 *                 ( 1 )         ( 2 )             ( 3 )
 *
 * ( 1 ) : the physical part to calculate an angle from time and speed
 * ( 2 ) : to change from internal resolution of engine speed to physical resolution rpm
 * ( 3 ) : to change from unit us to deg/rpm
 *
 * Part (2) and (3) calculate with system-constants that are partly floating values. The system
 * constants must be multiplied/divided in one part. After this it must be converted to an integer
 * value. If this is done so, the compiler calculates offline an integer value and the uC doesn't
 * use real-values.
 *
 * \param sint32 tiDiff time difference for that the angle should be calculated
 * \param sint16 nEng actual speed
 * \retval sint16 calculated angle
 ***************************************************************************************************
 */
/* MISRA RULE 93 VIOLATION: macro needs less ressources */
#define EPMSRV_CNVT2AG(tiDiff,nEng)\
    (SrvB_MulDiv16(tiDiff, (sint32)(nEng),\
                (sint32)((real32)FAC_USEC_TO_RPM / (ANGLE_RES_FL * EPM_N_RES_FL * 360.0f))))
/**
 ***************************************************************************************************
 * Converts angle to time.
 *
 * Input for this functions are angle and speed. Under consideration of both angle and speed a
 * depending time is calculated. The output is the a normalized time in 1 bit/µsec.
 * The user has to take care for correct paramaters otherwise strange results will return.
 *
 * The formular is:
 *
 *            agDiff     1                     1
 *      ti =  ------ * ------------ * ----------------------
 *             nEng    EPM_N_RES_FL     360 * ANGLE_RES_FL
 *                                      ------------------
 *                                        FAC_USEC_TO_RPM
 *
 *            ( 1 )       ( 2 )                ( 3 )
 *
 * ( 1 ) : the physical part to calculate a time from angle and speed
 * ( 2 ) : to change from internal resolution of engine speed to physical resolution rpm
 * ( 3 ) : to change from unit deg/rpm to us
 *
 * Part (2) and (3) calculate with system-constants that are partly floating values. The system
 * constants must be multiplied/divided in one part. After this it must be converted to an integer
 * value. If this is done so, the compiler calculates offline an integer value and the uC doesn't
 * use real-values.
 *
 * \param sint16 agDiff angle difference for that the time should be calculated.
 * \param sint16 nEng actual speed.
 * \retval sint32 calculated time.
 ***************************************************************************************************
 */

/* MISRA RULE 93 VIOLATION: macro needs less ressources */
#define EPMSRV_CNVAG2T(agDiff,nEng)\
    (SrvB_MulDiv32((sint32) (agDiff),((sint32)FAC_USEC_TO_RPM\
    / (sint32)(360.0f * ANGLE_RES_FL * EPM_N_RES_FL) ),(sint32) (nEng)))


/**
 ***************************************************************************************************
 * Convert an angle to increments.
 *
 * For the given angle the number of increments is calculated.
 *
 * \param sint16 agDiff angle value.
 * \retval sint16 number of increments
 ***************************************************************************************************
 */
/* MISRA RULE 93 VIOLATION: macro needs less ressources */
#define EPMSRV_CNVAG2INC(phiDiff) ( (((phiDiff) * EPMSRV_FACAG) + 0x8000L) / 0x10000L )

/**
 ***************************************************************************************************
 * Convert increments to an angle.
 *
 * For the given number of increments an angle is calculated.
 *
 * \param uint16 numInc number of increments.
 * \retval uint16 calculated angle.
 ***************************************************************************************************
 */
/* MISRA RULE 93 VIOLATION: macro needs less ressources */
#define EPMSRV_CNVINC2AG(numInc) ( (((numInc) * 0x10000L) + (EPMSRV_FACAG / 2)) / EPMSRV_FACAG )


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Prototypes for functions which can be used as inline or normal C-implementation
 ***************************************************************************************************
 */

extern uint8  EpmSrv_GetCntCyl   (uint8 numTDC);
extern void   EpmSrv_CnvAg2IncHi (sint32 numAg, sint16 *numInc, sint16 *phiOffs);
extern sint16 EpmSrv_CnvAg2IncAbs(sint16 phiAbs);
extern sint16 EpmSrv_CnvInc2AgAbs(sint32 ctInc);
extern sint16 EpmSrv_CnvAg2Inc(sint16 agDiff);
extern sint16 EpmSrv_CnvInc2Ag(sint16 numInc);


extern uint8  EpmSrv_CnvAgT2Ag(sint16 phiBase, sint32 tiSeg, sint16 *phiSeek, uint8 stgy);
extern uint8  EpmSrv_GetLstCyl(uint8 ctCyl);
extern uint8  EpmSrv_GetNxtCyl(uint8 ctCyl);
extern uint8  EpmSrv_CnvAgAbs2IncLo(sint16 phiAbs);

extern sint16 EpmSrv_CnvT2Ag(sint32 tiDiff,sint16 nEng);
extern sint32 EpmSrv_CnvAg2T(sint16 agDiff,sint16 nEng);
extern sint16 EpmSrv_ModuloAg(sint32 phiDiff);

/* _EPMSRV_PUB_H */
#endif
