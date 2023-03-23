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
 * $Filename__:uaccappl_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:21.01.2013$
 * $Class_____:SWHDR$
 * $Name______:uaccappl_pub$
 * $Variant___:36.10.0$
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
 * 36.10.0; 0     21.01.2013 JAG2ABT
 *   for PVER
 * 
 * 2.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: uaccappl_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/





#ifndef _UACCAPPL_PUB_H
#define _UACCAPPL_PUB_H

/**
 ***************************************************************************************************
 * \moduldescription
 *      configuration header for UACC module :
 *
 * \scope              [API]
 ***************************************************************************************************
 */

/* Defines
 ***************************************************************************************************
 */
#define UACCAPPL_CTRLSTATESIZE  1

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */


/* Function to get DME user */
__PRAGMA_USE__CODE__uacc__NormalSpeed__START
extern uint32 UAcc_GetDmeUser(void);
extern void UAcc_Mem_Dme_Read( uint8 numUAcc_MemUser_u8);
extern void UAcc_Mem_Dme_Write( uint8 numUAcc_MemUser_u8);
extern uint16 UAccAppl_SetActVal(void *dPara_pv, uint8 stMode_u8);
__PRAGMA_USE__CODE__uacc__NormalSpeed__END

#endif
