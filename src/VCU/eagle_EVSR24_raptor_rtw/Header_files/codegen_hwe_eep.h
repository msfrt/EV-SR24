/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************  
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:codegen_hwe_eep.h$
 *
 * $Author____:PRG2SI$
 *
 * $Function__:Removal MISRA warnings
 *             Compiler independent
 *             FC Restructuring
 *             Adaption to Srv 1.17.0$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAJ2KOR$
 * $Date______:27.06.2014$
 * $Class_____:SWHDR$
 * $Name______:codegen_hwe_eep$
 * $Variant___:1.1.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.1.0; 0     27.06.2014 DAJ2KOR
 *   New macros for EEP_ReadRam_XXX_Adv
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_HWE_EEP_H
#define _CODEGEN_HWE_EEP_H


#define Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)    Eep_ReadRam(EEP_Index,&(xRdBuf))

#define Eep_WriteRam_SnglVal(EEP_Index,xWrBuf)   Eep_WriteRam(EEP_Index,&(xWrBuf))


/*Macros added for EBY-698*/
#define EEP_READRAM_CONT_ADV_U8_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_CONT_ADV_U16_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_CONT_ADV_U32_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_CONT_ADV_S8_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_CONT_ADV_S16_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_CONT_ADV_S32_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_CONT_ADV_REAL_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)

#define EEP_READRAM_SDISC_ADV_S8_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_SDISC_ADV_S16_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_SDISC_ADV_S32_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)

#define EEP_READRAM_UDISC_ADV_U8_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_UDISC_ADV_U16_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)
#define EEP_READRAM_UDISC_ADV_U32_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)		Eep_ReadRam(EEP_Index,xRdBuf)

#define EEP_READRAM_LOGIC_ADV_BOOL_Eep_ReadRam_SnglVal(EEP_Index,xRdBuf)	Eep_ReadRam(EEP_Index,xRdBuf)





#endif  /*#ifndef _CODEGEN_HWE_EEP_H*/

