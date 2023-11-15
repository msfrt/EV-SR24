#ifndef _UEGO_CJ135DATEVAL_DAT_H
#define _UEGO_CJ135DATEVAL_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter UEGO_facFkalFltConst_C */
#ifndef _UEGO_facFkalFltConst_C_DEF
#define _UEGO_facFkalFltConst_C_DEF
#define UEGO_facFkalFltConst_CM UEGO_facFkalFltConst_C
#endif /* _UEGO_facFkalFltConst_C_DEF */

/* Defined Parameter UEGO_ratCmnModCorrn_C */
#ifndef _UEGO_ratCmnModCorrn_C_DEF
#define _UEGO_ratCmnModCorrn_C_DEF
#define UEGO_ratCmnModCorrn_CM UEGO_ratCmnModCorrn_C
#endif /* _UEGO_ratCmnModCorrn_C_DEF */

/* Defined Parameter UEGO_ratFkalCorrn_C */
#ifndef _UEGO_ratFkalCorrn_C_DEF
#define _UEGO_ratFkalCorrn_C_DEF
#define UEGO_ratFkalCorrn_CM UEGO_ratFkalCorrn_C
#endif /* _UEGO_ratFkalCorrn_C_DEF */

/* Defined Parameter UEGO_uGndOffCorrn_C */
#ifndef _UEGO_uGndOffCorrn_C_DEF
#define _UEGO_uGndOffCorrn_C_DEF
#define UEGO_uGndOffCorrn_CM UEGO_uGndOffCorrn_C
#endif /* _UEGO_uGndOffCorrn_C_DEF */

/* Defined Parameter UEGO_uVCC3Ref_C */
#ifndef _UEGO_uVCC3Ref_C_DEF
#define _UEGO_uVCC3Ref_C_DEF
#define UEGO_uVCC3Ref_CM UEGO_uVCC3Ref_C
#endif /* _UEGO_uVCC3Ref_C_DEF */

/* Defined Parameter UEGO_facUcalFltConst_C */
#ifndef _UEGO_facUcalFltConst_C_DEF
#define _UEGO_facUcalFltConst_C_DEF
#define UEGO_facUcalFltConst_CM UEGO_facUcalFltConst_C
#endif /* _UEGO_facUcalFltConst_C_DEF */

/* Defined Parameter UEGO_facUg0FltConst_C */
#ifndef _UEGO_facUg0FltConst_C_DEF
#define _UEGO_facUg0FltConst_C_DEF
#define UEGO_facUg0FltConst_CM UEGO_facUg0FltConst_C
#endif /* _UEGO_facUg0FltConst_C_DEF */

/* Defined Parameter UEGO_resRsgaspaMes_C */
#ifndef _UEGO_resRsgaspaMes_C_DEF
#define _UEGO_resRsgaspaMes_C_DEF
#define UEGO_resRsgaspaMes_CM UEGO_resRsgaspaMes_C
#endif /* _UEGO_resRsgaspaMes_C_DEF */

/* Defined Parameter UEGO_resRCal_C */
#ifndef _UEGO_resRCal_C_DEF
#define _UEGO_resRCal_C_DEF
#define UEGO_resRCal_CM UEGO_resRCal_C
#endif /* _UEGO_resRCal_C_DEF */

/* Defined Parameter UEGO_resRGnd_C */
#ifndef _UEGO_resRGnd_C_DEF
#define _UEGO_resRGnd_C_DEF
#define UEGO_resRGnd_CM UEGO_resRGnd_C
#endif /* _UEGO_resRGnd_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */


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


/* ++++++++++++++++++++ Class UEGO_CJ135DatEvalClass ++++++++++++++++++++++ */
 
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


/* ++++++++++++++++++++ Class UEGO_CJ135DatEval5msIfClass ++++++++++++++++++++++ */
 
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

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */


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


/* Exported Variable: UEGO_flgIsqrStrtdS1B1 */
/* UEGO_flgIsqrStrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgIsqrStrtdS1B2 */
/* UEGO_flgIsqrStrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgIsqStrtdS1B1 */
/* UEGO_flgIsqStrtdS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* Exported Variable: UEGO_flgIsqStrtdS1B2 */
/* UEGO_flgIsqStrtdS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */
// Bit Macros for use with MCOP earlier than V1.9.0


/* +++++ Addressschema intRam +++++ */


/* Exported Variable: UEGO_iIsqMeasS1B1 */
/* UEGO_iIsqMeasS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIsqMeasS1B2 */
/* UEGO_iIsqMeasS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIsqrMeasS1B1 */
/* UEGO_iIsqrMeasS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_iIsqrMeasS1B2 */
/* UEGO_iIsqrMeasS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_numUoffgnd1S1B1 */
/* UEGO_numUoffgnd1S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_numUoffgnd1S1B2 */
/* UEGO_numUoffgnd1S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_numUoffgnd2S1B1 */
/* UEGO_numUoffgnd2S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_numUoffgnd2S1B2 */
/* UEGO_numUoffgnd2S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_numUoffgnd3S1B1 */
/* UEGO_numUoffgnd3S1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_numUoffgnd3S1B2 */
/* UEGO_numUoffgnd3S1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


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

/* +++++ Addressschema MediumReIni +++++ */
/* MediumSlowReIni */
#pragma section .bss.ReIni aw 


/* Exported Variable: UEGO_TmpArr */
#ifdef _DAT_H
#ifndef __UEGO_TMPARR_EXT__
#define __UEGO_TMPARR_EXT__
extern uint16 UEGO_TmpArr[16];
#endif
#endif

/* Footer */
#pragma section 

/* +++++ Addressschema SingleBitNoReIni +++++ */
/* SingleBitNoReIniHeader */
#pragma section .bbss awbz 


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
/* Footer */
#pragma section 


#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */


/* ++++++++++++++++++++ Class DigitalLowpass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_CJ135CalcElecCorrnClass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_CJ135DatEvalClass ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_CJ135DatEval5msIfClass ++++++++++++++++++++++ */
/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* --------------- */
/* Local OML-Class UEGO_CJ135CalcElecCorrnClass, Instance UEGO_CJ135CalcElecCorrnS1B1 */
/* --------------- */


/* Instance UEGO_CJ135CalcElecCorrnS1B1, Addressschema MediumReIni */
#ifndef _UEGO_CJ135CalcElecCorrnS1B1_DEF
#define _UEGO_CJ135CalcElecCorrnS1B1_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135CALCELECCORRNCLASS_IMPL UEGO_CJ135CalcElecCorrnS1B1;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135CalcElecCorrnS1B1_DEF */

/* --------------- */
/* Local OML-Class UEGO_CJ135CalcElecCorrnClass, Instance UEGO_CJ135CalcElecCorrnS1B2 */
/* --------------- */


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
/* Local OML-Class UEGO_CJ135DatEvalClass, Instance UEGO_CJ135DatEvalS1B1_I */
/* --------------- */


/* Instance UEGO_CJ135DatEvalS1B1_I, Addressschema MediumReIni */
#ifndef _UEGO_CJ135DatEvalS1B1_I_DEF
#define _UEGO_CJ135DatEvalS1B1_I_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135DATEVALCLASS_IMPL UEGO_CJ135DatEvalS1B1_I;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135DatEvalS1B1_I_DEF */

/* --------------- */
/* Local OML-Class UEGO_CJ135DatEvalClass, Instance UEGO_CJ135DatEvalS1B2_I */
/* --------------- */


/* Instance UEGO_CJ135DatEvalS1B2_I, Addressschema MediumReIni */
#ifndef _UEGO_CJ135DatEvalS1B2_I_DEF
#define _UEGO_CJ135DatEvalS1B2_I_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135DATEVALCLASS_IMPL UEGO_CJ135DatEvalS1B2_I;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135DatEvalS1B2_I_DEF */

/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

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
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema DataFast +++++ */

/* -- Macro for referenced Parameter UEGO_resRCal_C -- */
#ifndef UEGO_resRCal_C
#define UEGO_resRCal_C\
    (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_resRCal_C)
#endif

#ifndef RP_UEGO_resRCal_C
#define RP_UEGO_resRCal_C\
    (DATA_UEGO_CJ135DatEval_DataFast._UEGO_resRCal_C)
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


/* +++++ Addressschema ADS_Bit +++++ */

/* +++++ Addressschema DataFast +++++ */

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

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumReIni +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema ADS_Bit +++++ */

/* +++++ Addressschema DataFast +++++ */

/* -- Macro for local Parameter UEGO_facFkalFltConst_C -- */
#ifndef UEGO_facFkalFltConst_C
#define UEGO_facFkalFltConst_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_facFkalFltConst_C)
#endif

#ifndef RP_UEGO_facFkalFltConst_C
#define RP_UEGO_facFkalFltConst_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_facFkalFltConst_C)
#endif

#ifndef __UEGO_facFkalFltConst_C
#define __UEGO_facFkalFltConst_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_facFkalFltConst_C)
#endif

/* -- Macro for local Parameter UEGO_ratCmnModCorrn_C -- */
#ifndef UEGO_ratCmnModCorrn_C
#define UEGO_ratCmnModCorrn_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_ratCmnModCorrn_C)
#endif

#ifndef RP_UEGO_ratCmnModCorrn_C
#define RP_UEGO_ratCmnModCorrn_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_ratCmnModCorrn_C)
#endif

#ifndef __UEGO_ratCmnModCorrn_C
#define __UEGO_ratCmnModCorrn_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_ratCmnModCorrn_C)
#endif

/* -- Macro for local Parameter UEGO_ratFkalCorrn_C -- */
#ifndef UEGO_ratFkalCorrn_C
#define UEGO_ratFkalCorrn_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_ratFkalCorrn_C)
#endif

#ifndef RP_UEGO_ratFkalCorrn_C
#define RP_UEGO_ratFkalCorrn_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_ratFkalCorrn_C)
#endif

#ifndef __UEGO_ratFkalCorrn_C
#define __UEGO_ratFkalCorrn_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_ratFkalCorrn_C)
#endif

/* -- Macro for local Parameter UEGO_uGndOffCorrn_C -- */
#ifndef UEGO_uGndOffCorrn_C
#define UEGO_uGndOffCorrn_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_uGndOffCorrn_C)
#endif

#ifndef RP_UEGO_uGndOffCorrn_C
#define RP_UEGO_uGndOffCorrn_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_uGndOffCorrn_C)
#endif

#ifndef __UEGO_uGndOffCorrn_C
#define __UEGO_uGndOffCorrn_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_uGndOffCorrn_C)
#endif

/* -- Macro for local Parameter UEGO_uVCC3Ref_C -- */
#ifndef UEGO_uVCC3Ref_C
#define UEGO_uVCC3Ref_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_uVCC3Ref_C)
#endif

#ifndef RP_UEGO_uVCC3Ref_C
#define RP_UEGO_uVCC3Ref_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_uVCC3Ref_C)
#endif

#ifndef __UEGO_uVCC3Ref_C
#define __UEGO_uVCC3Ref_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_uVCC3Ref_C)
#endif

/* -- Macro for local Parameter UEGO_facUcalFltConst_C -- */
#ifndef UEGO_facUcalFltConst_C
#define UEGO_facUcalFltConst_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_facUcalFltConst_C)
#endif

#ifndef RP_UEGO_facUcalFltConst_C
#define RP_UEGO_facUcalFltConst_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_facUcalFltConst_C)
#endif

#ifndef __UEGO_facUcalFltConst_C
#define __UEGO_facUcalFltConst_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_facUcalFltConst_C)
#endif

/* -- Macro for local Parameter UEGO_facUg0FltConst_C -- */
#ifndef UEGO_facUg0FltConst_C
#define UEGO_facUg0FltConst_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_facUg0FltConst_C)
#endif

#ifndef RP_UEGO_facUg0FltConst_C
#define RP_UEGO_facUg0FltConst_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_facUg0FltConst_C)
#endif

#ifndef __UEGO_facUg0FltConst_C
#define __UEGO_facUg0FltConst_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_facUg0FltConst_C)
#endif

/* -- Macro for local Parameter UEGO_resRsgaspaMes_C -- */
#ifndef UEGO_resRsgaspaMes_C
#define UEGO_resRsgaspaMes_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_resRsgaspaMes_C)
#endif

#ifndef RP_UEGO_resRsgaspaMes_C
#define RP_UEGO_resRsgaspaMes_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_resRsgaspaMes_C)
#endif

#ifndef __UEGO_resRsgaspaMes_C
#define __UEGO_resRsgaspaMes_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_resRsgaspaMes_C)
#endif

/* -- Macro for local Parameter UEGO_resRCal_C -- */
#ifndef UEGO_resRCal_C
#define UEGO_resRCal_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_resRCal_C)
#endif

#ifndef RP_UEGO_resRCal_C
#define RP_UEGO_resRCal_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_resRCal_C)
#endif

#ifndef __UEGO_resRCal_C
#define __UEGO_resRCal_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_resRCal_C)
#endif

/* -- Macro for local Parameter UEGO_resRGnd_C -- */
#ifndef UEGO_resRGnd_C
#define UEGO_resRGnd_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_resRGnd_C)
#endif

#ifndef RP_UEGO_resRGnd_C
#define RP_UEGO_resRGnd_C (DATA_UEGO_CJ135DatEval_DataFast._UEGO_resRGnd_C)
#endif

#ifndef __UEGO_resRGnd_C
#define __UEGO_resRGnd_C (VECT_UEGO_CJ135DatEval_DataFast->_UEGO_resRGnd_C)
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumReIni +++++ */


#undef _DAT_H
#endif /* _UEGO_CJ135DATEVAL_DAT_H */
