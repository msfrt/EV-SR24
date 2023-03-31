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
 * $Filename__:dsmappl_fadeout_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:ZUZ2SI$ 
 * $Date______:07.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:dsmappl_fadeout_priv$ 
 * $Variant___:1.2.0$ 
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
 * 1.2.0; 0     07.05.2010 ZUZ2SI
 *   update header file to include syc.h
 * 
 * 1.1.0; 0     11.08.2008 PKA2SI
 *   Component Toolbox-Import
 * 
 * 1.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmappl_fadeout_priv.h
 *      Version: \main\customer\c_392\5
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
 

#ifndef _DSMAPPL_FADEOUT_PRIV_H
#define _DSMAPPL_FADEOUT_PRIV_H


/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
#include "common.h"
#include "dsm.h"                    /*Diagnostic system managment */

#include "dsmappl_fadeout_pub.h"
#include "dsmappl_fadeout_dat.h"
#include "dsmappl_msg.h"

#include "srvb.h"                   /* basic service functions */

#include "coeng.h"
#include "syc.h"

#if (POSTDRV_SOFTRST_SY > 0 && ECU_GENR_SY == 2)
#include "reset.h"                  /* Header of Reset Declarations */
#endif

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define INITSPLYVLTG    FALSE

/*
 ***************************************************************************************************
 * Private Prototypes
 ***************************************************************************************************
 */
uint16 DSMAppl_FadeOut_TestCond( const uint16 stFadeOut, const uint8 numBit,
                                 const uint16 tiMax, const bool stCond );


#endif /* _DSMAPPL_FADEOUT_PRIV_H */
