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
 * $Filename__:isotpappl_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JAG2ABT$ 
 * $Date______:30.06.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:isotpappl_pub$ 
 * $Variant___:8.7.0$ 
 * $Revision__:1$ 
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
 * 8.7.0; 1     30.06.2011 JAG2ABT
 *   Changes after review
 * 
 * 8.7.0; 0     22.12.2008 MXA2SI
 *   HMC Gasoline
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef _ISOTPAPPL_PUB_H
#define _ISOTPAPPL_PUB_H


/*
 ***************************************************************************************************
 *    Defines
 ***************************************************************************************************
 */

/* The next macros determine the way the target address byte (TA)
   is obtained for messages to send when extended addressing is used:
   (one and only one of the two macros must be defined) */
   /* ISOTP_ADDRESSOFFSET is the value that is subtracted from the
      source CAN ID to get the target address */
//#define ISOTP_ADDRESSOFFSET               0x600
   /* ISOTP_TESTERADDRESS is used in case a fixed tester address
      is used as target address */
#define ISOTP_TESTERADDRESS               0xF1



/* use the Suspend/Resume macros from Cpu module here */


#define ISOTP_BEGIN_ATOMIC(p)             Cpu_SuspendInt()

#define ISOTP_END_ATOMIC(p)               Cpu_ResumeInt()

#define ISOTP_SYSTEM_TIME_INTICKS         Cpu_GetTIM0
#define ISOTP_MS_TO_TICKS(millisecs)     (CPU_MS_TO_TICKS(millisecs))
#define ISOTP_US_TO_TICKS(microsecs)     (CPU_US_TO_TICKS(microsecs))


/*
 ***************************************************************************************************
 *    External data
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__tp__NormalSpeed__START
extern void  IsoTp_Co_Proc_Ini        ( void );
extern uint8 IsoTp_CanTransferMsg     ( uint16 numLMsgNo_u16, uint8* buffer, uint8 dlc_u8,            \
                                        bool dlc8send_b, uint32 id, uint8 padding_val);
extern bool  IsoTp_CheckFunctionalTP  ( uint8 tpHandleNo_u8, uint8 reqLen_u8, uint8* buffer);
__PRAGMA_USE__CODE__tp__NormalSpeed__END


#endif
