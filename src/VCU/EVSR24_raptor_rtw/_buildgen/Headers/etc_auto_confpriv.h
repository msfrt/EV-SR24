/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  __
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *  C O R E
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:etc_std_template_confpriv.ht$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:NESTORADMINSDOM$
 * $Date______:31.07.2008$
 * $Class_____:CONFTPLHDR$
 * $Name______:etc_std_template_confpriv$
 * $Variant___:1.7.0$
 * $Revision__:0$
 * $Type______:HT$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: 
 *      Version: \main\7
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/


#ifndef _ETC_AUTO_CONFPRIV_H
#define _ETC_AUTO_CONFPRIV_H



/*
 ***************************************************************************************************
 * External declarations for all messages that are used for range check of the environment check
 ***************************************************************************************************
*/





/*
 ***************************************************************************************************
 * External declarations for all used test component functions
 ***************************************************************************************************
*/
/** External declaration for test: Etc_DfltTest                                                   */
/** No external declaration for START function as NULL pointer was configured */
/** No external declaration for STOP function as NULL pointer was configured */
/** No external declaration for GETSTATUS function as NULL pointer was configured */
/** No external declaration for ABORTREASON function as NULL pointer was configured */

/** External declaration for test: UEGO_EOL_TST                                                   */
extern uint16 UEGO_SRVTESTCLASS_IMPL_UEGO_GetStrtPerm(uint8 numPar_8, uint8 *Par_pu8);
extern uint16 UEGO_SRVTESTCLASS_IMPL_UEGO_GetStopPerm(void);
extern uint16 UEGO_SRVTESTCLASS_IMPL_UEGO_GetStatus(void);
/** No external declaration for ABORTREASON function as NULL pointer was configured */



/* _ETC_AUTO_CONFPRIV_H */
#endif
