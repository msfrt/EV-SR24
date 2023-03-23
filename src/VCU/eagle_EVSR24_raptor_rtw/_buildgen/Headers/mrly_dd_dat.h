#ifndef _MRLY_DD_DAT_H
#define _MRLY_DD_DAT_H

#ifndef _MRLY_DD_GS_HEADER
#define _MRLY_DD_GS_HEADER

/* Class declarations */
/* ================== */
/* +++++ Class MRly_Set +++++ */
#ifndef _MRLY_SET_IMPL_
#define _MRLY_SET_IMPL_

/* Class MRly_Set has no Attributes -> Wrapper is not generated */

#endif /* _MRLY_SET_IMPL_ */


/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _MRly_numTstImp_C_DEF
#define _MRly_numTstImp_C_DEF
#endif /* _MRLY_NUMTSTIMP_C_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_MRLY_DD_DATAFAR_T_DEF
#define DATA_MRLY_DD_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter MRly_numTstImp_C ----- */
    uint8 _MRly_numTstImp_C;

} DATA_MRly_DD_DataFar_t;

extern const DATA_MRly_DD_DataFar_t DATA_MRly_DD_DataFar __attribute__
                                       ((asection (".pta_data_MRly_DD_DataFar", "f=a")));

extern const DATA_MRly_DD_DataFar_t * const VECT_MRly_DD_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_MRly_DD_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI32 +++++ */


/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */


/* +++++ Addressschema Xram +++++ */



#endif /* _MRLY_DD_GS_HEADER */
#endif /* _MRLY_DD_DAT_H */
