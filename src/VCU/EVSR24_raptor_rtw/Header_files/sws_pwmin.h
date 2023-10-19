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
 * $Filename__:sws_pwmin.h$                                                          
 *                                                                        
 * $Author____:LEC5WI$                                                          
 *                                                                        
 * $Function__:customer specific PWM DIO ADC CAN configuration$                                                          
 *                                                                        
 *************************************************************************
 * $Repository:SDOM$                                                          
 * $User______:DAH5KOR$                                                          
 * $Date______:30.03.2016$                                                          
 * $Class_____:SWHDR$                                                          
 * $Name______:sws_pwmin$                                                          
 * $Variant___:NE_BSW_SWSH_M5$                                                          
 * $Revision__:1$                                                          
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
                                                                          
#ifndef     SWS_PWMIN_H_ModId                                             
#define     SWS_PWMIN_H_ModId                /* module identifier */      
                                                                          
                                                                          
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

	extern bool swsh_PWMin_Period_Duty_ECUK018 (uint32 *Period, uint32 *Duty);  /*** ECU Pin K018 ***/
	extern bool swsh_PWMin_Period_Duty_ECUK052 (uint32 *Period, uint32 *Duty);  /*** ECU Pin K052 ***/
	extern bool swsh_PWMin_Period_Duty_ECUA035 (uint32 *Period, uint32 *Duty);  /*** ECU Pin A035 ***/

	
	
	extern bool swsh_PWMin_Period_Duty_ECUK029 (uint32 *Period, uint32 *Duty);  /*** ECU Pin K029 ***/
	extern bool swsh_PWMin_Period_Duty_ECUK048 (uint32 *Period, uint32 *Duty);  /*** ECU Pin K048 ***/
	

#endif
