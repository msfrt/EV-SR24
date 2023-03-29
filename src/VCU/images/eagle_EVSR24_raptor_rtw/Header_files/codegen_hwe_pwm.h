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
 * $Filename__:codegen_hwe_pwm.h$
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
 * $User______:PRG2SI$
 * $Date______:03.01.2012$
 * $Class_____:SWHDR$
 * $Name______:codegen_hwe_pwm$
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
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.0.0; 0     03.01.2012 PRG2SI
 *   
 * 
 * $
 *
 ***************************************************************************************************
</RBHead>*/

#ifndef _CODEGEN_HWE_PWM_H
#define _CODEGEN_HWE_PWM_H

#include "pwm.h"

/*********************************************************************************/
/* PWM_Out                                                                       */
/*********************************************************************************/

#define  PWM_OUT_IMPL_PWMOut(signal, duty, appar)  \
                      Pwm_Out((signal), (duty), (&(appar)))
#define  PWM_OUT_IMPL_PWM_Out(signal, duty, appar)  \
                      Pwm_Out((signal), (duty), (&(appar)))
#define  PWM_OutIMPL(signal, duty, appar)  \
                      Pwm_Out((signal), (duty), (&(appar)))

/*********************************************************************************/
/* PWM_InPer                                                                     */
/*********************************************************************************/

#ifndef _PWMIN_RESULTPER_T_IMPL_
#define _PWMIN_RESULTPER_T_IMPL_
typedef struct
{
   uint8 Pwmin_stSignal;
   uint32 Pwmin_tiPeriod;
} PWMIN_RESULTPER_T_IMPL;
#endif /* _PWMIN_RESULTPER_T_IMPL_ */

INLINE_FUNCTION void PWM_INPER_IMPL_PwmInPer(uint32 Signalname, PWMIN_RESULTPER_T_IMPL* xResult_ps);
INLINE_FUNCTION void PWM_INPER_IMPL_PwmInPer(uint32 Signalname, PWMIN_RESULTPER_T_IMPL* xResult_ps)
{
  Pwmin_ResultPer_t tmp_xResult_ps;

  Pwm_InPer ((uint)(Signalname), &tmp_xResult_ps);

  xResult_ps->Pwmin_tiPeriod    = tmp_xResult_ps.Pwmin_tiPeriod;
  xResult_ps->Pwmin_stSignal    = tmp_xResult_ps.Pwmin_stSignal;
}

/*********************************************************************************/
/* PWM_In                                                                        */
/*********************************************************************************/

#ifndef _PWMIN_RESULT_T_IMPL_
#define _PWMIN_RESULT_T_IMPL_
typedef struct
{
   uint32 Pwmin_rDutycycle;
   uint8 Pwmin_stSignal;
   uint32 Pwmin_tiHighdur;
   uint32 Pwmin_tiPeriod;
} PWMIN_RESULT_T_IMPL;
#endif /* _PWMIN_RESULT_T_IMPL_ */

INLINE_FUNCTION void PWM_IN_IMPL_PwmIn(uint32 Signalname, PWMIN_RESULT_T_IMPL* xResult_ps);
INLINE_FUNCTION void PWM_IN_IMPL_PwmIn(uint32 Signalname, PWMIN_RESULT_T_IMPL* xResult_ps)
{
  Pwmin_Result_t tmp_xResult_ps;

  Pwm_In ((uint)(Signalname), &tmp_xResult_ps);

  xResult_ps->Pwmin_rDutycycle  = tmp_xResult_ps.Pwmin_rDutycycle;
  xResult_ps->Pwmin_tiHighdur   = tmp_xResult_ps.Pwmin_tiHighdur;
  xResult_ps->Pwmin_tiPeriod    = tmp_xResult_ps.Pwmin_tiPeriod;
  xResult_ps->Pwmin_stSignal    = tmp_xResult_ps.Pwmin_stSignal;
}

/*********************************************************************************/
/* PWM_InXt                                                                      */
/*********************************************************************************/

#ifndef _PWMIN_RESULTXT_T_IMPL_
#define _PWMIN_RESULTXT_T_IMPL_
typedef struct
{
   uint32 Pwmin_ctPeriod;
   uint32 Pwmin_rDutycycle;
   uint8 Pwmin_stSignal;
   uint32 Pwmin_tiHighdur;
   uint32 Pwmin_tiPeriod;
   uint32 Pwmin_tiTrandur;
} PWMIN_RESULTXT_T_IMPL;
#endif /* _PWMIN_RESULTXT_T_IMPL_ */

INLINE_FUNCTION void PWM_INXT_IMPL_PwmInXt(uint32 Signalname, PWMIN_RESULTXT_T_IMPL* xResult_ps);
INLINE_FUNCTION void PWM_INXT_IMPL_PwmInXt(uint32 Signalname, PWMIN_RESULTXT_T_IMPL* xResult_ps)
{
  Pwmin_ResultXt_t tmp_xResult_ps;

  Pwm_InXt ((uint)(Signalname), &tmp_xResult_ps);

  xResult_ps->Pwmin_rDutycycle = tmp_xResult_ps.Pwmin_rDutycycle;
  xResult_ps->Pwmin_tiHighdur   = tmp_xResult_ps.Pwmin_tiHighdur;
  xResult_ps->Pwmin_tiPeriod    = tmp_xResult_ps.Pwmin_tiPeriod;
  xResult_ps->Pwmin_tiTrandur   = tmp_xResult_ps.Pwmin_tiTrandur;
  xResult_ps->Pwmin_ctPeriod    = tmp_xResult_ps.Pwmin_ctPeriod;
  xResult_ps->Pwmin_stSignal    = tmp_xResult_ps.Pwmin_stSignal;
}

#endif  /*#ifndef _CODEGEN_HWE_PWM_H*/

