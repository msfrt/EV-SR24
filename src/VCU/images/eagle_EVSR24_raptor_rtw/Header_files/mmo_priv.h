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
 * $Filename__:mmo_priv.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MAL6KOR$
 * $Date______:24.09.2012$
 * $Class_____:SWHDR$
 * $Name______:mmo_priv$
 * $Variant___:1.9.1$
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
 * 1.9.1; 1     24.09.2012 MAL6KOR
 *   Changes done after review
 * 
 * 1.9.1; 0     20.09.2012 MAL6KOR
 *   Changes done after testing
 * 
 * 1.8.1; 0     14.03.2011 JWI2SI
 *   Bugfix for TC1793
 * 
 * 1.2.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: mmo_priv.h
 *      Version: \main\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _MMO_PRIV_H
#define _MMO_PRIV_H

/*------------------------------------------------------------------------------------------------*/

#define BeginAtomic()           _disable()
#define EndAtomic()             _enable()

#define MMO_RAM_ARRAY_SIZE      8ul
#define MMO_MOD_L_IND           (MMO_RAM_ARRAY_SIZE-1ul)

/*------------------------------------------------------------------------------------------------*/
/* defines for Mmo_swMode_u8                                                                      */
/*------------------------------------------------------------------------------------------------*/
#define MMO_MODE_READ           0x01    /* measure read access                                    */
#define MMO_MODE_WRITE          0x02    /* measure write access                                   */
#define MMO_MODE_RW             0x03    /* measure read and write access                          */
#define MMO_MODE_GET_MEM        0x40    /* Read 32bit value on address in Mmo_adBegin1_u32        */
                                        /*                 and write it to Mmo_ctRamArray1_u32[1] */
#define MMO_MODE_GET_CPUID      0x80    /* write CPU_ID register to Mmo_ctRamArray1_u32[0]        */
                                        /*                                                        */
#define MMO_MODE_GET_DEB1       0x20    /* Read 8bit value on address in Mmo_adEndMirror1_u32     */
                                        /*                 and write it to Mmo_ctRamArray1_u32[2] */
#define MMO_MODE_GET_DEB2       0x10    /* do the action : *((uint32*)Mmo_adBeginMirror1_u32) =   */
                                        /*                                  Mmo_adEndMirror1_u32; */
#define MMO_MODE_GET_DEB3       0x08    /* write DBGSR register to Mmo_ctRamArray1_u32[3]         */
#define MMO_MODE_GET_DEB4       0x04    /* write user4 defined sequence to debug register         */

/*------------------------------------------------------------------------------------------------*/
/*  defines for Mmo_flState_u8                                                                    */
/*------------------------------------------------------------------------------------------------*/
#define MMO_STATE_ACTIVE        0x01    /*                                                        */
#define MMO_STATE_WP1_OFF       0x02    /*                                                        */
#define MMO_STATE_WP2_OFF       0x04    /*                                                        */
#define MMO_STATE_WRONG_CONF    0x08    /* Wrong Configuration                                    */
#define MMO_STATE_USER_BREAK    0x10    /* User Interruption                                      */
#define MMO_STATE_OCDS_ERROR    0x20    /* Could not enable OCDS                                  */

/*------------------------------------------------------------------------------------------------*/
/*  defines for TC1793 Core Debug Register                                                                    */
/*------------------------------------------------------------------------------------------------*/

#if (MACHINE_TYPE == TC_1793)
#define MMO_TR0EVT_OFFSET  0xF000
#define MMO_TR0ADR_OFFSET  0xF004
#endif
/*------------------------------------------------------------------------------------------------*/

__PRAGMA_USE__eos__1_5ms__RAM__x32__START
extern uint32  Mmo_adBeginMirror1_u32;       /* mirror of begin address 1                         */
extern uint32  Mmo_adEndMirror1_u32;         /* mirror of end address 1                           */
__PRAGMA_USE__eos__1_5ms__RAM__x32__END

__PRAGMA_USE__eos__1_5ms__RAM__x8__START
extern uint8   Mmo_swModeMirror_u8;          /* mirror if measurement mode                        */
extern uint8   Mmo_ctSampleTimeMirror_u8;    /* mirror of sample time                             */

#if (MACHINE_TYPE == TC_1793)
extern uint8   Mmo_ClearDTAbit_u8;           /* Variable to reset the DTA bit                     */
#endif

extern uint8   Mmo_ctRemainingSampleTime_u8; /* counter for sampletime                            */
__PRAGMA_USE__eos__1_5ms__RAM__x8__END


#ifdef MMO_USE_TRAP
extern uint32  Mmo_aiSaveDebugCx[4] __attribute__ ((aligned (64)));
#endif


#ifdef MMO_DEBUG
extern uint8   Mmo_swBreak_u8;
extern uint32  Mmo_DPM0_0_u32;
extern uint32  Mmo_TestArray[4];
#endif

/*_MMO_PRIV_H*/
#endif
