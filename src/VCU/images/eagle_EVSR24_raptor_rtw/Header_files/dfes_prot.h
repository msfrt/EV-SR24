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
 * $Filename__:dfes_prot.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:NPG2KOR$
 * $Date______:24.02.2015$
 * $Class_____:SWHDR$
 * $Name______:dfes_prot$
 * $Variant___:2.36.0$
 * $Revision__:2$
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
 * 2.36.0; 2     24.02.2015 NPG2KOR
 *   Review changes and removal of system constant encapsulation (delayed delete
 *    OR PDTC enabled)
 *   in DFES_SetFltVisibility to support 3 level OBD priority independently.
 *   
 * 
 * 2.36.0; 1     16.02.2015 NPG2KOR
 *   To limit the number of EEP writes due to clear requests
 * 
 * 2.36.0; 0     03.02.2015 NPG2KOR
 *   To limit the number of EEP writes due to clear requests
 * 
 * 2.34.0; 0     03.12.2014 MGO5KOR
 *   improvement in EEP_write handling
 * 
 * 2.27.0; 0     13.06.2013 KKA4KOR
 *   Changes in Mode7 visibility for DSQ for the condition of inibit limit not 
 *     equal to InhLimit_No_Inhibit
 * 
 * 2.26.0; 1     15.05.2013 ACT1KOR
 *   update in pub.h
 * 
 * 2.26.0; 0     29.04.2013 ACT1KOR
 *   change of datatype DFES_numSumTotFrzFrRAM to uint16 and bugfix for 
 *   suspected freezeframe interfaces
 * 
 * 2.24.0; 0     18.09.2012 MMO2FE
 *   New ROE Event ERR2OK_ACT that only comes in Ini-ReIni if LDF is set and 
 *   ResetAtIni is calibrated.
 * 
 * 2.22.0; 0     01.08.2012 PKA2SI
 *   common env block calibration
 * 
 * 2.21.0; 0     06.07.2012 MMO2FE
 *   OBDII_054_01 LEVIII Harmonisation Engine Start - New OBD Driving Cycle
 *   + some minor CV Cleanup
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _DFES_PROT_H
#define _DFES_PROT_H

/**
 ***************************************************************************************************
 * \moduledescription
 *              DSM - fault code memory (fcm): prototypes, definitions and access macros
 *
 * \scope       INT
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define DFC_UNUSED 0u   /* no DFC available */
#define InhLimit_Quality_No_Inhibit   0x10u 

/**
 trigger types for fcm state machine
 */
#define DFES_TRIG_TYPE_NONE    0u
#define DFES_TRIG_TYPE_TIME    0u
#define DFES_TRIG_TYPE_DCY     0u
#define DFES_TRIG_TYPE_WUC     0u


/* selection macros for relevant trigger type */
#define DEL_TRIG_NONE     0
#define DEL_TRIG_CUST     1
#define DEL_TRIG_PEN      2
#define DEL_TRIG_OBD      3
#define DEL_IMMEDIATE     4


/**
 define for size of extended freeze frame ==> later configuration
 */
#define DSM_NUM_FCM_EX_FRZFR  0

/**
 define for not valid fcm and link index (works as NULL Pointer)
 */
#define IDX_NOT_VALID  0xFFu


/**
 define for maximum priority in case of PDTC
 */
#define DFES_MAXPRIOPDTC  1000u


/****************************************************/
/****************************************************/
/************ uint entryTyp Bit assignement  ********/
/****************************************************/
/*             32-2 1 0                           ***/
/*               |  | |                           ***/
/*               |  |  \_ DFES_ENTRY_TYPE_PDTC    ***/
/*               |   \___ DFES_ENTRY_TYPE_SDW     ***/
/*                \______ Unused                  ***/
/****************************************************/

/**
 define to create entries of type PDTC
 */
#define DFES_ENTRY_TYPE_PDTC   0x01u
/**
 define to create entries of type shadow, not yet debounced
 */
#define DFES_ENTRY_TYPE_SDW    0x02u

/**
 define to mark empty locations in the EEPROM block. Give the highest possible DFC index to empty
 entries. This marker is used to distinguish between call made from Re-init and from init (with
 cancelled postdrive)
 */

#define DFC_EMPTY_PDTC_MARKER   0x0FFFu


/**
 define for not valid fault check number (because Check number 0 unused this is the best number)
 */
#define CHK_NOT_VALID  0x0u


/**
 highest defect level which is regarded as ok in the fcm, above that a fcm entry must be created
 */
#define DFES_DFCT_LIM_OK    0x7u


/**
 prime factor used for hash function
 */
#define DFES_FACT_FES_PRIME    11u


/**************************************************************************************************/
/**************************** Definition of the order buffer **************************************/
/**************************************************************************************************/
/** Layout of order buffer:

15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
|  |  |  |  |  |  | | | | | | | | |  \_ secondary order queue : Bit0 of Trigger max
|  |  |  |  |  |  | | | | | | | |  \___ secondary order queue : Bit1 of Trigger max
|  |  |  |  |  |  | | | | | | |  \_____ secondary order queue : Bit0 of Trigger last
|  |  |  |  |  |  | | | | | |  \_______ secondary order queue : Bit1 of Trigger last
|  |  |  |  |  |  | | | | |  \_________ entry created for freeze frame only data
|  |  |  |  |  |  | | | |  \___________ lock clear to protect order update
|  |  |  |  |  |  | | |  \_____________ entry created during function tester control
|  |  |  |  |  |  | |  \_______________ entry created during EOL tester control
|  |  |  |  |  |  |  \_________________ primary order queue : Bit0 of Trigger max
|  |  |  |  |  |   \___________________ primary order queue : Bit1 of Trigger max
|  |  |  |  |   \______________________ primary order queue : Bit0 of Trigger last
|  |  |  |   \_________________________ primary order queue : Bit1 of Trigger last
|  |  |   \____________________________ Environment stored
|  |   \_______________________________ Freeze frame stored
|   \__________________________________ Order active, assigned to primary order
 \_____________________________________ DFES_ORD_INIT_MSK = init of state machines required
*/

/**
 Indicator that entry was created during function tester was active
 */
#define DFES_ORD_FT_MSK         0x0040u
/**
 Indicator that entry was created during end of line tester was active
 */
#define DFES_ORD_EOL_MSK        0x0080u
/**
 Indicator that freeze frame and order is processed at the moment, so replacement by higher
 priority check must be blocked until this is ready
 */
#define DFES_ORD_BLOCK_MSK      0x0020u

/**
 Indicator that entry was created for freeze frame only data
 */
#define DFES_ORD_FRZFR_ONLY_MSK 0x0010u



/**
 primary order queue; maximum Trigger level which must be processed
 */
#define DFES_ORD_TRG_MAX_MSK    0x0300u
#define DFES_ORD_TRG_MAX_POS    0x0008u
#define DFES_ORD_TRG_MAX_LEN    0x0002u


/**
 primary order queue; last Trigger level, normally the same as the maximum level. If lower value,
 this level must be shifted into maximum level as soon as the actual maximum level is processed.
 In this case the order active bit is keept set.
 */
#define DFES_ORD_TRG_LST_MSK    0x0C00u
#define DFES_ORD_TRG_LST_POS    0x000Au
#define DFES_ORD_TRG_LST_LEN    0x0002u

/**
 secondary order queue used to buffer diagnostic results during ReInit handling. Switch is done
 dynamic by loop idx of ReInit-part1. Handling analog primary order queue, despite no usage of
 active bit. Active bit is replaced by reading and deleting max, last trigger content.
*/
/**
 secondary order queue; maximum Trigger level which must be processed
 */
#define DFES_ORD2_TRG_MAX_MSK    0x0003u
#define DFES_ORD2_TRG_MAX_POS    0x0000u
#define DFES_ORD2_TRG_MAX_LEN    0x0002u
/**
 secondary order queue; last Trigger level, normally the same as the maximum level. If lower value,
 this level must be shift into maximum level as soon as the actual maximum level is processed.
 */
#define DFES_ORD2_TRG_LST_MSK    0x000Cu
#define DFES_ORD2_TRG_LST_POS    0x0002u
#define DFES_ORD2_TRG_LST_LEN    0x0002u
/**
 secondary order queue must be init with DFES_ORD_TRG_NO for max and last trigger,
 because no active flag available
 */
#define DFES_ORD2_INIT_MSK      0x000Fu
/**
 init value of ReInit-part1 loop idx means route all DFC reports to primary order qeueu,
 default behaviour if not in reInit handling.
 */
#define DFES_IDX_PRIM_ORD     0x00u

/**
 Indicator that a primary order is not processed up to now
 */
#define DFES_ORD_ACT_MSK        0x4000u

/**
 Indicator for new entry which must be initialized complete
 */
#define DFES_ORD_INIT_MSK       0x8000u
/**
 Freeze frame (and environment conditions) of entry is stored indicator
 */
#define DFES_ORD_ST_FRZFR_MSK   0x2000u

/**
 manufacturer specific environment stored. This is set if environment is stored by transition and
 reset if OK trigger occurs. Necessary to detect ok to shadow or ok to err_deb transition but
 ignore the shadow to err_deb transition
 */
#define DFES_ORD_ST_ENV_MSK     0x1000u

/**
 definition of the order trigger types.
 attention: the number is at the same time the offset within the state table of the check state!
 */
#define DFES_ORD_TRG_OK         0u
#define DFES_ORD_TRG_ERR_SDW    1u
#define DFES_ORD_TRG_ERR_DEB    2u
#define DFES_ORD_TRG_NO         3u


/**************************************************************************************************/
/**************** check states for check state Machine DFES_stChk[]********************************/
/**************************************************************************************************/
/** Layout of check state:

7 6 5 4 3 2 1 0
| | | | | | |  \_ |
| | | | | |  \___ | 4 Bit status variable for state machine
| | | | |  \_____ |
| | | |  \_______ |
| | |  \_________ | similar condition for HLC trigger come true
| |  \___________ | increment frequency counter
|  \_____________ | NVRAM bit for order buffer "Freeze frame stored"
 \_______________ | NVRAM bit for order buffer "Evironment stored"
*/

/* state definitions */
#define DFES_ST_CHECK_OK_INI       0x00u
#define DFES_ST_CHECK_OK           0x01u
#define DFES_ST_CHECK_OK_HEALED    0x02u
#define DFES_ST_CHECK_OK_SET       0x03u

#define DFES_ST_CHECK_ERR_INI      0x04u
#define DFES_ST_CHECK_ERR          0x05u
#define DFES_ST_CHECK_ERR_DEB      0x06u
#define DFES_ST_CHECK_ERR_SET      0x07u

#define DFES_ST_CHECK_MAXNUM       0x07u
#define DFES_ST_CHECK_MSK          0x0Fu
#define DFES_ST_CHECK_POS          0x00u
#define DFES_ST_CHECK_LEN          0x04u

/* single Flags */
#define DFES_ST_CHECK_SIMCOND_MSK  0x10u
#define DFES_ST_CHECK_FRQ_CNT      0x20u
#define DFES_ST_CHECK_FRZFR_MSK    0x40u
#define DFES_ST_CHECK_ENV_MSK      0x80u


/**************************************************************************************************/
/**************** Triggers Outputs from the check state Machine ***********************************/
/**************************************************************************************************/
/* the triggers are bitcoded and can be ored to have more than one at the same time */
#define DFES_CHECK_TRG_FRQ_CNT        0x00000001u   /* increment frequency counter                */
/* for counter handling first conditional triggers which must be filtered by trigger status*/
#define DFES_CHECK_TRG_PART_FLT_COND  0x00000002u   /* partial fault if trigger fullfilled        */
#define DFES_CHECK_TRG_HEAL_COND      0x00000004u   /* heal if trigger fullfilled                 */
#define DFES_CHECK_TRG_MANU_FLT_COND  0x00000008u   /* manufac. fault if trigger fullfilled       */
#define DFES_CHECK_TRG_MANU_HEAL_COND 0x00000010u   /* manufac. heal if trigger is fullfilled     */

#define DFES_CHECK_TRG_TIME_HEAL      0x00000020u   /* Heal trigger for Time debouncings          */


/* for counter handling second the filtered triggers                                              */
#define DFES_CHECK_TRG_PART_FLT       0x00000040u   /* partial fault                              */
#define DFES_CHECK_TRG_HEAL           0x00000080u   /* heal                                       */
#define DFES_CHECK_TRG_MANU_FLT       0x00000100u   /* manufac. fault                             */
#define DFES_CHECK_TRG_MANU_HEAL      0x00000200u   /* manufac. heal                              */




/* additional Triggers by Validator */
#define DFES_CHECK_TRG_FLT            0x00000400u   /* fault validated and trigger fullfilled     */
#define DFES_CHECK_TRG_FLT_COND       0x00000800u   /* fault validated but trigger not fullfilled */


/**************************************************************************************************/
/**************** Counter state machines                        ***********************************/
/**************************************************************************************************/

/* states for the count state, used for both OBD and Manufacturer specific                        */
#define DFES_CNT_NONE                 0u
#define DFES_CNT_HLC_TRG              1u
#define DFES_CNT_HLC_ELAP             2u
#define DFES_CNT_FLC_CNT              3u
#define DFES_CNT_FLC_TIME             4u
#define DFES_CNT_HLC_TIME             5u

/* Position of states within the counter states byte */

/* OBD counters 3 bit */
#define DFES_ST_CNT_OBD_POS           0u
#define DFES_ST_CNT_OBD_LEN           3u

/* Manufactuerer counters 3 bit */
#define DFES_ST_CNT_MANU_POS          4u
#define DFES_ST_CNT_MANU_LEN          3u



/**************************************************************************************************/
/**************** Triggers Outputs from counter state Machine   ***********************************/
/**************************************************************************************************/
#define DFES_CNT_TRG_MIL_ON           0x00001000u   /* MIL on                                     */
#define DFES_CNT_TRG_MIL_OFF          0x00002000u   /* MIL off                                    */
#define DFES_CNT_TRG_MANU_ON          0x00004000u   /* System lamp on                             */
#define DFES_CNT_TRG_MANU_OFF         0x00008000u   /* System lamp off                            */

#define DFES_CNT_TRG_HEAL             0x00100000u   /* Heal trigger from counter                  */


/* Bitfield data for merging state machine results to global trigger                              */
#define DFES_CNT_TRG_OBD_POS          12u
#define DFES_CNT_TRG_OBD_LEN          2u

#define DFES_CNT_TRG_MANU_POS         14u
#define DFES_CNT_TRG_MANU_LEN         2u

/**************************************************************************************************/
/***********************  Triggers Outputs of scan order   ****************************************/
/**************************************************************************************************/
#define DFES_SCANORD_TRG_FRZFRM_ONLY  0x00200000u   /* Trigger to change to etnry state
                                                       Freeze Frame Only                          */



/**************************************************************************************************/
/**************** Triggers Outputs to initialize long time counter (heavy duty OBD)  **************/
/**************************************************************************************************/

#define DFES_ENTRY_TRG_INILTC_PEN         0x00400000u     /* entering Pending first time          */
#define DFES_ENTRY_TRG_REINILTC_PEN       0x00800000u     /* reentering Pending                   */
#define DFES_ENTRY_TRG_INILTC_CONF        0x01000000u     /* entering Confirmed first time        */
#define DFES_ENTRY_TRG_REINILTC_CONF      0x02000000u     /* reentering Confirmed                 */

#define DFES_ENTRY_TRG_INILTC_POS         22u
#define DFES_ENTRY_TRG_INILTC_LEN         4u


/* MIL state machine */


/* Service state machine */



/**************************************************************************************************/
/*******************   entry states definition   DFES_stEntry[]  **********************************/
/**************************************************************************************************/
/* Layout of entry state:

7 6 5 4 3 2 1 0
| | | | | | |  \_ |
| | | | | |  \___ | 4 Bit status variable for entry state machine
| | | | |  \_____ |
| | | |  \_______ |
| | | |
| | |  \_________ | DFES_ST_ENTRY_DELAYED_DEL  Entry is marked as delayed delete, special delete
| | |                                          handling to confirm delete request by a healing event
| | \____________ | DFES_ST_ENTRY_PDTC         Entry marked as Permanent DTC, special OBD handling
| |                                            with a high priority
|  \_____________ | DFES_ST_ENTRY_PDTC_STRD    Entry is marked as Permanent DTC and stored in ENVRAM
|                                              successfully
 \_______________ | SVS status
*/
/* state definitions */
#define DFES_ST_ENTRY_PRIV_EMPTY      0u    /* unused empty entry                                 */
#define DFES_ST_ENTRY_PRIV_HISTORY    1u    /* entry deleted, but not overwritten up to now       */
#define DFES_ST_ENTRY_PRIV_TEMP       2u    /* entry only initialized by scan process             */
#define DFES_ST_ENTRY_PRIV_ALLOC_FRZ  3u    /* entry contains only freeze frame up to now         */
#define DFES_ST_ENTRY_MAN_ERR         4u    /* Error manufacturer specific                        */
#define DFES_ST_ENTRY_MAN_OK_DEB      5u    /* Ok manufacturer specific debounced                 */
#define DFES_ST_ENTRY_MAN_ERR_DEB     6u    /* Error manufacturer specific debounced              */
#define DFES_ST_ENTRY_MAN_ERR_LEG     7u    /* Error manufacturer specific with legal history     */
#define DFES_ST_ENTRY_MAN_OK_LEG      8u    /* Ok manufacturer specific with legal history        */
#define DFES_ST_ENTRY_MAN_OK          9u    /* Ok manufacturer specific never complete debounced  */
#define DFES_ST_ENTRY_LEG_PEN        10u    /* Legacy pending error                               */
#define DFES_ST_ENTRY_LEG_CONF       11u    /* Legacy confirmed error                             */
#define DFES_ST_ENTRY_LEG_CONF_PEN   12u    /* Legacy reconfirmation of aging error               */
#define DFES_ST_ENTRY_LEG_CONF_HEAL  13u    /* Legacy healing confirmed error                     */
#define DFES_ST_ENTRY_LEG_CONF_AGE   14u    /* Legacy confirmed error aging                       */



#define DFES_ST_ENTRY_MAXNUM       14u
#define DFES_ST_ENTRY_MSK          0x0Fu
#define DFES_ST_ENTRY_POS          0x00u
#define DFES_ST_ENTRY_LEN          0x04u

/* Entry is marked as delayed delete, special delete handling to confirm delete request
   by one healing event */
#define DFES_ST_ENTRY_DELAYED_DEL  0x10u

/* Entry is marked as Permanent DTC, fault entry is comanding MIL On */
#define DFES_ST_ENTRY_PDTC         0x20u
/* Entry is marked as Permanent DTC and stored in ENVRAM sucessfully */
#define DFES_ST_ENTRY_PDTC_STRD    0x40u

/* one bit of entry state byte is used as 1 bit svs state machine */
#define DFES_ST_ENTRY_SVS_POS      7u

/* Entry is marked as Permanent DTC, MIL On and stored in ENVRAM sucessfully */
#define DFES_ST_ENTRY_PDTC_MILON_STRD    0x60u


/* type definition for entry state machine (needed because of const array prototype below) */
/* Definition of a structure for each entry in the state machine definition table */
typedef struct
{
    uint32 InTrigger;                       /* trigger for activation of this change              */
    uint16 stNext;                          /* next state                                         */
    uint32 OutTrigger;                      /* trigger which is activated due to this change      */
} DFES_EntryFSMType;



/**************************************************************************************************/
/**************** Triggers Outputs from entry state Machine     ***********************************/
/**************************************************************************************************/

#define DFES_ENTRY_TRIG_INIDLC_MANU   0x010000u
#define DFES_ENTRY_TRIG_INIDLC_CARB   0x020000u
#define DFES_ENTRY_TRIG_INIDLC_PEN    0x040000u

#define DFES_ENTRY_TRIG_RESET_FRZ     0x080000u


/* delete counter handling */
#define DFES_ST_ENTRY_CTDEL_LEN       3u
#define DFES_ST_ENTRY_CTDEL_POS       16u
#define DFES_ST_ENTRY_CTDEL_MSK       ((((1u << (DFES_ST_ENTRY_CTDEL_LEN))-1u)) \
                                               << (DFES_ST_ENTRY_CTDEL_POS))




/**************************************************************************************************/
/**************** check fault level DFES_stChkFault[] (used in pre-emptive calls)******************/
/**************************************************************************************************/
/* Layout of check fault levels:

7 6 5 4 3 2 1 0
| | | | | | |  \_ Unused
| | | | | |  \___ Unused
| | | | |  \_____ DFES_ST_PDTC_EEP_STRD_POS       PDTC stored in EEPROM (internal bit. Used during postdrive)
| | | |  \_______ DFES_ST_MIN_RATIO_DC_POS        Minimum ratio driving cycle
| | |  \_________ DFES_ST_FAULT_FSS_POS           Fault reported even before trigger is occured
| |  \___________ DFES_ST_MOST_RECENT_OK_DC_POS   Most recent driving cycle without a fault
|  \_____________ DFES_ST_FAULT_FT   Entry created under function tester control (define from order)
 \_______________ DFES_ST_FAULT_EOL  Entry created under EOL tester control (define from order )
*/

#define DFES_ST_PDTC_EEP_STRD_POS      0x2u
#define DFES_ST_PDTC_EEP_STRD_MSK \
        (1u << (DFES_ST_PDTC_EEP_STRD_POS))

#define DFES_ST_MIN_RATIO_DC_POS       0x3u
#define DFES_ST_MIN_RATIO_DC_MSK \
        (1u << (DFES_ST_MIN_RATIO_DC_POS))



/* entry has a fault reported since start but the flc trigger is not achieved yet */
#define DFES_ST_FAULT_FSS_POS    0x4u
#define DFES_ST_FAULT_FSS_MSK \
        (1u << (DFES_ST_FAULT_FSS_POS))


/* single Flags */
#define DFES_ST_MOST_RECENT_OK_DC_POS  0x5u
#define DFES_ST_MOST_RECENT_OK_DC_MSK \
        (1u << (DFES_ST_MOST_RECENT_OK_DC_POS))

#define DFES_ST_FAULT_FT               0x40u
#define DFES_ST_FAULT_EOL              0x80u



/**************************************************************************************************/
/**************** delete of DFES                          *****************************************/
/**************************************************************************************************/
/* bit coding at DFES_RdBuf.stLstClearOrder_u16 : */
/* Bit 0-3 indicates the clear request method     */
/* Bit 4-15 indicates the DFC id, if DFES_ClrEntry 
   was the latest issued clear request            */
/* With the new encoding even though several 
   different clear methods can remembered in case 
   of interrupted clear, only one of those can be 
   re triggered                                   */
/* Hence the following priority is considered     */
/* ClrAllInit > ClrAll > ClrEntry > ClrLst        */

#define DFES_CLR_ALL_BIT_MSK        (0x01u)
#define DFES_CLR_ALLINI_BIT_MSK     (0x02u)
#define DFES_CLR_ENTRY_BIT_MSK      (0x04u)
#define DFES_CLR_LIST_BIT_MSK       (0x08u)

#define DFES_CLR_MTD_BIT_MSK        (0x0Fu)
#define DFES_CLR_ENTRY_IDX_MSK      (0x0FFFu)
#define DFES_CLR_EXTR_IDX_MSK       (0xFFF0u)

/* order buffer empty state */
#define DFES_CLEAR_IDLE  0u
/* clear all visible */
#define DFES_CLEAR_ALL   0xFFFFu
/* clear by DFC list */
#define DFES_CLEAR_LIST  0xFFFEu
/* clear all and initialize error memory */
#define DFES_CLEAR_ALL_INIT 0xFFFDu
/* clear by DFC list and DTCGroup */
#define DFES_CLEAR_LIST_DTCGROUP  0xFFFCu

/**************************************************************************************************/
/**************** Bit mask to clear DFES_OutState         *****************************************/
/**************************************************************************************************/
/* To clear all visibility bits except Manufacturer Low */
#define DFES_OUT_TESTER_CLR_MSK  ~(  DFES_ST_DIA_OUT_MANUF_HIGH     \
                                   | DFES_ST_DIA_OUT_SERVICE_LOW    \
                                   | DFES_ST_DIA_OUT_SERVICE_HIGH   \
                                   | DFES_ST_DIA_OUT_RELEVANT       \
                                   | DFES_ST_DIA_OUT_OBDPENDING     \
                                   | DFES_ST_DIA_OUT_OBD_LOW        \
                                   | DFES_ST_DIA_OUT_OBD_HIGH )
/* To clear DFES_ST_DIA_OUT_OBD_HIGHPLUS */
#define DFES_OUT_TESTER2_CLR_MSK  ~(  (DFES_ST_DIA_OUT_OBD_HIGHPLUS)>>8 )

#define DFES_VIS_ST_TESTER_CLR_MSK  ~(  DFES_VIS_ST_SHADOW          \
                                      | DFES_VIS_ST_SERVICE_HISTORY \
                                      | DFES_VIS_ST_SERVICE03       \
                                      | DFES_VIS_ST_DEBOUNCE        \
                                      | DFES_VIS_ST_PENDING)


/* Filter for DFES_OutTester[] to hide OBD relevance for filtered entries             */
#define NON_OBDVISIBLE      (~(DFES_ST_DIA_OUT_OBDPENDING | \
                                DFES_ST_DIA_OUT_OBD_LOW | \
                                DFES_ST_DIA_OUT_OBD_HIGH))
/* mask for extended filtering - still visible via service (invisible for scan tool)  */
#define EXTD_FLTR_SRVC      (DFES_TCSORT_MSK)

/**************************************************************************************************/
/**************** priority and visibility calibration Bits*****************************************/
/**************************************************************************************************/
/* Bits located within DFES_GetPrio */

#define DFES_CAL_PRIO_HI_LO            0x08
#define DFES_CAL_PRIO_MANUF            0x10
#define DFES_CAL_PRIO_SERVICE          0x20
#define DFES_CAL_PRIO_OBD              0x40

#define DFES_CAL_PRIO_HI_LO_POS        3
#define DFES_CAL_PRIO_RELEVANT_LEN     4


/**************************************************************************************************/
/**************** DFES status control settings ****************************************************/
/**************************************************************************************************/
/* Layout of control settings DFES_stCtlSetting:

7 6 5 4 3 2 1 0
| | | | | | |  \_ error memory locked due to diagnostic service $85 ControlDTCSetting
| | | | | |  \___ locked during NVRAM storage in postdrive
| | | | |  \_____
| | | |  \_______
| | |  \_________
| |  \___________
|  \_____________
 \_______________
*/

/* Layout of control settings DFES_stBlkOnlyDFES:

7 6 5 4 3 2 1 0
| | | | | | |  \_ request by tester to block DFES entries but update DFC_st and inhibit state
| | | | | |  \___
| | | | |  \_____
| | | |  \_______
| | |  \_________
| |  \___________
|  \_____________
 \_______________
*/


/* variable DFES_stCtlSetting */
#define DFES_CTLSET_TESTER_POS      0u
#define DFES_CTLSET_NVRAM_POS       1u

/* variable DFES_stBlkOnlyDFES */
#define DFES_BLKONLYDFES_TESTER_POS 0u

/* variable DFES_stDTCRecUpdt */
#define DFES_DTC_REC_UPDT_POS 0u

/**************************************************************************************************/
/**************** DFES aging counter  *************************************************************/
/**************************************************************************************************/
/* counter increment types */
#define DFES_AGING_COUNTER_TDCWOE  1u   /* tested driving cycles without error */
#define DFES_AGING_COUNTER_DELTRG  2u   /* delete counter increment            */

/**************************************************************************************************/
/**************** DFES Failure Record counter  ****************************************************/
/**************************************************************************************************/
/* Maximum counter value */
#define DFES_FAIL_REC_CNTR_MAX  0xFFu


/**************************************************************************************************/
/************ similar conditions support  ********************************************************/
/**************************************************************************************************/
/* signal and byte positions of similar conditions within freeze frame
-> DFES_xAsgnFrzFrSig_CA and DFES_FrzFrVal */
/* for runtime optimised access it is necessary to fix the position of the PIDs 04h,05h and 0Ch in
   the freeze frame */
#define DFES_POS_FF_PID04   0u   /* PID 04 calculated load value      (1 byte) */
#define DFES_POS_FF_PID05   1u   /* PID 05 engine coolant temperature (1 byte) */
#define DFES_POS_FF_PID0C   2u   /* PID 0C engine speed               (2 byte) */


/**************************************************************************************************/
/************ internal monitoring support  ********************************************************/
/**************************************************************************************************/

/*
 all event id are declared here
 Since bit wise filtering is possible the encoding is essential
 the naming convention:
    DFES_<event_name>_<object_name>_<parameter_encoding>

 any change must leads to changes in verbal conversion formula -> pavast
 dfes_pavast includes the matching verbal conversion
*/

#define DFES_EMPTY_EVENT              0x0000u

#define DFES_ENTRYREJECT_DFC_PRIO     0x1001u /* new entry rejected due to low prio */
#define DFES_ENTRYPREMPTIED_DFC_PRIO  0x1002u /* new entry replaces existing one */

#define DFES_CLRMISMATCH_DFC_LINE     0x1003u /* clear request with mismatching DFC/IDX parameter */


/* events concerning DFES entry consistency */
#define DFES_DBLENTRY_DFC_LINE        0x2004u /* another entry with same DFC number is present */
#define DFES_NOHASH_DFC_LINE          0x2005u /* not used so far */
#define DFES_INVHASH_DFC_LINE         0x2105u /* wrong entry found in hash */
#define DFES_MISHASH_DFC_LINE         0x2205u /* entry not found in hash */
#define DFES_OKMISUTESTED_DFC_LINE    0x2006u /* not used so far */
#define DFES_DEFMISUTESTED_DFC_LINE   0x2106u /* not used so far */
#define DFES_OKMISTESTED_DFC_LINE     0x2007u /* mismatch check- with DFC state, entry removed */
#define DFES_DEFMISTESTED_DFC_LINE    0x2008u /* mismatch check- with DFC state, entry removed */
#define DFES_MXLMPCNT_DFC_LINE        0x2009u /* hlc or flx exceeds calibration, entry removed */
#define DFES_MXDELCNTS_DFC_LINE       0x2109u /* service dlc exceeds calibration, entry removed */
#define DFES_MXDELCNTP_DFC_LINE       0x2209u /* pending dlc exceeds calibration, entry removed */
#define DFES_MXDELCNTO_DFC_LINE       0x2309u /* debounced dlc exceeds calibration, entry removed */
#define DFES_MISMEM_DFC_LINE          0x200Au /* missing mem flag in DFC state */
#define DFES_HASH2EMPT_DFC_LINE       0x200Bu /* link status used in hash for empty entry */

#define DFES_MEMNOHASH_DFC_LINE       0x210Au /* memflag set although no hash entry exists */
#define DFES_DEBOKMISS_DFC_STATE      0x220Au /* LDF set although FL<8 and DL==0 */
#define DFES_DEBDEFMISS_DFC_STATE     0x230Au /* LDF not set although FL>=8 and DL==15 */
#define DFES_ORDERBLOCKED_DFC_LINE    0x240Au /* order blocked in in cooperative task */
#define DFES_RETRYENTRY_DFC_STATE     0x200Cu /* entry missing although DFC is defect */

#define DFES_MXHASH_LINE_LINE         0x200Du /* hash entry exceeds number of lines */
#define DFES_MINHASH_LINE_LINE        0x210Du /* hash includes reference to deleted entry */
#define DFES_MISHASHMOD_DFC_LINE      0x220Du /* mismatch hash DFC number remove hash entry */
#define DFES_INSHASH_DFC_LINE         0x230Du /* mismatch hash DFC number add correct hash entry */


#define DFES_PDTC_CNT                 0x2506u /* wrong number of permanent DTCs corrected  */



/* temp. debug */
#define DFES_SUS_FFRZ_DFC_LINE        0x400Fu /* irrelevant use bit 15 in collected status */
#define DFES_SUS_USED_DFC_LINE        0x410Fu /* irrelevant use bit 15 in collected status */


/* configuration problems detection */
#define DSM_MISSING_FID_DIUMPR        0x800Eu /* FID number not IUMPR relevant */
#define DSM_MISSING_DFC_OF_DFP        0x800Fu /* not used so far */

/* DTR */
#define DTR_INVALID_LIMIT             0x8001u /* only one limit provided, which is physical
                                                 senseless so maybe service $05 values      */

												 
 /* events concerning EEP interfaces state */
#define DFES_EEPBUF_OVF               0x0801u /* EEP write request was rejected due to request queue overflow */
/*
 MISRA problem! - force using function to do the type conversion?
 */

#define DFES_MON(A,B,C)       DFES_MonitoringEntry((uint16) (A), (uint16) (B), (uint16) (C)  )

/*
 ***************************************************************************************************
 * Bit Masks for DTC information
 ***************************************************************************************************
 */

/* test failed */
#define DSM_ST_TF_MSK \
        (1u << (DSM_ST_CHECKMEM_TF_POS))

/* test failed this monitoring cycle */
#define DSM_ST_TFTMC_MSK \
        (1u << (DSM_ST_CHECKMEM_TFTMC_POS))

/* pending DTC */
#define DSM_ST_PDTC_MSK \
        (1u << (DSM_ST_CHECKMEM_PDTC_POS))

/* confirmed DTC */
#define DSM_ST_CDTC_MSK \
        (1u << (DSM_ST_CHECKMEM_CDTC_POS))

/* test not completed since last clear  */
#define DSM_ST_TNCSLC_MSK \
        (1u << (DSM_ST_CHECKMEM_TNCSLC_POS))

/* test failed since last clear */
#define DSM_ST_TFSLC_MSK \
        (1u << (DSM_ST_CHECKMEM_TFSLC_POS))

/* test not completed this monitoring cycle */
#define DSM_ST_TNCTMC_MSK \
        (1u << (DSM_ST_CHECKMEM_TNCTMC_POS))

/* warningIndicatorRequested */
#define DSM_ST_WIR_MSK \
        (1u << (DSM_ST_CHECKMEM_WIR_POS))

/* test Not Passed Since Current PowerUp */
#define DSM_ST_TNPSCPU_MSK \
        (1u << (DSM_ST_CHECKMEM_TNPSCPU_POS))

/* test Not Passed Since DTC Cleared */
#define DSM_ST_TNPSDTCC_MSK \
        (1u << (DSM_ST_CHECKMEM_TNPSDTCC_POS))

/* long term error with highest priority */
#define DSM_ST_LTPROT_MSK \
        (1u << (DSM_ST_CHECKMEM_LTPROT_POS))

/* Repaired information of long term error  */
#define DSM_ST_LTREPARED_MSK \
        (1u << (DSM_ST_CHECKMEM_LTREPARED_POS))

/* Pseudo-erased information of a long term error */
/* This indicates if the entry would have been erased if it were a normal error and not LT error */
#define DSM_ST_LTPSEUDO_ERASED_MSK \
        (1u << DSM_ST_CHECKMEM_LTPSEUDO_ERASED_POS)


/*
 ***************************************************************************************************
 * pseudo state for priority entry of non-existing entries (value in DFES_xStPrio exists!)
 ***************************************************************************************************
 */

/* pseudo state for priority entry of non-existing entries! */
#define DFES_ST_ENTRY_NON_EXISTING    15u
/* pseudo state for priority entry of non-existing entries with long time error attribute  */
/* EOBD heavy duty requirement */
#define DFES_ST_ENTRY_NON_EXISTING_LT 16u


/*
 ***************************************************************************************************
 * Masks to extract information from the PDTC block
 *
 * The EEPROM PDTC block layout is as follows
 *
 * 15 14 13 12  11..0
 * |  |  |  |   |   \____
 * |  |  |  |    \_______  PDTC DFC index (Bit0 to Bit 11 i.e. 12 bits)
 * |  |  |   \___________  indicator for most recent driving cycle without a fault
 * |  |   \______________  indicator for minimum ratio drving cycle reached
 * |   \_________________  Indicator that this entry is stored in EEPROM
 *  \____________________  Unused
 *
 *
 ***************************************************************************************************
 */
#define DFES_PDTC_DFC_INDEX_MSK          0x0FFFu
#define DFES_PDTC_MOST_RECENT_OK_DC_MSK  0x1000u
#define DFES_PDTC_MINIMUM_RATIO_DC_MSK   0x2000u
#define DFES_PDTC_STORED_EEPROM_MSK      0x4000u


/**************************************************************************************************/
/************ Access macros for variables  ********************************************************/
/**************************************************************************************************/

/**
 Access macro for fault check number
 */
#define numChk(idx)      (DFES_numDFC[idx])

/**
 Access macro for check state
 */
#define stChk(idx)      (DFES_stChk[idx])

/**
 Access macro for entry state
 */
#define stEntry(idx)      (DFES_stEntry[idx])




/* Handling of Hash table **************************************************/
/**
 Access macro for getting start index from check number (hash table access)
 */
#define numChk2Idx(numChk)      (DFES_idxHash[((numChk) % DSM_FACT_FCM_PRIME)])

/**
 Access macro for general access to hash table
 */
#define idxHash(numChk)      (DFES_idxHash[(numChk)])

/**
 Access macro for general access to link list
 */
#define idxLink(idx)      (DFES_idxLink[(idx)])


/************ Access macros ********************************
 encapsulate the access to status informations
 */
#define DFES_GetDefectDebTrigEnable(numC) 1u /* at the moment return fixed value */
#define DFES_GetHealDebTrigEnable(numC)   1u /* at the moment return fixed value */
#define DFES_GetDeleteDebTrigEnable(numC)   1u /* at the moment return fixed value */

/************ Selector for Init ******************************** */
#define DFES_INIT           0u   /* DFES Init without arming the DFES counters */
#define DFES_INITDC         1u   /* DFES Init after complete DC with arming the DFES counters */
/************ Selector for Reinit ******************************** */
#define DFES_REINIT         0u   /* DFES Reinit without arming the DFES counters */
#define DFES_REINITDC       1u   /* DFES Reinit after complete DC with arming the DFES counters */


/* Type definition for the DTC type */
typedef const uint16 * DTC_Type;

__PRAGMA_USE__dsm__1_5ms__constant__x16__START
extern const uint16 DFES_numSizeEnvBlks;
extern const uint16 DFES_numSumTotFrzFrRAM;
__PRAGMA_USE__dsm__1_5ms__constant__x16__END


/*
 ***************************************************************************************************
 * configuration constant Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__dsm__1_5ms__constant__x8__START
extern const uint8 DFES_numEntries;
extern const uint8 DFES_numSizeFrzFr;
extern const uint8 DFES_numSizeExtdFrzFr;
extern const uint8 DFES_numSizeEnv;
extern const uint8 DFES_numEnvBlk;
extern const uint8 DFES_numSizeEnvRAM;
extern const uint8 DFES_numSizeFrzFrRAM;
extern const uint8 DFES_numSizeExtdFrzFrRAM;
__PRAGMA_USE__dsm__1_5ms__constant__x8__END

__PRAGMA_USE__dsm__1_5ms__constant__arr8__START
extern const uint8 DFES_xStPrio[];
__PRAGMA_USE__dsm__1_5ms__constant__arr8__END


/*
 ***************************************************************************************************
 * Variable Prototypes
 ***************************************************************************************************
 */
MEMLAY_USE_ENVRAM(extern uint8,  DFES_stChk[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_stChkFault[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_stCounters[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctDef[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctOk[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_tiOk[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctManuDef[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctManuOk[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctDel[]);

MEMLAY_USE_ENVRAM(extern uint16,  DFES_tiDel[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctFrq[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_FrzFrVal[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_EnvBlock[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctFail[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctPass[]);

MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctNoTst[]);

__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16 DFES_Order[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8  DFES_OutLamps[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8  DFES_OutTester2[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8  DFES_OutTester[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16  DFES_StateVisibility[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8  DFES_idxLink[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8  DFES_idxPrioQueue[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8  DFES_idxHash[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

__PRAGMA_USE__dsm__50ms_1s__RAM__x8__START
extern uint8 DFES_ctPDTC;
extern uint8 DFES_bestPDTCSeq;
extern uint8 DFES_bestPDTCLine;
extern uint8 DFES_xAsgnEnvAllDataSize;
__PRAGMA_USE__dsm__50ms_1s__RAM__x8__END

__PRAGMA_USE__dsm__50ms_1s__RAM__x16__START
extern uint16 DFES_bestDFCNum;
extern uint16 DFES_ctCalls100ms;
__PRAGMA_USE__dsm__50ms_1s__RAM__x16__END


MEMLAY_USE_ENVRAM (extern uint8,  DFES_idxSequence[]);

MEMLAY_USE_ENVRAM (extern uint8,  DFES_faultSeq[]);

__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8  DFES_ctFaultSeq;
extern uint8  DFES_ctSequence;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END


__PRAGMA_USE__dsm__1_5ms__RAM__x16__START
extern uint16 DFES_stClearOrder;
extern uint16 DFES_mskClrClsVis;
extern uint16 DFES_mskClrStVis;
__PRAGMA_USE__dsm__1_5ms__RAM__x16__END

__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8  DFES_xFrzFrBuf[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8  DFES_stFrzFrBuf;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__START
extern uint16 DFES_ClrDFCList[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr16__END
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8  DFES_ClrListCnt;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END


MEMLAY_USE_ENVRAM(extern uint8,  DFES_ctAging[]);
MEMLAY_USE_ENVRAM(extern uint16, DFES_tiLTDLC[]);


__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8 DFES_stCtlSetting;
extern uint8 DFES_stDTCRecUpdt;
extern uint8 DFES_stDTCStorage;
extern uint8 DFES_stBlkOnlyDFES;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END


MEMLAY_USE_ENVRAM(extern uint8 , DFES_MonPtr);
MEMLAY_USE_ENVRAM(extern uint16, DFES_MonClct);
MEMLAY_USE_ENVRAM(extern uint16, DFES_MonEvnt[]);
MEMLAY_USE_ENVRAM(extern uint16, DFES_MonObjt[]);
MEMLAY_USE_ENVRAM(extern uint16, DFES_MonParm[]);

/* DAMOS bit / bitbase handling is not used because some bits are written from multiple rasters
 * during 10ms ReInit, by calls of SYC etc */
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern bool  DFES_maxLTReached;
extern bool  DFES_fcmTimeTrg;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END

__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern bool DFES_PDTCStore; /* PDTC storage indication bit from the Postdrive handling   */
extern bool DFES_stPrgEvt;  /* indication bit for programming event */
extern bool DFES_stECUExch;    /* indication bit for ECU exchange */
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END



/*
 ***************************************************************************************************
 * Function Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_Proc_Ini( void );
void DFES_Init(uint stInit);
void DFES_ReInit(uint stReInit);
void DFES_CV_ResetCounters(void);

void DFES_UpdtMode7VisDFC(uint16 idxCheck);


void DFES_Report(DSM_DFCType       numCheck
                    , uint           stResult
                    , uint           stTst
                    , uint           stDeb
                    , uint           stAttrib
                    , uint           stMem );


uint DFES_CreateNewEntry(uint  numCheck, uint entryTyp  );


void DFES_HistoryClrEntry(   uint  numCheck
                           , uint  idxFES  );

void DFES_UpdtSequence(uint8 idxSeqEntry, uint8 *idxSequencePtr, uint8 *ctSequence);

uint DFES_EntryUpdtPrioQueue(void);

void DFES_ScanOrders( void );

uint DFES_CheckOrderQueue(void);

uint DFES_QualifyTriggers(   uint stTriggers
                           , uint numClass);


uint DFES_HandleCheckState(   uint stInTrg
                            , uint numClass
                            , uint idxFES
                            , uint stTriggers);

void DFES_InitCheckStateDC( uint idxFES);
void DFES_InitCheckState( uint idxFES);


void DFES_InitCounters(uint idxFES
                      ,uint numClass);

uint DFES_AfterRunCheckState( uint idxFES);

uint DFES_StaticCheckTriggers(  uint idxFES
                              , uint numClass);


uint DFES_ValidateTrg(   uint numClass
                       , uint numCheck
                       , uint stTriggers
                       , uint idxFES);



uint DFES_HandleEntryState(   uint numClass
                            , uint numCheck
                            , uint stTriggers
                            , uint idxFES);


void DFES_HandleDeleteCntEvent(   uint numClass
                                , uint idxFES
                                , uint numCheck);

uint DFES_EntryAvailable(uint idxFES);

uint DFES_GetInvDelCnt(uint idxFES);


uint DFES_DoCntState(uint8 * stCountAll
                   , const   uint8 * ctHLC
                   , uint8 * ctFLC
                   , uint    numStPos
                   , uint    numStLen
                   , uint    stInTrg);

uint DFES_HandleCounters(uint numClass
                            , uint stTriggers
                            , uint idxFES);


uint DFES_TimeCounters(uint numClass
                         , uint idxFES);

uint DFES_ConvChkNum2Idx( uint numCheck );

uint DFES_InsertIdx2Hash( uint numCheck
                           ,uint idxFES );

uint DFES_DeleteChkFromHash( uint numCheck );

uint8 * DFES_HashFindLink2Idx(  uint idxFES
                              , uint numCheck);

void DFES_CopyIntEntryToStEntryType( uint      idxDFES
                                     , DFES_stEntryType * stEntry);
void DFES_CopyIntEntryToStEntryType2( uint      idxDFES
                                     , DFES_stEntryType2 * stEntry);

void DFES_PDTCWrite(void);
void DFES_PDTCRead(void);

__PRAGMA_USE__CODE__dsm__NormalSpeed__END
__PRAGMA_USE__CODE__dsm__HighSpeed__START
void DFES_SwitchOrderBuffers( void );
__PRAGMA_USE__CODE__dsm__HighSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFES_ScanOutState( void );
void DFES_HandleOutState(uint idxFES);
uint DFES_GetOutState (uint idxFES);
uint DFES_GetStateVisibility (uint idxFES);
uint Get_TesterOutState(uint numClass, uint stEntry);
uint Get_TesterOutBase(uint idxEntry);
void DFES_IniOutState(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
uint DFES_PostdriveBgnTrg( void );
uint DFES_PostdriveEndTrg( void );
uint DFES_PostdriveAux( void );


void DFES_ScanTriggers( void );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFES_100ms( void );
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFES_CV_1000ms_Proc( void );
bool DFES_GetStLTErr(uint numCheck, uint numClass);
__PRAGMA_USE__CODE__dsm__LowSpeed__END


__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_Clear(void);

uint DFES_GetEnv(      uint8  * adBuffer
                ,const uint16 * adSigNumbers
                ,      uint     valSizeSig
                ,      uint     valSizeRAM);

uint DFES_GetEnvDid(   uint8  * adBuffer
                ,const uint16 * adDidNumbers
                ,      uint     valSizeDid
                ,      uint     valSizeRAM);

__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFES_AuxBackgroundProc(void);
void DFES_MonitorDFES( void );
void DFES_MonitorDFC( void );
void DFES_MonitorHash( void );
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_SimCond( void );

uint DFES_SimCond_CmpCond(uint idxEntry,
                          sint tActVal,
                          sint nActLimMax,
                          sint nActLimMin,
                          sint rActLimMax,
                          sint rActLimMin);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFES_ActvClrTsk(void);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_UpdtMode7Vis(void);

uint DFES_GetPrioLine(  uint idxFES);
uint DFES_GetPrioDFC(  uint numCheck, uint entryTyp);
uint DFES_GetPrioDFC_base(  uint numCheck);

void DFES_DeleteFrzOnly( uint idxDFES);
uint DFES_LineSusFreezeFrame( uint NumPath);
void DFES_CreateFrzOnly(uint NumPath );
__PRAGMA_USE__CODE__dsm__NormalSpeed__END
__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFES_ClearFFREntries(void);
bool DFES_DFCClrListEntry(uint numDFC);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_MonitoringEntry (uint16 EventId, uint16 ObjId, uint16 Param);

void DFES_ChkLstDltDem(void);
void DFES_ChkPrgEvt(void);
void DFES_DltDemMnmt(void);
void DFES_StrDltCnt(void);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__CODE__dsm__LowSpeed__START
void DFES_ClrAgingCtr(uint idxFES);
void DFES_IncAgingCtr(uint idxFES);
uint8 DFES_GetAgingCtr(uint idxFES);
void DFES_ExchngAgingCtr(uint idxFES1, uint idxFES2);
__PRAGMA_USE__CODE__dsm__LowSpeed__END

__PRAGMA_USE__CODE__dsm__NormalSpeed__START
void DFES_ChkClr_Proc_Ini(void);

void DFES_ExtdFlt_Proc(void);

void DFES_ExtdFlt_Clear(void);

DTC_Type DFES_GetDTC(uint table);

uint DFES_GetSvcEnvDatLen( uint16 const  SigIdAr[]
                           , uint        idxLookUp
                           , uint        length);

uint DFES_GetSvcEnvDatLenDid(uint16 const   DidAr[],
                             uint           idxLookUp,
                             uint           length);
__PRAGMA_USE__CODE__dsm__NormalSpeed__END

__PRAGMA_USE__dsm__1_5ms__constant__arr8__START
extern const uint8 DSM_CheckFSM[ ];
extern const uint8 DFES_CheckFSMTrgRel[ ];
__PRAGMA_USE__dsm__1_5ms__constant__arr8__END

__PRAGMA_USE__dsm__1_5ms__constant__arr16__START
extern const uint16 DFES_xCountConf[];
__PRAGMA_USE__dsm__1_5ms__constant__arr16__END

__PRAGMA_USE__dsm__50ms_1s__constant__arr16__START
extern const uint16 DSM_StateToDiaOut[] ;
__PRAGMA_USE__dsm__50ms_1s__constant__arr16__END

__PRAGMA_USE__dsm__1_5ms__constant__arr8__START
extern const uint8 DSM_idxEntryFSM[ ];
__PRAGMA_USE__dsm__1_5ms__constant__arr8__END
__PRAGMA_USE__dsm__1_5ms__constant__s32__START
extern const DFES_EntryFSMType DSM_EntryFSM[ ];
__PRAGMA_USE__dsm__1_5ms__constant__s32__END
__PRAGMA_USE__dsm__1_5ms__constant__arr8__START
extern const uint8 DFES_State2DelTrig[];
__PRAGMA_USE__dsm__1_5ms__constant__arr8__END


__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8                    DFES_idxPrioRingBuf;
extern uint8                    DFES_idxPrioTst;

extern uint8                    DFES_stAfterrun;
extern uint8                    Simulate_stEng;

extern uint8 DFES_stPostDrive ;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END

/* Support of suspected freeze frame entries by global variables  (semaphore) */
__PRAGMA_USE__dsm__1_5ms__RAM__x32__START
extern uint DFES_FFR_Idx;
extern uint DFES_FFR_DFCnum;
__PRAGMA_USE__dsm__1_5ms__RAM__x32__END

/* Support of delete demand via diagnostic interface */
MEMLAY_USE_ENVRAM(extern uint8, DFES_ENVRAMDltCnt);

/* Support for extended filtering  */
__PRAGMA_USE__dsm__1_5ms__RAM__x8__START
extern uint8 DFES_stExtdFltr;
__PRAGMA_USE__dsm__1_5ms__RAM__x8__END
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__START
extern uint8 DFES_stFltr[];
__PRAGMA_USE__dsm__1_5ms__RAM__arr8__END

#endif
