#ifndef _IGNCLPS_CONCK_DAT_H
#define _IGNCLPS_CONCK_DAT_H

#ifndef _IGNCLPS_CONCK_GS_HEADER
#define _IGNCLPS_CONCK_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _IgnClPs_Count_DEF
#define _IgnClPs_Count_DEF
#endif /* _IGNCLPS_COUNT_DEF */

#ifndef _IgnClPs_iTh_C_DEF
#define _IgnClPs_iTh_C_DEF
#endif /* _IGNCLPS_ITH_C_DEF */

#ifndef _IgnClPs_nEng_C_DEF
#define _IgnClPs_nEng_C_DEF
#endif /* _IGNCLPS_NENG_C_DEF */

#ifndef _IgnClPs_tComp_C_DEF
#define _IgnClPs_tComp_C_DEF
#endif /* _IGNCLPS_TCOMP_C_DEF */

#ifndef _IgnClPs_uBattMax_C_DEF
#define _IgnClPs_uBattMax_C_DEF
#endif /* _IGNCLPS_UBATTMAX_C_DEF */

#ifndef _IgnClPs_uBattMin_C_DEF
#define _IgnClPs_uBattMin_C_DEF
#endif /* _IGNCLPS_UBATTMIN_C_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_IGNCLPS_CONCK_DATAFAR_T_DEF
#define DATA_IGNCLPS_CONCK_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter IgnClPs_Count ----- */
    uint8 _IgnClPs_Count;
    /* ----- Parameter IgnClPs_iTh_C ----- */
    uint8 _IgnClPs_iTh_C;
    /* ----- Parameter IgnClPs_nEng_C ----- */
    sint16 _IgnClPs_nEng_C;
    /* ----- Parameter IgnClPs_tComp_C ----- */
    uint8 _IgnClPs_tComp_C;
    /* ----- Parameter IgnClPs_uBattMax_C ----- */
    uint8 _IgnClPs_uBattMax_C;
    /* ----- Parameter IgnClPs_uBattMin_C ----- */
    uint8 _IgnClPs_uBattMin_C;

} DATA_IgnClPs_ConCK_DataFar_t;

extern const DATA_IgnClPs_ConCK_DataFar_t DATA_IgnClPs_ConCK_DataFar __attribute__
                                       ((asection (".pta_data_IgnClPs_ConCK_DataFar", "f=a")));

extern const DATA_IgnClPs_ConCK_DataFar_t * const VECT_IgnClPs_ConCK_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_IgnClPs_ConCK_DataFar", "f=as")));
#endif




/* +++++ Addressschema intRam +++++ */


/* +++++ Addressschema IramI16 +++++ */


/* +++++ Addressschema IramI32 +++++ */


/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _IGNCLPS_CONCK_GS_HEADER */
#endif /* _IGNCLPS_CONCK_DAT_H */
