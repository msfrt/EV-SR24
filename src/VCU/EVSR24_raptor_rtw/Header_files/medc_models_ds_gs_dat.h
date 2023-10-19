#ifndef _MEDC_MODELS_DS_GS_DAT_H
#define _MEDC_MODELS_DS_GS_DAT_H

#define _DAT_H


/* ------------------------------------------------------------- */
/* ------------------ Common Typedeclarations ------------------ */
/* ------------------------------------------------------------- */


/* Parameter-Model BypTabStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _BypTabStruct_DEF
#define _BypTabStruct_DEF
#ifndef _DAT_H
typedef struct
{
    uint8 Vector_C;
    uint8 Channel;
} BypTabStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint8 Vector_C;
    uint8 Channel;
} BypTabStruct;
#endif

#endif /* _BypTabStruct_DEF */

/* Parameter-Model Can_LmtValues_t defined by actual function MEDC_Models_DS_GS */
#ifndef _Can_LmtValues_t_DEF
#define _Can_LmtValues_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 raw_MaxVal_u32;
    sint32 raw_ErrVal_u32;
} Can_LmtValues_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 raw_MaxVal_u32;
    sint32 raw_ErrVal_u32;
} Can_LmtValues_t;
#endif

#endif /* _Can_LmtValues_t_DEF */

/* Parameter-Model Can_PhyPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _Can_PhyPar_t_DEF
#define _Can_PhyPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 dOffset_s16;
    sint16 dSlope_s16;
} Can_PhyPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 dOffset_s16;
    sint16 dSlope_s16;
} Can_PhyPar_t;
#endif

#endif /* _Can_PhyPar_t_DEF */

/* Parameter-Model DebounceParStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _DebounceParStruct_DEF
#define _DebounceParStruct_DEF
#ifndef _DAT_H
typedef struct
{
    uint16 tiHiLo_C;
    uint16 tiLoHi_C;
} DebounceParStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint16 tiHiLo_C;
    uint16 tiLoHi_C;
} DebounceParStruct;
#endif

#endif /* _DebounceParStruct_DEF */

/* Parameter-Model DebounceStateStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _DebounceStateStruct_DEF
#define _DebounceStateStruct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 TimeElapsed;
    uint8 State;
} DebounceStateStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 TimeElapsed;
    uint8 State;
} DebounceStateStruct;
#endif

#endif /* _DebounceStateStruct_DEF */

/* Parameter-Model DevLib_4WinSigDur_t defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_4WinSigDur_t_DEF
#define _DevLib_4WinSigDur_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 tiErr1Min_C;
    sint16 tiErr1Max_C;
    sint16 tiErr2Min_C;
    sint16 tiErr2Max_C;
    sint16 tiErr3Min_C;
    sint16 tiErr3Max_C;
    sint16 tiErr4Min_C;
    sint16 tiErr4Max_C;
} DevLib_4WinSigDur_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 tiErr1Min_C;
    sint16 tiErr1Max_C;
    sint16 tiErr2Min_C;
    sint16 tiErr2Max_C;
    sint16 tiErr3Min_C;
    sint16 tiErr3Max_C;
    sint16 tiErr4Min_C;
    sint16 tiErr4Max_C;
} DevLib_4WinSigDur_t;
#endif

#endif /* _DevLib_4WinSigDur_t_DEF */

/* Parameter-Model DevLib_BattHysterisisPar_CSTR defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_BattHysterisisPar_CSTR_DEF
#define _DevLib_BattHysterisisPar_CSTR_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 BattLoHysLo_C;
    sint16 BattLoHysHi_C;
    sint16 BattHiHysLo_C;
    sint16 BattHiHysHi_C;
} DevLib_BattHysterisisPar_CSTR;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 BattLoHysLo_C;
    sint16 BattLoHysHi_C;
    sint16 BattHiHysLo_C;
    sint16 BattHiHysHi_C;
} DevLib_BattHysterisisPar_CSTR;
#endif

#endif /* _DevLib_BattHysterisisPar_CSTR_DEF */

/* Parameter-Model DevLib_DiaCtlLine_DebPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_DiaCtlLine_DebPar_t_DEF
#define _DevLib_DiaCtlLine_DebPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 tiErrX_C;
    sint16 tiErrY_C;
    sint16 tiPausX_C;
    sint16 tiPausY_C;
    sint16 tiMaxPeriod_C;
} DevLib_DiaCtlLine_DebPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 tiErrX_C;
    sint16 tiErrY_C;
    sint16 tiPausX_C;
    sint16 tiPausY_C;
    sint16 tiMaxPeriod_C;
} DevLib_DiaCtlLine_DebPar_t;
#endif

#endif /* _DevLib_DiaCtlLine_DebPar_t_DEF */

/* Parameter-Model DevLib_DigOutPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_DigOutPar_t_DEF
#define _DevLib_DigOutPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 tiBtwTstSCB_C;
    sint16 tiBtwTstOT_C;
    uint16 numTstMax_C;
} DevLib_DigOutPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 tiBtwTstSCB_C;
    sint16 tiBtwTstOT_C;
    uint16 numTstMax_C;
} DevLib_DigOutPar_t;
#endif

#endif /* _DevLib_DigOutPar_t_DEF */

/* Parameter-Model DevLib_PwmOutPar_CSTR defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_PwmOutPar_CSTR_DEF
#define _DevLib_PwmOutPar_CSTR_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 rMin_C;
    sint16 rMax_C;
    uint8 swtBattCor_C;
} DevLib_PwmOutPar_CSTR;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 rMin_C;
    sint16 rMax_C;
    uint8 swtBattCor_C;
} DevLib_PwmOutPar_CSTR;
#endif

#endif /* _DevLib_PwmOutPar_CSTR_DEF */

/* Parameter-Model DevLib_PWMOutPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_PWMOutPar_t_DEF
#define _DevLib_PWMOutPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 rMin_C;
    sint16 rMax_C;
    sint16 tiBtwTstSCB_C;
    sint16 tiBtwTstOT_C;
    uint16 numTstMax_C;
    uint8 swtBattCor_C;
    uint8 swtPsInv_C;
} DevLib_PWMOutPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 rMin_C;
    sint16 rMax_C;
    sint16 tiBtwTstSCB_C;
    sint16 tiBtwTstOT_C;
    uint16 numTstMax_C;
    uint8 swtBattCor_C;
    uint8 swtPsInv_C;
} DevLib_PWMOutPar_t;
#endif

#endif /* _DevLib_PWMOutPar_t_DEF */

/* Parameter-Model DevLib_SRCDataMnMx defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_SRCDataMnMx_DEF
#define _DevLib_SRCDataMnMx_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 uMin_C;
    sint16 uMax_C;
} DevLib_SRCDataMnMx;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 uMin_C;
    sint16 uMax_C;
} DevLib_SRCDataMnMx;
#endif

#endif /* _DevLib_SRCDataMnMx_DEF */

/* Parameter-Model DevLib_SRCDataMnMx_STR defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_SRCDataMnMx_STR_DEF
#define _DevLib_SRCDataMnMx_STR_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 uMin_C;
    sint16 uMax_C;
} DevLib_SRCDataMnMx_STR;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 uMin_C;
    sint16 uMax_C;
} DevLib_SRCDataMnMx_STR;
#endif

#endif /* _DevLib_SRCDataMnMx_STR_DEF */

/* Parameter-Model DevLib_TransStagePar defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_TransStagePar_DEF
#define _DevLib_TransStagePar_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 Dfl_C;
    uint8 stSensId_C;
} DevLib_TransStagePar;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 Dfl_C;
    uint8 stSensId_C;
} DevLib_TransStagePar;
#endif

#endif /* _DevLib_TransStagePar_DEF */

/* Parameter-Model DevLib_TransStagePar_CSTR defined by actual function MEDC_Models_DS_GS */
#ifndef _DevLib_TransStagePar_CSTR_DEF
#define _DevLib_TransStagePar_CSTR_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 Dfl_C;
    uint8 stSensId_C;
} DevLib_TransStagePar_CSTR;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 Dfl_C;
    uint8 stSensId_C;
} DevLib_TransStagePar_CSTR;
#endif

#endif /* _DevLib_TransStagePar_CSTR_DEF */

/* Parameter-Model DSM_DebDur_Type defined by actual function MEDC_Models_DS_GS */
#ifndef _DSM_DebDur_Type_DEF
#define _DSM_DebDur_Type_DEF
#ifndef _DAT_H
typedef struct
{
    uint16 DebToDef_C;
    uint16 DebToOk_C;
} DSM_DebDur_Type;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint16 DebToDef_C;
    uint16 DebToOk_C;
} DSM_DebDur_Type;
#endif

#endif /* _DSM_DebDur_Type_DEF */

/* Parameter-Model DT1Struct defined by actual function MEDC_Models_DS_GS */
#ifndef _DT1Struct_DEF
#define _DT1Struct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 T1_C;
    sint32 Kd_C;
} DT1Struct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 T1_C;
    sint32 Kd_C;
} DT1Struct;
#endif

#endif /* _DT1Struct_DEF */

/* Parameter-Model DT1Struct_R32 defined by actual function MEDC_Models_DS_GS */
#ifndef _DT1Struct_R32_DEF
#define _DT1Struct_R32_DEF
#ifndef _DAT_H
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
} DT1Struct_R32;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
} DT1Struct_R32;
#endif

#endif /* _DT1Struct_R32_DEF */

/* Parameter-Model DT1WinStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _DT1WinStruct_DEF
#define _DT1WinStruct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 T1_C;
    sint32 Kd_C;
    sint32 KdPos_C;
    sint32 KdNeg_C;
    sint16 WinPos_C;
    sint16 WinNeg_C;
} DT1WinStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 T1_C;
    sint32 Kd_C;
    sint32 KdPos_C;
    sint32 KdNeg_C;
    sint16 WinPos_C;
    sint16 WinNeg_C;
} DT1WinStruct;
#endif

#endif /* _DT1WinStruct_DEF */

/* Parameter-Model EEPCD_SwtPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _EEPCD_SwtPar_t_DEF
#define _EEPCD_SwtPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    uint8 xVal_C;
    uint8 xTyp_C;
} EEPCD_SwtPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint8 xVal_C;
    uint8 xTyp_C;
} EEPCD_SwtPar_t;
#endif

#endif /* _EEPCD_SwtPar_t_DEF */

/* Parameter-Model FrmMng_PhyPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _FrmMng_PhyPar_t_DEF
#define _FrmMng_PhyPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 dCnvOffset_s16;
    sint16 dCnvSlope_s16;
} FrmMng_PhyPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 dCnvOffset_s16;
    sint16 dCnvSlope_s16;
} FrmMng_PhyPar_t;
#endif

#endif /* _FrmMng_PhyPar_t_DEF */

/* Parameter-Model HysteresisStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _HysteresisStruct_DEF
#define _HysteresisStruct_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 xLow;
    sint16 xHigh;
    sint16 yLow;
    sint16 yHigh;
} HysteresisStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 xLow;
    sint16 xHigh;
    sint16 yLow;
    sint16 yHigh;
} HysteresisStruct;
#endif

#endif /* _HysteresisStruct_DEF */

/* Parameter-Model HysteresisStruct_R32 defined by actual function MEDC_Models_DS_GS */
#ifndef _HysteresisStruct_R32_DEF
#define _HysteresisStruct_R32_DEF
#ifndef _DAT_H
typedef struct
{
    real32 xLow;
    real32 xHigh;
    real32 yLow;
    real32 yHigh;
} HysteresisStruct_R32;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 xLow;
    real32 xHigh;
    real32 yLow;
    real32 yHigh;
} HysteresisStruct_R32;
#endif

#endif /* _HysteresisStruct_R32_DEF */

/* Parameter-Model IStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _IStruct_DEF
#define _IStruct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 Ki_C;
    uint32 KiPos_C;
    uint32 KiNeg_C;
    sint16 WinPos_C;
    sint16 WinNeg_C;
} IStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 Ki_C;
    uint32 KiPos_C;
    uint32 KiNeg_C;
    sint16 WinPos_C;
    sint16 WinNeg_C;
} IStruct;
#endif

#endif /* _IStruct_DEF */

/* Parameter-Model IStruct_R32 defined by actual function MEDC_Models_DS_GS */
#ifndef _IStruct_R32_DEF
#define _IStruct_R32_DEF
#ifndef _DAT_H
typedef struct
{
    real32 Ki_C;
    real32 KiPos_C;
    real32 KiNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} IStruct_R32;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 Ki_C;
    real32 KiPos_C;
    real32 KiNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} IStruct_R32;
#endif

#endif /* _IStruct_R32_DEF */

/* Parameter-Model LimitStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _LimitStruct_DEF
#define _LimitStruct_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 Max;
    sint16 Min;
} LimitStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 Max;
    sint16 Min;
} LimitStruct;
#endif

#endif /* _LimitStruct_DEF */

/* Parameter-Model ParableStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _ParableStruct_DEF
#define _ParableStruct_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 CoeffA_C;
    sint16 CoeffB_C;
} ParableStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 CoeffA_C;
    sint16 CoeffB_C;
} ParableStruct;
#endif

#endif /* _ParableStruct_DEF */

/* Parameter-Model PDT1Struct defined by actual function MEDC_Models_DS_GS */
#ifndef _PDT1Struct_DEF
#define _PDT1Struct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 T1_C;
    sint32 Kd_C;
} PDT1Struct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 T1_C;
    sint32 Kd_C;
} PDT1Struct;
#endif

#endif /* _PDT1Struct_DEF */

/* Parameter-Model PDT1Struct_R32 defined by actual function MEDC_Models_DS_GS */
#ifndef _PDT1Struct_R32_DEF
#define _PDT1Struct_R32_DEF
#ifndef _DAT_H
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
} PDT1Struct_R32;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
} PDT1Struct_R32;
#endif

#endif /* _PDT1Struct_R32_DEF */

/* Parameter-Model PDT1WinStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _PDT1WinStruct_DEF
#define _PDT1WinStruct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 T1_C;
    sint32 Kd_C;
    sint32 KdPos_C;
    sint32 KdNeg_C;
    sint16 WinPos_C;
    sint16 WinNeg_C;
} PDT1WinStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 T1_C;
    sint32 Kd_C;
    sint32 KdPos_C;
    sint32 KdNeg_C;
    sint16 WinPos_C;
    sint16 WinNeg_C;
} PDT1WinStruct;
#endif

#endif /* _PDT1WinStruct_DEF */

/* Parameter-Model PIStateStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _PIStateStruct_DEF
#define _PIStateStruct_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 yi;
    sint16 yp;
} PIStateStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 yi;
    sint16 yp;
} PIStateStruct;
#endif

#endif /* _PIStateStruct_DEF */

/* Parameter-Model PlausPar_Type defined by actual function MEDC_Models_DS_GS */
#ifndef _PlausPar_Type_DEF
#define _PlausPar_Type_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 StrtTimePlaus;
    uint32 DelTimePlaus;
    sint16 ThresTempPlaus;
    sint16 LimTempPlaus;
} PlausPar_Type;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 StrtTimePlaus;
    uint32 DelTimePlaus;
    sint16 ThresTempPlaus;
    sint16 LimTempPlaus;
} PlausPar_Type;
#endif

#endif /* _PlausPar_Type_DEF */

/* Parameter-Model PStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _PStruct_DEF
#define _PStruct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 Kp_C;
    uint32 KpPos_C;
    uint32 KpNeg_C;
    sint16 WinPos_C;
    sint16 WinNeg_C;
} PStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 Kp_C;
    uint32 KpPos_C;
    uint32 KpNeg_C;
    sint16 WinPos_C;
    sint16 WinNeg_C;
} PStruct;
#endif

#endif /* _PStruct_DEF */

/* Parameter-Model PStruct_R32 defined by actual function MEDC_Models_DS_GS */
#ifndef _PStruct_R32_DEF
#define _PStruct_R32_DEF
#ifndef _DAT_H
typedef struct
{
    real32 Kp_C;
    real32 KpPos_C;
    real32 KpNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} PStruct_R32;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 Kp_C;
    real32 KpPos_C;
    real32 KpNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} PStruct_R32;
#endif

#endif /* _PStruct_R32_DEF */

/* Parameter-Model PT1Struct defined by actual function MEDC_Models_DS_GS */
#ifndef _PT1Struct_DEF
#define _PT1Struct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 T1_C;
} PT1Struct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 T1_C;
} PT1Struct;
#endif

#endif /* _PT1Struct_DEF */

/* Parameter-Model PT1Struct_R32 defined by actual function MEDC_Models_DS_GS */
#ifndef _PT1Struct_R32_DEF
#define _PT1Struct_R32_DEF
#ifndef _DAT_H
typedef struct
{
    real32 T1_C;
} PT1Struct_R32;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 T1_C;
} PT1Struct_R32;
#endif

#endif /* _PT1Struct_R32_DEF */

/* Parameter-Model Pwmout_appar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _Pwmout_appar_t_DEF
#define _Pwmout_appar_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 tiPer_C;
    uint8 stLvl_C;
    sint16 rMaxDty_C;
    sint16 rPerUn_C;
    sint16 tiPh_C;
} Pwmout_appar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 tiPer_C;
    uint8 stLvl_C;
    sint16 rMaxDty_C;
    sint16 rPerUn_C;
    sint16 tiPh_C;
} Pwmout_appar_t;
#endif

#endif /* _Pwmout_appar_t_DEF */

/* Parameter-Model RampStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _RampStruct_DEF
#define _RampStruct_DEF
#ifndef _DAT_H
typedef struct
{
    uint32 slopeUp;
    uint32 slopeDown;
} RampStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint32 slopeUp;
    uint32 slopeDown;
} RampStruct;
#endif

#endif /* _RampStruct_DEF */

/* Parameter-Model RampStruct_R32 defined by actual function MEDC_Models_DS_GS */
#ifndef _RampStruct_R32_DEF
#define _RampStruct_R32_DEF
#ifndef _DAT_H
typedef struct
{
    real32 slopeUp;
    real32 slopeDown;
} RampStruct_R32;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 slopeUp;
    real32 slopeDown;
} RampStruct_R32;
#endif

#endif /* _RampStruct_R32_DEF */

/* Parameter-Model SrvF_DT1Param_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_DT1Param_t_DEF
#define _SrvF_DT1Param_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
} SrvF_DT1Param_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
} SrvF_DT1Param_t;
#endif

#endif /* _SrvF_DT1Param_t_DEF */

/* Parameter-Model SrvF_DT1State_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_DT1State_t_DEF
#define _SrvF_DT1State_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 X;
    real32 Y;
} SrvF_DT1State_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 X;
    real32 Y;
} SrvF_DT1State_t;
#endif

#endif /* _SrvF_DT1State_t_DEF */

/* Parameter-Model SrvF_DT1WinParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_DT1WinParam_t_DEF
#define _SrvF_DT1WinParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
    real32 KdPos_C;
    real32 KdNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} SrvF_DT1WinParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
    real32 KdPos_C;
    real32 KdNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} SrvF_DT1WinParam_t;
#endif

#endif /* _SrvF_DT1WinParam_t_DEF */

/* Parameter-Model SrvF_HysteresisParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_HysteresisParam_t_DEF
#define _SrvF_HysteresisParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 XLow;
    real32 XHigh;
    real32 YLow;
    real32 YHigh;
} SrvF_HysteresisParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 XLow;
    real32 XHigh;
    real32 YLow;
    real32 YHigh;
} SrvF_HysteresisParam_t;
#endif

#endif /* _SrvF_HysteresisParam_t_DEF */

/* Parameter-Model SrvF_IWinParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_IWinParam_t_DEF
#define _SrvF_IWinParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 Ki_C;
    real32 KiPos_C;
    real32 KiNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} SrvF_IWinParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 Ki_C;
    real32 KiPos_C;
    real32 KiNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} SrvF_IWinParam_t;
#endif

#endif /* _SrvF_IWinParam_t_DEF */

/* Parameter-Model SrvF_LimitParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_LimitParam_t_DEF
#define _SrvF_LimitParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 Max;
    real32 Min;
} SrvF_LimitParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 Max;
    real32 Min;
} SrvF_LimitParam_t;
#endif

#endif /* _SrvF_LimitParam_t_DEF */

/* Parameter-Model SrvF_PDT1Param_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_PDT1Param_t_DEF
#define _SrvF_PDT1Param_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
} SrvF_PDT1Param_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 T1_C;
    real32 Kd_C;
} SrvF_PDT1Param_t;
#endif

#endif /* _SrvF_PDT1Param_t_DEF */

/* Parameter-Model SrvF_PDT1State_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_PDT1State_t_DEF
#define _SrvF_PDT1State_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 X;
    real32 Y;
} SrvF_PDT1State_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 X;
    real32 Y;
} SrvF_PDT1State_t;
#endif

#endif /* _SrvF_PDT1State_t_DEF */

/* Parameter-Model SrvF_PDT1WinState_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_PDT1WinState_t_DEF
#define _SrvF_PDT1WinState_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 X;
    real32 Y;
} SrvF_PDT1WinState_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 X;
    real32 Y;
} SrvF_PDT1WinState_t;
#endif

#endif /* _SrvF_PDT1WinState_t_DEF */

/* Parameter-Model SrvF_PIWinState_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_PIWinState_t_DEF
#define _SrvF_PIWinState_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 Yp;
    real32 Yi;
} SrvF_PIWinState_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 Yp;
    real32 Yi;
} SrvF_PIWinState_t;
#endif

#endif /* _SrvF_PIWinState_t_DEF */

/* Parameter-Model SrvF_PT1Param_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_PT1Param_t_DEF
#define _SrvF_PT1Param_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 T1_C;
} SrvF_PT1Param_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 T1_C;
} SrvF_PT1Param_t;
#endif

#endif /* _SrvF_PT1Param_t_DEF */

/* Parameter-Model SrvF_PWinParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_PWinParam_t_DEF
#define _SrvF_PWinParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 Kp_C;
    real32 KpPos_C;
    real32 KpNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} SrvF_PWinParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 Kp_C;
    real32 KpPos_C;
    real32 KpNeg_C;
    real32 WinPos_C;
    real32 WinNeg_C;
} SrvF_PWinParam_t;
#endif

#endif /* _SrvF_PWinParam_t_DEF */

/* Parameter-Model SrvF_RampParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_RampParam_t_DEF
#define _SrvF_RampParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    real32 Pos_C;
    real32 Neg_C;
} SrvF_RampParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    real32 Pos_C;
    real32 Neg_C;
} SrvF_RampParam_t;
#endif

#endif /* _SrvF_RampParam_t_DEF */

/* Parameter-Model SrvF_SearchResult_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvF_SearchResult_t_DEF
#define _SrvF_SearchResult_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 Index;
    real32 Ratio;
} SrvF_SearchResult_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 Index;
    real32 Ratio;
} SrvF_SearchResult_t;
#endif

#endif /* _SrvF_SearchResult_t_DEF */

/* Parameter-Model SrvX_DeadTimeParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_DeadTimeParam_t_DEF
#define _SrvX_DeadTimeParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 dsintStatic;
    sint16 lszStatic;
    sint16 dtbufBegStatic;
    sint16 dtbufEndStatic;
} SrvX_DeadTimeParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 dsintStatic;
    sint16 lszStatic;
    sint16 dtbufBegStatic;
    sint16 dtbufEndStatic;
} SrvX_DeadTimeParam_t;
#endif

#endif /* _SrvX_DeadTimeParam_t_DEF */

/* Parameter-Model SrvX_DebounceParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_DebounceParam_t_DEF
#define _SrvX_DebounceParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 tiHiLo_C;
    sint16 tiLoHi_C;
} SrvX_DebounceParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 tiHiLo_C;
    sint16 tiLoHi_C;
} SrvX_DebounceParam_t;
#endif

#endif /* _SrvX_DebounceParam_t_DEF */

/* Parameter-Model SrvX_DebounceState_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_DebounceState_t_DEF
#define _SrvX_DebounceState_t_DEF
#ifndef _DAT_H
typedef struct
{
    uint8 XOld;
    sint32 Timer;
} SrvX_DebounceState_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint8 XOld;
    sint32 Timer;
} SrvX_DebounceState_t;
#endif

#endif /* _SrvX_DebounceState_t_DEF */

/* Parameter-Model SrvX_DT1Param_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_DT1Param_t_DEF
#define _SrvX_DT1Param_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 T1_C;
    sint32 Kd_C;
} SrvX_DT1Param_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 T1_C;
    sint32 Kd_C;
} SrvX_DT1Param_t;
#endif

#endif /* _SrvX_DT1Param_t_DEF */

/* Parameter-Model SrvX_DT1State_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_DT1State_t_DEF
#define _SrvX_DT1State_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 X;
    sint32 Y;
} SrvX_DT1State_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 X;
    sint32 Y;
} SrvX_DT1State_t;
#endif

#endif /* _SrvX_DT1State_t_DEF */

/* Parameter-Model SrvX_DT1WinParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_DT1WinParam_t_DEF
#define _SrvX_DT1WinParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 T1_C;
    sint32 Kd_C;
    sint32 KdPos_C;
    sint32 KdNeg_C;
    sint32 WinPos_C;
    sint32 WinNeg_C;
} SrvX_DT1WinParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 T1_C;
    sint32 Kd_C;
    sint32 KdPos_C;
    sint32 KdNeg_C;
    sint32 WinPos_C;
    sint32 WinNeg_C;
} SrvX_DT1WinParam_t;
#endif

#endif /* _SrvX_DT1WinParam_t_DEF */

/* Parameter-Model SrvX_DT1WinState_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_DT1WinState_t_DEF
#define _SrvX_DT1WinState_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 X;
    sint32 Y;
} SrvX_DT1WinState_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 X;
    sint32 Y;
} SrvX_DT1WinState_t;
#endif

#endif /* _SrvX_DT1WinState_t_DEF */

/* Parameter-Model SrvX_IntLimS16Param_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_IntLimS16Param_t_DEF
#define _SrvX_IntLimS16Param_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 Min_C;
    sint16 Max_C;
} SrvX_IntLimS16Param_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 Min_C;
    sint16 Max_C;
} SrvX_IntLimS16Param_t;
#endif

#endif /* _SrvX_IntLimS16Param_t_DEF */

/* Parameter-Model SrvX_IntLimU8Param_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_IntLimU8Param_t_DEF
#define _SrvX_IntLimU8Param_t_DEF
#ifndef _DAT_H
typedef struct
{
    uint8 Min_C;
    uint8 Max_C;
} SrvX_IntLimU8Param_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint8 Min_C;
    uint8 Max_C;
} SrvX_IntLimU8Param_t;
#endif

#endif /* _SrvX_IntLimU8Param_t_DEF */

/* Parameter-Model SrvX_IWinParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_IWinParam_t_DEF
#define _SrvX_IWinParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 Ki_C;
    sint32 KiPos_C;
    sint32 KiNeg_C;
    sint32 WinPos_C;
    sint32 WinNeg_C;
} SrvX_IWinParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 Ki_C;
    sint32 KiPos_C;
    sint32 KiNeg_C;
    sint32 WinPos_C;
    sint32 WinNeg_C;
} SrvX_IWinParam_t;
#endif

#endif /* _SrvX_IWinParam_t_DEF */

/* Parameter-Model SrvX_PWinParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_PWinParam_t_DEF
#define _SrvX_PWinParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 Kp_C;
    sint32 KpPos_C;
    sint32 KpNeg_C;
    sint32 WinPos_C;
    sint32 WinNeg_C;
} SrvX_PWinParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 Kp_C;
    sint32 KpPos_C;
    sint32 KpNeg_C;
    sint32 WinPos_C;
    sint32 WinNeg_C;
} SrvX_PWinParam_t;
#endif

#endif /* _SrvX_PWinParam_t_DEF */

/* Parameter-Model SrvX_RampParam_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SrvX_RampParam_t_DEF
#define _SrvX_RampParam_t_DEF
#ifndef _DAT_H
typedef struct
{
    sint32 Pos_C;
    sint32 Neg_C;
} SrvX_RampParam_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint32 Pos_C;
    sint32 Neg_C;
} SrvX_RampParam_t;
#endif

#endif /* _SrvX_RampParam_t_DEF */

/* Parameter-Model SSwtS_SwtPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _SSwtS_SwtPar_t_DEF
#define _SSwtS_SwtPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    uint8 xVal_C;
    uint8 xTyp_C;
} SSwtS_SwtPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint8 xVal_C;
    uint8 xTyp_C;
} SSwtS_SwtPar_t;
#endif

#endif /* _SSwtS_SwtPar_t_DEF */

/* Parameter-Model Tio_PwmInPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _Tio_PwmInPar_t_DEF
#define _Tio_PwmInPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    uint8 stInvert_b;
    sint16 tiPerMin_s16;
    sint16 tiPerMax_s16;
    sint16 dcycMin_s16;
    sint16 dcycMax_s16;
} Tio_PwmInPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint8 stInvert_b;
    sint16 tiPerMin_s16;
    sint16 tiPerMax_s16;
    sint16 dcycMin_s16;
    sint16 dcycMax_s16;
} Tio_PwmInPar_t;
#endif

#endif /* _Tio_PwmInPar_t_DEF */

/* Parameter-Model Tio_PwmOutPar_t defined by actual function MEDC_Models_DS_GS */
#ifndef _Tio_PwmOutPar_t_DEF
#define _Tio_PwmOutPar_t_DEF
#ifndef _DAT_H
typedef struct
{
    uint8 stInvert_b;
    sint16 tiPer_s16;
} Tio_PwmOutPar_t;
#endif

#ifdef _D_FILE_
typedef struct
{
    uint8 stInvert_b;
    sint16 tiPer_s16;
} Tio_PwmOutPar_t;
#endif

#endif /* _Tio_PwmOutPar_t_DEF */

/* Parameter-Model WinStruct defined by actual function MEDC_Models_DS_GS */
#ifndef _WinStruct_DEF
#define _WinStruct_DEF
#ifndef _DAT_H
typedef struct
{
    sint16 nMin;
    sint16 nMax;
    sint16 qMin;
    sint16 qMax;
    sint16 tClntMin;
    sint16 tClntMax;
    sint16 tPreMin;
    sint16 tPreMax;
    sint16 vMin;
    sint16 vMax;
    sint16 tOxiMin;
    sint16 tOxiMax;
    sint16 tAirMin;
    sint16 tAirMax;
} WinStruct;
#endif

#ifdef _D_FILE_
typedef struct
{
    sint16 nMin;
    sint16 nMax;
    sint16 qMin;
    sint16 qMax;
    sint16 tClntMin;
    sint16 tClntMax;
    sint16 tPreMin;
    sint16 tPreMax;
    sint16 vMin;
    sint16 vMax;
    sint16 tOxiMin;
    sint16 tOxiMax;
    sint16 tAirMin;
    sint16 tAirMax;
} WinStruct;
#endif

#endif /* _WinStruct_DEF */



/* ------------------------------------------------------------- */
/* ----------- Substruct and Class Typedefinitions  ------------ */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ----------------- Declaration of System Constants ----------- */
/* ------------------------------------------------------------- */

/* ------------------------------------------------------------- */
/* ------------------- Declaration of variables ---------------- */
/* ------------------------------------------------------------- */


/* Since extern declarations of all DS variables imported into a GS D-File are already generated in the section of imported data elements  */
/* in that specific GS D-File they are switched off here to avoid compiler warnings such as double declarations */

#ifndef _D_FILE_

#endif /* _D_FILE_ */

/* ------------------------------------------------------------------------ */
/* ----------- Imported, Defined and Exported Class Attributes ------------ */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------- */
/* ------- Substruct and Class Instance Declarations ----------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ---------------- Referenced PTA Structures ------------------ */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* ----- Macro Definition of Referenced PTA Structures --------- */
/* ------------------------------------------------------------- */


/* ------------------------------------------------------------- */
/* -------------------- Own PTA Structures --------------------- */
/* ------------------------------------------------------------- */



/* ------------------------------------------------------------- */
/* --------- Macro Definition of Own PTA Structures  ----------- */
/* ------------------------------------------------------------- */


#undef _DAT_H
#endif /* _MEDC_MODELS_DS_GS_DAT_H */
