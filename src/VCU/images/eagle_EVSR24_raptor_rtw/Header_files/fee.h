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
 * $Filename__:fee.h$ 
 * 
 * $Author____:JWI2SI$ 
 * 
 * $Function__:initial version (migrated from CC)$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:SUU4KOR$ 
 * $Date______:16.08.2012$ 
 * $Class_____:SWHDR$ 
 * $Name______:fee$ 
 * $Variant___:1.9.0$ 
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
 * 1.9.0; 0     16.08.2012 SUU4KOR
 *   3. Optimize PLC structure
 * 
 * 1.8.0; 0     25.05.2012 JOP1COB
 *   .
 * 
 * 1.5.0; 1     26.08.2011 JOP1COB
 *   - Make the usage of Global PLC a configurable option
 * 
 * 1.5.0; 0     22.08.2011 JOP1COB
 *   -Optimised Initialization Time, Sector change
 *   
 *   -Correct sector dection, incase of multiple interrupted  sector changes 
 *   included
 * 
 * 1.2.0; 2     06.12.2010 HQ82FE
 *   Update fee_tprot.c
 * 
 * 1.2.0; 1     01.12.2010 HQ82FE
 *   Remove warning
 *   
 * 
 * 1.2.0; 0     29.11.2010 HQ82FE
 *   Update Changes for PLC buffer
 * 
 * 1.1.0; 0     12.11.2010 HQ82FE
 *   Remove Misra warnings
 *   
 * 
 * 1.0.0; 0     25.06.2010 JWI2SI
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef FEE_H_
#define FEE_H_

/* generate DFLASH configuration */
#define FEE_PAGE_CRC_LEN        2
#define FEE_PAGE_OVERHEAD       6           /* 2 byte FeeIdx, 2 byte PageCounter, 2 byte PageCrc */
#define FEE_PAGE_LEN            128
#define FEE_PAGE_USERDATA_LEN   (FEE_PAGE_LEN - FEE_PAGE_OVERHEAD)
#define FEE_PAGE_LEN_FOR_CRC    (FEE_PAGE_LEN - FEE_PAGE_CRC_LEN)


#include "Std_Types.h"

//#define  FEE_DEBUG                        /* activate debug-instruction in LifeTimeMonitoring and readback of marker before erase */

#include "Fee_Cfg.h"

/* parameter for Fee_BuildPageLocationCache: Build PLC for a normal block or for marker (sector detection) */
#define FEE_NORMAL_BLOCK    0
#define FEE_MARKER_BLOCK    1
#define FEE_NUM_DIFF_MARKER 3           /* number of different markers which are used together with PLC */

/**************************************************************************************************/
/* Container Name : Functions definitions                                                         */
/* Description    : Extern declaration of function                                                */
/**************************************************************************************************/
/********************  Code Section for Memory Mapping  starts here *******************************/

#define FEE_START_SEC_CODE
#include "MemMap.h"

/* necessary changes for running in a MEDC17 environment */
#include "core_env.h"
#include "machine.h"
#include "memlay.h"


typedef enum
{
    IDLE,
    WRITE,
    READ,
    ERASE,
    INVALIDATE
}Fee_CurrentJob_Type;


/* DEBUG */
extern void Nvm_JobEndNotification(void);
extern void Nvm_JobErrorNotification(void);
/* DEBUG */

extern FUNC(void,FEE_CODE) Fee_Init(void);
extern FUNC(void,FEE_CODE) Fee_InitEnd (void);
extern FUNC(void ,FEE_CODE) Fee_IntIni (void);

/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(void,FEE_CODE) Fee_SetMode( VAR(MemIf_ModeType,AUTOMATIC));
extern FUNC(void,FEE_CODE) Fee_Cancel(void);
extern FUNC(void,FEE_CODE) Fee_MainFunction(void);

/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(Std_ReturnType,FEE_CODE) Fee_Write( VAR(uint16,AUTOMATIC),
                                              P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA));
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(Std_ReturnType,FEE_CODE) Fee_Read(VAR(uint16,AUTOMATIC),
                                              VAR(uint16,AUTOMATIC),
                                            P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA),
                                              VAR(uint16,AUTOMATIC) );
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(Std_ReturnType,FEE_CODE) Fee_InvalidateBlock(VAR(uint16,AUTOMATIC));
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(Std_ReturnType,FEE_CODE) Fee_EraseImmediateBlock(VAR(uint16,AUTOMATIC));

extern FUNC(MemIf_StatusType,FEE_CODE) Fee_GetStatus (void);
extern FUNC(MemIf_JobResultType,FEE_CODE) Fee_GetJobResult (void);
extern FUNC(uint8, FEE_CODE) Fee_PdForceSecChange(void);

#define Fee_ForceSecChange Fee_PdForceSecChange

#if (FEE_VERSION_INFO_API == STD_ON)
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(void,FEE_CODE) Fee_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, FEE_APPL_DATA));
#endif /* #endif of #if (FEE_VERSION_INFO_API == STD_ON) */

extern FUNC(void ,FEE_CODE) Fee_BuildPageLocationCache (P2VAR(uint16, AUTOMATIC, FEE_APPL_DATA));

/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(void ,FEE_CODE) Fee_SetPLCState (VAR(bool,AUTOMATIC), P2VAR(uint16, AUTOMATIC, FEE_APPL_DATA));

/* PLC Buffer made global */
#ifdef FEE_USE_GLOBAL_PLC
extern uint16 Fee_PLC[FEE_NUM_TOTAL_USED_PAGES];
#endif
#define FEE_STOP_SEC_CODE
#include "MemMap.h"
/**************************  Code Section for Memory Mapping  stops here **************************/
/*END of extern declaration of functions */





#endif //FEE_H_
