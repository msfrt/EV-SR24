/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************

 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:stddefme.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:NESTORADMINSDOM$
 * $Date______:31.07.2008$
 * $Class_____:SWHDR$
 * $Name______:stddefme$
 * $Variant___:1.4.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $Generated_:$
 *************************************************************************
 *
 * $UniqueName:$
 * $Component_:$
 *
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 1.4.0; 0     31.07.2008 NESTORADMINSDOM
 *   .
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

/********************************************************************************/
/*                                                                              */
/*      Protection against multiple includes (begin)                            */

#ifndef _STDDEFME_H
#define _STDDEFME_H


/*                                                                              */
/********************************************************************************/



/********************************************************************************/
/*      Required includes for special functions                                 */
/********************************************************************************/

#include    "e_inface.h"                    /* Erkosek main include file */

/* Workaround for double defines: force include here */
#include    "cpu.h"
#include    "srvb.h"


/**********************************************************************/
/**** Inline functions                                             ****/
/**********************************************************************/

#define INLINE_FUNCTION static __inline__ __attribute__((always_inline))


/**********************************************************************/
/**** values for arithmetic functions                              ****/
/**********************************************************************/

/* defines for C Code use */
#define     MAXBYTE         ((uint8)(0xFFu))
#define     MINBYTE         ((uint8)(0x00u))

#define     MAXINT8         ((sint8)( 127))
#define     MININT8         ((sint8)(-128))

#define     MAXWORD         ((uint16)(0xFFFFu))
#define     MINWORD         ((uint16)(0x0000u))

#define     MAXINT16        ((sint16)( 32767))
#define     MININT16        ((sint16)(-32768))

#define     MAXLWORD        ((uint32)(0xFFFFFFFFul))
#define     MINLWORD        ((uint32)(0x00000000ul))

#define     MAXINT32        ((sint32)(0x7FFFFFFFl))
#define     MININT32        ((sint32)(0x80000000l))

/* defines for use in preprocessor instructions: */
#define     MAXBYTE_PRE     0xFFu
#define     MINBYTE_PRE     0

#define     MAXINT8_PRE     127
#define     MININT8_PRE     -128

#define     MAXWORD_PRE     0xFFFFu
#define     MINWORD_PRE     0

#define     MAXINT16_PRE    32767
#define     MININT16_PRE    -32768

#define     MAXLWORD_PRE    0xFFFFFFFFul
#define     MINLWORD_PRE    0

#define     MAXINT32_PRE    0x7FFFFFFFl
#define     MININT32_PRE    0x80000000l


/* declaration of integral datatypes
*************************************/
/* bit defined in std_type.h! */
/* C-definition ME7/9:      ME17:   */
#define         Byte        uint8
#define         Int8        sint8
#define         Word        uint16
#define         Int16       sint16
#define         LWord       uint32
#define         Int32       sint32



#if ((defined(HIGH_BYTE_FIRST)) && (HIGH_BYTE_FIRST))

    #error 'The little endian configuration is not tested (HIGH_BYTE_FIRST == 1). Ask the author for support'

/* declarations of basic structures
************************************/

typedef struct
{
    Byte    h;
    Byte    l;
} Wrd1;

typedef union
{
    Word    wrd;
    Wrd1    byt;
} Wrd;

typedef struct
{
    Word    h;
    Word    l;
} LWrd1;

typedef union
{
   LWord    lng;
   LWrd1    wrd;
}LWrd;

typedef struct
{
    Byte    hh;
    Byte    hl;
    Byte    lh;
    Byte    ll;
} Lng;

typedef union
{
    LWord   lng;
    LWrd1   wrd;
    Lng     byt;
} LWrdByt;


typedef union
{
    Int32   lng;
    struct
    {
        Int16   h;
        Word    l;
    } wrd;
} LInt;

typedef struct
{
    sint16  h;
    uint16  l;
} SWrd;

typedef struct
{
    sint8   hh;
    uint8   hl;
    uint8   lh;
    uint8   ll;
} SLng;

typedef union
{
    sint32          lng;
    SWrd            wrd;
    SLng            byt;
} LIntByt;


#else

/* declarations of basic structures
************************************/

typedef struct
{
    Byte    l;
    Byte    h;
} Wrd1;

typedef union
{
    Word    wrd;
    Wrd1    byt;
} Wrd;

typedef struct
{
    Word    l;
    Word    h;
} LWrd1;

typedef union
{
   LWord    lng;
   LWrd1    wrd;
}LWrd;

typedef struct
{
    Byte    ll;
    Byte    lh;
    Byte    hl;
    Byte    hh;
} Lng;

typedef union
{
    LWord   lng;
    LWrd1   wrd;
    Lng     byt;
} LWrdByt;


typedef union
{
    Int32   lng;
    struct
    {
        Word    l;
        Int16   h;

    } wrd;
} LInt;

typedef struct
{
    uint16  l;
    sint16  h;
} SWrd;

typedef struct
{
    uint8   ll;
    uint8   lh;
    uint8   hl;
    sint8   hh;
} SLng;

typedef union
{
    sint32          lng;
    SWrd            wrd;
    SLng            byt;
} LIntByt;



#endif

/************************************************************************/
/* macro for TurnOnDelay                                                */
/************************************************************************/
/* - do not use signed values for DelayTim or Kx_DELAYTIM               */
/* - define OutBit only as static or global                             */
/* - OutBit is only the Bit-name without Macro-Extension (e.g.: B_out)  */
/* - it is necessary to load DelayTim with Kx_DELAYTIM in ini-process   */
/* - setting of OutBit in ini-process depends on FDEF                   */
/************************************************************************/

/* MISRA RULE 3412 VIOLATION: Macro definition is correct  */

#define TURN_ON_DEL(Cond, DelayTim, Kx_DELAYTIM, OutBit)    \
    if ( (Cond) )                                           \
    {                                                       \
        if ( (DelayTim) != 0 )                              \
        {                                                   \
            (DelayTim)--;                                   \
        }                                                   \
        else                                                \
        {                                                   \
            SET_##OutBit;                                   \
        }                                                   \
    }                                                       \
    else                                                    \
    {                                                       \
        (DelayTim) = (Kx_DELAYTIM);                         \
        CLR_##OutBit;                                       \
    }

/************************************************************************/
/* macro for TurnOffDelay                                               */
/************************************************************************/
/* - do not use signed values for DelayTim or Kx_DELAYTIM               */
/* - define OutBit only as static or global                             */
/* - OutBit is only the Bit-name without Macro-Extension (e.g.: B_out)  */
/* - it is necessary to load DelayTim with Kx_DELAYTIM in ini-process   */
/* - setting of OutBit in ini-process depends on FDEF                   */
/************************************************************************/

/* MISRA RULE 3412 VIOLATION: Macro definition is correct  */

#define TURN_OFF_DEL(Cond, DelayTim, Kx_DELAYTIM, OutBit)   \
    if ( (Cond) )                                           \
    {                                                       \
        (DelayTim) = (Kx_DELAYTIM);                         \
        SET_##OutBit;                                       \
    }                                                       \
    else                                                    \
    {                                                       \
        if ( (DelayTim) != 0 )                              \
        {                                                   \
            (DelayTim)--;                                   \
        }                                                   \
        else                                                \
        {                                                   \
            CLR_##OutBit;                                   \
        }                                                   \
    }

/************************************************************************/
/* macro for TurnOnDelay with variable time during counting             */
/************************************************************************/
/* - define OutBit only as static or global                             */
/* - OutBit is only the Bit-name without Macro-Extension (e.g.: B_out)  */
/* - setting of OutBit in ini-process depends on FDEF                   */
/************************************************************************/

/* MISRA RULE 3412 VIOLATION: Macro definition is correct  */

#define TURN_ON_DEL_VAR(Cond, DelayTim, Kx_DELAYTIM, OutBit)    \
    if ( (Cond) )                                               \
    {                                                           \
        if ( (DelayTim) < (Kx_DELAYTIM))                        \
        {                                                       \
            (DelayTim)++;                                       \
        }                                                       \
        else                                                    \
        {                                                       \
            SET_##OutBit;                                       \
        }                                                       \
    }                                                           \
    else                                                        \
    {                                                           \
        (DelayTim) = 0;                                         \
        CLR_##OutBit;                                           \
    }

/************************************************************************/
/* macro for TurnOffDelay with variable time during counting            */
/************************************************************************/
/* - define OutBit only as static or global                             */
/* - OutBit is only the Bit-name without Macro-Extension (e.g.: B_out)  */
/* - setting of OutBit in ini-process depends on FDEF                   */
/************************************************************************/

/* MISRA RULE 3412 VIOLATION: Macro definition is correct  */

#define TURN_OFF_DEL_VAR(Cond, DelayTim, Kx_DELAYTIM, OutBit)   \
    if ( (Cond) )                                               \
    {                                                           \
        (DelayTim) = 0;                                         \
        SET_##OutBit;                                           \
    }                                                           \
    else                                                        \
    {                                                           \
        if ( (DelayTim) < (Kx_DELAYTIM) )                       \
        {                                                       \
            (DelayTim)++;                                       \
        }                                                       \
        else                                                    \
        {                                                       \
            CLR_##OutBit;                                       \
        }                                                       \
    }

/************************************************************************/

/*************************************************************************/
/*                                                                       */
/*                        Macro for system time                          */
/*                                                                       */
/*************************************************************************/


/**************************************************************************
***             Documentation can be found here:                        ***

http://www2.intranet.bosch.com/ds/me_d-edc-17/platform/core/40_hwe/72_cpu/index.html

**************************************************************************/

/*************************************************************************/
/*  Cpu_GetSysTime returns the 56 bit timer                              */
/*  the unit is the TICK                                                 */
/*************************************************************************/


/*************************************************************************/
/*              returns the SytemTime in milliseconds                    */
/* the returned type is sint32,                                          */
/* there is no risk of overflow:                                         */
/* The overflow happens 596 hours (24 days) after the start              */
#define GETSYSTEMTIME_MS                                            \
    (SrvB_Div64((sint64)(Cpu_GetSysTime()), (sint32)(CPU_MS_TO_TICKS(1))))

/*************************************************************************/
/*              returns the SytemTime in seconds                         */
/* the returned type is sint32,                                          */
/* there is no risk of overflow:                                         */
/* The overflow happens 68 years after the start                         */
#define GETSYSTEMTIME_S                                             \
        (SrvB_Div64((sint64)(Cpu_GetSysTime()), (sint32)(CPU_S_TO_TICKS(1))))

/*                                                                       */
/*************************************************************************/


/*************************************************************************/
/*                                                                       */
/*                       Macro for interrupts                            */
/*                                                                       */
/*************************************************************************/

/**************************************************************************
***             Documentation can be found here:                        ***

http://www2.intranet.bosch.com/ds/me_d-edc-17/platform/core/41_OS/index.html

**************************************************************************/

/* definition for interrupts features */
/* Those functions are provided by the ERKOSEK system */
/* workaround for double defines from cpu_pub.h */
#undef  STD_SUSPEND_INTERRUPTS
#undef  STD_RESUME_INTERRUPTS

/* MISRA RULE 3412 VIOLATION: Macro definition is correct  */

#define STD_SUSPEND_INTERRUPTS  SuspendOSInterrupts();

/* MISRA RULE 3412 VIOLATION: Macro definition is correct  */

#define STD_RESUME_INTERRUPTS   ResumeOSInterrupts();


/*************************************************************************/

/* _STDDEFME_H */
#endif
