#ifndef _UEGO_CJ135DIAGSNSR_DAT_H
#define _UEGO_CJ135DIAGSNSR_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */




/* Defined Parameter UEGO_rLamMinRpc_C */
#ifndef _UEGO_rLamMinRpc_C_DEF
#define _UEGO_rLamMinRpc_C_DEF
#define UEGO_rLamMinRpc_CM UEGO_rLamMinRpc_C
#endif /* _UEGO_rLamMinRpc_C_DEF */

/* Defined Parameter UEGO_tiMinRpcDlyNotSuc_C */
#ifndef _UEGO_tiMinRpcDlyNotSuc_C_DEF
#define _UEGO_tiMinRpcDlyNotSuc_C_DEF
#define UEGO_tiMinRpcDlyNotSuc_CM UEGO_tiMinRpcDlyNotSuc_C
#endif /* _UEGO_tiMinRpcDlyNotSuc_C_DEF */

/* Defined Parameter UEGO_tiMinRpcDlySuc_C */
#ifndef _UEGO_tiMinRpcDlySuc_C_DEF
#define _UEGO_tiMinRpcDlySuc_C_DEF
#define UEGO_tiMinRpcDlySuc_CM UEGO_tiMinRpcDlySuc_C
#endif /* _UEGO_tiMinRpcDlySuc_C_DEF */

/* Defined Parameter UEGO_tiMinRpcDurn_C */
#ifndef _UEGO_tiMinRpcDurn_C_DEF
#define _UEGO_tiMinRpcDurn_C_DEF
#define UEGO_tiMinRpcDurn_CM UEGO_tiMinRpcDurn_C
#endif /* _UEGO_tiMinRpcDurn_C_DEF */

/* Defined Parameter UEGO_tiRpcTDly_C */
#ifndef _UEGO_tiRpcTDly_C_DEF
#define _UEGO_tiRpcTDly_C_DEF
#define UEGO_tiRpcTDly_CM UEGO_tiRpcTDly_C
#endif /* _UEGO_tiRpcTDly_C_DEF */

/* Defined Parameter UEGO_tMinRpc_C */
#ifndef _UEGO_tMinRpc_C_DEF
#define _UEGO_tMinRpc_C_DEF
#define UEGO_tMinRpc_CM UEGO_tMinRpc_C
#endif /* _UEGO_tMinRpc_C_DEF */

/* Defined Parameter UEGO_numRegIpoffRatRpc_C */
#ifndef _UEGO_numRegIpoffRatRpc_C_DEF
#define _UEGO_numRegIpoffRatRpc_C_DEF
#define UEGO_numRegIpoffRatRpc_CM UEGO_numRegIpoffRatRpc_C
#endif /* _UEGO_numRegIpoffRatRpc_C_DEF */

/* Defined Parameter UEGO_numRegIpsmRpc_C */
#ifndef _UEGO_numRegIpsmRpc_C_DEF
#define _UEGO_numRegIpsmRpc_C_DEF
#define UEGO_numRegIpsmRpc_CM UEGO_numRegIpsmRpc_C
#endif /* _UEGO_numRegIpsmRpc_C_DEF */

/* Defined Parameter UEGO_numRegPatRpc_C */
#ifndef _UEGO_numRegPatRpc_C_DEF
#define _UEGO_numRegPatRpc_C_DEF
#define UEGO_numRegPatRpc_CM UEGO_numRegPatRpc_C
#endif /* _UEGO_numRegPatRpc_C_DEF */

/* Defined Parameter UEGO_stRpcVomCdn_C */
#ifndef _UEGO_stRpcVomCdn_C_DEF
#define _UEGO_stRpcVomCdn_C_DEF
#define UEGO_stRpcVomCdn_CM UEGO_stRpcVomCdn_C
#endif /* _UEGO_stRpcVomCdn_C_DEF */

/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */


/* ++++++++++++++++++++ Class EdgeFalling ++++++++++++++++++++++ */
 
/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _EDGEFALLING_U8_
#define _EDGEFALLING_U8_

/* -- Wrapper of Class EdgeFalling in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable oldSignal */
   uint8 oldSignal;

} EDGEFALLING_U8;

#endif /* _EDGEFALLING_U8_ */


/* ++++++++++++++++++++ Class EdgeRising ++++++++++++++++++++++ */
 
/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _EDGERISING_U8_
#define _EDGERISING_U8_

/* -- Wrapper of Class EdgeRising in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable oldSignal */
   uint8 oldSignal;

} EDGERISING_U8;

#endif /* _EDGERISING_U8_ */


/* ++++++++++++++++++++ Class Counter ++++++++++++++++++++++ */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _COUNTER_U16_
#define _COUNTER_U16_

/* -- Wrapper of Class Counter in Addressschema Xram -- */
typedef struct
{
   /* Variable counter */
   uint16 counter;

} COUNTER_U16;

#endif /* _COUNTER_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _COUNTER_U8_
#define _COUNTER_U8_

/* -- Wrapper of Class Counter in Addressschema Xram -- */
typedef struct
{
   /* Variable counter */
   uint8 counter;

} COUNTER_U8;

#endif /* _COUNTER_U8_ */


/* ++++++++++++++++++++ Class TurnOffDelay ++++++++++++++++++++++ */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAY_U16_
#define _TURNOFFDELAY_U16_

/* -- Wrapper of Class TurnOffDelay in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable time */
   uint16 time;

} TURNOFFDELAY_U16;

#endif /* _TURNOFFDELAY_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNOFFDELAY_U8_
#define _TURNOFFDELAY_U8_

/* -- Wrapper of Class TurnOffDelay in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable time */
   uint8 time;

} TURNOFFDELAY_U8;

#endif /* _TURNOFFDELAY_U8_ */


/* ++++++++++++++++++++ Class UEGO_CJ135DiagSnsrClass ++++++++++++++++++++++ */
 
/* -- Implementation IMPL -- */
/* -- OML-N-Class -- */
#ifndef _UEGO_CJ135DIAGSNSRCLASS_IMPL_
#define _UEGO_CJ135DIAGSNSRCLASS_IMPL_

/* -- Wrapper of Class UEGO_CJ135DiagSnsrClass in Addressschema MediumReIni -- */
typedef struct
{
   /* Variable flgRpcRelsReqd */
   bool flgRpcRelsReqd;

   /* Variable flgRpcSuc */
   bool flgRpcSuc;

   /* Variable nrRpcCurrCyc */
   uint8 nrRpcCurrCyc;

   /* Variable stDFCRpc */
   uint32 stDFCRpc;

   /* Variable stRegRpcActv */
   uint16 stRegRpcActv;

   /* Variable stRegRpcActvNxtCyc */
   uint16 stRegRpcActvNxtCyc;

   /* Variable tiRpcSW */
   uint32 tiRpcSW;

   /* Instance of Embedded Class EDGEFALLING_U8 */
   EDGEFALLING_U8 RpcActvEF_I;

   /* Instance of Embedded Class EDGERISING_U8 */
   EDGERISING_U8 RpcActvER_I;

   /* Instance of Embedded Class COUNTER_U8 */
   COUNTER_U8 RpcCTR_I;

   /* Instance of Embedded Class EDGERISING_U8 */
   EDGERISING_U8 RpcSucER_I;

   /* Instance of Embedded Class TURNOFFDELAY_U16 */
   TURNOFFDELAY_U16 RpcTempTOFF_I;

} UEGO_CJ135DIAGSNSRCLASS_IMPL;

#endif /* _UEGO_CJ135DIAGSNSRCLASS_IMPL_ */

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


/* Referenced System Constant CMBTYP_DS */


/* CMBTYP_DS Typ=ub */
#ifndef CMBTYP_DS
  #define CMBTYP_DS 0L
#elif (CMBTYP_DS != 0L)
  #error >>>> 'CMBTYP_DS' multiple defined
#endif


/* Referenced System Constant CMBTYP_SY */


/* CMBTYP_SY Typ=sw */
#ifndef CMBTYP_SY
  #define CMBTYP_SY 1L
#elif (CMBTYP_SY != 1L)
  #error >>>> 'CMBTYP_SY' multiple defined
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


/* Referenced System Constant UEGO_ICS2B2_SY */


/* UEGO_ICS2B2_SY Typ=sw */
#ifndef UEGO_ICS2B2_SY
  #define UEGO_ICS2B2_SY 0L
#elif (UEGO_ICS2B2_SY != 0L)
  #error >>>> 'UEGO_ICS2B2_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS3B1_SY */


/* UEGO_ICS3B1_SY Typ=sw */
#ifndef UEGO_ICS3B1_SY
  #define UEGO_ICS3B1_SY 0L
#elif (UEGO_ICS3B1_SY != 0L)
  #error >>>> 'UEGO_ICS3B1_SY' multiple defined
#endif


/* Referenced System Constant UEGO_ICS3B2_SY */


/* UEGO_ICS3B2_SY Typ=sw */
#ifndef UEGO_ICS3B2_SY
  #define UEGO_ICS3B2_SY 0L
#elif (UEGO_ICS3B2_SY != 0L)
  #error >>>> 'UEGO_ICS3B2_SY' multiple defined
#endif

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_
/* +++++ Addressschema intRam +++++ */


/* Exported Variable: UEGO_nrRpcCurrCycS1B1 */
/* UEGO_nrRpcCurrCycS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Exported Variable: UEGO_nrRpcCurrCycS1B2 */
/* UEGO_nrRpcCurrCycS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */


/* Imported Variable: ESC_tiSampling */
#define IMPORTED
#ifndef _D_FILE_ 

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

/* Imported Variable: UEGO_stLsmErrInfoDiagRegS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_stLsmErrInfoDiagRegS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_stLsmErrInfoDiagRegS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_stLsmErrInfoDiagRegS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_tCerS1B1 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_tCerS1B1 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_tCerS1B2 */
#define IMPORTED
#ifndef _D_FILE_ 
/* UEGO_tCerS1B2 is used for object type message and is generated in the corresponding msg.h and mcop_copy.c file */

#endif /* _D_FILE_ */
#undef IMPORTED

/* +++++ Addressschema MediumReIni +++++ */
/* MediumSlowReIni */
#pragma section .bss.ReIni aw 


/* Imported Variable: dfrzaf2_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __DFRZAF2_W_EXT__
#define __DFRZAF2_W_EXT__
extern sint16 dfrzaf2_w;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: dfrzaf_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __DFRZAF_W_EXT__
#define __DFRZAF_W_EXT__
extern sint16 dfrzaf_w;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: UEGO_TmpArr_10ms */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __UEGO_TMPARR_10MS_EXT__
#define __UEGO_TMPARR_10MS_EXT__
extern uint16 UEGO_TmpArr_10ms[16];
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED
/* Footer */
#pragma section 

/* +++++ Addressschema SlowNoReIni +++++ */


/* Imported Variable: lamsons2_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __LAMSONS2_W_EXT__
#define __LAMSONS2_W_EXT__
extern uint16 lamsons2_w;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED

/* Imported Variable: lamsons_w */
#define IMPORTED
#ifndef _D_FILE_ 
#ifdef _DAT_H
#ifndef __LAMSONS_W_EXT__
#define __LAMSONS_W_EXT__
extern uint16 lamsons_w;
#endif
#endif

#endif /* _D_FILE_ */
#undef IMPORTED


#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */


/* ++++++++++++++++++++ Class EdgeFalling ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class EdgeRising ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class Counter ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class TurnOffDelay ++++++++++++++++++++++ */

/* ++++++++++++++++++++ Class UEGO_CJ135DiagSnsrClass ++++++++++++++++++++++ */
/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* --------------- */
/* Local OML-Class UEGO_CJ135DiagSnsrClass, Instance UEGO_CJ135DiagSnsrS1B1_I */
/* --------------- */


/* Instance UEGO_CJ135DiagSnsrS1B1_I, Addressschema MediumReIni */
#ifndef _UEGO_CJ135DiagSnsrS1B1_I_DEF
#define _UEGO_CJ135DiagSnsrS1B1_I_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135DIAGSNSRCLASS_IMPL UEGO_CJ135DiagSnsrS1B1_I;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135DiagSnsrS1B1_I_DEF */

/* --------------- */
/* Local OML-Class UEGO_CJ135DiagSnsrClass, Instance UEGO_CJ135DiagSnsrS1B2_I */
/* --------------- */


/* Instance UEGO_CJ135DiagSnsrS1B2_I, Addressschema MediumReIni */
#ifndef _UEGO_CJ135DiagSnsrS1B2_I_DEF
#define _UEGO_CJ135DiagSnsrS1B2_I_DEF

/* MediumSlowReIni */
#pragma section .bss.ReIni aw 

extern UEGO_CJ135DIAGSNSRCLASS_IMPL UEGO_CJ135DiagSnsrS1B2_I;
/* Footer */
#pragma section 

#endif /* _UEGO_CJ135DiagSnsrS1B2_I_DEF */

/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */

/* -- No referenced PTA Structures of ESC_Stack -- */
/* -- No referenced PTA Structures of GConf_Sy -- */
/* -- No referenced PTA Structures of MEDC_FixConst_DS_GS -- */
/* -- No referenced PTA Structures of SWAdp -- */
/* +++++ Addressschema DataFar +++++ */

/* Referenced DSerap Structure will not be generated */
 
 					 					
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

/* -- No referenced PTA Structures of UEGO_CJ135Dia -- */
/* +++++ Addressschema DataFast +++++ */

/* Referenced DSerap Structure will not be generated */
 
/* -- No referenced PTA Structures of UEGO_CJ135RTEval -- */
/* +++++ Addressschema DataFast +++++ */

/* Referenced DSerap Structure will not be generated */
 

/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema DataFast +++++ */

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
#ifndef DATA_UEGO_CJ135DIAGSNSR_DATAFAST_T_DEF
#define DATA_UEGO_CJ135DIAGSNSR_DATAFAST_T_DEF
typedef struct
{
    /* ----- Parameter UEGO_rLamMinRpc_C ----- */
    sint16 _UEGO_rLamMinRpc_C;
    /* ----- Parameter UEGO_tiMinRpcDlyNotSuc_C ----- */
    uint32 _UEGO_tiMinRpcDlyNotSuc_C;
    /* ----- Parameter UEGO_tiMinRpcDlySuc_C ----- */
    uint32 _UEGO_tiMinRpcDlySuc_C;
    /* ----- Parameter UEGO_tiMinRpcDurn_C ----- */
    uint16 _UEGO_tiMinRpcDurn_C;
    /* ----- Parameter UEGO_tiRpcTDly_C ----- */
    uint16 _UEGO_tiRpcTDly_C;
    /* ----- Parameter UEGO_tMinRpc_C ----- */
    uint16 _UEGO_tMinRpc_C;
    /* ----- Parameter UEGO_numRegIpoffRatRpc_C ----- */
    sint16 _UEGO_numRegIpoffRatRpc_C;
    /* ----- Parameter UEGO_numRegIpsmRpc_C ----- */
    uint8 _UEGO_numRegIpsmRpc_C;
    /* ----- Parameter UEGO_numRegPatRpc_C ----- */
    uint16 _UEGO_numRegPatRpc_C;
    /* ----- Parameter UEGO_stRpcVomCdn_C ----- */
    uint8 _UEGO_stRpcVomCdn_C;
} DATA_UEGO_CJ135DiagSnsr_DataFast_t;

/* -- Extern Declaration of the Data Structure -- */
extern const DATA_UEGO_CJ135DiagSnsr_DataFast_t DATA_UEGO_CJ135DiagSnsr_DataFast
    __attribute__ ((asection (".pta_dataDataFast_UEGO_CJ135DiagSnsr","f=a")));

/* -- Extern Declaration of the Pointer to the Structure -- */
extern const DATA_UEGO_CJ135DiagSnsr_DataFast_t * const VECT_UEGO_CJ135DiagSnsr_DataFast
    __attribute__ ((asection (".sdata.pta_vectDataFast_UEGO_CJ135DiagSnsr","f=as")));
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumReIni +++++ */


/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */

/* +++++ Addressschema DataFast +++++ */

/* -- Macro for local Parameter UEGO_rLamMinRpc_C -- */
#ifndef UEGO_rLamMinRpc_C
#define UEGO_rLamMinRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_rLamMinRpc_C)
#endif

#ifndef RP_UEGO_rLamMinRpc_C
#define RP_UEGO_rLamMinRpc_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_rLamMinRpc_C)
#endif

#ifndef __UEGO_rLamMinRpc_C
#define __UEGO_rLamMinRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_rLamMinRpc_C)
#endif

/* -- Macro for local Parameter UEGO_tiMinRpcDlyNotSuc_C -- */
#ifndef UEGO_tiMinRpcDlyNotSuc_C
#define UEGO_tiMinRpcDlyNotSuc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tiMinRpcDlyNotSuc_C)
#endif

#ifndef RP_UEGO_tiMinRpcDlyNotSuc_C
#define RP_UEGO_tiMinRpcDlyNotSuc_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_tiMinRpcDlyNotSuc_C)
#endif

#ifndef __UEGO_tiMinRpcDlyNotSuc_C
#define __UEGO_tiMinRpcDlyNotSuc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tiMinRpcDlyNotSuc_C)
#endif

/* -- Macro for local Parameter UEGO_tiMinRpcDlySuc_C -- */
#ifndef UEGO_tiMinRpcDlySuc_C
#define UEGO_tiMinRpcDlySuc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tiMinRpcDlySuc_C)
#endif

#ifndef RP_UEGO_tiMinRpcDlySuc_C
#define RP_UEGO_tiMinRpcDlySuc_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_tiMinRpcDlySuc_C)
#endif

#ifndef __UEGO_tiMinRpcDlySuc_C
#define __UEGO_tiMinRpcDlySuc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tiMinRpcDlySuc_C)
#endif

/* -- Macro for local Parameter UEGO_tiMinRpcDurn_C -- */
#ifndef UEGO_tiMinRpcDurn_C
#define UEGO_tiMinRpcDurn_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tiMinRpcDurn_C)
#endif

#ifndef RP_UEGO_tiMinRpcDurn_C
#define RP_UEGO_tiMinRpcDurn_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_tiMinRpcDurn_C)
#endif

#ifndef __UEGO_tiMinRpcDurn_C
#define __UEGO_tiMinRpcDurn_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tiMinRpcDurn_C)
#endif

/* -- Macro for local Parameter UEGO_tiRpcTDly_C -- */
#ifndef UEGO_tiRpcTDly_C
#define UEGO_tiRpcTDly_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tiRpcTDly_C)
#endif

#ifndef RP_UEGO_tiRpcTDly_C
#define RP_UEGO_tiRpcTDly_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_tiRpcTDly_C)
#endif

#ifndef __UEGO_tiRpcTDly_C
#define __UEGO_tiRpcTDly_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tiRpcTDly_C)
#endif

/* -- Macro for local Parameter UEGO_tMinRpc_C -- */
#ifndef UEGO_tMinRpc_C
#define UEGO_tMinRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tMinRpc_C)
#endif

#ifndef RP_UEGO_tMinRpc_C
#define RP_UEGO_tMinRpc_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_tMinRpc_C)
#endif

#ifndef __UEGO_tMinRpc_C
#define __UEGO_tMinRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_tMinRpc_C)
#endif

/* -- Macro for local Parameter UEGO_numRegIpoffRatRpc_C -- */
#ifndef UEGO_numRegIpoffRatRpc_C
#define UEGO_numRegIpoffRatRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_numRegIpoffRatRpc_C)
#endif

#ifndef RP_UEGO_numRegIpoffRatRpc_C
#define RP_UEGO_numRegIpoffRatRpc_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_numRegIpoffRatRpc_C)
#endif

#ifndef __UEGO_numRegIpoffRatRpc_C
#define __UEGO_numRegIpoffRatRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_numRegIpoffRatRpc_C)
#endif

/* -- Macro for local Parameter UEGO_numRegIpsmRpc_C -- */
#ifndef UEGO_numRegIpsmRpc_C
#define UEGO_numRegIpsmRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_numRegIpsmRpc_C)
#endif

#ifndef RP_UEGO_numRegIpsmRpc_C
#define RP_UEGO_numRegIpsmRpc_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_numRegIpsmRpc_C)
#endif

#ifndef __UEGO_numRegIpsmRpc_C
#define __UEGO_numRegIpsmRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_numRegIpsmRpc_C)
#endif

/* -- Macro for local Parameter UEGO_numRegPatRpc_C -- */
#ifndef UEGO_numRegPatRpc_C
#define UEGO_numRegPatRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_numRegPatRpc_C)
#endif

#ifndef RP_UEGO_numRegPatRpc_C
#define RP_UEGO_numRegPatRpc_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_numRegPatRpc_C)
#endif

#ifndef __UEGO_numRegPatRpc_C
#define __UEGO_numRegPatRpc_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_numRegPatRpc_C)
#endif

/* -- Macro for local Parameter UEGO_stRpcVomCdn_C -- */
#ifndef UEGO_stRpcVomCdn_C
#define UEGO_stRpcVomCdn_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_stRpcVomCdn_C)
#endif

#ifndef RP_UEGO_stRpcVomCdn_C
#define RP_UEGO_stRpcVomCdn_C (DATA_UEGO_CJ135DiagSnsr_DataFast._UEGO_stRpcVomCdn_C)
#endif

#ifndef __UEGO_stRpcVomCdn_C
#define __UEGO_stRpcVomCdn_C (VECT_UEGO_CJ135DiagSnsr_DataFast->_UEGO_stRpcVomCdn_C)
#endif

/* +++++ Addressschema intRam +++++ */

/* +++++ Addressschema MediumReIni +++++ */


#undef _DAT_H
#endif /* _UEGO_CJ135DIAGSNSR_DAT_H */
