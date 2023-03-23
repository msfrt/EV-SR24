#ifndef _DECJ_DAT_H
#define _DECJ_DAT_H

#ifndef _DECJ_GS_HEADER
#define _DECJ_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _NDECJ_DEF
#define _NDECJ_DEF
#endif /* _NDECJ_DEF */

#ifndef _UBCJMN_DEF
#define _UBCJMN_DEF
#endif /* _UBCJMN_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_DECJ_DATAFAR_T_DEF
#define DATA_DECJ_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter NDECJ ----- */
    uint8 _NDECJ;
    /* ----- Parameter UBCJMN ----- */
    uint8 _UBCJMN;

} DATA_DECJ_DataFar_t;

extern const DATA_DECJ_DataFar_t DATA_DECJ_DataFar __attribute__
                                       ((asection (".pta_data_DECJ_DataFar", "f=a")));

extern const DATA_DECJ_DataFar_t * const VECT_DECJ_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_DECJ_DataFar", "f=as")));
#endif




/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _DECJ_GS_HEADER */
#endif /* _DECJ_DAT_H */
