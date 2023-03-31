#ifndef _DECJ_D
#define _DECJ_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "decj_dat.h"
/* --- Funktion SWAdp ----- */
#include "swadp_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */

/* Exported variables */

/* Imported variables */

#ifndef __NMOT_EXT__
#define __NMOT_EXT__
extern const uint8 nmot;
#endif

#ifndef __UBSQ_EXT__
#define __UBSQ_EXT__
extern const uint8 ubsq;
#endif


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */
_bit B_desee;
#define SET_B_desee (B_desee = TRUE)
#define CLR_B_desee (B_desee = FALSE)
#define GET_B_desee (B_desee)
#define PUT_B_desee(val) ((val) ? SET_B_desee : CLR_B_desee)

_bit B_deseehr;
#define SET_B_deseehr (B_deseehr = TRUE)
#define CLR_B_deseehr (B_deseehr = FALSE)
#define GET_B_deseehr (B_deseehr)
#define PUT_B_deseehr(val) ((val) ? SET_B_deseehr : CLR_B_deseehr)

_bit B_PmdInit;
#define SET_B_PmdInit (B_PmdInit = TRUE)
#define CLR_B_PmdInit (B_PmdInit = FALSE)
#define GET_B_PmdInit (B_PmdInit)
#define PUT_B_PmdInit(val) ((val) ? SET_B_PmdInit : CLR_B_PmdInit)


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
const DATA_DECJ_DataFar_t DATA_DECJ_DataFar __attribute__
                                       ((asection (".pta_data_DECJ_DataFar", "f=a"))) =
{

    /*  ----- Parameter NDECJ ----- */ 
1U,


    /*  ----- Parameter UBCJMN ----- */ 
85U,

};

#define __NDECJ (VECT_DECJ_DataFar->_NDECJ)
#define RP_NDECJ (DATA_DECJ_DataFar._NDECJ)
#define __UBCJMN (VECT_DECJ_DataFar->_UBCJMN)
#define RP_UBCJMN (DATA_DECJ_DataFar._UBCJMN)

/* +++++ Addressschema SingleBitI1 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_NDECJ __NDECJ
#define NDECJ __NDECJ

#define KW_UBCJMN __UBCJMN
#define UBCJMN __UBCJMN


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* -- AdS DataFar ----- */
#define __DFP_UBR (VECT_SWAdp_DataFar->_DFP_UBR)
#define RP_DFP_UBR (DATA_SWAdp_DataFar._DFP_UBR)

/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* -- AdS DataFar ----- */
#define KW_DFP_UBR __DFP_UBR
#define DFP_UBR __DFP_UBR

/* Definitions of referenced system constants */
/* ------------------------------------------ */
/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _DECJ_D */
