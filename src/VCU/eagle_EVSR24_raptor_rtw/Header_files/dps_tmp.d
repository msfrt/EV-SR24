#ifndef _DPS_TMP_D
#define _DPS_TMP_D

/* Includes */
/* ++++++++ */
#define _D_FILE_
#include "dps_tmp_dat.h"

#undef _D_FILE_

/* Variables */
/* +++++++++ */
/* -- AdS IramI16 ----- */
/* IramI16Header */
#pragma section .sbss.ReIni.a2 aws 

/* Local variables */

/* Exported variables */
uint16 dps_error;
uint16 dps_errStat;
uint16 dps_errStat_sum_rec;
uint16 dps_errStat_sum_ver;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS IramI8 ----- */
/* IramI8Header */
#pragma section .sbss.ReIni.a1 aws 

/* Local variables */

/* Exported variables */
uint8 dps_index;
uint8 dps_recoveryTime;
uint8 dps_state;
uint8 dps_verifyTime;

/* Imported variables */


/* Footer */
#pragma section 
/* -- AdS SingleBitI1 ----- */
/* IramI1Header */
#pragma section .bbss.ReIni awbz 

/* Local variables */

/* Exported variables */

/* Imported variables */

#ifndef __B_PMDINIT_EXT__
#define __B_PMDINIT_EXT__
extern const _bit B_PmdInit;
#define GET_B_PmdInit (B_PmdInit)
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
/* +++++ Addressschema DataFar +++++ */
/* -- AdS DataFar ----- */
const DATA_DPS_Tmp_DataFar_t DATA_DPS_Tmp_DataFar __attribute__
                                       ((asection (".pta_data_DPS_Tmp_DataFar", "f=a"))) =
{

    /*  ----- Parameter DPSWATCHINDEX ----- */ 
255U,


    /*  ----- Parameter THP ----- */ 
10U,


    /*  ----- Parameter TVP ----- */ 
5U,

};

#define __DPSWATCHINDEX (VECT_DPS_Tmp_DataFar->_DPSWATCHINDEX)
#define RP_DPSWATCHINDEX (DATA_DPS_Tmp_DataFar._DPSWATCHINDEX)
#define __THP (VECT_DPS_Tmp_DataFar->_THP)
#define RP_THP (DATA_DPS_Tmp_DataFar._THP)
#define __TVP (VECT_DPS_Tmp_DataFar->_TVP)
#define RP_TVP (DATA_DPS_Tmp_DataFar._TVP)

/* +++++ Addressschema IramI16 +++++ */
/* +++++ Addressschema IramI8 +++++ */
/* noPTA Macros and definitions of defined parameters */
/* -------------------------------------------------- */
/* -- AdS DataFar ----- */
#define KW_DPSWATCHINDEX __DPSWATCHINDEX
#define DPSWATCHINDEX __DPSWATCHINDEX

#define KW_THP __THP
#define THP __THP

#define KW_TVP __TVP
#define TVP __TVP


/* PTA macros for referenced parameters */
/* ------------------------------------ */
/* noPTA Macro definitions of referenced parameters */
/* ------------------------------------------------ */
/* Definitions of referenced system constants */
/* ------------------------------------------ */
/* Definitions of local system constants */
/* ------------------------------------- */

#endif /* _DPS_TMP_D */
