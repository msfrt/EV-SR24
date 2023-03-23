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
 * $Filename__:dinh_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:MMO2FE$
 * $Date______:06.07.2012$
 * $Class_____:SWHDR$
 * $Name______:dinh_prot$
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
 * 2.16.0; 0     06.07.2012 MMO2FE
 *   OBDII_054_01 LEVIII Harmonisation Engine Start - New OBD Driving Cycle
 * 
 * 2.14.0; 0     14.03.2012 NPG2KOR
 *   Takeover of implementation of the message DINH_MonNoSync
 * 
 * 2.12.0; 0     20.04.2011 MMO2FE
 *   New Inhibit Limit Deb50_Deb100_MILOn
 * 
 * 2.9.0; 1     08.11.2010 PKA2SI
 *   increase DINH_cntMonFidInhb[] to uint16
 * 
 * 2.9.0; 0     22.10.2010 PKA2SI
 *   recalculation of FId inhibit counters during monitoring
 * 
 * 2.7.0; 0     19.03.2010 PKA2SI
 *   suppress temporary FID releases caused by NotTested inhibit limits
 * 
 * 2.4.0; 0     18.08.2009 ABM1KOR
 *   Changes to update PTO feature.
 * 
 * 2.3.0; 0     11.07.2009 ABM1KOR
 *   (MO:293727): Changes to implement inhibit till end of trip feature.
 * 
 * 2.2.0; 0     09.12.2008 PKA2SI
 *   import from CC : dinh_prot.h  \main\basis\b_CORE\7
 * 
 * 2.1.0; 0     26.09.2008 ILK2SI
 *   Component Toolbox-Import
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DINH_PROT_H
#define _DINH_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - Inhibit handler: prototypes and definitions
 *
 * \scope           INTERN
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/* Mask for encoding the DFC state in an inhibit friendly way (for each possible limit one bit)   */
#define  DINH_INITMASK      0x7EFE
#define  DINH_NOLDFMASK     0x9381
#define  DINH_NOMFLMASK     0xBDAB
#define  DINH_NOTSTMASK     0x9F67
#define  DINH_NOTST_ORMASK  0x0160
#define  DINH_FL0_ORMASK    0x0800
#define  DINH_DA_ORMASK     0x0C00
/* limit Def100_Deb0 is identical to MaxFlt flag - used to detect necessity of update */
#define  DINH_MAXFLT_LIMIT  0x0200




/* Access to the application data with same assembly as needed for subtraction */
/* parameter is the index within the inhibit array/defect levels. */
#define DINH_GetInhLimits(idx)  ((uint)(DINH_adLim[(idx)] ))

/* Masks for monitoring of inhibit with dirty flag and background status within the
   counter value */
#define DINH_MON_CHG       0x80
#define DINH_MON_INH       0x40
#define DINH_MODE7_VIS     0x10

/* #define to give the observer value during Inhibited trip condition */
#define INHIBITED_TRIP     0xFFFFu

#define DINH_CNT           0x0E
/* Mask to check for inhibited trip condition */
#define DINH_CNT_MSK       0x0F
#define DINH_CNT_RST       0xFE

#define DINH_CNT_PERM_MSK  0x3F


/* set permission of Inhibit Handler */
/* must always be called under interrupt protection */
#define DINH_SetPermission(FctId)  (DINH_stFId[(FctId)] |= (uint8) DSM_SCH_INH_MK)


/**
 **************************************************************************************************
 * This method will reset the permission of an FId and if it is scheduled FId it will also
 * reset bit zol (= raw Scheduling) and perm in the scheduler status, for the given FID.
 *
 * \param        FId number
 * \return       none
 **************************************************************************************************
 */

#ifdef RENESAS_SHC
/* Implementation for Renesas Compiler requires #pragma inline statement */
#pragma inline (DINH_ClrPermission)
#endif

#ifndef RENESAS_SHC
MEMLAY_USE_FORCE_INLINE( void DINH_ClrPermission(uint FctId) )
#else
static void DINH_ClrPermission(uint FctId)
#endif
{
    DINH_stFId[(FctId)] &= (uint8) (~(DSM_SCH_INH_MK));
    /* check if scheduled */
    if((FctId) < DSCHED_numFIdMaxNoAckn)  \
    {
        /* DINH_ClrPermission must always be called under interrupt lock,
         * otherwise DINH_stFId would need protection, too */
        //Cpu_SuspendInt(); /* begin atomic (interrupt lock) */
        DSCHED_St[(FctId)] = (DSCHED_St[(FctId)] & (DSCHED_StType)(~DSCHED_SCD_ZOL_MSK));
        //Cpu_ResumeInt(); /* end atomic (interrupt lock) */
    }

}

/* set mode 7 visibility, FId is assigned to a DFC which is visible on OBD GSTT */
#define DINH_SetMode7Visibility(FctId)  (DINH_stFId[(FctId)] |= (uint8) DINH_MODE7_VIS)

/* clear mode 7 visibility */
#define DINH_ClrMode7Visibility(FctId)  (DINH_stFId[(FctId)] &= (uint8) (~DINH_MODE7_VIS))

/* get mode 7 visibility */
#define DINH_GetMode7Visibility(FctId)  ((DINH_stFId[(FctId)] & (uint8) DINH_MODE7_VIS) > 0)

/* Get forced inhibit or release of FId */
#define DINH_GetFIdInh(FctId)     \
          (((DINH_FIdInh_CA[((FctId) >> 4u)]) >> ((FctId) & 0xFu)) & 0x01)


#define DINH_GetFIdRls(FctId)     \
          (((DINH_FIdRls_CA[((FctId) >> 4u)]) >> ((FctId) & 0xFu)) & 0x01)

/********* definitions of verbal conversions (as long as no data specification tool is available)*/

/* DINH_LimDFCVerb verbal conversion for DFC limits */
#define InhLimit_No_Inhibit             0
#define InhLimit_Def50_Deb100           1
#define InhLimit_Def100_Deb100          2
#define InhLimit_Def50_Deb100_Tst       3
#define InhLimit_Def100_Deb100_Tst      4
#define InhLimit_Def50_Deb100_or_NTst   5
#define InhLimit_Def100_Deb100_or_NTst  6
#define InhLimit_Tested                 7
#define InhLimit_NotTested              8
#define InhLimit_Def100_Deb0            9
#define InhLimit_Def50_Deb0             10
#define InhLimit_Def25_Deb0             11
#define InhLimit_Def0_Deb0              12
#define InhLimit_Def50_Deb100_Tst_Trip  13
#define InhLimit_Def100_Deb100_Tst_Trip 14
#define InhLimit_Def50_Deb100_MILOn     15

/* define to identify trip limits Def50_Deb100_Tst_Trip , Def100_Deb100_Tst_Trip */
#define DINH_INHTRIP_LIM  \
       ((1u << (InhLimit_Def50_Deb100_Tst_Trip))|(1u << (InhLimit_Def100_Deb100_Tst_Trip)))


/* DINH_LimDSQVerb "verbal" conversions for signal quality limits */
#define InhLimit_Quality_0         0x0u
#define InhLimit_Quality_1         0x1u
#define InhLimit_Quality_2         0x2u
#define InhLimit_Quality_3         0x3u
#define InhLimit_Quality_4         0x4u
#define InhLimit_Quality_5         0x5u
#define InhLimit_Quality_6         0x6u
#define InhLimit_Quality_7         0x7u
#define InhLimit_Quality_8         0x8u
#define InhLimit_Quality_9         0x9u
#define InhLimit_Quality_10        0xAu
#define InhLimit_Quality_11        0xBu
#define InhLimit_Quality_12        0xCu
#define InhLimit_Quality_13        0xDu
#define InhLimit_Quality_14        0xEu
#define InhLimit_Quality_15        0xFu

/* Number of inhibit monitoring cycles until syncronized
(2 to ensure that at least one cycle complete cycle executed) */
#define DINH_MON2SYNCED            0x2u

/* Max value for DINH_MonNoSync to avoid usage before execution of DFC Reinit part2 */
#define DINH_MONMAXSYNCED          255u

 /* defines for FId inhibit counter corrections */
#define INH_MON_INHBCNT_MAXFIDS     (1u << (DINH_MONINHBCNT_SC))
#define INH_MON_INHBCNT_RQRDCYCLES  (DSM_ctCfgFIdMax / DINH_INHCNT_MAXFIDS)
#define INH_MON_INHBCNT_POSNMASK    ((uint16)(INH_MON_INHBCNT_MAXFIDS)-1u)
#define INH_MON_INHBCNT_SELMASK     (~(INH_MON_INHBCNT_POSNMASK))

/************ Selector for Reinit ******************************** */
#define DINH_REINIT         0u   /* DINH Reinit without Inhibit till End of Trip unlock */
#define DINH_REINITDC       1u   /* DINH Reinit with Inhibit till End of Trip unlock */


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variable Prototypes
 ***************************************************************************************************
 */
/* Hint: Fid status array is defined in public header dsminh.h */


/* inhibit pointers = start index for each check/quality */
__PRAGMA_USE__dsm__1_5ms__constant__arr16__START
extern const uint16 DINH_numOffset[];
/* provided DSQs: Array with provided DSQs for all FIds */
extern const uint16 DINH_numPrvdDSQ[];
/* provided DSQs: Array with start index for each FId */
extern const uint16 DINH_idxOfsPrvdDSQ[];
__PRAGMA_USE__dsm__1_5ms__constant__arr16__END

/* highest Fid number + 1 */
__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16 DSM_ctCfgFIdMax;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END
/* Array with number of inhibit source  => will be replaced later by measurement points */
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16 DINH_xWhy[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END

__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
/* Monitoring counter */
extern uint16   DINH_ctMonCorr;
extern uint16   DINH_selMonFid;
extern uint16   DINH_idxMonInhbRel;
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16   DINH_cntMonFidInhb[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END


/* FID observation */
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8   DINH_idxObsvRls;
extern uint8   DINH_idxObsvInh;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END
__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
extern uint16  DINH_idxInhSrcFrzRls;
extern uint16  DINH_idxInhSrcFrzInh;
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END
__PRAGMA_USE__dsm__1_5ms__RAM__s16__START
extern SrvB_SWTmrS16 DINH_PageTmrRls;
extern SrvB_SWTmrS16 DINH_PageTmrInh;
__PRAGMA_USE__dsm__1_5ms__RAM__s16__END


/*
 ***************************************************************************************************
 * Prototypes for future application parameters
 ***************************************************************************************************
 */

/**
 prototype Pointer to inhibit matrix link part
 */
extern const uint16 * DINH_adFId ;

/**
 prototype Pointer to inhibit matrix limit part
 */
extern const uint8 * DINH_adLim ;






__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DSM_UdtDFCInh(   uint           idxCheck       /* Reference for Check                        */
                    , uint           stCheckNew     /* new status word of check                   */
                  );

void DSM_UdtDSQInh(   uint           idxDSQ         /* Reference for signal quality               */
                    , uint           stQualityNew   /* new status word of check                   */
                    , uint           stQualityOld   /* old status word of check                   */
                  );

uint encodeInhibDFCState(
                      uint    dfc_state   /* current DFC state                                                  */
                    , uint    mfl_bit     /* current MaxFault (max. fault occured) state                             */
                  );

void DINH_Proc_Ini( void );
void DSM_ReInitInh( void );


void DSM_MonInh(void);


void DSM_MonInhReset(void);


void DINH_SetCalPt(void);

void DINH_MeasProc(void);

void DINH_ObsvAddEntryInh(uint idxInhibit);
void DINH_ObsvAddEntryRls(uint idxInhibit);
sint DINH_ObsvClrUnusedInh(void);
sint DINH_ObsvClrUnusedRls(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__HighSpeed__START
bool DSM_GetPTOInh(uint numFId);
__PRAGMA_USE__CODE__dsm__HighSpeed__END

#endif
