#ifndef _UEGO_CJ135IPMPEVAL_DAT_H
#define _UEGO_CJ135IPMPEVAL_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter UEGO_facIpDeltaFltConst_C */
#ifndef _UEGO_facIpDeltaFltConst_C_DEF
#define _UEGO_facIpDeltaFltConst_C_DEF
#define UEGO_facIpDeltaFltConst_CM UEGO_facIpDeltaFltConst_C
#endif /* _UEGO_facIpDeltaFltConst_C_DEF */

/* Defined Parameter UEGO_facIPmpRawFltConst_C */
#ifndef _UEGO_facIPmpRawFltConst_C_DEF
#define _UEGO_facIPmpRawFltConst_C_DEF
#define UEGO_facIPmpRawFltConst_CM UEGO_facIPmpRawFltConst_C
#endif /* _UEGO_facIPmpRawFltConst_C_DEF */

/* Defined Parameter UEGO_facIPmpSegFltConst_C */
#ifndef _UEGO_facIPmpSegFltConst_C_DEF
#define _UEGO_facIPmpSegFltConst_C_DEF
#define UEGO_facIPmpSegFltConst_CM UEGO_facIPmpSegFltConst_C
#endif /* _UEGO_facIPmpSegFltConst_C_DEF */

/* Defined Parameter UEGO_facRCodFltConst_C */
#ifndef _UEGO_facRCodFltConst_C_DEF
#define _UEGO_facRCodFltConst_C_DEF
#define UEGO_facRCodFltConst_CM UEGO_facRCodFltConst_C
#endif /* _UEGO_facRCodFltConst_C_DEF */

/* Defined Parameter UEGO_facUgxFltConst_C */
#ifndef _UEGO_facUgxFltConst_C_DEF
#define _UEGO_facUgxFltConst_C_DEF
#define UEGO_facUgxFltConst_CM UEGO_facUgxFltConst_C
#endif /* _UEGO_facUgxFltConst_C_DEF */

/* Defined Parameter UEGO_facUp0FltConst_C */
#ifndef _UEGO_facUp0FltConst_C_DEF
#define _UEGO_facUp0FltConst_C_DEF
#define UEGO_facUp0FltConst_CM UEGO_facUp0FltConst_C
#endif /* _UEGO_facUp0FltConst_C_DEF */

/* Defined Parameter UEGO_resRCrv_C */
#ifndef _UEGO_resRCrv_C_DEF
#define _UEGO_resRCrv_C_DEF
#define UEGO_resRCrv_CM UEGO_resRCrv_C
#endif /* _UEGO_resRCrv_C_DEF */

/* Defined Parameter UEGO_resRMeas_C */
#ifndef _UEGO_resRMeas_C_DEF
#define _UEGO_resRMeas_C_DEF
#define UEGO_resRMeas_CM UEGO_resRMeas_C
#endif /* _UEGO_resRMeas_C_DEF */

/* Defined Parameter UEGO_resRRef_C */
#ifndef _UEGO_resRRef_C_DEF
#define _UEGO_resRRef_C_DEF
#define UEGO_resRRef_CM UEGO_resRRef_C
#endif /* _UEGO_resRRef_C_DEF */

/* Defined Parameter UEGO_resRSerl_C */
#ifndef _UEGO_resRSerl_C_DEF
#define _UEGO_resRSerl_C_DEF
#define UEGO_resRSerl_CM UEGO_resRSerl_C
#endif /* _UEGO_resRSerl_C_DEF */

/* Defined Parameter UEGO_stCJ135IPmpEval_C */
#ifndef _UEGO_stCJ135IPmpEval_C_DEF
#define _UEGO_stCJ135IPmpEval_C_DEF
#define UEGO_stCJ135IPmpEval_CM UEGO_stCJ135IPmpEval_C
#endif /* _UEGO_stCJ135IPmpEval_C_DEF */

/* Defined Parameter UEGO_tiDlyIPmpVld_C */
#ifndef _UEGO_tiDlyIPmpVld_C_DEF
#define _UEGO_tiDlyIPmpVld_C_DEF
#define UEGO_tiDlyIPmpVld_CM UEGO_tiDlyIPmpVld_C
#endif /* _UEGO_tiDlyIPmpVld_C_DEF */

/* Defined Parameter UEGO_tiSegLngthFilCutOff_C */
#ifndef _UEGO_tiSegLngthFilCutOff_C_DEF
#define _UEGO_tiSegLngthFilCutOff_C_DEF
#define UEGO_tiSegLngthFilCutOff_CM UEGO_tiSegLngthFilCutOff_C
#endif /* _UEGO_tiSegLngthFilCutOff_C_DEF */

/* Defined Parameter UEGO_tiSmoothIPmp_C */
#ifndef _UEGO_tiSmoothIPmp_C_DEF
#define _UEGO_tiSmoothIPmp_C_DEF
#define UEGO_tiSmoothIPmp_CM UEGO_tiSmoothIPmp_C
#endif /* _UEGO_tiSmoothIPmp_C_DEF */

/* Defined Parameter UEGO_tiSustIPmpVld_C */
#ifndef _UEGO_tiSustIPmpVld_C_DEF
#define _UEGO_tiSustIPmpVld_C_DEF
#define UEGO_tiSustIPmpVld_CM UEGO_tiSustIPmpVld_C
#endif /* _UEGO_tiSustIPmpVld_C_DEF */

/* Defined Parameter UEGO_resRFe_C */
#ifndef _UEGO_resRFe_C_DEF
#define _UEGO_resRFe_C_DEF
#define UEGO_resRFe_CM UEGO_resRFe_C
#endif /* _UEGO_resRFe_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */


/* ++++++++++++++++++++ Class EdgeRisingNoMem ++++++++++++++++++++++ */
 
/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _EDGERISINGNOMEM_U8_
#define _EDGERISINGNOMEM_U8_

/* -- Wrapper of Class EdgeRisingNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable oldSignal */
   uint8 oldSignal;

} EDGERISINGNOMEM_U8;

#endif /* _EDGERISINGNOMEM_U8_ */


/* ++++++++++++++++++++ Class DigitalLowpass ++++++++++++++++++++++ */
 
/* -- Implementation R32 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_R32_
#define _DIGITALLOWPASS_R32_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   real32 memory;

} DIGITALLOWPASS_R32;

#endif /* _DIGITALLOWPASS_R32_ */

/* -- Implementation S16 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_S16_
#define _DIGITALLOWPASS_S16_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   sint32 memory;

} DIGITALLOWPASS_S16;

#endif /* _DIGITALLOWPASS_S16_ */

/* -- Implementation S8 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_S8_
#define _DIGITALLOWPASS_S8_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   sint16 memory;

} DIGITALLOWPASS_S8;

#endif /* _DIGITALLOWPASS_S8_ */

/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_U16_
#define _DIGITALLOWPASS_U16_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   uint32 memory;

} DIGITALLOWPASS_U16;

#endif /* _DIGITALLOWPASS_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_U8_
#define _DIGITALLOWPASS_U8_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   uint16 memory;

} DIGITALLOWPASS_U8;

#endif /* _DIGITALLOWPASS_U8_ */


/* ++++++++++++++++++++ Class TurnOffDelayVariableNoMem ++++++++++++++++++++++ */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAYVARIABLENOMEM_U16_
#define _TURNOFFDELAYVARIABLENOMEM_U16_

/* -- Wrapper of Class TurnOffDelayVariableNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   uint16 time;

} TURNOFFDELAYVARIABLENOMEM_U16;

#endif /* _TURNOFFDELAYVARIABLENOMEM_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAYVARIABLENOMEM_U8_
#define _TURNOFFDELAYVARIABLENOMEM_U8_

/* -- Wrapper of Class TurnOffDelayVariableNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   uint8 time;

} TURNOFFDELAYVARIABLENOMEM_U8;

#endif /* _TURNOFFDELAYVARIABLENOMEM_U8_ */


/* ++++++++++++++++++++ Class TurnOnDelayVariableNoMem ++++++++++++++++++++++ */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNONDELAYVARIABLENOMEM_U16_
#define _TURNONDELAYVARIABLENOMEM_U16_

/* -- Wrapper of Class TurnOnDelayVariableNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   uint16 time;

} TURNONDELAYVARIABLENOMEM_U16;

#endif /* _TURNONDELAYVARIABLENOMEM_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNONDELAYVARIABLENOMEM_U8_
#define _TURNONDELAYVARIABLENOMEM_U8_

/* -- Wrapper of Class TurnOnDelayVariableNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   uint8 time;

} TURNONDELAYVARIABLENOMEM_U8;

#endif /* _TURNONDELAYVARIABLENOMEM_U8_ */


/* ++++++++++++++++++++ Class UEGO_CJ135IPmpEvalClass ++++++++++++++++++++++ */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135IPMPEVALCLASS_IMPL_
#define _UEGO_CJ135IPMPEVALCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135IPmpEvalClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable UEGO_bbIPmpEvalClsReIni_5ms1 */
   uint8 UEGO_bbIPmpEvalClsReIni_5ms1;

   /* Variable UEGO_bbIPmpEvalClsReIni_5ms2 */
   uint8 UEGO_bbIPmpEvalClsReIni_5ms2;

   /* Variable UEGO_bbIPmpEvalClsReIni_5ms3 */
   uint8 UEGO_bbIPmpEvalClsReIni_5ms3;

   /* Variable UEGO_bbIPmpEvalClsReIni_5ms5 */
   uint8 UEGO_bbIPmpEvalClsReIni_5ms5;

   /* Variable cntrSum */
   uint8 cntrSum;

   /* Variable facCrvCor */
   uint16 facCrvCor;

   /* Variable flgIPLrnAllwd */
   /* Variable flgIPLrnVld */
   /* Variable flgIPTM2RLst */
   /* Variable flgIPmpPacVld */
   /* Variable flgIPmpSegFull */
   /* Variable flgIPmpSegStrtd */
   /* Variable flgIPmpSegVld */
   /* Variable flgNewIPmpRefCorrn */
   /* Variable flgNewIPmpRefCorrnOld */
   /* Variable flgNewUn0 */
   /* Variable flgNewUp0 */
   /* Variable flgRCodStrtd */
   /* Variable flgRParlStrtd */
   /* Variable flgRefpatChngd */
   /* Variable flgSteerpatChngd */
   /* Variable flgSteerpatChngdDlyd */
   /* Variable flgSteerpatZeroOld */
   /* Variable flgUgaZ1Strtd */
   /* Variable flgUgaZ2Strtd */
   /* Variable flgUgiZ1Strtd */
   /* Variable flgUgiZ2Strtd */
   /* Variable flgUp0Z0Strtd */
   /* Variable flgUp0Z1Strtd */
   /* Variable flgUp0Z2Strtd */
   /* Variable flgfacCrvCorrnVld */
   /* Variable iIPmpPacAvrg */
   sint16 iIPmpPacAvrg;

   /* Variable iIPmpRawLst */
   sint16 iIPmpRawLst;

   /* Variable iIPmpRef */
   sint16 iIPmpRef;

   /* Variable iIPmpRefCorrn */
   sint16 iIPmpRefCorrn;

   /* Variable iIPmpSegAvrg */
   sint16 iIPmpSegAvrg;

   /* Variable iIPmpSegAvrgWoCrvCorrn */
   sint16 iIPmpSegAvrgWoCrvCorrn;

   /* Variable iIPmpSegAvrgWoCrvCorrnDelta */
   sint16 iIPmpSegAvrgWoCrvCorrnDelta;

   /* Variable iIPmpSegPartSumAry */
   sint32 iIPmpSegPartSumAry[4];

   /* Variable iIPmpSegSum */
   sint32 iIPmpSegSum;

   /* Variable iIPmpSegWoCrvCorrn */
   sint16 iIPmpSegWoCrvCorrn;

   /* Variable numCtrSegPartSumAry */
   uint8 numCtrSegPartSumAry[4];

   /* Variable numRefPatSet */
   uint8 numRefPatSet;

   /* Variable numSegPartMax */
   uint8 numSegPartMax;

   /* Variable numSegPartPosCurr */
   uint8 numSegPartPosCurr;

   /* Variable ratIPmpAvrg */
   sint16 ratIPmpAvrg;

   /* Variable stIPmpOK */
   uint16 stIPmpOK;

   /* Variable stIPmpTM2L */
   uint16 stIPmpTM2L;

   /* Variable stIPmpTM2R */
   uint16 stIPmpTM2R;

   /* Variable stRefPat */
   uint16 stRefPat;

   /* Variable stRefPatOld */
   uint16 stRefPatOld;

   /* Variable stSteerPat */
   uint16 stSteerPat;

   /* Variable stSteerPatOld */
   uint16 stSteerPatOld;

   /* Variable uGk */
   sint16 uGk;

   /* Variable uIpcal */
   sint16 uIpcal;

   /* Variable uUlsf */
   sint16 uUlsf[15];

   /* Variable uUn0PacAvrgLst */
   sint16 uUn0PacAvrgLst;

   /* Variable uUn0PacFil */
   sint16 uUn0PacFil;

   /* Variable uUn0PacFilLst */
   sint16 uUn0PacFilLst;

   /* Variable uUp0SegSum */
   sint32 uUp0SegSum;

   /* Instance of Embedded Class EDGERISINGNOMEM_U8 */
   EDGERISINGNOMEM_U8 ERNM_ModNotNormal;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp10_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp11_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp12_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp13_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp14_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp15_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp1_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp2_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp3_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp4_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp5_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp6_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp7_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp8_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp9_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUgaZ1ElecCor_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUgaZ2ElecCor_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUgiZ1ElecCor_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUgiZ2ElecCor_DL;

   /* Instance of Embedded Class TURNOFFDELAYVARIABLENOMEM_U16 */
   TURNOFFDELAYVARIABLENOMEM_U16 SteerpatChngdTOFFVNM_I;

   /* Instance of Embedded Class TURNOFFDELAYVARIABLENOMEM_U16 */
   TURNOFFDELAYVARIABLENOMEM_U16 TOffDlyIPmpVld;

   /* Instance of Embedded Class TURNONDELAYVARIABLENOMEM_U16 */
   TURNONDELAYVARIABLENOMEM_U16 TOnDlyIPmpVld;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 iIPmpRawAvrg_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 iIPmpSegAvrgWoCrvCorrn_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 iIPmpSegAvrg_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 resRCodFlt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 resrRParlFlt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 uUp0Z0Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 uUp0Z1Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 uUp0Z2Flt_DL;

} UEGO_CJ135IPMPEVALCLASS_IMPL;

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 7))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 7))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 7)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 6))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 6))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 6)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0 : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0 : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 6))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 6))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 6)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld)

#endif /* _UEGO_CJ135IPMPEVALCLASS_IMPL_ */


/* ++++++++++++++++++++ Class UEGO_CJ135CalcElecCorrnClass ++++++++++++++++++++++ */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135CALCELECCORRNCLASS_IMPL_
#define _UEGO_CJ135CALCELECCORRNCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135CalcElecCorrnClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable UEGO_bbCalcElecCorrnClsReIni5ms */
   uint8 UEGO_bbCalcElecCorrnClsReIni5ms;

   /* Variable flgFKal1Strtd */
   /* Variable flgFKal2Strtd */
   /* Variable flgFKal3Strtd */
   /* Variable flgnCmnMod1Strtd */
   /* Variable flgnCmnMod2Strtd */
   /* Variable flgnumUref22Strtd */
   /* Variable numUref1Corrd */
   sint16 numUref1Corrd;

   /* Variable numUref21Corrd */
   sint16 numUref21Corrd;

   /* Variable numUref22Corrd */
   sint16 numUref22Corrd;

   /* Variable numUref3Corrd */
   sint16 numUref3Corrd;

   /* Variable uCmnMod1 */
   sint16 uCmnMod1;

   /* Variable uCmnMod2 */
   sint16 uCmnMod2;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal1Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal2Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal3Flt_DL;

} UEGO_CJ135CALCELECCORRNCLASS_IMPL;

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd)

#endif /* _UEGO_CJ135CALCELECCORRNCLASS_IMPL_ */


/* ++++++++++++++++++++ Class UEGO_CJ135IPmpEval5msIfClass ++++++++++++++++++++++ */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135IPMPEVAL5MSIFCLASS_IMPL_
#define _UEGO_CJ135IPMPEVAL5MSIFCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135IPmpEval5msIfClass in Addressschema SlowNoReIni -- */
typedef struct
{
   /* Variable flgCJ135RstCalib */
   bool flgCJ135RstCalib;

   /* Variable flgCJ135RstMeas */
   bool flgCJ135RstMeas;

   /* Variable flgIPmpActvd */
   bool flgIPmpActvd;

   /* Variable flgLoupeN */
   bool flgLoupeN;

   /* Variable flgLoupeP */
   bool flgLoupeP;

   /* Variable flgNewPac */
   bool flgNewPac;

   /* Variable flgNewUn0 */
   bool flgNewUn0;

   /* Variable flgURIA */
   bool flgURIA;

   /* Variable flgUoffipe1Z1Strtd */
   bool flgUoffipe1Z1Strtd;

   /* Variable flgUoffipe1Z2Strtd */
   bool flgUoffipe1Z2Strtd;

   /* Variable flgUoffipe2Z1Strtd */
   bool flgUoffipe2Z1Strtd;

   /* Variable flgUoffipe2Z2Strtd */
   bool flgUoffipe2Z2Strtd;

   /* Variable flgUoffvcc1Strtd */
   bool flgUoffvcc1Strtd;

   /* Variable flgUoffvcc2Strtd */
   bool flgUoffvcc2Strtd;

   /* Variable flgUoffvcc3Strtd */
   bool flgUoffvcc3Strtd;

   /* Variable flgUoffvcci2Strtd */
   bool flgUoffvcci2Strtd;

   /* Variable iIPmpSegWoCrvCorrn */
   sint16 iIPmpSegWoCrvCorrn;

   /* Variable iIsq */
   sint16 iIsq;

   /* Variable iIsqr */
   sint16 iIsqr;

   /* Variable numCtrBlckn */
   uint8 numCtrBlckn;

   /* Variable numModeMeas */
   uint8 numModeMeas;

   /* Variable numUoffgnd2 */
   sint16 numUoffgnd2;

   /* Variable numUoffgnd3 */
   sint16 numUoffgnd3;

   /* Variable numUoffipe1Z1 */
   sint16 numUoffipe1Z1;

   /* Variable numUoffipe1Z2 */
   sint16 numUoffipe1Z2;

   /* Variable numUoffipe2Z1 */
   sint16 numUoffipe2Z1;

   /* Variable numUoffipe2Z2 */
   sint16 numUoffipe2Z2;

   /* Variable numUoffvcc1 */
   sint16 numUoffvcc1;

   /* Variable numUoffvcc2 */
   sint16 numUoffvcc2;

   /* Variable numUoffvcc3 */
   sint16 numUoffvcc3;

   /* Variable numUoffvcci2 */
   sint16 numUoffvcci2;

   /* Variable resRCod */
   uint16 resRCod;

   /* Variable resRParl */
   uint16 resRParl;

   /* Variable stIPmpTM2R */
   uint16 stIPmpTM2R;

   /* Variable tiSegLngth */
   uint16 tiSegLngth;

   /* Variable uUn0ElecCorrd */
   sint16 uUn0ElecCorrd;

   /* Variable uUn0RawLst */
   sint16 uUn0RawLst;

} UEGO_CJ135IPMPEVAL5MSIFCLASS_IMPL;

#endif /* _UEGO_CJ135IPMPEVAL5MSIFCLASS_IMPL_ */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


/* Referenced System Constant UEGO_SNGLCEL_SC */


/* UEGO_SNGLCEL_SC Typ=ub */
#ifndef UEGO_SNGLCEL_SC
  #define UEGO_SNGLCEL_SC 0L
#elif (UEGO_SNGLCEL_SC != 0L)
  #error >>>> 'UEGO_SNGLCEL_SC' multiple defined
#endif


/* Referenced System Constant UEGO_ICS1B1_SY */


/* UEGO_ICS1B1_SY Typ=sw */
#ifndef UEGO_ICS1B1_SY
  #define UEGO_ICS1B1_SY 2L
#elif (UEGO_ICS1B1_SY != 2L)
  #error >>>> 'UEGO_ICS1B1_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS1B2_SY */


/* UEGO_ICS1B2_SY Typ=sw */
#ifndef UEGO_ICS1B2_SY
  #define UEGO_ICS1B2_SY 2L
#elif (UEGO_ICS1B2_SY != 2L)
  #error >>>> 'UEGO_ICS1B2_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS2B1_SY */


/* UEGO_ICS2B1_SY Typ=sw */
#ifndef UEGO_ICS2B1_SY
  #define UEGO_ICS2B1_SY 0L
#elif (UEGO_ICS2B1_SY != 0L)
  #error >>>> 'UEGO_ICS2B1_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema ADS_Bit +++++ */


/* Imported Variable: UEGO_flgNewIPmpRvsChrgS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgNewIPmpRvsChrgS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgNewIPmpRvsChrgS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgNewIPmpRvsChrgS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffipe1Z1StrtdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffipe1Z1StrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffipe1Z1StrtdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffipe1Z1StrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffipe1Z2StrtdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffipe1Z2StrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffipe1Z2StrtdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffipe1Z2StrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffipe2Z1StrtdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffipe2Z1StrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffipe2Z1StrtdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffipe2Z1StrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffipe2Z2StrtdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffipe2Z2StrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffipe2Z2StrtdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffipe2Z2StrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffvcc1StrtdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffvcc1StrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffvcc1StrtdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffvcc1StrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffvcc2StrtdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffvcc2StrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffvcc2StrtdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffvcc2StrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffvcc3StrtdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffvcc3StrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffvcc3StrtdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffvcc3StrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffvcci2StrtdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffvcci2StrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgUoffvcci2StrtdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgUoffvcci2StrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema dir +++++ */


/* Imported Variable: UEGO_CJ135CalcElecCorrnS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 



#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_CJ135CalcElecCorrnS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 



#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema intRam +++++ */


/* Exported Variable: UEGO_iIPmpElecCorrdS1B1 */
/* UEGO_iIPmpElecCorrdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpElecCorrdS1B2 */
/* UEGO_iIPmpElecCorrdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpPacAryS1B1 */
/* UEGO_iIPmpPacAryS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpPacAryS1B2 */
/* UEGO_iIPmpPacAryS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpPacAvrgS1B1 */
/* UEGO_iIPmpPacAvrgS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpPacAvrgS1B2 */
/* UEGO_iIPmpPacAvrgS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpRawLstS1B1 */
/* UEGO_iIPmpRawLstS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpRawLstS1B2 */
/* UEGO_iIPmpRawLstS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpSegWoCrvS1B1 */
/* UEGO_iIPmpSegWoCrvS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIPmpSegWoCrvS1B2 */
/* UEGO_iIPmpSegWoCrvS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_numPacBlcknS1B1 */
/* UEGO_numPacBlcknS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_numPacBlcknS1B2 */
/* UEGO_numPacBlcknS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_ratIPmpPacAryS1B1 */
/* UEGO_ratIPmpPacAryS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_ratIPmpPacAryS1B2 */
/* UEGO_ratIPmpPacAryS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_resRCodS1B1 */
/* UEGO_resRCodS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_resRCodS1B2 */
/* UEGO_resRCodS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_resRParlS1B1 */
/* UEGO_resRParlS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_resRParlS1B2 */
/* UEGO_resRParlS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_stIPmpTM2RS1B1 */
/* UEGO_stIPmpTM2RS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_stIPmpTM2RS1B2 */
/* UEGO_stIPmpTM2RS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_uUn0ElecCorrdS1B1 */
/* UEGO_uUn0ElecCorrdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_uUn0ElecCorrdS1B2 */
/* UEGO_uUn0ElecCorrdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_uUn0PacAryS1B1 */
/* UEGO_uUn0PacAryS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_uUn0PacAryS1B2 */
/* UEGO_uUn0PacAryS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_uUn0RawLstS1B1 */
/* UEGO_uUn0RawLstS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_uUn0RawLstS1B2 */
/* UEGO_uUn0RawLstS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_uUp0PacAryS1B1 */
/* UEGO_uUp0PacAryS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_uUp0PacAryS1B2 */
/* UEGO_uUp0PacAryS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: EpmCrS_tiSeg */
#define IMPORTED
#ifndef _D_FILE_ 
/* EpmCrS_tiSeg is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_idxTypS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_idxTypS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_idxTypS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_idxTypS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_iIPmpRvsChrgS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_iIPmpRvsChrgS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_iIPmpRvsChrgS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_iIPmpRvsChrgS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_iIsqMeasS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_iIsqMeasS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_iIsqMeasS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_iIsqMeasS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_iIsqrMeasS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_iIsqrMeasS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_iIsqrMeasS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_iIsqrMeasS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numModMeasS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numModMeasS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numModMeasS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numModMeasS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffgnd2S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffgnd2S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffgnd2S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffgnd2S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffgnd3S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffgnd3S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffgnd3S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffgnd3S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffipe1Z1S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffipe1Z1S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffipe1Z1S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffipe1Z1S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffipe1Z2S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffipe1Z2S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffipe1Z2S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffipe1Z2S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffipe2Z1S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffipe2Z1S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffipe2Z1S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffipe2Z1S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffipe2Z2S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffipe2Z2S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffipe2Z2S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffipe2Z2S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffvcc1S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffvcc1S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffvcc1S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffvcc1S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffvcc2S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffvcc2S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffvcc2S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffvcc2S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffvcc3S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffvcc3S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffvcc3S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffvcc3S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffvcci2S1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffvcci2S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_numUoffvcci2S1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_numUoffvcci2S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema MediumReIni +++++ */
/* MediumSlowReIni */
#pragma section .bss.ReIni aw 


/* Local Variable: UEGO_stLsmGetTime */
#ifdef _DAT_H
#ifndef __UEGO_STLSMGETTIME_EXT__
#define __UEGO_STLSMGETTIME_EXT__
extern uint32 UEGO_stLsmGetTime;
#endif
#endif


/* Local Variable: UEGO_tiPac */
#ifdef _DAT_H
#ifndef __UEGO_TIPAC_EXT__
#define __UEGO_TIPAC_EXT__
extern uint32 UEGO_tiPac;
#endif
#endif


/* Imported Variable: UEGO_TmpArr */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __UEGO_TMPARR_EXT__
#define __UEGO_TMPARR_EXT__
extern uint16 UEGO_TmpArr[16];
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema SingleBitNoReIni +++++ */
/* SingleBitNoReIniHeader */
#pragma section .bbss awbz 


/* Exported Variable: UEGO_flgIPmpEvlnVldS1B1 */
/* UEGO_flgIPmpEvlnVldS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgIPmpEvlnVldS1B2 */
/* UEGO_flgIPmpEvlnVldS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Imported Variable: UEGO_flgCJ135RstClbS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgCJ135RstClbS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgCJ135RstClbS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgCJ135RstClbS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgCJ135RstMeasS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgCJ135RstMeasS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgCJ135RstMeasS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgCJ135RstMeasS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgIPmpActvdS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgIPmpActvdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgIPmpActvdS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgIPmpActvdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgLoupeNS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgLoupeNS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgLoupeNS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgLoupeNS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgLoupePS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgLoupePS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgLoupePS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgLoupePS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgNewPacS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgNewPacS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgNewPacS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgNewPacS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgURIAS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgURIAS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_flgURIAS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_flgURIAS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 


#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */


/* ++++++++++++++++++++ Class EdgeRisingNoMem ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class DigitalLowpass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class TurnOffDelayVariableNoMem ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class TurnOnDelayVariableNoMem ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_CJ135IPmpEvalClass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_CJ135CalcElecCorrnClass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_CJ135IPmpEval5msIfClass ++++++++++++++++++++++ */
/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* -------------------- */
/* Referenced OML-Class UEGO_CJ135CalcElecCorrnClass,  Instance UEGO_CJ135CalcElecCorrnS1B1 */
/* -------------------- */


/* Instance UEGO_CJ135CalcElecCorrnS1B1, Addressschema MediumReIni */
#ifndef _UEGO_CJ135CalcElecCorrnS1B1_DEF
#define _UEGO_CJ135CalcElecCorrnS1B1_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135CALCELECCORRNCLASS_IMPL UEGO_CJ135CalcElecCorrnS1B1;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135CalcElecCorrnS1B1_DEF */

/* -------------------- */
/* Referenced OML-Class UEGO_CJ135CalcElecCorrnClass,  Instance UEGO_CJ135CalcElecCorrnS1B2 */
/* -------------------- */


/* Instance UEGO_CJ135CalcElecCorrnS1B2, Addressschema MediumReIni */
#ifndef _UEGO_CJ135CalcElecCorrnS1B2_DEF
#define _UEGO_CJ135CalcElecCorrnS1B2_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135CALCELECCORRNCLASS_IMPL UEGO_CJ135CalcElecCorrnS1B2;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135CalcElecCorrnS1B2_DEF */

/* --------------- */
/* Local OML-Class UEGO_CJ135IPmpEvalClass, Instance UEGO_CJ135IPmpEvalS1B1_I */
/* --------------- */


/* Instance UEGO_CJ135IPmpEvalS1B1_I, Addressschema MediumReIni */
#ifndef _UEGO_CJ135IPmpEvalS1B1_I_DEF
#define _UEGO_CJ135IPmpEvalS1B1_I_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135IPMPEVALCLASS_IMPL UEGO_CJ135IPmpEvalS1B1_I;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135IPmpEvalS1B1_I_DEF */

/* --------------- */
/* Local OML-Class UEGO_CJ135IPmpEvalClass, Instance UEGO_CJ135IPmpEvalS1B2_I */
/* --------------- */


/* Instance UEGO_CJ135IPmpEvalS1B2_I, Addressschema MediumReIni */
#ifndef _UEGO_CJ135IPmpEvalS1B2_I_DEF
#define _UEGO_CJ135IPmpEvalS1B2_I_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135IPMPEVALCLASS_IMPL UEGO_CJ135IPmpEvalS1B2_I;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135IPmpEvalS1B2_I_DEF */

/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of EpmCrS_Seg -- */
/* +++++ Addressschema dir +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of GConf_Sy -- */
 					 					
/* -- Referenced PTA Structures of UEGO_CenSrv -- */
/* -- Typedeclarations of Referenced Functions -- */


/* Referenced Class CenSrv_Coordinator */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _CENSRV_COORDINATOR_IMPL_
#define _CENSRV_COORDINATOR_IMPL_

/* -- Wrapper of Class CenSrv_Coordinator in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable flgCipeSnsrAdpnRels */
   bool flgCipeSnsrAdpnRels;

   /* Variable flgRpcRels */
   bool flgRpcRels;

   /* Variable nrCipeSnsrAdpnOldCyc */
   uint8 nrCipeSnsrAdpnOldCyc;

   /* Variable nrRpcOldCyc */
   uint8 nrRpcOldCyc;

} CENSRV_COORDINATOR_IMPL;

#endif /* _CENSRV_COORDINATOR_IMPL_ */

/* Referenced Class TurnOffDelayVariable */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAYVARIABLE_U16_
#define _TURNOFFDELAYVARIABLE_U16_

/* -- Wrapper of Class TurnOffDelayVariable in Addressschema Xram -- */
typedef struct
{
   /* Variable outbit */
   uint8 outbit;

   /* Variable time */
   uint16 time;

} TURNOFFDELAYVARIABLE_U16;

#endif /* _TURNOFFDELAYVARIABLE_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAYVARIABLE_U8_
#define _TURNOFFDELAYVARIABLE_U8_

/* -- Wrapper of Class TurnOffDelayVariable in Addressschema Xram -- */
typedef struct
{
   /* Variable outbit */
   uint8 outbit;

   /* Variable time */
   uint8 time;

} TURNOFFDELAYVARIABLE_U8;

#endif /* _TURNOFFDELAYVARIABLE_U8_ */

/* Referenced Class UEGO_SrvTestClass */
#ifndef _UEGO_SRVTESTCLASS_IMPL_
#define _UEGO_SRVTESTCLASS_IMPL_

/* Class UEGO_SrvTestClass has no Attributes -> Wrapper is not generated */

#endif /* _UEGO_SRVTESTCLASS_IMPL_ */

/* Referenced Class UEGO_ratLamRecprMdlS1DTTtOptClass */
 
/* -- Implementation U16_FAK_UW_B16 -- */
/* -- OML-1-Class -- */
#ifndef _UEGO_RATLAMRECPRMDLS1DTTTOPTCLASS_U16_FAK_UW_B16_
#define _UEGO_RATLAMRECPRMDLS1DTTTOPTCLASS_U16_FAK_UW_B16_

/* -- Wrapper of Class UEGO_ratLamRecprMdlS1DTTtOptClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable buffer */
   uint16 buffer[30];

   /* Variable counter */
   uint16 counter;

   /* Variable ds */
   uint16 ds;

   /* Variable pointer */
   uint8 pointer;

} UEGO_RATLAMRECPRMDLS1DTTTOPTCLASS_U16_FAK_UW_B16;

#endif /* _UEGO_RATLAMRECPRMDLS1DTTTOPTCLASS_U16_FAK_UW_B16_ */

/* Referenced Class UEGO_ratLamRecprMdlS2DTTtOptClass */
 
/* -- Implementation U16_FAK_UW_B16 -- */
/* -- OML-1-Class -- */
#ifndef _UEGO_RATLAMRECPRMDLS2DTTTOPTCLASS_U16_FAK_UW_B16_
#define _UEGO_RATLAMRECPRMDLS2DTTTOPTCLASS_U16_FAK_UW_B16_

/* -- Wrapper of Class UEGO_ratLamRecprMdlS2DTTtOptClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable buffer */
   uint16 buffer[60];

   /* Variable counter */
   uint16 counter;

   /* Variable ds */
   uint16 ds;

   /* Variable pointer */
   uint8 pointer;

} UEGO_RATLAMRECPRMDLS2DTTTOPTCLASS_U16_FAK_UW_B16;

#endif /* _UEGO_RATLAMRECPRMDLS2DTTTOPTCLASS_U16_FAK_UW_B16_ */

/* Referenced Class UEGO_ratLamRecprMdlS3DTTtOptClass */
 
/* -- Implementation U16_FAK_UW_B16 -- */
/* -- OML-1-Class -- */
#ifndef _UEGO_RATLAMRECPRMDLS3DTTTOPTCLASS_U16_FAK_UW_B16_
#define _UEGO_RATLAMRECPRMDLS3DTTTOPTCLASS_U16_FAK_UW_B16_

/* -- Wrapper of Class UEGO_ratLamRecprMdlS3DTTtOptClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable buffer */
   uint16 buffer[90];

   /* Variable counter */
   uint16 counter;

   /* Variable ds */
   uint16 ds;

   /* Variable pointer */
   uint8 pointer;

} UEGO_RATLAMRECPRMDLS3DTTTOPTCLASS_U16_FAK_UW_B16;

#endif /* _UEGO_RATLAMRECPRMDLS3DTTTOPTCLASS_U16_FAK_UW_B16_ */


/* Referenced Parameter UEGO_idxHWES1B1_C */


#ifndef _UEGO_idxHWES1B1_C_DEF
#define _UEGO_idxHWES1B1_C_DEF
#define UEGO_idxHWES1B1_CM UEGO_idxHWES1B1_C
#endif /* _UEGO_IDXHWES1B1_C_DEF */

/* Referenced Parameter UEGO_idxHWES1B2_C */


#ifndef _UEGO_idxHWES1B2_C_DEF
#define _UEGO_idxHWES1B2_C_DEF
#define UEGO_idxHWES1B2_CM UEGO_idxHWES1B2_C
#endif /* _UEGO_IDXHWES1B2_C_DEF */

/* Referenced Parameter UEGO_idxTypS1B1_C */


#ifndef _UEGO_idxTypS1B1_C_DEF
#define _UEGO_idxTypS1B1_C_DEF
#define UEGO_idxTypS1B1_CM UEGO_idxTypS1B1_C
#endif /* _UEGO_IDXTYPS1B1_C_DEF */

/* Referenced Parameter UEGO_idxTypS1B2_C */


#ifndef _UEGO_idxTypS1B2_C_DEF
#define _UEGO_idxTypS1B2_C_DEF
#define UEGO_idxTypS1B2_CM UEGO_idxTypS1B2_C
#endif /* _UEGO_IDXTYPS1B2_C_DEF */

/* Referenced Parameter UEGO_stCipeAdpnOrRpcPrio_C */


#ifndef _UEGO_stCipeAdpnOrRpcPrio_C_DEF
#define _UEGO_stCipeAdpnOrRpcPrio_C_DEF
#define UEGO_stCipeAdpnOrRpcPrio_CM UEGO_stCipeAdpnOrRpcPrio_C
#endif /* _UEGO_STCIPEADPNORRPCPRIO_C_DEF */

/* Referenced Parameter UEGO_stCipeVomCdn_C */


#ifndef _UEGO_stCipeVomCdn_C_DEF
#define _UEGO_stCipeVomCdn_C_DEF
#define UEGO_stCipeVomCdn_CM UEGO_stCipeVomCdn_C
#endif /* _UEGO_STCIPEVOMCDN_C_DEF */

/* Referenced Parameter UEGO_tiDurnCipeAdpnFinish_C */


#ifndef _UEGO_tiDurnCipeAdpnFinish_C_DEF
#define _UEGO_tiDurnCipeAdpnFinish_C_DEF
#define UEGO_tiDurnCipeAdpnFinish_CM UEGO_tiDurnCipeAdpnFinish_C
#endif /* _UEGO_TIDURNCIPEADPNFINISH_C_DEF */

/* Referenced Parameter UEGO_tiDurnRpcFinish_C */


#ifndef _UEGO_tiDurnRpcFinish_C_DEF
#define _UEGO_tiDurnRpcFinish_C_DEF
#define UEGO_tiDurnRpcFinish_CM UEGO_tiDurnRpcFinish_C
#endif /* _UEGO_TIDURNRPCFINISH_C_DEF */

/* Referenced Parameter UEGO_uBattMax_C */


#ifndef _UEGO_uBattMax_C_DEF
#define _UEGO_uBattMax_C_DEF
#define UEGO_uBattMax_CM UEGO_uBattMax_C
#endif /* _UEGO_UBATTMAX_C_DEF */

/* Referenced Parameter UEGO_uBattMin_C */


#ifndef _UEGO_uBattMin_C_DEF
#define _UEGO_uBattMin_C_DEF
#define UEGO_uBattMin_CM UEGO_uBattMin_C
#endif /* _UEGO_UBATTMIN_C_DEF */

/* Referenced Parameter UEGO_vVehVIdleThd_C */


#ifndef _UEGO_vVehVIdleThd_C_DEF
#define _UEGO_vVehVIdleThd_C_DEF
#define UEGO_vVehVIdleThd_CM UEGO_vVehVIdleThd_C
#endif /* _UEGO_VVEHVIDLETHD_C_DEF */
/* +++++ Addressschema DataFast +++++ */
			
/* Parameter UEGO_idxHWES1B1_C in Addressschema DataFast is referenced from function UEGO_CenSrv */ 

					
/* Parameter UEGO_idxHWES1B2_C in Addressschema DataFast is referenced from function UEGO_CenSrv */ 

		
/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_UEGO_CENSRV_DATAFAST_T_DEF
#define DATA_UEGO_CENSRV_DATAFAST_T_DEF
typedef struct
{
    /* ----- Parameter UEGO_idxHWES1B1_C ----- */
    uint8 _UEGO_idxHWES1B1_C;
    /* ----- Parameter UEGO_idxHWES1B2_C ----- */
    uint8 _UEGO_idxHWES1B2_C;
    /* ----- Parameter UEGO_idxTypS1B1_C ----- */
    uint8 _UEGO_idxTypS1B1_C;
    /* ----- Parameter UEGO_idxTypS1B2_C ----- */
    uint8 _UEGO_idxTypS1B2_C;
    /* ----- Parameter UEGO_stCipeAdpnOrRpcPrio_C ----- */
    uint8 _UEGO_stCipeAdpnOrRpcPrio_C;
    /* ----- Parameter UEGO_stCipeVomCdn_C ----- */
    uint8 _UEGO_stCipeVomCdn_C;
    /* ----- Parameter UEGO_tiDurnCipeAdpnFinish_C ----- */
    uint16 _UEGO_tiDurnCipeAdpnFinish_C;
    /* ----- Parameter UEGO_tiDurnRpcFinish_C ----- */
    uint16 _UEGO_tiDurnRpcFinish_C;
    /* ----- Parameter UEGO_uBattMax_C ----- */
    sint16 _UEGO_uBattMax_C;
    /* ----- Parameter UEGO_uBattMin_C ----- */
    sint16 _UEGO_uBattMin_C;
    /* ----- Parameter UEGO_vVehVIdleThd_C ----- */
    sint16 _UEGO_vVehVIdleThd_C;
} DATA_UEGO_CenSrv_DataFast_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_UEGO_CenSrv_DataFast_t DATA_UEGO_CenSrv_DataFast
    __attribute__ ((asection (".pta_dataDataFast_UEGO_CenSrv","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_UEGO_CenSrv_DataFast_t * const VECT_UEGO_CenSrv_DataFast
    __attribute__ ((asection (".sdata.pta_vectDataFast_UEGO_CenSrv","f=as")));
#endif

 							
/* -- Referenced PTA Structures of UEGO_CJ135DatEval -- */
/* -- Typedeclarations of Referenced Functions -- */


/* Referenced Class DigitalLowpass */
 
/* -- Implementation R32 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_R32_
#define _DIGITALLOWPASS_R32_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   real32 memory;

} DIGITALLOWPASS_R32;

#endif /* _DIGITALLOWPASS_R32_ */

/* -- Implementation S16 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_S16_
#define _DIGITALLOWPASS_S16_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   sint32 memory;

} DIGITALLOWPASS_S16;

#endif /* _DIGITALLOWPASS_S16_ */

/* -- Implementation S8 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_S8_
#define _DIGITALLOWPASS_S8_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   sint16 memory;

} DIGITALLOWPASS_S8;

#endif /* _DIGITALLOWPASS_S8_ */

/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_U16_
#define _DIGITALLOWPASS_U16_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   uint32 memory;

} DIGITALLOWPASS_U16;

#endif /* _DIGITALLOWPASS_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_U8_
#define _DIGITALLOWPASS_U8_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   uint16 memory;

} DIGITALLOWPASS_U8;

#endif /* _DIGITALLOWPASS_U8_ */

/* Referenced Class UEGO_CJ135CalcElecCorrnClass */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135CALCELECCORRNCLASS_IMPL_
#define _UEGO_CJ135CALCELECCORRNCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135CalcElecCorrnClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable UEGO_bbCalcElecCorrnClsReIni5ms */
   uint8 UEGO_bbCalcElecCorrnClsReIni5ms;

   /* Variable flgFKal1Strtd */
   /* Variable flgFKal2Strtd */
   /* Variable flgFKal3Strtd */
   /* Variable flgnCmnMod1Strtd */
   /* Variable flgnCmnMod2Strtd */
   /* Variable flgnumUref22Strtd */
   /* Variable numUref1Corrd */
   sint16 numUref1Corrd;

   /* Variable numUref21Corrd */
   sint16 numUref21Corrd;

   /* Variable numUref22Corrd */
   sint16 numUref22Corrd;

   /* Variable numUref3Corrd */
   sint16 numUref3Corrd;

   /* Variable uCmnMod1 */
   sint16 uCmnMod1;

   /* Variable uCmnMod2 */
   sint16 uCmnMod2;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal1Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal2Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal3Flt_DL;

} UEGO_CJ135CALCELECCORRNCLASS_IMPL;

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd)

#endif /* _UEGO_CJ135CALCELECCORRNCLASS_IMPL_ */

/* Referenced Class UEGO_CJ135DatEvalClass */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135DATEVALCLASS_IMPL_
#define _UEGO_CJ135DATEVALCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135DatEvalClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable UEGO_bbDatEvalClsReIni5ms1 */
   uint8 UEGO_bbDatEvalClsReIni5ms1;

   /* Variable flgUcalStrtd */
   /* Variable flgUg0Strtd */
   /* Variable flgUoffgnd1Strtd */
   /* Variable flgUoffgnd2Strtd */
   /* Variable flgUoffgnd3Strtd */
   /* Variable numRegTrimOld */
   uint16 numRegTrimOld;

   /* Variable numRegUnsetOld */
   sint16 numRegUnsetOld;

   /* Variable numTrimSq */
   uint8 numTrimSq;

   /* Variable numTrimSqr */
   uint8 numTrimSqr;

   /* Variable uRegUnset */
   sint16 uRegUnset;

   /* Variable uVCC1aTest */
   sint16 uVCC1aTest;

   /* Variable uVCC1bTest */
   sint16 uVCC1bTest;

   /* Variable uVCC3aTest */
   sint16 uVCC3aTest;

   /* Variable uVCC3bTest */
   sint16 uVCC3bTest;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUcalElecCor_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUg0ElecCor_DL;

} UEGO_CJ135DATEVALCLASS_IMPL;

#define SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUcalStrtd ((self->UEGO_bbDatEvalClsReIni5ms1 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUcalStrtd ((self->UEGO_bbDatEvalClsReIni5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135DATEVALCLASS_IMPL_flgUcalStrtd ((self->UEGO_bbDatEvalClsReIni5ms1 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135DATEVALCLASS_IMPL_flgUcalStrtd(val) ((val) ? SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUcalStrtd : CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUcalStrtd)

#define SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUg0Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUg0Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135DATEVALCLASS_IMPL_flgUg0Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135DATEVALCLASS_IMPL_flgUg0Strtd(val) ((val) ? SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUg0Strtd : CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUg0Strtd)

#define SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd1Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd1Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd1Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd1Strtd(val) ((val) ? SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd1Strtd : CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd1Strtd)

#define SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd2Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd2Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd2Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd2Strtd(val) ((val) ? SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd2Strtd : CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd2Strtd)

#define SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd3Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd3Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd3Strtd ((self->UEGO_bbDatEvalClsReIni5ms1 & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd3Strtd(val) ((val) ? SET_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd3Strtd : CLR_UEGO_CJ135DATEVALCLASS_IMPL_flgUoffgnd3Strtd)

#endif /* _UEGO_CJ135DATEVALCLASS_IMPL_ */

/* Referenced Class UEGO_CJ135DatEval5msIfClass */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135DATEVAL5MSIFCLASS_IMPL_
#define _UEGO_CJ135DATEVAL5MSIFCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135DatEval5msIfClass in Addressschema SlowNoReIni -- */
typedef struct
{
   /* Variable flgCJ135RstClb */
   bool flgCJ135RstClb;

   /* Variable flgCJ135RstMeas */
   bool flgCJ135RstMeas;

   /* Variable flgIsqStrtd */
   bool flgIsqStrtd;

   /* Variable flgIsqrStrtd */
   bool flgIsqrStrtd;

   /* Variable flgNewPac */
   bool flgNewPac;

   /* Variable iIsq */
   sint16 iIsq;

   /* Variable iIsqr */
   sint16 iIsqr;

   /* Variable numUoffgnd1 */
   sint16 numUoffgnd1;

   /* Variable numUoffgnd2 */
   sint16 numUoffgnd2;

   /* Variable numUoffgnd3 */
   sint16 numUoffgnd3;

} UEGO_CJ135DATEVAL5MSIFCLASS_IMPL;

#endif /* _UEGO_CJ135DATEVAL5MSIFCLASS_IMPL_ */


/* Referenced Parameter UEGO_resRCal_C */


#ifndef _UEGO_resRCal_C_DEF
#define _UEGO_resRCal_C_DEF
#define UEGO_resRCal_CM UEGO_resRCal_C
#endif /* _UEGO_RESRCAL_C_DEF */

/* Referenced Parameter UEGO_resRGnd_C */


#ifndef _UEGO_resRGnd_C_DEF
#define _UEGO_resRGnd_C_DEF
#define UEGO_resRGnd_CM UEGO_resRGnd_C
#endif /* _UEGO_RESRGND_C_DEF */
/* +++++ Addressschema DataFast +++++ */
			
/* Parameter UEGO_resRGnd_C in Addressschema DataFast is referenced from function UEGO_CJ135DatEval */ 

				
/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_UEGO_CJ135DATEVAL_DATAFAST_T_DEF
#define DATA_UEGO_CJ135DATEVAL_DATAFAST_T_DEF
typedef struct
{
    /* ----- Parameter UEGO_facFkalFltConst_C ----- */
    uint16 _UEGO_facFkalFltConst_C;
    /* ----- Parameter UEGO_ratCmnModCorrn_C ----- */
    uint16 _UEGO_ratCmnModCorrn_C;
    /* ----- Parameter UEGO_ratFkalCorrn_C ----- */
    uint16 _UEGO_ratFkalCorrn_C;
    /* ----- Parameter UEGO_uGndOffCorrn_C ----- */
    sint8 _UEGO_uGndOffCorrn_C;
    /* ----- Parameter UEGO_uVCC3Ref_C ----- */
    sint16 _UEGO_uVCC3Ref_C;
    /* ----- Parameter UEGO_facUcalFltConst_C ----- */
    uint16 _UEGO_facUcalFltConst_C;
    /* ----- Parameter UEGO_facUg0FltConst_C ----- */
    uint16 _UEGO_facUg0FltConst_C;
    /* ----- Parameter UEGO_resRsgaspaMes_C ----- */
    uint16 _UEGO_resRsgaspaMes_C;
    /* ----- Parameter UEGO_resRCal_C ----- */
    uint16 _UEGO_resRCal_C;
    /* ----- Parameter UEGO_resRGnd_C ----- */
    uint16 _UEGO_resRGnd_C;
} DATA_UEGO_CJ135DatEval_DataFast_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_UEGO_CJ135DatEval_DataFast_t DATA_UEGO_CJ135DatEval_DataFast
    __attribute__ ((asection (".pta_dataDataFast_UEGO_CJ135DatEval","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_UEGO_CJ135DatEval_DataFast_t * const VECT_UEGO_CJ135DatEval_DataFast
    __attribute__ ((asection (".sdata.pta_vectDataFast_UEGO_CJ135DatEval","f=as")));
#endif

/* -- No referenced PTA Structures of UEGO_CJ135Dia -- */
/* +++++ Addressschema DataFast +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* -- Referenced PTA Structures of UEGO_CJ135IPmpEval -- */
/* -- Typedeclarations of Referenced Functions -- */


/* Referenced Class EdgeRisingNoMem */
 
/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _EDGERISINGNOMEM_U8_
#define _EDGERISINGNOMEM_U8_

/* -- Wrapper of Class EdgeRisingNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable oldSignal */
   uint8 oldSignal;

} EDGERISINGNOMEM_U8;

#endif /* _EDGERISINGNOMEM_U8_ */

/* Referenced Class DigitalLowpass */
 
/* -- Implementation R32 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_R32_
#define _DIGITALLOWPASS_R32_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   real32 memory;

} DIGITALLOWPASS_R32;

#endif /* _DIGITALLOWPASS_R32_ */

/* -- Implementation S16 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_S16_
#define _DIGITALLOWPASS_S16_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   sint32 memory;

} DIGITALLOWPASS_S16;

#endif /* _DIGITALLOWPASS_S16_ */

/* -- Implementation S8 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_S8_
#define _DIGITALLOWPASS_S8_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   sint16 memory;

} DIGITALLOWPASS_S8;

#endif /* _DIGITALLOWPASS_S8_ */

/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_U16_
#define _DIGITALLOWPASS_U16_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   uint32 memory;

} DIGITALLOWPASS_U16;

#endif /* _DIGITALLOWPASS_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _DIGITALLOWPASS_U8_
#define _DIGITALLOWPASS_U8_

/* -- Wrapper of Class DigitalLowpass in Addressschema Xram -- */
typedef struct
{
   /* Variable memory */
   uint16 memory;

} DIGITALLOWPASS_U8;

#endif /* _DIGITALLOWPASS_U8_ */

/* Referenced Class TurnOffDelayVariableNoMem */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAYVARIABLENOMEM_U16_
#define _TURNOFFDELAYVARIABLENOMEM_U16_

/* -- Wrapper of Class TurnOffDelayVariableNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   uint16 time;

} TURNOFFDELAYVARIABLENOMEM_U16;

#endif /* _TURNOFFDELAYVARIABLENOMEM_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAYVARIABLENOMEM_U8_
#define _TURNOFFDELAYVARIABLENOMEM_U8_

/* -- Wrapper of Class TurnOffDelayVariableNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   uint8 time;

} TURNOFFDELAYVARIABLENOMEM_U8;

#endif /* _TURNOFFDELAYVARIABLENOMEM_U8_ */

/* Referenced Class TurnOnDelayVariableNoMem */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNONDELAYVARIABLENOMEM_U16_
#define _TURNONDELAYVARIABLENOMEM_U16_

/* -- Wrapper of Class TurnOnDelayVariableNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   uint16 time;

} TURNONDELAYVARIABLENOMEM_U16;

#endif /* _TURNONDELAYVARIABLENOMEM_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNONDELAYVARIABLENOMEM_U8_
#define _TURNONDELAYVARIABLENOMEM_U8_

/* -- Wrapper of Class TurnOnDelayVariableNoMem in Addressschema Xram -- */
typedef struct
{
   /* Variable time */
   uint8 time;

} TURNONDELAYVARIABLENOMEM_U8;

#endif /* _TURNONDELAYVARIABLENOMEM_U8_ */

/* Referenced Class UEGO_CJ135IPmpEvalClass */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135IPMPEVALCLASS_IMPL_
#define _UEGO_CJ135IPMPEVALCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135IPmpEvalClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable UEGO_bbIPmpEvalClsReIni_5ms1 */
   uint8 UEGO_bbIPmpEvalClsReIni_5ms1;

   /* Variable UEGO_bbIPmpEvalClsReIni_5ms2 */
   uint8 UEGO_bbIPmpEvalClsReIni_5ms2;

   /* Variable UEGO_bbIPmpEvalClsReIni_5ms3 */
   uint8 UEGO_bbIPmpEvalClsReIni_5ms3;

   /* Variable UEGO_bbIPmpEvalClsReIni_5ms5 */
   uint8 UEGO_bbIPmpEvalClsReIni_5ms5;

   /* Variable cntrSum */
   uint8 cntrSum;

   /* Variable facCrvCor */
   uint16 facCrvCor;

   /* Variable flgIPLrnAllwd */
   /* Variable flgIPLrnVld */
   /* Variable flgIPTM2RLst */
   /* Variable flgIPmpPacVld */
   /* Variable flgIPmpSegFull */
   /* Variable flgIPmpSegStrtd */
   /* Variable flgIPmpSegVld */
   /* Variable flgNewIPmpRefCorrn */
   /* Variable flgNewIPmpRefCorrnOld */
   /* Variable flgNewUn0 */
   /* Variable flgNewUp0 */
   /* Variable flgRCodStrtd */
   /* Variable flgRParlStrtd */
   /* Variable flgRefpatChngd */
   /* Variable flgSteerpatChngd */
   /* Variable flgSteerpatChngdDlyd */
   /* Variable flgSteerpatZeroOld */
   /* Variable flgUgaZ1Strtd */
   /* Variable flgUgaZ2Strtd */
   /* Variable flgUgiZ1Strtd */
   /* Variable flgUgiZ2Strtd */
   /* Variable flgUp0Z0Strtd */
   /* Variable flgUp0Z1Strtd */
   /* Variable flgUp0Z2Strtd */
   /* Variable flgfacCrvCorrnVld */
   /* Variable iIPmpPacAvrg */
   sint16 iIPmpPacAvrg;

   /* Variable iIPmpRawLst */
   sint16 iIPmpRawLst;

   /* Variable iIPmpRef */
   sint16 iIPmpRef;

   /* Variable iIPmpRefCorrn */
   sint16 iIPmpRefCorrn;

   /* Variable iIPmpSegAvrg */
   sint16 iIPmpSegAvrg;

   /* Variable iIPmpSegAvrgWoCrvCorrn */
   sint16 iIPmpSegAvrgWoCrvCorrn;

   /* Variable iIPmpSegAvrgWoCrvCorrnDelta */
   sint16 iIPmpSegAvrgWoCrvCorrnDelta;

   /* Variable iIPmpSegPartSumAry */
   sint32 iIPmpSegPartSumAry[4];

   /* Variable iIPmpSegSum */
   sint32 iIPmpSegSum;

   /* Variable iIPmpSegWoCrvCorrn */
   sint16 iIPmpSegWoCrvCorrn;

   /* Variable numCtrSegPartSumAry */
   uint8 numCtrSegPartSumAry[4];

   /* Variable numRefPatSet */
   uint8 numRefPatSet;

   /* Variable numSegPartMax */
   uint8 numSegPartMax;

   /* Variable numSegPartPosCurr */
   uint8 numSegPartPosCurr;

   /* Variable ratIPmpAvrg */
   sint16 ratIPmpAvrg;

   /* Variable stIPmpOK */
   uint16 stIPmpOK;

   /* Variable stIPmpTM2L */
   uint16 stIPmpTM2L;

   /* Variable stIPmpTM2R */
   uint16 stIPmpTM2R;

   /* Variable stRefPat */
   uint16 stRefPat;

   /* Variable stRefPatOld */
   uint16 stRefPatOld;

   /* Variable stSteerPat */
   uint16 stSteerPat;

   /* Variable stSteerPatOld */
   uint16 stSteerPatOld;

   /* Variable uGk */
   sint16 uGk;

   /* Variable uIpcal */
   sint16 uIpcal;

   /* Variable uUlsf */
   sint16 uUlsf[15];

   /* Variable uUn0PacAvrgLst */
   sint16 uUn0PacAvrgLst;

   /* Variable uUn0PacFil */
   sint16 uUn0PacFil;

   /* Variable uUn0PacFilLst */
   sint16 uUn0PacFilLst;

   /* Variable uUp0SegSum */
   sint32 uUp0SegSum;

   /* Instance of Embedded Class EDGERISINGNOMEM_U8 */
   EDGERISINGNOMEM_U8 ERNM_ModNotNormal;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp10_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp11_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp12_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp13_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp14_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp15_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp1_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp2_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp3_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp4_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp5_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp6_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp7_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp8_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltDeltaIp9_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUgaZ1ElecCor_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUgaZ2ElecCor_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUgiZ1ElecCor_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 FltuUgiZ2ElecCor_DL;

   /* Instance of Embedded Class TURNOFFDELAYVARIABLENOMEM_U16 */
   TURNOFFDELAYVARIABLENOMEM_U16 SteerpatChngdTOFFVNM_I;

   /* Instance of Embedded Class TURNOFFDELAYVARIABLENOMEM_U16 */
   TURNOFFDELAYVARIABLENOMEM_U16 TOffDlyIPmpVld;

   /* Instance of Embedded Class TURNONDELAYVARIABLENOMEM_U16 */
   TURNONDELAYVARIABLENOMEM_U16 TOnDlyIPmpVld;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 iIPmpRawAvrg_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 iIPmpSegAvrgWoCrvCorrn_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 iIPmpSegAvrg_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 resRCodFlt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 resrRParlFlt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 uUp0Z0Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 uUp0Z1Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_S16 */
   DIGITALLOWPASS_S16 uUp0Z2Flt_DL;

} UEGO_CJ135IPMPEVALCLASS_IMPL;

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnAllwd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPLrnVld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPTM2RLst)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 7))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 7))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 7)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpPacVld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegFull)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegStrtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 6))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 6))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 6)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgIPmpSegVld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrn)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld ((self->UEGO_bbIPmpEvalClsReIni_5ms3 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewIPmpRefCorrnOld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0 : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUn0)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0 ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0 : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgNewUp0)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRCodStrtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRParlStrtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgRefpatChngd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 6))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 6))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 6)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatChngdDlyd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgSteerpatZeroOld)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ1Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgaZ2Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ1Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms2 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUgiZ2Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z0Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z1Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd ((self->UEGO_bbIPmpEvalClsReIni_5ms1 & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgUp0Z2Strtd)

#define SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld ((self->UEGO_bbIPmpEvalClsReIni_5ms5 & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld(val) ((val) ? SET_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld : CLR_UEGO_CJ135IPMPEVALCLASS_IMPL_flgfacCrvCorrnVld)

#endif /* _UEGO_CJ135IPMPEVALCLASS_IMPL_ */

/* Referenced Class UEGO_CJ135CalcElecCorrnClass */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135CALCELECCORRNCLASS_IMPL_
#define _UEGO_CJ135CALCELECCORRNCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135CalcElecCorrnClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable UEGO_bbCalcElecCorrnClsReIni5ms */
   uint8 UEGO_bbCalcElecCorrnClsReIni5ms;

   /* Variable flgFKal1Strtd */
   /* Variable flgFKal2Strtd */
   /* Variable flgFKal3Strtd */
   /* Variable flgnCmnMod1Strtd */
   /* Variable flgnCmnMod2Strtd */
   /* Variable flgnumUref22Strtd */
   /* Variable numUref1Corrd */
   sint16 numUref1Corrd;

   /* Variable numUref21Corrd */
   sint16 numUref21Corrd;

   /* Variable numUref22Corrd */
   sint16 numUref22Corrd;

   /* Variable numUref3Corrd */
   sint16 numUref3Corrd;

   /* Variable uCmnMod1 */
   sint16 uCmnMod1;

   /* Variable uCmnMod2 */
   sint16 uCmnMod2;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal1Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal2Flt_DL;

   /* Instance of Embedded Class DIGITALLOWPASS_U16 */
   DIGITALLOWPASS_U16 uFkal3Flt_DL;

} UEGO_CJ135CALCELECCORRNCLASS_IMPL;

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 0))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 0))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 0)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal1Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 1))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 1))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 1)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal2Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 2))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 2))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 2)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgFKal3Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 4))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 4))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 4)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod1Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 5))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 5))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 5)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnCmnMod2Strtd)

#define SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms |= (b_BBasT)1u << 3))
#define CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms &= (b_BBasT)(((b_BBasT) b_MASK) - ((b_BBasT)1u << 3))))
#define GET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd ((self->UEGO_bbCalcElecCorrnClsReIni5ms & ((b_BBasT)1u << 3)) != (b_BBasT)0u)
#define PUT_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd(val) ((val) ? SET_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd : CLR_UEGO_CJ135CALCELECCORRNCLASS_IMPL_flgnumUref22Strtd)

#endif /* _UEGO_CJ135CALCELECCORRNCLASS_IMPL_ */

/* Referenced Class UEGO_CJ135IPmpEval5msIfClass */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135IPMPEVAL5MSIFCLASS_IMPL_
#define _UEGO_CJ135IPMPEVAL5MSIFCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135IPmpEval5msIfClass in Addressschema SlowNoReIni -- */
typedef struct
{
   /* Variable flgCJ135RstCalib */
   bool flgCJ135RstCalib;

   /* Variable flgCJ135RstMeas */
   bool flgCJ135RstMeas;

   /* Variable flgIPmpActvd */
   bool flgIPmpActvd;

   /* Variable flgLoupeN */
   bool flgLoupeN;

   /* Variable flgLoupeP */
   bool flgLoupeP;

   /* Variable flgNewPac */
   bool flgNewPac;

   /* Variable flgNewUn0 */
   bool flgNewUn0;

   /* Variable flgURIA */
   bool flgURIA;

   /* Variable flgUoffipe1Z1Strtd */
   bool flgUoffipe1Z1Strtd;

   /* Variable flgUoffipe1Z2Strtd */
   bool flgUoffipe1Z2Strtd;

   /* Variable flgUoffipe2Z1Strtd */
   bool flgUoffipe2Z1Strtd;

   /* Variable flgUoffipe2Z2Strtd */
   bool flgUoffipe2Z2Strtd;

   /* Variable flgUoffvcc1Strtd */
   bool flgUoffvcc1Strtd;

   /* Variable flgUoffvcc2Strtd */
   bool flgUoffvcc2Strtd;

   /* Variable flgUoffvcc3Strtd */
   bool flgUoffvcc3Strtd;

   /* Variable flgUoffvcci2Strtd */
   bool flgUoffvcci2Strtd;

   /* Variable iIPmpSegWoCrvCorrn */
   sint16 iIPmpSegWoCrvCorrn;

   /* Variable iIsq */
   sint16 iIsq;

   /* Variable iIsqr */
   sint16 iIsqr;

   /* Variable numCtrBlckn */
   uint8 numCtrBlckn;

   /* Variable numModeMeas */
   uint8 numModeMeas;

   /* Variable numUoffgnd2 */
   sint16 numUoffgnd2;

   /* Variable numUoffgnd3 */
   sint16 numUoffgnd3;

   /* Variable numUoffipe1Z1 */
   sint16 numUoffipe1Z1;

   /* Variable numUoffipe1Z2 */
   sint16 numUoffipe1Z2;

   /* Variable numUoffipe2Z1 */
   sint16 numUoffipe2Z1;

   /* Variable numUoffipe2Z2 */
   sint16 numUoffipe2Z2;

   /* Variable numUoffvcc1 */
   sint16 numUoffvcc1;

   /* Variable numUoffvcc2 */
   sint16 numUoffvcc2;

   /* Variable numUoffvcc3 */
   sint16 numUoffvcc3;

   /* Variable numUoffvcci2 */
   sint16 numUoffvcci2;

   /* Variable resRCod */
   uint16 resRCod;

   /* Variable resRParl */
   uint16 resRParl;

   /* Variable stIPmpTM2R */
   uint16 stIPmpTM2R;

   /* Variable tiSegLngth */
   uint16 tiSegLngth;

   /* Variable uUn0ElecCorrd */
   sint16 uUn0ElecCorrd;

   /* Variable uUn0RawLst */
   sint16 uUn0RawLst;

} UEGO_CJ135IPMPEVAL5MSIFCLASS_IMPL;

#endif /* _UEGO_CJ135IPMPEVAL5MSIFCLASS_IMPL_ */


/* Referenced Parameter UEGO_resRFe_C */


#ifndef _UEGO_resRFe_C_DEF
#define _UEGO_resRFe_C_DEF
#define UEGO_resRFe_CM UEGO_resRFe_C
#endif /* _UEGO_RESRFE_C_DEF */
/* +++++ Addressschema DataFast +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_UEGO_CJ135IPMPEVAL_DATAFAST_T_DEF
#define DATA_UEGO_CJ135IPMPEVAL_DATAFAST_T_DEF
typedef struct
{
    /* ----- Parameter UEGO_facIpDeltaFltConst_C ----- */
    uint16 _UEGO_facIpDeltaFltConst_C;
    /* ----- Parameter UEGO_facIPmpRawFltConst_C ----- */
    uint16 _UEGO_facIPmpRawFltConst_C;
    /* ----- Parameter UEGO_facIPmpSegFltConst_C ----- */
    uint16 _UEGO_facIPmpSegFltConst_C;
    /* ----- Parameter UEGO_facRCodFltConst_C ----- */
    uint16 _UEGO_facRCodFltConst_C;
    /* ----- Parameter UEGO_facUgxFltConst_C ----- */
    uint16 _UEGO_facUgxFltConst_C;
    /* ----- Parameter UEGO_facUp0FltConst_C ----- */
    uint16 _UEGO_facUp0FltConst_C;
    /* ----- Parameter UEGO_resRCrv_C ----- */
    uint16 _UEGO_resRCrv_C;
    /* ----- Parameter UEGO_resRMeas_C ----- */
    uint16 _UEGO_resRMeas_C;
    /* ----- Parameter UEGO_resRRef_C ----- */
    uint16 _UEGO_resRRef_C;
    /* ----- Parameter UEGO_resRSerl_C ----- */
    uint16 _UEGO_resRSerl_C;
    /* ----- Parameter UEGO_stCJ135IPmpEval_C ----- */
    uint16 _UEGO_stCJ135IPmpEval_C;
    /* ----- Parameter UEGO_tiDlyIPmpVld_C ----- */
    uint16 _UEGO_tiDlyIPmpVld_C;
    /* ----- Parameter UEGO_tiSegLngthFilCutOff_C ----- */
    uint16 _UEGO_tiSegLngthFilCutOff_C;
    /* ----- Parameter UEGO_tiSmoothIPmp_C ----- */
    uint16 _UEGO_tiSmoothIPmp_C;
    /* ----- Parameter UEGO_tiSustIPmpVld_C ----- */
    uint16 _UEGO_tiSustIPmpVld_C;
    /* ----- Parameter UEGO_resRFe_C ----- */
    uint8 _UEGO_resRFe_C;
} DATA_UEGO_CJ135IPmpEval_DataFast_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_UEGO_CJ135IPmpEval_DataFast_t DATA_UEGO_CJ135IPmpEval_DataFast
    __attribute__ ((asection (".pta_dataDataFast_UEGO_CJ135IPmpEval","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_UEGO_CJ135IPmpEval_DataFast_t * const VECT_UEGO_CJ135IPmpEval_DataFast
    __attribute__ ((asection (".sdata.pta_vectDataFast_UEGO_CJ135IPmpEval","f=as")));
#endif

/* -- No referenced PTA Structures of UEGO_CJ135RTEval -- */
/* +++++ Addressschema DataFast +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of UEGO_CJ135RvsChrg -- */
/* +++++ Addressschema DataFast +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema DataFast +++++ */

/* -- Macro for referenced Parameter UEGO_resRFe_C -- */
#ifndef UEGO_resRFe_C
#define UEGO_resRFe_C\
    (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRFe_C)
#endif

#ifndef RP_UEGO_resRFe_C
#define RP_UEGO_resRFe_C\
    (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_resRFe_C)
#endif

/* -- Macro for referenced Parameter UEGO_resRGnd_C -- */
#ifndef UEGO_resRGnd_C
#define UEGO_resRGnd_C\
    (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_resRGnd_C)
#endif

#ifndef RP_UEGO_resRGnd_C
#define RP_UEGO_resRGnd_C\
    (DATA_UEGO_CJ135DatEval_DataFast._UEGO_resRGnd_C)
#endif

/* -- Macro for referenced Parameter UEGO_idxHWES1B1_C -- */
#ifndef UEGO_idxHWES1B1_C
#define UEGO_idxHWES1B1_C\
    (VECT_UEGO_CenSrv_DataFast->_UEGO_idxHWES1B1_C)
#endif

#ifndef RP_UEGO_idxHWES1B1_C
#define RP_UEGO_idxHWES1B1_C\
    (DATA_UEGO_CenSrv_DataFast._UEGO_idxHWES1B1_C)
#endif

/* -- Macro for referenced Parameter UEGO_idxHWES1B2_C -- */
#ifndef UEGO_idxHWES1B2_C
#define UEGO_idxHWES1B2_C\
    (VECT_UEGO_CenSrv_DataFast->_UEGO_idxHWES1B2_C)
#endif

#ifndef RP_UEGO_idxHWES1B2_C
#define RP_UEGO_idxHWES1B2_C\
    (DATA_UEGO_CenSrv_DataFast._UEGO_idxHWES1B2_C)
#endif


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */


/* +++++ Addressschema DataFast +++++ */

/* -- Typedef of the PTA-Structure -- */
#ifndef DATA_UEGO_CJ135IPMPEVAL_DATAFAST_T_DEF
#define DATA_UEGO_CJ135IPMPEVAL_DATAFAST_T_DEF
typedef struct
{
    /* ----- Parameter UEGO_facIpDeltaFltConst_C ----- */
    uint16 _UEGO_facIpDeltaFltConst_C;
    /* ----- Parameter UEGO_facIPmpRawFltConst_C ----- */
    uint16 _UEGO_facIPmpRawFltConst_C;
    /* ----- Parameter UEGO_facIPmpSegFltConst_C ----- */
    uint16 _UEGO_facIPmpSegFltConst_C;
    /* ----- Parameter UEGO_facRCodFltConst_C ----- */
    uint16 _UEGO_facRCodFltConst_C;
    /* ----- Parameter UEGO_facUgxFltConst_C ----- */
    uint16 _UEGO_facUgxFltConst_C;
    /* ----- Parameter UEGO_facUp0FltConst_C ----- */
    uint16 _UEGO_facUp0FltConst_C;
    /* ----- Parameter UEGO_resRCrv_C ----- */
    uint16 _UEGO_resRCrv_C;
    /* ----- Parameter UEGO_resRMeas_C ----- */
    uint16 _UEGO_resRMeas_C;
    /* ----- Parameter UEGO_resRRef_C ----- */
    uint16 _UEGO_resRRef_C;
    /* ----- Parameter UEGO_resRSerl_C ----- */
    uint16 _UEGO_resRSerl_C;
    /* ----- Parameter UEGO_stCJ135IPmpEval_C ----- */
    uint16 _UEGO_stCJ135IPmpEval_C;
    /* ----- Parameter UEGO_tiDlyIPmpVld_C ----- */
    uint16 _UEGO_tiDlyIPmpVld_C;
    /* ----- Parameter UEGO_tiSegLngthFilCutOff_C ----- */
    uint16 _UEGO_tiSegLngthFilCutOff_C;
    /* ----- Parameter UEGO_tiSmoothIPmp_C ----- */
    uint16 _UEGO_tiSmoothIPmp_C;
    /* ----- Parameter UEGO_tiSustIPmpVld_C ----- */
    uint16 _UEGO_tiSustIPmpVld_C;
    /* ----- Parameter UEGO_resRFe_C ----- */
    uint8 _UEGO_resRFe_C;
} DATA_UEGO_CJ135IPmpEval_DataFast_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_UEGO_CJ135IPmpEval_DataFast_t DATA_UEGO_CJ135IPmpEval_DataFast
    __attribute__ ((asection (".pta_dataDataFast_UEGO_CJ135IPmpEval","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_UEGO_CJ135IPmpEval_DataFast_t * const VECT_UEGO_CJ135IPmpEval_DataFast
    __attribute__ ((asection (".sdata.pta_vectDataFast_UEGO_CJ135IPmpEval","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumReIni +++++ */

/* +++++ Addressschema SingleBitNoReIni +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema DataFast +++++ */

/* -- Macro for local Parameter UEGO_facIpDeltaFltConst_C -- */
#ifndef UEGO_facIpDeltaFltConst_C
#define UEGO_facIpDeltaFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facIpDeltaFltConst_C)
#endif

#ifndef RP_UEGO_facIpDeltaFltConst_C
#define RP_UEGO_facIpDeltaFltConst_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_facIpDeltaFltConst_C)
#endif

#ifndef __UEGO_facIpDeltaFltConst_C
#define __UEGO_facIpDeltaFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facIpDeltaFltConst_C)
#endif

/* -- Macro for local Parameter UEGO_facIPmpRawFltConst_C -- */
#ifndef UEGO_facIPmpRawFltConst_C
#define UEGO_facIPmpRawFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facIPmpRawFltConst_C)
#endif

#ifndef RP_UEGO_facIPmpRawFltConst_C
#define RP_UEGO_facIPmpRawFltConst_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_facIPmpRawFltConst_C)
#endif

#ifndef __UEGO_facIPmpRawFltConst_C
#define __UEGO_facIPmpRawFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facIPmpRawFltConst_C)
#endif

/* -- Macro for local Parameter UEGO_facIPmpSegFltConst_C -- */
#ifndef UEGO_facIPmpSegFltConst_C
#define UEGO_facIPmpSegFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facIPmpSegFltConst_C)
#endif

#ifndef RP_UEGO_facIPmpSegFltConst_C
#define RP_UEGO_facIPmpSegFltConst_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_facIPmpSegFltConst_C)
#endif

#ifndef __UEGO_facIPmpSegFltConst_C
#define __UEGO_facIPmpSegFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facIPmpSegFltConst_C)
#endif

/* -- Macro for local Parameter UEGO_facRCodFltConst_C -- */
#ifndef UEGO_facRCodFltConst_C
#define UEGO_facRCodFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facRCodFltConst_C)
#endif

#ifndef RP_UEGO_facRCodFltConst_C
#define RP_UEGO_facRCodFltConst_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_facRCodFltConst_C)
#endif

#ifndef __UEGO_facRCodFltConst_C
#define __UEGO_facRCodFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facRCodFltConst_C)
#endif

/* -- Macro for local Parameter UEGO_facUgxFltConst_C -- */
#ifndef UEGO_facUgxFltConst_C
#define UEGO_facUgxFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facUgxFltConst_C)
#endif

#ifndef RP_UEGO_facUgxFltConst_C
#define RP_UEGO_facUgxFltConst_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_facUgxFltConst_C)
#endif

#ifndef __UEGO_facUgxFltConst_C
#define __UEGO_facUgxFltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facUgxFltConst_C)
#endif

/* -- Macro for local Parameter UEGO_facUp0FltConst_C -- */
#ifndef UEGO_facUp0FltConst_C
#define UEGO_facUp0FltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facUp0FltConst_C)
#endif

#ifndef RP_UEGO_facUp0FltConst_C
#define RP_UEGO_facUp0FltConst_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_facUp0FltConst_C)
#endif

#ifndef __UEGO_facUp0FltConst_C
#define __UEGO_facUp0FltConst_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_facUp0FltConst_C)
#endif

/* -- Macro for local Parameter UEGO_resRCrv_C -- */
#ifndef UEGO_resRCrv_C
#define UEGO_resRCrv_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRCrv_C)
#endif

#ifndef RP_UEGO_resRCrv_C
#define RP_UEGO_resRCrv_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_resRCrv_C)
#endif

#ifndef __UEGO_resRCrv_C
#define __UEGO_resRCrv_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRCrv_C)
#endif

/* -- Macro for local Parameter UEGO_resRMeas_C -- */
#ifndef UEGO_resRMeas_C
#define UEGO_resRMeas_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRMeas_C)
#endif

#ifndef RP_UEGO_resRMeas_C
#define RP_UEGO_resRMeas_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_resRMeas_C)
#endif

#ifndef __UEGO_resRMeas_C
#define __UEGO_resRMeas_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRMeas_C)
#endif

/* -- Macro for local Parameter UEGO_resRRef_C -- */
#ifndef UEGO_resRRef_C
#define UEGO_resRRef_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRRef_C)
#endif

#ifndef RP_UEGO_resRRef_C
#define RP_UEGO_resRRef_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_resRRef_C)
#endif

#ifndef __UEGO_resRRef_C
#define __UEGO_resRRef_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRRef_C)
#endif

/* -- Macro for local Parameter UEGO_resRSerl_C -- */
#ifndef UEGO_resRSerl_C
#define UEGO_resRSerl_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRSerl_C)
#endif

#ifndef RP_UEGO_resRSerl_C
#define RP_UEGO_resRSerl_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_resRSerl_C)
#endif

#ifndef __UEGO_resRSerl_C
#define __UEGO_resRSerl_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRSerl_C)
#endif

/* -- Macro for local Parameter UEGO_stCJ135IPmpEval_C -- */
#ifndef UEGO_stCJ135IPmpEval_C
#define UEGO_stCJ135IPmpEval_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_stCJ135IPmpEval_C)
#endif

#ifndef RP_UEGO_stCJ135IPmpEval_C
#define RP_UEGO_stCJ135IPmpEval_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_stCJ135IPmpEval_C)
#endif

#ifndef __UEGO_stCJ135IPmpEval_C
#define __UEGO_stCJ135IPmpEval_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_stCJ135IPmpEval_C)
#endif

/* -- Macro for local Parameter UEGO_tiDlyIPmpVld_C -- */
#ifndef UEGO_tiDlyIPmpVld_C
#define UEGO_tiDlyIPmpVld_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_tiDlyIPmpVld_C)
#endif

#ifndef RP_UEGO_tiDlyIPmpVld_C
#define RP_UEGO_tiDlyIPmpVld_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_tiDlyIPmpVld_C)
#endif

#ifndef __UEGO_tiDlyIPmpVld_C
#define __UEGO_tiDlyIPmpVld_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_tiDlyIPmpVld_C)
#endif

/* -- Macro for local Parameter UEGO_tiSegLngthFilCutOff_C -- */
#ifndef UEGO_tiSegLngthFilCutOff_C
#define UEGO_tiSegLngthFilCutOff_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_tiSegLngthFilCutOff_C)
#endif

#ifndef RP_UEGO_tiSegLngthFilCutOff_C
#define RP_UEGO_tiSegLngthFilCutOff_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_tiSegLngthFilCutOff_C)
#endif

#ifndef __UEGO_tiSegLngthFilCutOff_C
#define __UEGO_tiSegLngthFilCutOff_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_tiSegLngthFilCutOff_C)
#endif

/* -- Macro for local Parameter UEGO_tiSmoothIPmp_C -- */
#ifndef UEGO_tiSmoothIPmp_C
#define UEGO_tiSmoothIPmp_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_tiSmoothIPmp_C)
#endif

#ifndef RP_UEGO_tiSmoothIPmp_C
#define RP_UEGO_tiSmoothIPmp_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_tiSmoothIPmp_C)
#endif

#ifndef __UEGO_tiSmoothIPmp_C
#define __UEGO_tiSmoothIPmp_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_tiSmoothIPmp_C)
#endif

/* -- Macro for local Parameter UEGO_tiSustIPmpVld_C -- */
#ifndef UEGO_tiSustIPmpVld_C
#define UEGO_tiSustIPmpVld_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_tiSustIPmpVld_C)
#endif

#ifndef RP_UEGO_tiSustIPmpVld_C
#define RP_UEGO_tiSustIPmpVld_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_tiSustIPmpVld_C)
#endif

#ifndef __UEGO_tiSustIPmpVld_C
#define __UEGO_tiSustIPmpVld_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_tiSustIPmpVld_C)
#endif

/* -- Macro for local Parameter UEGO_resRFe_C -- */
#ifndef UEGO_resRFe_C
#define UEGO_resRFe_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRFe_C)
#endif

#ifndef RP_UEGO_resRFe_C
#define RP_UEGO_resRFe_C (DATA_UEGO_CJ135IPmpEval_DataFast._UEGO_resRFe_C)
#endif

#ifndef __UEGO_resRFe_C
#define __UEGO_resRFe_C (VECT_UEGO_CJ135IPmpEval_DataFast->_UEGO_resRFe_C)
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumReIni +++++ */

/* +++++ Addressschema SingleBitNoReIni +++++ */


#undef _DAT_H
#endif /* _UEGO_CJ135IPMPEVAL_DAT_H */
