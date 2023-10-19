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
 * $Filename__:rmtc.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLN1SI$ 
 * $Date______:05.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:rmtc$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     05.08.2008 KLN1SI
 *   Initial import from Clearcase 
 *      File name: rmtc.h
 *      Version: \main\basis\b_DE_DevLib\4
 * 
 * 1.4.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: rmtc.h
 *      Version: \main\basis\b_DE_DevLib\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _RMTC_H
    #define _RMTC_H      /* Prevent this header from further inclusions.            */


// file RMTC.h - dummy implementation until real lib is available
//=======================

#define RmtC_IsActive(RMTC_SIG_NR) FALSE
#define RmtC_Get_S16(RMTC_SIG_NR,RVal) FALSE


#define RMTC_SIG_ENVP 1
#define RMTC_SIG_ENVT 2
#define RMTC_SIG_CACDST 3
#define RMTC_SIG_FUELT 4
#define RMTC_SIG_CENGDST 5
#define RMTC_SIG_CACDSP 6

#endif /* _RMTC_H */
