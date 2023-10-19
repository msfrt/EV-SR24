#ifndef _INJDDPFI_DAT_H
#define _INJDDPFI_DAT_H

#ifndef _INJDDPFI_GS_HEADER
#define _INJDDPFI_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _ATS_numInjImp_C_DEF
#define _ATS_numInjImp_C_DEF
#endif /* _ATS_NUMINJIMP_C_DEF */

#ifndef _ATS_tiInjLngth_C_DEF
#define _ATS_tiInjLngth_C_DEF
#endif /* _ATS_TIINJLNGTH_C_DEF */

#ifndef _ATS_tiInjPer_C_DEF
#define _ATS_tiInjPer_C_DEF
#endif /* _ATS_TIINJPER_C_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_INJDDPFI_DATAFAR_T_DEF
#define DATA_INJDDPFI_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter ATS_numInjImp_C ----- */
    uint16 _ATS_numInjImp_C;
    /* ----- Parameter ATS_tiInjLngth_C ----- */
    uint32 _ATS_tiInjLngth_C;
    /* ----- Parameter ATS_tiInjPer_C ----- */
    uint32 _ATS_tiInjPer_C;

} DATA_InjDDPfi_DataFar_t;

extern const DATA_InjDDPfi_DataFar_t DATA_InjDDPfi_DataFar __attribute__
                                       ((asection (".pta_data_InjDDPfi_DataFar", "f=a")));

extern const DATA_InjDDPfi_DataFar_t * const VECT_InjDDPfi_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_InjDDPfi_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI16 +++++ */


/* +++++ Addressschema IramI32 +++++ */


/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _INJDDPFI_GS_HEADER */
#endif /* _INJDDPFI_DAT_H */
