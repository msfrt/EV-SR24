#ifndef _EEP2MED_D
#define _EEP2MED_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "eep2med_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_eepwf;
#define SET_B_eepwf (B_eepwf = TRUE)
#define CLR_B_eepwf (B_eepwf = FALSE)
#define GET_B_eepwf (B_eepwf)
#define PUT_B_eepwf(val) ((val) ? SET_B_eepwf : CLR_B_eepwf)

_bit B_pwf;
#define SET_B_pwf (B_pwf = TRUE)
#define CLR_B_pwf (B_pwf = FALSE)
#define GET_B_pwf (B_pwf)
#define PUT_B_pwf(val) ((val) ? SET_B_pwf : CLR_B_pwf)


/* Imported variables */


/* Footer */
#pragma section 


/* Class instances */
/* =============== */

/* Parameters */
/* ++++++++++ */
/* Definition and initialization of PTA structures,             */
/*    PTA macros for defined parameters and class instances,    */
/*    and RP macros (reference page, only for special use)      */
/* ------------------------------------------------------------ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */

/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */
/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _EEP2MED_D */
