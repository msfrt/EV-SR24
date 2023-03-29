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
 * $Filename__:i14229_cc_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:MXA2SI$ 
 * $Date______:29.10.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:i14229_cc_prot$ 
 * $Variant___:4.6.0$ 
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
 * 4.6.0; 0     29.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: i14229_cc_prot.h
 *      Version: \main\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _I14229_CC_PROT_H
#define _I14229_CC_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *      Private header of ISO I14229 -1 service 'ECU Reset'
 *
 * \scope              [INTERN]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/* Defines for communication control service  */
/* Positions of parameters in request: and response */
#define I14229_CC_REQRSP_POS_CTRLTYPE       0x00     /* Contol type                     */

/* Positions of parameters in request: */
#define I14229_CC_REQPOS_COMNTYPE         0x01     /* Communication type                */

#define I14229_CC_ENRXTX    0x00      /* Enable rx and tx         */
#define I14229_CC_ENRXDITX  0x01      /* Enable rx and Disable tx */
#define I14229_CC_DIRXENTX  0x02      /* Disable rx and Enable tx */
#define I14229_CC_DIRXTX    0x03      /* Disable rx and tx        */


/* 1-0 bits represents the communication type:
   bit 0 - Application         (0x01)
   bit 1 - network management  (0x02)
   11 all communication types  (0x03) */

#define I14229_CC_ALL_COMNTYPE     0x03

#define I14229_CC_NCM       0x01      /* Normal Communication messages             */
#define I14229_CC_DNM       0x02      /* network managemant communication messages */


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START
extern uint8 I14229_CC_EnableDisableRxTx(DiagCom_Msg_t *Msg_ps);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

#endif /* _I14229_CC_PROT_H */
