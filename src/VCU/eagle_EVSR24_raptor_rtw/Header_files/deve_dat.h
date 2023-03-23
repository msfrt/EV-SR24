#ifndef _DEVE_DAT_H
#define _DEVE_DAT_H

#ifndef _DEVE_GS_HEADER
#define _DEVE_GS_HEADER

/* Class declarations */
/* ================== */
/* +++++ Class TurnOnDelay +++++ */
 
/* -- Implementation U16 -- */
/* -- OML-N-Class -- */
#ifndef _TURNONDELAY_U16_
#define _TURNONDELAY_U16_

/* -- Wrapper of Class TurnOnDelay in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable time */
   uint16 time;

} TURNONDELAY_U16;

#endif /* _TURNONDELAY_U16_ */

/* -- Implementation U8 -- */
/* -- OML-N-Class -- */
#ifndef _TURNONDELAY_U8_
#define _TURNONDELAY_U8_

/* -- Wrapper of Class TurnOnDelay in Addressschema Xram -- */
typedef struct
{
   /* Variable buffer */
   uint8 buffer;

   /* Variable time */
   uint8 time;

} TURNONDELAY_U8;

#endif /* _TURNONDELAY_U8_ */

/* +++++ Class DfpCl +++++ */
#ifndef _DFPCL_IMPL_
#define _DFPCL_IMPL_

/* Class DfpCl has no Attributes -> Wrapper is not generated */

#endif /* _DFPCL_IMPL_ */


/* Typedefs for complex parameter types */
/* ------------------------------------ */
#ifndef _CWPSEVE_DEF
#define _CWPSEVE_DEF
#endif /* _CWPSEVE_DEF */


/* Typedefs for complex parameter types (owned by classes) */
/* ------------------------------------------------------ */

/* Typedefs and definition of PTA structures and declaration of pointers on PTA structures */
/* --------------------------------------------------------------------------------------- */
/* +++++ Addressschema $notInEprom +++++ */


/* +++++ Addressschema DataFar +++++ */

/* -- AdS DataFar ----- */
#ifndef DATA_DEVE_DATAFAR_T_DEF
#define DATA_DEVE_DATAFAR_T_DEF
typedef struct {
    /* ----- Parameter CWPSEVE ----- */
    uint8 _CWPSEVE;

} DATA_DEVE_DataFar_t;

extern const DATA_DEVE_DataFar_t DATA_DEVE_DataFar __attribute__
                                       ((asection (".pta_data_DEVE_DataFar", "f=a")));

extern const DATA_DEVE_DataFar_t * const VECT_DEVE_DataFar __attribute__
                                             ((asection (".sdata.pta_vect_DEVE_DataFar", "f=as")));
#endif




/* +++++ Addressschema SingleBitI1 +++++ */


/* +++++ Addressschema Xram +++++ */



#endif /* _DEVE_GS_HEADER */
#endif /* _DEVE_DAT_H */
