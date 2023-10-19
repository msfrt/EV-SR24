#ifndef _IGNDD_DAT_H
#define _IGNDD_DAT_H

#ifndef _IGNDD_GS_HEADER
#define _IGNDD_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _CWZUEAB_DEF
#define _CWZUEAB_DEF
#endif /* _CWZUEAB_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_IGNDD_DATAFAR_T_DEF
#define DATA_IGNDD_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter CWZUEAB ----- */
    uint8 _CWZUEAB;

} DATA_IgnDD_DataFar_t;

extern const DATA_IgnDD_DataFar_t DATA_IgnDD_DataFar __attribute__
                                       ((asection (".pta_data_IgnDD_DataFar", "f=a")));

extern const DATA_IgnDD_DataFar_t * const VECT_IgnDD_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_IgnDD_DataFar", "f=as")));
#endif




/* +++++ Addressschema intRam +++++ */


/* +++++ Addressschema IramNoReIniI16 +++++ */


/* +++++ Addressschema IramNoReIniI8 +++++ */


/* +++++ Addressschema SingleBitNoReIniI1 +++++ */



#endif /* _IGNDD_GS_HEADER */
#endif /* _IGNDD_DAT_H */
