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
 * $Filename__:execon_template_conf.ht$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:NESTORADMINSDOM$ 
 * $Date______:31.07.2008$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:execon_template_conf$ 
 * $Variant___:1.7.0$ 
 * $Revision__:0$ 
 * $Type______:HT$ 
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
 * 1.7.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: execon_template_conf.ht
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EXECON_AUTO_CONF_H
#define _EXECON_AUTO_CONF_H
#ifndef _LIBRARYABILITY_H

/**
 ***************************************************************************************************
 * \moduledescription
 *               execon_conf.h  - automatically generated configuration headerfile of ExeCon module.
 *
 * \scope          CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */
/* main state table is configured -> activate ExeCon_StateMachine()-functionality */
#define EXECON_MAINSTATETABLE
/**
 Maximum number of substate levels
*/
#define EXECON_MAX_SUBSTATE_LEVEL   2
/**
 End pattern for state tables
*/
#define EXECON_END_OF_TABLE_E    0xFF



/* enums */
typedef enum
{
    SYC_BOOT,
    SYC_PROC_INIT,
    SYC_PROC_EXEC,
    SYC_SHUTDOWN 
}ExeCon_StatesLevel01_t;

typedef enum
{
    SYC_INI,
    SYC_INISYN,
    SYC_INIEND,
    SYC_PREDRIVE,
    SYC_DRIVE,
    SYC_POSTDRIVE,
    SYC_POST_OS_EXIT 
}ExeCon_StatesLevel02_t;

typedef enum
{
    EXECON_DUMMY_STATE03_E
}ExeCon_StatesLevel03_t;




/* typedef for global ExeCon-states */
typedef struct
{
    ExeCon_StatesLevel01_t stLevel01_s;
    ExeCon_StatesLevel02_t stLevel02_s;
    ExeCon_StatesLevel03_t stLevel03_s;
}ExeCon_States_t;

/* typedef for structure of time in states */
typedef struct
{
    uint32 tiLevel01_u32;
    uint32 tiLevel02_u32;
}ExeCon_TimeInStates_t;

/* typedef for a pointer to a state table */
typedef struct ExeCon_StateTable *ExeCon_StateTablePtr_t;

/* typedef for statetable entries */
typedef struct
{
    uint8 stActState_u8;
    uint8 stNewState_u8;
    const ExeCon_StateTablePtr_t dSubStateTable_pcs;
    bool (*CheckChangeCondition)(void);
}ExeCon_StateTableEntries_t;

/* typedef for a state table */
typedef struct ExeCon_StateTable
{
    uint8 dStartValue_u8;
    uint8 dEndValue_u8;
    ExeCon_StateTableEntries_t dTableEntries_s[255];
}ExeCon_StateTable_t;

/* global structure or system state informations */
typedef struct
{
    uint8 dTableIndex_u8[EXECON_MAX_SUBSTATE_LEVEL];    /* table index of level */
    uint64 tiActivateState_u64[EXECON_MAX_SUBSTATE_LEVEL];   /* time for activation of level */
} ExeCon_StateDescriptor_t;


/* structs for state tables */
struct ExeCon_dMainStates_cs_s
{
    uint8 dStartValue_u8;
    uint8 dEndValue_u8;
    ExeCon_StateTableEntries_t dTableEntries_s[5];
};
struct SyC_InitStates_cs_s
{
    uint8 dStartValue_u8;
    uint8 dEndValue_u8;
    ExeCon_StateTableEntries_t dTableEntries_s[4];
};
struct SyC_ExecStates_cs_s
{
    uint8 dStartValue_u8;
    uint8 dEndValue_u8;
    ExeCon_StateTableEntries_t dTableEntries_s[6];
};
struct SyC_ShutdownStates_cs_s
{
    uint8 dStartValue_u8;
    uint8 dEndValue_u8;
    ExeCon_StateTableEntries_t dTableEntries_s[2];
};

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
__PRAGMA_USE__srv__1_5ms__constant__s32__START
extern const struct ExeCon_dMainStates_cs_s ExeCon_dMainStates_cs;
extern const struct SyC_InitStates_cs_s SyC_InitStates_cs;
extern const struct SyC_ExecStates_cs_s SyC_ExecStates_cs;
extern const struct SyC_ShutdownStates_cs_s SyC_ShutdownStates_cs; 
__PRAGMA_USE__srv__1_5ms__constant__s32__END

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__srv__NormalSpeed__START
extern bool SyC_ChngTrue(void);
extern bool SyC_ChngInit2Exec(void);
extern bool SyC_ChngExec2Shutdown(void);
extern bool SyC_ChngFalse(void);
extern bool SyC_ChngPreDrv2Drv(void);
extern bool SyC_ChngDrv2PostDrv(void);
extern bool SyC_ChngPostDrv2Drv(void);
extern bool SyC_ChngPostDrv2PreDrv(void);

__PRAGMA_USE__CODE__srv__NormalSpeed__END

/* _LIBRARYABILITY_H                                                                              */
#endif

#endif
