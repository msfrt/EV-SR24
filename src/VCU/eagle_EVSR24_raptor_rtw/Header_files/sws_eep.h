/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:sws_eep.h$
 *
 * $Author____:BSE1LA$
 *
 * $Function__:new sw sharing concept: miniMAKE$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DAH5KOR$Date______:
 * $Class_____:SWHDR$
 * $Name______:sws_eep$Variant___:
 * $Revision__:2$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 * $FDEF______:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * NE_BSW_SWSH_M5; 2     08.02.2016 DAH5KOR
 *   Review points implementation
 * 
 * NE_BSW_SWSH_M5; 1     12.05.2015 DAH5KOR
 *   698 EEP blocks configured for New Eagle development project
 * 
 * NE_BSW_SWSH_M5; 0     04.04.2015 DAH5KOR
 *   EEP and CAN interface function development
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef     SWS_EEP_H_ModId
#define     SWS_EEP_H_ModId                        /* module identifier */


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

/* type defs and enums                                                  */
/* ===================                                                  */

#include "std_type.h"

    /* typedef for result of EEPROM accessing functions */
	typedef enum
	{
		SWS_EEP_NO_DEF    = 0,
		SWS_EEP_SUCCEEDED = 10,
		SWS_EEP_PENDING   = 20,
		SWS_EEP_INVALID   = 30,
		SWS_EEP_ABORTED   = 40,
		SWS_EEP_DRV_FULL  = 50
	} swsEEP_ret;

    typedef enum
	{
        SWS_EEP_RAM_I_SUCCEEDED = 0,
        SWS_EEP_RAM_E_WRG_PARAM = 10,
		SWS_EEP_RAM_INVALID = 30,
	} swsEEPRAM_ret;



	/* write one page of data in EEPROM directly */
	extern swsEEP_ret swsEEP_Write_Directly(void *adrDataStart, uint16 pageNo);
	/* read one page of data in EEPROM directly */
	extern swsEEP_ret swsEEP_Read_Directly(void *adrDataStart, uint16 pageNo);
	/* read data from EEPROM RAM mirror */
	extern swsEEPRAM_ret swsEEP_Read_Ram(void *adrDataStart, uint16 BlkIdx, uint16 Ofs, uint16 numBytes );
	/* write data to EEPROM RAM mirror */
	extern swsEEPRAM_ret swsEEP_Write_Ram(void *adrDataStart, uint16 BlkIdx, uint16 Ofs, uint16 numBytes );
#endif
