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
 * $Filename__:dsmdur_prot.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:VIK9KOR$ 
 * $Date______:17.05.2011$ 
 * $Class_____:SWHDR$ 
 * $Name______:dsmdur_prot$ 
 * $Variant___:2.4.0$ 
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
 * 2.4.0; 0     17.05.2011 VIK9KOR
 *   Implementation of Signals PID4D and 4E for Mode0102.
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: dsmdur_prot.h
 *      Version: \main\10
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _DSMDUR_PROT_H
#define _DSMDUR_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      {!Description MUST start in this line - replace text inclusive brackets!}
 *
 * \scope               [CONF][API][INTERN] {[] means that the content is optional - remove them}
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* counter events */
#define DSMDUR_NO_EVNT           (0x00)
#define DSMDUR_DIST_EVNT         (0x01)
#define DSMDUR_TI_EVNT           (0x02)
#define DSMDUR_WUC_EVNT          (0x04)
#define DSMDUR_DIST_10M_EVNT     (0x08)
#define DSMDUR_TI_60SEC_EVNT     (0x10)

/* bit positions in the enable condition mask */
#define DSMDUR_COND_MIL_ON_MSK     (0x0100)
/* Bit in condition mask which is always set to enable condition independent counting */
#define DSMDUR_COND_ALWAYS_MSK   0x2000

/* defines for reset mask */
#define DSMDUR_RST_NO_ENA        0x01
#define DSMDUR_RST_TRAN_TO_ENA   0x02
#define DSMDUR_RST_NO_MODE3      0x04

/* defines for the count event and teh enable and reset and condition for PID21h */
#define DSMDUR_PID21H_ENA_MSK    (DSMDUR_COND_MIL_ON_MSK)
#define DSMDUR_PID21H_EVNT_MSK   (DSMDUR_DIST_10M_EVNT)
#define DSMDUR_PID21H_RST_MSK    (DSMDUR_RST_NO_MODE3 | DSMDUR_RST_TRAN_TO_ENA)

/* defines for the count event for PID31h */
#define DSMDUR_PID31H_EVNT_MSK   (DSMDUR_DIST_10M_EVNT)

/* defines for the count event of PID$4D */
#define DSMDUR_PID4DH_EVNT_MSK   (DSMDUR_TI_60SEC_EVNT)

/* defines for the count event of PID$4E */
#define DSMDUR_PID4EH_EVNT_MSK   (DSMDUR_TI_60SEC_EVNT)
/* counter state definitions */
#define DSMDUR_ST_PASSIV         0
#define DSMDUR_ST_ENABLED        1
#define DSMDUR_ST_RESET          2


/* definition of limit values for the counters */
#define DSMDUR_LIM_GLB           0x7FFFFFFFul
#define DSMDUR_LIM_DFES          0xFFFF

/* mask for external reset request */
#define DSMDUR_EXT_RST_REQU_MSK  0x00C0u


/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__dsm__1_5ms__constant__x8__START
extern const uint8 DSMDur_numGlbCnt;
extern const uint8 DSMDur_numDFESCnt;
__PRAGMA_USE__dsm__1_5ms__constant__x8__END

__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8  DSMDur_stWUCLst;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END

/*#if (DSMDUR_MIL_GLB_SY > 0)*/
MEMLAY_USE_ENVRAM (extern uint8, DSMDur_ct40WUC); /* counter for 40 WUC after external MIL-ON requests */

__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern bool DSMDur_st40WUCLck;   /* lock the 40 WUC counter for this drive */
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END
/*#endif*/

MEMLAY_USE_ENVRAM(extern uint32, DSMDur_ctGlb[]);
MEMLAY_USE_ENVRAM(extern uint8,  DSMDur_stGlb[]);
/* Counter for PID21 and PID31 */
MEMLAY_USE_ENVRAM(extern uint32, DSMDur_ctPID21h);
MEMLAY_USE_ENVRAM(extern uint32, DSMDur_ctPID31h);
/* last enable status of the PID21 counter */
MEMLAY_USE_ENVRAM(extern uint8 , DSMDur_stPID21h);

/* Counter for PID4D */
MEMLAY_USE_ENVRAM(extern uint16, DSMDur_cntrPID4Dh);
/* Counter for PID4E */
MEMLAY_USE_ENVRAM(extern uint16, DSMDur_cntrPID4Eh);
/* prototypes of DFES specific counters are allways present, even if counters not available
   and therefore not used */
MEMLAY_USE_ENVRAM(extern uint16, DSMDur_ctDFES0[]);
MEMLAY_USE_ENVRAM(extern uint16, DSMDur_ctDFES1[]);
MEMLAY_USE_ENVRAM(extern uint16, DSMDur_ctDFES2[]);

MEMLAY_USE_ENVRAM(extern sint32, DSMDur_tiCum);
MEMLAY_USE_ENVRAM(extern sint32, DSMDur_tiCumCpy);



extern uint16 * const DSMDur_adDFESCnt[];

__PRAGMA_USE__dsm__1_5ms__RAM__x32__START
extern sint32 DSMDur_lRef;
extern sint32 DSMDur_lRef10m;
extern sint32 DSMDur_tiRef;
extern sint32 DSMDur_tiRef60s;
__PRAGMA_USE__dsm__1_5ms__RAM__x32__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DSMDur_GetGlbEvntCal(uint idx);
uint DSMDur_GetGlbEnaCal(uint idx);
uint DSMDur_GetGlbRstCal(uint idx);
uint DSMDur_GetDistInc(void);
uint DSMDur_GetTiInc(void);
uint DSMDur_GetDFESEnaCal(uint idx);
uint DSMDur_GetDFESRstCal(uint idx);
uint DSMDur_GetDFESEvntCal(uint idx);



void DSMDur_CallDFESCnt(uint stEvnt);
void DSMDur_RstDFESCnt(void);

void DSMDur_Init(void);
void DSMDur_ReInit(void);
void DSMDur_DSMClearTaskProc(void);
void DSMDur_Proc (void);
void DSMDur_HandleDFESCnt(uint stEvnt);
void DSMDur_RstDFESCntSel(uint idx);
void DSMDur_ExcgDFESCnt(uint idxA, uint idxB);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END





/* _DSMDUR_PROT_H */
#endif
