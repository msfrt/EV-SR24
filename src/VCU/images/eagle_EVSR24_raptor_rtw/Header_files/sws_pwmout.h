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
 *    Administrative Information (automatically filled in by [N]estor)   *
 *************************************************************************
 *                                                                        
 * $Filename__:sws_pwmout.h$                                                          
 *                                                                        
 * $Author____:LEC5WI$                                                          
 *                                                                        
 * $Function__:customer specific PWM DIO ADC CAN configuration$                                                          
 *                                                                        
 *************************************************************************
 * $Repository:SDOM$                                                          
 * $User______:DAH5KOR$                                                          
 * $Date______:13.06.2016$                                                          
 * $Class_____:SWHDR$                                                          
 * $Name______:sws_pwmout$                                                          
 * $Variant___:NE_BSW_SWSH_M5$                                                          
 * $Revision__:2$                                                          
 * $Type______:H$                                                          
 * $State_____:AVAILABLE$                                                          
 *************************************************************************
 *                                                                        
 * $FDEF______:$                                                          
 *                                                                        
 *************************************************************************
 * Points to be taken into consideration when/if the H-file is modified:  
 *                                                                        
 * $LinkTo____:$                                                          
 *                                                                        
 *************************************************************************
 * List Of Changes                                                        
 *                                                                        
 * $History
 * 
 * NE_BSW_SWSH_M5; 2     13.06.2016 DAH5KOR
 *   A003 and A022 assigned for Cj135 heater pins
 * 
 * NE_BSW_SWSH_M5; 1     30.03.2016 DAH5KOR
 *   C01 test release file updates
 * 
 * NE_BSW_SWSH_M5; 0     17.12.2014 DAH5KOR
 *   First Software Delivery for New Eagle. Interface Functions implemented:
 *   1. PWMIN
 *   2. PWMOUT
 *   3. DIO
 *   4. ADCIN
 *   5. SCHEDULER
 *   6. MEMORY SECTIONS
 *   
 *   Complex driver interfaces are in SWADP.
 * 
 * EM_BSW_SWSH_M5; 0     23.12.2013 KKT4COB
 *   Model 5 SWSH project CIL implementation file
 * 
 * SH_BSW_1.1.0; 0     03.10.2013 KKT4COB
 *   
 * 
 * $                                                          
 *                                                                        
 *************************************************************************
</RBHead>*/                                                               
                                                                          
#ifndef     SWS_PWMOUT_H_ModId                                            
#define     SWS_PWMOUT_H_ModId                /* module identifier */     
                                                                          
                                                                          
/************************************************************************/
/*                 Check of system constants used in this module        */
/************************************************************************/
/*{system_constant_check...}*/                                            
                                                                          
/************************************************************************/
/*                 Global Definitions                                   */
/************************************************************************/
                                                                          
/* Define-Constants                                                     */
/* ================                                                     */
                                                                          
/*{constant_definition...}*/                                              
                                                                          
/* Macros Local To This Module                                          */
/* ===========================                                          */
                                                                          
/*{macro_definition...}*/                                                 
                                                                          
/* Exported RAM-Definitions                                             */
/* ========================                                             */
                                                                          
/* Definition of variables to be exported to other modules but not      */
/* relevant for application                                             */
                                                                          
/*{global_ram_definition...}*/                                            
                                                                          
/* Imported RAM-Definitions                                             */
/* ========================                                             */
                                                                          
/* Declaration of variables to be imported from other modules but not   */
/* relevant for application                                             */
                                                                          
/*{extern_ram_definition...}*/                                            
                                                                          
/* Global Prototypes                                                    */
/* =================                                                    */
                                                                          
/* Declarations (Prototypes) of functions                               */
                                                                          
/*{global_function_prototype...}*/                                        
                                                                          
/* Inline Functions                                                     */
/* ================                                                     */
                                                                          
/* Declarations of inline functions                                     */
                                                                          
/*{inline_function...}*/                                                  
                                                                          
                                                                          
#include "STD_TYPE.H"

	extern void swsh_PWMout_Period_Duty_ECUA046(uint32 Period, uint32 Duty); 
	extern void swsh_PWMout_Period_Duty_ECUA024(uint32 Period, uint32 Duty);   
	extern void swsh_PWMout_Period_Duty_ECUA010(uint32 Period, uint32 Duty); 
	extern void swsh_PWMout_Period_Duty_ECUA054(uint32 Period, uint32 Duty);   
	extern void swsh_PWMout_Period_Duty_ECUK088(uint32 Period, uint32 Duty);   
	extern void swsh_PWMout_Period_Duty_ECUK084(uint32 Period, uint32 Duty);  
	extern void swsh_PWMout_Period_Duty_ECUA023(uint32 Period, uint32 Duty);   
	extern void swsh_PWMout_Period_Duty_ECUA093(uint32 Period, uint32 Duty);   
	extern void swsh_PWMout_Period_Duty_ECUA045(uint32 Period, uint32 Duty);
	extern void swsh_PWMout_Period_Duty_ECUK057(uint32 Period, uint32 Duty); 
	

#endif
