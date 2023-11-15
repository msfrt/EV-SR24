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
 * $Filename__:dfc_confprot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MMO2FE$ 
 * $Date______:15.06.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:dfc_confprot$ 
 * $Variant___:2.9.0$ 
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
 * 2.9.0; 0     15.06.2012 MMO2FE
 *   Removal of CV Features depending on configuration: 
 *   DSM_HDOBD_SY, DSM_MDOBD_SY, DFES_EOBDCV_SY.
 *   Hexneutral for Non CV configuration.
 * 
 * 2.3.0; 0     24.07.2009 SGS3KOR
 *   Alternate way of selecting long term errors via fault class
 * 
 * 2.2.0; 0     16.06.2009 PKA2SI
 *   CC-LABEL B_DSM.14.1.0
 *   ResponseOnEvent extension
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dfc_confprot.h
 *      Version: \main\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DFC_CONFPROT_H
#define _DFC_CONFPROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - control,disable mask definition
 *              Data types and access macros
 *
 * \scope           INTERN
 ***************************************************************************************************
 */

#ifndef DFC_CTLDISBLLAYOUT_SY
  #error >>>> 'DFC_CTLDISBLLAYOUT_SY' undefined! 
#endif
#ifndef DFC_CTLMSKBYTES_SY
  #error >>>> 'DFC_CTLMSKBYTES_SY' undefined! 
#endif
#ifndef DFC_DISBLMSKBYTES_SY
  #error >>>> 'DFC_DISBLMSKBYTES_SY' undefined! 
#endif

#if( (DFC_CTLDISBLLAYOUT_SY == 0) && ((DFC_CTLMSKBYTES_SY < 2 ) ||(DFC_DISBLMSKBYTES_SY < 2 )))
#error >>>> 'DFC_DISBLMSKBYTES_SY' is 0 so 'DFC_CTLMSKBYTES_SY' and 'DFC_DISBLMSKBYTES_SY' must be 2     
#endif



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**************************************************************************************************/
/* control mask handling                                                                          */
/**************************************************************************************************/
/*
    Hints for allocating new bits (properties):
    - the contents and the position shall be cleared within the DSM team
    - the old layout (DFC_CTLDISBLLAYOUT_SY == 0) enforces 16 bit => position random
    - the new layout DFC_CTLDISBLLAYOUT_SY == 1) allows 8 bit and 16 bit control masks.
       Therefore platform / often used flags shall be allocated in the lower byte,
       special bits / seldom used flags shall be allocated in the upper byte
       in order to support 8 bit control masks for as many projects as possible.
*/
#if (DFC_CTLDISBLLAYOUT_SY == 0)

/* long time error (commercial vehicles) */
#define DFC_CTL_MSK_LT_POS                           0u

/* alternative fault for long time error handling (commercial vehicles) */
#define DFC_CTL_MSK_LTALTRNTV_POS                    1u

/* DFC represents entry of external ECU  */
#define DFC_CTL_MSK_EXT_POS                          2u

/* Disable behaviour */
#define DFC_CTL_MSK_DIS_POS                          9u


/* Reset at intialisation */
#define DFC_CTL_MSK_RESINI_POS                       10u


/* Reset at cancelled afterrun */
#define DFC_CTL_MSK_RESCANC_POS                      11u


/* Support Wiggle test */
#define DFC_CTL_MSK_WIGGLE_POS                       12u


/* Master/Slave /MultiECU selective */
#define DFC_CTL_MSK_SELMS_POS                        13u


/* Master/Slave ECU selection */
/* First bit position */
#define DFC_CTL_MSECUID_DIS_POS                      14u
/* number of bits */
#define DFC_CTL_MSK_MSECUID_LEN                      2u

#else

/* unified in one calibration option Reset at intialisation, at cancelled afterrun */
#define DFC_CTL_MSK_RESINI_POS                       0u
#define DFC_CTL_MSK_RESCANC_POS                      0u

/* Master/Slave /MultiECU selective */
#define DFC_CTL_MSK_SELMS_POS                        1u

/* Master/Slave ECU selection */
/* First bit position */
#define DFC_CTL_MSECUID_DIS_POS                      2u
/* number of bits */
#define DFC_CTL_MSK_MSECUID_LEN                      2u

/* Support Wiggle test */
#define DFC_CTL_MSK_WIGGLE_POS                       4u

/* long time error (commercial vehicles) - Only reserved for future use, not used currently */
#define DFC_CTL_MSK_LT_POS                           8u

/* alternative fault for long time error handling (commercial vehicles) 
   Only reserved for future use, not used currently */
#define DFC_CTL_MSK_LTALTRNTV_POS                    9u

/* DFC represents entry of external ECU  */
#define DFC_CTL_MSK_EXT_POS                          10u


#endif


/* Access macros (only Get macros, because calibration value ) */

/* Get Disable Mask */
#define DFC_GetCtlDisableMsk(numCheck) (DFC_GetDisblMsk(numCheck)) 

/* Get external information for specified DFC */
#define DFC_GetCtlExt(numCheck)                           \
              (SrvB_GetBit( DFC_GetCtlMsk(numCheck)       \
                          , DFC_CTL_MSK_EXT_POS))

/* Get long time error state of fault check */
#define DFC_GetCtlLT(numCheck)                            \
              (SrvB_GetBit( DFC_GetCtlMsk(numCheck)       \
                          , DFC_CTL_MSK_LT_POS))

/* Get alternative fault status for long time error handling */
#define DFC_GetCtlAltrntvLT(numCheck)                     \
              (SrvB_GetBit( DFC_GetCtlMsk(numCheck)       \
                          , DFC_CTL_MSK_LTALTRNTV_POS))

#if (DFC_CTLDISBLLAYOUT_SY == 0)
/* Get Disable Behaviour placed in control mask */
#define DFC_GetCtlDisblBehvMsk(numCheck)                  \
              (SrvB_GetBit( DFC_GetCtlMsk(numCheck)       \
                              , DFC_CTL_MSK_DIS_POS))     
#endif

/* Get reset on init status */
#define DFC_GetCtlResOnInit(numCheck)                     \
              (SrvB_GetBit( DFC_GetCtlMsk(numCheck)       \
                          , DFC_CTL_MSK_RESINI_POS))

/* Get reset on cancelled afterrun status */
#define DFC_GetCtlResOnCancle(numCheck)                   \
              (SrvB_GetBit( DFC_GetCtlMsk(numCheck)       \
                          , DFC_CTL_MSK_RESCANC_POS ))


/* Get support wiggle test status */
#define DFC_GetCtlWiggleSup(numCheck)                     \
              (SrvB_GetBit( DFC_GetCtlMsk(numCheck)       \
                          , DFC_CTL_MSK_WIGGLE_POS))


/* Get master slave selection activation */
#define DFC_GetCtlMSSelect(numCheck)                      \
              (SrvB_GetBit( DFC_GetCtlMsk(numCheck)       \
                          , DFC_CTL_MSK_SELMS_POS))

/* Get Master Slave active ECU ID */
#define DFC_GetCtlMSECUId(numCheck)                       \
              (SrvB_GetBitField( DFC_GetCtlMsk(numCheck)  \
                              , DFC_CTL_MSECUID_DIS_POS   \
                              , DFC_CTL_MSK_MSECUID_LEN))


/**************************************************************************************************/
/* disable mask handling                                                                          */
/**************************************************************************************************/

#if (DFC_CTLDISBLLAYOUT_SY > 0)
/* Disable behaviour */
#define DFC_DISBL_MSK_DIS_POS                          0u
/* Get Disable Behaviour, placed in disable mask */
/* keep macro name unchanged */
#define DFC_GetCtlDisblBehvMsk(numCheck)                  \
              (SrvB_GetBit( DFC_GetDisblMsk(numCheck)       \
                              , DFC_DISBL_MSK_DIS_POS))   
#endif

/* disable due to unused DFCs */
#if (DFC_CTLDISBLLAYOUT_SY == 0)
#define DFC_DISBL_MSK_DFC_UNUSED_POS                 15u
#else
#define DFC_DISBL_MSK_DFC_UNUSED_POS                 1u
#endif

#define DFC_DISBL_MSK_DFC_UNUSED_MSK     \
        (1u << (DFC_DISBL_MSK_DFC_UNUSED_POS))


#endif
