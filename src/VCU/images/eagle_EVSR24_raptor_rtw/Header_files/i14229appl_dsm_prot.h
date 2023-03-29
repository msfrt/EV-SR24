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
 * $Filename__:i14229appl_dsm_prot.h$ 
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
 * $Name______:i14229appl_dsm_prot$ 
 * $Variant___:5.6.0$ 
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
 * 5.6.0; 0     29.10.2008 MXA2SI
 *   Initial import from Clearcase 
 *      File name: i14229appl_dsm_prot.h
 *      Version: \main\basis\b_CORE\9
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _I14229APPL_DSM_PROT_H
#define _I14229APPL_DSM_PROT_H

/**
 ***************************************************************************************************
 * moduledescription
 *         private header file DSM interface functions for stored data transmission functional unit
 *
 * scope               [CONF]
 ***************************************************************************************************
 */

 /*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "bassvrappl_dsm_prot.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */


/* statusofDTC values - bit masks */
#define I14229_DSM_ST_TF_MSK        0x01  /*  test failed                             */
#define I14229_DSM_ST_TFTMC_MSK     0x02  /* test failed this monitoring cycle        */
#define I14229_DSM_ST_PDTC_MSK      0x04  /* pending DTC                              */
#define I14229_DSM_ST_CDTC_MSK      0x08  /* confirmed DTC                            */
#define I14229_DSM_ST_TNCSLC_MSK    0x10  /* test not completed since last clear      */
#define I14229_DSM_ST_TFSLC_MSK     0x20  /* test failed since last clear             */
#define I14229_DSM_ST_TNCTMC_MSK    0x40  /* test not completed this monitoring cycle */
#define I14229_DSM_ST_WIR_MSK       0x80  /* warningIndicatorRequested                */
#define I14229_DSM_DTCEDRNUM_NOTSUP 0xFFFF  /* DTC record is not supported              */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* Dsm interface functions for stored data transmission functional unit */
/* get the status of DTC */
__PRAGMA_USE__CODE__bassvr__NormalSpeed__START

extern uint8 I14229Appl_DSM_GetStatusOfDTC(uint idxEntry);
extern uint  I14229Appl_DSM_GetDTCLowByte(uint idxEntry_ui);
/* function to read DTC low byte for a given DFC number */
extern uint  I14229Appl_DSM_GetDTCLowByteOfDFC(uint idxDFC_ui);

/* Get number of DTC Extended data record blocks */
extern uint  I14229Appl_DSM_GetnumDTCExtDRBlk(uint idxEntry_ui);
/*Get DTC Extended data record number */
extern uint  I14229Appl_DSM_GetDTCExtDRNum(uint idxEntry_ui,
                                           uint ExtDRBlk_ui);
/* Get the extended data record parameters and fill in the buffer dBuf_pu8 */
extern uint  I14229Appl_DSM_GetDTCExtDataRecord(uint   idxEntry_ui,
                                                uint   DTCExtDRNum_ui,
                                                uint8* dBuf_pu8);

extern uint  I14229Appl_DSM_GetSSRecord(uint   idxEntry_ui,
                                        uint   DTCSSRNum_ui,
                                        uint8* dBuf_pu8);

/* functions to read status of supported DFC
   irrespective of whether they are in error memory (DFES) or not
*/
extern uint8 I14229Appl_DSM_GetStOfALLDTC(uint idxDFC_ui);

__PRAGMA_USE__CODE__bassvr__NormalSpeed__END
/* _I14229APPL_DSM_PROT_H */
#endif
