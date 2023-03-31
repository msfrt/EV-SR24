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
 * $Filename__:epmhcas_sigbuf_prot.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:new function added in emphcas_sigbuf beacause new process is 
 *             included in Epmhwe_Ini$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:NBA7KOR$
 * $Date______:15.11.2017$
 * $Class_____:SWHDR$
 * $Name______:epmhcas_sigbuf_prot$
 * $Variant___:1.23.4$
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
 * 1.23.4; 0     15.11.2017 NBA7KOR
 *   RQONE01262262 - Compiler optimization issue fix
 * 
 * 1.23.0; 2     16.12.2009 OMO2FE
 *   new function added in emphcas_sigbuf beacause new process is included in 
 *   Epmhwe_Ini
 * 
 * 1.23.0; 1     16.12.2009 OMO2FE
 *   new function added in emphcas_sigbuf beacause new process is included in 
 *   Epmhwe_Ini
 * 
 * 1.23.0; 0     15.12.2009 OMO2FE
 *   new function added in emphcas_sigbuf beacause new process is included in 
 *   Epmhwe_Ini
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCAS_SIGBUF_PROT_H
#define _EPMHCAS_SIGBUF_PROT_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
 #include "epmhcas_auto_prot.h"
/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/* enumerator for sync-status on the camshaft - the value shows what kind of edge the next edge will
   be */
enum EpmHCaS_stSync_t
{
    WAITFIRSTEDGE,
    WAITRISINGEDGE,
    WAITFALLINGEDGE
};


/* struct to save data of the edges. For each edge the time, the angle and the level before the
   edge is saved */
typedef struct
{
    uint32 tiEdge;
    sint16 phiEdge;
    uint8  stLev;
} EpmHCaS_Buf_t;


/* struct to store the status of the camshaft. For each camshaft one instance is build.
   The value in ctEdge could be negative. This happens during the PCP-channel is activated and
   modifies the values. Bit 16 of this counter is used as semaphore-variable */
typedef struct
{
    volatile sint32 ctEdge;
    volatile uint8 stSig;
    volatile enum EpmHCaS_stSync_t stSync;
    volatile sint8 ctBufIdx;
    volatile sint8 ctValidTime;
    volatile sint8 ctValidEdge;
    volatile uint8 stCurLev;
    volatile sint8 ctEdgeWcy;
} EpmHCaS_stBuf_t;


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/* the following values are only for use within this module. To access this values the corresponding
   functions must be used - otherwise it could happen, that the read data is not valid! */
extern EpmHCaS_Buf_t                EpmHCaS_Buf             [NUMCASMAX] [EPMHCAS_NUMBUFSIZE];
extern EpmHCaS_stBuf_t              EpmHCaS_stBuf           [NUMCASMAX];

/// EpmHCaS_stActEdge: Specifies the edge at which the CaS-Buffer is updated
/// 0: falling Edge; 1: rising Edge; 2: both Edges
extern uint8 EpmHCaS_stActEdge;


/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
extern void EpmHCaS_IniBuf(enum EpmHCaS_numCaS_t numCaS);
extern void EpmHCaS_IniCaSLev(enum EpmHCaS_numCaS_t numCaS);
extern bool EpmHCaS_GetSigErr(enum EpmHCaS_numCaS_t numCaS);
extern void EpmHCaS_ResetSigErr(enum EpmHCaS_numCaS_t numCaS);
extern void EpmHCaS_ResetCtValidEdge(enum EpmHCaS_numCaS_t numCaS);
extern void EpmHCaS_ResetCtValidTime(enum EpmHCaS_numCaS_t numCaS);
extern sint8 EpmHCaS_GetCtEdgeWcy(const EpmHCaS_stBufCtr_t *stBufCtr);

/* _EPMHCAS_SIGBUF_PROT_H */
#endif
