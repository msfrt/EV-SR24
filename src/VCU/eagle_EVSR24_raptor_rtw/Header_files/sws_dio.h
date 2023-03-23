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
 * $Filename__:sws_dio.h$
 *
 * $Author____:LEC5WI$
 *
 * $Function__:customer specific PWM DIO ADC CAN configuration$
 *
 *************************************************************************
 * $Repository:SDOM$User______:$
 * $Date______:15.10.2018$
 * $Class_____:SWHDR$
 * $Name______:sws_dio$
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
 * NE_BSW_SWSH_M5; 1     15.10.2018 DAH5KOR
 *   Configuration for the Lambda Sensor LSF 4.2 heater resistance switching.
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

#ifndef     SWS_DIO_H_ModId
#define     SWS_DIO_H_ModId                /* module identifier */


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


/*Digital Outputs*/

	extern void swsh_DIO_out_ECUK089(bool b);  /*** ECU pin K089  ***/
	extern void swsh_DIO_out_ECUK053(bool b);  /*** ECU Pin K053 ---  ---  ***/
	extern void swsh_DIO_out_ECUK072(bool b);  /*** ECU Pin K072 ---  ---  ***/
	extern void swsh_DIO_out_ECUK020(bool b);  /*** ECU Pin K020 ---  ---  ***/
	extern void swsh_DIO_out_ECUK036(bool b);  /*** ECU Pin K036 ---  ---  ***/
	extern void swsh_DIO_out_ECUK055(bool b);  /*** ECU Pin K055 ---  ---  ***/
	extern void swsh_DIO_out_ECUK038(bool b);  /*** ECU Pin K038 ---  ---  ***/
	extern void swsh_DIO_out_ECUK037(bool b);  /*** ECU Pin K037 ---  ---  ***/
	extern void swsh_DIO_out_ECUK056(bool b);  /*** ECU Pin K056 ---  ---  ***/
	extern void swsh_DIO_out_ECUK039(bool b);  /*** ECU Pin K039 ---  ---  ***/
	extern void swsh_DIO_out_ECUK012(bool b);  /*** ECU Pin K012  ---  ***/
	extern void swsh_DIO_out_ECUK019(bool b);  /*** ECU Pin K019 ---  ---  ***/
	extern void swsh_DIO_out_ECUA033(bool b);  /*** ECU Pin A033 ---  ---  ***/
	extern void swsh_DIO_out_ECUK073(bool b);  /*** ECU Pin K073 ---  ---  ***/
	extern void swsh_DIO_out_ECUK071(bool b);  /*** ECU Pin K071 ---  ---  ***/
	extern void swsh_DIO_out_ECUK021(bool b);  /*** ECU Pin K021 ---  ---  ***/
	extern void swsh_DIO_out_ECUK069(bool b);  /*** ECU Pin K069 ---  ---  ***/
	extern void swsh_DIO_out_ECUK070(bool b);  /*** ECU Pin K070 ---  ---  ***/
	extern void swsh_DIO_out_ECUK054(bool b);  /*** ECU Pin K054  ---  ---  ***/
	extern void swsh_DIO_out_ECUK059(bool b);  /*** ECU Pin K059---  ---  ***/
	extern void swsh_DIO_out_ECUA004(bool b);  /*** ECU Pin A004---  ---  ***/
	extern void swsh_DIO_out_ECUA094(bool b);  /*** ECU Pin A094 ---  ---  ***/
	extern void swsh_DIO_out_ECUA011(bool b);  /*** ECU Pin A011---  ---  ***/
	extern void swsh_DIO_out_ECUA031(bool b);  /*** ECU Pin A031 ---  ---  ***/
	extern void swsh_DIO_out_ECUA009(bool b);  /*** ECU Pin A009 ---  ---  ***/
	extern void swsh_DIO_out_ECUA025(bool b);  /*** ECU Pin A025  ---  ---  ***/
	extern void swsh_DIO_out_ECUA075(bool b);  /*** ECU Pin A075---  ---  ***/
	extern void swsh_DIO_out_ECUA001(bool b);  /*** ECU Pin A001 ---  ---  ***/
	extern void swsh_DIO_out_ECUA002(bool b);  /*** ECU Pin A002---  ---  ***/

/*Digital Inputs*/


	extern bool swsh_DIO_in_ECUK049(void);  /*** ECU Pin K049 ---  ---  ***/
	extern bool swsh_DIO_in_ECUK016(void);  /*** ECU Pin K016 ---  ---  ***/
	extern bool swsh_DIO_in_ECUK028(void);  /*** ECU Pin K028 ---  ---  ***/
	extern bool swsh_DIO_in_ECUK033(void);  /*** ECU Pin K033 ---  ---  ***/
	extern bool swsh_DIO_in_ECUK047(void);  /*** ECU Pin K047 ---  ---  ***/
	extern bool swsh_DIO_in_ECUK017(void);  /*** ECU Pin K017 ---  ---  ***/
	extern bool swsh_DIO_in_ECUA057(void);  /*** ECU Pin A057 ---  ---  ***/
	extern bool swsh_DIO_in_ECUK014(void);  /*** ECU Pin K014 ---  ---  ***/

/*Lambda Sensor Pull Up Functions*/
	extern void swsh_Write_LSFRiSwitch(uint8 SensorNumber, bool Value);

#endif
