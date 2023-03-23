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
 * $Filename__:bassvrappl_checkprog_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAH5KOR$
 * $Date______:24.09.2014$
 * $Class_____:SWHDR$
 * $Name______:bassvrappl_checkprog_prot$
 * $Variant___:NEWEAGLE$
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
 * NEWEAGLE; 0     24.09.2014 DAH5KOR
 *   ComDia package customised for New Eagle projects
 * 
 * 6.0.0; 1     22.08.2011 DUE2ABT
 *   modification after maserati integration
 * 
 * 6.0.0; 0     11.04.2011 JAG2ABT
 *   Platform Ferrari_Maserati
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Nestor.
 *   Object in Nestor:
 *      Domain: MX17
 *      Class: SWHDR
 *      Object name: BASSVRAPPL_CHECKPROG_PROT
 *      Variant: B_BASSVR.6.0.0
 *      Revision: 0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _BASSVRAPPL_CHECKPROG_PROT_H
#define _BASSVRAPPL_CHECKPROG_PROT_H

/**
 ***************************************************************************************************
 * moduledescription
 *         private header file DSM interface functions for stored data transmission functional unit
 *
 * scope               [CONF]
 ***************************************************************************************************
 */

#include "bassvrappl_checkprog_dat.h"	/* for imported system constants */
#include "diag_pub.h"					/* for 'diag_sess_pub.h' */
#include "diag_sess_pub.h"              /* for Diag_Msg_s */
#if (SY_CANVAR == 5) /* Maserati UDS on CAN variant */
#include "i14229appl_confprot.h"
#endif
/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__bassvr__NormalSpeed__START

extern uint16 BassvrAppl_DS_StartProg(void);
extern uint8 BassvrAppl_CheckProgCond(uint8 *Conditions);
extern void BassvrAppl_PrepEEP_Proc_Bg(void);
__PRAGMA_USE__CODE__bassvr__NormalSpeed__END

/* _BASSVRAPPL_CHECKPROG_PROT_H */
#endif
