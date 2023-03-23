#ifndef _IGNCLPSDD_D
#define _IGNCLPSDD_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "ignclpsdd_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */
static uint8 IgnClPs_ctSpiTraErr_u8;

/* Exported variables */

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
/* +++++ Addressschema IramI8 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */

/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* SY_CK200 Typ=ub */
#ifndef SY_CK200
  #define SY_CK200 2L
#elif (SY_CK200 != 2L)
  #error >>>> 'SY_CK200' multiple defined
#endif



/* SY_CK240 Typ=ub */
#ifndef SY_CK240
  #define SY_CK240 0L
#elif (SY_CK240 != 0L)
  #error >>>> 'SY_CK240' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _IGNCLPSDD_D */
