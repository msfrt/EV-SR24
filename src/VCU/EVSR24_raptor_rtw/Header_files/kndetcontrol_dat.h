#ifndef _KNDETCONTROL_DAT_H
#define _KNDETCONTROL_DAT_H

#ifndef _KNDETCONTROL_GS_HEADER
#define _KNDETCONTROL_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _KnDet_ThresNGradMeasWin_C_DEF
#define _KnDet_ThresNGradMeasWin_C_DEF
#endif /* _KNDET_THRESNGRADMEASWIN_C_DEF */

#ifndef _KnDet_ThresNumMeasWin_C_DEF
#define _KnDet_ThresNumMeasWin_C_DEF
#endif /* _KNDET_THRESNUMMEASWIN_C_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_KNDETCONTROL_DATAFAR_T_DEF
#define DATA_KNDETCONTROL_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter KnDet_ThresNGradMeasWin_C ----- */
    sint16 _KnDet_ThresNGradMeasWin_C;
    /* ----- Parameter KnDet_ThresNumMeasWin_C ----- */
    sint8 _KnDet_ThresNumMeasWin_C;

} DATA_KnDetControl_DataFar_t;

extern const DATA_KnDetControl_DataFar_t DATA_KnDetControl_DataFar __attribute__
                                       ((asection (".pta_data_KnDetControl_DataFar", "f=a")));

extern const DATA_KnDetControl_DataFar_t * const VECT_KnDetControl_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_KnDetControl_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI16 +++++ */


/* +++++ Addressschema IramI32 +++++ */


/* +++++ Addressschema IramI8 +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _KNDETCONTROL_GS_HEADER */
#endif /* _KNDETCONTROL_DAT_H */
