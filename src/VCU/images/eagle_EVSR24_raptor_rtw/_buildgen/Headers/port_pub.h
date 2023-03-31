/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:port_pub.h$
 * $Author____:NESTORADMINSDOM$
 * $Function__:This version is created by migration tool$
 * $Domain____:SDOM$
 * $User______:NESTORADMINSDOM$
 * $Date______:31.07.2008$
 * $Class_____:SWHDR$
 * $Name______:port_pub$
 * $Variant___:1.4.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.4.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: port_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/
#ifndef _PORT_PUB_H
#define _PORT_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Public headerfile of PORT module.
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

  /* Define to identify if there is possibility to call Port_GetInitState() function */
#define PORT_GETINITSTATE_DEF 1

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void  Port_Proc_Ini(void);
extern void  Port_CalWakeup_Proc_Ini(void);
extern bool  Port_DioGet(uint16 numPort_u16, uint16 numPin_u16);
extern void  Port_DioSet(uint16 numPort_u16, uint16 numPin_u16, bool stValue_b);
extern void  Port_RestoreIOCR(uint16 numPort_u16, uint16 numPin_u16);
extern void  Port_SetIOCRGpio(uint16 numPort_u16, uint16 numPin_u16);
extern uint8 Port_GetInitState(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/*_PORT_PUB_H */
#endif
