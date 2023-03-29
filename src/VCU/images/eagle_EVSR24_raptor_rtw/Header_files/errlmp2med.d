#ifndef _ERRLMP2MED_D
#define _ERRLMP2MED_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "errlmp2med_dat.h"
/* --- Include Message Declarations from exporting FC MILLmp_DD ----- */
#include "millmp_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS dir ----- */

/* Local variables */

/* Exported variables */

/* Imported variables */


/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_mil;
#define SET_B_mil (B_mil = TRUE)
#define CLR_B_mil (B_mil = FALSE)
#define GET_B_mil (B_mil)
#define PUT_B_mil(val) ((val) ? SET_B_mil : CLR_B_mil)

_bit B_milblk;
#define SET_B_milblk (B_milblk = TRUE)
#define CLR_B_milblk (B_milblk = FALSE)
#define GET_B_milblk (B_milblk)
#define PUT_B_milblk(val) ((val) ? SET_B_milblk : CLR_B_milblk)

_bit B_milst;
#define SET_B_milst (B_milst = TRUE)
#define CLR_B_milst (B_milst = FALSE)
#define GET_B_milst (B_milst)
#define PUT_B_milst(val) ((val) ? SET_B_milst : CLR_B_milst)


/* Imported variables */

#ifndef __B_BLKMD_EXT__
#define __B_BLKMD_EXT__
extern const _bit B_blkmd;
#define GET_B_blkmd (B_blkmd)
#endif

#ifndef __B_MILMD_EXT__
#define __B_MILMD_EXT__
extern const _bit B_milmd;
#define GET_B_milmd (B_milmd)
#endif


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


/* SVS_SY Typ=ub */
#ifndef SVS_SY
  #define SVS_SY 0L
#elif (SVS_SY != 0L)
  #error >>>> 'SVS_SY' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _ERRLMP2MED_D */
