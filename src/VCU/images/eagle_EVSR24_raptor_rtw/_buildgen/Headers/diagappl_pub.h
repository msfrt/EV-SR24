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
 * $Filename__:diagappl_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:BUR6KOR$ 
 * $Date______:07.05.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:diagappl_pub$ 
 * $Variant___:1.9.1$ 
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
 * 1.9.1; 0     07.05.2012 BUR6KOR
 *   Migrated from clearcase: B_DIAG.9.0.2,  B_DIAG_Conf.9.0.2
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diagappl_pub.h
 *      Version: \main\basis\b_CORE\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef     _DIAGAPPL_PUB_H
#define     _DIAGAPPL_PUB_H


/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */

#define    DIAG_OBD_INACTIVE      0x00
#define    DIAG_15765_CAN         0x01
#define    DIAG_9141_KLINE_CARB   0x02
#define    DIAG_14230_KLINE       0x03

/*
 ***************************************************************************************************
 *    External data
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 *    Function prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__diagcom__NormalSpeed__START
extern void     Diag_Co_Proc_Ini(void);
extern void     Diag_NegR(bit8 stCondition_b8, DiagCom_Msg_t *Msg_ps);
extern void     Diag_CommunicationBroken(void);
extern bool		Diag_TpGetMsgState(void);
__PRAGMA_USE__CODE__diagcom__NormalSpeed__END
/* The follwing Declaration is needs for storing the CAN type information in    */
/* Comstate Discriptor                                                          */
/* extern void SaveComStateUserData (void);                                     */

#endif /* _DIAGAPPL_PUB_H */
