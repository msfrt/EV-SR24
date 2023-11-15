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
 * $Filename__:hbr_pub.h$
 *
 * $Author____:PMR2KOR$
 *
 * $Function__:Header files$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:BIL1HC$
 * $Date______:24.09.2012$
 * $Class_____:SWHDR$
 * $Name______:hbr_pub$
 * $Variant___:1.6.0$
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
 * 1.6.0; 0     24.09.2012 BIL1HC
 *   HBR setOut immediately support
 * 
 * 1.4.0; 5     31.10.2011 BIL1HC
 *   New mask for SWTOFFDIAG
 * 
 * 1.4.0; 4     07.10.2011 BIL1HC
 *   Hbr update: remove macro interface definition, using function pointer 
 *   interface.
 *   The behavior is unchanged when theres no HBR configured.
 * 
 * 1.4.0; 3     22.09.2011 BIL1HC
 *   Hbr update: remove macro interface definition, using function pointer 
 *   interface.
 * 
 * 1.4.0; 2     17.08.2011 PTE1KOR
 *   To add the #defines o power stages
 * 
 * 1.4.0; 1     17.08.2011 PTE1KOR
 *   To provide interface functions instead of macros
 * 
 * 1.4.0; 0     17.08.2011 PTE1KOR
 *   To provide function interface instead of Macros
 * 
 * 1.0.0; 0     04.08.2010 PMR2KOR
 *   HBR Header files
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/


#ifndef _HBR_PUB_H
#define _HBR_PUB_H
/**
 ***************************************************************************************************
 * \moduledescription
 *                  Peripheral module driver for the Monitoring module of the Cy315/Cy320
 *
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Re-Export Section: include structural comp header if necessary (this should be an exception)
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * FCT Section: include public header of the atomic component Y
 ***************************************************************************************************
 */
#ifdef HBR_LAYER_USED

/* Mask value for Hbr_StSwtOffModeDiag return */
#define HBR_SWTOFFDIAG_OL_MSK   0x01
#define HBR_SWTOFFDIAG_SCG_MSK  0x02
#define HBR_SWTOFFDIAG_SCB_MSK  0x04
#define HBR_SWTOFFDIAG_SCOL_MSK 0x08

/* Control Interfaces */
extern bool Hbr_SwitchOn(Hbr_Signal_t signal);
extern bool Hbr_SwitchOff(Hbr_Signal_t signal);
extern bool Hbr_SetOutDtyCyc(Hbr_Signal_t signal, sint16 duty_s16);
extern bool Hbr_SetOutDtyCycImmediate(Hbr_Signal_t signal, sint16 duty_s16);
extern bool Hbr_SetOutPeriod(Hbr_Signal_t signal, uint32 period_u32);
extern bool Hbr_SetOutPeriodImmediate(Hbr_Signal_t signal, uint32 period_u32);
extern uint8 Hbr_GetStatus(Hbr_Signal_t signal);

/* Diagnosis Interfaces */
extern uint32 Hbr_GetDiagInfo(Hbr_Signal_t signal, bool diagInfoSel_b);
extern bool Hbr_ReqTstPulse(Hbr_Signal_t signal);
extern bool Hbr_ReqSwtOffMode_Diag(Hbr_Signal_t signal);
extern uint8 Hbr_StSwtOffModeDiag(Hbr_Signal_t signal);

/* Monitoring interfaces */
extern bool Hbr_Mon_Start(Hbr_Signal_t signal);
extern bool Hbr_Mon_ReqStatus(Hbr_Signal_t signal);
extern uint8 Hbr_Mon_GetStatus(Hbr_Signal_t signal);
extern bool Hbr_Mon_End(Hbr_Signal_t signal);
extern bool Hbr_Mon_SwitchOn(Hbr_Signal_t signal);
extern bool Hbr_Mon_SwitchOff(Hbr_Signal_t signal);

#endif   /* HBR_LAYER_USED */

#endif   /* _HBR_PUB_H */
