#ifndef _DEVE_D
#define _DEVE_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "deve_dat.h"
/* --- Funktion DPS_Tmp ----- */
#include "dps_tmp_dat.h"
/* --- Include Message Declarations from exporting FC SyC_Main ----- */
#include "syc_msg.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS intRam ----- */

/* Local variables */

/* Exported variables */

/* Imported variables */


/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */

/* Exported variables */

/* Imported variables */

#ifndef __EVZ_AUSTOT_EXT__
#define __EVZ_AUSTOT_EXT__
extern const uint8 evz_austot;
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_eev;
#define SET_B_eev (B_eev = TRUE)
#define CLR_B_eev (B_eev = FALSE)
#define GET_B_eev (B_eev)
#define PUT_B_eev(val) ((val) ? SET_B_eev : CLR_B_eev)


/* Imported variables */

#ifndef __B_DESEE_EXT__
#define __B_DESEE_EXT__
extern const _bit B_desee;
#define GET_B_desee (B_desee)
#endif

#ifndef __B_SA_EXT__
#define __B_SA_EXT__
extern const _bit B_sa;
#define GET_B_sa (B_sa)
#endif

#ifndef __B_STEND_EXT__
#define __B_STEND_EXT__
extern const _bit B_stend;
#define GET_B_stend (B_stend)
#endif


/* Footer */
#pragma section 
/* -- AdS Xram ----- */
/* IramHeader */
#pragma section .sbss.ReIni aws 

/* Local variables */

/* Exported variables */

/* Imported variables */


/* Footer */
#pragma section 


/* Class instances */
/* =============== */

/* --------------- */
/* Local OML-Class TurnOnDelay,  Instance B_cycleeve1 */
/* --------------- */

/* Instance B_cycleeve1, Addressschema Xram */
#ifndef _B_cycleeve1_DEF
#define _B_cycleeve1_DEF

/* IramHeader */
#pragma section .sbss.ReIni aws 

static TURNONDELAY_U8 B_cycleeve1;
/* Footer */
#pragma section 

#endif /* _B_cycleeve1_DEF */

/* --------------- */
/* Local OML-Class TurnOnDelay,  Instance B_cycleeve2 */
/* --------------- */

/* Instance B_cycleeve2, Addressschema Xram */
#ifndef _B_cycleeve2_DEF
#define _B_cycleeve2_DEF

/* IramHeader */
#pragma section .sbss.ReIni aws 

static TURNONDELAY_U8 B_cycleeve2;
/* Footer */
#pragma section 

#endif /* _B_cycleeve2_DEF */

/* --------------- */
/* Local OML-Class TurnOnDelay,  Instance B_cycleeve3 */
/* --------------- */

/* Instance B_cycleeve3, Addressschema Xram */
#ifndef _B_cycleeve3_DEF
#define _B_cycleeve3_DEF

/* IramHeader */
#pragma section .sbss.ReIni aws 

static TURNONDELAY_U8 B_cycleeve3;
/* Footer */
#pragma section 

#endif /* _B_cycleeve3_DEF */

/* --------------- */
/* Local OML-Class TurnOnDelay,  Instance B_cycleeve4 */
/* --------------- */

/* Instance B_cycleeve4, Addressschema Xram */
#ifndef _B_cycleeve4_DEF
#define _B_cycleeve4_DEF

/* IramHeader */
#pragma section .sbss.ReIni aws 

static TURNONDELAY_U8 B_cycleeve4;
/* Footer */
#pragma section 

#endif /* _B_cycleeve4_DEF */

/* --------------- */
/* Local OML-Class TurnOnDelay,  Instance B_cycleeve5 */
/* --------------- */

/* Instance B_cycleeve5, Addressschema Xram */
#ifndef _B_cycleeve5_DEF
#define _B_cycleeve5_DEF

/* IramHeader */
#pragma section .sbss.ReIni aws 

static TURNONDELAY_U8 B_cycleeve5;
/* Footer */
#pragma section 

#endif /* _B_cycleeve5_DEF */

/* --------------- */
/* Local OML-Class TurnOnDelay,  Instance B_cycleeve6 */
/* --------------- */

/* Instance B_cycleeve6, Addressschema Xram */
#ifndef _B_cycleeve6_DEF
#define _B_cycleeve6_DEF

/* IramHeader */
#pragma section .sbss.ReIni aws 

static TURNONDELAY_U8 B_cycleeve6;
/* Footer */
#pragma section 

#endif /* _B_cycleeve6_DEF */

/* --------------- */
/* Local OML-Class TurnOnDelay,  Instance B_cycleeve7 */
/* --------------- */

/* Instance B_cycleeve7, Addressschema Xram */
#ifndef _B_cycleeve7_DEF
#define _B_cycleeve7_DEF

/* IramHeader */
#pragma section .sbss.ReIni aws 

static TURNONDELAY_U8 B_cycleeve7;
/* Footer */
#pragma section 

#endif /* _B_cycleeve7_DEF */

/* --------------- */
/* Local OML-Class TurnOnDelay,  Instance B_cycleeve8 */
/* --------------- */

/* Instance B_cycleeve8, Addressschema Xram */
#ifndef _B_cycleeve8_DEF
#define _B_cycleeve8_DEF

/* IramHeader */
#pragma section .sbss.ReIni aws 

static TURNONDELAY_U8 B_cycleeve8;
/* Footer */
#pragma section 

#endif /* _B_cycleeve8_DEF */

/* --------------- */
/* Exported MML-Class DfpCl,  Instance FPI_EV1 */
/* --------------- */



/* --------------- */
/* Exported MML-Class DfpCl,  Instance FPI_EV2 */
/* --------------- */



/* --------------- */
/* Exported MML-Class DfpCl,  Instance FPI_EV3 */
/* --------------- */



/* --------------- */
/* Exported MML-Class DfpCl,  Instance FPI_EV4 */
/* --------------- */



/* --------------- */
/* Exported MML-Class DfpCl,  Instance FPI_EV5 */
/* --------------- */



/* --------------- */
/* Exported MML-Class DfpCl,  Instance FPI_EV6 */
/* --------------- */



/* --------------- */
/* Exported MML-Class DfpCl,  Instance FPI_EV7 */
/* --------------- */



/* --------------- */
/* Exported MML-Class DfpCl,  Instance FPI_EV8 */
/* --------------- */



/* Parameters */
/* ++++++++++ */
/* Definition and initialization of PTA structures,             */
/*    PTA macros for defined parameters and class instances,    */
/*    and RP macros (reference page, only for special use)      */
/* ------------------------------------------------------------ */
/* +++++ Addressschema $notInEprom +++++ */
/* +++++ Addressschema DataFar +++++ */
/* -- AdS DataFar ----- */
const DATA_DEVE_DataFar_t DATA_DEVE_DataFar __attribute__
                                       ((asection (".pta_data_DEVE_DataFar", "f=a"))) =
{

    /*  ----- Parameter CWPSEVE ----- */ 
0U,

};

#define __CWPSEVE (VECT_DEVE_DataFar->_CWPSEVE)
#define RP_CWPSEVE (DATA_DEVE_DataFar._CWPSEVE)

/* +++++ Addressschema SingleBitI1 +++++ */
/* +++++ Addressschema Xram +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_CWPSEVE __CWPSEVE
#define CWPSEVE __CWPSEVE


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* -- AdS DataFar ----- */
#define __TVP (VECT_DPS_Tmp_DataFar->_TVP)
#define RP_TVP (DATA_DPS_Tmp_DataFar._TVP)

/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* -- AdS DataFar ----- */
#define KW_TVP __TVP
#define TVP __TVP

/* Definitions of referenced system constants */
/* ------------------------------------------ */


/* SY_EKPRMK Typ=ub */
#ifndef SY_EKPRMK
  #define SY_EKPRMK 0L
#elif (SY_EKPRMK != 0L)
  #error >>>> 'SY_EKPRMK' multiple defined
#endif



/* SY_ZYLZA Typ=sw */
#ifndef SY_ZYLZA
  #define SY_ZYLZA 8L
#elif (SY_ZYLZA != 8L)
  #error >>>> 'SY_ZYLZA' multiple defined
#endif

/* Definitions of local system constants */
/* ------------------------------------- */
/* Diagnosis Powerstage DPS_EV1E */
#define DPS_INDEX_0 DPS_EV1E
/* Diagnosis Powerstage DPS_EV2E */
#define DPS_INDEX_1 DPS_EV2E
/* Diagnosis Powerstage DPS_EV3E */
#define DPS_INDEX_2 DPS_EV3E
/* Diagnosis Powerstage DPS_EV4E */
#define DPS_INDEX_3 DPS_EV4E
/* Diagnosis Powerstage DPS_EV5E */
#define DPS_INDEX_4 DPS_EV5E
/* Diagnosis Powerstage DPS_EV6E */
#define DPS_INDEX_5 DPS_EV6E
/* Diagnosis Powerstage DPS_EV7E */
#define DPS_INDEX_6 DPS_EV7E
/* Diagnosis Powerstage DPS_EV8E */
#define DPS_INDEX_7 DPS_EV8E

#endif /* _DEVE_D */
