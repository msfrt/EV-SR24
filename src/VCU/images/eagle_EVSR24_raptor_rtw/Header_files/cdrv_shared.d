#ifndef _CDRV_SHARED_D
#define _CDRV_SHARED_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "cdrv_shared_dat.h"
/* --- Funktion Epm_Ini ----- */
#include "epm_ini_dat.h"
/* --- Include Message Declarations from exporting FC Epm_Ini ----- */
#include "epm_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */

/* Exported variables */

/* Imported variables */




/* Class instances */
/* =============== */

/* Parameters */
/* ++++++++++ */
/* Definition and initialization of PTA structures,             */
/*    PTA macros for defined parameters and class instances,    */
/*    and RP macros (reference page, only for special use)      */
/* ------------------------------------------------------------ */
/* +++++ Addressschema intRam +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */

/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* -- AdS dir ----- */
#define __Epm_phiTdc1_C (VECT_Epm_Ini_dir->_Epm_phiTdc1_C)
#define RP_Epm_phiTdc1_C (DATA_Epm_Ini_dir._Epm_phiTdc1_C)

/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* -- AdS dir ----- */

/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* EPM_PHIMAX_SY Typ=sw */
#ifndef EPM_PHIMAX_SY
  #define EPM_PHIMAX_SY 32767L
#elif (EPM_PHIMAX_SY != 32767L)
  #error >>>> 'EPM_PHIMAX_SY' multiple defined
#endif



/* NUMCYLACT_SY Typ=sw */
#ifndef NUMCYLACT_SY
  #define NUMCYLACT_SY 8L
#elif (NUMCYLACT_SY != 8L)
  #error >>>> 'NUMCYLACT_SY' multiple defined
#endif



/* NUMCYLCAL_SY Typ=sw */
#ifndef NUMCYLCAL_SY
  #define NUMCYLCAL_SY 1L
#elif (NUMCYLCAL_SY != 1L)
  #error >>>> 'NUMCYLCAL_SY' multiple defined
#endif



/* NUMCYLMAX_SY Typ=sw */
#ifndef NUMCYLMAX_SY
  #define NUMCYLMAX_SY 8L
#elif (NUMCYLMAX_SY != 8L)
  #error >>>> 'NUMCYLMAX_SY' multiple defined
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

#endif /* _CDRV_SHARED_D */
