
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
 * $Filename__:mofsrv_lib_codegen_nolimit.h$
 *
 * $Author____:GWR2SI$
 *
 * $Function__:add services for Ascet$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:GWR2SI$
 * $Date______:15.02.2012$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib_codegen_nolimit$
 * $Variant___:18.0.1$
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
 * 18.0.1; 0     15.02.2012 GWR2SI
 *   correction of MulShRight_NOLIMIT_u16u16_s32
 * 
 * 18.0.0; 1     14.08.2011 GWR2SI
 *   reorder some services for better compare with L1
 * 
 * 18.0.0; 0     10.07.2011 GWR2SI
 *   add services for Ascet
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/


#ifndef _MOFSRV_LIB_CODEGEN_NOLIMIT_H
#define _MOFSRV_LIB_CODEGEN_NOLIMIT_H

/*********************************************************************************/
/*                  I N T E G E R - D I E N S T E                                */
/*                                                                               */
/*  based on SWHDR : services / 2.1.0; 0                                         */
/*********************************************************************************/

/*********************************************************************************/
/* Addition (no limitation) */
/*********************************************************************************/

/* unlimited addition s8, result is s8 */
#define MoFSrv_Lib_Add_NOLIMIT_s8s8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s16_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u16_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s32_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u32_s8(x, y) 	   	((sint8)(MoFSrv_Lib_Add_limit_s8u32_s8((x),(y))))

/* unlimited addition u8, result is s8 */
#define MoFSrv_Lib_Add_NOLIMIT_u8s8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s16_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u16_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s32_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u32_s8(x, y) 	   	((sint8)((uint32)(x) + (uint32)(y)))

/* unlimited addition s16, result is s8 */
#define MoFSrv_Lib_Add_NOLIMIT_s16s8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s16_s8(x, y)	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u16_s8(x, y)    	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s32_s8(x, y)    	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u32_s8(x, y)    	((sint8)(MoFSrv_Lib_Add_limit_s16u32_s8((x),(y))))

/* unlimited addition u16, result is s8 */
#define MoFSrv_Lib_Add_NOLIMIT_u16s8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s16_s8(x, y)	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u16_s8(x, y)	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s32_s8(x, y)	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u32_s8(x, y)    	((sint8)((uint32)(x) + (uint32)(y)))

/* unlimited addition s32, result is s8 */
#define MoFSrv_Lib_Add_NOLIMIT_s32s8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u8_s8(x, y) 	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s16_s8(x, y)	   	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u16_s8(x, y)    	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s32_s8(x, y)    	((sint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u32_s8(x, y)    	((sint8)(MoFSrv_Lib_Add_limit_s32u32_s8((x),(y))))

/* unlimited addition u32, result is s8 */
#define MoFSrv_Lib_Add_NOLIMIT_u32s8_s8(x, y) 	   	((sint8)(MoFSrv_Lib_Add_limit_u32s8_s8((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u8_s8(x, y) 	   	((sint8)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s16_s8(x, y)	   	((sint8)(MoFSrv_Lib_Add_limit_u32s16_s8((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u16_s8(x, y)	   	((sint8)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s32_s8(x, y)	   	((sint8)(MoFSrv_Lib_Add_limit_u32s32_s8((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u32_s8(x, y)    	((sint8)((uint32)(x) + (uint32)(y)))

/* unlimited addition s8, result is u8 */
#define MoFSrv_Lib_Add_NOLIMIT_s8s8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s16_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u16_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s32_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u32_u8(x, y) 	   	((uint8)(MoFSrv_Lib_Add_limit_s8u32_u8((x),(y))))

/* unlimited addition u8, result is u8 */
#define MoFSrv_Lib_Add_NOLIMIT_u8s8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s16_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u16_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s32_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u32_u8(x, y) 	   	((uint8)((uint32)(x) + (uint32)(y)))

/* unlimited addition s16, result is u8 */
#define MoFSrv_Lib_Add_NOLIMIT_s16s8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s16_u8(x, y)	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u16_u8(x, y)	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s32_u8(x, y)	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u32_u8(x, y)	   	((uint8)(MoFSrv_Lib_Add_limit_s16u32_u8((x),(y))))

/* unlimited addition u16, result is u8 */
#define MoFSrv_Lib_Add_NOLIMIT_u16s8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s16_u8(x, y)	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u16_u8(x, y)    	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s32_u8(x, y)	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u32_u8(x, y)    	((uint8)((uint32)(x) + (uint32)(y)))

/* unlimited addition s32, result is u8 */
#define MoFSrv_Lib_Add_NOLIMIT_s32s8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u8_u8(x, y) 	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s16_u8(x, y)	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u16_u8(x, y)    	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s32_u8(x, y)	   	((uint8)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u32_u8(x, y)	   	((uint8)(MoFSrv_Lib_Add_limit_s32u32_u8((x),(y))))

/* unlimited addition u32, result is u8 */
#define MoFSrv_Lib_Add_NOLIMIT_u32s8_u8(x, y) 	   	((uint8)(MoFSrv_Lib_Add_limit_u32s8_u8((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u8_u8(x, y) 	   	((uint8)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s16_u8(x, y)	   	((uint8)(MoFSrv_Lib_Add_limit_u32s16_u8((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u16_u8(x, y)	   	((uint8)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s32_u8(x, y)	   	((uint8)(MoFSrv_Lib_Add_limit_u32s32_u8((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u32_u8(x, y)	   	((uint8)((uint32)(x) + (uint32)(y)))

/* unlimited addition s8, result is s16 */
#define MoFSrv_Lib_Add_NOLIMIT_s8s8_s16(x, y) 	   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u8_s16(x, y) 	   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s16_s16(x, y)    	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u16_s16(x, y)	   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s32_s16(x, y)    	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u32_s16(x, y)    	((sint16)(MoFSrv_Lib_Add_limit_s8u32_s16((x),(y))))

/* unlimited addition u8, result is s16 */
#define MoFSrv_Lib_Add_NOLIMIT_u8s8_s16(x, y)	   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u8_s16(x, y)	   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s16_s16(x, y)    	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u16_s16(x, y)    	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s32_s16(x, y)    	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u32_s16(x, y)    	((sint16)((uint32)(x) + (uint32)(y)))

/* unlimited addition s16, result is s16 */
#define MoFSrv_Lib_Add_NOLIMIT_s16s8_s16(x, y)   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u8_s16(x, y)   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s16_s16(x, y)  	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u16_s16(x, y)  	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s32_s16(x, y)   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u32_s16(x, y)   	((sint16)(MoFSrv_Lib_Add_limit_s16u32_s16((x),(y))))

/* unlimited addition u16, result is s16 */
#define MoFSrv_Lib_Add_NOLIMIT_u16s8_s16(x, y)   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u8_s16(x, y)    	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s16_s16(x, y)  	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u16_s16(x, y)  	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s32_s16(x, y)  	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u32_s16(x, y)   	((sint16)((uint32)(x) + (uint32)(y)))

/* unlimited addition s32, result is s16 */
#define MoFSrv_Lib_Add_NOLIMIT_s32s8_s16(x, y)    	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u8_s16(x, y)   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s16_s16(x, y)   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u16_s16(x, y)   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s32_s16(x, y)   	((sint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u32_s16(x, y)   	((sint16)(MoFSrv_Lib_Add_limit_s32u32_s16((x),(y))))

/* unlimited addition u32, result is s16 */
#define MoFSrv_Lib_Add_NOLIMIT_u32s8_s16(x, y)	   	((sint16)(MoFSrv_Lib_Add_limit_u32s8_s16((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u8_s16(x, y)    	((sint16)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s16_s16(x, y)   	((sint16)(MoFSrv_Lib_Add_limit_u32s16_s16((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u16_s16(x, y)   	((sint16)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s32_s16(x, y)   	((sint16)(MoFSrv_Lib_Add_limit_u32s32_s16((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u32_s16(x, y)   	((sint16)((uint32)(x) + (uint32)(y)))

/* unlimited addition s8, result is u16 */
#define MoFSrv_Lib_Add_NOLIMIT_s8s8_u16(x, y) 	   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u8_u16(x, y) 	   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s16_u16(x, y)    	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u16_u16(x, y)	   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s32_u16(x, y)    	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u32_u16(x, y)    	((uint16)(MoFSrv_Lib_Add_limit_s8u32_u16((x),(y))))

/* unlimited addition u8, result is u16 */
#define MoFSrv_Lib_Add_NOLIMIT_u8s8_u16(x, y)	   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u8_u16(x, y)	   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s16_u16(x, y)    	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u16_u16(x, y)    	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s32_u16(x, y)    	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u32_u16(x, y)    	((uint16)((uint32)(x) + (uint32)(y)))

/* unlimited addition s16, result is u16 */
#define MoFSrv_Lib_Add_NOLIMIT_s16s8_u16(x, y)   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u8_u16(x, y)   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s16_u16(x, y)  	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u16_u16(x, y)  	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s32_u16(x, y)   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u32_u16(x, y)   	((uint16)(MoFSrv_Lib_Add_limit_s16u32_u16((x),(y))))

/* unlimited addition u16, result is u16 */
#define MoFSrv_Lib_Add_NOLIMIT_u16s8_u16(x, y)   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u8_u16(x, y)    	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s16_u16(x, y)  	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u16_u16(x, y)  	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s32_u16(x, y)  	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u32_u16(x, y)   	((uint16)((uint32)(x) + (uint32)(y)))

/* unlimited addition s32, result is u16 */
#define MoFSrv_Lib_Add_NOLIMIT_s32s8_u16(x, y)    	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u8_u16(x, y)   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s16_u16(x, y)   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u16_u16(x, y)   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s32_u16(x, y)   	((uint16)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u32_u16(x, y)   	((uint16)(MoFSrv_Lib_Add_limit_s32u32_u16((x),(y))))

/* unlimited addition u32, result is u16 */
#define MoFSrv_Lib_Add_NOLIMIT_u32s8_u16(x, y)	   	((uint16)(MoFSrv_Lib_Add_limit_u32s8_u16((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u8_u16(x, y)    	((uint16)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s16_u16(x, y)   	((uint16)(MoFSrv_Lib_Add_limit_u32s16_u16((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u16_u16(x, y)   	((uint16)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s32_u16(x, y)   	((uint16)(MoFSrv_Lib_Add_limit_u32s32_u16((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u32_u16(x, y)   	((uint16)((uint32)(x) + (uint32)(y)))

/* unlimited addition s8, result is s32 */
#define MoFSrv_Lib_Add_NOLIMIT_s8s8_s32(x, y) 	   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u8_s32(x, y) 	   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s16_s32(x, y)    	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u16_s32(x, y)	   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s32_s32(x, y)    	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u32_s32(x, y)    	((sint32)(MoFSrv_Lib_Add_limit_s8u32_s32((x),(y))))

/* unlimited addition u8, result is s32 */
#define MoFSrv_Lib_Add_NOLIMIT_u8s8_s32(x, y)	   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u8_s32(x, y)	   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s16_s32(x, y)    	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u16_s32(x, y)    	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s32_s32(x, y)    	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u32_s32(x, y)    	((sint32)((uint32)(x) + (uint32)(y)))

/* unlimited addition s16, result is s32 */
#define MoFSrv_Lib_Add_NOLIMIT_s16s8_s32(x, y)   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u8_s32(x, y)   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s16_s32(x, y)  	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u16_s32(x, y)  	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s32_s32(x, y)   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u32_s32(x, y)   	((sint32)(MoFSrv_Lib_Add_limit_s16u32_s32((x),(y))))

/* unlimited addition u16, result is s32 */
#define MoFSrv_Lib_Add_NOLIMIT_u16s8_s32(x, y)   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u8_s32(x, y)    	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s16_s32(x, y)  	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u16_s32(x, y)  	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s32_s32(x, y)  	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u32_s32(x, y)   	((sint32)((uint32)(x) + (uint32)(y)))

/* unlimited addition s32, result is s32 */
#define MoFSrv_Lib_Add_NOLIMIT_s32s8_s32(x, y)    	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u8_s32(x, y)   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s16_s32(x, y)   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u16_s32(x, y)   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s32_s32(x, y)   	((sint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u32_s32(x, y)   	((sint32)(MoFSrv_Lib_Add_limit_s32u32_s32((x),(y))))

/* unlimited addition u32, result is s32 */
#define MoFSrv_Lib_Add_NOLIMIT_u32s8_s32(x, y)	   	((sint32)(MoFSrv_Lib_Add_limit_u32s8_s32((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u8_s32(x, y)    	((sint32)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s16_s32(x, y)   	((sint32)(MoFSrv_Lib_Add_limit_u32s16_s32((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u16_s32(x, y)   	((sint32)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s32_s32(x, y)   	((sint32)(MoFSrv_Lib_Add_limit_u32s32_s32((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u32_s32(x, y)   	((sint32)((uint32)(x) + (uint32)(y)))

/* unlimited addition s8, result is u32 */
#define MoFSrv_Lib_Add_NOLIMIT_s8s8_u32(x, y) 	   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u8_u32(x, y) 	   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s16_u32(x, y)    	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u16_u32(x, y)	   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8s32_u32(x, y)    	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s8u32_u32(x, y)    	((uint32)(MoFSrv_Lib_Add_limit_s8u32_u32((x),(y))))

/* unlimited addition u8, result is u32 */
#define MoFSrv_Lib_Add_NOLIMIT_u8s8_u32(x, y)	   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u8_u32(x, y)		((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s16_u32(x, y)    	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u16_u32(x, y)    	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8s32_u32(x, y)    	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u8u32_u32(x, y)    	((uint32)((uint32)(x) + (uint32)(y)))

/* unlimited addition s16, result is u32 */
#define MoFSrv_Lib_Add_NOLIMIT_s16s8_u32(x, y)   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u8_u32(x, y)   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s16_u32(x, y)  	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u16_u32(x, y)  	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16s32_u32(x, y)   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s16u32_u32(x, y)   	((uint32)(MoFSrv_Lib_Add_limit_s16u32_u32((x),(y))))

/* unlimited addition u16, result is u32 */
#define MoFSrv_Lib_Add_NOLIMIT_u16s8_u32(x, y)   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u8_u32(x, y)    	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s16_u32(x, y)  	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u16_u32(x, y)  	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16s32_u32(x, y)  	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u16u32_u32(x, y)   	((uint32)((uint32)(x) + (uint32)(y)))

/* unlimited addition s32, result is u32 */
#define MoFSrv_Lib_Add_NOLIMIT_s32s8_u32(x, y)    	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u8_u32(x, y)   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s16_u32(x, y)   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u16_u32(x, y)   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32s32_u32(x, y)   	((uint32)((sint32)(x) + (sint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_s32u32_u32(x, y)   	((uint32)(MoFSrv_Lib_Add_limit_s32u32_u32((x),(y))))

/* unlimited addition u32, result is u32 */
#define MoFSrv_Lib_Add_NOLIMIT_u32s8_u32(x, y)	   	((uint32)(MoFSrv_Lib_Add_limit_u32s8_u32((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u8_u32(x, y)    	((uint32)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s16_u32(x, y)   	((uint32)(MoFSrv_Lib_Add_limit_u32s16_u32((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u16_u32(x, y)   	((uint32)((uint32)(x) + (uint32)(y)))
#define MoFSrv_Lib_Add_NOLIMIT_u32s32_u32(x, y)   	((uint32)(MoFSrv_Lib_Add_limit_u32s32_u32((x),(y))))
#define MoFSrv_Lib_Add_NOLIMIT_u32u32_u32(x, y)   	((uint32)((uint32)(x) + (uint32)(y)))

/*********************************************************************************/
/* Subtraction (no limitation) */
/*********************************************************************************/

/* unlimited substraction s8, result is s8 */
#define MoFSrv_Lib_Sub_NOLIMIT_s8s8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s16_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u16_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s32_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u32_s8(x, y) 	   	((sint8)(MoFSrv_Lib_Sub_limit_s8u32_s8((x),(y))))

/* unlimited substraction u8, result is s8 */
#define MoFSrv_Lib_Sub_NOLIMIT_u8s8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s16_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u16_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s32_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u32_s8(x, y) 	   	((sint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is s8 */
#define MoFSrv_Lib_Sub_NOLIMIT_s16s8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s16_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u16_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s32_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u32_s8(x, y)	   	((sint8)(MoFSrv_Lib_Sub_limit_s16u32_s8((x),(y))))

/* unlimited substraction u16, result is s8 */
#define MoFSrv_Lib_Sub_NOLIMIT_u16s8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s16_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u16_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s32_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u32_s8(x, y)	   	((sint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is s8 */
#define MoFSrv_Lib_Sub_NOLIMIT_s32s8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u8_s8(x, y) 	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s16_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u16_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s32_s8(x, y)	   	((sint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u32_s8(x, y)	   	((sint8)(MoFSrv_Lib_Sub_limit_s32u32_s8((x),(y))))

/* unlimited substraction u32, result is s8 */
#define MoFSrv_Lib_Sub_NOLIMIT_u32s8_s8(x, y) 	   	((sint8)(MoFSrv_Lib_Sub_limit_u32s8_s8((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u8_s8(x, y) 	   	((sint8)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s16_s8(x, y)	   	((sint8)(MoFSrv_Lib_Sub_limit_u32s16_s8((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u16_s8(x, y)	   	((sint8)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s32_s8(x, y)	   	((sint8)(MoFSrv_Lib_Sub_limit_u32s32_s8((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u32_s8(x, y)	   	((sint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s8, result is u8 */
#define MoFSrv_Lib_Sub_NOLIMIT_s8s8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s16_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u16_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s32_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u32_u8(x, y) 	   	((uint8)(MoFSrv_Lib_Sub_limit_s8u32_u8((x),(y))))

/* unlimited substraction u8, result is u8 */
#define MoFSrv_Lib_Sub_NOLIMIT_u8s8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s16_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u16_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s32_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u32_u8(x, y) 	   	((uint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is u8 */
#define MoFSrv_Lib_Sub_NOLIMIT_s16s8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s16_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u16_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s32_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u32_u8(x, y)	   	((uint8)(MoFSrv_Lib_Sub_limit_s16u32_u8((x),(y))))

/* unlimited substraction u16, result is u8 */
#define MoFSrv_Lib_Sub_NOLIMIT_u16s8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s16_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u16_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s32_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u32_u8(x, y)	   	((uint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is u8 */
#define MoFSrv_Lib_Sub_NOLIMIT_s32s8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u8_u8(x, y) 	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s16_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u16_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s32_u8(x, y)	   	((uint8)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u32_u8(x, y)	   	((uint8)(MoFSrv_Lib_Sub_limit_s32u32_u8((x),(y))))

/* unlimited substraction u32, result is u8 */
#define MoFSrv_Lib_Sub_NOLIMIT_u32s8_u8(x, y) 	   	((uint8)(MoFSrv_Lib_Sub_limit_u32s8_u8((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u8_u8(x, y) 	   	((uint8)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s16_u8(x, y)	   	((uint8)(MoFSrv_Lib_Sub_limit_u32s16_u8((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u16_u8(x, y)	   	((uint8)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s32_u8(x, y)	   	((uint8)(MoFSrv_Lib_Sub_limit_u32s32_u8((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u32_u8(x, y)	   	((uint8)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s8, result is s16 */
#define MoFSrv_Lib_Sub_NOLIMIT_s8s8_s16(x, y) 	   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u8_s16(x, y) 	   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s16_s16(x, y)    	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u16_s16(x, y)	   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s32_s16(x, y)    	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u32_s16(x, y)    	((sint16)(MoFSrv_Lib_Sub_limit_s8u32_s16((x),(y))))

/* unlimited substraction u8, result is s16 */
#define MoFSrv_Lib_Sub_NOLIMIT_u8s8_s16(x, y)	   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u8_s16(x, y)	   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s16_s16(x, y)    	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u16_s16(x, y)    	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s32_s16(x, y)    	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u32_s16(x, y)    	((sint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is s16 */
#define MoFSrv_Lib_Sub_NOLIMIT_s16s8_s16(x, y)   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u8_s16(x, y)   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s16_s16(x, y)  	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u16_s16(x, y)  	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s32_s16(x, y)   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u32_s16(x, y)   	((sint16)(MoFSrv_Lib_Sub_limit_s16u32_s16((x),(y))))

/* unlimited substraction u16, result is s16 */
#define MoFSrv_Lib_Sub_NOLIMIT_u16s8_s16(x, y)   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u8_s16(x, y)    	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s16_s16(x, y)  	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u16_s16(x, y)  	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s32_s16(x, y)  	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u32_s16(x, y)   	((sint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is s16 */
#define MoFSrv_Lib_Sub_NOLIMIT_s32s8_s16(x, y)    	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u8_s16(x, y)   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s16_s16(x, y)   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u16_s16(x, y)   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s32_s16(x, y)   	((sint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u32_s16(x, y)   	((sint16)(MoFSrv_Lib_Sub_limit_s32u32_s16((x),(y))))

/* unlimited substraction u32, result is s16 */
#define MoFSrv_Lib_Sub_NOLIMIT_u32s8_s16(x, y) 	((sint16)(MoFSrv_Lib_Sub_limit_u32s8_s16((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u8_s16(x, y) 	((sint16)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s16_s16(x, y)	((sint16)(MoFSrv_Lib_Sub_limit_u32s16_s16((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u16_s16(x, y)	((sint16)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s32_s16(x, y)	((sint16)(MoFSrv_Lib_Sub_limit_u32s32_s16((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u32_s16(x, y)	((sint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s8, result is u16 */
#define MoFSrv_Lib_Sub_NOLIMIT_s8s8_u16(x, y) 	   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u8_u16(x, y) 	   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s16_u16(x, y)    	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u16_u16(x, y)	   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s32_u16(x, y)    	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u32_u16(x, y)    	((uint16)(MoFSrv_Lib_Sub_limit_s8u32_u16((x),(y))))

/* unlimited substraction u8, result is u16 */
#define MoFSrv_Lib_Sub_NOLIMIT_u8s8_u16(x, y)	   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u8_u16(x, y)	   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s16_u16(x, y)    	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u16_u16(x, y)    	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s32_u16(x, y)    	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u32_u16(x, y)    	((uint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is u16 */
#define MoFSrv_Lib_Sub_NOLIMIT_s16s8_u16(x, y)   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u8_u16(x, y)   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s16_u16(x, y)  	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u16_u16(x, y)  	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s32_u16(x, y)   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u32_u16(x, y)   	((uint16)(MoFSrv_Lib_Sub_limit_s16u32_u16((x),(y))))

/* unlimited substraction u16, result is u16 */
#define MoFSrv_Lib_Sub_NOLIMIT_u16s8_u16(x, y)   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u8_u16(x, y)    	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s16_u16(x, y)  	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u16_u16(x, y)  	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s32_u16(x, y)  	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u32_u16(x, y)   	((uint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is u16 */
#define MoFSrv_Lib_Sub_NOLIMIT_s32s8_u16(x, y)    	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u8_u16(x, y)   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s16_u16(x, y)   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u16_u16(x, y)   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s32_u16(x, y)   	((uint16)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u32_u16(x, y)   	((uint16)(MoFSrv_Lib_Sub_limit_s32u32_u16((x),(y))))

/* unlimited substraction u32, result is u16 */
#define MoFSrv_Lib_Sub_NOLIMIT_u32s8_u16(x, y) 	((uint16)(MoFSrv_Lib_Sub_limit_u32s8_u16((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u8_u16(x, y) 	((uint16)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s16_u16(x, y)	((uint16)(MoFSrv_Lib_Sub_limit_u32s16_u16((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u16_u16(x, y)	((uint16)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s32_u16(x, y)	((uint16)(MoFSrv_Lib_Sub_limit_u32s32_u16((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u32_u16(x, y)	((uint16)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s8, result is s32 */
#define MoFSrv_Lib_Sub_NOLIMIT_s8s8_s32(x, y) 	   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u8_s32(x, y) 	   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s16_s32(x, y)    	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u16_s32(x, y)	   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s32_s32(x, y)    	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u32_s32(x, y)    	((sint32)(MoFSrv_Lib_Sub_limit_s8u32_s32((x),(y))))

/* unlimited substraction u8, result is s32 */
#define MoFSrv_Lib_Sub_NOLIMIT_u8s8_s32(x, y)	   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u8_s32(x, y)	   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s16_s32(x, y)    	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u16_s32(x, y)    	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s32_s32(x, y)    	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u32_s32(x, y)    	((sint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is s32 */
#define MoFSrv_Lib_Sub_NOLIMIT_s16s8_s32(x, y)   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u8_s32(x, y)   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s16_s32(x, y)  	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u16_s32(x, y)  	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s32_s32(x, y)   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u32_s32(x, y)   	((sint32)(MoFSrv_Lib_Sub_limit_s16u32_s32((x),(y))))

/* unlimited substraction u16, result is s32 */
#define MoFSrv_Lib_Sub_NOLIMIT_u16s8_s32(x, y)   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u8_s32(x, y)    	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s16_s32(x, y)  	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u16_s32(x, y)  	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s32_s32(x, y)  	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u32_s32(x, y)   	((sint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is s32 */
#define MoFSrv_Lib_Sub_NOLIMIT_s32s8_s32(x, y)    	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u8_s32(x, y)   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s16_s32(x, y)   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u16_s32(x, y)   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s32_s32(x, y)   	((sint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u32_s32(x, y)   	((sint32)(MoFSrv_Lib_Sub_limit_s32u32_s32((x),(y))))

/* unlimited substraction u32, result is s32 */
#define MoFSrv_Lib_Sub_NOLIMIT_u32s8_s32(x, y) 	((sint32)(MoFSrv_Lib_Sub_limit_u32s8_s32((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u8_s32(x, y) 	((sint32)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s16_s32(x, y)	((sint32)(MoFSrv_Lib_Sub_limit_u32s16_s32((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u16_s32(x, y)	((sint32)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s32_s32(x, y)	((sint32)(MoFSrv_Lib_Sub_limit_u32s32_s32((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u32_s32(x, y)	((sint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s8, result is u32 */
#define MoFSrv_Lib_Sub_NOLIMIT_s8s8_u32(x, y) 	   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u8_u32(x, y) 	   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s16_u32(x, y)    	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u16_u32(x, y)	   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8s32_u32(x, y)    	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s8u32_u32(x, y)    	((uint32)(MoFSrv_Lib_Sub_limit_s8u32_u32((x),(y))))

/* unlimited substraction u8, result is u32 */
#define MoFSrv_Lib_Sub_NOLIMIT_u8s8_u32(x, y)	   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u8_u32(x, y)	   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s16_u32(x, y)    	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u16_u32(x, y)    	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8s32_u32(x, y)    	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u8u32_u32(x, y)    	((uint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s16, result is u32 */
#define MoFSrv_Lib_Sub_NOLIMIT_s16s8_u32(x, y)   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u8_u32(x, y)   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s16_u32(x, y)  	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u16_u32(x, y)  	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16s32_u32(x, y)   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s16u32_u32(x, y)   	((uint32)(MoFSrv_Lib_Sub_limit_s16u32_u32((x),(y))))

/* unlimited substraction u16, result is u32 */
#define MoFSrv_Lib_Sub_NOLIMIT_u16s8_u32(x, y)   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u8_u32(x, y)    	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s16_u32(x, y)  	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u16_u32(x, y)  	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16s32_u32(x, y)  	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u16u32_u32(x, y)   	((uint32)((uint32)(x) - (uint32)(y)))

/* unlimited substraction s32, result is u32 */
#define MoFSrv_Lib_Sub_NOLIMIT_s32s8_u32(x, y)    	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u8_u32(x, y)   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s16_u32(x, y)   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u16_u32(x, y)   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32s32_u32(x, y)   	((uint32)((sint32)(x) - (sint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_s32u32_u32(x, y)   	((uint32)(MoFSrv_Lib_Sub_limit_s32u32_u32((x),(y))))

/* unlimited substraction u32, result is u32 */
#define MoFSrv_Lib_Sub_NOLIMIT_u32s8_u32(x, y) 	((uint32)(MoFSrv_Lib_Sub_limit_u32s8_u32((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u8_u32(x, y) 	((uint32)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s16_u32(x, y)	((uint32)(MoFSrv_Lib_Sub_limit_u32s16_u32((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u16_u32(x, y)	((uint32)((uint32)(x) - (uint32)(y)))
#define MoFSrv_Lib_Sub_NOLIMIT_u32s32_u32(x, y)	((uint32)(MoFSrv_Lib_Sub_limit_u32s32_u32((x),(y))))
#define MoFSrv_Lib_Sub_NOLIMIT_u32u32_u32(x, y)	((uint32)((uint32)(x) - (uint32)(y)))

/*********************************************************************************/
/* Multiplication (no limitation) */
/*********************************************************************************/

/* unlimited multiplication s8, result is s8 */
#define MoFSrv_Lib_Mul_NOLIMIT_s8s8_s8(x, y) 	   	((sint8)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u8_s8(x, y) 	   	((sint8)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication u8, result is s8 */
#define MoFSrv_Lib_Mul_NOLIMIT_u8s8_s8(x, y) 	   	((sint8)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u8_s8(x, y) 	   	((sint8)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication s8, result is u8 */
#define MoFSrv_Lib_Mul_NOLIMIT_s8s8_u8(x, y) 	   	((uint8)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u8_u8(x, y) 	   	((uint8)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication u8, result is u8 */
#define MoFSrv_Lib_Mul_NOLIMIT_u8s8_u8(x, y) 	   	((uint8)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u8_u8(x, y) 	   	((uint8)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication s8, result is s16 */
#define MoFSrv_Lib_Mul_NOLIMIT_s8s8_s16(x, y) 	   	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u8_s16(x, y) 	   	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8s16_s16(x, y)    	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u16_s16(x, y)	   	((sint16)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication u8, result is s16 */
#define MoFSrv_Lib_Mul_NOLIMIT_u8s8_s16(x, y)	   	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u8_s16(x, y)	   	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8s16_s16(x, y)    	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u16_s16(x, y)    	((sint16)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication s16, result is s16 */
#define MoFSrv_Lib_Mul_NOLIMIT_s16s8_s16(x, y)   	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u8_s16(x, y)   	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16s16_s16(x, y)  	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u16_s16(x, y)  	((sint16)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication u16, result is s16 */
#define MoFSrv_Lib_Mul_NOLIMIT_u16s8_s16(x, y)   	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u8_s16(x, y)    	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16s16_s16(x, y)  	((sint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u16_s16(x, y)  	((sint16)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication s8, result is u16 */
#define MoFSrv_Lib_Mul_NOLIMIT_s8s8_u16(x, y) 	   	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u8_u16(x, y) 	   	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8s16_u16(x, y)    	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u16_u16(x, y)	   	((uint16)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication u8, result is u16 */
#define MoFSrv_Lib_Mul_NOLIMIT_u8s8_u16(x, y)	   	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u8_u16(x, y)	   	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8s16_u16(x, y)    	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u16_u16(x, y)    	((uint16)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication s16, result is u16 */
#define MoFSrv_Lib_Mul_NOLIMIT_s16s8_u16(x, y)   	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u8_u16(x, y)   	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16s16_u16(x, y)  	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u16_u16(x, y)  	((uint16)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication u16, result is u16 */
#define MoFSrv_Lib_Mul_NOLIMIT_u16s8_u16(x, y)   	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u8_u16(x, y)    	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16s16_u16(x, y)  	((uint16)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u16_u16(x, y)  	((uint16)((sint32)(x) * (sint32)(y)))

/* unlimited multiplication s8, result is s32 */
#define MoFSrv_Lib_Mul_NOLIMIT_s8s8_s32(x, y) 	   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u8_s32(x, y) 	   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8s16_s32(x, y)    	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u16_s32(x, y)	   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8s32_s32(x, y)    	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u32_s32(x, y)    	((sint32)(MoFSrv_Lib_Mul_limit_s8u32_s32((x),(y))))

/* unlimited multiplication u8, result is s32 */
#define MoFSrv_Lib_Mul_NOLIMIT_u8s8_s32(x, y)	   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u8_s32(x, y)	   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8s16_s32(x, y)    	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u16_s32(x, y)    	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8s32_s32(x, y)    	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u32_s32(x, y)    	((sint32)((uint32)(x) * (uint32)(y)))

/* unlimited multiplication s16, result is s32 */
#define MoFSrv_Lib_Mul_NOLIMIT_s16s8_s32(x, y)   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u8_s32(x, y)   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16s16_s32(x, y)  	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u16_s32(x, y)  	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16s32_s32(x, y)   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u32_s32(x, y)   	((sint32)(MoFSrv_Lib_Mul_limit_s16u32_s32((x),(y))))

/* unlimited multiplication u16, result is s32 */
#define MoFSrv_Lib_Mul_NOLIMIT_u16s8_s32(x, y)   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u8_s32(x, y)    	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16s16_s32(x, y)  	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u16_s32(x, y)  	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16s32_s32(x, y)  	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u32_s32(x, y)   	((sint32)((uint32)(x) * (uint32)(y)))

/* unlimited multiplication s32, result is s32 */
#define MoFSrv_Lib_Mul_NOLIMIT_s32s8_s32(x, y)    	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32u8_s32(x, y)   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32s16_s32(x, y)   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32u16_s32(x, y)   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32s32_s32(x, y)   	((sint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32u32_s32(x, y)   	((sint32)(MoFSrv_Lib_Mul_limit_s32u32_s32((x),(y))))

/* unlimited multiplication u32, result is s32 */
#define MoFSrv_Lib_Mul_NOLIMIT_u32s8_s32(x, y) 	((sint32)(MoFSrv_Lib_Mul_limit_u32s8_s32((x),(y))))
#define MoFSrv_Lib_Mul_NOLIMIT_u32u8_s32(x, y) 	((sint32)((uint32)(x) * (uint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u32s16_s32(x, y)	((sint32)(MoFSrv_Lib_Mul_limit_u32s16_s32((x),(y))))
#define MoFSrv_Lib_Mul_NOLIMIT_u32u16_s32(x, y)	((sint32)((uint32)(x) * (uint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u32s32_s32(x, y)	((sint32)(MoFSrv_Lib_Mul_limit_u32s32_s32((x),(y))))
#define MoFSrv_Lib_Mul_NOLIMIT_u32u32_s32(x, y)	((sint32)((uint32)(x) * (uint32)(y)))

/* unlimited multiplication s8, result is u32 */
#define MoFSrv_Lib_Mul_NOLIMIT_s8s8_u32(x, y) 	   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u8_u32(x, y) 	   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8s16_u32(x, y)    	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u16_u32(x, y)	   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8s32_u32(x, y)    	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s8u32_u32(x, y)    	((uint32)(MoFSrv_Lib_Mul_limit_s8u32_u32((x),(y))))

/* unlimited multiplication u8, result is u32 */
#define MoFSrv_Lib_Mul_NOLIMIT_u8s8_u32(x, y)	   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u8_u32(x, y)	   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8s16_u32(x, y)    	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u16_u32(x, y)    	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8s32_u32(x, y)    	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u8u32_u32(x, y)    	((uint32)((uint32)(x) * (uint32)(y)))

/* unlimited multiplication s16, result is u32 */
#define MoFSrv_Lib_Mul_NOLIMIT_s16s8_u32(x, y)   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u8_u32(x, y)   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16s16_u32(x, y)  	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u16_u32(x, y)  	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16s32_u32(x, y)   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s16u32_u32(x, y)   	((uint32)(MoFSrv_Lib_Mul_limit_s16u32_u32((x),(y))))

/* unlimited multiplication u16, result is u32 */
#define MoFSrv_Lib_Mul_NOLIMIT_u16s8_u32(x, y)   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u8_u32(x, y)    	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16s16_u32(x, y)  	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u16_u32(x, y)  	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16s32_u32(x, y)  	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u16u32_u32(x, y)   	((uint32)((uint32)(x) * (uint32)(y)))

/* unlimited multiplication s32, result is u32 */
#define MoFSrv_Lib_Mul_NOLIMIT_s32s8_u32(x, y)    	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32u8_u32(x, y)   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32s16_u32(x, y)   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32u16_u32(x, y)   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32s32_u32(x, y)   	((uint32)((sint32)(x) * (sint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_s32u32_u32(x, y)   	((uint32)(MoFSrv_Lib_Mul_limit_s32u32_u32((x),(y))))

/* unlimited multiplication u32, result is u32 */
#define MoFSrv_Lib_Mul_NOLIMIT_u32s8_u32(x, y) 	((uint32)(MoFSrv_Lib_Mul_limit_u32s8_u32((x),(y))))
#define MoFSrv_Lib_Mul_NOLIMIT_u32u8_u32(x, y) 	((uint32)((uint32)(x) * (uint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u32s16_u32(x, y)	((uint32)(MoFSrv_Lib_Mul_limit_u32s16_u32((x),(y))))
#define MoFSrv_Lib_Mul_NOLIMIT_u32u16_u32(x, y)	((uint32)((uint32)(x) * (uint32)(y)))
#define MoFSrv_Lib_Mul_NOLIMIT_u32s32_u32(x, y)	((uint32)(MoFSrv_Lib_Mul_limit_u32s32_u32((x),(y))))
#define MoFSrv_Lib_Mul_NOLIMIT_u32u32_u32(x, y)	((uint32)((uint32)(x) * (uint32)(y)))


/*********************************************************************************/
/* Division (no limitation) */
/*********************************************************************************/

/* In the following divisions limit_S16_S8 is needed because of division by 0 */
/* unlimited division s8, result is s8 */
#define MoFSrv_Lib_Div_NOLIMIT_s8s8_s8(x, y)       (MoFSrv_Lib_Div_limit_s8s8_s8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s8u8_s8(x, y)       (MoFSrv_Lib_Div_limit_s8u8_s8((x), (y)))

/* unlimited division u8, result is s8 */
#define MoFSrv_Lib_Div_NOLIMIT_u8s8_s8(x, y)       (MoFSrv_Lib_Div_limit_u8s8_s8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u8u8_s8(x, y)       (MoFSrv_Lib_Div_limit_u8u8_s8((x), (y)))

/* unlimited division s16, result is s8 */
#define MoFSrv_Lib_Div_NOLIMIT_s16s8_s8(x, y)      (MoFSrv_Lib_Div_limit_s16s8_s8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16u8_s8(x, y)      (MoFSrv_Lib_Div_limit_s16u8_s8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16s16_s8(x, y)     (MoFSrv_Lib_Div_limit_s16s16_s8((x), (y)))

/* unlimited division u16, result is s8 */
#define MoFSrv_Lib_Div_NOLIMIT_u16s8_s8(x, y)      (MoFSrv_Lib_Div_limit_u16s8_s8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16u8_s8(x, y)      (MoFSrv_Lib_Div_limit_u16u8_s8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16u16_s8(x, y)     (MoFSrv_Lib_Div_limit_u16u16_s8((x), (y)))

/* unlimited division s32, result is s8 */
#define MoFSrv_Lib_Div_NOLIMIT_s32s16_s8(x, y)     (MoFSrv_Lib_Div_limit_s32s16_s8((x), (y)))

/* unlimited division s8, result is u8 */
#define MoFSrv_Lib_Div_NOLIMIT_s8s8_u8(x, y)       (MoFSrv_Lib_Div_limit_s8s8_u8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s8u8_u8(x, y)       (MoFSrv_Lib_Div_limit_s8u8_u8((x), (y)))

/* unlimited division u8, result is u8 */
#define MoFSrv_Lib_Div_NOLIMIT_u8s8_u8(x, y)       (MoFSrv_Lib_Div_limit_u8s8_u8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u8u8_u8(x, y)       (MoFSrv_Lib_Div_limit_u8u8_u8((x), (y)))

/* unlimited division s16, result is u8 */
#define MoFSrv_Lib_Div_NOLIMIT_s16s8_u8(x, y)      (MoFSrv_Lib_Div_limit_s16s8_u8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16u8_u8(x, y)      (MoFSrv_Lib_Div_limit_s16u8_u8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16s16_u8(x, y)     (MoFSrv_Lib_Div_limit_s16s16_u8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16u16_u8(x, y)     (MoFSrv_Lib_Div_limit_s16u16_u8((x), (y)))

/* unlimited division u16, result is u8 */
#define MoFSrv_Lib_Div_NOLIMIT_u16s8_u8(x, y)      (MoFSrv_Lib_Div_limit_u16s8_u8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16u8_u8(x, y)      (MoFSrv_Lib_Div_limit_u16u8_u8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16s16_u8(x, y)     (MoFSrv_Lib_Div_limit_u16s16_u8((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16u16_u8(x, y)     (MoFSrv_Lib_Div_limit_u16u16_u8((x), (y)))

/* unlimited division u32, result is u8 */
#define MoFSrv_Lib_Div_NOLIMIT_u32u16_u8(x, y)     (MoFSrv_Lib_Div_limit_u32u16_u8((x), (y)))

/* unlimited division s16, result is s16 */
#define MoFSrv_Lib_Div_NOLIMIT_s16s8_s16(x, y)     (MoFSrv_Lib_Div_limit_s16s8_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16u8_s16(x, y)     (MoFSrv_Lib_Div_limit_s16u8_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16s16_s16(x, y)    (MoFSrv_Lib_Div_limit_s16s16_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16u16_s16(x, y)    (MoFSrv_Lib_Div_limit_s16u16_s16((x), (y)))

/* unlimited division u16, result is s16 */
#define MoFSrv_Lib_Div_NOLIMIT_u16s8_s16(x, y)     (MoFSrv_Lib_Div_limit_u16s8_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16u8_s16(x, y)     (MoFSrv_Lib_Div_limit_u16u8_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16s16_s16(x, y)    (MoFSrv_Lib_Div_limit_u16s16_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16u16_s16(x, y)    (MoFSrv_Lib_Div_limit_u16u16_s16((x), (y)))

/* unlimited division s32, result is s16 */
#define MoFSrv_Lib_Div_NOLIMIT_s32s8_s16(x, y)     (MoFSrv_Lib_Div_limit_s32s8_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u8_s16(x, y)     (MoFSrv_Lib_Div_limit_s32u8_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32s16_s16(x, y)    (MoFSrv_Lib_Div_limit_s32s16_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u16_s16(x, y)    (MoFSrv_Lib_Div_limit_s32u16_s16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32s32_s16(x, y)    (MoFSrv_Lib_Div_limit_s32s32_s16((x), (y)))

/* unlimited division u32, result is s16 */
#define MoFSrv_Lib_Div_NOLIMIT_u32u32_s16(x, y)    (MoFSrv_Lib_Div_limit_u32u32_s16((x), (y)))

/* unlimited division s16, result is u16 */
#define MoFSrv_Lib_Div_NOLIMIT_s16s8_u16(x, y)     (MoFSrv_Lib_Div_limit_s16s8_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16u8_u16(x, y)     (MoFSrv_Lib_Div_limit_s16u8_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16s16_u16(x, y)    (MoFSrv_Lib_Div_limit_s16s16_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s16u16_u16(x, y)    (MoFSrv_Lib_Div_limit_s16u16_u16((x), (y)))

/* unlimited division u16, result is u16 */
#define MoFSrv_Lib_Div_NOLIMIT_u16s8_u16(x, y)     (MoFSrv_Lib_Div_limit_u16s8_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16u8_u16(x, y)     (MoFSrv_Lib_Div_limit_u16u8_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16s16_u16(x, y)    (MoFSrv_Lib_Div_limit_u16s16_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u16u16_u16(x, y)    (MoFSrv_Lib_Div_limit_u16u16_u16((x), (y)))

/* unlimited division s32, result is u16 */
#define MoFSrv_Lib_Div_NOLIMIT_s32s8_u16(x, y)     (MoFSrv_Lib_Div_limit_s32s8_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u8_u16(x, y)     (MoFSrv_Lib_Div_limit_s32u8_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32s16_u16(x, y)    (MoFSrv_Lib_Div_limit_s32s16_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u16_u16(x, y)    (MoFSrv_Lib_Div_limit_s32u16_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32s32_u16(x, y)    (MoFSrv_Lib_Div_limit_s32s32_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u32_u16(x, y)    (MoFSrv_Lib_Div_limit_s32u32_u16((x), (y)))

/* unlimited division u32, result is u16 */
#define MoFSrv_Lib_Div_NOLIMIT_u32s8_u16(x, y)     (MoFSrv_Lib_Div_limit_u32s8_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32u8_u16(x, y)     (MoFSrv_Lib_Div_limit_u32u8_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32s16_u16(x, y)    (MoFSrv_Lib_Div_limit_u32s16_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32u16_u16(x, y)    (MoFSrv_Lib_Div_limit_u32u16_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32s32_u16(x, y)    (MoFSrv_Lib_Div_limit_u32s32_u16((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32u32_u16(x, y)    (MoFSrv_Lib_Div_limit_u32u32_u16((x), (y)))

/* unlimited division s32, result is s32 */
#define MoFSrv_Lib_Div_NOLIMIT_s32s8_s32(x, y)     (MoFSrv_Lib_Div_limit_s32s8_s32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u8_s32(x, y)     (MoFSrv_Lib_Div_limit_s32u8_s32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32s16_s32(x, y)    (MoFSrv_Lib_Div_limit_s32s16_s32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u16_s32(x, y)    (MoFSrv_Lib_Div_limit_s32u16_s32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32s32_s32(x, y)    (MoFSrv_Lib_Div_limit_s32s32_s32((x), (y)))

/* unlimited division u32, result is s32 */
#define MoFSrv_Lib_Div_NOLIMIT_u32u32_s32(x, y)    (MoFSrv_Lib_Div_limit_u32u32_s32((x), (y)))

/* unlimited division s32, result is u32 */
#define MoFSrv_Lib_Div_NOLIMIT_s32s8_u32(x, y)     (MoFSrv_Lib_Div_limit_s32s8_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u8_u32(x, y)     (MoFSrv_Lib_Div_limit_s32u8_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32s16_u32(x, y)    (MoFSrv_Lib_Div_limit_s32s16_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u16_u32(x, y)    (MoFSrv_Lib_Div_limit_s32u16_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32s32_u32(x, y)    (MoFSrv_Lib_Div_limit_s32s32_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_s32u32_u32(x, y)    (MoFSrv_Lib_Div_limit_s32u32_u32((x), (y)))

/* unlimited division u32, result is u32 */
#define MoFSrv_Lib_Div_NOLIMIT_u32s8_u32(x, y)     (MoFSrv_Lib_Div_limit_u32s8_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32u8_u32(x, y)     (MoFSrv_Lib_Div_limit_u32u8_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32s16_u32(x, y)    (MoFSrv_Lib_Div_limit_u32s16_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32u16_u32(x, y)    (MoFSrv_Lib_Div_limit_u32u16_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32s32_u32(x, y)    (MoFSrv_Lib_Div_limit_u32s32_u32((x), (y)))
#define MoFSrv_Lib_Div_NOLIMIT_u32u32_u32(x, y)    (MoFSrv_Lib_Div_limit_u32u32_u32((x), (y)))


/*********************************************************************************/
/* Limiter */
/*********************************************************************************/


/*********************************************************************************/
/* Absolute values */
/*********************************************************************************/

/* unlimited absolute value, result is s8 */
#define MoFSrv_Lib_Abs_NOLIMIT_s8_s8(x)				(MoFSrv_Lib_SrvB_Abs_S32_S8((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s16_s8(x)			(MoFSrv_Lib_SrvB_Abs_S32_S8((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s32_s8(x)			(MoFSrv_Lib_SrvB_Abs_S32_S8((sint32)(x)))

/* unlimited absolute value, result is u8 */
#define MoFSrv_Lib_Abs_NOLIMIT_s8_u8(x)				(MoFSrv_Lib_SrvB_Abs_S32_U8((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s16_u8(x)			(MoFSrv_Lib_SrvB_Abs_S32_U8((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s32_u8(x)			(MoFSrv_Lib_SrvB_Abs_S32_U8((sint32)(x)))

/* unlimited absolute value, result is s16 */
#define MoFSrv_Lib_Abs_NOLIMIT_s8_s16(x)			(MoFSrv_Lib_SrvB_Abs_S32_S16((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s16_s16(x)			(MoFSrv_Lib_SrvB_Abs_S32_S16((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s32_s16(x)			(MoFSrv_Lib_SrvB_Abs_S32_S16((sint32)(x)))

/* unlimited absolute value, result is u16 */
#define MoFSrv_Lib_Abs_NOLIMIT_s8_u16(x)			(MoFSrv_Lib_SrvB_Abs_S32_U16((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s16_u16(x)			(MoFSrv_Lib_SrvB_Abs_S32_U16((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s32_u16(x)			(MoFSrv_Lib_SrvB_Abs_S32_U16((sint32)(x)))

/* unlimited absolute value, result is s32 */
#define MoFSrv_Lib_Abs_NOLIMIT_s8_s32(x)			(MoFSrv_Lib_SrvB_Abs_S32_S32((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s16_s32(x)			(MoFSrv_Lib_SrvB_Abs_S32_S32((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s32_s32(x)			(MoFSrv_Lib_SrvB_Abs_S32_S32((sint32)(x)))

/* unlimited absolute value, result is u32 */
#define MoFSrv_Lib_Abs_NOLIMIT_s8_u32(x)			(MoFSrv_Lib_SrvB_Abs_S32_U32((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s16_u32(x)			(MoFSrv_Lib_SrvB_Abs_S32_U32((sint32)(x)))
#define MoFSrv_Lib_Abs_NOLIMIT_s32_u32(x)			(MoFSrv_Lib_SrvB_Abs_S32_U32((sint32)(x)))


/*********************************************************************************/
/* Negation unlimited*/
/*********************************************************************************/

/* unlimited negation, result is s8 */
#define MoFSrv_Lib_Neg_NOLIMIT_s8_s8(x)		(MoFSrv_Lib_SrvB_Neg_S32_S8((sint32)(x)))

/* unlimited negation, result is s16 */
#define MoFSrv_Lib_Neg_NOLIMIT_s8_s16(x)	(MoFSrv_Lib_SrvB_Neg_S32_S16((sint32)(x)))
#define MoFSrv_Lib_Neg_NOLIMIT_u8_s16(x)	(MoFSrv_Lib_SrvB_Neg_S32_S16((sint32)(x)))
#define MoFSrv_Lib_Neg_NOLIMIT_s16_s16(x)	(MoFSrv_Lib_SrvB_Neg_S32_S16((sint32)(x)))

/* unlimited negation, result is s32 */
#define MoFSrv_Lib_Neg_NOLIMIT_s8_s32(x)	(MoFSrv_Lib_SrvB_Neg_S32_S32((sint32)(x)))
#define MoFSrv_Lib_Neg_NOLIMIT_u8_s32(x)	(MoFSrv_Lib_SrvB_Neg_S32_S32((sint32)(x)))
#define MoFSrv_Lib_Neg_NOLIMIT_s16_s32(x)	(MoFSrv_Lib_SrvB_Neg_S32_S32((sint32)(x)))
#define MoFSrv_Lib_Neg_NOLIMIT_u16_s32(x)	(MoFSrv_Lib_SrvB_Neg_S32_S32((sint32)(x)))
#define MoFSrv_Lib_Neg_NOLIMIT_s32_s32(x)	(MoFSrv_Lib_SrvB_Neg_S32_S32((sint32)(x)))


/*********************************************************************************/
/* Multiplication with additional right shift (no limitation) */
/*********************************************************************************/

/* unlimited mulShiftRight s8, result is s16 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_s8s16_s16(x, y, shift) 	((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s8u16_s16(x, y, shift) 	((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u8, result is s16 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_u8s16_s16(x, y, shift) 	((sint16)(((sint32)(y) * (sint32)(x)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u8u16_s16(x, y, shift)	((sint16)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight s16, result is s16 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16s8_s16(x, y, shift) 	((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16u8_s16(x, y, shift) 	((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16s16_s16(x, y, shift) 	((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16u16_s16(x, y, shift)	((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u16, result is s16 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16s8_s16(x, y, shift) 	((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16u8_s16(x, y, shift)	((sint16)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16s16_s16(x, y, shift)	((sint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16u16_s16(x, y, shift)	((sint16)(((uint32)(x) * (uint32)(y)) >> (shift)))


/* unlimited mulShiftRight s8, result is u16 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_s8s16_u16(x, y, shift)   ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s8u16_u16(x, y, shift) 	((uint16)(((uint32)(y) * (uint32)(x)) >> (shift)))

/* unlimited mulShiftRight u8, result is u16 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_u8s16_u16(x, y, shift) 	((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u8u16_u16(x, y, shift) 	((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight s16, result is u16 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16s8_u16(x, y, shift)   ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16u8_u16(x, y, shift) 	((uint16)(((uint32)(y) * (uint32)(x)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16s16_u16(x, y, shift)  ((uint16)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16u16_u16(x, y, shift) 	((uint16)(((uint32)(y) * (uint32)(x)) >> (shift)))

/* unlimited mulShiftRight u16, result is u16 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16s8_u16(x, y, shift) 	((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16u8_u16(x, y, shift) 	((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16s16_u16(x, y, shift) 	((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16u16_u16(x, y, shift) 	((uint16)(((uint32)(x) * (uint32)(y)) >> (shift)))


/* unlimited mulShiftRight s8, result is s32 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_s8s16_s32(x, y, shift)	((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s8u16_s32(x, y, shift)   ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u8, result is s32 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_u8s16_s32(x, y, shift) 	((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u8u16_s32(x, y, shift)	((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight s16, result is s32 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16s8_s32(x, y, shift)	((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16u8_s32(x, y, shift) 	((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16s16_s32(x, y, shift)	((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_s16u16_s32(x, y, shift)  ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))

/* unlimited mulShiftRight u16, result is s32 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16s8_s32(x, y, shift)	((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16u8_s32(x, y, shift)	((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16s16_s32(x, y, shift)  ((sint32)(((sint32)(x) * (sint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16u16_s32(x, y, shift)	((sint32)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight u8, result is u32 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_u8u16_u32(x, y, shift)   ((uint32)(((uint32)(x) * (uint32)(y)) >> (shift)))

/* unlimited mulShiftRight u16, result is u32 */
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16u8_u32(x, y, shift)   ((uint32)(((uint32)(x) * (uint32)(y)) >> (shift)))
#define MoFSrv_Lib_MulShRight_NOLIMIT_u16u16_u32(x, y, shift)  ((uint32)(((uint32)(x) * (uint32)(y)) >> (shift)))

/*********************************************************************************/
/* Multiplication with additional division (no limitation) */
/*********************************************************************************/

/* limited MultiplicationDivision,  result is s16 */

#define MoFSrv_Lib_MulDiv_NOLIMIT_s8s16s8_s16(x, y, z)     (MoFSrv_Lib_MulDiv_limit_s8s16s8_s16((x), (y), (z))) /* limiting routine (less code) */
#define MoFSrv_Lib_MulDiv_NOLIMIT_s8s16s16_s16(x, y, z)    (MoFSrv_Lib_MulDiv_limit_s8s16s16_s16((x), (y), (z))) /* limiting routine (less code) */

#define MoFSrv_Lib_MulDiv_NOLIMIT_s16s8s8_s16(x, y, z)     (MoFSrv_Lib_MulDiv_limit_s16s8s8_s16((x), (y), (z))) /* limiting routine (less code) */
#define MoFSrv_Lib_MulDiv_NOLIMIT_s16s8s16_s16(x, y, z)    (MoFSrv_Lib_MulDiv_limit_s16s8s16_s16((x), (y), (z))) /* limiting routine (less code) */

#define MoFSrv_Lib_MulDiv_NOLIMIT_s16s16s8_s16(x, y, z)    (MoFSrv_Lib_MulDiv_limit_s16s16s8_s16((x), (y), (z))) /* limiting routine (less code) */
#define MoFSrv_Lib_MulDiv_NOLIMIT_s16s16s16_s16(x, y, z)   (MoFSrv_Lib_MulDiv_limit_s16s16s16_s16((x), (y), (z))) /* limiting routine (less code) */

/* limited MultiplicationDivision,  result is u16 */
#define MoFSrv_Lib_MulDiv_NOLIMIT_u8u16u8_u16(x, y, z)     (MoFSrv_Lib_MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */
#define MoFSrv_Lib_MulDiv_NOLIMIT_u8u16u16_u16(x, y, z)    (MoFSrv_Lib_MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */

#define MoFSrv_Lib_MulDiv_NOLIMIT_u16u8u8_u16(x, y, z)     (MoFSrv_Lib_MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */
#define MoFSrv_Lib_MulDiv_NOLIMIT_u16u8u16_u16(x, y, z)    (MoFSrv_Lib_MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */

#define MoFSrv_Lib_MulDiv_NOLIMIT_u16u16u8_u16(x, y, z)    (MoFSrv_Lib_MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */
#define MoFSrv_Lib_MulDiv_NOLIMIT_u16u16u16_u16(x, y, z)   (MoFSrv_Lib_MulDiv_limit_u16u16u16_u16((x), (y), (z)))   /* limiting routine (less code) */


/*********************************************************************************/
/* Median */
/*********************************************************************************/

/*********************************************************************************/
/* Comparators */
/*********************************************************************************/

/* GreaterZero */


#endif /* #ifndef _MOFSRV_LIB_CODEGEN_NOLIMIT_H */
