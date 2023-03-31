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
 * $Filename__:e_appmod.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:KLMEYER$ 
 * $Date______:26.08.2008$ 
 * $Class_____:SWHDR$ 
 * $Name______:e_appmod$ 
 * $Variant___:1.11.0$ 
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
 * 1.11.0; 0     26.08.2008 KLMEYER
 *   Update: Core delivery 2008-07
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/
/**************************************************************************************************
 *  FILE:           e_appmod.h
 *
 *  DESCRIPTION:    interface header for application modes
 *
 *  VISIBILITY:     External
 *
 *  AUTHOR:         ETAS/ESW3-Ms
 *
 *  CREATED:        21.01.2003            17:00
 *
 *  COPYRIGHT:      ETAS GmbH
 *                  Stuttgart / Germany
 *                  All rights reserved
 **************************************************************************************************
 

 History:
 --------

who when        call         what
---------------------------------------------------------------------------------------------------
Gw  21.01.2003  42628        moved to line 03c and created a seperate file for each function
Vr  20.02.2003  42695        introduce prefix OS_ for all ERCOSEK-related symbols 
Vr  11.03.2003  46653        TaskType, AlarmType and ResourceType are not allowed to be defined as const.
                             Remove const from type declaration
Vr  11.03.2003  42695        introduce prefix OS_ for all ERCOSEK-related symbols 
Ew  21.03.03    46654        Sr039 AppModePtrType GetActiveApplicationMode( void ) wrong 
                             prototype (call 46654) 
Vr  10.04.2003  xxxxx        DD002 Error Handling
Ry  05.11.2003  51092	     Open Points from Review on 2003-10-31
Vr  09.06.2004	54014        Const variable in RAM
Ry  02.08.2004  80069DD003   MISRA mark ERCOSEK kernel
                             MISRA RULE 110 VIOLATION: unions shall not be used to access the 
                             sub-parts of larger data types.[Classified:Deliberate].Added comment.
JSR 2004.12.13  57935        Correct const use in appmode initialisation
Ry  2005.05.13  80069DD003   MISRA mark ERCOSEK kernel. 
                             Added missing comment to suppresss MISRA RULE 110 VIOLATION.
RY  2005.07.29  61489        Short addressing causes Linker errors
Ry  2005.09.02  xxxxx        Updated with review comments 

*/


#ifndef __E_APPMOD_H
#define __E_APPMOD_H

/*-------------------------------------------------------------------------------------------------
 *    Include files 
 *-------------------------------------------------------------------------------------------------
 */
/*-------------------------------------------------------------------------------------------------
 *    Defines
 *-------------------------------------------------------------------------------------------------
 */

/* defines for initialization of record headers */
#define OS_END_RECORD_HEADER                   { OS_END_RECORD,       sizeof(T_os_recordHeader) }
#define OS_CFG_DATA_RECORD_HEADER              { OS_CFG_DATA,         sizeof(T_os_cfgData) }
#define OS_EXTENDED_RECORD_HEADER              { OS_EXT_CFG_DATA,     sizeof(T_os_extendedCfgData) }
#define OS_INIT_DATA_RECORD_HEADER             { OS_INIT_DATA,        sizeof(T_os_cfgInitData) }
#define OS_TARGET_CFG_DATA_RECORD_HEADER       { OS_TARGET_CFG_DATA,  sizeof(T_os_targetCfgData) }


/*  the following part is necessary for the usage of inline functions 
**  and the access to the multiple user stacks by the OLTs
***********************************************************************/
  #ifdef NO_CFG_PTR
    #define os_lsIntMask                       os_i_lsIntMask       
    #define os_hsIntMask                       os_i_hsIntMask 
    #define os_timerIntMask                    os_i_timerIntMask;
      

    #define os_userStackTop                    os_i_userStackTop
    #define os_userStackOffsets_Ptr            os_i_userStackOffsets_Ptr
    #define os_intMaskTab_Ptr                  os_i_intMaskTab_Ptr

  #else
    /*  the following part is necessary for the usage of inline functions 
    **  and the access to the multiple user stacks by the OLTs
    ***********************************************************************/
    #if (OS_LIN_ADDRESS_SPACE > 0)
        #define os_lsIntMask                   (os_cfgDataPtr->_lsIntMask)        
        #define os_hsIntMask                   (os_cfgDataPtr->_hsIntMask)        
        #define os_timerIntMask                (os_cfgDataPtr->_timerIntMask)        

        #define os_userStackTop                (os_cfgDataPtr->_userStackTop)
        #define os_userStackOffsets_Ptr        (os_cfgDataPtr->_userStackOffsets_Ptr)
        #define os_intMaskTab_Ptr              (os_cfgDataPtr->_intMaskTab_Ptr)
    #else

        #define os_lsIntMask                    os_cfgDataInRam._lsIntMask     
        #define os_hsIntMask                    os_cfgDataInRam._hsIntMask     
        #define os_timerIntMask                 os_cfgDataInRam._timerIntMask     

        #define os_userStackTop                 os_cfgDataInRam._userStackTop
        #define os_userStackOffsets_Ptr         os_cfgDataInRam._userStackOffsets_Ptr
        #define os_intMaskTab_Ptr               os_cfgDataInRam._intMaskTab_Ptr
    #endif
  #endif /* NO_CFG_PTR */

/* pointers to extended data record */
#define os_inputFreq                            (os_extendedCfgDataPtr->_inputFreq)
#define os_prescaler                            (os_extendedCfgDataPtr->_prescaler)
#define os_ticksPerBase                         (os_extendedCfgDataPtr->_ticksPerBase)
#define os_tickDuration                         (os_extendedCfgDataPtr->_tickDuration)
#define os_stackMonitorPtr                      (os_extendedCfgDataPtr->_stackMonitorPtr)

/*-------------------------------------------------------------------------------------------------
 *    Type definitions
 *-------------------------------------------------------------------------------------------------
 */
/* ERCOSEK configuration data 
******************************/
typedef OS_CONST_CODGEN void OS_FAR *                             T_os_cfgDataPtr;       /* type pointer to config data */


/*  ERCOSEK operating mode descriptor type
*******************************************/
struct os_appModeInfo
{
    const T_os_processPtr *                       iniTabPtr;
    TimeTableType                                 timeTabPtr;         /* pointer to time table descriptor */
    T_os_cfgDataPtr                               cfgDataPtr;         /* pointer to configuration data */
};

/* ERCOSEK application mode types
**********************************/
typedef OS_FAR const struct os_appModeInfo     T_os_appModeDesc;      /* structure for operating mode description */
typedef T_os_appModeDesc *                     AppModeType;        /* pointer to application mode descriptor */


/* ERCOSEK register bank type
******************************/
typedef struct
{
    T_os_uint                                    r[OS_GPR_NUM];
} T_os_regBank;


/* ERCOSEK configuration record identifier type
************************************************/
typedef enum os_recordId
{   
    OS_END_RECORD,             /* end record                               */
    OS_CFG_DATA,               /* config data optionally copied into RAM   */
    OS_EXT_CFG_DATA,           /* timer configuration data record          */ 
    OS_INIT_DATA,              /* Initialisation data                      */
    OS_TARGET_CFG_DATA         /* configuration of DPP0 and DPP2           */
    /* add here further record id's */
} T_os_recordId;    


/* ERCOSEK configuration record header type
********************************************/
typedef struct
{
    T_os_recordId                              recordId;
    T_os_uint                                  len;
} T_os_recordHeader;

typedef union
{
    T_os_uint8 OS_FAR                          *toBytes;
    T_os_recordHeader OS_FAR                   *toHeader;
} T_os_recHeaderUnion;


/*  Type of configuration record CFG_DATA
**  (will be copied from ROM to RAM for C16x)
**********************************************/
#ifdef NO_CFG_PTR
    extern  const PrioType                             os_i_nofCoopLvls;
    extern  const PrioType                             os_i_nofSwLvls;
    extern  const PrioType                             os_i_nofHwLvls;
    extern  const PrioType                             os_i_nofLvls;

    extern  const PrioType                             os_i_maxLsLvl;
    extern  const PrioType                             os_i_maxLsIntLvl;
    extern  const PrioType                             os_i_timerprio;
    extern  const PrioType                             os_i_timerIntLvl;

    /* __LOCATE_IN(SECTIONNAME) macro to specify section name, for TriCore GNU compiler short addressing */
    extern  const IntMaskType                          os_i_lsIntMask   __LOCATE_IN(ERC_ROM);
    extern  const IntMaskType                          os_i_hsIntMask   __LOCATE_IN(ERC_ROM);
    extern  const IntMaskType                          os_i_timerIntMask;

    extern  const T_os_uint                            os_i_nofAlarms;
    extern  const T_os_uint                            os_i_nofResources;

    extern  const StackAddressType                     os_i_userStackTop;
    extern  const StackAddressType                     os_i_userStackBottom;
    extern  const StackAddressType                     os_i_ercosekStackTop;
    extern  const StackAddressType                     os_i_ercosekStackBottom;
    extern  const T_os_uint                            os_i_checkWordOffset;

    extern  OS_FAR const IntMaskType *                 os_i_intMaskTab_Ptr;
    extern  OS_FAR const T_os_uint8 *            	   os_i_fifoSize_Ptr;
    extern  T_os_swTaskPtr * OS_FAR const *            os_i_taskFifoPtr_Ptr;
    extern  OS_FAR const T_os_uint8 *                  os_i_schedIntCtrlTab_Ptr;   
    extern  T_os_regBank * OS_FAR const *              os_i_regBankPtrs_Ptr;
    extern  T_os_callBackPtr OS_FAR const *            os_i_alarmFuncPtrs_Ptr;
    extern  OS_FAR const T_os_funcPtr *                os_i_iniFuncPtrTab_Ptr; 

    extern  T_os_mon *                                 os_i_mon_Ptr;
    extern  T_os_uint *                                os_i_indexTab_Ptr;
    extern  TickRefType                                os_i_periods_Ptr;
    extern  TickRefType                                os_i_cmpRegs_Ptr;
#else 
    /*  Type of configuration record CFG_DATA
    **  (will be copied from ROM to RAM for C16x)
    **********************************************/
    typedef struct
    {
        PrioType                                  _nofCoopLvls;
        PrioType                                  _nofSwLvls;
        PrioType                                  _nofHwLvls;
        PrioType                                  _nofLvls;

        PrioType                                  _maxLsLvl;
        PrioType                                  _maxLsIntLvl;
        PrioType                                  _timerprio;
        PrioType                                  _timerIntLvl; 
        IntMaskType                               _lsIntMask;     
        IntMaskType                               _hsIntMask;
        IntMaskType                               _timerIntMask;
        T_os_uint                                 _nofAlarms;
        T_os_uint                                 _nofResources;

        StackAddressType                          _userStackTop;
        StackAddressType                          _userStackBottom;
        StackAddressType                          _ercosekStackTop;
        StackAddressType                          _ercosekStackBottom;
        T_os_uint                                 _checkWordOffset;

        OS_FAR const IntMaskType *                _intMaskTab_Ptr;
        OS_FAR const T_os_uint8 *                 _fifoSize_Ptr;
        T_os_swTaskPtr * OS_FAR const *           _taskFifoPtr_Ptr;
        OS_FAR const T_os_uint8 *                 _schedIntCtrlTab_Ptr;   
        T_os_regBank * OS_FAR const *             _regBankPtrs_Ptr;
        T_os_callBackPtr OS_FAR const *           _alarmFuncPtrs_Ptr;
        OS_FAR const T_os_funcPtr *               _iniFuncPtrTab_Ptr; 

        T_os_mon *                                _mon_Ptr;
        T_os_uint *                               _indexTab_Ptr;
        TickRefType                               _periods_Ptr;
        TickRefType                               _cmpRegs_Ptr;
                                            
    } T_os_cfgData_;
                                        
    typedef OS_FAR const T_os_cfgData_            T_os_cfgData;
    typedef OS_FAR const T_os_cfgData_            T_os_cfgDataInRom;
    typedef T_os_cfgData_                         T_os_cfgDataInRam;
#endif /* NO_CFG_PTR */

/* MISRA RULE 110 VIOLATION: unions shall not be used to access the sub-parts of larger data types.
                             [Classified:Deliberate].The bit field members inside the union are
                             accessed in the source code and the other data member in the union is
                             only used to clear all the bits to zero. So no problem occurs with respect
                             to data mapping of members inside the union*/
/*lint -e960*/
typedef union {

    struct os_BF {
        T_os_uint                                terminateAppMode : 1;
        T_os_uint                                switchAppMode    : 1;
        T_os_uint                                checkUserStack   : 1;
        T_os_uint                                patternCheck     : 1;
        T_os_uint                                inErrorHook      : 1;
        T_os_uint                                initProcessing   : 1;
    } T_os_bf;
                
    T_os_uint8 initBitField;
                 
} T_os_appModeRsc;
/*lint -restore*/

/* Init Data of ERCOSEK Variables
***********************************/
typedef   OS_CONST_CODGEN OS_FAR T_os_uint8 *     T_os_initSrcPtr;
typedef         OS_FAR T_os_uint8 *              T_os_initDestPtr;


typedef OS_FAR const struct
{
    T_os_uint                                  length;
    OS_CONST_CODGEN T_os_initSrcPtr            sourcePtr;
    T_os_initDestPtr                           destPtr;
} T_os_cfgInitData;


/* ERCOSEK types for hook routines
***********************************/
typedef void                                   T_os_shutdownHook (StatusType errorCode);
typedef void                                   T_os_errorHook (StatusType errorCode);

typedef T_os_shutdownHook *                    ShutdownHookType;
typedef T_os_errorHook *                       ErrorHookType;

typedef OS_FAR const struct
{
    T_os_uint                                  _inputFreq;
    T_os_uint                                  _prescaler;
    TickType                                   _ticksPerBase;
    TickType                                   _tickDuration;
    T_os_stackMonitor*                         _stackMonitorPtr;
    ErrorHookType                              ErrorHookPtr;
    ShutdownHookType                           ShutdownHookPtr;
    T_os_processPtr                            PreTaskHookPtr;
    T_os_processPtr                            PostTaskHookPtr;
} T_os_extendedCfgData;

/*-------------------------------------------------------------------------------------------------
 *    External data
 *-------------------------------------------------------------------------------------------------
 */

#ifndef NO_CFG_PTR
    #if (OS_LIN_ADDRESS_SPACE > 0)
            extern T_os_cfgData *               os_cfgDataPtr;
    #else
            extern T_os_cfgDataInRam            os_cfgDataInRam;
    #endif
#endif /* NO_CFG_PTR */

/* __LOCATE_IN(SECTIONNAME) macro to specify section name, for TriCore GNU compiler short addressing */
extern T_os_extendedCfgData *                   os_extendedCfgDataPtr  __LOCATE_IN(BSS_A4); 

/*-------------------------------------------------------------------------------------------------
 *    Function prototypes
 *-------------------------------------------------------------------------------------------------
 */
void             StartOS                         ( AppModeType appMode );
void             ShutdownOS                      ( StatusType errNo );
StatusType       ExitOS                          ( void );

StatusType      SetNextAppMode              ( AppModeType appMode );
AppModeType     GetActiveApplicationMode    ( void );
FlagType        InAppModeInit               ( void );

#endif /* __E_APPMOD_H */

/*************************************************************************************************/


        

