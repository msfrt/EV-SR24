#ifndef _CDRV_GLBDEF_D
#define _CDRV_GLBDEF_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "cdrv_glbdef_dat.h"

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


/* SY_GRDWRT Typ=uw */
#ifndef SY_GRDWRT
  #define SY_GRDWRT 72L
#elif (SY_GRDWRT != 72L)
  #error >>>> 'SY_GRDWRT' multiple defined
#endif



/* SY_GRDWRTB Typ=uw */
#ifndef SY_GRDWRTB
  #define SY_GRDWRTB 72L
#elif (SY_GRDWRTB != 72L)
  #error >>>> 'SY_GRDWRTB' multiple defined
#endif



/* SY_SGANZ Typ=sw */
#ifndef SY_SGANZ
  #define SY_SGANZ 1L
#elif (SY_SGANZ != 1L)
  #error >>>> 'SY_SGANZ' multiple defined
#endif



/* SY_ZYLZA Typ=sw */
#ifndef SY_ZYLZA
  #define SY_ZYLZA 8L
#elif (SY_ZYLZA != 8L)
  #error >>>> 'SY_ZYLZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _CDRV_GLBDEF_D */
