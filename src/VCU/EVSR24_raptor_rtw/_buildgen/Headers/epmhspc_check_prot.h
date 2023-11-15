/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:epmhspc_check_prot.h$
 * $Author____:CAD2SI$
 * $Function__:Protected head of Sensor Polarity Check module$
 * $Domain____:SDOM$
 * $User______:CAD2SI$
 * $Date______:31.03.2010$
 * $Class_____:SWHDR$
 * $Name______:epmhspc_check_prot$
 * $Variant___:1.0.1$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.0.1; 0     31.03.2010 CAD2SI
 *   correction of prot header
 * 
 * 1.0.0; 0     03.03.2010 CAD2SI
 *   Initial Version
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _EPMHSPC_CHECK_PROT_H
#define _EPMHSPC_CHECK_PROT_H

#ifdef EPMHSPC_CHECK_USE

/**
 ***************************************************************************************************
 * /moduledescription
 * EPMHSPC_CHECK module.
 *
 * /scope  API
 ***************************************************************************************************
 */

#define EPMHSPC_CHECK_DATAARRAY_SIZE                     4

#define EPMHSPC_CHECK_DRIVER_DONE_OR_ABORTED_MASK                ( \
          (1 << (EPMHSPC_CHECK_STATUS_DRIVER_ABORTED))           | \
          (1 << (EPMHSPC_CHECK_STATUS_DRIVER_FINISHED))          )

#define EPMHSPC_CHECK_COPY_STATUS(sensor) ((EpmHSPC_Check_Status_t) \
    ((EpmHSPC_Check_Status_t)(EPMHSPC_CHECK_COPY_STATUS_MASK & EpmHSpc_Check_stSensInt_a[sensor].Status_u32)))


/* driver status bit positions */
#define EPMHSPC_CHECK_STATUS_DRIVER_RUNNING            0
#define EPMHSPC_CHECK_STATUS_DRIVER_ABORTED            1
#define EPMHSPC_CHECK_STATUS_DRIVER_FINISHED           2

#define EPMHSPC_CHECK_STATUS_DRIVER_TOOTHGAP_FOUND     4
#define EPMHSPC_CHECK_STATUS_DRIVER_WRONGPOLGAP_FOUND  5

#define EPMHSPC_CHECK_ERROR_WRONG_SIGNAL               8

/* driver status reset value */
#define EPMHSPC_CHECK_STATUS_DRIVER_IDLE               0

/* masks for easier check for status / errors */

#define EPMHSPC_CHECK_ERROR_MASK                                     \
           (1 << (EPMHSPC_CHECK_ERROR_WRONG_SIGNAL))

/* EPMHSPC_CHECK State Defines */

typedef enum
{
  EPMHSPC_CHECK_TYPE_CRS_E,
  EPMHSPC_CHECK_TYPE_CAS_E,
  EPMHSPC_CHECK_TYPE_LAST_E
} EpmHSpc_Check_SensorType_t;

typedef enum
{
  EPMHSPC_CHECK_ACTEDGE_FALLING_E,
  EPMHSPC_CHECK_ACTEDGE_RISING_E,
  EPMHSPC_CHECK_ACTEDGE_BOTH_E,
  EPMHSPC_CHECK_ACTEDGE_LAST_E
} EpmHSpc_Check_ActiveEdge_t;

typedef struct
{
    uint32 Status_u32;               /* driver internal status */
    uint32 CntActEdges_u32;          /* rolling counter for detected active egdes */
    uint32 CntAltEdges_u32;          /* rolling counter for detected alternate egdes */
    uint32  tiLtcy_u32;                /* ISR latency in us */
    uint32  tiIsr_u32;                 /* ISR duration in us */
    uint8  CntErr_u8;                /* count errors */
    uint8  idxBufAct_u8;             /* timestamp buffer index for active edges */
    uint8  idxBufAlt_u8;             /* timestamp buffer index for alternate edges */
} EpmHSpc_Check_stSensInt_t;

typedef struct
{
    uint32 tiActEdges_u32[EPMHSPC_CHECK_DATAARRAY_SIZE];
    uint32 tiAltEdges_u32[EPMHSPC_CHECK_DATAARRAY_SIZE];
} EpmHSpc_Check_tiSens_t;

typedef struct
{
    EpmHSpc_Check_SensorType_t sensorType_e;
    EpmHSpc_Check_ActiveEdge_t activeEdge_e;
    uint8                numTeeth_u8;
} EpmHSpc_Check_CfgSens_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__RAM__s32__START
extern EpmHSpc_Check_stSensInt_t EpmHSpc_Check_stSensInt_a[EPMHSPC_CHECK_NUM_SENSORS];         /* status */
extern EpmHSpc_Check_tiSens_t EpmHSpc_Check_tiSens_a[EPMHSPC_CHECK_NUM_SENSORS];               /* edge timestamps */
extern EpmHSpc_Check_CfgSens_t EpmHSpc_Check_CfgSens_a[EPMHSPC_CHECK_NUM_SENSORS];             /* internal driver configuration   */
__PRAGMA_USE__hwe__1_5ms__RAM__s32__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const EpmHSpc_Check_Regs_s EpmHSpc_Check_RtCfg_a[EPMHSPC_CHECK_NUM_SENSORS];            /* register configuration */
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

/*
 ***************************************************************************************************
 * Auto generated code
 ***************************************************************************************************
 */

/* EPMHSPC_CHECK_USE */
#endif

/* _EPMHSPC_CHECK_PROT_H */
#endif
