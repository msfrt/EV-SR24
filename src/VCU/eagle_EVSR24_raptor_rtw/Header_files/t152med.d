#ifndef _T152MED_D
#define _T152MED_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "t152med_dat.h"
/* --- Include Message Declarations from exporting FC T15_VD ----- */
#include "t15_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */

/* Exported variables */

/* Imported variables */


/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_kl15;
#define SET_B_kl15 (B_kl15 = TRUE)
#define CLR_B_kl15 (B_kl15 = FALSE)
#define GET_B_kl15 (B_kl15)
#define PUT_B_kl15(val) ((val) ? SET_B_kl15 : CLR_B_kl15)


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

#endif /* _T152MED_D */
