#ifndef _KNDETSIGEVAL_DAT_H
#define _KNDETSIGEVAL_DAT_H

#ifndef _KNDETSIGEVAL_GS_HEADER
#define _KNDETSIGEVAL_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _KnDet_CoefFlt_CA_DEF
#define _KnDet_CoefFlt_CA_DEF
typedef uint16 KnDet_CoefFlt_CA_t[292];
#endif /* _KNDET_COEFFLT_CA_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_KNDETSIGEVAL_DATAFAR_T_DEF
#define DATA_KNDETSIGEVAL_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter KnDet_CoefFlt_CA ----- */
    KnDet_CoefFlt_CA_t _KnDet_CoefFlt_CA __attribute__ ((aligned (8)));

} DATA_KnDetSigEval_DataFar_t;

extern const DATA_KnDetSigEval_DataFar_t DATA_KnDetSigEval_DataFar __attribute__
                                       ((asection (".pta_data_KnDetSigEval_DataFar", "f=a")));

extern const DATA_KnDetSigEval_DataFar_t * const VECT_KnDetSigEval_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_KnDetSigEval_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI16 +++++ */


/* +++++ Addressschema IramI32 +++++ */


/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _KNDETSIGEVAL_GS_HEADER */
#endif /* _KNDETSIGEVAL_DAT_H */
