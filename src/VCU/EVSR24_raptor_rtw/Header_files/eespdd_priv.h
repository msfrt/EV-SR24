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
 * $Filename__:eespdd_priv.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:LE79BA$ 
 * $Date______:06.12.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:eespdd_priv$ 
 * $Variant___:1.17.0$ 
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
 * 1.17.0; 0     06.12.2010 LE79BA
 *   .
 * 
 * 1.16.0; 0     14.04.2010 MZT2FE
 *   B_EEP.16.0.0
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _EESPDD_PRIV_H
#define _EESPDD_PRIV_H


#define EESPDD_DEBUG

#define RETURN_STATUS                       (*(Eespdd_Order_s.stEespddDriver_pu8))
#define EESPDD_SET_TIMEOUT()                (Eespdd_tiSystemLook_u32 = Cpu_GetSysTimePart(TIM0))

/* debug support */
#ifdef  EESPDD_DEBUG
    #define EESPDD_ERROR(ERROR)             (Eespdd_Error (ERROR))
    #define EESPDD_SET_WRITEFLAG(VALUE)     (Eespdd_stWriteFlag_u8 = (VALUE))
    /* MISRA RULE 90,96 VIOLATION: This is a function like macro, warnings will be ignored. */
    #define EESPDD_INIT_ERROR()             if(Eespdd_stInit_ui == EESPDD_INIT_STATUS_NOT_OK) \
                                            {                                                 \
                                                Eespdd_Error (E_TIMEOUT_INIT);                \
                                            }                                                 \
                                            do {} while(0)
#else
    /* MISRA RULE 90,96 VIOLATION: Do {} while(0) is needed that ";" after call of macro stands not
                                   alone. Compiler will translate it to nothing. */
    #define EESPDD_ERROR(ERROR)             do {} while(0)
    #define EESPDD_SET_WRITEFLAG(VALUE)     do {} while(0)
    #define EESPDD_INIT_ERROR()             do {} while(0)
#endif



#define EESPDD_MSK_WIP                        0x01  /* "0000|0001" Write In Process latch-mask */
#define EESPDD_MSK_WEL                        0x02  /* "0000|0010" Write Enable latch-mask */
#define EESPDD_MSK_BP                         0x8C  /* "1000|1100" Block Protection mask */

#define EESPDD_COMMAND_INDEX                  0x00
#define EESPDD_FIRST_ADDRESS_INDEX            0x01
#define EESPDD_SECOND_ADDRESS_INDEX           0x02
#define EESPDD_DATA_INDEX                     0x03

#define FILL_BYTE     0x00

/* states during initialization */
#define EESPDD_INIT_STATUS_OK                 0x00u
#define EESPDD_INIT_STATUS_NOT_OK             0x01u

enum
{
    /* Statemachine */
    S_READY         = 0x00,
    S_START_READ    = 0x01,
    S_START_WRITE   = 0x02,
    S_PAGE_READ     = 0x03,
    S_PAGE_WRITE    = 0x04,
    S_COMPARE       = 0x05,
    S_VERIFY        = 0x06,

    /* Sub-Statemachine Page Write */
    S_PAGE_WRITE_1  = 0x10,
    S_PAGE_WRITE_2  = 0x11,
    S_PAGE_WRITE_3  = 0x12,
    S_PAGE_WRITE_4  = 0x13,
    S_PAGE_WRITE_5  = 0x14,

    /* Sub-Statemachine Page Read */
    S_PAGE_READ_1   = 0x20,
    S_PAGE_READ_2   = 0x21,
    S_PAGE_READ_3   = 0x22,
    S_PAGE_READ_4   = 0x23
};

typedef enum
{
    E_TIMEOUT_READ,     /* must be first error code */
    E_TIMEOUT_WRITE,
    E_TIMEOUT_MODIFY,
    E_TIMEOUT_INIT,
    E_ORDER_DENIED,
    E_INTERNAL_ERROR,
    E_SPI_ACCESS_PR1,
    E_SPI_OLD_DATA_PR1,
    E_SPI_ACCESS_PW1,
    E_SPI_ACCESS_PW2,
    E_SPI_ACCESS_PW3,
    E_SPI_OLD_DATA_PW1,
    E_VERIFY_END,
    /* insert here further error codes */
    E_END
} Eespdd_ErrorMessages_t;

typedef struct
{
    uint8 errorCtr;
}Eespdd_Debug_t;



__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern uint8        Eespdd_stGlobal_u8;
extern uint8        Eespdd_stNextRead_u8;
extern uint8        Eespdd_stRead_u8;
extern uint8        Eespdd_stWrite_u8;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END

__PRAGMA_USE__eep__50ms_1s__constant__x8__START
extern const uint8  Eespdd_numPageSize_cu8;
__PRAGMA_USE__eep__50ms_1s__constant__x8__END

__PRAGMA_USE__eep__50ms_1s__RAM__x16__START
extern uint16       Eespdd_numOfBytesCur_u16;
__PRAGMA_USE__eep__50ms_1s__RAM__x16__END

__PRAGMA_USE__eep__50ms_1s__RAM__x32__START
extern uint32       Eespdd_tiSystemLook_u32;
__PRAGMA_USE__eep__50ms_1s__RAM__x32__END

__PRAGMA_USE__eep__50ms_1s__constant__x32__START
extern const uint32 Eespdd_tiTimeout_cu32;
__PRAGMA_USE__eep__50ms_1s__constant__x32__END

__PRAGMA_USE__eep__50ms_1s__RAM__s32__START
extern Eespdd_Order_t       Eespdd_Order_s;
__PRAGMA_USE__eep__50ms_1s__RAM__s32__END

__PRAGMA_USE__eep__50ms_1s__constant__s32__START
extern const Spi_SeqDef_t   Eespdd_DataSeq_cs;
extern const Spi_SeqDef_t   Eespdd_WriteEnable_cs;
extern const Spi_SeqDef_t   Eespdd_RdStatusReg_cs;
__PRAGMA_USE__eep__50ms_1s__constant__s32__END

__PRAGMA_USE__CODE__eep__LowSpeed__START
extern uint Eespdd_CheckTimeout(void);
/* MISRA RULE 16.3 VIOLATION: No parameter identifier is needed */
extern void Eespdd_Error (uint8);
__PRAGMA_USE__CODE__eep__LowSpeed__END

#ifdef EESPDD_DEBUG
__PRAGMA_USE__eep__50ms_1s__RAM__arr8__START
extern Eespdd_Debug_t  Eespdd_ErrorDebug_s[E_END];
__PRAGMA_USE__eep__50ms_1s__RAM__arr8__END

__PRAGMA_USE__eep__50ms_1s__RAM__x16__START
extern uint16   	   Eespdd_ctrErrorDebug_u16;
__PRAGMA_USE__eep__50ms_1s__RAM__x16__END

__PRAGMA_USE__eep__50ms_1s__RAM__x8__START
extern uint8           Eespdd_stWriteFlag_u8;
extern uint8           Eespdd_LastErrorDebug_u8;
__PRAGMA_USE__eep__50ms_1s__RAM__x8__END
#endif


/* _EESPDD_PRIV_H */
#endif
