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
 * $Filename__:epmrrs_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RTI2FE$
 * $Date______:28.02.2012$
 * $Class_____:SWHDR$
 * $Name______:epmrrs_prot$
 * $Variant___:1.24.1$
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
 * 1.24.1; 0     28.02.2012 RTI2FE
 *   Adaptation of calculation of EpmRRS_stRotDir to driver bugfix
 * 
 * 1.24.0; 0     21.09.2011 MRC2FE
 *   RCMS01216318: Export of variable EpmRRS_phiEngStop_mp
 * 
 * 1.23.0; 0     15.12.2009 OMO2FE
 *   restructuring of FCs for improved diagnosis documentation and maintenance
 * 
 * 1.22.0; 1     06.10.2009 TUC2SI
 *   Nestor header replaced
 * 
 * 1.22.0; 0     25.06.2009 LDB2FE
 *   Initial import from Clearcase 
 *      File name: epmrrs_prot.h
 *      Version: \main\basis\b_EpmRRS\18
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
#ifndef _EPMRRS_PROT_H
#define _EPMRRS_PROT_H

/*
 ***************************************************************************************************
 * \moduledescription
 *  protected header for EpmRRS (engine position management reverse rotation stop)
 *
 * \scope               [INTERN]
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Atomic generated includes not allowed but no other way is possible
 ***************************************************************************************************
 */
/*
 ***************************************************************************************************
 * Local defines for EPMRRS_SY systemconstant, define in pavast?
 ***************************************************************************************************
 */
#define EPMRRS_NONE         0                       // dummy function: no RDE, no ALE
#define EPMRRS_RDE          1                       // RDE over CrS or DGI, no ALE
#define EPMRRS_RDEALE       2                       // RDE and ALE over CrS or DGI

/*
 ***************************************************************************************************
 * check all (system-)constants for validity, use defines above for local feature (system)constants
 ***************************************************************************************************
 */

/*
 ***********************************************************************************************
 * Type definitions
 * (may be removed if definition can be done by PaVaSt)
 ***************************************************************************************************
 */
typedef enum
{
    EPMRRS_AG_INVLD,                            // 0
    EPMRRS_AG_VLD                               // 1
}EpmRRS_bEngStopAg_t;

typedef enum
{
    EPMRRS_INVLD_STOP_POS,                  // 0
    EPMRRS_VLD_PHASE_DETECT,                // 1
    EPMRRS_VLD_STOP_POS                     // 2
}EpmRRS_stEngStopAg_t;

/*
 ***************************************************************************************************
 * declaration of variables in non-volatile ram
 * memlay is not able to write messages or variables, which are defined in pavast, that is why
 * EpmRRS_AgDetect has to define global variables in code and extern declarations here
 ***************************************************************************************************
*/
MEMLAY_USE_ENVRAM(extern EpmRRS_stEngStopAg_t, EpmRRS_stEngStopAg);
MEMLAY_USE_ENVRAM(extern sint16, EpmRRS_phiEngStopEnvRam);

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Extern declarations for owned processes and functions
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__epm__NormalSpeed__START

extern bool EpmRRS_CheckAngleDiff  (void);
extern bool EpmRRS_CheckCaSPattern (void);
extern bool EpmRRS_SetCondition    (uint8,  bool*);
extern bool EpmRRS_ResetCondition  (uint8,  bool*);
extern bool EpmRRS_StartCondition  (void);
extern bool EpmRRS_StopCondition   (void);
extern bool EpmRRS_CheckMaxTooth   (const bool bRRS_EnableCond);
extern uint8 EpmRRS_MaxToothCondition (uint32 tiTooth1,
                                       uint32 tiTooth2,
                                       uint32 tiTooth3);
extern bool EpmRRS_PlausAngleRR    (sint16 phiEng);
extern bool EpmRRS_CheckDGI        (const bool bRRS_StartCond);

__PRAGMA_USE__CODE__epm__NormalSpeed__END


__PRAGMA_USE__CODE__epm__HighSpeed__START

extern void EpmRRS_AgDetect_RstbEngStopAg (void);
// function reads/calculates current position from hwe motor position counter for stop-start-systems
extern bool EpmRRS_AgDetect_RdPosDGI (sint16 *phiEng);
// function considers gap in start with ecu initialization
extern bool EpmRRS_AgDetect_CalcPosDGI (sint16 *phiEng);

__PRAGMA_USE__CODE__epm__HighSpeed__END

/* _EPMRRS_PROT_H */
#endif
