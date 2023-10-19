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
 * $Filename__:diumpr_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PKA2SI$
 * $Date______:29.06.2012$
 * $Class_____:SWHDR$
 * $Name______:diumpr_pub$
 * $Variant___:2.15.0$
 * $Revision__:1$
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
 * 2.15.0; 1     29.06.2012 PKA2SI
 *   CARB OBD LEV3 update (mainly hybrid features)
 * 
 * 2.15.0; 0     21.06.2012 PKA2SI
 *   CARB OBD LEV3 update (mainly hybrid features)
 * 
 * 2.9.0; 0     01.02.2011 THOMILL0
 *   CRQ313730 - SDOM: Cold Start Denominator Europa
 * 
 * 2.4.0; 0     28.07.2009 ABM1KOR
 *   (RCMS00303764):Changes to implement EvapDen feature.
 * 
 * 2.1.0; 0     29.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * 2.0.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diumpr_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _DIUMPR_PUB_H                                  /* protect multiple includes               */
#define _DIUMPR_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Diagnostic In Use Monitor Performace Ratio
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */

/* Status of the interface function is OK */
#define DIUMPR_OK                                0x00u
/* Data exceeds the Buffer size of the given buffer */
#define DIUMPR_BUFFER_SIZE_EXCEEDED              0x01u
/* No Data available */
#define DIUMPR_DATA_NOT_AVAILABLE                0x02u


/* #defines for mapping IUMPR group index/position moved to generated file
   (relevant system constants not [easy] visible in other functions
     -> no conditional define possible)

   IUMPR group encoding follows  SEA J1979 2007 but is version dependent.
   Information generated in file diumpr_auto_pub.h and published via dsm.h
*/

 /*

Bit 7 .. 0
 DIUMPR_stEnaDenom =    [local copy in code  stEnaDenom]
 +------------+------------+-------+----------+----------+-------+-------+-------+
 |            |            |       |          |          |       |       |       |
 | Denominator| Ignition   |StrtEnd| Result   |Function  | cond3 | cond2 | cond1 |
 | incremented| cycle      |       | available|Test      |       |       |       |
 |            | counter    |       |          |activated | idle  | speed | cycle |
 |            | incremented|       |          |this DCY  | time  | time  | time  |
 |            | or inh     |       |          |          |       |       |       |
 +------------+------------+-------+----------+----------+-------+-------+-------+
       |            |          |         |          |        |       |       |
       |            |          |         |          |        |       |        \_ DIUMPR_COND1_MSK
       |            |          |         |          |        |       |
       |            |          |         |          |        |        \_________ DIUMPR_COND2_MSK
       |            |          |         |          |        |
       |            |          |         |          |         \_________________ DIUMPR_COND3_MSK
       |            |          |         |          |
       |            |          |         |           \ _________________________ DIUMPR_ST_FUNCTSTACTV_MSK
       |            |          |         |
       |            |          |          \_____________________________________ DIUMPR_RSLTAVL_MSK
       |            |          |
       |            |           \_______________________________________________ DIUMPR_STRTEND_MSK
       |            |
       |             \__________________________________________________________ DIUMPR_IGN_MSK
       |
        \_______________________________________________________________________ DIUMPR_DENOM_MSK


Bit 15 .. 8
 DIUMPR_stEnaDenom =    [local copy in code  stEnaDenom]
 +------------+---------+------------+----------+----------+-------+-------+-------+
 |            |         |            |          |          |       |       |       |
 | cond       | current | Ignition   | general  |  inhib   |  Inh  | cond5 | cond4 |
 | cumulative | FuEngOp | counter    | denom.   | general  |igniti.|       |       |
 | FuEngOp    | status  | incretd.   | counted  | denom.   |detect.| env   | env   |
 | time       |         |            |          |          |       |altitud| temp. |
 |            |         |            |          |          |       |       |       |
 +------------+---------+------------+----------+----------+-------+-------+-------+
       |            |       |            |          |        |       |       |
       |            |       |            |          |        |       |        \_ DIUMPR_COND4_MSK
       |            |       |            |          |        |       |
       |            |       |            |          |        |        \_________ DIUMPR_COND5_MSK
       |            |       |            |          |        |
       |            |       |            |          |        \__________________ DIUMPR_INHIGN_MSK
       |            |       |            |          |
       |            |       |            |          \___________________________ DIUMPR_INHGEN_MSK
       |            |       |            |
       |            |       |            \______________________________________ DIUMPR_CNTGEN_MSK
       |            |       |
       |            |       \___________________________________________________ DIUMPR_CNTIGN_MSK
       |            |
       |            \___________________________________________________________ DIUMPR_ST_FUENGOP_MSK
       |
       \________________________________________________________________________ DIUMPR_ST_FUENGOP_TI_COND_MSK


Bit 23 .. 16
 DIUMPR_stEnaDenom =    [local copy in code  stEnaDenom]
 +---------+---------+----------+---------+----------+-------+----------+-----------+
 |         |         |          |         |          |       |          |           |
 |         |         |          |         |          |       | ignition | ignition  |
 |         |         |          |         |          |       | cycle    | cycle     |
 |         |         |          |         |          |       | fueled   | fueled    |
 |         |         |          |         |          |       | engine   | engine    |
 |         |         |          |         |          |       | COUNTED  | INHIBITED |
 +---------+---------+----------+---------+----------+-------+----------+-----------+
       |            |       |            |          |      |       |       |
       |            |       |            |          |      |       |       \____ DIUMPR_ST_INHIGNFUENG_MSK
       |            |       |            |          |      |       |
       |            |       |            |          |      |       \____________ DIUMPR_ST_CNTIGNFUENG_MSK
       |            |       |            |          |      |
       |            |       |            |          |      \____________________
       |            |       |            |          |
       |            |       |            |          \___________________________
       |            |       |            |
       |            |       |            \______________________________________
       |            |       |
       |            |       \___________________________________________________
       |            |
       |            \___________________________________________________________
       |
       \________________________________________________________________________


similar state for [optional DFES_PDTC_SY]
Bit 7 .. 0
 DIUMPR_stEnaPDTC =    [local copy in code  stEnaDenom]
 +------------+------------+-------+----------+----------+-------+-------+-------+
 |            |            |       |          |          |       |       |       |
 |   PDTC     |            |StrtEnd|          |          | cond3 | cond2 | cond1 |
 |  trigger   |            |       |          |inhibited |       |       |       |
 | condition  |            |       |          |          | idle  | speed | cycle |
 | fulfilled  |            |       |          |          | time  | time  | time  |
 |            |            |       |          |          |       |       |       |
 +------------+------------+-------+----------+----------+-------+-------+-------+
       |            |          |         |          |        |       |       |
       |            |          |         |          |        |       |        \_ DIUMPR_COND1_MSK
       |            |          |         |          |        |       |
       |            |          |         |          |        |        \_________ DIUMPR_COND2_MSK
       |            |          |         |          |        |
       |            |          |         |          |         \_________________ DIUMPR_COND3_MSK
       |            |          |         |          |
       |            |          |         |           \ _________________________ DIUMPR_INHGENPDTC_MSK
       |            |          |         |
       |            |          |          \_____________________________________ unused
       |            |          |
       |            |           \_______________________________________________ DIUMPR_STRTEND_MSK
       |            |
       |             \__________________________________________________________ unused
       |
        \_______________________________________________________________________ DIUMPR_DENOM_MSK


 */

/* Bit positions for general denominator status (and PDTC erase trigger is possible) */
#define DIUMPR_ST_COND1_POS       0
#define DIUMPR_ST_COND2_POS       1
#define DIUMPR_ST_COND3_POS       2
#define DIUMPR_ST_FUNCTSTACTV_POS 3
#define DIUMPR_ST_RSLTAVL_POS     4
#define DIUMPR_ST_STRTEND_POS     5
#define DIUMPR_ST_IGN_POS         6
#define DIUMPR_ST_DENOM_POS       7

#define DIUMPR_ST_COND4_POS       8
#define DIUMPR_ST_COND5_POS       9
#define DIUMPR_ST_INHIGN_POS     10
#define DIUMPR_ST_INHGEN_POS     11
/* same information in DIUMPR_stEnaPDTC on other position since only 8 bit size                   */
#define DIUMPR_ST_INHGENPDTC_POS     3
#define DIUMPR_ST_CNTGEN_POS     12
#define DIUMPR_ST_CNTIGN_POS     13
#define DIUMPR_ST_FUENGOP_POS           14
#define DIUMPR_ST_FUENGOP_TI_COND_POS   15

#define DIUMPR_ST_INHIGNFUENG_POS     16
#define DIUMPR_ST_CNTIGNFUENG_POS     17


/* alias defines for use with DIUMPR_GetPDTCEnStatus() */
#define DIUMPR_ST_ENG_OP_COND_POS       DIUMPR_ST_COND1_POS
#define DIUMPR_ST_VEH_SPD_COND_POS      DIUMPR_ST_COND2_POS
#define DIUMPR_ST_IDL_TI_COND_POS       DIUMPR_ST_COND3_POS
#define DIUMPR_ST_VLD_PDTC_CYCL_POS     DIUMPR_ST_DENOM_POS





/* number of bits */
#define DIUMPR_ST_LEN             1
#define DIUMPR_ST_ALLCOND_LEN     3

/* access mask - all enable condition are fulfilled  */
#define DIUMPR_COND_WO_FUENGOP_MSK     \
        ((((1 << (DIUMPR_ST_ALLCOND_LEN))-1)) << (DIUMPR_ST_COND1_POS))

#define DIUMPR_COND_WITH_FUENGOP_MSK  (DIUMPR_COND_WO_FUENGOP_MSK|DIUMPR_ST_FUENGOP_TI_COND_MSK)

/* cumulated engine running time with engine speed greater as a level are fulfilled */
#define DIUMPR_COND1_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_COND1_POS))

/* cumulated vehicle speed time with vehicle speed greater as a level are fulfilled */
#define DIUMPR_COND2_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_COND2_POS))

/* activ uninterrupted idle time greater as a level are fulfilled */
#define DIUMPR_COND3_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_COND3_POS))

/* Function test active this dcy, do not increment numerators this dcy */
#define DIUMPR_ST_FUNCTSTACTV_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_FUNCTSTACTV_POS))


/* Calculation of minimal ratio ready, result available */
#define DIUMPR_RSLTAVL_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_RSLTAVL_POS))

/* start has been finished and normal engine operation mode has been entered */
#define DIUMPR_STRTEND_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_STRTEND_POS))


#define DIUMPR_IGN_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_IGN_POS))


#define DIUMPR_DENOM_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_DENOM_POS))

/* additional bits used to allow better state information (observation) */

#define DIUMPR_COND4_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_COND4_POS))

#define DIUMPR_COND5_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_COND5_POS))

#define DIUMPR_INHIGN_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_INHIGN_POS))

#define DIUMPR_INHGEN_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_INHGEN_POS))

#define DIUMPR_INHGENPDTC_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_INHGENPDTC_POS))

#define DIUMPR_CNTGEN_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_CNTGEN_POS))

#define DIUMPR_CNTIGN_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_CNTIGN_POS))

/* current fueled engine operation status */
#define DIUMPR_ST_FUENGOP_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_FUENGOP_POS))

/* cumulative time with Fueled engine operation is fulfilled */
#define DIUMPR_ST_FUENGOP_TI_COND_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_FUENGOP_TI_COND_POS))

/* ignitionCycleCounter2 inhibited */
#define DIUMPR_ST_INHIGNFUENG_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_INHIGNFUENG_POS))

/* ignitionCycleCounter counted */
#define DIUMPR_ST_CNTIGNFUENG_MSK     \
        ((((1 << (DIUMPR_ST_LEN))-1)) << (DIUMPR_ST_CNTIGNFUENG_POS))


/*
 ***************************************************************************************************
 * Alias masks for use with DIUMPR_GetPDTCEnStatus()
 ***************************************************************************************************
 */

/* cumulated time with engine speed greater than threshold  */
#define DIUMPR_ST_ENG_OP_COND_MSK     DIUMPR_COND1_MSK

/* cumulated  time with vehicle speed greater than threshold  */
#define DIUMPR_ST_VEH_SPD_COND_MSK    DIUMPR_COND2_MSK


/* active uninterrupted idle time greater than threshold  */
#define DIUMPR_ST_IDL_TI_COND_MSK     DIUMPR_COND3_MSK


/* start has been finished and normal engine operation mode has been entered */
#define DIUMPR_ST_VLD_PDTC_CYCL_MSK   DIUMPR_DENOM_MSK







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

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DIUMPR_GetInfoData(uint8 * adTmpBuf_u8, uint8 numBufSize_u8);

void   DIUMPR_RlsNum(DSM_FIdType FIDName);
void   DIUMPR_RlsDenPhy(DSM_FIdType FIDName);
void   DIUMPR_LckDenPhy(DSM_FIdType FIDName);
void   DIUMPR_SetInh(DSM_FIdType FIDName);
void   DIUMPR_ClrInh(DSM_FIdType FIDName);
uint32 DIUMPR_GetGenDenomStatus(void);
uint   DIUMPR_GetPDTCEnStatus(void);
void   DIUMPR_Clear(void);
uint DIUMPR_GetCfgRatioNumInc(DSM_FIdType FIDName);
uint DIUMPR_GetCfgRatioDenInc(DSM_FIdType FIDName);
uint DIUMPR_GetGenDenom(void);
uint DIUMPR_GetIgnCycleCnt(void);
uint16 DIUMPR_GetIgnCycleFuEngCnt(void);
uint DIUMPR_IdxCfg2CmnRatioIdx(uint idxCfg);
uint DIUMPR_IdxClb2CmnRatioIdx(uint idxClb);
uint DIUMPR_GetRatioRecord(uint idxCmn, uint *num, uint *denom);
uint DIUMPR_GetRatioDfc(uint idxCmn);
uint DIUMPR_GetMinRatiosCmnIdx(uint8* adTmpBuf_u8, uint8 numBufSize_u8);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern bool DIUMPR_stEvapDen;
extern bool DIUMPR_stCldStrtDen;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END




/* support for GS legacy interfaces */
#define setImpNumCompl  DIUMPR_RlsNum
#define clrImpDenInhPy  DIUMPR_RlsDenPhy
#define setImpDenInhPy  DIUMPR_LckDenPhy

#define setImpNDInhE    DIUMPR_SetInh
#define clrImpNDInhE    DIUMPR_ClrInh

#define getImpNumCnt    DIUMPR_GetCfgRatioNumInc
#define getImpDenCnt    DIUMPR_GetCfgRatioDenInc

/* DIUMPR_PUB_H                                                                                   */
#endif
