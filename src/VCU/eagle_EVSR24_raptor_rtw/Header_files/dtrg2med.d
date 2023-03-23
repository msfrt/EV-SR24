#ifndef _DTRG2MED_D
#define _DTRG2MED_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "dtrg2med_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */

/* Exported variables */
TrigType bbdcy;
TrigType bbwuc;
uint8 wuccnt;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramNvI16 ----- */
/* IramNvI16Header */
#pragma section .bss.envram.a2 aw 

/* Local variables */

/* Exported variables */
uint16 dcycnt;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_dcy;
#define SET_B_dcy (B_dcy = TRUE)
#define CLR_B_dcy (B_dcy = FALSE)
#define GET_B_dcy (B_dcy)
#define PUT_B_dcy(val) ((val) ? SET_B_dcy : CLR_B_dcy)

_bit B_wuc;
#define SET_B_wuc (B_wuc = TRUE)
#define CLR_B_wuc (B_wuc = FALSE)
#define GET_B_wuc (B_wuc)
#define PUT_B_wuc(val) ((val) ? SET_B_wuc : CLR_B_wuc)


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
/* +++++ Addressschema DataFar +++++ */
/* -- AdS DataFar ----- */
const DATA_DTRG2MED_DataFar_t DATA_DTRG2MED_DataFar __attribute__
                                       ((asection (".pta_data_DTRG2MED_DataFar", "f=a"))) =
{

    /*  ----- Parameter TMWUC ----- */ 
159U,

};

#define __TMWUC (VECT_DTRG2MED_DataFar->_TMWUC)
#define RP_TMWUC (DATA_DTRG2MED_DataFar._TMWUC)

/* +++++ Addressschema IramI8 +++++ */
/* +++++ Addressschema IramNvI16 +++++ */
/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_TMWUC __TMWUC
#define TMWUC __TMWUC


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */
/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _DTRG2MED_D */
