#ifndef _HWSIG_DAT_H
#define _HWSIG_DAT_H

#ifndef _HWSIG_GS_HEADER
#define _HWSIG_GS_HEADER

/* Class declarations */
/* ================== */

/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _HWSIG_tSmp480_CUR_DEF
#define _HWSIG_tSmp480_CUR_DEF
typedef struct {
uint16 anzx;
uint16 sstx[18];
uint8 werte[18];
} HWSIG_tSmp480_CUR_t;
#endif /* _HWSIG_TSMP480_CUR_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_HWSIG_DATAFAR_T_DEF
#define DATA_HWSIG_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter HWSIG_tSmp480_CUR ----- */
    HWSIG_tSmp480_CUR_t _HWSIG_tSmp480_CUR;

} DATA_HWSIG_DataFar_t;

extern const DATA_HWSIG_DataFar_t DATA_HWSIG_DataFar __attribute__
                                       ((asection (".pta_data_HWSIG_DataFar", "f=a")));

extern const DATA_HWSIG_DataFar_t * const VECT_HWSIG_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_HWSIG_DataFar", "f=as")));
#endif




/* +++++ Addressschema intRam +++++ */


/* +++++ Addressschema SingleBitI1 +++++ */



#endif /* _HWSIG_GS_HEADER */
#endif /* _HWSIG_DAT_H */
