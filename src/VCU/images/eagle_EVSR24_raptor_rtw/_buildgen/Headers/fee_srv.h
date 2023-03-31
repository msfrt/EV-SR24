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
 * $Filename__:fee_srv.h$ 
 * 
 * $Author____:JWI2SI$ 
 * 
 * $Function__:initial version (migrated from CC)$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:HQ82FE$ 
 * $Date______:12.11.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:fee_srv$ 
 * $Variant___:1.1.0$ 
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
 * 1.1.0; 1     12.11.2010 HQ82FE
 *   Remove Misra warnings
 *   
 * 
 * 1.1.0; 0     02.11.2010 HQ82FE
 *   Second Version of Fee, changed while integration MemIf and Nvm from CC
 * 
 * 1.0.0; 0     25.06.2010 JWI2SI
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef FEE_SRV_H
#define FEE_SRV_H
#include "cpu.h"

#ifndef MAXUINT32
#define MAXUINT32 0xFFFFFFFF
#endif


#define uint uint32

#define PARAM_UNUSED(param) if ((param) != 0) {}
#define Fee_SrvSuspendInt()     Cpu_SuspendInt()
#define Fee_SrvResumeInt()      Cpu_ResumeInt()

// void Cpu_MemCopy8(uint8* xDest_pu8, uint8* xSrc_pu8, uint32 numBytes_u32);
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(void ,FEE_CODE) Fee_SrvMemCopy8 (P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA),
                                             P2CONST(uint8, AUTOMATIC, FEE_APPL_DATA),
                                             VAR(uint16,FEE_VAR));
/* MISRA RULE 16.3 VIOLATION: no risk for quality */
extern FUNC(uint8 ,FEE_CODE) Fee_SrvMemCompare8 (P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA),
                                                 P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA),
                                                 VAR(uint16,FEE_VAR));

extern FUNC(void ,FEE_CODE) Fee_SrvMemSet8(P2VAR(uint8, AUTOMATIC, FEE_APPL_DATA) Dest, VAR(uint8,FEE_VAR) FillByte,
                                                VAR(uint16,FEE_VAR) Length);

extern FUNC(void ,FEE_CODE) Fee_SrvMemSet32(P2VAR(uint32, AUTOMATIC, FEE_APPL_DATA) Dest, VAR(uint32,FEE_VAR) FillByte,
                                                VAR(uint16,FEE_VAR) Length);

extern FUNC(uint16 ,FEE_CODE) Crc_CalculateCRC16( P2CONST(uint8, AUTOMATIC, FEE_APPL_DATA) Crc_DataPtr,
                                                  VAR(uint32,FEE_VAR) Crc_Length, VAR(uint16,FEE_VAR) Crc_StartValue16);

extern FUNC(uint32 ,FEE_CODE) Crc_CalculateCRC32( P2CONST(uint8, AUTOMATIC, FEE_APPL_DATA) Crc_DataPtr,
                                                  VAR(uint32,FEE_VAR) Crc_Length, VAR(uint32,FEE_VAR) Crc_StartValue32);

extern FUNC(void ,FEE_CODE) Fee_Reset(void) ;

MEMLAY_USE_LABEL(extern uint32, __ASW_STACK_START[]);
MEMLAY_USE_LABEL(extern uint32, __ASW_STACK_END[]);

#endif
