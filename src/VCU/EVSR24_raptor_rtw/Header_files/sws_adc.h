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
 * $Filename__:sws_adc.h$
 *
 * $Author____:LEC5WI$
 *
 * $Function__:customer specific PWM DIO ADC CAN configuration$
 *
 *************************************************************************
 * $Repository:SDOM$
 * $User______:DAH5KOR$
 * $Date______:14.08.2017$
 * $Class_____:SWHDR$
 * $Name______:sws_adc$
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
 * NE_BSW_SWSH_M5; 1     14.08.2017 DAH5KOR
 *   The 5volt monitoring voltage made available via an interface.
 *   SSP monitoring DTCs made available.
 *
 * NE_BSW_SWSH_M5; 0     19.12.2014 DAH5KOR
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

#ifndef     SWS_ADC_H_ModId
#define     SWS_ADC_H_ModId                /* module identifier */


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

	extern uint16 swsh_Read_ADC_ECUA018 (void);  /*** analog input I_A_A018 ***/
	extern uint16 swsh_Read_ADC_ECUA059 (void);  /*** analog input I_A_A059 ***/
	extern uint16 swsh_Read_ADC_ECUA102 (void); /*** analog input I_A_A102 ***/
	extern uint16 swsh_Read_ADC_ECUA103 (void); /*** analog input I_A_A103 ***/
	extern uint16 swsh_Read_ADC_ECUA038 (void);  /*** analog input I_A_A038 ***/
	extern uint16 swsh_Read_ADC_ECUA040 (void);  /*** analog input I_A_A040 ***/
	extern uint16 swsh_Read_ADC_ECUA042 (void);  /*** analog input I_A_A042 ***/
	extern uint16 swsh_Read_ADC_ECUA037 (void);  /*** analog input I_A_A037 ***/
	extern uint16 swsh_Read_ADC_ECUA105 (void);  /*** analog input I_A_A105 ***/
	extern uint16 swsh_Read_ADC_ECUK030 (void);  /*** analog input I_A_K030 ***/
	extern uint16 swsh_Read_ADC_ECUK013 (void);  /*** analog input I_A_K013 ***/
	extern uint16 swsh_Read_ADC_ECUK011 (void);  /*** analog input I_A_K011 ***/
	extern uint16 swsh_Read_ADC_ECUK042 (void);  /*** analog input I_A_K042 ***/
	extern uint16 swsh_Read_ADC_ECUK058 (void);  /*** analog input I_A_K058 ***/
	extern uint16 swsh_Read_ADC_ECUK082 (void);  /*** analog input I_A_K082 ***/
	extern uint16 swsh_Read_ADC_ECUK065 (void);  /*** analog input I_A_K065 ***/
	extern uint16 swsh_Read_ADC_ECUA084 (void);  /*** analog input I_A_K084 ***/
	extern uint16 swsh_Read_ADC_ECUK034 (void);  /*** analog input I_A_K034 ***/
	extern uint16 swsh_Read_ADC_ECUA041 (void);  /*** analog input I_A_A041 ***/
	extern uint16 swsh_Read_ADC_ECUA082 (void);  /*** analog input I_A_A082 ***/
	extern uint16 swsh_Read_ADC_ECUA062 (void);  /*** analog input I_A_A062 ***/
	extern uint16 swsh_Read_ADC_ECUK035 (void);  /*** analog input I_A_K035 ***/
	extern uint16 swsh_Read_ADC_ECUA097 (void);  /*** analog input I_A_A097 ***/
	extern uint16 swsh_Read_ADC_ECUK041 (void);  /*** analog input I_A_K041 ***/
	extern uint16 swsh_Read_ADC_ECUK075 (void);  /*** analog input I_A_K075 ***/
	extern uint16 swsh_Read_ADC_ECUK045 (void);  /*** analog input I_A_K045 ***/
	extern uint16 swsh_Read_ADC_ECUA017 (void);  /*** analog input I_A_A017 ***/
	extern uint16 swsh_Read_ADC_ECUA016 (void);  /*** analog input I_A_A016 ***/
	extern uint16 swsh_Read_ADC_ECUK051 (void);  /*** analog input I_A_K051 ***/
	extern uint16 swsh_Read_ADC_ECUA019 (void);  /*** analog input I_A_A019 ***/
	extern uint16 swsh_Read_ADC_ECUA055 (void);  /*** analog input I_A_A055 ***/
	extern uint16 swsh_Read_ADC_5VS (void);  /*** analog input 5V supply ***/
	extern uint16 swsh_Read_ADC_ECUK021(void); /**Analog diagnostic input for K021 pin*/
#endif
