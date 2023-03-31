#ifndef _SYC2ME_D
#define _SYC2ME_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "syc2me_dat.h"
/* --- Include Message Declarations from exporting FC SyC_Main ----- */
#include "syc_msg.h"
/* --- Include Message Declarations from exporting FC T15_VD ----- */
#include "t15_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */

/* Exported variables */

/* Imported variables */


/* -- AdS IramNvI16 ----- */
/* IramNvI16Header */
#pragma section .bss.envram.a2 aw 

/* Local variables */

/* Exported variables */
uint16 tnachl_w;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

#ifndef __NLTRSTDONE_EXT__
#define __NLTRSTDONE_EXT__
static _bit nltrstdone;
#define SET_nltrstdone (nltrstdone = TRUE)
#define CLR_nltrstdone (nltrstdone = FALSE)
#define GET_nltrstdone (nltrstdone)
#define PUT_nltrstdone(val) ((val) ? SET_nltrstdone : CLR_nltrstdone)
#endif

/* Exported variables */
_bit B_nachl;
#define SET_B_nachl (B_nachl = TRUE)
#define CLR_B_nachl (B_nachl = FALSE)
#define GET_B_nachl (B_nachl)
#define PUT_B_nachl(val) ((val) ? SET_B_nachl : CLR_B_nachl)

_bit B_nachlauf;
#define SET_B_nachlauf (B_nachlauf = TRUE)
#define CLR_B_nachlauf (B_nachlauf = FALSE)
#define GET_B_nachlauf (B_nachlauf)
#define PUT_B_nachlauf(val) ((val) ? SET_B_nachlauf : CLR_B_nachlauf)

_bit B_norm;
#define SET_B_norm (B_norm = TRUE)
#define CLR_B_norm (B_norm = FALSE)
#define GET_B_norm (B_norm)
#define PUT_B_norm(val) ((val) ? SET_B_norm : CLR_B_norm)

_bit B_wakeup;
#define SET_B_wakeup (B_wakeup = TRUE)
#define CLR_B_wakeup (B_wakeup = FALSE)
#define GET_B_wakeup (B_wakeup)
#define PUT_B_wakeup(val) ((val) ? SET_B_wakeup : CLR_B_wakeup)


/* Imported variables */

#ifndef __B_EEPWF_EXT__
#define __B_EEPWF_EXT__
extern const _bit B_eepwf;
#define GET_B_eepwf (B_eepwf)
#endif


/* Footer */
#pragma section 


/* Class instances */
/* =============== */

/* --------------- */
/* Local OML-Class States,  Instance States */
/* --------------- */

/* Instance States is not generated because OML-Class has no Attributes -> No wrapper to instantiate */

/* Parameters */
/* ++++++++++ */
/* Definition and initialization of PTA structures,             */
/*    PTA macros for defined parameters and class instances,    */
/*    and RP macros (reference page, only for special use)      */
/* ------------------------------------------------------------ */
/* +++++ Addressschema IramNvI16 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* +++++ Addressschema Xram +++++ */
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



/* SY_PSTDRST Typ=ub */
#ifndef SY_PSTDRST
  #define SY_PSTDRST 0L
#elif (SY_PSTDRST != 0L)
  #error >>>> 'SY_PSTDRST' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _SYC2ME_D */
