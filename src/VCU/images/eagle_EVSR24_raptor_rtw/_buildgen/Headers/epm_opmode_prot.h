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
 * $Filename__:epm_opmode_prot.h$
 *
 * $Author____:TUC2SI$
 *
 * $Function__:Changing documentation of calibration-parameters$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:NF72FE$
 * $Date______:28.06.2012$
 * $Class_____:SWHDR$
 * $Name______:epm_opmode_prot$
 * $Variant___:1.41.0$
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
 * 1.41.0; 0     28.06.2012 NF72FE
 *   removal of inconsistencies between c-code and pavast
 * 
 * 1.40.1; 0     19.04.2012 MRC2FE
 *   RCMS01263011: 1 - DocuFeedback 2012-02 Epm
 * 
 * 1.39.0; 0     13.02.2012 MRC2FE
 *   RCMS01254756: Function development: plausibilisation of angle clock and 
 *   tooth counter
 * 
 * 1.34.0; 2     20.06.2011 PIE2SI
 *   Update after LC tests
 * 
 * 1.34.0; 1     14.06.2011 PIE2SI
 *   Update after review
 * 
 * 1.34.0; 0     30.03.2011 PIE2SI
 *   first checkin for reviews
 * 
 * 1.25.0; 0     22.03.2010 PIE2SI
 *   Vorbereitung Review
 * 
 * 1.23.0; 0     03.12.2009 TUC2SI
 *   Changing documentation of calibration-parameters
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPM_OPMODE_PROT_H
#define _EPM_OPMODE_PROT_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* Masks to isolate switches in Epm_swtOpModeStgy_C */
#define EPM_SWT_WAITOFSDIAGMSK      1   /* bit 0: wait in MODE_VERIFY for result of EpmCaS_OfsDiag */
#define EPM_SWT_STRTALEMSK          2   /* bit 1: sync via DGI position if ECU was off: use classic ALE start.*/
#define EPM_SWT_STRTDIRMSK          4   /* bit 2: sync via DGI position if ECU through Initialization */
#define EPM_SWT_BCA_ONLY_MI_MSK     8   /* bit 3: only main injections in backup CaS mode */
#define EPM_SWT_SYNCDGIALEMSK       16  /* bit 4: if sync lost in MODE_ALE: sync again via DGI position */
#define EPM_SWT_SYNCDGIVERIFYMSK    32  /* bit 5: if sync lost in MODE_VERIFY: sync again via DGI position */
#define EPM_SWT_BCR_NO_HINT_INIT    64  /* bit 6: no calling EpmHIntInit() with backup mode activation ?  */
#define EPM_SWT_BIT7               128  /* bit 7: not used */

/* bit positions of ECU start mode Epm_stStrtModeECU */
#define EPM_STRTECUINI         0        /* start over ini */
#define EPM_STRTECUOFF         1        /* ecu was off */

/* bit positions of Epm_stCheckStopPosValid_mp ALE activation conditions measurement point */
#define EPM_B_NENGVLD_UPLVL     0 /* bit0 */
#define EPM_B_ECUOFF_STRTALE    1 /* bit1 */
#define EPM_B_ECUON_STRTDIR     2 /* bit2 */
#define EPM_B_AGVLD_ECUINIONOFF 3 /* bit3 */

/* States of measurement point Epm_stReSyncReason_mp: */
#define EPM_RESYNC_NORESYNC          0  /* no re-sync or no CrS signal because engine stopped normally */
#define EPM_RESYNC_CRS_ERR_OR_STOP   1  /* no CrS-signal or not plausible CrS-signal: EpmHCrS_stSigErr */
#define EPM_RESYNC_SHIFT             2  /* at gap a shift of 360 is necessary */
#define EPM_RESYNC_CAS_ERROR         3  /* no CaS signal or CaS not plausible, no phase info EpmSyn_stCaSPos */
#define EPM_RESYNC_REVERSE_CRS       4  /* reverse running engine detected via CrS signal (EpmRRS) */
#define EPM_RESYNC_OFSERR            5  /* CaS has too big offset to CrS */
#define EPM_RESYNC_CANERR            6  /* CAN connection to master ECU is broken*/
#define EPM_RESYNC_UPPERLVL          7  /* re-sync via upper level software outside EPM package*/
#define EPM_RESYNC_REVERSE_CAS       8  /* reverse running engine detected via CaS signal (EpmSyn_CaSPos)*/
#define EPM_RESYNC_START_BCR         9  /* no CrS signal and halt interrupt due to EpmBCr activation */
#define EPM_RESYNC_RRS_SHIFT         10 /* shift of stop position to gap position > calibrated */
#define EPM_RESYNC_LOCK_END          11 /* leaving EPM_MODE_LOCKRESYNC after time or starter is active */
#define EPM_RESYNC_BCR_POS_NOT_PLAUS 12 /* engine position in BCr is not plausible */
#define EPM_RESYNC_BCR_RESTART       13 /* restart of backup with defect CrS */
#define EPM_RESYNC_CRS_MIN_SPEED     14 /* engine stall or below minimum speed */
#define EPM_RESYNC_BCR_NO_CAS_SPEED  15 /* in BCR mode the CaS speed is zero or not plausible */
#define EPM_RESYNC_BCR_NORESYNC      16 /* in BCR mode no resync */
#define EPM_RESYNC_AGCLK_NOT_PLAUS   17 /* resync due to not plausible angle clock */


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

__PRAGMA_USE__epm__nsync__RAM__x16__START
extern uint16 Epm_ctCrSRevVerify;
__PRAGMA_USE__epm__nsync__RAM__x16__END

MEMLAY_USE_ENVRAM(extern uint8, Epm_stStrtModeECU);



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern void Epm_ReStart( void );
extern void Epm_SetSyncState( void );
extern void Epm_ResetEpm(uint8 stErrTyp);
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif
