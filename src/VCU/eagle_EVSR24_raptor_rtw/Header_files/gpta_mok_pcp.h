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
 * $Filename__:gpta_mok_pcp.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GS72FE$
 * $Date______:10.06.2010$
 * $Class_____:SWHDR$
 * $Name______:gpta_mok_pcp$
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
 * 1.14.0; 0     10.06.2010 GS72FE
 *   removing MISRA warnings
 * 
 * 1.11.0; 0     30.03.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: gpta_mok_pcp.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _GPTA_MOK_PCP_H
#define _GPTA_MOK_PCP_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      header file for BSS transmit/receive low level driver
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* GPTA_STMOK_UPDATE flag will be set when buffer is filled with new data                         */
/* This flag is set by Gpta_Mok function if a new data frame has been received and may be used    */
/* by any other SW to check for new data. It may be cleard any time.                              */
#define GPTA_STMOK_UPDATE_POS    0
#define GPTA_STMOK_UPDATE_LEN    1

/* GPTA_STMOK_SYNC flag will be set when synchronised                                             */
/* this flag can be used to trigger a resyncronisation in combination with GPTA_STMOK_WAITDAT     */
/* it is ony allowed to clear this flag if GPTA_STMOK_WAITDAT is NOT set!                         */
#define GPTA_STMOK_SYNC_POS      1
#define GPTA_STMOK_SYNC_LEN      1

/* GPTA_STMOK_WAITDAT flag will be set when Gpta_Mok is waiting for data after a resync request   */
/* triggered by clearing GPTA_STMOK_SYNC                                                          */
/* this flag has to be checked (must be FALSE) before clearing GPTA_STMOK_SYNC                    */
/* this flag is read only and must not be modified by other SW                                    */
#define GPTA_STMOK_WAITDAT_POS   2
#define GPTA_STMOK_WAITDAT_LEN   1

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__gpta__50ms_1s__RAM__x8__START
extern uint8 Gpta_stMok_u8;
__PRAGMA_USE__gpta__50ms_1s__RAM__x8__END

/* extern declaration for following function is made in pcp_auto_conf.h,
   to avoid compiler warnings, no extern declaration of this function is made here:
   Gpta_Mok(void);
*/

/* _GPTA_MOK_PCP_H                                                                                */
#endif
