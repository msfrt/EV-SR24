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
 * $Filename__:ats_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:AID3KOR$
 * $Date______:13.01.2011$
 * $Class_____:SWHDR$
 * $Name______:ats_pub$
 * $Variant___:1.16.0$
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
 * 1.16.0; 0     13.01.2011 AID3KOR
 *   Warnings Removal
 * 
 * 1.12.0; 1     09.07.2009 MMO2FE
 *   Skript extension for freeze configuration support.
 *   ats_pub.h: Codegeneration defines ATS_UpdActrValU8 and ATS_UpdActrValS16 
 *   removed because they are available in header file of codegeneration
 *   
 * 
 * 1.12.0; 0     19.06.2009 PRA2KOR
 *   1) New monitoring of brake status, accelerator staus and engine not zero 
 *   condition are added.
 *   2) ATS script changes to have default value, in case ats_std_confdata.xml 
 *   is not present.
 * 
 * 1.10.0; 0     21.01.2009 PRA2KOR
 *    Additional status functions for calling the actuator status.
 * 
 * 1.8.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ats_pub.h
 *      Version: \main\17
 * 
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ats_pub.h
 *      Version: \main\17
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: ats_pub.h
 *      Version: \main\17
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _ATS_PUB_H
#define _ATS_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 * Public header file for module ATS
 *
 * \scope              INTERN
 ***************************************************************************************************
 */




/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
#define ATS_NOTUSED_ID         0
#define ATS_VAL_NOT_SUPPORTED  MINSINT16

/* Return values for ATS_GetStatus function */
#define ATS_ST_ACT             0 /* Test is active */
#define ATS_ST_INACT           1 /* Test is inactive because it was never activated yet */
#define ATS_ST_INACT_LIM       2 /* Test is inactive because value exceeded some limit  */
#define ATS_ST_INACT_RNG       3 /* Test is inactive because test ID did not fit into the range */
#define ATS_ST_INACT_MON       4 /* Test is inactive because it was terminated by monitoring */
#define ATS_ST_INACT_CNV       5 /* Test is inactive because conversion to internal scaling failed*/
#define ATS_ST_INACT_DEM       6 /* Test is inactive due to deactivation demand */

/* Return values for ATS_SetIntvVal function */
#define ATS_SETINTV_ACT        ATS_ST_ACT
#define ATS_SETINTV_INACT      ATS_ST_INACT
#define ATS_SETINTV_INACT_LIM  ATS_ST_INACT_LIM
#define ATS_SETINTV_INACT_RNG  ATS_ST_INACT_RNG
#define ATS_SETINTV_INACT_MON  ATS_ST_INACT_MON
#define ATS_SETINTV_INACT_CNV  ATS_ST_INACT_CNV
#define ATS_SETINTV_INACT_DEM  ATS_ST_INACT_DEM

/* the bit-position correspond to the bit-position of the applikationslabel */
#define ATS_LIMIT_NONE_MSK          0x0  /* none          : mask is ...0000 */
#define ATS_LIMIT_ENG_SPEED_MSK     0x1  /* engine speed  : mask is ...0001 */
#define ATS_LIMIT_VEH_SPEED_MSK     0x2  /* vehicle speed : mask is ...0010 */
#define ATS_LIMIT_TIME_MSK          0x4  /* time          : mask is ...0100 */
#define ATS_LIMIT_BRK_MSK           0x8  /* brake pedal   : mask is ...1000 */
#define ATS_LIMIT_APP_MSK           0x10 /* accel. peadal : mask is ..10000 */
#define ATS_LIMIT_ALL_MSK           0x7  /* all           : mask is ...0111 */
#define ATS_LIMIT_ENG_NOTZERO_MSK   0x20 /* Engine speed is not zero   : mask is ...100000 */


/* Deactivation code for tester demand monitoring ( used for deactivation of monitoring during
   run of test procedures) 0xA5 is used because a maximum of bit changes are contained and the
   nibbles are different.                                                                       */
#define ATS_MON_NOT_ACTIVE_CODE 0xA5
#define ATS_MON_ACTIVE_CODE     0x00



/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

__PRAGMA_USE__ats__10ms__RAM__x8__START
extern uint8 ATS_stReqMonDisable;                         /* status for disabling the monitoring  */
__PRAGMA_USE__ats__10ms__RAM__x8__END

/* Callback function type */
typedef uint8  (*CbkFunc_pfn)(uint8 numActrID);

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__ats__10ms__constant__x8__START
extern const uint8        ATS_Max_Tst_Num;
__PRAGMA_USE__ats__10ms__constant__x8__END


__PRAGMA_USE__CODE__ats__NormalSpeed__START
/* Substitute the actuator value with the intervention value if the test is active */
extern void   ATS_SubsVal    (sint16 *ActrVal   /* actuator value which is to be substituted */
                             ,uint8   numActrID /* Actuator ID to access test-specific values */
                             );


/* this function is used for codegeneration by ASCET */
/* Substitute the actuator value with the intervention value if the test is active */
sint16   ATS_SubsVal_ASCETS16 (sint16 ActrVal   /* actuator value which is to be substituted */
                             ,uint8   numActrID /* Actuator ID to access test-specific values */
                             );


/*Update ATS actuator value array with actual actuator value */
extern void   ATS_UpdActrVal (sint16  ActrVal   /* actual actuator value */
                             ,uint8   numActrID /* Actuator ID to access test-specific values */
                             );


/* this function is for digital actuators, the Value is an uint8 !! */
/* Substitute the actuator value with the intervention value if the test is active */
extern void   ATS_SubsVal8   (uint8 *ActrVal   /* actuator value which is to be substituted */
                             ,uint8   numActrID /* Actuator ID to access test-specific values */
                             );


/* this function is used for codegeneration by ASCET */
/* Substitute the actuator value with the intervention value if the test is active */
uint8   ATS_SubsVal_ASCETU8   (uint8 ActrVal   /* actuator value which is to be substituted */
                             ,uint8   numActrID /* Actuator ID to access test-specific values */
                             );


/* this function is for digital actuators, the Value is an uint8 !! */
/*Update ATS actuator value array with actual actuator value */
extern void   ATS_UpdActrVal8 (uint8  ActrVal   /* actual actuator value */
                             ,uint8   numActrID /* Actuator ID to access test-specific values */
                             );

/* This function gets the status of ATS intervention from ASW to ATS */

extern void ATS_UpdEnaCond (bool  stEnable         /* status of intervention */
                           ,uint8 numActrID     /* Actuator ID to access test-specific values */
                           );

/* This function gets the ATS intervention status from the ATS to tester service */

extern bool ATS_GetEnaCond (uint8 numActrID);  /* Actuator ID to access test-specific values */



/* Return the actuator value currently stored in ATS in external scaling */
extern sint16 ATS_GetActrVal (uint8   numActrID /* Actuator ID to access test-specific values */
                             );


/* Return the actuator value currently stored in ATS in internal scaling */
extern sint16 ATS_GetActrValInt (uint8 numActrID /* Actuator ID to access test-specific values */
                                );


/* this function is for digital actuators, the Value is an uint8 !! */
/* Return the actuator value currently stored in ATS in external scaling */
extern uint8 ATS_GetActrVal8 (uint8   numActrID /* Actuator ID to access test-specific values */
                             );


/* this function is for digital actuators, the Value is an uint8 !! */
/* Return the actuator value currently stored in ATS in internal scaling */
extern uint8 ATS_GetActrValInt8 (uint8 numActrID /* Actuator ID to access test-specific values */
                                );


/* Return the status of the actuator test identified by the given ID */
extern uint8  ATS_GetStatus  (uint8   numActrID /* Actuator ID to access test-specific values */
                             );


/* Activate or deactivate an actuator test */
extern uint8  ATS_SetIntvVal (sint16  IntvVal   /* Intervention value which should be set */
                             ,uint8   stTstDem  /* actuator test status which should be set */
                             ,uint8   numActrID /* Actuator ID to access test-specific values */
                             );

/* Activate or deactivate an actuator test, extended version: convert value can be choosen  */
extern uint8  ATS_SetIntvValEx (sint16 IntvVal,  /* Intervention value which should be set */
                                uint8 stTstDem,  /* actuator test status which should be set */
                                uint8 numActrID, /* Actuator ID to access test-specific values */
                                bool stUseConv); /* TRUE: use the conversion, FALSE: dont uise it */

/* Set all actuators to a default value  */
extern uint8 ATS_SetDfltVal (uint8 numActrID);   /* Actuator ID to access test-specific values */

/* Reset all tests to inactive */
extern void   ATS_ResetAll (void);

/* Init Process */
extern void   ATS_Monitor_Proc_Ini (void);

/* Monitor process */
extern void   ATS_Monitor_Proc (void);

/* Enable Monitoring */
extern void   ATS_Monitor_Enable (void);

/* Disabling Monitoring */
extern void   ATS_Monitor_Disable (void);

/* extern declarations for uint16 support */
#ifdef ATS_U16_SUPPORT
#if ATS_U16_SUPPORT > 0

/* Substitute the actuator value with the intervention value if the test is active */
extern void   ATS_SubsValu16  (uint16 *ActrVal       /* actuator value which is to be substituted */
                              ,uint8   numActrID     /* Actuator ID to access test-specific values */
                              );

/*Update ATS actuator value array with actual actuator value */
extern void   ATS_UpdActrValu16 (uint16  ActrVal                         /* actual actuator value */
                                ,uint8   numActrID  /* Actuator ID to access test-specific values */
                                );

/* Return the actuator value currently stored in ATS in external scaling */
extern uint16 ATS_GetActrValu16 (uint8 numActrID    /* Actuator ID to access test-specific values */
                                );

/* Return the actuator value currently stored in ATS in internal scaling */
extern uint16 ATS_GetActrValIntu16 (uint8 numActrID /* Actuator ID to access test-specific values */
                                   );

/* Activate or deactivate an actuator test */
extern uint8  ATS_SetIntvValu16 (uint16  IntvVal        /* Intervention value which should be set */
                                ,uint8   stTstDem     /* actuator test status which should be set */
                                ,uint8   numActrID  /* Actuator ID to access test-specific values */
                                );

#endif
#endif

#ifdef ATS_RCC_SUPPORT
#if ATS_RCC_SUPPORT > 0

/* RCC Process */
extern void   ATS_RCC_Proc (void);

#endif
#endif
__PRAGMA_USE__CODE__ats__NormalSpeed__END

/* _ATS_PUB_H */
#endif
