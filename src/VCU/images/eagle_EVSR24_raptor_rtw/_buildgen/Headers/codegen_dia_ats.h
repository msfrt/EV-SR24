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
 * $Filename__:codegen_dia_ats.h$
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
 * $Date______:08.10.2013$
 * $Class_____:SWHDR$
 * $Name______:codegen_dia_ats$
 * $Variant___:2.9.0$
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
 * 2.9.0; 0     08.10.2013 DAJ2KOR
 *   To support ASL 6.2.22  released with ASCET 6.1.4 RB-DGS 1.0
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_DIA_ATS_H
#define _CODEGEN_DIA_ATS_H

/*************************************************************************/
/* ATSADAPT                                                              */
/*************************************************************************/

#define ATSADAPT_GETSTATUSACTIVE_IMPL_active(numActrID)                       \
        ATSADAPT_GetStatusActive((numActrID))

#define ATSADAPT_SUBSVALS8_S8_valS8(ActrVal, numActrID)                       \
        ATSADAPT_SubsValS8((ActrVal),(numActrID))

#define ATSADAPT_SUBSVALS16_S16_valS16(ActrVal, numActrID)                    \
        ATSADAPT_SubsValS16((ActrVal),(numActrID))

#define ATSADAPT_SUBSVALU8_U8_valU8(ActrVal, numActrID)                       \
        ATSADAPT_SubsValU8((ActrVal),(numActrID))

#define ATSADAPT_SUBSVALU16_U16_valU16(ActrVal, numActrID)                    \
        ATSADAPT_SubsValU16((ActrVal),(numActrID))

/*************************************************************************/
/* ATS                                                                   */
/*************************************************************************/

/* ATS_GetStatus */
#define ATS_GetStatusIMPL(numActrID)                                          \
        ATS_GetStatus((numActrID))
#define ATS_GETSTATUS_IMPL_ATS_GetStatus(numActrID)                           \
        ATS_GetStatus((numActrID))

/* ATS_SubsVal_ASCETU8 */
#define ATS_SubsValU8(ActrValU8, numActrID)                                   \
        ATS_SubsVal_ASCETU8((ActrValU8), (numActrID))
#define ATS_SUBSVAL_U8_ATS_SubsVal(ActrValU8, numActrID)                      \
        ATS_SubsVal_ASCETU8((ActrValU8), (numActrID))

/* ATS_SubsVal_ASCETS16 */
#define ATS_SubsValS16(ActrValS16, numActrID)                                 \
        ATS_SubsVal_ASCETS16((ActrValS16), (numActrID))
#define ATS_SUBSVAL_S16_ATS_SubsVal(ActrValS16, numActrID)                    \
        ATS_SubsVal_ASCETS16((ActrValS16), (numActrID))

		/* ATS_SubsVal_ASCETU16 */
#define ATS_SubsValU16(ActrValU16, numActrID)                                   \
        ATS_SubsVal_ASCETU16((ActrValU16), (numActrID))
#define ATS_SUBSVAL_U16_ATS_SubsVal(ActrValU16, numActrID)                      \
        ATS_SubsVal_ASCETU16((ActrValU16), (numActrID))

/* ATS_SubsVal_ASCETS8 */
#define ATS_SubsValS8(ActrValS8, numActrID)                                 \
        ATS_SubsVal_ASCETS8((ActrValS8), (numActrID))
#define ATS_SUBSVAL_S8_ATS_SubsVal(ActrValS8, numActrID)                    \
        ATS_SubsVal_ASCETS8((ActrValS8), (numActrID))
		
/* ATS_UpdActrVal8 */
#define ATS_UpdActrValU8(ActrValU8, numActrID)                                \
        ATS_UpdActrVal8((ActrValU8), (numActrID))
#define ATS_UPDACTRVAL_U8_ATS_UpdActrVal(ActrValU8, numActrID)                \
        ATS_UpdActrVal8((ActrValU8), (numActrID))

/* ATS_UpdActrVal */
#define ATS_UpdActrValS16(ActrValS16, numActrID)                              \
        ATS_UpdActrVal((ActrValS16), (numActrID))
#define ATS_UPDACTRVAL_S16_ATS_UpdActrVal(ActrValS16, numActrID)              \
        ATS_UpdActrVal((ActrValS16), (numActrID))

/* ATS_UpdEnaCond */
#define ATS_UpdEnaCondIMPL(state, numActrlID)\
		ATS_UpdEnaCond((state), (numActrlID))
#define ATS_UPDENACOND_IMPL_ATS_UpdEnaCond(state, numActrlID)\
		ATS_UpdEnaCond((state), (numActrlID))	

#endif  /*#ifndef _CODEGEN_DIA_ATS_H*/

