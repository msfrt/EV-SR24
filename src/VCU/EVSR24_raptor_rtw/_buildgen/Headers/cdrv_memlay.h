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
 * $Filename__:cdrv_memlay.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:Component Toolbox-Import$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:TVH2SI$ 
 * $Date______:18.11.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:cdrv_memlay$ 
 * $Variant___:2.7.0$ 
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
 * 2.7.0; 0     18.11.2010 TVH2SI
 *   (349922) CRQ: Anpassung CDShdG an AutoSAR
 * 
 * 2.5.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

/*
   Macros to support flexible memory allocation with and without alignment(as specified by user)
   for CDRV modules.

   Sections supported:

   .CDRV_KNDET_edram  --> RAM_ED_KNDET( ) - allocation in EDRAM.
   .CDRV_ramfast   --> RAM_SBSS_FAST( ), RAM_DATA_FAST( ) ,
                       RAM_DATA_FASTALIGN(),RAM_SBSS_FASTALIGN() --> e.g. internal RAM

   .CDRV_ramslow   --> RAM_SBSS_SLOW( ), RAM_DATA_SLOW( ),
                       RAM_DATA_SLOWALIGN(),RAM_SBSS_SLOWALIGN()  --> e.g. external RAM

   .CDRV_codefast   --> CODE_FAST( )  --> e.g. scratch pad RAM
   .CDRV_codenorm   --> CODE_NORM( )  --> e.g. internal FLASH
   .CDRV_codeslow   --> CODE_SLOW( )  --> e.g. external FLASH

   .CDRV_constfast   --> CONST_FAST( ), CODE_FASTALIGN()  --> e.g. internal FLASH
   .CDRV_constslow   --> CONST_SLOW( )  CODE_SLOWALIGN()  --> e.g. external FLASH

   .CDRV_KNDET_ramfast      |
                            | --> special sections inserted for knock detection
   .CDRV_KNDET1_ramfast     |

   Note:
   alignment parameter must be always multiple of power of 2 i.e .. 2,4,8...
   Maximum suggested value is 8



   Usage:
      RAM_ED_KNDET(uint8 testvar10);
      RAM_SBSS_FAST(uint8 testvar2);
      RAM_SBSS_FAST8(uint8 testvar2);
      RAM_SBSS_SLOW(uint8 testvar2);
      RAM_SBSS_SLOW8(uint8 testvar2);
      RAM_DATA_FAST(uint8 testvar3) = 0;
      RAM_DATA_FAST8 (uint8 testvar3) = 0;
      RAM_DATA_SLOW(uint8 testvar3) = 0;
      RAM_DATA_SLOW8(uint8 testvar3) = 0;
      CODE_FAST( void testfktspram (void));
      CONST_SLOW(uint8 testvar5) = 0;
      CODE_FAST(void _main(void));
      CODE_NORM(testfkt1(uint8 par1));
      CODE_SLOW(testfkt2(uint8 par2));
      RAM_SBSS_FAST_KNDET(uint32  ctr22) = {0};
      RAM_SBSS_FAST_KNDET1(uint32  ctr23) = {0};
      RAM_SBSS_FASTALIGN(uint8 testvar,8) ;       ->  8 byte alignment
      RAM_SBSS_SLOWALIGN(uint8 testvar,8) ;       ->  8 byte alignment
      RAM_DATA_FASTALIGN(uint8 testvar,8) ;       ->  8 byte alignment
      RAM_DATA_SLOWALIGN(uint8 testvar,8) ;       ->  8 byte alignment
      CONST_FASTALIGN(uint8 par,4);         ->  4 byte alignment
      CONST_SLOWALIGN(uint8 par,4);         ->  4 byte alignment
*/



#ifndef _CDRV_MEMLAY_H
#define _CDRV_MEMLAY_H


/* address modes possible */
#define NORM          1
#define ABSOLUTE      2
#define SMALL         3

#include <cdrv_memlay_conf.h>          /* memlay configuration          */

#ifndef ADRMODE
    #error >>>>  'ADRMODE' undefined !   Must be defined in cdrv_memlay_conf.h !
#endif

/******************************************************************************/
/*                                                                            */
/* ADRMODE and the next defines are now in cdrv_conf.h                        */
/*                                                                            */
/* address modes possible                                                     */
/* #define NORM          1              allgemeine Adressierung  32 Bit       */
/* #define ABSOLUTE      2              absolute   Adressierung  18 Bit       */
/* #define SMALL         3              relative   Adressierung  16 Bit       */
/*                                                                            */
/* #define ADRMODE SMALL   or   NORM   or   ABSOLUTE                          */
/*                                                                            */
/******************************************************************************/


#if (ADRMODE == NORM)               /* allgemeine Adressierung  32 Bit */
#define CNST rodata.
#define DATA data.
#define SBSS bss.
#define FLAG 
#elif (ADRMODE == ABSOLUTE)         /* absolute   Adressierung  18 Bit */
#define CNST zrodata.
#define DATA zdata.
#define SBSS zbss.
#define FLAG    z
#elif (ADRMODE == SMALL)            /* relative   Adressierung  16 Bit */
#define CNST sdata.rodata.
#define DATA sdata.
#define SBSS sbss.
#define FLAG    s
#endif

                                    /* keine Umschaltung fuer KNDET... ! */
#define KNDETFLAG
#define KNDETSBSS bss.


#define RAMED(x)   x##_edram
#define RAMETKT(x) x##_etkt

#define RAMFAST(x) x##_ramfast
#define RAMSLOW(x) x##_ramslow

#define CODEFAST(x) x##_codefast
#define CODENORM(x) x##_codenorm
#define CODESLOW(x) x##_codeslow

#define CONSTFAST(x) x##_constfast
#define CONSTSLOW(x) x##_constslow

#define CODE   f=ax
#define RAM    f=aw
#define CDRV_CONST  f=a

#define STR(s) #s
#define XSTR(s) STR(s)
#define EXP(x) x
#define CAT(x,y) __attribute__ ((asection(x,y)))

#define NOREINI NoReIni
#define BYTE_1 a1           /*  8bit Alignment */
#define BYTE_2 a2           /* 16bit Alignment */
#define BYTE_4 a4           /* 32bit Alignment */



/****************** uninitialized data - edram ********************************/
/* allocation in EDRAM */
#define RAM_ED_KNDET(x) \
 x CAT(XSTR(EXP(.KNDETSBSS)RAMED(CDRV_KNDET)),XSTR(EXP(RAM)EXP(KNDETFLAG)))
/****************** uninitialized data - edram ********************************/

/****************** uninitialized data - etkt ********************************/
/* allocation in ETKT */
#define RAM_ETKT_KNDET(x) \
 x CAT(XSTR(EXP(.KNDETSBSS)RAMETKT(CDRV_KNDET)),XSTR(EXP(RAM)EXP(KNDETFLAG)))
/****************** uninitialized data - etkt ********************************/


/**********************************************************************/
/****************** uninitialized data ********************************/
/**********************************************************************/

/***************************/
/******* FAST **************/
/***************************/
/* uninitialized data, fast ram */
#define RAM_SBSS_FAST(x) \
 x CAT(XSTR(EXP(.SBSS)RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* uninitialized NoReIni data, fast ram */
#define RAM_SBSS_NOREINI_FAST(x) \
 x CAT(XSTR(EXP(.SBSS)RAMFAST(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* FAST 8BIT *******/
/* uninitialized data, fast ram, 8bit */
#define RAM_SBSS_FAST8(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_1.)RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* uninitialized NoReIni data, fast ram, 8bit */
#define RAM_SBSS_NOREINI_FAST8(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_1.)RAMFAST(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* FAST 16BIT *******/
/* uninitialized data, fast ram, 16bit */
#define RAM_SBSS_FAST16(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_2.)RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* uninitialized NoReIni data, fast ram, 16bit */
#define RAM_SBSS_NOREINI_FAST16(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_2.)RAMFAST(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* FAST 32BIT *******/
/* uninitialized data, fast ram, 32bit */
#define RAM_SBSS_FAST32(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_4.)RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* uninitialized NoReIni data, fast ram, 32bit */
#define RAM_SBSS_NOREINI_FAST32(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_4.)RAMFAST(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/***************************/
/******* SLOW **************/
/***************************/
/* uninitialized data, slow ram */
#define RAM_SBSS_SLOW(x) \
 x CAT(XSTR(EXP(.SBSS)RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* uninitialized NoReIni data, slow ram */
#define RAM_SBSS_NOREINI_SLOW(x) \
 x CAT(XSTR(EXP(.SBSS)RAMSLOW(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* SLOW 8BIT *******/
/* uninitialized data, slow ram, 8bit */
#define RAM_SBSS_SLOW8(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_1.)RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* uninitialized NoReIni data, slow ram, 8bit */
#define RAM_SBSS_NOREINI_SLOW8(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_1.)RAMSLOW(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* SLOW 16BIT *******/
/* uninitialized data, slow ram, 16bit */
#define RAM_SBSS_SLOW16(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_2.)RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* uninitialized NoReIni data, slow ram, 16bit */
#define RAM_SBSS_NOREINI_SLOW16(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_2.)RAMSLOW(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* SLOW 32BIT *******/
/* uninitialized data, slow ram, 32bit */
#define RAM_SBSS_SLOW32(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_4.)RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* uninitialized NoReIni data, slow ram, 32bit */
#define RAM_SBSS_NOREINI_SLOW32(x) \
 x CAT(XSTR(EXP(.SBSS)EXP(BYTE_4.)RAMSLOW(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))



/***********************************************************************/
/****************  initialized data ************************************/
/***********************************************************************/

/***************************/
/******* FAST **************/
/***************************/
/* initialized data, fast ram */
#define RAM_DATA_FAST(x) \
 x CAT(XSTR(EXP(.DATA)RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* initialized NoReIni data, fast ram */
#define RAM_DATA_NOREINI_FAST(x) \
 x CAT(XSTR(EXP(.DATA)RAMFAST(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* FAST 8BIT *******/
/* initialized data, fast ram, 8bit */
#define RAM_DATA_FAST8(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_1.)RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* initialized NoReIni data, fast ram, 8bit */
#define RAM_DATA_NOREINI_FAST8(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_1.)RAMFAST(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* FAST 16BIT *******/
/* initialized data, fast ram, 16bit */
#define RAM_DATA_FAST16(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_2.)RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* initialized NoReIni data, fast ram, 16bit */
#define RAM_DATA_NOREINI_FAST16(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_2.)RAMFAST(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* FAST 32BIT *******/
/* initialized data, fast ram, 32bit */
#define RAM_DATA_FAST32(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_4.)RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* initialized NoReIni data, fast ram, 32bit */
#define RAM_DATA_NOREINI_FAST32(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_4.)RAMFAST(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/***************************/
/******* SLOW **************/
/***************************/
/* initialized data, slow ram */
#define RAM_DATA_SLOW(x) \
 x CAT(XSTR(EXP(.DATA)RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* initialized NoReIni data, slow ram */
#define RAM_DATA_NOREINI_SLOW(x) \
 x CAT(XSTR(EXP(.DATA)RAMSLOW(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* SLOW 8BIT *******/
/* initialized data, slow ram, 8bit */
#define RAM_DATA_SLOW8(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_1.)RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* initialized NoReIni data, slow ram, 8bit */
#define RAM_DATA_NOREINI_SLOW8(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_1.)RAMSLOW(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* SLOW 16BIT *******/
/* initialized data, slow ram, 16bit */
#define RAM_DATA_SLOW16(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_2.)RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* initialized NoReIni data, slow ram, 16bit */
#define RAM_DATA_NOREINI_SLOW16(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_2.)RAMSLOW(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))

/******* SLOW 32BIT *******/
/* initialized data, slow ram, 32bit */
#define RAM_DATA_SLOW32(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_4.)RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)))
 
/* initialized NoReIni data, slow ram, 32bit */
#define RAM_DATA_NOREINI_SLOW32(x) \
 x CAT(XSTR(EXP(.DATA)EXP(BYTE_4.)RAMSLOW(CDRV)EXP(.NOREINI)),XSTR(EXP(RAM)EXP(FLAG)))


/***********************************************************************/
/**************** const *************************************************/
/**********************************************************************/
#define CONST_FAST(x) \
 x CAT(XSTR(EXP(.CNST)CONSTFAST(CDRV)),XSTR(EXP(CDRV_CONST)EXP(FLAG)))
#define CONST_SLOW(x) \
 x CAT(XSTR(EXP(.CNST)CONSTSLOW(CDRV)),XSTR(EXP(CDRV_CONST)EXP(FLAG)))

/**********************************************************************/
/**************** code **************************************************/
/**********************************************************************/
#define CODE_FAST(x)  x CAT(XSTR(CODEFAST(.CDRV)),XSTR(CODE))
#define CODE_NORM(x)  x CAT(XSTR(CODENORM(.CDRV)),XSTR(CODE))
#define CODE_SLOW(x)  x CAT(XSTR(CODESLOW(.CDRV)),XSTR(CODE))
/****************  **************************************************/


/* for knock control */
#define RAM_SBSS_FAST_KNDET(x) \
 x CAT(XSTR(EXP(.KNDETSBSS)RAMFAST(CDRV_KNDET)),XSTR(EXP(RAM)EXP(KNDETFLAG)))

#define RAM_SBSS_FAST_KNDET1(x) \
 x CAT(XSTR(EXP(.KNDETSBSS)RAMFAST(CDRV_KNDET1)),XSTR(EXP(RAM)EXP(KNDETFLAG)))


/****************** with alignment ********************************/
#define CATA(x,y,z) __attribute__ ((asection(x,y,z)))

/****************** uninitialized data ********************************/
/* uninitialized data, fast ram */
#define RAM_SBSS_FASTALIGN(x,al) \
 x CATA(XSTR(EXP(EXP(.SBSS)EXP(a##al.))RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)),XSTR(a=EXP(al)))
/* uninitialized data, slow ram */
#define RAM_SBSS_SLOWALIGN(x,al) \
 x CATA(XSTR(EXP(EXP(.SBSS)EXP(a##al.))RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)),XSTR(a=EXP(al)))

/****************  initialized data ************************************/
/* initialized data, fast ram */
#define RAM_DATA_FASTALIGN(x,al) \
 x CATA(XSTR(EXP(EXP(.DATA)EXP(a##al.))RAMFAST(CDRV)),XSTR(EXP(RAM)EXP(FLAG)),XSTR(a=EXP(al)))
/* initialized data, slow ram */
#define RAM_DATA_SLOWALIGN(x,al) \
 x CATA(XSTR(EXP(EXP(.DATA)EXP(a##al.))RAMSLOW(CDRV)),XSTR(EXP(RAM)EXP(FLAG)),XSTR(a=EXP(al)))

/**************** const *************************************************/
#define CONST_FASTALIGN(x,al) \
 x CATA(XSTR(EXP(EXP(.CNST)EXP(a##al.))CONSTFAST(CDRV)),XSTR(EXP(CDRV_CONST)EXP(FLAG)),XSTR(a=EXP(al)))
#define CONST_SLOWALIGN(x,al) \
 x CATA(XSTR(EXP(EXP(.CNST)EXP(a##al.))CONSTSLOW(CDRV)),XSTR(EXP(CDRV_CONST)EXP(FLAG)),XSTR(a=EXP(al)))

#endif
