#ifndef _DTRG2MED_DAT_H
#define _DTRG2MED_DAT_H

#ifndef _DTRG2MED_GS_HEADER
#define _DTRG2MED_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _TMWUC_DEF
#define _TMWUC_DEF
#endif /* _TMWUC_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_DTRG2MED_DATAFAR_T_DEF
#define DATA_DTRG2MED_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter TMWUC ----- */
    uint8 _TMWUC;

} DATA_DTRG2MED_DataFar_t;

extern const DATA_DTRG2MED_DataFar_t DATA_DTRG2MED_DataFar __attribute__
                                       ((asection (".pta_data_DTRG2MED_DataFar", "f=a")));

extern const DATA_DTRG2MED_DataFar_t * const VECT_DTRG2MED_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_DTRG2MED_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema IramNvI16 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _DTRG2MED_GS_HEADER */
#endif /* _DTRG2MED_DAT_H */
