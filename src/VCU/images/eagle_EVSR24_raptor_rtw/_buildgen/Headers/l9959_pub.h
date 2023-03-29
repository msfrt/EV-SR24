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
 * $Filename__:l9959_pub.h$
 *
 * $Author____:ROG2SI$
 *
 * $Function__:initial version$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:ROG2SI$
 * $Date______:07.03.2013$
 * $Class_____:SWHDR$
 * $Name______:l9959_pub$
 * $Variant___:1.4.4$
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
 * 1.4.4; 0     07.03.2013 ROG2SI
 *   SPI write HW bug fix
 *   Send each write register command 4 times 
 *   Read back register
 *   compare write with read data
 *   Redo 4 time register writing exact one time
 * 
 * 1.4.3; 0     25.01.2013 ROG2SI
 *   Wrong bit position of overvoltage defined in macro. 
 *   
 *   Macro used by Pwr API to extract the info of overvoltage occurence. 
 *   
 *   Pwr API returns always no overvoltage error detected. 
 *   
 *   OCWDA normally is the only user of this Pwr API. 
 *   
 *   
 *   
 *   HW reactions: 
 *   
 *   L9959 switches output port off in case of overvoltage. 
 *   
 *   If the device has reached a certain engine speed threshold  (configurable 
 *   in MoCSOP) 
 *   
 *   overvoltage is latching is activated by MoCSOP 
 *   
 *   
 *   
 *   Latching on = stages stays off after reaching normal voltage again. 
 *   
 *   Latching off = stages are enabled again.  
 *   
 *   
 *   
 *   Summary: HW reaction are correct.  OCWDA is not informed about overvoltage.
 * 
 * 1.4.0; 0     10.10.2012 ROG2SI
 *   API change  new immediate parameter added:
 *   L9959_SetOutPeriod(uint numDev_ui, uint numStage_ui, uint32 Period_u32, 
 *   bool isImmediate_b);
 *   L9959_SetOutDtyCyc(uint numDev_ui, uint numStage_ui, sint16 Duty_s16, bool 
 *   isImmediate_b);
 * 
 * 1.3.0; 0     04.04.2012 ROG2SI
 *   Adaptions to HW C-Sample
 * 
 * 1.2.0; 0     23.09.2011 BIL1HC
 *   Hbr update: remove macro interface definition, using function pointer 
 *   interface. Change the interfaces to adapt the HBr standard
 * 
 * 1.0.0; 5     03.06.2011 ROG2SI
 *   changes after review
 * 
 * 1.0.0; 4     27.05.2011 ROG2SI
 *   changes after review
 * 
 * 1.0.0; 3     23.05.2011 ROG2SI
 *   develop version
 * 
 * 1.0.0; 2     06.04.2011 ROG2SI
 *   develop version
 * 
 * 1.0.0; 1     09.03.2011 ROG2SI
 *   further development
 * 
 * $
 *
 *************************************************************************
</RBHead>*/

#ifndef _L9959_PUB_H
#define _L9959_PUB_H

/* export header */
#include "srvb.h"
/* Definition for SPI sequences */
#define L9959_RD_ID_CMD         0x0400
#define L9959_RD_REV_CMD        0x0600
#define L9959_RD_DIA1_CMD       0x1000
#define L9959_RD_DIA2_CMD       0x1800
#define L9959_RD_CONFIG_CMD     0x0800
#define L9959_RD_STATCON_CMD    0x0C00
#define L9959_WR_DIA1_CMD       0x3000
#define L9959_WR_DIA2_CMD       0x3800
#define L9959_WR_CONFIG_CMD     0x2800
#define L9959_WR_STATCON_CMD    0x2C00

#define L9959_DIAG_SEQ_LEN          3u
#define L9959_DIAG_SEQ              L9959_RD_DIA1_CMD,      \
                                    L9959_RD_DIA2_CMD,      \
                                    L9959_RD_STATCON_CMD

#define L9959_MON_RD_DIAG_SEQ_LEN   1u
#define L9959_MON_RD_DIAG_SEQ       L9959_RD_DIA1_CMD

#define L9959_WR_DIAG_SEQ_LEN       2u
#define L9959_WR_DIAG_SEQ           L9959_WR_DIA1_CMD,      \
                                    L9959_WR_DIA2_CMD

#define L9959_WR_DIAG_BUG_SEQ_LEN   8u
#define L9959_WR_DIAG_BUG_SEQ       L9959_WR_DIA1_CMD,      \
                                    L9959_WR_DIA1_CMD,      \
                                    L9959_WR_DIA1_CMD,      \
                                    L9959_WR_DIA1_CMD,      \
                                    L9959_WR_DIA2_CMD,      \
                                    L9959_WR_DIA2_CMD,      \
                                    L9959_WR_DIA2_CMD,      \
                                    L9959_WR_DIA2_CMD

#define L9959_TOG_CONFIG_SEQ_LEN   2u
#define L9959_TOG_CONFIG_SEQ       L9959_WR_CONFIG_CMD,      \
                                   L9959_WR_CONFIG_CMD

#define L9959_TOG_CONFIG_BUG_SEQ_LEN   8u
#define L9959_TOG_CONFIG_BUG_SEQ   L9959_WR_CONFIG_CMD,      \
                                   L9959_WR_CONFIG_CMD,      \
                                   L9959_WR_CONFIG_CMD,      \
                                   L9959_WR_CONFIG_CMD,      \
                                   L9959_WR_CONFIG_CMD,      \
                                   L9959_WR_CONFIG_CMD,      \
                                   L9959_WR_CONFIG_CMD,      \
                                   L9959_WR_CONFIG_CMD

#define L9959_RD_CONFIG_SEQ_LEN     1u
#define L9959_RD_CONFIG_SEQ         L9959_RD_CONFIG_CMD

#define L9959_WR_CONFIG_SEQ_LEN     1u
#define L9959_WR_CONFIG_SEQ         L9959_WR_CONFIG_CMD

#define L9959_WR_CONFIG_BUG_SEQ_LEN 4u
#define L9959_WR_CONFIG_BUG_SEQ     L9959_WR_CONFIG_CMD,    \
                                    L9959_WR_CONFIG_CMD,    \
                                    L9959_WR_CONFIG_CMD,    \
                                    L9959_WR_CONFIG_CMD

#define L9959_RD_STATCON_SEQ_LEN    1u
#define L9959_RD_STATCON_SEQ        L9959_RD_STATCON_CMD

#define L9959_WR_STAT_SEQ_LEN       1u
#define L9959_WR_STAT_SEQ           L9959_WR_STATCON_CMD

#define L9959_WR_STAT_BUG_SEQ_LEN   4u
#define L9959_WR_STAT_BUG_SEQ       L9959_WR_STATCON_CMD,   \
                                    L9959_WR_STATCON_CMD,   \
                                    L9959_WR_STATCON_CMD,   \
                                    L9959_WR_STATCON_CMD

#define L9959_MON_STAT_SEQ_LEN      1u
#define L9959_MON_STAT_SEQ          L9959_WR_STATCON_CMD


#define L9959_MON_STAT_BUG_SEQ_LEN  5u
#define L9959_MON_STAT_BUG_SEQ      L9959_WR_STATCON_CMD,   \
                                    L9959_WR_STATCON_CMD,   \
                                    L9959_WR_STATCON_CMD,   \
                                    L9959_WR_STATCON_CMD,   \
                                    L9959_RD_STATCON_CMD

#define L9959_RD_REV_SEQ_LEN        1u
#define L9959_RD_REV_SEQ            L9959_RD_REV_CMD

#define L9959_RD_ID_SEQ_LEN         1u
#define L9959_RD_ID_SEQ             L9959_RD_ID_CMD

#define L9959_TEST_UPPER_THRESHOLD  (L9959_WR_STATCON_CMD | 0x38)
#define L9959_TEST_LOWER_THRESHOLD  (L9959_WR_STATCON_CMD | 0x78)
#define L9959_TEST_RESET_THRESHOLD  (L9959_WR_STATCON_CMD | 0xD8)
#define L9959_TEST_NORMAL_THRESHOLD (L9959_WR_STATCON_CMD | 0xF8)

#define L9959_CLR_DIAGBITS_MSK      0xFFE7   /* value of the checkbytes */

/* Definitions for pushed PWR interface */


#define L9959_BP_OV     0x0
#define L9959_BP_UV     0x1
#define L9959_BP_ABE    0x2

#define L9959_MSK_OV    0x1
#define L9959_MSK_ABE   0x1
#define L9959_MSK_UV    0x1

/**************************************************************************************************/
/* necessary redefines for "new" pwr module which supports several                                */
/* modules (e.g. R2S2,CJ945,TLE8209)                                                              */
/**************************************************************************************************/
#define L9959_VMT_BP_OV       L9959_BP_OV
#define L9959_VMT_MSK_OV      L9959_MSK_OV
#define L9959_VMT_BP_UV       L9959_BP_UV
#define L9959_VMT_MSK_UV      L9959_MSK_UV

/*
 ******************************************************************************
 * Extern declarations
 ******************************************************************************
 */
__PRAGMA_USE__hwe__10ms__RAM__x8__START
extern uint8 L9959_stIniFinished_u8;
__PRAGMA_USE__hwe__10ms__RAM__x8__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
/* ABE interfaces */
extern bool L9959_ActRdStatcon(void);
extern bit8 L9959_GetStatcon(uint16 numDev_u16, uint16 xBitPos_u16, uint16 xBitMask_u16);

/* peripherial monitoring interfaces*/
extern bit32 L9959_CheckPmError(uint32 numDev_u32);

/* peripherial voltage monitoring interfaces */
extern bit8 L9959_Pvmt(uint dTxData_ui, uint numDev_ui);

/*control interfaces */
extern bool L9959_SetOutPeriod(uint numDev_ui, uint numStage_ui, uint32 Period_u32, bool isImmediate_b);
extern bool L9959_SetOutDtyCyc(uint numDev_ui, uint numStage_ui, sint16 Duty_s16, bool isImmediate_b);
extern uint8 L9959_IntGetState(uint numDev_ui, uint numStage_ui, bool Mode_b);
extern bool L9959_IntSwitchOn(uint numDev_ui, uint numStage_ui, bool Mode_b);
extern bool L9959_IntSwitchOff(uint numDev_ui, uint numStage_ui, bool Mode_b);

/*monitoring interfaces */
extern bool L9959_Mon_End(uint numDev_ui, uint numStage_ui);
extern bool L9959_Mon_Start(uint numDev_ui, uint numStage_ui);
extern bool L9959_Mon_ReqStatus(uint numDev_ui, uint numStage_ui);

/*diagnosis interfaces */
extern uint32 L9959_GetErrorInfo(uint numDev_ui, uint numStage_ui, bool diagInfoSel_b);
extern bool L9959_ReqTstPulse(uint numDev_ui, uint numStage_ui);
extern bool L9959_ReqSwtOffMode_Diag(uint numDev_ui, uint numStage_ui);
extern uint8 L9959_StSwtOffModeDiag(uint numDev_ui, uint numStage_ui);

/* processes */
extern void L9959_Proc_Ini(void);
extern void L9959_Tx_Proc_10ms(void);
extern void L9959_Rx_Proc_10ms(void);
extern void L9959_Proc_2ms(void);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

#endif
