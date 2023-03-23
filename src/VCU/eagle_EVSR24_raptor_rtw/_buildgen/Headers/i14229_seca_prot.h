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
 * $Filename__:i14229_seca_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:DUE2ABT$ 
 * $Date______:13.12.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_seca_prot$ 
 * $Variant___:14.0.0$ 
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
 * 14.0.0; 0     13.12.2010 DUE2ABT
 *   first version for maserati
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: I14229_SECA_PROT
 *      Variant: B_BASSVR.6.0.0
 *      Revision: 0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229_SECA_PROT_H
#define _I14229_SECA_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Private header for I14229 service: Security access
 *
 * \scope               [INTERN]
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

/* Status of SecA: */
#define I14229_SECA_ST_REQSEED   0x00     /* Ready to receive request #1 (request seed)     */
#define I14229_SECA_ST_SENDSEED  0x11     /* Get seed and send it                           */
#define I14229_SECA_ST_SENDKEY   0x22     /* Ready to receive request #2 (send key)         */
#define I14229_SECA_ST_WAITEEP_IK   0x33     /* wait for eep access         */
#define I14229_SECA_ST_WAITEEP_POS  0x44     /* wait for eep access         */
#define I14229_SECA_ST_WAITEEP_RTDNE  0x66     /* wait for eep access         */

/* Length of request: */
#define I14229_SECA_REQLEN1      0x01     /* Request #1 (ACM)                               */

/* Length of response: */
#define I14229_SECA_RSPLEN2      0x01     /* Response #2 (ACM)                              */

/* Positions of parameters in request: */
#define I14229_SECA_REQPOS_ACM   0x00     /* Access mode (request #1 and request #2)        */
#define I14229_SECA_REQ2POS_KEY  0x01     /* Key (request #2) */

/* Positions of parameters in response: */
#define I14229_SECA_RSPPOS_ACM   0x00     /* Access mode (response #1 and response #2)      */
#define I14229_SECA_RSPPOS_SEED  0x01     /* Seed (response #1) */
#define I14229_SECA_RSPPOS_SAS   0x01     /* Security access status (response #2) */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* Delay of security access after power on: */
__PRAGMA_USE__bassvr__10ms__constant__x32__START
extern uint32 const I14229_SecA_tiDelayPO_cu32;
__PRAGMA_USE__bassvr__10ms__constant__x32__END
__PRAGMA_USE__bassvr__10ms__RAM__x8__START
extern uint8  I14229_SecA_numFailedAttempts_u8;  /* Number of failed attempts to get sec. access   */
extern uint8 I14229_SecA_numFailedDelay_u8;   /* Number of failed attempts to get sec. access after every
                                                 10 second delay */
extern uint8  I14229_SecA_st_u8;         /* Status of I14229_SecA                          */
__PRAGMA_USE__bassvr__10ms__RAM__x8__END
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern void   I14229_SecA_StartDelay(uint32 tiDelay_u32);
extern void   I14229_SecA_DelayIni(void);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END
#endif /* _I14229_SECA_PROT_H */
