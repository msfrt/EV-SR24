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
 * $Filename__:uaccappl_conf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:25.07.2012$
 * $Class_____:SWHDR$
 * $Name______:uaccappl_conf$
 * $Variant___:36.5.1$
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
 * 36.5.1; 0     25.07.2012 JAG2ABT
 *   UACC memory range correction
 *   Output format for CVN (ID 0xF806) corrected
 * 
 * 36.0.0; 0     26.11.2010 JAG2ABT
 *   Configuration for Ferrari,Maserati
 * 
 * 8.7.0; 0     04.02.2009 MXA2SI
 *   migrated from ClearCase : B_UACC_Conf.7.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _UACCAPPL_CONF_H
#define _UACCAPPL_CONF_H

/**
 ***************************************************************************************************
 * \moduldescription
 *      configuration header for UACC module :
 *
 * \scope              [CONF]
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__uacc__10ms__InitRAM__arr8__START
extern uint8 UAcc_SWLabel_au8[];
extern const uint32 UAcc_Zero;
extern const uint32 UAcc_Ones;
extern const uint8  UAcc_1;
extern uint32 UAcc_Test;
extern uint8 UAcc_Temp_au8[];
__PRAGMA_USE__uacc__10ms__InitRAM__arr8__END

/* Check for ETC package is enabled */
#if(ETC_Act_SY != 0)

__PRAGMA_USE__uacc__10ms__RAM__arr16__START
extern uint16 UAcc_EtcDelayLst_a[];
__PRAGMA_USE__uacc__10ms__RAM__arr16__END

#endif

#endif
