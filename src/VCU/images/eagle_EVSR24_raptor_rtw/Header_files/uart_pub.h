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
 * $Filename__:uart_pub.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT6KOR$ 
 * $Date______:10.05.2013$ 
 * $Class_____:SWHDR$ 
 * $Name______:uart_pub$ 
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
 * 1.10.0; 1     10.05.2013 RAT6KOR
 *   review changes
 * 
 * 1.10.0; 0     06.05.2013 RAT6KOR
 *   Removal of procman errors. Non existing procs which were leading to procmna
 *    errors Uart_DelayHigh_Proc and
 *   Uart_DelayLow_Proc are removed
 * 
 * 1.4.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: uart_pub.h
 *      Version: \main\basis\b_CORE\7
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _UART_PUB_H
#define _UART_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      Public header of UART modul (not API).
 *
 * \scope               INTERN
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
// Defines for the Uart_Init interface function.

// Defines for all supported frame formats. They are sorted in ascending order concerning the control register (CON).
//
// From TC17xy manual ASC Kernel Registers CON:
// CON.M Mode Selection
// 000B 8-bit data Synchronous Mode
// 001B 8-bit data Asynchronous Mode
// 010B Reserved. Do not use this combination.
// 011B 7-bit data + parity Asynchronous Mode
// 100B 9-bit data Asynchronous Mode
// 101B 8-bit data + wake up bit Asynchronous Mode
// 110B Reserved. Do not use this combination.
// 111B 8-bit data + parity Asynchronous Mode
//
// CON.STP Number of Stop Bit Selection
// 0 One stop bit
// 1 Two stop bits
//
// control register (CON). For the frame format the M field (bit 0-2) and the STP field (bit 3) are
// relevant
//                                      value
//                                      |      bits/frame
//                                      |      |    comment
//                                      |      |    |
//                                      v      v    v

// synchronous mode
#define UART_ST_8DATA_SYNC_DB32         0   // 8    synchronous mode

// 7 bit data, with parity, 1 or 2 stop bits
#define UART_ST_EVEN7DATA1STOP_DB32     3   // 10
#define UART_ST_ODD7DATA1STOP_DB32      3   // 10
#define UART_ST_EVEN7DATA2STOP_DB32     11  // 11   Not supported in EDC16
#define UART_ST_ODD7DATA2STOP_DB32      11  // 11   Not supported in EDC16

// 7 bit data without parity, 2 stop bits
#define UART_ST_7DATA2STOP_DB32         1   // 10   The 8th bit must always be one (first stop bit not handeled by hardware here)!

// 8 bit data, no parity, 1 or 2 stop bits
#define UART_ST_8DATA1STOP_DB32         1   // 10
#define UART_ST_8DATA2STOP_DB32         9   // 11

// 11/12 bit frames:

// 8 bit data, parity, 1 or 2 stop bits
#define UART_ST_EVEN8DATA1STOP_DB32     7   // 11
#define UART_ST_ODD8DATA1STOP_DB32      7   // 11
#define UART_ST_EVEN8DATA2STOP_DB32     15  // 12   Not supported in EDC16
#define UART_ST_ODD8DATA2STOP_DB32      15  // 12   Not supported in EDC16

// 8 bit data, wakeup, 1 or 2 stop bits
#define UART_ST_WAKEUP8DATA1STOP_DB32   5   // 11   Not supported in EDC16
#define UART_ST_WAKEUP8DATA2STOP_DB32   13  // 12   Not supported in EDC16

// 9 bit data, no parity, 1 or 2 stop bits
#define UART_ST_9DATA1STOP_DB32         4   // 11
#define UART_ST_9DATA2STOP_DB32         12  // 12   Not supported in EDC16

// Defines for Uart_GetError interface function.
#define UART_ST_PARITY_ERR_DB32         (MBIT0 <<  8)
#define UART_ST_FRAME_ERR_DB32          (MBIT0 <<  9)
#define UART_ST_OVERRUN_ERR_DB32        (MBIT0 << 10)
#define UART_ST_ALL_ERRS_DB32           (UART_ST_PARITY_ERR_DB32 | UART_ST_FRAME_ERR_DB32 | UART_ST_OVERRUN_ERR_DB32)

// Enum for Uart_GetStatus interface function. In previous versions the states are realized with defines _DU8.
enum
{
    UART_ST_FREE_DU8,
    UART_ST_RX_DU8,
    UART_ST_TX_DU8
};

#define UART_NUM_ID_NO_USER_DU8 	0

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */
typedef struct
{
    uint8           numUserId_u8;                    // Identifier of the uart user.
    bool            stUserReplaceable_b;             // TRUE -> another protocol can terminate current protocol.
} Uart_User_t;

typedef struct
{
    uint16          ctRx_u16;                        // Number of currently received bytes.
    uint16          ctTx_u16;                        // Number of currently transmitted bytes.
    uint8           stUart_u8;                       // Uart status (receive, idle, transmitt).
} Uart_st_t;

typedef struct
{
    void            (*TxCallback_pfn)(void);         // Function which is called after transmission.
    void            (*RxCallback_pfn)(void);         // Function which is called after reception.
    void            (*DelayHighCallback_pfn)(void);  // Function is called after idle delay high.
    void            (*ErrorCallback_pfn)(void);      // Function which is called after reception error.
} Uart_Callback_t;

typedef struct Uart_DelayLow_st
{
    uint32          tiMinLow_u32;                    // Min. delay low time of current time window.
    uint32          tiMaxLow_u32;                    // Max. delay low time of current time window.
    void            (*DelaylowCallback_pfn)(uint32); // Function is called after delay low.
    const struct    Uart_DelayLow_st **Next_ppcs;    // Pointer to pointer to next delay low struct.
} Uart_DelayLow_t;


typedef struct
{
    uint32          tiByte_u32;                      // Time for one data 'byte' in CPU Ticks (at desired baud rate).
    uint16          regBaud_u16;                     // Baudrate generator reload register value.
    uint16          regFDV_u16;                      // Fractional divider register value.
    uint8           regBRS_u8;                       // Baudrate Prescaler Select value (0 or 1).
} Uart_regBaud_t;


typedef struct
{
    Uart_DelayLow_t *FirstDelayLow_ps;              // Pointer to the first delay low structure.
    uint8           *TxBuf_pu8;                     // Pointer to the transmission buffer.
    uint8           *RxBuf_pu8;                     // Pointer to the reception buffer.
    void            (*KickUser_p)(void);            // Function which is called if uart user is terminated
                                                    //  by another user.
    Uart_Callback_t Callback_s;                     // Struct with the callback function pointers.
    uint32          tiDelayBegin_u32;               // Time stamp of the last transition from high to low.
    uint32          tiByte_u32;                     // Duration time of the transmission.
    uint32          tiDelayHigh_u32;                // Delay high time.
    uint32          tiRx_u32;                       // Time stamp of the last received byte.
    uint32          tiTx_u32;                       // Time stamp of the last transmitted byte.
    bit32           regStatus_b32;                  // Mirror of the status register.
    bit32           regControl_b32;                 // Initial value of the control register.
    bit16           regBaud_b16;                    // Mirror of the baudrate register (BG, has 13bits).
    uint16          numTxLen_u16;                   // Number of bytes to transmit.
    uint16          numRxLen_u16;                   // Number of bytes to receive.
    uint16          regRx_u16;                      // Mirror of the received Byte.
    uint16          regTx_u16;                      // Mirror of the transmitted Byte.
    Uart_st_t       stUart_s;                       // Status of the uart (and internal queue status).
    Uart_User_t     stUser_s;                       // Informations about the current user of the uart.
    bool            stElem1Byte_b;                  // Element size = 8bit?
    bool            stUseErrCallback_b;             // Error-Callback
    bool            stParity_b;                     // Parity enabled;
    uint8           numDataBits_u8;                 // data bits;
    uint8           numStopBits_u8;                 // stop bits;
    uint32          frameBitMask_u32;               // bit mask for Rx/Tx
} Uart_Ram_t;

typedef ASC_RegMap_t UART_RegMap_t;                 // Type which represents the UART register architecture.

typedef struct
{
    UART_RegMap_t   *Register_ps;                   // Pointer to the UART HW registers.
    Uart_Ram_t      *Ram_ps;                        // Pointer to the corresponding RAM structure.
    uint32 (*const Uart_SetDelayHigh_cpfn)
    	(Uart_Ram_t *Ram_ps, uint32 tiDelayHigh_u32, bool stNew_b);  // Delay High Callback function
    const uint32    tiDelayLowProc_cu32;            // Time slice in which Uart Delay low monitoring proc (Uart_1ms_Proc) is called.
    bit32           stInitConf_b32;                 // Configuration Variable UART Initialization.
    uint16          numPort_u16;                    // Port used for Rx.
    uint16          numPin_u16;                     // Pin used for Rx.
} Uart_t;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */

__PRAGMA_USE__CODE__hwe__LowSpeed__START
extern void Uart_Init_proc_ini(void);
extern void Uart_Init(const Uart_t *Data_pcs, bit32 stInit_b32);
__PRAGMA_USE__CODE__hwe__LowSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Uart_Rx(const Uart_t *Data_pcs, uint8* RxBuf_pu8, uint16 numRxLen_u16);
extern void Uart_Tx(const Uart_t *Data_pcs, uint8* TxBuf_pu8, uint16 numTxLen_u16);
extern bool Uart_TxExt(const Uart_t *Data_pcs, uint8* TxBuf_pu8, uint16 numTxLen_u16);
extern uint32 Uart_BaudPrepare(const Uart_t *Data_pcs, uint32 dBaud_u32, Uart_regBaud_t *regBaud_ps);

extern void Uart_BaudActivate(const Uart_t * Data_pcs, const Uart_regBaud_t *regBaud_pcs);
extern uint32 Uart_GetBaud(const Uart_t *Data_pcs);
extern bool Uart_GetLevel(const Uart_t *Data_pcs);
extern uint16 Uart_GetRxData(const Uart_t *Data_pcs);
extern uint32 Uart_GetLastActionTi(const Uart_t *Data_pcs);
extern void Uart_GetStatus(const Uart_t *Data_pcs, Uart_st_t* st_ps);
extern bit16 Uart_GetError(const Uart_t *Data_pcs);
extern void Uart_GetUser(const Uart_t *Data_pcs, Uart_User_t *User_ps);
extern bool Uart_SetUser(const Uart_t *Data_pcs, const Uart_User_t *User_pcs, void (*KickUser_p)(void) );

extern void Uart_Free(const Uart_t *Data_pcs);
extern void Uart_DelayHighDevice0_Proc(void);
extern void Uart_DelayHighDevice1_Proc(void);
extern uint32 Uart_DelayHigh(const Uart_t *Data_pcs, uint32 tiDelayHigh_u32, bool stNew_b);
extern void Uart_DelayLow(const Uart_t *Data_pcs, const Uart_DelayLow_t *NewDelayLow_pcs, bool DelayActive_b);

extern void Uart_1ms_Proc(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern void Uart_Isr(const Uart_t *Data_pcs);
extern void Uart_Asc0RIR(void);
extern void Uart_Asc1RIR(void);

extern void Uart_CallBack(const Uart_t *Data_pcs, const Uart_Callback_t *Callback_pcs);
extern bool Uart_ErrCallbackUse(const Uart_t *Data_pcs, bool Uart_stErrCallBack_b);
extern bool Uart_ErrCallbackUseState(const Uart_t *Data_pcs);
__PRAGMA_USE__CODE__hwe__HighSpeed__END

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START

// Ram structure.
extern Uart_Ram_t Uart_Ram_s[];

// Callbacks
extern const Uart_Callback_t Uart_IniCallback_cs;

// The UART structures.
extern Uart_t Uart_cs[];

__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END

/* _UART_PUB_H */
#endif
