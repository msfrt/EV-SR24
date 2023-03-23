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
 * $Filename__:memlay_inf.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JWI2SI$
 * $Date______:01.12.2010$
 * $Class_____:SWHDR$
 * $Name______:memlay_inf$
 * $Variant___:1.14.0$
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
 * 1.14.0; 0     01.12.2010 JWI2SI
 *   add include dme.h for memlay_rtprotect
 * 
 * 1.12.0; 0     23.11.2009 AWL2SI
 *   B_MEMLAY.12.0.0
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _MEMLAY_INF_H
#define _MEMLAY_INF_H

/**
 ***************************************************************************************************
 * \moduledescription
 * MEMLAY import interface header.
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Public Includes
 ***************************************************************************************************
 */

#include "memlay.h"
#include "memlay_friends.h"
#include "cpu.h"
#include "sb.h"
#include "flash.h"

#ifdef MEMLAY_RT_PROT_RESET
#include "reset.h"
#include "tprot.h"
#include "srvb.h"
#include "dme.h"
#endif

#ifdef MEMLAY_RTMO_EXIST
#include "rtmo.h"
#endif

#ifdef MEMLAY_MMO_EXIST
#include "mmo.h"
#endif



#include "reg.h"
#include REG_PMI_H
#include REG_DMI_H
#include REG_CBS_H
#include REG_SCU_H
#include REG_FLASH_H


/* _MEMLAY_INF_H */
#endif
