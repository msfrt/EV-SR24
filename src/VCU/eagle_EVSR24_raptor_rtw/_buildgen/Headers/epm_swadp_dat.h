#ifndef _EPM_SWADP_DAT_H
#define _EPM_SWADP_DAT_H

#ifndef _EPM_SWADP_GS_HEADER
#define _EPM_SWADP_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _ZNGFIL_DEF
#define _ZNGFIL_DEF
#endif /* _ZNGFIL_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_EPM_SWADP_DATAFAR_T_DEF
#define DATA_EPM_SWADP_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter ZNGFIL ----- */
    sint32 _ZNGFIL;

} DATA_Epm_SwAdp_DataFar_t;

extern const DATA_Epm_SwAdp_DataFar_t DATA_Epm_SwAdp_DataFar __attribute__
                                       ((asection (".pta_data_Epm_SwAdp_DataFar", "f=a")));

extern const DATA_Epm_SwAdp_DataFar_t * const VECT_Epm_SwAdp_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_Epm_SwAdp_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI16 +++++ */


/* +++++ Addressschema IramI32 +++++ */


/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema IramNvI16 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _EPM_SWADP_GS_HEADER */
#endif /* _EPM_SWADP_DAT_H */
