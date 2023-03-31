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
 * $Filename__:fee_fcpt.h$ 
 * 
 * $Author____:JWI2SI$ 
 * 
 * $Function__:initial version (migrated from CC)$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:JWI2SI$ 
 * $Date______:25.06.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:fee_fcpt$ 
 * $Variant___:1.0.0$ 
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
 * 1.0.0; 0     25.06.2010 JWI2SI
 *   
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/


#ifndef  FEE_FCPT_H_
#define  FEE_FCPT_H_

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/
#include "Fee.h"
//#include "Fls.h"
 
/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/

/*******************************************************************************
**                      Private Macro like functions                          **
*******************************************************************************/

/*******************************************************************************
**                      GlobalType Definitions                                **
*******************************************************************************/

/* Fee_Header_Const_Type: Generic declaration for saving addresses of APIs 
   in an array of pointers to functions */
typedef void (*Fee_Header_Const_Type)(void);

/*   Typedefs for FEE APIs to be used by MEMIF module */

#if  FEE_VERSION_INFO_API == STD_ON
typedef void (*Fee_GetVersionInfo_Type)(Std_VersionInfoType *);
#endif

typedef uint8 Fee_ConfigType;

typedef void (*Fee_Init_Type)(const Fee_ConfigType *);

typedef Std_ReturnType (*Fee_Read_Type)(uint16, uint16, uint8 *, uint16);

typedef void (*Fee_SetMode_Type)(MemIf_ModeType);

typedef Std_ReturnType (*Fee_EraseImmediateBlock_Type)(uint16);

typedef Std_ReturnType (*Fee_Write_Type)(uint16, uint8 *);

typedef Std_ReturnType (*Fee_InvalidateBlock_Type)(uint16);

typedef void (*Fee_Cancel_Type)(void);

typedef MemIf_StatusType (*Fee_GetStatus_Type)(void);

typedef MemIf_JobResultType (*Fee_GetJobResult_Type)(void);

/*******************************************************************************
**                      Global Constant Declarations                          **
*******************************************************************************/
extern const Fee_Header_Const_Type Fee_Header_Const[];
/*******************************************************************************
**                      Global Function Definitions                           **
*******************************************************************************/

#endif /* FEE_FCPT_H_ */
