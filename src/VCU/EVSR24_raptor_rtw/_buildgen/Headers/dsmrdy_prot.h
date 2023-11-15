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
 * $Filename__:dsmrdy_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RMP2SI$
 * $Date______:20.03.2012$
 * $Class_____:SWHDR$
 * $Name______:dsmrdy_prot$
 * $Variant___:2.10.0$
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
 * 2.10.0; 0     20.03.2012 RMP2SI
 *   DSM compiler independency task.
 * 
 * 2.8.0; 0     17.05.2011 THOMILL0
 *   CRQ367005: Non Continuous Diagnoses in FuelSystem Group
 *   If FuelSystem Group is empty (due to no DFC in group label or all DFCs in 
 *   group label 
 *   are not OBD relevant or disabled statically), old calculation rules are 
 *   used and group will
 *   be set ready and supported in PID01 and ready and enabled in PID41.
 *   
 *   In addition, a label for forcing old calculation rules on not empty 
 *   FuelSystem group is
 *   introduced. This label needs to be activated by system constant
 * 
 * 2.4.0; 0     21.08.2009 ABM1KOR
 *   Changes to update PTO feature.
 * 
 * 2.2.0; 0     16.06.2009 PKA2SI
 *   CC-LABEL B_DSM.14.1.0
 *   PTO support for heavy duty
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmrdy_prot.h
 *      Version: \main\22
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DSMRDY_PROT_H
#define _DSMRDY_PROT_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      protected headerfile for dsm readiness evaluation
 *
 * scope               INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* The number of supported readiness groups: at the moment 8 of Byte C and 3 of Byte B = 11 */
#define DSMRDY_NUM_ALL_GRP  11u

#define DSMRDY_FLSYS_GRP_POS 1u

/* For the single groups there are no defines, because they are manipulated in group blocks
   organized similar to the output values to the diagnostic interface. To make this possible it
   is necessary to organize the sequence of the calibration parameters already according to
   this.
   For group fuel system, a define is required since depending on supported state of this group,
   the force masks may be required to change.

   They are assigned in the same order as occuring in Mode1 PId 1:

#if ( (DSMRDY_PID0141_ENGSPEC_SY == 0)  // for old ISO
     || (CMBTYP_SY = CMBTYP_GS) )        // for GS with new SAE J1979

   0  misfire
   1  fuel system
   2  comprehensive components
   3  catalyst
   4  heated catalyst
   5  evaporative system
   6  secondary air
   7  AC system
   8  oxygen sensor
   9  oxygen sensor heater
   10 EGR (+ VVT in SAE J1979)

#if ( (DSMRDY_PID0141_ENGSPEC_SY == 1)  // for DS with new SAE J1979
     && (CMBTYP_SY = CMBTYP_DS) )

   0  misfire
   1  fuel system
   2  comprehensive components
   3  HC catalyst
   4  NOx catalyst
   5  reserved group
   6  boost pressure system
   7  AC system
   8  exhaust gas sensor
   9  particle filter
   10 EGR/VVT

*/

#define DSMRDY_BYTEA_RDY_MIL_MSK     0x80000000u

/* definition of source bits */
#define DSMRDY_BYTEB_SRC_POS            0
#define DSMRDY_BYTEB_SRC_LEN            3

#define DSMRDY_BYTECD_SRC_POS           3
#define DSMRDY_BYTECD_SRC_LEN           8

/* This mask sets PID01/PID41 bits 17 and 21 to zero */
#define DSMRDY_CLR_FLSYS_BITS_MSK           0xFFDDFFFFu

/* This mask sets PID01/PID41 bit 17 to one */
#define DSMRDY_SET_FLSYS_RDY_SUPENA_MSK     0x20000u

/* definition of destination bits
    bit     31...  ...  ...  ..0
    byte      A     B    C    D     */


/* PID1 */
#define DSMRDY_BYTEA_DEST_POS           24

#define DSMRDY_BYTEB_SUP_DEST_POS       16
#define DSMRDY_BYTEB_RDY_DEST_POS       20

#define DSMRDY_BYTECD_SUP_DEST_POS      8
#define DSMRDY_BYTECD_RDY_DEST_POS      0


/* PID41 */
#define DSMRDY_BYTEB_LOCK_DEST_POS      16
#define DSMRDY_BYTEB_COMPL_DEST_POS     20

#define DSMRDY_BYTECD_LOCK_DEST_POS     8
#define DSMRDY_BYTECD_COMPL_DEST_POS    0


/* Start offsets for the measurement point array */
#define DSMRDY_MP_OFFSET_RDY           0u
#define DSMRDY_MP_OFFSET_ACT           DSMRDY_NUM_ALL_GRP
#define DSMRDY_MP_OFFSET_LOCK          (DSMRDY_NUM_ALL_GRP * 2u)
#define DSMRDY_MP_OFFSET_SUP           (DSMRDY_NUM_ALL_GRP * 3u)


/* move to DFC.h later */
#define DFC_UNUSED                      0u

/* Mask for the FId inhibit and Global environment disable of readiness group */
#define DSMRDY_PID41_FIDENV_MSK         1u

#define DSMRDY_PID41_SIGNAL_UNUSED            0x0

#define DSMRDY_FID_UNUSED                     0x0



/*
 ***************************************************************************************************
 * Definition of access macros
 ***************************************************************************************************
 */


/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSMRDY_xWhySetRdy(numGrp, numDFC)    (DSMRdy_Why[(DSMRDY_MP_OFFSET_RDY + (numGrp))]   \
                                                           = (numDFC))
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSMRDY_xWhySetAct(numGrp, numDFC)    (DSMRdy_Why[(DSMRDY_MP_OFFSET_ACT + (numGrp))]   \
                                                           = (numDFC))
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DSMRDY_xWhySetLock(numGrp, numDFC)   (DSMRdy_Why[(DSMRDY_MP_OFFSET_LOCK + (numGrp))]  \
                                                           = (numDFC))


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef struct
{
    uint32 ClrMsk    ;    /* force low mask for PID 1                                             */
    uint32 SetMsk    ;    /* force high mask  for PID 1                                           */
    uint32 Clr41Msk  ;    /* force low mask for PID 41                                            */
    uint32 Set41Msk  ;    /* force high mask  for PID 41                                          */
} DSMRdy_CalParAccess;


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

/* extern declaration of the generated FID -> (computed) DFC tables */
__PRAGMA_USE__dsm__1_5ms__constant__arr16__START
extern const uint16 DSM_CalcByFID[];
extern const uint16 DSM_CalcedDFC[];
__PRAGMA_USE__dsm__1_5ms__constant__arr16__END
/* number of computed relations (array length)*/
__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16 DSM_ctRelFIDCalcDFC;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END

/* constant array with offsets for acces the readiness group calibration within the calibration
   structure which contains the calibration for all readiness groups */
__PRAGMA_USE__dsm__1_5ms__constant__arr16__START
extern const uint16 DSMRdy_ctGrpOffs[];

/* extern declaration of FId inhibit and environment condition array size*/
extern const uint16 DSMRdy_FIdInhOffs[];
extern const uint16 DSMRdy_EnvCondOffs[];
__PRAGMA_USE__dsm__1_5ms__constant__arr16__END


/* pointer to calibration parameters */
extern const uint16 * DSMRdy_adAsgnDFC2Grp;
extern const DSMRdy_CalParAccess * DSMRdy_adAuxCalPar; /* pointer to auxiliary calibration param. */

/* pointer to measurement points */
extern  uint8  *  DSMRdy_adCntMp;                 /* pointer to counter measurement points        */
extern  uint16 *  DSMRdy_adWhyMp;                 /* pointer to reason measurement points         */

/* prototypes of static variables = messages of readiness */
__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
extern uint16  DSMRdy_stGrpRdyScan;
extern uint16  DSMRdy_stGrpRdyDFES;
extern uint16  DSMRdy_stGrpSup;
extern uint16  DSMRdy_stGrpAct;
extern uint16  DSMRdy_stGrpLock;
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END

/* extern declaration of variables for FId & Environment condition for PID41 enable status */
__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
extern uint16 DSMRdy_stFIdDisbl;
extern uint16 DSMRdy_stEnvDisbl;
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END


MEMLAY_USE_ENVRAM (extern uint16, DSMRdy_stGrpRdy);


/* to satify compiler and misra, will be moved later to real measurement points */
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8   DSMRdy_Ct[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16  DSMRdy_Why[];

/* Extern for Why condition array for FId inhibit and environment condition */
extern uint16 DSMRdy_WhyEnvCond[];
extern uint16 DSMRdy_WhyFIdInh[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END


__PRAGMA_USE__dsm__1_5ms__RAM__x32__START
extern uint32  DSMRdy_xObs;

/* Force Masks variables for DSMRdy Calculation
 *  Constants / Defines can not be used since single bit changes may be
 *  required during runtime in init task.
 */

/* internal force masks according ISO / SAE */
extern uint32 DSMRdy_Pid01_Clr_Msk_u32;
extern uint32 DSMRdy_Pid01_Set_Msk_u32;
extern uint32 DSMRdy_Pid41_Clr_Msk_u32;
extern uint32 DSMRdy_Pid41_Set_Msk_u32;

/* restrict calibration force masks */
extern uint32 DSMRdy_Pid01_Clb_Msk_u32;
extern uint32 DSMRdy_Pid41_Clb_Msk_u32;

/* PTO readiness not complete force mask */
extern uint32 DSMRdy_Pid01_Pto_Msk_u32;
__PRAGMA_USE__dsm__1_5ms__RAM__x32__END



/*
 ***************************************************************************************************
 * Prototypes declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSMRdy_ScanProc(void);

void DSMRdy_UpdtCalPt(void);

uint DSMRdy_EnvRamInvld(void);

void DSMRdy_ClearProc(void);

void DSMRdy_ClearPID41Only(void);

void DSMRdy_ReInit(void);

uint DSMRDY_GetScanState(void);

void DSMRdy_Init(void);

void  DSMRdy_InitGrpSupport (void);

uint16 DSMRdy_FIdPID41Disbl(uint idxFIdInh);

uint16 DSMRdy_EnvPID41Disbl(uint idxEnvCond);

void DSMRdy_Complete(uint numDFC, uint Mode);

void DSMRdy_Disable(uint numDFC);

void DSMRdy_Inh41(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END



#endif /* _DSMRDY_PROT_H */
