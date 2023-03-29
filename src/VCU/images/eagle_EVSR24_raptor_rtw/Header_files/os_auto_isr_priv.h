/*File generated from os_postprocess.pl
***************************************************************************************************
*
* (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
*
***************************************************************************************************/

/* Privat header: ISR function prototypes */

#ifndef _OS_AUTO_ISR_PRIV_H
#define _OS_AUTO_ISR_PRIV_H

extern void Rtmo_MeasureInterruptBegin(void); /* Process for ISR */
extern void B2C_swshkrsyn(void); /* Process for ISR */
extern void KnDet_SubBlock_ISR(void); /* Process for ISR */
extern void ESC_StrtPreTask(void); /* Process for ISR */
extern void Uart_Asc0RIR(void); /* Process for ISR */
extern void Can_TransmitIntr(void); /* Process for ISR */
extern void Can_ReceiveIntr(void); /* Process for ISR */
extern void Can_BusoffIntr(void); /* Process for ISR */
extern void Cj135_RdMeasVal_Proc(void); /* Process for ISR */
extern void Spi_Ssc0QueueHandle_Proc(void); /* Process for ISR */
extern void Spi_Ssc1QueueHandle_Proc(void); /* Process for ISR */
extern void KnDet_MeasWin_ISR(void); /* Process for ISR */
extern void Pmd_TimerInt_Proc(void); /* Process for ISR */
extern void Dma_ErrorInt_Proc(void); /* Process for ISR */
extern void Pcp_ErrorHandler_Proc(void); /* Process for ISR */
extern void SyC_UnderVltgIsr_Proc(void); /* Process for ISR */
extern void Rtmo_MeasureBeginInt(void); /* Process for ISR */
extern void SyC_ShutdownIsr_Proc(void); /* Process for ISR */


extern void isr_OS_Int0(void);
extern void isr_OS_Int1(void);
extern void isr_OS_Int2(void);
extern void isr_OS_Int3(void);
extern void isr_OS_Int4(void);
extern void isr_OS_Int5(void);
extern void isr_OS_Int6(void);
extern void isr_OS_Int7(void);
extern void isr_OS_Int8(void);
extern void isr_OS_Int9(void);
extern void isr_OS_Int10(void);
extern void isr_OS_Int11(void);
extern void isr_OS_Int12(void);
extern void isr_OS_Int13(void);
extern void isr_OS_Int14(void);
extern void isr_OS_Int15(void);
extern void isr_OS_Int16(void);
extern void isr_OS_Int17(void);
extern void isr_OS_Int18(void);
extern void isr_OS_Int19(void);
extern void isr_OS_Int20(void);
extern void isr_OS_Int21(void);
extern void isr_OS_Int22(void);
extern void isr_OS_Int23(void);
extern void isr_OS_Int24(void);
extern void isr_OS_Int25(void);
extern void isr_OS_Int26(void);
extern void isr_OS_Int27(void);
extern void isr_OS_Int28(void);
extern void isr_OS_Int29(void);
extern void isr_OS_Int30(void);
extern void isr_OS_Int31(void);
extern void isr_OS_Int32(void);
extern void isr_OS_Int33(void);
extern void isr_OS_Int34(void);
extern void isr_OS_Int35(void);
extern void isr_OS_Int36(void);
extern void isr_OS_Int37(void);
extern void isr_OS_Int38(void);
extern void isr_OS_Int39(void);
extern void isr_OS_Int40(void);
extern void isr_OS_Int41(void);
extern void isr_OS_Int42(void);
extern void isr_OS_Int43(void);
extern void isr_OS_Int44(void);
extern void isr_OS_Int45(void);
extern void isr_OS_Int46(void);
extern void isr_OS_Int47(void);
extern void isr_OS_Int48(void);
extern void isr_OS_Int49(void);
extern void isr_OS_Int50(void);
extern void isr_OS_Int51(void);
extern void isr_OS_Int52(void);
extern void isr_OS_Int53(void);
extern void isr_OS_Int54(void);
extern void isr_OS_Int55(void);
extern void isr_OS_Int56(void);
extern void isr_OS_Int57(void);
extern void isr_OS_Int58(void);
extern void isr_OS_Int59(void);

#endif
