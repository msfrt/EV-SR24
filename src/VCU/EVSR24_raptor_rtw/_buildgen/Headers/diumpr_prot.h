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
 * $Filename__:diumpr_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:ILK2SI$
 * $Date______:30.11.2012$
 * $Class_____:SWHDR$
 * $Name______:diumpr_prot$
 * $Variant___:2.16.0$
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
 * 2.16.0; 0     30.11.2012 ILK2SI
 *   - system condition to deactivate the LEV3 update
 *   - support of ratios without General Denominator (only physical activation 
 *   condition)
 *   - increase range of DIUMPR_ctGen.tiFuEngOpMin
 * 
 * 2.15.0; 1     05.07.2012 PKA2SI
 *   merge new DCy
 * 
 * 2.15.0; 0     21.06.2012 PKA2SI
 *   CARB OBD LEV3 update (mainly hybrid features)
 * 
 * 2.12.0; 0     19.03.2012 RMP2SI
 *   Compiler independency task for DSM.
 * 
 * 2.9.0; 0     01.02.2011 THOMILL0
 *   CRQ313730 - SDOM: Cold Start Denominator Europa
 * 
 * 2.7.0; 0     19.11.2010 THOMILL0
 *   CRQ 345350 - SDOM: SAE J1979 Update: Einfuehrung IUMPR-Gruppe Fuelsystem 
 *   fuer Diesel Motoren
 *   + Uebernahme Daimler Evap-Denominator
 * 
 * 2.6.0_1; 0     30.03.2010 FTT2SI
 *   XDI-Migration
 * 
 * 2.5.0; 0     21.08.2009 ABM1KOR
 *   Changes to update PTO feature.
 * 
 * 2.4.0; 0     28.07.2009 ABM1KOR
 *   (RCMS00303764):Changes to implement EvapDen feature.
 * 
 * 2.2.0; 0     09.12.2008 PKA2SI
 *   import from CC : diumpr_prot.h  \main\basis\b_CORE\7
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DIUMPR_PROT_H                                 /* protect multiple includes              */
#define _DIUMPR_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Diagnostic In Use Monitor Performance Ratio
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

#define DIUMPR_EMPTY            0x00    /* init value for status array                            */
#define DIUMPR_NOTUSED          0xFF
#define DIUMPR_RAT_MAX_VAL      0xFFFF
#define DIUMPR_CNT_16_FUL       0xFFFFu /* 16 bit counter is full                                 */
#define DIUMPR_CNT_8_FUL        0xFFu   /* 8 bit counter is full                                  */

#define DIUMPR_SIG_UNUSED       0       /* application value for unused signal                    */
#define DIUMPR_DFC_UNUSED       0       /* DFC_Unused in application array                        */
#define DIUMPR_FID_UNUSED       0       /* FId_Unused in application array                        */

#define DIUMPR_SHFT             0x01    /* shift factor for division                              */
#define DIUMPR_SHFT_GROUP       0x01    /* shift factor for division                              */

#define DIUMPR_FACT_RES_REV     8192    /* resolution of ratio                                    */

#define DIUMPR_BYTE             0x08    /* shift one Byte                                         */


/*
DIUMPR_tiContActv
+-----------+-----------+---------+----------+----------+-------+------+--------+
|           |           |         |          |          |       |      |        |
|Bit 7      |Bit6       |Bit5     |Bit4      |Bit3      |Bit2   |bit1  |bit0    |
|           |           |         |                                             |
|First Actv |Reserved   |Reserved |           Counter                           |
|Condition  |           |         |                                             |
+-----------+-----------+---------+----------+----------+-------+------+--------+
*/
#define DIUMPR_TICONT_FIRSTACTV 0x80    /* Set the First activation condition is completed in
                                           internal array. This condition is used to use the
                                           counter for the second activation condition            */

#define DIUMPR_CNT_5_FUL        0x1Fu    /* all 5 bits of the 8 bit counter is full remaining bits
                                           are used for special purpose                           */


/*
DIUMPR_state =
+-----------+---------+-----------+---------+----------+----------+-----------+----------+
|           |         |           |         |          |          |           |          |
|Denominator|Numerator|Denominator|Numerator|first     |activation|Denominator|Numerator |
|counted    |counted  |locked     |Released |activation|condition |increasing |increasing|
|           |         |           |         |          |fulfilled |locked     |locked    |
|           |         |Mode7Visib |Z-flag   |          |          |           |          |
|           |         |/API       |/API     |          |          |           |          |
+-----------+---------+-----------+---------+----------+----------+-----------+----------+
      |          |          |           |         |          |           |         |
      |          |          |           |         |          |           |          \ _DIUMPR_NUMERATOR_INC_LCK_MSK
      |          |          |           |         |          |           |
      |          |          |           |         |          |            \ ___________DIUMPR_DENOM_INC_LCK_MSK
      |          |          |           |         |          |
      |          |          |           |         |           \ _______________________DIUMPR_ACTV_CON_MSK
      |          |          |           |         |
      |          |          |           |          \ __________________________________DIUMPR_FIRST_ACTV_MSK
      |          |          |           |
      |          |          |            \_____________________________________________DIUMPR_RLS_NUM_MSK
      |          |          |
      |          |           \_________________________________________________________DIUMPR_LCK_DENOM_MSK
      |          |
      |           \____________________________________________________________________DIUMPR_NUM_COUNTED_MSK
      |
      \________________________________________________________________________________DIUMPR_DENOM_COUNTED_MSK
*/

#define DIUMPR_NUMERATOR_INC_LCK_MSK            0x01
#define DIUMPR_DENOM_INC_LCK_MSK                0x02
#define DIUMPR_ACTV_CON_MSK                     0x04
#define DIUMPR_FIRST_ACTV_MSK                   0x08
#define DIUMPR_RLS_NUM_MSK                      0x10
#define DIUMPR_LCK_DENOM_MSK                    0x20
#define DIUMPR_NUM_COUNTED_MSK                  0x40
#define DIUMPR_DENOM_COUNTED_MSK                0x80

/*
DIUMPR_Ctl.DFC_..._C =
7 6 5 4 3 2 1 0
x x x x x x x x
| | | | | | | |
| | | | | | | \__ Numerator release by API required
| | | | | | |     DIUMPR_RLS_NUM_BY_API_MSK
| | | | | | |
| | | | | | \____ unused
| | | | | |
| | | | | |
| | | | | \______ physical release by API required
| | | | |         DIUMPR_RLS_PHY_BY_API_MSK
| | | | |
| | | | \________ Evap Denominator activated for this record
| | | |           DIUMPR_CFG_ENABLE_EVAPDEN_MSK
| | | |
| | | \__________ ColdStart Denominator activated for this record
| | |             DIUMPR_CFG_ENABLE_CLDSTRTDEN_MSK
| | |
|  \_\____________ unused
|
\_________________ physical exclusive release by API (without General Denominator)
                   DIUMPR_RLS_PHY_EXCL_MSK

*/

#define DIUMPR_RLS_NUM_BY_API_MSK            0x01
#define DIUMPR_RLS_PHY_BY_API_MSK            0x04
#define DIUMPR_CFG_ENABLE_EVAPDEN_MSK        0x08
#define DIUMPR_CFG_ENABLE_CLDSTRTDEN_MSK     0x10
#define DIUMPR_RLS_PHY_EXCL_MSK              0x80


/* convert difference time to timer resolution  (/100000 = int resolution equal to 100 ms */
/* MISRA RULE 19.7 VIOLATION:   Macro is used to enhance readability and to avoid
                                explicit function call  */
#define DIUMPR_CnvUS2Res(tiUs)                  ((tiUs) /100000l)




/*
DIUMPR_stSigActv_CA =

7 6 5 4 3 2 1 0
x x x x x x x x
| | | | | | | |
| | | | | | | \__ physical activity at first detection
| | | | | | |     DIUMPR_PHY_ACTV_TYP_ONCE_MSK
| | | | | | |
| | | | | | \____ enable specific 500 miles denominator
| | | | | |       DIUMPR_ENABLE_500D_MSK
| | | | | |
| | | | | \______ ignore continuous activation
| | | | |         DIUMPR_PHY_ACTV_TYP_NO_CONT_TI_MSK
| | | | |
| | | | \________ enable specific Evap denominator
| | | |           DIUMPR_ENABLE_EVAPDEN_MSK
| | | |
| | | \__________ enable specific ColdStart denominator
| | |             DIUMPR_ENABLE_CLDSTRTDEN_MSK
| | |
\_\_\____________ not used

*/
#define DIUMPR_PHY_ACTV_TYP_ONCE_MSK         0x01
#define DIUMPR_ENABLE_500D_MSK               0x02

/* If bit 2 is set, continuous activation condition is ignored and
   only cumulative time is considered for activation */
#define DIUMPR_PHY_ACTV_TYP_NO_CONT_TI_MSK   0x04

#define DIUMPR_ENABLE_EVAPDEN_MSK            0x08
#define DIUMPR_ENABLE_CLDSTRTDEN_MSK         0x10


/*
DIUMPR_st500MD =
+--------------+---+---+---+---+---+---+---+
| general      |                           |
| denominator  |    500 miles counter      |
| incremented  |                           |
| since last   |     7-bit counter         |
| increment of |     (1 bit = 10km)        |
| denominator  |                           |
+--------------+---+---+---+---+---+---+---+
      |                      |
      |                       \ ___________________  DIUMPR_500MD_CTR_MSK
      |
       \ __________________________________________  DIUMPR_500MD_GDINC_MSK

*/
#define DIUMPR_500MD_GDINC_MSK         0x80u
#define DIUMPR_500MD_CTR_MSK           0x7F

/*
DIUMPR_stEvapMon =

7 6 5 4 3 2 1 0
x x x x x x x x
| | | | | | | |
| | | | | | | \__ Cumulative time condition fulfilled
| | | | | | |     DIUMPR_TI_CUM_COND_MSK
| | | | | | |
| | | | | | \____ Cold start condition fulfilled
| | | | | |       DIUMPR_CLDSTRT_COND_MSK
| | | | | |
| | | | | \______ Monitoring inhibited for the driving cycle
| | | | |         DIUMPR_LCK_EVAPMON_MSK
| | | | |
| | | | \________ Evap conditions met
| | | |           DIUMPR_EVAP_COND_MSK
| | | |
| | | \__________ Engine start met
| | |             DIUMPR_VLD_ENGSTRT_MSK
| | |
| | \____________ Cold start evaluation passed
| |               DIUMPR_CLDSTRT_EVAL_PASSED_MSK
| |
| \______________ Propulsion system inactive time condition fulfilled
|                 DIUMPR_TIPRPSYSOFF_COND_MSK
|
\________________ Propulsion system inactive evaluation passed
                  DIUMPR_TIPRPSYSOFF_EVAL_PASSED_MSK
*/

#define DIUMPR_TI_CUM_COND_MSK              0x01
#define DIUMPR_CLDSTRT_COND_MSK             0x02
#define DIUMPR_LCK_EVAPMON_MSK              0x04
#define DIUMPR_EVAP_COND_MSK                0x08
#define DIUMPR_VLD_ENGSTRT_MSK              0x10
#define DIUMPR_CLDSTRT_EVAL_PASSED_MSK      0x20
#define DIUMPR_TIPRPSYSOFF_COND_MSK         0x40
#define DIUMPR_TIPRPSYSOFF_EVAL_PASSED_MSK  0x80


/*
DIUMPR_stCldStrtMon =

7 6 5 4 3 2 1 0
x x x x x x x x
| | | | | | | |
| | | | | | | \__ ColdStart Denominator released
| | | | | | |     DIUMPR_CLDSTRTDEN_COND_MSK
| | | | | | |
| | | | | | \____ Cold start evaluation done
| | | | | |       DIUMPR_CLDSTRTDEN_CLDSTRT_EVAL_PASSED_MSK
| | | | | |
| | | | | \______ Monitoring inhibited for the driving cycle
| | | | |         DIUMPR_CLDSTRTDEN_LCK_CLDSTRTMON_MSK
| | | | |
| | | | \________ Engine start met
| | | |           DIUMPR_CLDSTRTDEN_VLD_ENGSTRT_MSK
| | | |
\_\_\_\__________ unused

*/

#define DIUMPR_CLDSTRTDEN_COND_MSK                 0x01
#define DIUMPR_CLDSTRTDEN_CLDSTRT_EVAL_PASSED_MSK  0x02
#define DIUMPR_CLDSTRTDEN_LCK_CLDSTRTMON_MSK       0x04
#define DIUMPR_CLDSTRTDEN_VLD_ENGSTRT_MSK          0x08


/* encoding of DIUMPR_xSelDCYCond must match to verbal conversion in diumpr_pavast.xml */
/*  currently only load/speed variantion;
    further conditions shall be inserted here
    (idle condition, rpm condition mentioned in draft HD 1971.1 or 1968.2 )*/
#define DIUMPR_LOAD_COND     0x1u

/*
 DIUMPR_CldStrtDenCldStrtTyp_C

  Physical Values               Coded Values                internal defines
  ==============================================================================================
  EOBD (ColdStart Denom)             0                      DIUMPR_CLDSTRTDEN_TYP_EOBD
  CARB (Evap Denom)                  1                      DIUMPR_CLDSTRTDEN_TYP_CARB

*/

#define DIUMPR_CLDSTRTDEN_TYP_EOBD    0x00
#define DIUMPR_CLDSTRTDEN_TYP_CARB    0x01


/*
 ***************************************************************************************************
 * type defs and enums
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */


__PRAGMA_USE__dsm__1_5ms__constant__arr16__START
extern const uint16   DIUMPR_idxRID2FID[];
__PRAGMA_USE__dsm__1_5ms__constant__arr16__END

MEMLAY_USE_ENVRAM(extern uint16, DIUMPR_ctNum[]);
MEMLAY_USE_ENVRAM(extern uint16, DIUMPR_ctDenom[]);
MEMLAY_USE_ENVRAM(extern uint16, DIUMPR_ctGenDenom);
MEMLAY_USE_ENVRAM(extern uint16, DIUMPR_ctIgn);
MEMLAY_USE_ENVRAM(extern uint16, DIUMPR_ctIgnFuEng);

__PRAGMA_USE__dsm__1_5ms__RAM__x32__START
extern       uint32   DIUMPR_stEnaDenom;
__PRAGMA_USE__dsm__1_5ms__RAM__x32__END

__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
extern       uint16   DIUMPR_tiVehSpdCum;
extern       uint16   DIUMPR_tiVehSpdCumPDTC;
extern       uint16   DIUMPR_tiEngLdCum;
extern       uint16   DIUMPR_tiEngLdCumPDTC;
extern       uint16   DIUMPR_tiEngOpCum;
extern       uint16   DIUMPR_tiEngOpCumPDTC;
extern       uint16   DIUMPR_tiIdl;
extern       uint16   DIUMPR_tiIdlPDTC;
extern       uint16   DIUMPR_tiEngStrtCum;
extern       uint16   DIUMPR_tiEvapDenEngStrtDelay;
extern       uint16   DIUMPR_tiCldStrtDenEngStrtDelay;
extern       uint16   DIUMPR_tiFuEngOpCum;
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern       uint8    DIUMPR_stScanRatios;
extern       uint8    DIUMPR_stEnaPDTC;
extern       uint8    DIUMPR_stEvapMon;
extern       uint8    DIUMPR_stCldStrtMon;
extern       uint8    DIUMPR_tiFuEngIgn;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern       uint8    DIUMPR_state[];
extern       uint8    DIUMPR_tiSigActv[];
extern       uint8    DIUMPR_tiContActv[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern       uint16   DIUMPR_rValRatMin[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern       uint8    DIUMPR_numIndGrp[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern       uint16   DIUMPR_rMBGrp[];
extern       uint16   DIUMPR_ctNumMBGrp[];
extern       uint16   DIUMPR_ctDenomMBGrp[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern       uint8    DIUMPR_St[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

MEMLAY_USE_ENVRAM(extern uint16, DIUMPR_Num[]);
MEMLAY_USE_ENVRAM(extern uint16, DIUMPR_Den[]);
MEMLAY_USE_ENVRAM(extern sint32, DIUMPR_500MDlRef);
MEMLAY_USE_ENVRAM(extern uint8,  DIUMPR_st500MD[]);



__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DIUMPR_Init(void);
void DIUMPR_Proc(void);
uint DIUMPR_BinSearch(const uint16* adBuf, uint sizeBuf, uint numLookFor, uint* idx);
uint DIUMPR_GetScanState(void);
void DIUMPR_FcmClear(void);
void DIUMPR_EvapDen_Proc(void);
void DIUMPR_CldStrtDen_Proc(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DIUMPR_PTO_Init(void);
void DIUMPR_PTO_Proc(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END



/* _DIUMPR_PROT_H                                                                                */
#endif
