#ifndef _DPS_TMP_DAT_H
#define _DPS_TMP_DAT_H

#ifndef _DPS_TMP_GS_HEADER
#define _DPS_TMP_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _DPSWATCHINDEX_DEF
#define _DPSWATCHINDEX_DEF
#endif /* _DPSWATCHINDEX_DEF */

#ifndef _THP_DEF
#define _THP_DEF
#endif /* _THP_DEF */

#ifndef _TVP_DEF
#define _TVP_DEF
#endif /* _TVP_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_DPS_TMP_DATAFAR_T_DEF
#define DATA_DPS_TMP_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter DPSWATCHINDEX ----- */
    uint8 _DPSWATCHINDEX;
    /* ----- Parameter THP ----- */
    uint8 _THP;
    /* ----- Parameter TVP ----- */
    uint8 _TVP;

} DATA_DPS_Tmp_DataFar_t;

extern const DATA_DPS_Tmp_DataFar_t DATA_DPS_Tmp_DataFar __attribute__
                                       ((asection (".pta_data_DPS_Tmp_DataFar", "f=a")));

extern const DATA_DPS_Tmp_DataFar_t * const VECT_DPS_Tmp_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_DPS_Tmp_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI16 +++++ */


/* +++++ Addressschema IramI8 +++++ */



#endif /* _DPS_TMP_GS_HEADER */
#endif /* _DPS_TMP_DAT_H */
