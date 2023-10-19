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
 * $Filename__:mli_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:PRM5COB$
 * $Date______:07.03.2014$
 * $Class_____:SWHDR$
 * $Name______:mli_pub$
 * $Variant___:1.12.0$
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
 * 1.12.0; 0     07.03.2014 PRM5COB
 *   Change in code to check whether device id sent from device is out of bounds
 *    during active read and active write in MLI
 * 
 * 1.10.0; 0     18.06.2010 INTECKEN
 *   removed MISRA warnings
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: mli_pub.h
 *      Version: \main\basis\b_CORE\2
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _MLI_PUB_H                                      /* protect multiple includes              */
#define _MLI_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                  Public header of MLI
 *
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * defines
 ***************************************************************************************************
 */
/* Addresses for MLI0 small windows */
#define MLI0_SMALL_WIN0_START    0xF01E0000ul
#define MLI0_SMALL_WIN0_END      0xF01E1FFFul
#define MLI0_SMALL_WIN1_START    0xF01E2000ul
#define MLI0_SMALL_WIN1_END      0xF01E3FFFul
#define MLI0_SMALL_WIN2_START    0xF01E4000ul
#define MLI0_SMALL_WIN2_END      0xF01E5FFFul
#define MLI0_SMALL_WIN3_START    0xF01E6000ul
#define MLI0_SMALL_WIN3_END      0xF01E7FFFul

/* Addresses for MLI0 large windows */
#define MLI0_LARGE_WIN0_START    0xF0200000ul
#define MLI0_LARGE_WIN0_END      0xF020FFFFul
#define MLI0_LARGE_WIN1_START    0xF0210000ul
#define MLI0_LARGE_WIN1_END      0xF021FFFFul
#define MLI0_LARGE_WIN2_START    0xF0220000ul
#define MLI0_LARGE_WIN2_END      0xF022FFFFul
#define MLI0_LARGE_WIN3_START    0xF0230000ul
#define MLI0_LARGE_WIN3_END      0xF023FFFFul

/* Addresses for MLI1 small windows */
#define MLI1_SMALL_WIN0_START    0xF01E8000ul
#define MLI1_SMALL_WIN0_END      0xF01E9FFFul
#define MLI1_SMALL_WIN1_START    0xF01EA000ul
#define MLI1_SMALL_WIN1_END      0xF01EBFFFul
#define MLI1_SMALL_WIN2_START    0xF01EC000ul
#define MLI1_SMALL_WIN2_END      0xF01EDFFFul
#define MLI1_SMALL_WIN3_START    0xF01EE000ul
#define MLI1_SMALL_WIN3_END      0xF01EFFFFul

/* Addresses for MLI1 large windows */
#define MLI1_LARGE_WIN0_START    0xF0240000ul
#define MLI1_LARGE_WIN0_END      0xF024FFFFul
#define MLI1_LARGE_WIN1_START    0xF0250000ul
#define MLI1_LARGE_WIN1_END      0xF025FFFFul
#define MLI1_LARGE_WIN2_START    0xF0260000ul
#define MLI1_LARGE_WIN2_END      0xF026FFFFul
#define MLI1_LARGE_WIN3_START    0xF0270000ul
#define MLI1_LARGE_WIN3_END      0xF027FFFFul

#define MLI_WIN0_BASE              TP0BAR
#define MLI_WIN1_BASE              TP1BAR
#define MLI_WIN2_BASE              TP2BAR
#define MLI_WIN3_BASE              TP3BAR

/* Defines for different pipes */
#define PIPE0                      0
#define PIPE1                      1
#define PIPE2                      2
#define PIPE3                      3

/* Defines for different commands */
#define CMDP0                      0
#define CMDP1                      1
#define CMDP2                      2
#define CMDP3                      3

#define MLI0_SMALL_WINPIPE0            MLI0_SMALL_WIN0_START
#define MLI0_SMALL_WINPIPE1            MLI0_SMALL_WIN1_START
#define MLI0_SMALL_WINPIPE2            MLI0_SMALL_WIN2_START
#define MLI0_SMALL_WINPIPE3            MLI0_SMALL_WIN3_START
#define MLI0_LARGE_WINPIPE0            MLI0_LARGE_WIN0_START
#define MLI0_LARGE_WINPIPE1            MLI0_LARGE_WIN1_START
#define MLI0_LARGE_WINPIPE2            MLI0_LARGE_WIN2_START
#define MLI0_LARGE_WINPIPE3            MLI0_LARGE_WIN3_START

#define MLI1_SMALL_WINPIPE0            MLI1_SMALL_WIN0_START
#define MLI1_SMALL_WINPIPE1            MLI1_SMALL_WIN1_START
#define MLI1_SMALL_WINPIPE2            MLI1_SMALL_WIN2_START
#define MLI1_SMALL_WINPIPE3            MLI1_SMALL_WIN3_START
#define MLI1_LARGE_WINPIPE0            MLI1_LARGE_WIN0_START
#define MLI1_LARGE_WINPIPE1            MLI1_LARGE_WIN1_START
#define MLI1_LARGE_WINPIPE2            MLI1_LARGE_WIN2_START
#define MLI1_LARGE_WINPIPE3            MLI1_LARGE_WIN3_START

/* Time for waiting on specific flags after write or read access (in usec). */
/* This is used to avoid endles loop, if the hw has some problems           */
#define MLI_TIME_TO_WAIT 100ul

/* Define to encapsulate shutdwon function for SYC */
#define MLI_SHUTDOWN_DEF        1

/* Enum type for return values of functions Mli_ActvWr and Mli_ActvRd */
typedef enum
{
    MLI_ACCEPTED,
    MLI_OK,
    MLI_ERROR,
    MLI_QUEUE_FULL,
    MLI_DEV_ID_ERROR
}Mli_xStatus_t;

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Macro for access to TPxBAR
 *
 ***************************************************************************************************
 */
#define Mli_SetWinBase(mod, window, adBase, offset) Mli_SetWinBase_##mod(window, adBase, offset)

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Macros for access to Transmitter command register (TCMDR)
 *
 ***************************************************************************************************
 */
#define Mli_WriteTCMDR(mod, cmd, value) Mli_WriteTCMDR_##mod(cmd, value)

/* MISRA RULE 96 VIOLATION: pamareter not enclosed in (), cause of macro expansion */
/**
 ***************************************************************************************************
 * \moduledescription
 *                      Macro for read access on a mli window.
 *                      Only neccessary to be compatible with the old interface.
 *
 ***************************************************************************************************
 */
#define Mli_Read(mod, window, pipe, address, var)               \
        do {                                                    \
            Mli_Read_##mod(window##pipe, address);              \
            Mli_ReadPoll_##mod(pipe);                           \
            var = mod.RDATAR;                                   \
        } while (0)

/**
 ***************************************************************************************************
 * \moduledescription
 *                  Macro for polling status of a read access from a mli window
 *                  This macro is faster, if the address for read is handled by the user,
 *                  so no address calcutation is neccessary here
 *
 ***************************************************************************************************
 */
#define Mli_ReadPoll(mod, pipe) Mli_ReadPoll_##mod(pipe)

/* MISRA RULE 96 VIOLATION: pamareter not enclosed in (), cause of macro expansion */
/**
 ***************************************************************************************************
 * \moduledescription
 *                      Macro for write access on a mli window.
 *                      Only neccessary to be compatible with the old interface.
 *
 ***************************************************************************************************
 */
#define Mli_Write(mod, window, pipe, address, value)            \
        do {                                                    \
            Mli_Write_##mod(window##pipe, address, value);      \
            Mli_WritePoll_##mod(pipe);                          \
        } while (0)

/**
 ***************************************************************************************************
 * \moduledescription
 *                 Macro for polling status of a write access from a mli window
 *                 This macro is faster, if the address for write is handled by the user,
 *                 so no address calcutation is neccessary here
 *
 ***************************************************************************************************
 */
#define Mli_WritePoll(mod, pipe) Mli_WritePoll_##mod(pipe)

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__hwe__1_5ms__RAM__x32__START
extern uint32 Mli_tiStamp_u32;
__PRAGMA_USE__hwe__1_5ms__RAM__x32__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
/* Extern declaration for functions */
extern void Mli_Init(void);
extern void Mli_Proc_Ini(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void Mli_ErrorInt_Proc(void);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern Mli_xStatus_t Mli_ActvWr8(uint8 xDevice_u8, uint8* adWrite_pu8, uint8 xValue_u8, const uint8* xStatus_pcu8);
extern Mli_xStatus_t Mli_ActvWr16(uint8 xDevice_u8, uint16* adWrite_pu16, uint16 xValue_u16, const uint8* xStatus_pcu8);
extern Mli_xStatus_t Mli_ActvWr32(uint8 xDevice_u8, uint32* adWrite_pu32, uint32 xValue_u32, const uint8* xStatus_pcu8);
extern Mli_xStatus_t Mli_ActvRd8(uint8 xDevice_u8, uint8* adRead_pu8, uint8* adValue_pu8, const uint8* xStatus_pcu8);
extern Mli_xStatus_t Mli_ActvRd16(uint8 xDevice_u8, uint16* adRead_pu16, uint16* adValue_pu16, const uint8* xStatus_pcu8);
extern Mli_xStatus_t Mli_ActvRd32(uint8 xDevice_u8, uint32* adRead_pu32, uint32* adValue_pu32, const uint8* xStatus_pcu8);
extern void Mli_Shutdown(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* _MLI_PUB_H                                                                                     */
#endif
