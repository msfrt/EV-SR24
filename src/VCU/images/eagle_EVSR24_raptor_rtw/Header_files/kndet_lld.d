#ifndef _KNDET_LLD_D
#define _KNDET_LLD_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "kndet_lld_dat.h"

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


/* KNKMUXPORTACTVD_SC Typ=sw */
#ifndef KNKMUXPORTACTVD_SC
  #define KNKMUXPORTACTVD_SC 2L
#elif (KNKMUXPORTACTVD_SC != 2L)
  #error >>>> 'KNKMUXPORTACTVD_SC' multiple defined
#endif



/* SY_KS1 Typ=ub */
#ifndef SY_KS1
  #define SY_KS1 1L
#elif (SY_KS1 != 1L)
  #error >>>> 'SY_KS1' multiple defined
#endif



/* SY_KS2 Typ=ub */
#ifndef SY_KS2
  #define SY_KS2 1L
#elif (SY_KS2 != 1L)
  #error >>>> 'SY_KS2' multiple defined
#endif



/* SY_KS3 Typ=ub */
#ifndef SY_KS3
  #define SY_KS3 2L
#elif (SY_KS3 != 2L)
  #error >>>> 'SY_KS3' multiple defined
#endif



/* SY_KS4 Typ=ub */
#ifndef SY_KS4
  #define SY_KS4 3L
#elif (SY_KS4 != 3L)
  #error >>>> 'SY_KS4' multiple defined
#endif



/* SY_KSENCHN Typ=ub */
#ifndef SY_KSENCHN
  #define SY_KSENCHN 3L
#elif (SY_KSENCHN != 3L)
  #error >>>> 'SY_KSENCHN' multiple defined
#endif



/* SY_KSZA Typ=sw */
#ifndef SY_KSZA
  #define SY_KSZA 4L
#elif (SY_KSZA != 4L)
  #error >>>> 'SY_KSZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _KNDET_LLD_D */
