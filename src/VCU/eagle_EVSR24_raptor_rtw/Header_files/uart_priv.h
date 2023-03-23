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
 * $Filename__:uart_priv.h$ 
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
 * $Name______:uart_priv$ 
 * $Variant___:1.10.0$ 
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
 * 1.10.0; 0     10.05.2013 RAT6KOR
 *   Instances of Uart_DelayLow_Proc  and Uart_DelayHigh_Proc removed
 * 
 * 1.6.0; 0     24.11.2009 JWI2SI
 *   Initial import from Clearcase 
 *      File name: uart_priv.h
 *      Version: \main\basis\b_CORE\8
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _UART_PRIV_H
#define _UART_PRIV_H

/**
 ***************************************************************************************************
 * \moduledescription
 *                      {!Description MUST start in this line - replace text inclusive brackets!}
 *
 * \scope               [CONF][API][INTERN] {[] means that the content is optional - remove them}
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

// Mask for Rx/Tx
#define UART_REG_TXFILL8DATA_U16        (0x00FF)
#define UART_REG_TXFILL9DATA_U16        (0x01FF)

#define UART_REG_TXFILL8DATA_U32        (0x000000FFUL)
#define UART_REG_TXFILL9DATA_U32        (0x000001FFUL)

#define UART_7BIT_FRAME_MASK_U32        (0x0000007FUL)
#define UART_8BIT_FRAME_MASK_U32        (0x000000FFUL)
#define UART_9BIT_FRAME_MASK_U32        (0x000001FFUL)

#define UART_ST_ELEM2BYTES_DB32         MBITF

// Uart initialisation standard flags: receiver + baud rate generator + frame error detection enabled
#define UART_ST_CONTROL_INIT_B32        (0x00008850UL)

// Mask for the baudrate register (BG)
#define UART_REG_BG_MSK_B32             (0x00001FFFUL)

// Mask for the mode in CON register: M bits
#define UART_REG_CON_M_MSK_B32          (0x00000007UL)
#define UART_REG_CON_M_SYNC             (0x00000000UL)

// Mask for the stop bits in CON register: STP bit
#define UART_REG_CON_STP_MSK_B32        (0x00000008UL)

// Time duration for one tick in nano seconds.
#define UART_TI_TICK_DU16               (CPU_TICKS_TO_US(1000ul))

// System clock for ASC in Hz
#define UART_SYSCLOCK_MHZ_U32           (MACHINE_SYSCLOCK_MHZ * 1000 * 1000)

// Transmit timeout check with number of byte times
#define UART_TX_TIMEOUT_FACTOR          (3UL)

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Extern declarations
 ***************************************************************************************************
 */

__PRAGMA_USE__hwe__1_5ms__constant__x8__START

// Define who is using ASC0.
extern const uint8 Uart_idDevice0User_cu8;

// Define who is using ASC1.
extern const uint8 Uart_idDevice1User_cu8;

__PRAGMA_USE__hwe__1_5ms__constant__x8__END

__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__START

// Structure for baud rate
extern Uart_regBaud_t Uart_Baud_s;

__PRAGMA_USE__hwe__1_5ms__InitRAM__s32__END


__PRAGMA_USE__CODE__hwe__NormalSpeed__START

// Function pointer used in Uart_DelayHigh_Proc
extern void (* const Uart_Device0_DelayHighMon_cpfn)(const Uart_t * Data_pcs);
extern void (* const Uart_Device1_DelayHighMon_cpfn)(const Uart_t * Data_pcs);

extern void Uart_HwaWrControl(UART_RegMap_t *Register_ps, bit32 dData_b32);
extern void Uart_HwaWrTx(UART_RegMap_t *Register_ps, uint32 dData_u32);
extern void Uart_HwaStartBRG(UART_RegMap_t *Register_ps);
extern void Uart_HwaStopBRG(UART_RegMap_t *Register_ps);
extern uint32 Uart_HwaRdStatus(const UART_RegMap_t *Register_ps);
extern uint32 Uart_HwaRdRx(const UART_RegMap_t *Register_ps);
extern void Uart_VoidDummy(void);
extern uint32 Uart_SetDelayHighSwCt(Uart_Ram_t *Ram_ps, uint32 tiDelayHigh_u32, bool stNew_b);
extern void Uart_DelayHighSwCtMon(const Uart_t * Data_pcs);
extern void Uart_DelayLowSwCtMon(const Uart_t *Data_pcs);
extern void Uart_DelayLowSwCtMonCheck(const Uart_t *Data_pcs, uint32 delayLow_u32, uint32 tiDelayBegin_u32);
extern void Uart_ResetLastActionTi(const Uart_t *Data_pcs);

__PRAGMA_USE__CODE__hwe__NormalSpeed__END

/* _UART_PRIV_H */
#endif
