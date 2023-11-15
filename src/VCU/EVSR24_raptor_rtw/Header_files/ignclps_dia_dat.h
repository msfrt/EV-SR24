#ifndef _IGNCLPS_DIA_DAT_H
#define _IGNCLPS_DIA_DAT_H

#ifndef _IGNCLPS_DIA_GS_HEADER
#define _IGNCLPS_DIA_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _IgnClPs_ignChlsBench1_C_DEF
#define _IgnClPs_ignChlsBench1_C_DEF
#endif /* _IGNCLPS_IGNCHLSBENCH1_C_DEF */

#ifndef _IgnClPs_ignChlsBench2_C_DEF
#define _IgnClPs_ignChlsBench2_C_DEF
#endif /* _IGNCLPS_IGNCHLSBENCH2_C_DEF */

#ifndef _IgnClPs_mskInjOffBenchErr_CW_DEF
#define _IgnClPs_mskInjOffBenchErr_CW_DEF
#endif /* _IGNCLPS_MSKINJOFFBENCHERR_CW_DEF */

#ifndef _IgnClPs_mskInjOff_CW_DEF
#define _IgnClPs_mskInjOff_CW_DEF
#endif /* _IGNCLPS_MSKINJOFF_CW_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_IGNCLPS_DIA_DATAFAR_T_DEF
#define DATA_IGNCLPS_DIA_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter IgnClPs_ignChlsBench1_C ----- */
    uint16 _IgnClPs_ignChlsBench1_C;
    /* ----- Parameter IgnClPs_ignChlsBench2_C ----- */
    uint16 _IgnClPs_ignChlsBench2_C;
    /* ----- Parameter IgnClPs_mskInjOffBenchErr_CW ----- */
    uint8 _IgnClPs_mskInjOffBenchErr_CW;
    /* ----- Parameter IgnClPs_mskInjOff_CW ----- */
    uint8 _IgnClPs_mskInjOff_CW;

} DATA_IgnClPs_Dia_DataFar_t;

extern const DATA_IgnClPs_Dia_DataFar_t DATA_IgnClPs_Dia_DataFar __attribute__
                                       ((asection (".pta_data_IgnClPs_Dia_DataFar", "f=a")));

extern const DATA_IgnClPs_Dia_DataFar_t * const VECT_IgnClPs_Dia_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_IgnClPs_Dia_DataFar", "f=as")));
#endif




/* +++++ Addressschema intRam +++++ */


/* +++++ Addressschema IramI16 +++++ */


/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _IGNCLPS_DIA_GS_HEADER */
#endif /* _IGNCLPS_DIA_DAT_H */
