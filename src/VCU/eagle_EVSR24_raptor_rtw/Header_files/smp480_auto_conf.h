/*
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
 */

#ifndef _SMP480_AUTO_CONF_H
#define _SMP480_AUTO_CONF_H

#include "smp480_priv.h"


/*================================================================================================*/
/*-- number of configured chips --*/
#define SMP480_NUM_ICS  1


/*================================================================================================*/
/*-- declaration of SPI-Sequence-Buffer(s)  --*/
__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_ReadDeviceIdAndRev_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_RequestPressure_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_ReadPressure_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_RequestTemperature_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_ReadTemperature_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_WriteStatusReg_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_ReadStatusReg_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_ResetCmdPart1_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_ResetCmdPart2_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_ReserveBus_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_MaskIntBusErrPart1_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END

__PRAGMA_USE__hwe__10ms__constant__s32__START
extern const Spi_SeqDef_t Smp480_MaskIntBusErrPart2_cs[];
__PRAGMA_USE__hwe__10ms__constant__s32__END




/*================================================================================================*/
/*- declaration of SPI-Sequence-Constants(s) for chip 1 -*/
/*--------------------------------------------------------*
 * Smp480_1_ReadDeviceIdAndRev
 *-------------------------------------------------------*/
#define SMP480_1_READ_DEVICEIDANDREV_SEQ \
        ( (SMP480_READ_DEVICEIDANDREV >> 16) & 0xFFFF ) , \
        ( (SMP480_READ_DEVICEIDANDREV      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_RequestPressure
 *-------------------------------------------------------*/
#define SMP480_1_REQUESTPRESSURE_SEQ \
        ( (SMP480_REQUESTPRESSURE >> 16) & 0xFFFF ) , \
        ( (SMP480_REQUESTPRESSURE      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_ReadPressure
 *-------------------------------------------------------*/
#define SMP480_1_READ_PRESSURE_SEQ \
        ( (SMP480_READ_PRESSURE >> 16) & 0xFFFF ) , \
        ( (SMP480_READ_PRESSURE      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_RequestTemperature
 *-------------------------------------------------------*/
#define SMP480_1_REQUESTTEMPERATURE_SEQ \
        ( (SMP480_REQUESTTEMPERATURE >> 16) & 0xFFFF ) , \
        ( (SMP480_REQUESTTEMPERATURE      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_ReadTemperature
 *-------------------------------------------------------*/
#define SMP480_1_READ_TEMPERATURE_SEQ \
        ( (SMP480_READ_TEMPERATURE >> 16) & 0xFFFF ) , \
        ( (SMP480_READ_TEMPERATURE      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_WriteStatusReg
 *-------------------------------------------------------*/
#define SMP480_1_WRITE_STATUSREG_SEQ \
        ( (SMP480_WRITE_STATUSREG >> 16) & 0xFFFF ) , \
        ( (SMP480_WRITE_STATUSREG      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_ReadStatusReg
 *-------------------------------------------------------*/
#define SMP480_1_READ_STATUSREG_SEQ \
        ( (SMP480_READ_STATUSREG >> 16) & 0xFFFF ) , \
        ( (SMP480_READ_STATUSREG      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_ResetCmdPart1
 *-------------------------------------------------------*/
#define SMP480_1_RESETCMDPART1_SEQ \
        ( (SMP480_RESETCMDPART1 >> 16) & 0xFFFF ) , \
        ( (SMP480_RESETCMDPART1      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_ResetCmdPart2
 *-------------------------------------------------------*/
#define SMP480_1_RESETCMDPART2_SEQ \
        ( (SMP480_RESETCMDPART2 >> 16) & 0xFFFF ) , \
        ( (SMP480_RESETCMDPART2      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_ReserveBus
 *-------------------------------------------------------*/
#define SMP480_1_RESERVEBUS_SEQ \
         SMP480_RESERVEBUS  
/*--------------------------------------------------------*
 * Smp480_1_MaskIntBusErrPart1
 *-------------------------------------------------------*/
#define SMP480_1_MASKINTBUSERRPART1_SEQ \
        ( (SMP480_MASKINTBUSERRPART1 >> 16) & 0xFFFF ) , \
        ( (SMP480_MASKINTBUSERRPART1      ) & 0xFFFF ) 
/*--------------------------------------------------------*
 * Smp480_1_MaskIntBusErrPart2
 *-------------------------------------------------------*/
#define SMP480_1_MASKINTBUSERRPART2_SEQ \
        ( (SMP480_MASKINTBUSERRPART2 >> 16) & 0xFFFF ) , \
        ( (SMP480_MASKINTBUSERRPART2      ) & 0xFFFF ) 



/* _SMP480_AUTO_CONF_H */
#endif
