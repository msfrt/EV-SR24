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
 * $Filename__:epmseq_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GSU2KOR$
 * $Date______:11.11.2011$
 * $Class_____:SWHDR$
 * $Name______:epmseq_prot$
 * $Variant___:1.23.0$
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
 * 1.23.0; 0     11.11.2011 GSU2KOR
 *   45 TDC Task
 * 
 * 1.21.0; 0     15.12.2009 OMO2FE
 *   corrections in header files
 * 
 * 1.20.0; 0     17.11.2008 NF72FE
 *   Initial import from Clearcase 
 *      File name: epmseq_prot.h
 *      Version: \main\basis\b_Epm\20
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMSEQ_PROT_H
#define _EPMSEQ_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *  Private interface of EPM Sequence
 *
 * \scope API
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

#define EPMSEQ_AUTOCALC_POS     0
#define EPMSEQ_NOS1IR_POS       1
#define EPMSEQ_DELAYIR_POS      2
#define EPMSEQ_STRTUNTILGAP_POS 3

#define EPMSEQ_INIT             0       // parameter for normal init-function
#define EPMSEQ_INITBCR          1       // parameter for backup-init

/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

__PRAGMA_USE__epm__nsync__RAM__x8__START
// state-machine of EpmSeq_stInt;
extern uint8 EpmSeq_stInt;
__PRAGMA_USE__epm__nsync__RAM__x8__END

__PRAGMA_USE__epm__nsync__RAM__arr16__START
// EpmSeq_phiInt[]: distance between TDC and S_0- and S_1-interrupt
extern sint16 EpmSeq_phiInt[2];
__PRAGMA_USE__epm__nsync__RAM__arr16__END



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__epm__HighSpeed__START
extern uint8 EpmSeq_FndFirstInt(sint16 phiCurrPos);
extern void EpmSeq_SetNxtInt(void);
extern void EpmSeq_SetNxtIntRel(sint16 phiCurrPos, sint16 phiDiffInt);
extern void EpmSeq_SetIniSync(void);
extern void EpmSeq_NoSyncInt(void);
extern void EpmSeq_ChgCurrInt(void);
extern void EpmSeq_SetTimeoutInt(sint16 phiCurrPos, sint16 phiDiffInt);
extern void EpmSeq_RestoreSyncInt(void);
extern void EpmSeq_Init(uint32 stMode);
extern void EpmSeq_SwtIntTyp(void);
extern void EpmSeq_RestoreNumInt(void);
extern void EpmSeq_ResyncUpperLvl(void);
extern void EpmSeq_ClrResyncUpperLvl(void);
__PRAGMA_USE__CODE__epm__HighSpeed__END

#endif
