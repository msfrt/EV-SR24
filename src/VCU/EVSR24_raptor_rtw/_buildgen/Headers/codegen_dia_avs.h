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
 * $Filename__:codegen_dia_avs.h$
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
 * $Date______:05.12.2013$
 * $Class_____:SWHDR$
 * $Name______:codegen_dia_avs$
 * $Variant___:1.3.0$
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
 * 1.3.0; 0     05.12.2013 DAJ2KOR
 *     Macros for new AVS classes
 * 
 * 1.2.0; 0     18.06.2013 DAJ2KOR
 *   Macros added for Avs_GetValue and Avs_SetValue classes
 * 
 * 1.1.0; 0     18.10.2012 DAJ2KOR
 *   _CODEGEN_DIA_ETC_H changed to _CODEGEN_DIA_AVS_H
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_DIA_AVS_H
#define _CODEGEN_DIA_AVS_H

/*********************************************************************************/
/* Services AVS                                                                  */
/*********************************************************************************/
#define AVS_SetValueDirAcc(AVS_Macro, Val) ((AVS_Macro) = (Val))
#define AVS_GetValueDirAcc(AVS_Macro) (AVS_Macro)

#define AVS_Set1DArrayValueDirAcc(AVS_Macro, idx, Val) ((AVS_Macro)[(idx)] = (Val))
#define AVS_Set2DArrayValueDirAcc(AVS_Macro, idx, idy, Val) ((AVS_Macro)[(idx)][(idy)] = (Val))

#define AVS_Get1DArrayValueDirAcc(AVS_Macro, idx) ((AVS_Macro)[(idx)])
#define AVS_Get2DArrayValueDirAcc(AVS_Macro, idx, idy) ((AVS_Macro)[(idx)][(idy)])

#define AVS_GetValue_ASW(adjval,numbytes,valbuf) Avs_GetValue_ASW(adjval,numbytes,valbuf)
#define AVS_SetValue_ASW(adjval,numbytes,valbuf) Avs_SetValue_ASW(adjval,numbytes,valbuf)

#define AVS_Get1DArrayValue_ASW(adjval,numbytes,valbuf)	Avs_GetValue_ASW(adjval,numbytes,valbuf)
#define AVS_Set1DArrayValue_ASW(adjval,numbytes,valbuf)	Avs_SetValue_ASW(adjval,numbytes,valbuf)

/*New interfaces corresponding to EBY-692*/
/*Dec 3 2013*/

#define AVS_SET_IMPL_calc(avs_id,buffer)	(sint32)Avs_Set(avs_id,buffer)	
#define	AVS_GET_IMPL_calc(avs_id,buffer)	(sint32)Avs_Get(avs_id,buffer)

#define DIABAS_GETARRAY1DFROMBYTEBUFFER_S32_calc(buffer,dest_arr,num_colmns) DiaBas_GetS32Array1DFromByteBuffer(buffer,dest_arr,num_colmns)
#define DIABAS_GETARRAY1DFROMBYTEBUFFER_S16_calc(buffer,dest_arr,num_colmns)	DiaBas_GetS16Array1DFromByteBuffer(buffer,dest_arr,num_colmns)
#define DIABAS_GETARRAY1DFROMBYTEBUFFER_S8_calc(buffer,dest_arr,num_colmns)	DiaBas_GetS8Array1DFromByteBuffer(buffer,dest_arr,num_colmns)
#define DIABAS_GETARRAY1DFROMBYTEBUFFER_U32_calc(buffer,dest_arr,num_colmns)	DiaBas_GetU32Array1DFromByteBuffer(buffer,dest_arr,num_colmns)
#define DIABAS_GETARRAY1DFROMBYTEBUFFER_U16_calc(buffer,dest_arr,num_colmns)	DiaBas_GetU16Array1DFromByteBuffer(buffer,dest_arr,num_colmns)

#define DIABAS_SETARRAY1DTOBYTEBUFFER_S16_calc(buffer,src_arr,num_colmns)	DiaBas_SetS16Array1DToByteBuffer(buffer,src_arr,num_colmns)
#define DIABAS_SETARRAY1DTOBYTEBUFFER_S32_calc(buffer,src_arr,num_colmns)	DiaBas_SetS32Array1DToByteBuffer(buffer,src_arr,num_colmns)
#define DIABAS_SETARRAY1DTOBYTEBUFFER_S8_calc(buffer,src_arr,num_colmns)	DiaBas_SetS8Array1DToByteBuffer(buffer,src_arr,num_colmns)
#define DIABAS_SETARRAY1DTOBYTEBUFFER_U32_calc(buffer,src_arr,num_colmns)	DiaBas_SetU32Array1DToByteBuffer(buffer,src_arr,num_colmns)
#define DIABAS_SETARRAY1DTOBYTEBUFFER_U16_calc(buffer,src_arr,num_colmns)	DiaBas_SetU16Array1DToByteBuffer(buffer,src_arr,num_colmns)

#define DIABAS_GETFROMBYTEBUFFER_S32_calc(buffer)	DiaBas_GetS32FromByteBuffer(buffer)
#define DIABAS_GETFROMBYTEBUFFER_S16_calc(buffer)	DiaBas_GetS16FromByteBuffer(buffer)
#define DIABAS_GETFROMBYTEBUFFER_S8_calc(buffer)	DiaBas_GetS8FromByteBuffer(buffer)
#define DIABAS_GETFROMBYTEBUFFER_U32_calc(buffer)	DiaBas_GetU32FromByteBuffer(buffer)
#define DIABAS_GETFROMBYTEBUFFER_U16_calc(buffer)	DiaBas_GetU16FromByteBuffer(buffer)


#define DIABAS_SETTOBYTEBUFFER_S32_calc(buffer,val)	DiaBas_SetS32ToByteBuffer(buffer,val)
#define DIABAS_SETTOBYTEBUFFER_S16_calc(buffer,val)	DiaBas_SetS16ToByteBuffer(buffer,val)
#define DIABAS_SETTOBYTEBUFFER_S8_calc(buffer,val)	DiaBas_SetS8ToByteBuffer(buffer,val)
#define DIABAS_SETTOBYTEBUFFER_U32_calc(buffer,val)	DiaBas_SetU32ToByteBuffer(buffer,val)
#define DIABAS_SETTOBYTEBUFFER_U16_calc(buffer,val)	DiaBas_SetU16ToByteBuffer(buffer,val)

#endif  /*#ifndef _CODEGEN_DIA_AVS_H*/

