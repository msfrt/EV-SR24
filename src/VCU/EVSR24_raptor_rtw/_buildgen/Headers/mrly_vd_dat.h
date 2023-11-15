#ifndef _MRLY_VD_DAT_H
#define _MRLY_VD_DAT_H

#ifndef _MRLY_VD_GS_HEADER
#define _MRLY_VD_GS_HEADER

/* Class declarations */
/* ================== */
/* +++++ Class MRly_VD_Pub +++++ */
#ifndef _MRLY_VD_PUB_IMPL_
#define _MRLY_VD_PUB_IMPL_

/* Class MRly_VD_Pub has no Attributes -> Wrapper is not generated */

#endif /* _MRLY_VD_PUB_IMPL_ */

/* +++++ Class MRly_Set +++++ */
#ifndef _MRLY_SET_IMPL_
#define _MRLY_SET_IMPL_

/* Class MRly_Set has no Attributes -> Wrapper is not generated */

#endif /* _MRLY_SET_IMPL_ */


/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _MRly_debCtrHeal_ErlyOpng_C_DEF
#define _MRly_debCtrHeal_ErlyOpng_C_DEF
#endif /* _MRLY_DEBCTRHEAL_ERLYOPNG_C_DEF */

#ifndef _MRly_debCtrHeal_Stk_C_DEF
#define _MRly_debCtrHeal_Stk_C_DEF
#endif /* _MRLY_DEBCTRHEAL_STK_C_DEF */

#ifndef _MRly_debCtr_ErlyOpng_C_DEF
#define _MRly_debCtr_ErlyOpng_C_DEF
#endif /* _MRLY_DEBCTR_ERLYOPNG_C_DEF */

#ifndef _MRly_debCtr_Stk_C_DEF
#define _MRly_debCtr_Stk_C_DEF
#endif /* _MRLY_DEBCTR_STK_C_DEF */

#ifndef _MRly_WaitStk_C_DEF
#define _MRly_WaitStk_C_DEF
#endif /* _MRLY_WAITSTK_C_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_MRLY_VD_DATAFAR_T_DEF
#define DATA_MRLY_VD_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter MRly_debCtrHeal_ErlyOpng_C ----- */
    uint8 _MRly_debCtrHeal_ErlyOpng_C;
    /* ----- Parameter MRly_debCtrHeal_Stk_C ----- */
    uint8 _MRly_debCtrHeal_Stk_C;
    /* ----- Parameter MRly_debCtr_ErlyOpng_C ----- */
    uint8 _MRly_debCtr_ErlyOpng_C;
    /* ----- Parameter MRly_debCtr_Stk_C ----- */
    uint8 _MRly_debCtr_Stk_C;
    /* ----- Parameter MRly_WaitStk_C ----- */
    uint16 _MRly_WaitStk_C;

} DATA_MRly_VD_DataFar_t;

extern const DATA_MRly_VD_DataFar_t DATA_MRly_VD_DataFar __attribute__
                                       ((asection (".pta_data_MRly_VD_DataFar", "f=a")));

extern const DATA_MRly_VD_DataFar_t * const VECT_MRly_VD_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_MRly_VD_DataFar", "f=as")));
#endif




/* +++++ Addressschema IramI32 +++++ */


/* +++++ Addressschema IramNoReIniI8 +++++ */


/* +++++ Addressschema IramNvI32 +++++ */


/* +++++ Addressschema IramNvI8 +++++ */


/* +++++ Addressschema MsgRam +++++ */


/* +++++ Addressschema MsgRamI16 +++++ */



#endif /* _MRLY_VD_GS_HEADER */
#endif /* _MRLY_VD_DAT_H */
