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
 * $Filename__:dfes_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:18.09.2012$
 * $Class_____:SWHDR$
 * $Name______:dfes_pub$
 * $Variant___:2.24.0$
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
 * 2.24.0; 0     18.09.2012 MMO2FE
 *   New ROE Event ERR2OK_ACT that only comes in Ini-ReIni if LDF is set and 
 *   ResetAtIni is calibrated.
 * 
 * 2.23.0; 1     28.08.2012 BOV1KOR
 *   Review points update.
 * 
 * 2.23.0; 0     13.08.2012 BOV1KOR
 *   Support for additional MIL illumination modes 
 *   Blinking_and_Continous_Lamp_Supp_2 and Blinking_Lamp_Support_2.
 * 
 * 2.21.0; 0     06.07.2012 MMO2FE
 *   OBDII_054_01 LEVIII Harmonisation Engine Start - New OBD Driving Cycle
 * 
 * 2.19.0; 1     25.05.2012 PKA2SI
 *   3 level OBD freezeframe priority
 * 
 * 2.19.0; 0     16.05.2012 PKA2SI
 *   3 level OBD freezeframe priority
 * 
 * 14.0.0; 0     06.08.2010 PKA2SI
 *   introduction of Dem,Fim wrapper features
 * 
 * 2.4.0; 0     04.08.2009 SGS3KOR
 *   Enhance DSM_GetInfoDFC() to return PDTC status
 * 
 * 2.2.0; 0     16.06.2009 PKA2SI
 *   CC-LABEL B_DSM.14.1.0
 *   ResponseOnEvent extension
 *   switch status of DTC test failed interpretation via DFES_DTC_TSTFAIL_SY
 *   Pseudo-erased info of long term error
 * 
 * 2.1.0; 0     26.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DFES_PUB_H
#define _DFES_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 *                      _DFES_PUB_H
 *
 *                     Public Headerfile for DFES
 *
 * scope               ext
 ***************************************************************************************************
 */



/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/**
 maximum value of sequence counter, used for empty error memory slots. Moved from protected to make this
 public!
 */
#define DFES_IDX_SEQ_EMPTY    0xFFu


/**************************************************************************************************/
/************** suspected freeze frame entry states status definition *****************************/
/**************************************************************************************************/

/* Layout of suspected freeze frame entry status:

Return value of DSM_GetSusFrzFrmSt():
=====================================

7 6 5 4 3 2 1 0
| | | | | | |  \_ unused empty entry
| | | | | |  \___ entry contains only freeze frame values up to now (possible to overwrite)
| | | | |  \_____ entry is linked to a DFC but can be overwritten
| | | |  \_______ entry is used and assigned/linked to a DFC (no modifications possible)
| | |  \_________
| |  \___________
|  \_____________
 \_______________
*/
#define DFES_ST_SUSFRZFRM_EMPTY            1u  /* unused empty entry                              */
#define DFES_ST_SUSFRZFRM_ALLOC_FRZ_ONLY   2u  /* entry contains only freeze frame up to now      */
#define DFES_ST_SUSFRZFRM_ALLOC_CHANGEABLE 4u  /* entry is linked to a DFC but can be overwritten */
#define DFES_ST_SUSFRZFRM_FAULT_LINKED     8u  /* entry is used and assigned/linked to a DFC      */


/**************************************************************************************************/
/**************** state to output state matrix   *******************************************/
/**************************************************************************************************/

/* Layout Lamp out status

DFES_OutLamps:
=============

7 6 5 4 3 2 1 0
| | | | | | |  \_ MIL          Mil continuous illumination demanded
| | | | | |  \___ MIL_BLINK    Mil blink demanded
| | | | |  \_____ SVS          service vehicle soon lamp continuous demanded
| | | |  \_______ SVS_BLINK    service vehicle soon lamp blink demanded
| | |  \_________ SVS2         third (optional) lamp cont. demanded
| |  \___________ SVS2_BLINK   third (optional) lamp blink demanded
|  \_____________ unused
 \_______________ unused

*/

#define DFES_ST_LAMP_OUT_MIL            0x0001
#define DFES_ST_LAMP_OUT_MIL_BLINK      0x0002
#define DFES_ST_LAMP_OUT_SVS            0x0004
#define DFES_ST_LAMP_OUT_SVS_BLINK      0x0008
#define DFES_ST_LAMP_OUT_SVS2           0x0010
#define DFES_ST_LAMP_OUT_SVS2_BLINK     0x0020

/* some helpfull bit positions*/
#define DFES_ST_LAMP_OUT_SVS_POS        0x02
#define DFES_ST_LAMP_OUT_SVS2_POS       0x04


/* Calibration of Lamp support */
#define DFES_LAMP_MODE_OFF            0x0000u
#define DFES_LAMP_MODE_ON             0x0001u
#define DFES_LAMP_MODE_BLINK          0x0002u
#define DFES_SVS_MODE_LDF             0x0004u
#define DFES_SVS_MODE_LDF_FLC         0x0008u

/* Used only when ((DSMBAS_VAR_SY ==147) && (CMBTYP == 0))
 and when (DFES_ADDLMILMOD_SC ==1)                                                                */
#define DFES_LAMP_MODE_BLINK1         0x0040u
#define DFES_LAMP_MODE_BLINK2         0x0080u


/*  Layout of tester out status
DFES_OutTester:
===============

only if (DFES_IRV_SY > 0), "delayed delete", improved replace verification is selected

15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
|  |  |  |  |  |  | | | | | | | | |  \_ MANUF_LOW       visible for manufacturer testers with
|  |  |  |  |  |  | | | | | | | | |                     least filt.
|  |  |  |  |  |  | | | | | | | |  \___ MANUF_HIGH      visible for manufacturer testers
|  |  |  |  |  |  | | | | | | |  \_____ SERVICE LOW     visible for service testers
|  |  |  |  |  |  | | | | | |  \_______ SERVICE HIGH    visible for service testers
|  |  |  |  |  |  | | | | |  \_________ OBD_RELVANT     entry is relevant for OBD,
|  |  |  |  |  |  | | | | |                             must not be visible
|  |  |  |  |  |  | | | |  \___________ OBD_PENDING     visible for generic scan tool in mode 7
|  |  |  |  |  |  | | |  \_____________ OBD_LOW         visible for generic scan tool in mode 3
|  |  |  |  |  |  | |  \_______________ OBD_HIGH        visible for generic scan tool in mode 3
|  |  |  |  |  |  | |                                   (fuel system, catalyst)
|  |  |  |  |  |  |  \_________________ DELAYED_DEL     all delayed delete DTC, which should be
|  |  |  |  |  |  |                                     confirmed by a healing DC are visible
|  |  |  |  |  |   \___________________ HEAL_DEL        all DTC's which are deleted by
|  |  |  |  |  |                                        an internal heal trigger
|  |  |  |  |   \______________________ PDTC            visible for generic scan tool in mode A
|  |  |  |   \_________________________ OBD_HIGHPLUS    visible for generic scan tool in mode 3
|  |  |  |                                              higher prio than (fuel system, catalyst)
|  |  |   \____________________________
|  |   \_______________________________
|   \__________________________________
 \_____________________________________

*/


#define DFES_ST_DIA_OUT_MANUF_LOW      0x01
#define DFES_ST_DIA_OUT_MANUF_HIGH     0x02
#define DFES_ST_DIA_OUT_SERVICE_LOW    0x04
#define DFES_ST_DIA_OUT_SERVICE_HIGH   0x08
#define DFES_ST_DIA_OUT_RELEVANT       0x10
#define DFES_ST_DIA_OUT_OBDPENDING     0x20
#define DFES_ST_DIA_OUT_OBD_LOW        0x40
#define DFES_ST_DIA_OUT_OBD_HIGH       0x80
#define DFES_ST_DIA_OUT_DELAY_DEL      0x0100
#define DFES_ST_DIA_OUT_HEAL_DEL       0x0200
#define DFES_ST_DIA_OUT_PDTC           0x0400
#define DFES_ST_DIA_OUT_OBD_HIGHPLUS   0x0800




/**
 Setting types for API DFES_ctlSetting
 */
#define DFES_CTLSET_DIA_ON          1u      /* The server shall resume the setting of DTCs        */
#define DFES_CTLSET_DIA_OFF         2u      /* The server shall stop the setting of DTCs          */
#define DFES_CTLSET_NVRAM_LCK       3u      /* The error memory is locked during postdrive        */
#define DFES_CTLSET_NVRAM_RLS       4u      /* The NVRAM is released again (cancelled postdrive)  */
#define DFES_CTLSET_DFES_OFF        5u      /* stop update DFES entries but continue
                                               update of DFC_st and DINH                          */
#define DFES_CTLSET_DFES_ON         6u      /* resume update of DFES entries                      */

#define DFES_CTLSET_DISABLE_DTC_REC_UPDT        7u  /* AUTOSAR Dem_DisableDTCRecordUpdate */
#define DFES_CTLSET_ENABLE_DTC_REC_UPDT         8u  /* AUTOSAR Dem_EnableDTCRecordUpdate */
#define DFES_CTLSET_SET_DISABLE_DTC_STORAGE_MSK 9u  /* AUTOSAR 3.14 Dem_DisableDTCStorage */

/**************************************************************************************************/
/* Status of single DFC clear                                                                     */
/**************************************************************************************************/
#define DFES_DFCCLR_INVALID          0xFFu
#define DFES_DFCCLR_STATUS           0x00u
#define DFES_DFCCLR_STATUS_HISTORY   0x01u


/**************************************************************************************************/
/* Status of DTC values - bit masks                                                               */
/**************************************************************************************************/


/* Last debounced digital fault state */
#define DSM_ST_CHECKMEM_TF_POS                  0u
#define DSM_ST_CHECKMEM_TFTMC_POS               1u
#define DSM_ST_CHECKMEM_PDTC_POS                2u
#define DSM_ST_CHECKMEM_CDTC_POS                3u
#define DSM_ST_CHECKMEM_TNCSLC_POS              4u
#define DSM_ST_CHECKMEM_TFSLC_POS               5u
#define DSM_ST_CHECKMEM_TNCTMC_POS              6u
#define DSM_ST_CHECKMEM_WIR_POS                 7u
#define DSM_ST_CHECKMEM_TNPSCPU_POS             8u
#define DSM_ST_CHECKMEM_TNPSDTCC_POS            9u

/* Bits 10 to 13 are used in PSA branch, hence, DO NOT! USE these bits in platform */
#define DSM_ST_CHECKMEM_CURRACTV_POS            10u
#define DSM_ST_CHECKMEM_ACTVSS_POS              11u
#define DSM_ST_CHECKMEM_ACTVSC_POS              12u
#define DSM_ST_CHECKMEM_TKEYON_POS              13u

/* Information about the status of long term errors */
#define DSM_ST_CHECKMEM_LTPROT_POS              14u
#define DSM_ST_CHECKMEM_LTREPARED_POS           15u
#define DSM_ST_CHECKMEM_LTPSEUDO_ERASED_POS     16u



#define DSM_GetSFCMemTstFail(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_TF_POS))

#define DSM_GetSFCMemTstFailCurrOC(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_TFTMC_POS))


#define DSM_GetSFCMemPendDTC(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_PDTC_POS))

#define DSM_GetSFCMemConfDTC(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_CDTC_POS))

#define DSM_GetSFCMemNoTstSnceLstClr(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_TNCSLC_POS))

#define DSM_GetSFCMemTstFailSnceLstClr(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_TFSLC_POS))

#define DSM_GetSFCMemNoTstCurrOC(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_TNCTMC_POS))

#define DSM_GetSFCMemWarnIndReq(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_WIR_POS))

#define DSM_GetSFCMemTNPSCPU(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_TNPSCPU_POS))

#define DSM_GetSFCMemTNPSDTCC(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_TNPSDTCC_POS))

#define DSM_GetSFCMemLTProt(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_LTPROT_POS))

#define DSM_GetSFCMemLTRepaired(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_LTREPARED_POS))

#define DSM_GetSFCMemLTPseudoErased(stCheck)    \
        ((uint)SrvB_GetBit((stCheck), DSM_ST_CHECKMEM_LTPSEUDO_ERASED_POS))



/* Following macros have no functionality in the main branch. They are used in PSA branch
   B_DSM_c646 only but it is necessary to update here to prevent these bits being used in
   platform */
#define DSM_GetSFCMemCAT(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_CURRACTV_POS))

#define DSM_GetSFCMemASS(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_ACTVSS_POS))

#define DSM_GetSFCMemASC(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_ACTVSC_POS))

#define DSM_GetSFCMemTstKeyOn(stCheck)     \
        ((uint)SrvB_GetBit( (stCheck), DSM_ST_CHECKMEM_TKEYON_POS))

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
/******************************************/
/* SFCM = Status Fault Check Manager.     */
/* container for the status bits of DTC.  */
/******************************************/
typedef uint32  DSM_SFCMType;

/******************************************/
/* InfoType for a DFC                     */
/******************************************/
typedef uint8  DSM_InfoDFCType;

/* DFES entry is in state pending                                                  */
/* Mode$07 visibility (only based on line state, independent of class calibration) */
#define DSM_IT_PEND_MSK ((DSM_InfoDFCType)0x01)
/* DFES entry is in state confirmed                                                */
/* Mode$03 visibility (only based on line state, independent of class calibration) */
#define DSM_IT_CONF_MSK ((DSM_InfoDFCType)0x02)
/* DFC is currently requesting MIL ON                                              */
/* based on line state and class calibration                                       */
#define DSM_IT_MIL_MSK  ((DSM_InfoDFCType)0x04)
/* DFC is visible on the GSST                                                      */
/* based on line state and class calibration                                       */
#define DSM_IT_OBD_MSK  ((DSM_InfoDFCType)0x08)
/* DFES entry is a PDTC                                                            */
/* PDTC classification based on DSM_PDTCTSTRA_SY                                   */
#define DSM_IT_PDTC_MSK ((DSM_InfoDFCType)0x10)


#define DSM_GetInfoDFCPend(info)  ((info) & DSM_IT_PEND_MSK)
#define DSM_GetInfoDFCConf(info)  ((info) & DSM_IT_CONF_MSK)
#define DSM_GetInfoDFCMIL(info)   ((info) & DSM_IT_MIL_MSK)
#define DSM_GetInfoDFCOBD(info)   ((info) & DSM_IT_OBD_MSK)
#define DSM_GetInfoDFCPDTC(info)  ((info) & DSM_IT_PDTC_MSK)


/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8       DFES_stErrLamp;
extern uint8       DFES_stErrDia;
extern uint8       DFES_ctOBD;
extern uint8       DFES_ctOBDPend;
extern uint8       DFES_ctOBDDef;
extern uint8       DFES_ctMIL;
extern uint8       DFES_ctSrv;
extern uint8       DFES_ctEntry;
extern uint8       DFES_numEntryAvl;
extern uint8       DFES_numFrzFrmSize;
extern uint8       DFES_numExtdFrzFrmSize;
extern uint8       DFES_numEnvSize;
extern uint8       DFES_stOutstate;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END

MEMLAY_USE_ENVRAM(extern uint16, DFES_ISOFrstFailDFC);
MEMLAY_USE_ENVRAM(extern uint16, DFES_ISORcntFailDFC);
MEMLAY_USE_ENVRAM(extern uint16, DFES_ISOFrstCnfDFC);
MEMLAY_USE_ENVRAM(extern uint16, DFES_ISORcntCnfDFC);

MEMLAY_USE_ENVRAM(extern uint16, DFES_numDFC[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_stEntry[]);


/**************/
/* Prototypes */
/**************/

__PRAGMA_USE__CODE__dsm__LowSpeed__START
bool DFES_DFCClrRequest(DSM_DFCType idDFC);
__PRAGMA_USE__CODE__dsm__LowSpeed__END
__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_CreatSusFrzFrm(DSM_DFCType CName);
void DSM_DltSusFrzFrm(DSM_DFCType CName);
uint DSM_GetSusFrzFrmSt(DSM_DFCType CName);
uint DFES_ctlSetting(uint setType, uint ctlOption );
DSM_SFCMType DSM_GetCheckMemStatus(uint idxDFC);
uint DFES_ClearDFC(DSM_DFCType CName);
void DFES_DecLTCnt(uint numDec);
void DFES_SetLTCntCtlMsk(void);
uint DSM_GetInfoDFC(DSM_DFCType dfc, DSM_InfoDFCType * info);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

#endif /* _DFES_PUB_H */
