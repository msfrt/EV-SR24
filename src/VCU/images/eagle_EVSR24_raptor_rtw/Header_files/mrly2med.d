#ifndef _MRLY2MED_D
#define _MRLY2MED_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "mrly2med_dat.h"
/* --- Include Message Declarations from exporting FC MRly_VD ----- */
#include "mrly_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS MsgRam ----- */
/* MsgRamHeader */
#pragma section .sbss aws 

/* Local variables */

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_hr;
#define SET_B_hr (B_hr = TRUE)
#define CLR_B_hr (B_hr = FALSE)
#define GET_B_hr (B_hr)
#define PUT_B_hr(val) ((val) ? SET_B_hr : CLR_B_hr)


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


/* POSTDRV_SOFTRST_SY Typ=ub */
#ifndef POSTDRV_SOFTRST_SY
  #define POSTDRV_SOFTRST_SY 0L
#elif (POSTDRV_SOFTRST_SY != 0L)
  #error >>>> 'POSTDRV_SOFTRST_SY' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _MRLY2MED_D */
