#ifndef _KNDETLTEST_DAT_H
#define _KNDETLTEST_DAT_H

#ifndef _KNDETLTEST_GS_HEADER
#define _KNDETLTEST_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _KnDet_SensMaxErr_C_DEF
#define _KnDet_SensMaxErr_C_DEF
#endif /* _KNDET_SENSMAXERR_C_DEF */

#ifndef _KnDet_SensMinErr_C_DEF
#define _KnDet_SensMinErr_C_DEF
#endif /* _KNDET_SENSMINERR_C_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_KNDETLTEST_DATAFAR_T_DEF
#define DATA_KNDETLTEST_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter KnDet_SensMaxErr_C ----- */
    sint16 _KnDet_SensMaxErr_C;
    /* ----- Parameter KnDet_SensMinErr_C ----- */
    sint16 _KnDet_SensMinErr_C;

} DATA_KnDetLTest_DataFar_t;

extern const DATA_KnDetLTest_DataFar_t DATA_KnDetLTest_DataFar __attribute__
                                       ((asection (".pta_data_KnDetLTest_DataFar", "f=a")));

extern const DATA_KnDetLTest_DataFar_t * const VECT_KnDetLTest_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_KnDetLTest_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI16 +++++ */


/* +++++ Addressschema IramI32 +++++ */


/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _KNDETLTEST_GS_HEADER */
#endif /* _KNDETLTEST_DAT_H */
