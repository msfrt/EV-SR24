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
 * $Filename__:pmd_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:EHF2SI$ 
 * $Date______:28.10.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:pmd_pub$ 
 * $Variant___:1.10.0$ 
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
 * 1.10.0; 1     28.10.2010 EHF2SI
 *   adaptations for Cj950
 * 
 * 1.10.0; 0     26.05.2010 VIN4KOR
 *   Misra Warning Removal
 * 
 * 1.9.0; 0     16.01.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: pmd_pub.h
 *      Version: \main\basis\b_CORE\10
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _PMD_PUB_H
#define _PMD_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define Pmd_ReserveTimer(val)                             (PMD_FETCH_TIMER_##val(val))

#define PMD_FETCH_TIMER_Tle6232_Diag_PORT_toggle(val)     (Pmd_FetchTimer(val, PMD_INDEX_TLE6232))
#define PMD_FETCH_TIMER_Tle6232_Diag_SPIfast_toggle(val)  (Pmd_FetchTimer(val, PMD_INDEX_TLE6232))
#define PMD_FETCH_TIMER_Tle6232_Diag_SPIslow_toggle(val)  (Pmd_FetchTimer(val, PMD_INDEX_TLE6232))

#define PMD_FETCH_TIMER_Cj945_Diag_PORT_toggle(val)       (Pmd_FetchTimer(val, PMD_INDEX_CJ945))
#define PMD_FETCH_TIMER_Cj945_Diag_MSC_toggle(val)        (Pmd_FetchTimer(val, PMD_INDEX_CJ945))
#define PMD_FETCH_TIMER_Cj945_Diag_SPIfast_toggle(val)    (Pmd_FetchTimer(val, PMD_INDEX_CJ945))
#define PMD_FETCH_TIMER_Cj945_Diag_SPIslow_toggle(val)    (Pmd_FetchTimer(val, PMD_INDEX_CJ945))

#define PMD_FETCH_TIMER_R2S2_Diag_CMD_toggle(val)         (Pmd_FetchTimer(val, PMD_INDEX_R2S2))
#define PMD_FETCH_TIMER_R2S2_Diag_MSC_toggle(val)         (Pmd_FetchTimer(val, PMD_INDEX_R2S2))

#define PMD_FETCH_TIMER_Cj950_Diag_CMD_toggle(val)        (Pmd_FetchTimer(val, PMD_INDEX_CJ950))
#define PMD_FETCH_TIMER_Cj950_Diag_MSC_toggle(val)        (Pmd_FetchTimer(val, PMD_INDEX_CJ950))

#define PMD_FETCH_TIMER_Cy100_Diag_PORT_toggle(val)       (Pmd_FetchTimer(val, PMD_INDEX_CY100))

#define PMD_FETCH_TIMER_Bsp742_Diag_PORT_toggle(val)      (Pmd_FetchTimer(val, PMD_INDEX_BSP742))

#define PMD_FETCH_TIMER_Dipo_Diag_PORT_toggle(val)        (Pmd_FetchTimer(val, PMD_INDEX_DIPO))



#define PMD_HBRIDGE_COM_ERROR        0x100           /* control-byte was wrong                    */
#define PMD_HBRIDGE_TIMEOUT_ERROR    0x200           /* sequence not received till now            */
#define PMD_HBRIDGE_IDENT_ERROR      0x400           /* wrong ident read during INIT              */



/***************************************************************************************************
 * provide Bitpos for interfaces in DIO and PWM   Dio_GetErrorInfo -
 *                                                Pwm_GetErrorInfo -
 *
 *                                                              Frequenze drift
 *                                                              | SPI error
 *                                                              | | COM error
 *                                                              | | | open load
 *                                                              | | | | overload
 *                updated since last call                       | | | | | short to batter
 *                | testimpulse since last call                 | | | | | or overtemperature
 *                | | testimpulse running                       | | | | | | overtemperature
 *                | | | testimpulse requested                   | | | | | | | short to ground
 *                | | | | central error flag                    | | | | | | | | short to batt
 *                | | | | | central overtemp. flag              | | | | | | | | |
 *                | | | | | |                                   | | | | | | | | |
 *                | | | | | | diag running(for tst verify)      | | | | | | | | |
 *                | | | | | | | diag requested (for tst verify) | | | | | | | | |
 *                | | | | | | | |                               | | | | | | | | |
 *                | | | | | | | |       TestedFlags             | | | | | | | | |
 *                | | | | | | | |       FD                      | | | | | | | | |
 *                | | | | | | | |       | OL                    | | | | | | | | |
 *                | | | | | | | |       | | OT                  | | | | | | | | |
 *                | | | | | | | |       | | | SCG               | | | | | | | | |
 *                | | | | | | | |       | | | | SCB             | | | | | | | | |
 *                | | | | | | | |       | | | | |               | | | | | | | | |
 *                V V V V V V V V       V V V V V               V V V V V V V V V
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * staReturn_u32 |N| | | | | | | |0|0|0| | | | | |0|0|0|0|0|0|0| | | | | | | | | | valReturn
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *               |       |       |       |       |       |       |       |       |
 *               3130292827262524....                         ..8 7 6 5 4 3 2 1 0
 *
 * =================================================================================================
*/
/* powerstage errors */
#define PMD_GEI_ERR_SCB_MSK      (0x00000001ul)
#define PMD_GEI_ERR_SCG_MSK      (0x00000002ul)
#define PMD_GEI_ERR_OT_MSK       (0x00000004ul)
#define PMD_GEI_ERR_SCBOT_MSK    (0x00000008ul)
#define PMD_GEI_ERR_OV_MSK       (0x00000010ul)
#define PMD_GEI_ERR_OL_MSK       (0x00000020ul)
#define PMD_GEI_ERR_FD_MSK       (0x00000100ul)
#define PMD_GEI_ERR_MSK          (PMD_GEI_ERR_SCB_MSK   |  \
                                  PMD_GEI_ERR_SCG_MSK   |  \
                                  PMD_GEI_ERR_OT_MSK    |  \
                                  PMD_GEI_ERR_SCBOT_MSK |  \
                                  PMD_GEI_ERR_OV_MSK    |  \
                                  PMD_GEI_ERR_FD_MSK    |  \
                                  PMD_GEI_ERR_OL_MSK    )
/* protokoll errors */
#define PMD_GEI_ERR_COM_MSK      (0x00000040ul)
#define PMD_GEI_ERR_SPI_MSK      (0x00000080ul)

/* tested flags */
#define PMD_GEI_TF_SCB_MSK       (0x00010000ul)
#define PMD_GEI_TF_SCG_MSK       (0x00020000ul)
#define PMD_GEI_TF_OT_MSK        (0x00040000ul)
#define PMD_GEI_TF_OL_MSK        (0x00080000ul)
#define PMD_GEI_TF_FD_MSK        (0x00100000ul)
#define PMD_GEI_TF_MSK           (PMD_GEI_TF_SCB_MSK | \
                                  PMD_GEI_TF_SCG_MSK | \
                                  PMD_GEI_TF_OT_MSK  | \
                                  PMD_GEI_TF_OL_MSK  | \
                                  PMD_GEI_TF_FD_MSK  )
/* general info bits */
#define PMD_GEI_INFO_CO_MSK      (0x04000000ul)
#define PMD_GEI_INFO_CE_MSK      (0x08000000ul)

/* testimpulse status */
#define PMD_GEI_TST_DRQ_MSK      (0x01000000ul)
#define PMD_GEI_TST_DRU_MSK      (0x02000000ul)
#define PMD_GEI_TST_TRQ_MSK      (0x10000000ul)
#define PMD_GEI_TST_TRU_MSK      (0x20000000ul)
#define PMD_GEI_TST_FIN_MSK      (0x40000000ul)
#define PMD_GEI_TST_RUN_MSK      (PMD_GEI_TST_DRU_MSK | \
                                  PMD_GEI_TST_DRQ_MSK | \
                                  PMD_GEI_TST_TRU_MSK | \
                                  PMD_GEI_TST_TRQ_MSK)

#define PMD_GEI_NEW_MSK          (0x80000000ul)


/**
 ***************************************************************************************************
 * Pmd_GetErr -
 *
 *                                                                SPI error
 *                                                                | COM error
 *                                                                | | open load
 *                                                                | | | overload
 *                updated since last call                         | | | | short to batter
 *                | testimpulse since last call                   | | | | or overtemperature
 *                | | testimpulse running                         | | | | | overtemperature
 *                | | | testimpulse requested                     | | | | | | short to ground
 *                | | | | central error flag                      | | | | | | | short to batt
 *                | | | | | central overtemp. flag                | | | | | | | |
 *                | | | | | |                                     | | | | | | | |
 *                | | | | | | diag running(for tst verify)        | | | | | | | |
 *                | | | | | | | diag requested (for tst verify)   | | | | | | | |
 *                | | | | | | | |                                 | | | | | | | |
 *                | | | | | | | |                                 | | | | | | | |
 *                | | | | | | | |                                 | | | | | | | |
 *                | | | | | | | |         OL                      | | | | | | | |
 *                | | | | | | | |         | OT                    | | | | | | | |
 *                | | | | | | | |         | | SCG                 | | | | | | | |
 *                | | | | | | | |         | | | SCB               | | | | | | | |
 *                | | | | | | | |         | | | |                 | | | | | | | |
 *                V V V V|V V V V|       |V V V V|       |       |V V V V|V V V V|
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * staReturn_u32 |N| | | | | | | |0|0|0|0| | | | |0|0|0|0|0|0|0|0| | | | | | | | | valReturn
 *               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *                | | | |     | |         | | | |                 | | | |   | | |
 *                | | | |     | |         | | | +---------------+ | | | +-+ | | |
 *                | | | |     | |         | | +---------------+ | | | |   | | | |
 *                | | | |     | |         | +---------------+ | | | | +-+ | | | |
 *                | | | |     | |         +---------------+ | | | | |   | | | | |
 *                | | | |     | |                         | | | | | | +-------+ |
 *                | | | |     | |                         | | | | | | | | | |   |
 *                | | | |     | |                         | | | | | | | | +-|-+ |
 *                | | | +-----V-V-----------------------+ | | | | | | | |   | | |
 *                | | +-------+-+---------------------+ | | | | | | | | |   | V |
 *                | +-------------------------------+ | | | | | | | | | | +-+-+ |
 *                +-------------------------------+ | | | | | | | | | | | V V V |
 *                                                | | | | | | | | | | | +-+ +-+-+
 *                                                V V V V V V V V V V V V V V V V
 *                                               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * staReturn_b16                                 | | | | | | | | | | | | | | | | | valReturn
 *                                               +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *                                               |       |       |       |       |
 ***************************************************************************************************
 */
/* powerstage errors */
#define PMD_GE_ERR_SCB_MSK        (0x0001u)
#define PMD_GE_ERR_SCB_OT_OV_MSK  (0x0002u)
#define PMD_GE_ERR_SCB_OT_MSK     (0x0004u)
#define PMD_GE_ERR_OL_OT_MSK      (0x0008u)
#define PMD_GE_ERR_OL_MSK         (0x0010u)
#define PMD_GE_ERR_SCG_MSK        (0x0020u)

#define PMD_GE_ERR_MSK            (PMD_GE_ERR_SCB_MSK       |  \
                                   PMD_GE_ERR_SCB_OT_OV_MSK |  \
                                   PMD_GE_ERR_SCB_OT_MSK    |  \
                                   PMD_GE_ERR_OL_OT_MSK     |  \
                                   PMD_GE_ERR_OL_MSK        |  \
                                   PMD_GE_ERR_SCG_MSK       )

/* protokoll errors */
#define PMD_GE_ERR_COM_MSK        (0x0040u)
#define PMD_GE_ERR_SPI_MSK        (0x0080u)

/* tested flags */
#define PMD_GE_TF_SCB_MSK         (0x0100u)
#define PMD_GE_TF_SCG_MSK         (0x0200u)
#define PMD_GE_TF_OT_MSK          (0x0400u)
#define PMD_GE_TF_OL_MSK          (0x0800u)
#define PMD_GE_TF_MSK             (PMD_GE_TF_SCB_MSK | \
                                   PMD_GE_TF_SCG_MSK | \
                                   PMD_GE_TF_OL_MSK  | \
                                   PMD_GE_TF_OT_MSK  )

/* general info bits - never used in actual versions */
#define PMD_GE_INFO_CO_MSK        (0x0400l)
#define PMD_GE_INFO_CE_MSK        (0x0800l)

/* testimpulse status */
#define PMD_GE_TST_TRU_MSK        (0x1000l)
#define PMD_GE_TST_TRQ_MSK        (0x2000l)
#define PMD_GE_TST_FIN_MSK        (0x4000l)
#define PMD_GE_TST_RUN_MSK        (PMD_GE_TST_TRU_MSK |  \
                                   PMD_GE_TST_TRQ_MSK)

#define PMD_GE_NEW_MSK            (0x8000l)

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef struct
{
    const uint16 ChipNbr_cu16;                           /* Chip                                 */
    const uint16 StageNbr_cu16;                          /* Powerstage                           */
    uint32 (*const  GetErrorInfo_cfp)(uint16,uint16);    /* function ptr to GetErrorinfo         */
    uint32 (*const  TstImp_cfp)      (uint16,uint16);    /* function ptr to TestImpulse start    */
    void   (*const  ClearErr_cfp)    (uint16,uint16);    /* function ptr to CLear Error          */
} Pmd_SignalInfo_t;

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bit16  Pmd_GetErr             (uint16 SignalNbr_u16);
extern bit8   Pmd_TstImp             (uint16 SignalNbr_u16);
extern void   Pmd_ClearErr           (uint16 SignalNbr_u16);
extern void   Pmd_ClrErrTrace        (void);
extern void   Pmd_PeriMon_Proc   (void);

extern uint32 Pmd_Return_uint32      (uint16 param1_u16, uint16 param2_u16);
extern void   Pmd_Return_void        (uint16 param1_u16, uint16 param2_u16);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void   Pmd_TimerInt_Proc      (void);
extern void   Pmd_Timer_freehandler  (void);

extern bool   Pmd_FetchTimer         (void (*const IntHandler_fp)(void), uint32 xDevice_u32, uint32 xRequests_u32);
extern void   Pmd_StartTimer         (void (*const IntHandler_fp)(void), uint32 Value_u32);
extern void   Pmd_FreeTimer          (void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END
 __PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void   Pmd_PeriMon_IniEnd(void);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

/*
 ***************************************************************************************************
 * Extern variables
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START
extern  void (*Pmd_TimerInt_handler)(void); /* pointer to callback function                       */
                                            /* which handle the timer interrupt                   */
__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END

__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Pmd_SignalInfo_t Pmd_SignalInfo_cs[];  /* im auto conf c/h */
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

#if(PMD_INDEX_MAX >= 0)
__PRAGMA_USE__hwe__1_5ms__RAM__x32__START
extern       uint32 Pmd_Prio[PMD_INDEX_CNT];
__PRAGMA_USE__hwe__1_5ms__RAM__x32__END
#endif

/* _PMD_PUB_H */
#endif
