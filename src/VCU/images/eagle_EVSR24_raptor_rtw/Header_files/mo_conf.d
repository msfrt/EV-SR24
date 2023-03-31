#ifndef _MO_CONF_D
#define _MO_CONF_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "mo_conf_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */


/* Class instances */
/* =============== */

/* Parameters */
/* ++++++++++ */
/* Definition and initialization of PTA structures,             */
/*    PTA macros for defined parameters and class instances,    */
/*    and RP macros (reference page, only for special use)      */
/* ------------------------------------------------------------ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */

/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* SY_CJ840AT Typ=sw */
#ifndef SY_CJ840AT
  #define SY_CJ840AT 0L
#elif (SY_CJ840AT != 0L)
  #error >>>> 'SY_CJ840AT' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _MO_CONF_D */
