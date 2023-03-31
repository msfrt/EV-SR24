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
 * $Filename__:diagcomappl_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:JAG2ABT$
 * $Date______:11.04.2011$
 * $Class_____:SWHDR$
 * $Name______:diagcomappl_pub$
 * $Variant___:44.0.0$
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
 * 44.0.0; 0     11.04.2011 JAG2ABT
 *   Platform Ferrari_Maserati
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diagcomappl_pub.h
 *      Version: \main\basis\b_CORE\19
 * 
 * 1.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: diagcomappl_pub.h
 *      Version: \main\basis\b_CORE\19
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/



#ifndef _DIAGCOMAPPL_PUB_H
#define _DIAGCOMAPPL_PUB_H

/**
 ***************************************************************************************************
 * \moduldescription
 *          Header for KWP2000 session layer and service distributor
 *
 * \scope   CONF
 ***************************************************************************************************
 */

/*
 **************************************************************************************************
 *    Defines
 **************************************************************************************************
 */



/*
 **************************************************************************************************
 *    Type definitions
 **************************************************************************************************
 */

/**************************************************************************************************/
/*                                                                                                */
/* DEFINITION OF OPERATION MODES:                                                                 */
/* ==============================                                                                 */
/*                                                                                                */
/* The operation mode informs the communication software about the current status of the system.  */
/*                                                                                                */
/* Instructions:                                                                                  */
/*                                                                                                */
/*   #define OPMM_OPMODES          \                                                             */
/*   OPM(name_of_operation_mode_1) \                                                             */
/*   OPM(name_of_operation_mode_2) \                                                             */
/*   ...                           \                                                             */
/*   OPM(name_of_operation_mode_n)                                                               */
/*                                                                                                */
/* name_of_operation_mode_x: use capital letters (max. 19 characters)                             */
/* maximum 16 operation modes + address modes (--> uk2lnk) + statuses (--> uk2s)                  */
/*                                                                                                */
/*                                                                                                */
/* Use macro OPM(name_of_operation_mode_x) or                                                     */
/*           OPMM_BP_name_of_operation_mode_x_E to get bitposition of operation mode.             */
/* Use macro OPM_BM(name_of_operation_mode_x) or                                                  */
/*           OPMM_D_name_of_operation_mode_x_DB16 to get bitmask of operation mode.               */
/*                                                                                                */
/**************************************************************************************************/

#define OPMM_OPMODES                                                                               \
OPM(NORMAL)                                 /* Normal mode                                    */   \
OPM(PROG)                              /* Data set programming                           */


/**************************************************************************************************/
/*                                                                                                */
/* DEFINITION OF DIAGNOSTIC MODES:                                                                */
/* ===============================                                                                */
/*                                                                                                */
/* Instructions:                                                                                  */
/*                                                                                                */
/*   #define DIAGCOM_DIAMODES          \                                                            */
/*   DGM(name_of_diagnostic_mode_1) \                                                            */
/*   DGM(name_of_diagnostic_mode_2) \                                                            */
/*   ...                            \                                                            */
/*   DGM(name_of_diagnostic_mode_n)                                                              */
/*                                                                                                */
/* name_of_diagnostic_mode_x: use capital letters (max. 19 characters)                            */
/* maximum 32 diagnostic modes                                                                    */
/* Don't use a name which is already used for status information (STAT()).                        */
/*                                                                                                */
/*                                                                                                */
/* Use macro DGM(name_of_diagnostic_mode_x) or                                                    */
/*           DIAGCOM_BP_name_of_diagnostic_mode_x_E to get bitposition of diagnostic mode.           */
/* Use macro DGM_BM(name_of_diagnostic_mode_x) or                                                 */
/*           DIAGCOM_name_of_diagnostic_mode_x_DB32 to get bitmask of diagnostic mode.             */
/*                                                                                                */
/**************************************************************************************************/

/* Position of bit must correspond to position of diagnostic mode in table of diamodes */
/* --> configuration file for stds                                                   */

#if (SY_CANVAR == 4)	/* Ferrari specific variant */
#define DIAGCOM_DIAMODES                                                                           \
DGM(DEFAULT)                                     /* Default mode (active after start of com.)  */  \
DGM(PROGRAMMING)                                 /* ECU programming mode (customer programming)*/  \
DGM(DEVELOPMENT)                                 /* ECU development mode                       */  \
DGM(DIAP)                                        /* Diagnsotic mode for DIAP.                  */  \
DGM(INI)                                         /* Initial mode (no session) for KWP2000      */
#else
#define DIAGCOM_DIAMODES                                                                           \
DGM(DEFAULT)                                     /* Default mode (active after start of com.)  */  \
DGM(DEVELOPMENT)                                 /* ECU development mode                       */  \
DGM(PROGRAMMING)                                 /* ECU programming mode (customer programming)*/  \
DGM(DIAP)                                        /* Diagnsotic mode for DIAP.                  */
#endif

#define DIAGCOM_ST_ADDRMODE_PHYS_DU8        0

/**************************************************************************************************/
/*                                                                                                */
/* STATUS INFORMATION FOR COMMUNICATION:                                                          */
/* =====================================                                                          */
/*                                                                                                */
/* Example: A routine can set a status to prevent execution of several services while the         */
/* routine is running.                                                                            */
/*                                                                                                */
/* Instructions:                                                                                  */
/*                                                                                                */
/*   #define DIAGCOM_STATUSES  \                                                                    */
/*   STAT(name_of_status_1) \                                                                    */
/*   STAT(name_of_status_2) \                                                                    */
/*   ...                    \                                                                    */
/*   STAT(name_of_status_n)                                                                      */
/*                                                                                                */
/* name_of_status_x: use capital letters (max. 19 characters)                                     */
/* maximum 16 statuses + address modes (--> uk2lnk) + operation modes (--> opmm)                  */
/* Don't use a name which is already used for diagnostic modes (DGM()).                           */
/*                                                                                                */
/*                                                                                                */
/* Use macro STAT(name_of_status_x) or                                                            */
/*           DIAGCOM_BP_name_of_status_x_E to get bitposition of status.                             */
/* Use macro STAT_BM(name_of_status_x) or                                                         */
/*           DIAGCOM_name_of_status_x_DB16 to get bitmask of status.                               */
/*                                                                                                */
/**************************************************************************************************/

#define DIAGCOM_STATUSES                                                                              \
STAT(DUMMYROUTINE)                          /* Dummy entry (example)                           */






/**************************************************************************************************/
/*!!!!!!!!!!!!!!!!! DO   N O T   E D I T   T H E   F O L L O W I N G   P A R T   !!!!!!!!!!!!!!!!!*/
/**************************************************************************************************/

/* Generate enumerator with bitpositions of operation modes: */
#undef  OPM
#define OPM(mode) OPMM_BP_##mode##_E,
enum{
OPMM_OPMODES
OPMM_NUM_OPMODES_E};

/* Generate enumerator with bitmasks of operation modes: */
#undef  OPM
#undef  OPMM_D_ALL_MODES_DB16

/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define OPM(mode) OPMM_D_##mode##_DB16 = (1<<OPMM_BP_##mode##_E),
enum{
OPMM_OPMODES
OPMM_D_ALL_MODES_DB16 = (1<<OPMM_NUM_OPMODES_E)-1};
#undef  OPM
#undef  OPMM_OPMODES

/* Macro for getting bitposition: */
#define OPM(mode)       OPMM_BP_##mode##_E

/* Macro for getting bitmask: */
#define OPM_BM(mode)    (bit16)OPMM_D_##mode##_DB16



/**************************************************************************************************/
/*!!!!!!!!!!!!!!!!! DO   N O T   E D I T   T H E   F O L L O W I N G   P A R T   !!!!!!!!!!!!!!!!!*/
/**************************************************************************************************/

/* Enumerators for diagnostic modes: */
/* ================================= */

/* Generate enumerator with bitpositions of diagnostic modes: */
#undef  DGM
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define DGM(mode) DIAGCOM_BP_##mode##_E,
enum{
_DIAGCOM_DUMMY_DGM_E = -1,
DIAGCOM_DIAMODES
DIAGCOM_NUM_DIAMODES_E};

/* Generate enumerator with bitmasks of diagnostic modes: */
#undef  DGM
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define DGM(mode) DIAGCOM_##mode##_DB32 = (1<<DIAGCOM_BP_##mode##_E),
enum{
DIAGCOM_DIAMODES
DIAGCOM_ALL_DEF_DIAMODES_DB32 = (1<<DIAGCOM_NUM_DIAMODES_E)-1};
#undef  DGM
#undef  DIAGCOM_DIAMODES

/* Macro for getting bitposition: */
#define DGM(mode)       DIAGCOM_BP_##mode##_E

/* Macro for getting bitmask: */
#define DGM_BM(mode)    (bit32)DIAGCOM_##mode##_DB32


/* Enumerators for statuses: */
/* ========================= */

/* Generate enumerator with bitpositions of statuses: */
#undef  STAT
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define STAT(mode) DIAGCOM_BP_##mode##_E,
enum{
DIAGCOM_STATUSES
DIAGCOM_NUM_STATUSES_E};

/* Generate enumerator with bitmasks of statuses: */
#undef  STAT
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define STAT(mode) DIAGCOM_##mode##_DB16 = (1<<DIAGCOM_BP_##mode##_E),
enum{
DIAGCOM_STATUSES
DIAGCOM_ALL_STATUSES_DB16 = (1<<DIAGCOM_NUM_STATUSES_E)-1};
#undef  STAT
#undef  DIAGCOM_STATUSES

/* Macro for getting bitposition: */
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define STAT(mode) DIAGCOM_BP_##mode##_E

/* Macro for getting bitmask: */
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define STAT_BM(mode) (bit16)DIAGCOM_##mode##_DB16


/*
 ***************************************************************************************************
 *    External Data
 ***************************************************************************************************
 */


/*
 **************************************************************************************************
 * Function prototypes
 **************************************************************************************************
 */

/*****  ************ ************** ***************/

#define DiagCom_StateDescriptor    ComStateDescriptor.DiagCom_StateDesc_s

#define DiagCom_StateDescriptor_setInitRequ()    (DiagCom_StateDescriptor.internInitRequ_u8 = 0x77)
#define DiagCom_StateDescriptor_ResetInitRequ()  (DiagCom_StateDescriptor.internInitRequ_u8 = 0x00)
#define DiagCom_StateDescriptor_setP2min(n)      (DiagCom_StateDescriptor.activeP2min_u32 = (n))
#define DiagCom_StateDescriptor_setP2max(n)      (DiagCom_StateDescriptor.activeP2max_u32 = (n))
#define DiagCom_StateDescriptor_setP3max(n)      (DiagCom_StateDescriptor.activeP3max_u32 = (n))
#define DiagCom_StateDescriptor_setP4min(n)      (DiagCom_StateDescriptor.activeP4min_u32 = (n))
#define DiagCom_StateDescriptor_setBdrate(n)     (DiagCom_StateDescriptor.activeBaudrate_u32 = (n))
#define DiagCom_StateDescriptor_setMedium(n)     (DiagCom_StateDescriptor.activeComMedium_u8 = (n))
#define DiagCom_StateDescriptor_setProtocol(n) \
                                            (DiagCom_StateDescriptor.activeComProtocol_u8 = (n))
#define DiagCom_StateDescriptor_setStimuAddr(n)  (DiagCom_StateDescriptor.actStimuAddr_u8 = (n))
#define DiagCom_StateDescriptor_setStimuAddrMode(n) \
                                              (DiagCom_StateDescriptor.actStimuAddrMode_u8 = (n))
#define DiagCom_StateDescriptor_setDiaMode(n)    (DiagCom_StateDescriptor.diagMode_u8 = (n))
#define DiagCom_StateDescriptor_setSecLevel(n)   (DiagCom_StateDescriptor.secLevel_u8 = (n))

#define DiagCom_StateDescriptor_setWarmResetTransmit(b) \
                                              (DiagCom_StateDescriptor.warmResetTransmit_b = (b))
#define DiagCom_StateDescriptor_setWarmRespLen(n) \
                                               (DiagCom_StateDescriptor.warmRespDatalength_u8=(n))
#define DiagCom_StateDescriptor_setAddrID(n)   (DiagCom_StateDescriptor.addrId_u8 = (n))
#define DiagCom_StateDescriptor_setServState(n)   \
                                              (DiagCom_StateDescriptor.freeForProjectUse0_u8 = (n))

#define DiagCom_StateDescriptor_IsActive() ((bool)(DiagCom_StateDescriptor.internInitRequ_u8==0x77))
#define DiagCom_StateDescriptor_getP2min()     ( DiagCom_StateDescriptor.activeP2min_u32 )
#define DiagCom_StateDescriptor_getP2max()     ( DiagCom_StateDescriptor.activeP2max_u32 )
#define DiagCom_StateDescriptor_getP3max()     ( DiagCom_StateDescriptor.activeP3max_u32 )
#define DiagCom_StateDescriptor_getP4min()     ( DiagCom_StateDescriptor.activeP4min_u32 )
#define DiagCom_StateDescriptor_getBdrate()    ( DiagCom_StateDescriptor.activeBaudrate_u32 )
#define DiagCom_StateDescriptor_getMedium()    ( DiagCom_StateDescriptor.activeComMedium_u8 )
#define DiagCom_StateDescriptor_getProtocol()  ( DiagCom_StateDescriptor.activeComProtocol_u8 )
#define DiagCom_StateDescriptor_getStimuAddr() ( DiagCom_StateDescriptor.actStimuAddr_u8 )
#define DiagCom_StateDescriptor_getStimuAddrMode() ( DiagCom_StateDescriptor.actStimuAddrMode_u8 )
#define DiagCom_StateDescriptor_getDiaMode()   ( DiagCom_StateDescriptor.diagMode_u8 )
#define DiagCom_StateDescriptor_getSecLevel()  ( DiagCom_StateDescriptor.secLevel_u8 )
#define DiagCom_StateDescriptor_getWarmResetTransmit() \
                                                   (DiagCom_StateDescriptor.warmResetTransmit_b)
#define DiagCom_StateDescriptor_getWarmRespLen()  ( DiagCom_StateDescriptor.warmRespDatalength_u8 )
#define DiagCom_StateDescriptor_getAddrID()       ( DiagCom_StateDescriptor.addrId_u8 )
#define DiagCom_StateDescriptor_getServState() ( DiagCom_StateDescriptor.freeForProjectUse0_u8)

#define DiagCom_StateDescriptor_getTesterAddr() ( DiagCom_StateDescriptor.testerAddr_u8)
#define DiagCom_StateDescriptor_setTesterAddr(n) ( DiagCom_StateDescriptor.testerAddr_u8=(n) )




/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern const DataLinkVirtualTable*  DiagCom_Medium_pcs;


/* MISRA RULE 104 VIOLATION:   Using non-const pointer to function  */
extern void         (*DiagCom_resetEventTable_pf)(void);



/*  Externs for Event Parameters */
extern  DiagCom_EventConf_t         *DiagCom_Eventconf_pcs;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END

__PRAGMA_USE__diagcom__10ms__RAM__x8__START
/* bit to indicate ROE is activated */
extern bool                         DiagCom_RoeActivated_b;
__PRAGMA_USE__diagcom__10ms__RAM__x8__END

__PRAGMA_USE__diagcom__10ms__RAM__x32__START
extern DiagCom_EventTypeFunction_t  *DiagCom_EventTypes_ps;

extern DiagCom_Event_t              *DiagCom_EventEntries_ps;
__PRAGMA_USE__diagcom__10ms__RAM__x32__END


__PRAGMA_USE__CODE__diagcom__NormalSpeed__START
extern uint8        DiagCom_GetMediumId(void);
extern uint8        DiagCom_GetProtId(void);
/* new interface of operation mode manager */
extern void         DiagCom_SetOpMode(uint8 stOpMode_u8);
extern uint8        DiagCom_GetOpMode(void);

/* Set/get diagnostic mode:             */
extern void         DiagCom_SetDiaMode(uint8 stNewMode_u8);
extern uint8        DiagCom_GetDiaMode(void);

/* Declare routine active/inactive      */
extern void         DiagCom_SetRoutine(bit32 dRoutId_b32, uint8 stMode_b8);

/* Get currently active routines        */
extern bit32        DiagCom_GetActRoutines(void);


/* set security level upon permission   */
extern void         DiagCom_SetSecLevel(uint8 dSecLevel_u8);
/* Get the security level               */
extern uint8        DiagCom_GetSecLevel(void);
/* Get the status of security level     */
extern bit32        DiagCom_GetStSecLevel(void);

/* Check permission in currently active diagnostic mode/session  */
extern bool         DiagCom_GetPerm(bit32 dProtection_b32);

/* Initalisation function to set the default diagnostic modes and the security permission   */
extern void         DiagCom_ModeIni(void);

extern void         DiagCom_ConfirmTx(void);

extern void         DiagCom_ServDistr_Ini( void );

extern uint8        DiagCom_GetEcuPhysAddr( void );

extern void         DiagCom_NegR(uint8 NegRespCode_u8, DiagCom_Msg_t *Msg_ps);

/* Set configuration for service distributor */
extern void         DiagCom_SetServDistrConfig(const DiagCom_ConfDistr_t *Config_pcs);
extern  sint32      DiagCom_GetEventTime( uint8 ewtime_u8 );
extern  void        DiagCom_SetEventConfig (DiagCom_EventConf_t *evconf_pcs);
extern  void        DiagCom_Dcan_SetEventConfig( void );

extern  void        DiagCom_ResetEvent( uint8 );

extern  void        DiagCom_SetPeriodicFnPtr(void  (*ServiceFn_pf)(DiagCom_Msg_t*) );

extern  uint8       Diagcom_GetWarmResetType(void);

extern  bool        Diagcom_SaveMessage(void);

extern  uint8       Diagcom_Status_getAddrMode(void);

extern  void        DiagCom_setSpP2max(uint32 TimingValue_u32);

extern  void        DiagCom_savecomstate(void);

extern  void        DiagCom_setRingBufMsgLength(uint16 Ringbufferlength_u16);

extern  uint32      Diagcom_GetRingbuffersize(void);
__PRAGMA_USE__CODE__diagcom__NormalSpeed__END
/**********        **************       ***************/




/* ************************************************************************** */
/* DiagCom_StateDescriptor                                                    */
/* Structure to store the values for initialization                           */
/*    e.g. after switch from one CustomerBlock to another                     */
/* ************************************************************************** */
__PRAGMA_USE__diagcom__10ms__RAM__s32__START
extern ComStateDescriptor_t    ComStateDescriptor;
__PRAGMA_USE__diagcom__10ms__RAM__s32__END

/**********        **************       ***************/

/***********************************************************************************************/
/*                                                                                             */
/* DEFINITION OF AVAILABLE ADDRESSING-MODES FOR THE PROTOCOL:                                  */
/* ==========================================================                                  */
/*                                                                                             */
/* (Address-modes are derived from the telegram address and can change with each new request)  */
/*                                                                                             */
/* Instructions:                                                                               */
/*                                                                                             */
/* >  #define DIAGCOM_ADDRMODES      \                                                            */
/* >  ADRM(name_of_address_mode_1)  \                                                          */
/* >  ADRM(name_of_address_mode_2)  \                                                          */
/* >  ...                           \                                                          */
/* >  ADRM(name_of_address_mode_n)                                                             */
/*                                                                                             */
/* name_of_address_mode_x: use capital letters (max. 10 characters)                            */
/* maximum 16 address modes + operation modes (--> opmm) + statuses (--> uk2s)                 */
/*                                                                                             */
/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/* !!!!! The FIRST entry on the address-mode-list is always the PHYSICAL ADDRESS MODE       !!!*/
/* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/*                                                                                             */
/* Use macro ADRM(name_of_address_mode_x) or                                                   */
/*           DIAGCOM_ST_ADDRMODE_name_of_address_mode_x_E to get bitposition of address mode.     */
/* Use macro ADRM_BM(name_of_address_mode_x) or                                                */
/*           DIAGCOM_ADRM_name_of_address_mode_x_DB16 to get bitmask of address mode.           */
/*                                                                                             */
/**************************************************************************************************/

#define DIAGCOM_ADDRMODES                                                                  \
ADRM(PHYS)                   /* One ECU is addressed physically (point-to-point)     */ \
                             /* This first entry is always the physical address mode */ \
ADRM(FUNC)                   /* Functional group of ECUs is addressed                */ \
ADRM(CARB)                   /* CARB mode 9141-2 (OBD II)                            */ \
ADRM(EOBD)                   /* CARB mode ISO 14230-4                                */ \
ADRM(OBDONCAN)               /* Diagnostics on CAN for emmission related systems     */ \
                             /*          (according to ISO 15765-4)                  */ \
ADRM(BROADCAST)              /* Functional address but physical mode                 */ \
                             /* (no response -> no collision detection)              */ \
ADRM(PROJECT)                /* Addressing mode - free for project use               */

/**************************************************************************************************/

/* Generate enumerator with bitpositions of address-modes: */
#undef  ADRM
#define ADRM(mode) DIAGCOM_ST_ADDRMODE_##mode##_E,
typedef enum
{
_DIAGCOM_DUMMY_E = DIAGCOM_ST_ADDRMODE_PHYS_DU8-1,
DIAGCOM_ADDRMODES
DIAGCOM_NUM_ADDRMODE_E
} DiagCom_AddrMode_e;

/* Generate enumerator with bitmasks of address-modes: */
#undef  ADRM
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define ADRM(mode) DIAGCOM_ADRM_##mode##_DB16 = (1<<DIAGCOM_ST_ADDRMODE_##mode##_E),
enum{
DIAGCOM_ADDRMODES
DIAGCOM_ALL_ADDRMODES_DB16 = (1<<DIAGCOM_NUM_ADDRMODE_E)-1};
#undef  ADRM
#undef  DIAGCOM_ADDRMODES

/* Macro for getting bitposition: */
#define ADRM(mode)      DIAGCOM_ST_ADDRMODE_##mode##_E

/* Macro for getting bitmask: */
#define ADRM_BM(mode)   (bit16)DIAGCOM_ADRM_##mode##_DB16


/* Macros for configuring operation mode: */
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define DIAGCOM_ALLOW(list)          (bit16)(0xFFFF list)
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define ONLY_IN_OPMODES(list)       &(~((1<<OPMM_NUM_OPMODES_E)-1)|(list))
#define NOT_IN_OPMODES(list)        &(~(list))

/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define ONLY_IN_ADDRMODES(list)     \
    &(((~((1<<DIAGCOM_NUM_ADDRMODE_E)-1)|(list))<<OPMM_NUM_OPMODES_E)|((1<<OPMM_NUM_OPMODES_E)-1))
/* MISRA RULE 96 VIOLATION:   can not put brace  */
#define NOT_IN_ADDRMODES(list)      &(~((list)<<OPMM_NUM_OPMODES_E))
#define NOT_IF(list)                &(~((list)<<(OPMM_NUM_OPMODES_E + DIAGCOM_NUM_ADDRMODE_E)))

/* Macro for configuring diagnostic modes: */
#define NOT_IN_DIAMODES(list)       (0xFFFFFFFFUL&~(list))



/**********        **************       ***************/




#endif /* _DIAGCOMAPPL_PUB_H */
