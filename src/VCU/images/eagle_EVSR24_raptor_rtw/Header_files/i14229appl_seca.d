#ifndef _I14229APPL_SECA_D
#define _I14229APPL_SECA_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "i14229appl_seca_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */
static uint8 accmode;
static uint8 timer10s;
static uint8 timer1s;

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramNoReIniI8 ----- */
/* IramNoReIniI8Header */
#pragma section .sbss.a1 aws 

/* Local variables */

/* Exported variables */
uint8 prevseed[4];

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS SingleBitNvI1 ----- */
/* IramNvI8Header */
#pragma section .bss.envram.a1 aw 

/* Local variables */

/* Exported variables */
bool B_secafaa;
#define SET_B_secafaa (B_secafaa = TRUE)
#define CLR_B_secafaa (B_secafaa = FALSE)
#define GET_B_secafaa (B_secafaa)
#define PUT_B_secafaa(val) ((val) ? SET_B_secafaa : CLR_B_secafaa)


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
/* +++++ Addressschema IramNoReIniI8 +++++ */
/* +++++ Addressschema SingleBitNvI1 +++++ */
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

#endif /* _I14229APPL_SECA_D */
