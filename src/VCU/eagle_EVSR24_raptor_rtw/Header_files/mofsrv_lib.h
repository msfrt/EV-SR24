/* EasyCASE V6.5 09/06/2012 19:40:42 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,16711680,16711680,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=285 */
/* EasyCASE ( 1
   Interpolationsroutinen und Services fuer die Funktionsueberwachung */
/*<RBHead>
 *************************************************************************
 *                                                                       *
 *                      ROBERT BOSCH GMBH                                *
 *                          STUTTGART                                    *
 *                                                                       *
 *          Alle Rechte vorbehalten - All rights reserved                *
 *                                                                       *
 *************************************************************************
 *
 *************************************************************************
 *    Administrative Information (automatically filled in by eASEE)      *
 *************************************************************************
 *
 * $Filename__:mofsrv_lib.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 */
/* EasyCASE ( 84
   Modulheader und Aenderungskommentar */
/**************************************************************************
 * $Repository:SDOM$
 * $User______:SHN3COB$
 * $Date______:30.03.2017$
 * $Class_____:SWHDR$
 * $Name______:mofsrv_lib$
 * $Variant___:9.7.1$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $generated_:$
 *************************************************************************
 *
 * $FDEF______:$
 *
 *************************************************************************
 * Points to be taken into consideration when/if the module is modified:
 *
 * $LinkTo____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 9.7.1; 0     30.03.2017 SHN3COB
 *   checkin for code review
 * 
 * 9.7.0; 1     09.01.2017 SHN3COB
 *   review fix
 * 
 * 9.7.0; 0     05.01.2017 SHN3COB
 *   -
 *   Delay functionalities similar to MDG version MOFSRV_LIB 24.5.0
 * 
 * 9.6.0; 0     19.05.2016 SHN3COB
 *   warning removal due to mofsrv_libcplchkary
 * 
 * 9.5.0; 2     09.03.2016 JTU5KOR
 *   -
 *   swa warning fix
 * 
 * 9.5.0; 1     09.03.2016 JTU5KOR
 *   -
 *   Review corrections
 * 
 * 9.5.0; 0     27.02.2016 JTU5KOR
 *   -
 *   TAkeover of new services from MoFSrv_Lib 24.3.0
 *   -Delay,Reentrant Filters,Debounce,FlipFlop
 * 
 * 9.2.0; 0     07.09.2012 JDO4COB
 *   New Low Pass Filters with two different time constants for positive and 
 *   negative gradients of the input signal.
 *   
 *   U8,S8,U16 and S16 input-output interfaces available.
 * 
 * 9.1.0; 2     27.07.2012 SAJ2COB
 *   Review fix
 * 
 * 9.1.0; 1     26.07.2012 SAJ2COB
 *   Review fix
 * 
 * $
 *
 *************************************************************************
</RBHead>*/
/* EasyCASE ) */
#ifndef _MOFSRV_LIB_H
#define _MOFSRV_LIB_H                                                 /* module identifier  */

#include "mofsrv_lib_srvb.h"                            /*include autocode related services*/
#define   MOFSRV_LIB_MAXUINT32       4294967295u  
/* EasyCASE ( 130
   MoFSrv: defines for backward compatibility to Mx17 / VMx17 systems */
/* EasyCASE ( 143
   Kennlinien */
#ifndef Mo_IpoCurveU8
 #define Mo_IpoCurveU8 MoFSrv_Lib_IpoCurveU8
#else
 #if(Mo_IpoCurveU8 != MoFSrv_Lib_IpoCurveU8)
   #error >>>> wrong define for 'Mo_IpoCurveU8' !
 #endif
#endif

#ifndef Mo_IpoCurveU16U8
 #define Mo_IpoCurveU16U8 MoFSrv_Lib_IpoCurveU16U8
#else
 #if(Mo_IpoCurveU16U8 != MoFSrv_Lib_IpoCurveU16U8)
   #error >>>> wrong define for 'Mo_IpoCurveU16U8' !
 #endif
#endif

#ifndef Mo_IpoCurveU16
 #define Mo_IpoCurveU16 MoFSrv_Lib_IpoCurveU16
#else
 #if(Mo_IpoCurveU16 != MoFSrv_Lib_IpoCurveU16)
   #error >>>> wrong define for 'Mo_IpoCurveU16' !
 #endif
#endif

#ifndef Mo_IpoCurveS16
  #define Mo_IpoCurveS16 MoFSrv_Lib_IpoCurveS16
#else
 #if(Mo_IpoCurveS16 != MoFSrv_Lib_IpoCurveS16)
   #error >>>> wrong define for 'Mo_IpoCurveS16' !
 #endif
#endif

#ifndef Mo_IpoGroupCurveU8
 #define Mo_IpoGroupCurveU8 MoFSrv_Lib_IpoGroupCurveU8
#else
 #if(Mo_IpoGroupCurveU8 != MoFSrv_Lib_IpoGroupCurveU8)
   #error >>>> wrong define for 'Mo_IpoGroupCurveU8' !
 #endif
#endif

#ifndef Mo_IpoGroupCurveU16
 #define Mo_IpoGroupCurveU16 MoFSrv_Lib_IpoGroupCurveU16
#else
 #if(Mo_IpoGroupCurveU16 != MoFSrv_Lib_IpoGroupCurveU16)
   #error >>>> wrong define for 'Mo_IpoGroupCurveU16' !
 #endif
#endif

#ifndef Mo_IpoGroupCurveS16
 #define Mo_IpoGroupCurveS16 MoFSrv_Lib_IpoGroupCurveS16
#else
 #if(Mo_IpoGroupCurveS16 != MoFSrv_Lib_IpoGroupCurveS16)
   #error >>>> wrong define for 'Mo_IpoGroupCurveS16' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 142
   Kennfelder */
#ifndef Mo_IpoMapS16S16
 #define Mo_IpoMapS16S16 MoFSrv_Lib_IpoMapS16S16
#else
 #if(Mo_IpoMapS16S16 != MoFSrv_Lib_IpoMapS16S16)
   #error >>>> wrong define for 'Mo_IpoMapS16S16' !
 #endif
#endif

#ifndef Mo_IpoMapU8U8
 #define Mo_IpoMapU8U8 MoFSrv_Lib_IpoMapU8U8
#else
 #if(Mo_IpoMapU8U8 != MoFSrv_Lib_IpoMapU8U8)
   #error >>>> wrong define for 'Mo_IpoMapU8U8' !
 #endif
#endif

#ifndef Mo_IpoGroupMapS16
 #define Mo_IpoGroupMapS16 MoFSrv_Lib_IpoGroupMapS16
#else
 #if(Mo_IpoGroupMapS16 != MoFSrv_Lib_IpoGroupMapS16)
   #error >>>> wrong define for 'Mo_IpoGroupMapS16' !
 #endif
#endif

#ifndef Mo_IpoGroupMapU8
 #define Mo_IpoGroupMapU8 MoFSrv_Lib_IpoGroupMapU8
#else
 #if(Mo_IpoGroupMapU8 != MoFSrv_Lib_IpoGroupMapU8)
   #error >>>> wrong define for 'Mo_IpoGroupMapU8' !
 #endif
#endif

#ifndef Mo_IpoGroupMapS8
 #define Mo_IpoGroupMapS8 MoFSrv_Lib_IpoGroupMapS8
#else
 #if(Mo_IpoGroupMapS8 != MoFSrv_Lib_IpoGroupMapS8)
   #error >>>> wrong define for 'Mo_IpoGroupMapS8' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 141
   Stuetzstellensuche */
#ifndef Mo_DistrSearchS16
 #define Mo_DistrSearchS16 MoFSrv_Lib_DistrSearchS16
#else
 #if(Mo_DistrSearchS16 != MoFSrv_Lib_DistrSearchS16)
   #error >>>> wrong define for 'Mo_DistrSearchS16' !
 #endif
#endif

#ifndef Mo_DistrSearchU16
 #define Mo_DistrSearchU16 MoFSrv_Lib_DistrSearchU16
#else
 #if(Mo_DistrSearchU16 != MoFSrv_Lib_DistrSearchU16)
   #error >>>> wrong define for 'Mo_DistrSearchU16' !
 #endif
#endif

#ifndef Mo_DistrSearchU8
 #define Mo_DistrSearchU8 MoFSrv_Lib_DistrSearchU8
#else
 #if(Mo_DistrSearchU8 != MoFSrv_Lib_DistrSearchU8)
   #error >>>> wrong define for 'Mo_DistrSearchU8' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 140
   Arithmetische Funktionen */
#ifndef Mo_MulDiv32
 #define Mo_MulDiv32 MoFSrv_Lib_MulDiv32
#else
 #if(Mo_MulDiv32 != MoFSrv_Lib_MulDiv32)
   #error >>>> wrong define for 'Mo_MulDiv32' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 139
   Tiefpassfilter mit Totzeit */
#ifndef Mo_TotLowPassS8
 #define Mo_TotLowPassS8 MoFSrv_Lib_TotLowPassS8
#else
 #if(Mo_TotLowPassS8 != MoFSrv_Lib_TotLowPassS8)
   #error >>>> wrong define for 'Mo_TotLowPassS8' !
 #endif
#endif

#ifndef Mo_TotLowPassS8Ini
 #define Mo_TotLowPassS8Ini MoFSrv_Lib_TotLowPassS8Ini
#else
 #if(Mo_TotLowPassS8Ini != MoFSrv_Lib_TotLowPassS8Ini)
   #error >>>> wrong define for 'Mo_TotLowPassS8Ini' !
 #endif
#endif

#ifndef Mo_TotLowPassU8
 #define Mo_TotLowPassU8 MoFSrv_Lib_TotLowPassU8
#else
 #if(Mo_TotLowPassU8 != MoFSrv_Lib_TotLowPassU8)
   #error >>>> wrong define for 'Mo_TotLowPassU8' !
 #endif
#endif

#ifndef Mo_TotLowPassU8Ini
 #define Mo_TotLowPassU8Ini MoFSrv_Lib_TotLowPassU8Ini
#else
 #if(Mo_TotLowPassU8Ini != MoFSrv_Lib_TotLowPassU8Ini)
   #error >>>> wrong define for 'Mo_TotLowPassU8Ini' !
 #endif
#endif

#ifndef Mo_TotLowPassS16
 #define Mo_TotLowPassS16 MoFSrv_Lib_TotLowPassS16
#else
 #if(Mo_TotLowPassS16 != MoFSrv_Lib_TotLowPassS16)
   #error >>>> wrong define for 'Mo_TotLowPassS16' !
 #endif
#endif

#ifndef Mo_TotLowPassS16Ini
 #define Mo_TotLowPassS16Ini MoFSrv_Lib_TotLowPassS16Ini
#else
 #if(Mo_TotLowPassS16Ini != MoFSrv_Lib_TotLowPassS16Ini)
   #error >>>> wrong define for 'Mo_TotLowPassS16Ini' !
 #endif
#endif

#ifndef Mo_TotLowPassU16
 #define Mo_TotLowPassU16 MoFSrv_Lib_TotLowPassU16
#else
 #if(Mo_TotLowPassU16 != MoFSrv_Lib_TotLowPassU16)
   #error >>>> wrong define for 'Mo_TotLowPassU16' !
 #endif
#endif

#ifndef Mo_TotLowPassU16Ini
 #define Mo_TotLowPassU16Ini MoFSrv_Lib_TotLowPassU16Ini
#else
 #if(Mo_TotLowPassU16Ini != MoFSrv_Lib_TotLowPassU16Ini)
   #error >>>> wrong define for 'Mo_TotLowPassU16Ini' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 137
   Tiefpassfilter */
#ifndef Mo_LowPassS8
 #define Mo_LowPassS8 MoFSrv_Lib_LowPassS8
#else
 #if(Mo_LowPassS8 != MoFSrv_Lib_LowPassS8)
   #error >>>> wrong define for 'Mo_LowPassS8' !
 #endif
#endif

#ifndef Mo_LowPassU8
 #define Mo_LowPassU8 MoFSrv_Lib_LowPassU8
#else
 #if(Mo_LowPassU8 != MoFSrv_Lib_LowPassU8)
   #error >>>> wrong define for 'Mo_LowPassU8' !
 #endif
#endif

#ifndef Mo_LowPassS16
 #define Mo_LowPassS16 MoFSrv_Lib_LowPassS16
#else
 #if(Mo_LowPassS16 != MoFSrv_Lib_LowPassS16)
   #error >>>> wrong define for 'Mo_LowPassS16' !
 #endif
#endif

#ifndef Mo_LowPassU16
 #define Mo_LowPassU16 MoFSrv_Lib_LowPassU16
#else
 #if(Mo_LowPassU16 != MoFSrv_Lib_LowPassU16)
   #error >>>> wrong define for 'Mo_LowPassU16' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 324
   Irreversible Error handling */
#ifndef Mo_IrvErrHandling
 #define Mo_IrvErrHandling MoFSrv_Lib_IrrvErrHandlingU32
#else
 #if(Mo_IrvErrHandling != MoFSrv_Lib_IrrvErrHandlingU32)
   #error >>>> wrong define for 'Mo_IrvErrHandling' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 358
   Integral Debounce */
#ifndef Mo_Integral_Deb
 #define Mo_Integral_Deb MoFSrv_Lib_IntegralDebS32
#else
 #if(Mo_Integral_Deb != MoFSrv_Lib_IntegralDebS32)
   #error >>>> wrong define for 'Mo_Integral_Deb' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 151
   MoFSrv: defines for backward compatibility to EDC17 systems */
/* EasyCASE ( 152
   Kennlinien */
#ifndef MoFSrv_IpoCurveU8
 #define MoFSrv_IpoCurveU8 MoFSrv_Lib_IpoCurveU8
#else
 #if(MoFSrv_IpoCurveU8 != MoFSrv_Lib_IpoCurveU8)
   #error >>>> wrong define for 'MoFSrv_IpoCurveU8' !
 #endif
#endif

#ifndef MoFSrv_IpoCurveS16
  #define MoFSrv_IpoCurveS16 MoFSrv_Lib_IpoCurveS16
#else
 #if(MoFSrv_IpoCurveS16 != MoFSrv_Lib_IpoCurveS16)
   #error >>>> wrong define for 'MoFSrv_IpoCurveS16' !
 #endif
#endif

#ifndef MoFSrv_IpoGroupCurveU8
 #define MoFSrv_IpoGroupCurveU8 MoFSrv_Lib_IpoGroupCurveU8
#else
 #if(MoFSrv_IpoGroupCurveU8 != MoFSrv_Lib_IpoGroupCurveU8)
   #error >>>> wrong define for 'MoFSrv_IpoGroupCurveU8' !
 #endif
#endif

#ifndef MoFSrv_IpoGroupCurveS16
 #define MoFSrv_IpoGroupCurveS16 MoFSrv_Lib_IpoGroupCurveS16
#else
 #if(MoFSrv_IpoGroupCurveS16 != MoFSrv_Lib_IpoGroupCurveS16)
   #error >>>> wrong define for 'MoFSrv_IpoGroupCurveS16' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 153
   Kennfelder */
#ifndef MoFSrv_IpoMapS16S16
 #define MoFSrv_IpoMapS16S16 MoFSrv_Lib_IpoMapS16S16
#else
 #if(MoFSrv_IpoMapS16S16 != MoFSrv_Lib_IpoMapS16S16)
   #error >>>> wrong define for 'MoFSrv_IpoMapS16S16' !
 #endif
#endif

#ifndef MoFSrv_IpoMapU8U8
 #define MoFSrv_IpoMapU8U8 MoFSrv_Lib_IpoMapU8U8
#else
 #if(MoFSrv_IpoMapU8U8 != MoFSrv_Lib_IpoMapU8U8)
   #error >>>> wrong define for 'MoFSrv_IpoMapU8U8' !
 #endif
#endif

#ifndef MoFSrv_IpoGroupMapS16
 #define MoFSrv_IpoGroupMapS16 MoFSrv_Lib_IpoGroupMapS16
#else
 #if(MoFSrv_IpoGroupMapS16 != MoFSrv_Lib_IpoGroupMapS16)
   #error >>>> wrong define for 'MoFSrv_IpoGroupMapS16' !
 #endif
#endif

#ifndef MoFSrv_IpoGroupMapU8
 #define MoFSrv_IpoGroupMapU8 MoFSrv_Lib_IpoGroupMapU8
#else
 #if(MoFSrv_IpoGroupMapU8 != MoFSrv_Lib_IpoGroupMapU8)
   #error >>>> wrong define for 'MoFSrv_IpoGroupMapU8' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 154
   Stuetzstellensuche */
#ifndef MoFSrv_DistrSearchS16
 #define MoFSrv_DistrSearchS16 MoFSrv_Lib_DistrSearchS16
#else
 #if(MoFSrv_DistrSearchS16 != MoFSrv_Lib_DistrSearchS16)
   #error >>>> wrong define for 'MoFSrv_DistrSearchS16' !
 #endif
#endif

#ifndef MoFSrv_DistrSearchU8
 #define MoFSrv_DistrSearchU8 MoFSrv_Lib_DistrSearchU8
#else
 #if(MoFSrv_DistrSearchU8 != MoFSrv_Lib_DistrSearchU8)
   #error >>>> wrong define for 'MoFSrv_DistrSearchU8' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 155
   Arithmetische Funktionen */
#ifndef MoFSrv_MulDiv32
 #define MoFSrv_MulDiv32 MoFSrv_Lib_MulDiv32
#else
 #if(MoFSrv_MulDiv32 != MoFSrv_Lib_MulDiv32)
   #error >>>> wrong define for 'MoFSrv_MulDiv32' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ( 158
   Ramp Function */
#ifndef MoFSrv_RampSwitch
 #define MoFSrv_RampSwitch MoFSrv_Lib_RampSwitch
#else
 #if(MoFSrv_RampSwitch != MoFSrv_Lib_RampSwitch)
   #error >>>> wrong define for 'MoFSrv_RampSwitch' !
 #endif
#endif
#ifndef MoFSrv_Ramp
 #define MoFSrv_Ramp MoFSrv_Lib_Ramp
#else
 #if(MoFSrv_Ramp != MoFSrv_Lib_Ramp)
   #error >>>> wrong define for 'MoFSrv_Ramp' !
 #endif
#endif
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 159
   Defines for Service */
/* Definition for RAMP-Function                                                                            */
#define MOFSRV_LIB_RAMP_RISING   (1)     /**< definition for a rising ramp.                                */
#define MOFSRV_LIB_RAMP_FALLING  (-1)    /**< definition for a fallin ramp.                                */
#define MOFSRV_LIB_RAMP_END      (0)     /**< definition for a ramp that has reached its end value.        */

/* Bit positions in flag for RAMP-Switch                                                                   */
#define MOFSRV_LIB_RAMPSWITCH_POS    0UL /**< Switch position (0 = B, 1 = A)                               */
#define MOFSRV_LIB_RAMPSWITCH_ACTIVE 1UL /**< Ramp active     (0 = inactive, 1 = active)                   */
#define MOFSRV_LIB_RAMPSWITCH_DIR    2UL /**< Ramp direction  (00 = end, 01 = rising, 11 = falling)        */
#define MOFSRV_LIB_RAMPSWITCH_NUMDIR 2UL /**< Number of bits used for ramp direction                       */

/* Definition for UP DOWN LPF 8 BIT                                                                        */
#define MOFSRV_LIB_UPDWNLPF_TCMAX8   128U /*Max. time constant for 8 bit up down LPF                        */

/* Definition for UP DOWN LPF 16 BIT                                                                       */
#define MOFSRV_LIB_UPDWNLPF_TCMAX16  32768U /*Max. time constant for 16 bit up down LPF                     */

#define MOFSRV_LIB_MAXFLD             8
#define MOFSRV_LIB_7                  7
#define MOFSRV_LIB_MAX128(U8)   (((U8)  >   128U) ?   128U : (U8))
#define MOFSRV_LIB_ALL32BITS_SET    -1L         /* 0xFFFFFFFF                                              */
#define MOFSRV_LIB_MINSINT32        (1U<<31)    /* 0x80000000 (to avoid compiler warning, use shifted 1    */
#define MOFSRV_LIB_MAX32768(U16)(((U16) > 32768U) ? 32768U : (U16))

#define MOFSRV_LIB_MAXU8                255
#define MOFSRV_LIB_MAXUINT16            65535
#define MOFSRV_LIB_MAXSINT8             127
#define MOFSRV_LIB_MINSINT8             (-127-1)
#define MOFSRV_LIB_MAXSINT16            32767
#define   MOFSRV_LIB_MINSINT16          (-32767-1)

#define MOFSRV_LIB_ONE                  1
#define MOFSRV_LIB_ZERO                 0
#define MOFSRV_LIB_1000                 1000U
#define MOFSRV_LIB_100                  100U      /*  Macro defined Only for Mo_Integral_Deb Healing  Factor     */
/* EasyCASE ) */
/* EasyCASE ( 89
   Type Definitions */
/* EasyCASE ( 90
   Struktur fuer inneren Zustand von MoFSrv_Lib_TotLowPassS16 */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSS16DATA_LVL2_
#define _MOFSRV_TOTLOWPASSS16DATA_LVL2_
typedef struct
{
        uint16 FltLo_U16;               /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8  idx_U8;                  /* Zeitzaehler                                  */
        sint16 totFld_S16[8];           /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSS16DATA_LVL2;
#endif /* _MOFSRV_TOTLOWPASSS16DATA_LVL2_ */
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSS16DATACPL_CPL_
#define _MOFSRV_TOTLOWPASSS16DATACPL_CPL_
typedef struct
{
        uint16 FltLoCpl_U16;            /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8  idxCpl_U8;               /* Zeitzaehler                                  */
        uint16 totFldCpl_U16[8];        /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSS16DATACPL_CPL;
#endif /* _MOFSRV_TOTLOWPASSS16DATACPL_CPL_ */
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSS16DATA_IT_
#define _MOFSRV_TOTLOWPASSS16DATA_IT_
typedef struct
{
        uint16 FltLo_U16;               /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8  idx_U8;                  /* Zeitzaehler                                  */
        sint16 totFld_S16[8];           /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSS16DATA_IT;
#endif /* _MOFSRV_TOTLOWPASSS16DATA_IT_ */
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 103
   Struktur fuer inneren Zustand von MoFSrv_Lib_TotLowPassU16 */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSU16DATA_LVL2_
#define _MOFSRV_TOTLOWPASSU16DATA_LVL2_
typedef struct
{
        uint16 FltLo_U16;               /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8  idx_U8;                  /* Zeitzaehler                                  */
        uint16 totFld_U16[8];           /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSU16DATA_LVL2;
#endif /* _MOFSRV_TOTLOWPASSU16DATA_LVL2_ */
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSU16DATACPL_CPL_
#define _MOFSRV_TOTLOWPASSU16DATACPL_CPL_
typedef struct
{
        uint16 FltLoCpl_U16;            /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8  idxCpl_U8;               /* Zeitzaehler                                  */
        uint16 totFldCpl_U16[8];        /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSU16DATACPL_CPL;
#endif /* _MOFSRV_TOTLOWPASSU16DATACPL_CPL_ */
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSU16DATA_IT_
#define _MOFSRV_TOTLOWPASSU16DATA_IT_
typedef struct
{
        uint16 FltLo_U16;            /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8  idx_U8;               /* Zeitzaehler                                  */
        uint16 totFld_U16[8];        /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSU16DATA_IT;
#endif /* _MOFSRV_TOTLOWPASSU16DATA_IT_ */
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 105
   Struktur fuer inneren Zustand von MoFSrv_Lib_TotLowPassS8 */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSS8DATA_LVL2_
#define _MOFSRV_TOTLOWPASSS8DATA_LVL2_
typedef struct
{
        uint8 FltLo_U8;                 /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8 idx_U8;                   /* Zeitzaehler                                  */
        sint8 totFld_S8[8];             /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSS8DATA_LVL2;
#endif /* _MOFSRV_TOTLOWPASSS8DATA_LVL2_ */
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSS8DATACPL_CPL_
#define _MOFSRV_TOTLOWPASSS8DATACPL_CPL_
typedef struct
{
        uint8 FltLoCpl_U8;              /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8 idxCpl_U8;                /* Zeitzaehler                                  */
        uint8 totFldCpl_U8[8];          /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSS8DATACPL_CPL;
#endif /* _MOFSRV_TOTLOWPASSS8DATACPL_CPL_ */
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSS8DATA_IT_
#define _MOFSRV_TOTLOWPASSS8DATA_IT_
typedef struct
{
        uint8 FltLo_U8;                 /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8 idx_U8;                   /* Zeitzaehler                                  */
        sint8 totFld_S8[8];             /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSS8DATA_IT;
#endif /* _MOFSRV_TOTLOWPASSS8DATA_IT_ */
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 112
   Struktur fuer inneren Zustand von MoFSrv_Lib_TotLowPassU8 */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSU8DATA_LVL2_
#define _MOFSRV_TOTLOWPASSU8DATA_LVL2_
typedef struct
{
        uint8 FltLo_U8;                 /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8 idx_U8;                   /* Zeitzaehler                                  */
        uint8 totFld_U8[8];             /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSU8DATA_LVL2;
#endif /* _MOFSRV_TOTLOWPASSU8DATA_LVL2_ */
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSU8DATACPL_CPL_
#define _MOFSRV_TOTLOWPASSU8DATACPL_CPL_
typedef struct
{
        uint8 FltLoCpl_U8;              /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8 idxCpl_U8;                /* Zeitzaehler                                  */
        uint8 totFldCpl_U8[8];          /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSU8DATACPL_CPL;
#endif /* _MOFSRV_TOTLOWPASSU8DATACPL_CPL_ */
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#ifndef _MOFSRV_TOTLOWPASSU8DATA_IT_
#define _MOFSRV_TOTLOWPASSU8DATA_IT_
typedef struct
{
        uint8 FltLo_U8;                 /* Lo-Wert des gefilterten Ausgangswerts        */
        uint8 idx_U8;                   /* Zeitzaehler                                  */
        uint8 totFld_U8[8];             /* Array fuer Totzeit                           */
} MOFSRV_TOTLOWPASSU8DATA_IT;
#endif /* _MOFSRV_TOTLOWPASSU8DATA_IT_ */
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 350
   Struktur fuer inneren Zustand von MoFSrv_Lib_IrrvErrHandlingU32 */
/* EasyCASE < */
#ifndef _MOFSRV_IRRVERRHNDLGU32DATA_LVL2_
#define _MOFSRV_IRRVERRHNDLGU32DATA_LVL2_
typedef struct
{
        uint32 irrvMask_U32;                 /* irreversible error flags        */
        uint32 errMask_U32;                 /* active error flags              */
        uint32 ptdMask_U32;                 /* Permitted module specific error flags  */
} MOFSRV_IRRVERRHNDLGU32DATA_LVL2;
#endif /* _MOFSRV_IRRVERRHNDLGU32DATA_LVL2_ */
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 356
   Struktur fuer inneren Zustand von MoFSrv_Lib_IntegralDebS32 */
/* EasyCASE < */
#ifndef _MOFSRV_INTEGRALDEBS32DATA_LVL2_
#define _MOFSRV_INTEGRALDEBS32DATA_LVL2_
typedef struct
{
        sint16 Heal_S16;                 /* negative signal difference for healing purposes */
        sint32 tIntglMax_S32;            /* time integral signal difference by the time     */
        sint32 tErrLim_S32;              /* time integral error limitation */
} MOFSRV_INTEGRALDEBS32DATA_LVL2;
#endif /* _MOFSRV_INTEGRALDEBS32DATA_LVL2_ */
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 62
   Prototypes */
/*
***************************************************************************************************
* Prototypes
***************************************************************************************************
*/
 uint8  MoFSrv_Lib_IpoCurveU8(sint32 X, const volatile uint8 Curve[]);

 uint8  MoFSrv_Lib_IpoCurveU16U8(sint32 X, const uint16 anz, const uint16 *sst, const uint8 *werte);

 uint16 MoFSrv_Lib_IpoCurveU16(sint32 X, const volatile uint16 Curve[]);

 sint16 MoFSrv_Lib_IpoCurveS16(sint32 X, const volatile sint16 Curve[]);



 uint8  MoFSrv_Lib_IpoGroupCurveU8(sint32 Searchresult, const volatile uint8 CurveVal[]);

 uint16 MoFSrv_Lib_IpoGroupCurveU16(sint32 Searchresult, const volatile uint16 CurveVal[]);

 sint16 MoFSrv_Lib_IpoGroupCurveS16(sint32 Searchresult, const volatile sint16 CurveVal[]);


 sint16 MoFSrv_Lib_IpoMapS16S16(sint32 X, sint32 Y, const volatile sint16 MapVal[]);

 uint8  MoFSrv_Lib_IpoMapU8U8(sint32 X, sint32 Y, const volatile uint8 MapVal[]);



 sint16 MoFSrv_Lib_IpoGroupMapS16(sint32 XSearchRes, sint32 YSearchRes, sint32 Num,
                            const volatile sint16 MapVal[]);

 sint8  MoFSrv_Lib_IpoGroupMapS8(sint32 XSearchRes, sint32 YSearchRes, sint32 Num,
                            const volatile sint8 MapVal[]);

 uint8  MoFSrv_Lib_IpoGroupMapU8(sint32 XSearchRes, sint32 YSearchRes, sint32 Num,
                            const volatile uint8 MapVal[]);



 sint32 MoFSrv_Lib_DistrSearchS16(sint32 X, sint32 Num, const volatile sint16 Distr[]);

 sint32 MoFSrv_Lib_DistrSearchU16(sint32 X, sint32 Num, const volatile uint16 Distr[]);

 sint32 MoFSrv_Lib_DistrSearchU8(sint32 X, sint32 Num,  const volatile uint8 Distr[]);


 sint32 MoFSrv_Lib_MulDiv32(sint32 X, sint32 Y, sint32 Z);
/* EasyCASE ( 114
   Prototypen TotLowPass */
/* EasyCASE ( 147
   Comments */
/*
in_xx           Eingangswert
tiDel_xx        Zeit Totzeitelement. Wenn die Zeit 0 ist, wird das Totzeitglied
                deaktiviert. Gleichzeitig werden die Speicherelemente der Totzeit
                mit dem Wert in_xx initialisiert.
tiLp_xx         Zeitkonstante Tiefpass
active          Flag fuer Aktivierung Berechnung Totzeit + Tiefpass. Wenn das
                Flag false ist, werden die Speicherelemente der Totzeit mit dem
                Wert in_xx initialisiert.
ptr_FltHi_xx    Pointer auf die E2-Ausgangsvariable des Tiefpass-Filter.
ptr_FltHiCpl_xx Pointer auf die E2-CPL-Ausgangsvariable des Tiefpass-Filter
ptr_Data_xx     Pointer auf die E2-Datenstruktur der internen Zustandsgroessen
                des Tiefpass
                -Filter und Totzeitellement.
ptr_DataCpl_xx  Pointer auf die E2-CPL-Datenstruktur der internen Zustandsgroessen
                des Tiefpass
                -Filter und Totzeitellement.

Die Service-Funktionen kommen sowohl mit Unsigned als auch mit Signed Datentypen zurecht.
Wenn ein Null-Pointer uebergeben wird, dann wird das beschreiben der Komplemente in der
Funktion unterdrueckt.
Eine Ueberpruefung der Komplementvariablen wird in der Funktion nach Bedarf selbst
durchgefuehrt.Falls ein Pointer der E2-Variablen NULL ist, wird die Funktion ohne eine
Berechnung des Tiefpass bzw. Totzeit beendet.
*/
/* EasyCASE ) */
void MoFSrv_Lib_TotLowPassS8(  sint8                            in_S8,
                               uint8                            tiDel_U8,
                               uint8                            tiLp_U8,
                               bool                             active,
                               sint8                            * ptr_FltHi_S8,
                               uint8                            * ptr_FltHiCpl_U8,
                               MOFSRV_TOTLOWPASSS8DATA_LVL2     * ptr_Data,
                               MOFSRV_TOTLOWPASSS8DATACPL_CPL   * ptr_DataCpl
                            );

void MoFSrv_Lib_TotLowPassS8Ini(
                               sint8                            IV_S8,
                               sint8 *                          ptr_FltHi_S8,
                               uint8 *                          ptr_FltHiCpl_U8,
                               MOFSRV_TOTLOWPASSS8DATA_LVL2     * ptr_Data,
                               MOFSRV_TOTLOWPASSS8DATACPL_CPL   * ptr_DataCpl
                               );

void MoFSrv_Lib_TotLowPassS16( sint16                           in_S16,
                               uint8                            tiDel_U8,
                               uint16                           tiLp_U16,
                               bool                             active,
                               sint16 *                         ptr_FltHi_S16,
                               uint16 *                         ptr_FltHiCpl_U16,
                               MOFSRV_TOTLOWPASSS16DATA_LVL2    * ptr_Data,
                               MOFSRV_TOTLOWPASSS16DATACPL_CPL  * ptr_DataCpl
                            );

void MoFSrv_Lib_TotLowPassS16Ini  (
                               sint16                           IV_S16,
                               sint16 *                         ptr_FltHi_S16,
                               uint16 *                         ptr_FltHiCpl_U16,
                               MOFSRV_TOTLOWPASSS16DATA_LVL2    * ptr_Data,
                               MOFSRV_TOTLOWPASSS16DATACPL_CPL  * ptr_DataCpl
                                   );
/* EasyCASE - */
void MoFSrv_Lib_TotLowPassU8(  uint8                            in_U8,
                               uint8                            tiDel_U8,
                               uint8                            tiLp_U8,
                               bool                             active,
                               uint8                            * ptr_FltHi_U8,
                               uint8                            * ptr_FltHiCpl_U8,
                               MOFSRV_TOTLOWPASSU8DATA_LVL2     * ptr_Data,
                               MOFSRV_TOTLOWPASSU8DATACPL_CPL   * ptr_DataCpl
                            );

void MoFSrv_Lib_TotLowPassU8Ini(
                               uint8                            IV_U8,
                               uint8 *                          ptr_FltHi_U8,
                               uint8 *                          ptr_FltHiCpl_U8,
                               MOFSRV_TOTLOWPASSU8DATA_LVL2     * ptr_Data,
                               MOFSRV_TOTLOWPASSU8DATACPL_CPL   * ptr_DataCpl
                               );

void MoFSrv_Lib_TotLowPassU16( uint16                           in_U16,
                               uint8                            tiDel_U8,
                               uint16                           tiLp_U16,
                               bool                             active,
                               uint16 *                         ptr_FltHi_U16,
                               uint16 *                         ptr_FltHiCpl_U16,
                               MOFSRV_TOTLOWPASSU16DATA_LVL2    * ptr_Data,
                               MOFSRV_TOTLOWPASSU16DATACPL_CPL  * ptr_DataCpl
                             );

void MoFSrv_Lib_TotLowPassU16Ini  (
                               uint16                           IV_U16,
                               uint16 *                         ptr_FltHi_U16,
                               uint16 *                         ptr_FltHiCpl_U16,
                               MOFSRV_TOTLOWPASSU16DATA_LVL2    * ptr_Data,
                               MOFSRV_TOTLOWPASSU16DATACPL_CPL  * ptr_DataCpl
                                  );
/* EasyCASE ) */
/* EasyCASE ( 113
   Prototypen LowPass */
/*
in_xx           Eingangswert
tiLp_xx         Zeitkonstante Tiefpass
ptr_FltHi_xx    Pointer auf die E2-Ausgangsvariable des Tiefpass-Filter.
ptr_FltHiCpl_xx Pointer auf die E2-CPL-Ausgangsvariable des Tiefpass-Filter
ptr_FltLo_xx    Pointer auf die E2-Low-Anteil des Tiefpass
ptr_DataCpl_xx  Pointer auf die E2-CPL-Low-Anteil des Tiefpass

Die Service-Funktionen kommen sowohl mit Unsigned als auch mit Signed Datentypen zurecht.
Wenn ein Null-Pointer fuer die Komplemente uebergeben wird, dann wird das Beschreiben der
Komplemente in der Funktion unterdrueckt.
Eine Ueberpruefung der Komplementvariablen wird in der Funktion nach Bedarf selbst durchgefuehrt.
Falls ein Pointer der E2-Variablen NULL ist, wird die Funktion ohne eine Berechnung des Tiefpass
beendet.
*/
/* EasyCASE - */
void MoFSrv_Lib_LowPassS8( sint8     in_S8,
                       uint8     tiLp_U8,
                       sint8  *  ptr_FltHi_S8,
                       uint8  *  ptr_FltHiCpl_U8,
                       uint8  *  ptr_FltLo_U8,
                       uint8  *  ptr_FltLoCpl_U8
                       );

void MoFSrv_Lib_LowPassS16(sint16    in_S16,
                       uint16    tiLp_U16,
                       sint16 *  ptr_FltHi_S16,
                       uint16 *  ptr_FltHiCpl_U16,
                       uint16 *  ptr_FltLo_U16,
                       uint16 *  ptr_FltLoCpl_U16
                       );
/* EasyCASE - */
void MoFSrv_Lib_LowPassU8( uint8     in_U8,
                       uint8     tiLp_U8,
                       uint8  *  ptr_FltHi_U8,
                       uint8  *  ptr_FltHiCpl_U8,
                       uint8  *  ptr_FltLo_U8,
                       uint8  *  ptr_FltLoCpl_U8
                       );

void MoFSrv_Lib_LowPassU16(uint16    in_U16,
                       uint16    tiLp_U16,
                       uint16 *  ptr_FltHi_U16,
                       uint16 *  ptr_FltHiCpl_U16,
                       uint16 *  ptr_FltLo_U16,
                       uint16 *  ptr_FltLoCpl_U16
                       );
/* EasyCASE ) */
/* EasyCASE ( 282
   Prototypes for UpDwnLowPass */
/*
 * \param               Inpxx                  Input Value
 *
 * \param               tiLpUpxx                Low pass time constant for input values with a
 *                                              positive gradient, the conversion formula has to
 *                                              be taken into account for calibration.
 *
 * \param               tiLpDwnxx               Low pass time constant for input values with a
 *                                              negative gradient, the conversion formula has to
 *                                              be taken into account for calibration.
 *
 * \param               FilHixx                 The result of the last calculation has to be
 *                                              given to the function.
 *
 * \param               ptrFilLoUx              Pointer to low value of the filter result. The
 *                                              result of the lastcalculation will be read inside
 *                                              the function, and after calculation, the new
 *                                              result wil be written back with the pointer.
 *
 * \param               ptrFilLoUxCpl           Pointer to complement of the ptrFilLo value.
 *
 * \param               return                  The filtered input value is provided as return
 *                                              value.The calling module has to handle the update
 *                                              of the respective complement of the filtered input
 *                                              value.
 */
/* EasyCASE - */
uint8 MoFSrv_Lib_UpDwnLowPassU8(
                       uint8                      InpU8,
                       uint8                      tiLpUpU8,
                       uint8                      tiLpDwnU8,
                       uint8                      FilHiU8,
                       uint8 *                    ptrFilLoU8,
                       uint8 *                    ptrFilLoU8Cpl
                       );
uint16 MoFSrv_Lib_UpDwnLowPassU16(
                       uint16                     InpU16,
                       uint16                     tiLpUpU16,
                       uint16                     tiLpDwnU16,
                       uint16                     FilHiU16,
                       uint16 *                   ptrFilLoU16,
                       uint16 *                   ptrFilLoU16Cpl
                       );
/* EasyCASE - */
sint8 MoFSrv_Lib_UpDwnLowPassS8(
                       sint8                      InpS8,
                       uint8                      tiLpUpU8,
                       uint8                      tiLpDwnU8,
                       sint8                      FilHiS8,
                       uint8 *                    ptrFilLoU8,
                       uint8 *                    ptrFilLoU8Cpl
                       );
sint16 MoFSrv_Lib_UpDwnLowPassS16(
                       sint16                     InpS16,
                       uint16                     tiLpUpU16,
                       uint16                     tiLpDwnU16,
                       sint16                     FilHiS16,
                       uint16 *                   ptrFilLoU16,
                       uint16 *                   ptrFilLoU16Cpl
                       );
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 286
   Reentrant filters Prototypes */
/* EasyCASE ( 296
   Prototypen TotLowPass */
/* EasyCASE ( 297
   Comments */
/*
in_xx           Eingangswert
tiDel_xx        Zeit Totzeitelement. Wenn die Zeit 0 ist, wird das Totzeitglied
                deaktiviert. Gleichzeitig werden die Speicherelemente der Totzeit
                mit dem Wert in_xx initialisiert.
tiLp_xx         Zeitkonstante Tiefpass
active          Flag fuer Aktivierung Berechnung Totzeit + Tiefpass. Wenn das
                Flag false ist, werden die Speicherelemente der Totzeit mit dem
                Wert in_xx initialisiert.
ptr_FltHi_xx    Pointer auf die E2-Ausgangsvariable des Tiefpass-Filter.

ptr_Data_xx     Pointer auf die E2-Datenstruktur der internen Zustandsgroessen
                des Tiefpass
                -Filter und Totzeitellement.


Die Service-Funktionen kommen sowohl mit Unsigned als auch mit Signed Datentypen zurecht.
Wenn ein Null-Pointer uebergeben wird, dann wird das beschreiben der Komplemente in der
Funktion unterdrueckt.
Eine Ueberpruefung der Komplementvariablen wird in der Funktion nach Bedarf selbst
durchgefuehrt.Falls ein Pointer der E2-Variablen NULL ist, wird die Funktion ohne eine
Berechnung des Tiefpass bzw. Totzeit beendet.
*/
/* EasyCASE ) */
void MoFSrv_Lib_TotLowPassReentrantS8(  sint8                       in_S8,
                       uint8                               tiDel_U8,
                       uint8                               tiLp_U8,
                       bool                                active,
                       sint8                               * ptr_FltHi_S8,
                       uint8                               * ptr_FltHiCpl_U8,
                       MOFSRV_TOTLOWPASSS8DATA_LVL2    * ptr_Data,
                       MOFSRV_TOTLOWPASSS8DATACPL_CPL  * ptr_DataCpl );









void MoFSrv_Lib_TotLowPassReentrantS16( sint16                        in_S16,
                       uint8                                 tiDel_U8,
                       uint16                                tiLp_U16,
                       bool                                  active,
                       sint16 *                              ptr_FltHi_S16,
                       uint16 *                              ptr_FltHiCpl_U16,
                       MOFSRV_TOTLOWPASSS16DATA_LVL2     * ptr_Data,
                       MOFSRV_TOTLOWPASSS16DATACPL_CPL   * ptr_DataCpl );
/* EasyCASE - */
void MoFSrv_Lib_TotLowPassReentrantU8(  uint8                       in_U8,
                       uint8                               tiDel_U8,
                       uint8                               tiLp_U8,
                       bool                                active,
                       uint8                               * ptr_FltHi_U8,
                       uint8                               * ptr_FltHiCpl_U8,
                       MOFSRV_TOTLOWPASSU8DATA_LVL2    * ptr_Data,
                       MOFSRV_TOTLOWPASSU8DATACPL_CPL  * ptr_DataCpl );



void MoFSrv_Lib_TotLowPassReentrantU16 (uint16                in_U16,
                       uint8                                 tiDel_U8,
                       uint16                                tiLp_U16,
                       bool                                  active,
                       uint16 *                              ptr_FltHi_U16,
                       uint16 *                              ptr_FltHiCpl_U16,
                       MOFSRV_TOTLOWPASSU16DATA_LVL2     * ptr_Data,
                       MOFSRV_TOTLOWPASSU16DATACPL_CPL   * ptr_DataCpl );
/* EasyCASE ) */
/* EasyCASE ( 298
   Prototypen LowPass */
/*
in_xx           Eingangswert
tiLp_xx         Zeitkonstante Tiefpass
ptr_FltHi_xx    Pointer auf die E2-Ausgangsvariable des Tiefpass-Filter.

ptr_FltLo_xx    Pointer auf die E2-Low-Anteil des Tiefpass


Die Service-Funktionen kommen sowohl mit Unsigned als auch mit Signed Datentypen zurecht.
Wenn ein Null-Pointer fuer die Komplemente uebergeben wird, dann wird das Beschreiben der
Komplemente in der Funktion unterdrueckt.
Eine Ueberpruefung der Komplementvariablen wird in der Funktion nach Bedarf selbst durchgefuehrt.
Falls ein Pointer der E2-Variablen NULL ist, wird die Funktion ohne eine Berechnung des Tiefpass
beendet.
*/
/* EasyCASE - */
void MoFSrv_Lib_LowPassReentrantS8(sint8          in_S8,
                       uint8                      tiLp_U8,
                       sint8 *                    ptr_FltHi_S8,
                       uint8 *                    ptr_FltHiCpl_U8,
                       uint8 *                    ptr_FltLo_U8,
                       uint8 *                    ptr_FltLoCpl_U8
                       );


 void MoFSrv_Lib_LowPassReentrantS16 (sint16                in_S16,
                       uint16                     tiLp_U16,
                       sint16 *                   ptr_FltHi_S16,
                       uint16 *                   ptr_FltHiCpl_U16,
                       uint16 *                   ptr_FltLo_U16,
                       uint16 *                   ptr_FltLoCpl_U16
                       );
/* EasyCASE - */
void MoFSrv_Lib_LowPassReentrantU8(uint8          in_U8,
                       uint8                      tiLp_U8,
                       uint8 *                    ptr_FltHi_U8,
                       uint8 *                    ptr_FltHiCpl_U8,
                       uint8 *                    ptr_FltLo_U8,
                       uint8 *                    ptr_FltLoCpl_U8
                       );




void MoFSrv_Lib_LowPassReentrantU16 (uint16               in_U16,
                               uint16                     tiLp_U16,
                               uint16 *                   ptr_FltHi_U16,
                               uint16 *                   ptr_FltHiCpl_U16,
                               uint16 *                   ptr_FltLo_U16,
                               uint16 *                   ptr_FltLoCpl_U16
                           );
/* EasyCASE ) */


/* EasyCASE ( 310
   Prototypes for turn-on/off delays */
/*
 ***************************************************************************************************
 * Prototypes for MoF turn-on/off delays
 *
 * \param               in_U8                   Logical input e.g. packed bit which will be
 *                                              interpreted as uint8.
 *
 * \param               limit_xx                Limit till which counter shall increment.
 *
 * \param               ptr_Cntr_xx             Pointer to debounce counter.
 *
 * \param               ptr_CntrCpl_xx          Pointer to debounce counter complement.
 *
 * \return              => Result of turn on delay as boolean.
 ***************************************************************************************************
 */
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyNoMemU8(uint8                      in_U8,
                                 uint8                      limit_U8,
                                 uint8 *                    ptr_Cntr_U8,
                                 uint8 *                    ptr_CntrCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyNoMemU16(uint8                     in_U8,
                                  uint16                    limit_U16,
                                  uint16 *                  ptr_Cntr_U16,
                                  uint16 *                  ptr_CntrCpl_U16);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyNoMemU32(uint8                     in_U8,
                                  uint32                    limit_U32,
                                  uint32 *                  ptr_Cntr_U32,
                                  uint32 *                  ptr_CntrCpl_U32);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyNoMemU8(uint8                     in_U8,
                                  uint8                     limit_U8,
                                  uint8 *                   ptr_Cntr_U8,
                                  uint8 *                   ptr_CntrCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyNoMemU16(uint8                    in_U8,
                                   uint16                   limit_U16,
                                   uint16 *                 ptr_Cntr_U16,
                                   uint16 *                 ptr_CntrCpl_U16);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyNoMemU32(uint8                    in_U8,
                                   uint32                   limit_U32,
                                   uint32 *                 ptr_Cntr_U32,
                                   uint32 *                 ptr_CntrCpl_U32);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyNoMemDiU8(uint8                    in_U8,
                                   uint8                    limit_U8,
                                   uint8 *                  ptr_Cntr_U8,
                                   uint8 *                  ptr_CntrCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyNoMemDiU16(uint8                   in_U8,
                                    uint16                  limit_U16,
                                    uint16 *                ptr_Cntr_U16,
                                    uint16 *                ptr_CntrCpl_U16);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyNoMemDiU32(uint8                   in_U8,
                                    uint32                  limit_U32,
                                    uint32 *                ptr_Cntr_U32,
                                    uint32 *                ptr_CntrCpl_U32);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyNoMemDiU8(uint8                   in_U8,
                                    uint8                   limit_U8,
                                    uint8 *                 ptr_Cntr_U8,
                                    uint8 *                 ptr_CntrCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyNoMemDiU16(uint8                  in_U8,
                                     uint16                 limit_U16,
                                     uint16 *               ptr_Cntr_U16,
                                     uint16 *               ptr_CntrCpl_U16);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyNoMemDiU32(uint8                  in_U8,
                                     uint32                 limit_U32,
                                     uint32 *               ptr_Cntr_U32,
                                     uint32 *               ptr_CntrCpl_U32);
/* EasyCASE - */

bool MoFSrv_Lib_TurnOnDlyU8(     uint8                      in_U8,
                                 uint8                      limit_U8,
                                 uint8 *                    ptr_Cntr_U8,
                                 uint8 *                    ptr_CntrCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyU16(     uint8                     in_U8,
                                  uint16                    limit_U16,
                                  uint16 *                  ptr_Cntr_U16,
                                  uint16 *                  ptr_CntrCpl_U16);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyU32(     uint8                     in_U8,
                                  uint32                    limit_U32,
                                  uint32 *                  ptr_Cntr_U32,
                                  uint32 *                  ptr_CntrCpl_U32);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyU8(     uint8                     in_U8,
                                  uint8                     limit_U8,
                                  uint8 *                   ptr_Cntr_U8,
                                  uint8 *                   ptr_CntrCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyU16(     uint8                    in_U8,
                                   uint16                   limit_U16,
                                   uint16 *                 ptr_Cntr_U16,
                                   uint16 *                 ptr_CntrCpl_U16);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyU32(     uint8                    in_U8,
                                   uint32                   limit_U32,
                                   uint32 *                 ptr_Cntr_U32,
                                   uint32 *                 ptr_CntrCpl_U32);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyDiU8(     uint8                    in_U8,
                                   uint8                    limit_U8,
                                   uint8 *                  ptr_Cntr_U8,
                                   uint8 *                  ptr_CntrCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyDiU16(     uint8                   in_U8,
                                    uint16                  limit_U16,
                                    uint16 *                ptr_Cntr_U16,
                                    uint16 *                ptr_CntrCpl_U16);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOnDlyDiU32(     uint8                   in_U8,
                                    uint32                  limit_U32,
                                    uint32 *                ptr_Cntr_U32,
                                    uint32 *                ptr_CntrCpl_U32);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyDiU8(     uint8                   in_U8,
                                    uint8                   limit_U8,
                                    uint8 *                 ptr_Cntr_U8,
                                    uint8 *                 ptr_CntrCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyDiU16(     uint8                  in_U8,
                                     uint16                 limit_U16,
                                     uint16 *               ptr_Cntr_U16,
                                     uint16 *               ptr_CntrCpl_U16);
/* EasyCASE - */
bool MoFSrv_Lib_TurnOffDlyDiU32(     uint8                  in_U8,
                                     uint32                 limit_U32,
                                     uint32 *               ptr_Cntr_U32,
                                     uint32 *               ptr_CntrCpl_U32);

/*
 ***************************************************************************************************
 * Prototypes for MoI turn-on/off delays
 *
 * \param               in_U8                   Logical input e.g. packed bit which will be
 *                                              interpreted as uint8.
 *
 * \param               limit_xx                Limit till which counter shall increment.
 *
 * \param               ptr_Cntr_xx             Pointer to debounce counter.
 *
 * \param               ptr_CntrCpl_xx          Pointer to debounce counter complement.
 *
 * \return              => Result of turn on delay as boolean.
 ***************************************************************************************************
 */
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyNoMemU8(uint8                      in_U8,
                                 uint8                      limit_U8,
                                 uint8 *                    ptr_Cntr_U8);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyNoMemU16(uint8                     in_U8,
                                  uint16                    limit_U16,
                                  uint16 *                  ptr_Cntr_U16);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyNoMemU32(uint8                     in_U8,
                                  uint32                    limit_U32,
                                  uint32 *                  ptr_Cntr_U32);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyNoMemU8(uint8                     in_U8,
                                  uint8                     limit_U8,
                                  uint8 *                   ptr_Cntr_U8);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyNoMemU16(uint8                    in_U8,
                                   uint16                   limit_U16,
                                   uint16 *                 ptr_Cntr_U16);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyNoMemU32(uint8                    in_U8,
                                   uint32                   limit_U32,
                                   uint32 *                 ptr_Cntr_U32);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyNoMemDiU8(uint8                    in_U8,
                                   uint8                    limit_U8,
                                   uint8 *                  ptr_Cntr_U8);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyNoMemDiU16(uint8                   in_U8,
                                    uint16                  limit_U16,
                                    uint16 *                ptr_Cntr_U16);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyNoMemDiU32(uint8                   in_U8,
                                    uint32                  limit_U32,
                                    uint32 *                ptr_Cntr_U32);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyNoMemDiU8(uint8                   in_U8,
                                    uint8                   limit_U8,
                                    uint8 *                 ptr_Cntr_U8);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyNoMemDiU16(uint8                  in_U8,
                                     uint16                 limit_U16,
                                     uint16 *               ptr_Cntr_U16);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyNoMemDiU32(uint8                  in_U8,
                                     uint32                 limit_U32,
                                     uint32 *               ptr_Cntr_U32);


bool MoISrv_Lib_TurnOnDlyU8(uint8                      in_U8,
                                 uint8                      limit_U8,
                                 uint8 *                    ptr_Cntr_U8);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyU16(uint8                     in_U8,
                                  uint16                    limit_U16,
                                  uint16 *                  ptr_Cntr_U16);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyU32(uint8                     in_U8,
                                  uint32                    limit_U32,
                                  uint32 *                  ptr_Cntr_U32);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyU8(uint8                     in_U8,
                                  uint8                     limit_U8,
                                  uint8 *                   ptr_Cntr_U8);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyU16(uint8                    in_U8,
                                   uint16                   limit_U16,
                                   uint16 *                 ptr_Cntr_U16);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyU32(uint8                    in_U8,
                                   uint32                   limit_U32,
                                   uint32 *                 ptr_Cntr_U32);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyDiU8(uint8                    in_U8,
                                   uint8                    limit_U8,
                                   uint8 *                  ptr_Cntr_U8);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyDiU16(uint8                   in_U8,
                                    uint16                  limit_U16,
                                    uint16 *                ptr_Cntr_U16);
/* EasyCASE - */
bool MoISrv_Lib_TurnOnDlyDiU32(uint8                   in_U8,
                                    uint32                  limit_U32,
                                    uint32 *                ptr_Cntr_U32);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyDiU8(uint8                   in_U8,
                                    uint8                   limit_U8,
                                    uint8 *                 ptr_Cntr_U8);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyDiU16(uint8                  in_U8,
                                     uint16                 limit_U16,
                                     uint16 *               ptr_Cntr_U16);
/* EasyCASE - */
bool MoISrv_Lib_TurnOffDlyDiU32(uint8                  in_U8,
                                     uint32                 limit_U32,
                                     uint32 *               ptr_Cntr_U32);

/* EasyCASE ) */
/* EasyCASE ( 314
   Prototypes for debounce elements */
/*
 ***************************************************************************************************
 * Prototypes for MoF debounce elements
 *
 * Calculation of a debounce with uint8 counter (OneToOne).
 *
 * \param               in_bool                   Logical input e.g. packed bit which will be
 *                                              interpreted as bool.
 *
 * \param               LH_xx                   Debounce time for changes from false to true.
 *
 * \param               HL_xx                   Debounce time for changes from true to false.
 *
 * \param               ptr_Cntr_xx             Pointer to debounce counter.
 *
 * \param               ptr_CntrCpl_xx          Pointer to debounce counter complement.
 *
 * \param               ptr_St_U8               Pointer to status of debounce.
 *
 * \param               ptr_StCpl_U8            Pointer to status of debounce complement.
 *
 * \return              => Result of debounce (status) as boolean.
 ***************************************************************************************************
 */
/* EasyCASE - */
bool MoFSrv_Lib_DebU8(bool                    in_bool,
                      uint8                      LH_U8,
                      uint8                      HL_U8,
                      uint8 *                    ptr_Cntr_U8,
                      uint8 *                    ptr_CntrCpl_U8,
                      uint8 *                    ptr_St_U8,
                      uint8 *                    ptr_StCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_DebU16(bool                    in_bool,
                       uint16                     LH_U16,
                       uint16                     HL_U16,
                       uint16 *                   ptr_Cntr_U16,
                       uint16 *                   ptr_CntrCpl_U16,
                       uint8 *                    ptr_St_U8,
                       uint8 *                    ptr_StCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_DebU32(bool                    in_bool,
                       uint32                     LH_U32,
                       uint32                     HL_U32,
                       uint32 *                   ptr_Cntr_U32,
                       uint32 *                   ptr_CntrCpl_U32,
                       uint8 *                    ptr_St_U8,
                       uint8 *                    ptr_StCpl_U8);
/* EasyCASE - */
/*
 ***************************************************************************************************
 * Prototypes for MoI debounce elements
 *
 * Calculation of a debounce with uint8 counter (OneToOne).
 *
 * \param               in_bool                   Logical input e.g. packed bit which will be
 *                                              interpreted as bool.
 *
 * \param               LH_xx                   Debounce time for changes from false to true.
 *
 * \param               HL_xx                   Debounce time for changes from true to false.
 *
 * \param               ptr_Cntr_xx             Pointer to debounce counter.
 *
 * \param               ptr_CntrCpl_xx          Pointer to debounce counter complement.
 *
 * \param               ptr_St_U8               Pointer to status of debounce.
 *
 * \param               ptr_StCpl_U8            Pointer to status of debounce complement.
 *
 * \return              => Result of debounce (status) as boolean.
 ***************************************************************************************************
 */
/* EasyCASE - */
bool MoISrv_Lib_DebU8(bool                    in_bool,
                      uint8                      LH_U8,
                      uint8                      HL_U8,
                      uint8 *                    ptr_Cntr_U8,
                      uint8 *                    ptr_St_U8);
/* EasyCASE - */
bool MoISrv_Lib_DebU16(bool                    in_bool,
                       uint16                     LH_U16,
                       uint16                     HL_U16,
                       uint16 *                   ptr_Cntr_U16,
                       uint8 *                    ptr_St_U8);
/* EasyCASE - */
bool MoISrv_Lib_DebU32(bool                    in_bool,
                       uint32                     LH_U32,
                       uint32                     HL_U32,
                       uint32 *                   ptr_Cntr_U32,
                       uint8 *                    ptr_St_U8);
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 306
   Prototypes for Memory */
/*
 ***************************************************************************************************
 * Prototypes for RS-FlipFlop
 *
 * \param               s                       Set input (logical) interpreted as uint8.
 *
 * \param               r                       Reset input (logical) interpreted as uint8.
 *
 * \param               ptr_St_U8               Pointer to status variable of RS-FlipFlop.
 *
 * \param               ptr_StCpl_U8            Pointer to status variable complement.
 *
 * \return              => Result of RS-FlipFlop as boolean.
 ***************************************************************************************************
 */
/* EasyCASE - */
bool MoFSrv_Lib_RSFflpRstDmnt(bool                      s,
                              bool                      r,
                              uint8 *                    ptr_St_U8,
                              uint8 *                    ptr_StCpl_U8);
/* EasyCASE - */
bool MoFSrv_Lib_RSFflpSetDmnt(bool                      s,
                              bool                      r,
                              uint8 *                    ptr_St_U8,
                              uint8 *                    ptr_StCpl_U8);
/* EasyCASE - */
/*
 ***************************************************************************************************
 * Prototypes for MoI RS-FlipFlop
 *
 * \param               s                       Set input (logical) interpreted as uint8.
 *
 * \param               r                       Reset input (logical) interpreted as uint8.
 *
 * \param               ptr_St_U8               Pointer to status variable of RS-FlipFlop.
 *
 * \return              => Result of RS-FlipFlop as boolean.
 ***************************************************************************************************
 */
/* EasyCASE - */
bool MoISrv_Lib_RSFflpRstDmnt(bool                      s,
                              bool                      r,
                              uint8 *                    ptr_St_U8);
/* EasyCASE - */
bool MoISrv_Lib_RSFflpSetDmnt(bool                      s,
                              bool                      r,
                              uint8 *                    ptr_St_U8);
/* EasyCASE ) */
sint32 MoFSrv_Lib_RampSwitch(sint32 Xa, sint32 Xb, bool Switch, sint32 SlopePos,sint32 SlopeNeg,
                 sint32 *State, uint8 *Flag, sint32 Dt);
sint32 MoFSrv_Lib_Ramp(sint32 Target, sint32 *State, sint16 *Dir, sint32 SlopePos,sint32 SlopeNeg,
                sint32 Dt);
/* EasyCASE ( 330
   Prototypes for Error Handling */
/*
 ***************************************************************************************************
 * Irreversible Error Handling element U32
 *
 * The aim of the irreversible error handling class is to provide the possibility to configure
 * the kind of error state. It shall be possible to select between irreversible, reversible or
 * even not to consider an error state at all.
 *
 *
 *
 * \param               tmp_ErrBitCol_U32            local error bit register variable
 *
 * \param               reset                        trigger to reset irreversible error flags
 *
 * \param               irrvMask_U32                  selection of global irreversible error flags(structure variable)
 *
 * \param               errMask_U32                  selection of modul specific active error flags(structure variable)
 *
 * \param               ptdMask_U32                  module specific error flags, which are permitted to be
 *                                                   changed by the module(structure variable)
 *
 * \param               ptr_glblErrBitColInOut_U32    global error bit register variable
 *
  * \return              => Does not return any value
 ***************************************************************************************************
    ============================================================================================
    = Signal                 Datatype         Computation Method
    ============================================================================================
    tmp_ErrBitCol_U32               ----------- U32 ------------- OneToOne
    reset                           ----------- bit ------------- B_TRUE
    ptr_Data                        ----------- U32 ------------- OneToOne [Object to the structure]
    ptr_glblErrBitColInOut_U32      ----------- U32 ------------- OneToOne
    ===========================================================================================
 */
/* EasyCASE - */
void MoFSrv_IrrvErrHndlgU32Data_In ( MOFSRV_IRRVERRHNDLGU32DATA_LVL2    * ptr_Data ,
                                     uint32                               ptdMask_U32 ,
                                     uint32                               irrvMask_U32,
                                     uint32                               errMask_U32    );

void MoFSrv_Lib_IrrvErrHandlingU32 ( uint32                                    tmp_ErrBitCol_U32,
                                     bool                                      reset,
                                     const MOFSRV_IRRVERRHNDLGU32DATA_LVL2   * ptr_Data,
                                     uint32                                  * ptr_glblErrBitColInOut_U32);
/* EasyCASE ) */
/* EasyCASE ( 357
   Prototypes for Integral Debounce */
/*
 ***************************************************************************************************
 *  Integral Debounce element S32
 *
 * The aim of the error debouncing with integral is to provide a possibility to react in a different way according to the amount of the error deviation,
 * e.g. to react faster in case of large signal deviations and slower in case of uncritical error deviations to provide more robustness in case of safety
 * uncritical errors.
 *
 *
 * \param               ptr_Data                    Structure of tHeal_S16,tIntglMax_S32, tErrLim_S32 variables
 *
 * \param               Dif_S16                     deviation  in the signal
 *
 * \param               facWght_S32                 weighting factor
 *
 * \param               dT_U8                       Raster time of the Module
 *
 * \param               ptr_tqtIntgl_S32            accumulated signal difference by the time
 *
 * \param               ptr_tqtIntglCpl_U32         accumulated signal difference by the time CPL
 *
 * \param               ptr_tDif_S32               final difference in the signal
 *
 *
 * \return              => Result of  Integral Debounce as flag
      ============================================================================================
    = Signal                 Datatype         Computation Method
    ============================================================================================
    Dif_S16          ----------- S16 ------------- q0p1
    facWght_S16        ----------- S16 -------------q0p01
    Heal_S32          ----------- S32 ------------- q0p1
    tErrLim_S32        ----------- S32 -------------q0p001
    tIntglMax_S32      ----------- S32 -------------q0p001
    dT_U8              ----------------------------- Used to specify the Raster time of the Module
                                                 Usage: #define %_DT to raster time
                                                        for 10 ms -----> #define %_DT to 10
                                                        for 20 ms -----> #define %_DT to 20
                                                        for 40 ms -----> #define %_DT to 40
    ptr_tDif_S32      ----------- S32 ------------- q0p001
    ptr_tIntgl_S32     ----------- S32 ------------- q0p001
    ptr_tIntglCpl_U32  ----------- U32 ------------- OnetoOne
    ===========================================================================================
 ***************************************************************************************************
*/
/* EasyCASE - */
void MoFSrv_IntegralDebS32Data_In ( MOFSRV_INTEGRALDEBS32DATA_LVL2   * ptr_Data ,
                                    sint32                             tIntglMax_S32 ,
                                    sint16                             Heal_S16 ,
                                    sint32                             tErrLim_S32 );

bool MoFSrv_Lib_IntegralDebS32 ( const MOFSRV_INTEGRALDEBS32DATA_LVL2   * ptr_Data,
                                 sint16                                   Dif_S16,
                                 sint16                                   facWght_S16,
                                 uint8                                    dT_U8,
                                 sint32                                 * ptr_tIntgl_S32,
                                 uint32                                 * ptr_tIntglCpl_U32,
                                 sint32                                 * ptr_tDif_S32);



/* EasyCASE ) */
/* EasyCASE ( 347
   Edge Detect */
bool MoFSrv_Lib_EdgeRising(bool Inp_Val,bool Old_Val);

bool MoFSrv_Lib_EdgeFalling(bool Inp_Val,bool Old_Val);

bool MoFSrv_Lib_EdgeBiPol(bool Inp_Val,bool Old_Val);

bool MoISrv_Lib_EdgeRising(bool Inp_Val,bool Old_Val);

bool MoISrv_Lib_EdgeFalling(bool Inp_Val,bool Old_Val);

bool MoISrv_Lib_EdgeBiPol(bool Inp_Val,bool Old_Val);


/* EasyCASE ) */
/* EasyCASE ( 348
   Hysteresis */
bool MoFSrv_Lib_HystLeftRight_S8(sint8 Inp_S8,sint8 Lsp_S8,sint8 Rsp_S8,bool State);

bool MoFSrv_Lib_HystLeftRight_S16(sint16 Inp_S16,sint16 Lsp_S16,sint16 Rsp_S16,bool State);

bool MoFSrv_Lib_HystLeftRight_S32(sint32 Inp_S32,sint32 Lsp_S32,sint32 Rsp_S32,bool State);

bool MoFSrv_Lib_HystLeftRight_U8(uint8 Inp_U8,uint8 Lsp_U8,uint8 Rsp_U8,bool State);

bool MoFSrv_Lib_HystLeftRight_U16(uint16 Inp_U16,uint16 Lsp_U16,uint16 Rsp_U16,bool State);

bool MoFSrv_Lib_HystLeftRight_U32(uint32 Inp_U32,uint32 Lsp_U32,uint32 Rsp_U32,bool State);

bool MoISrv_Lib_HystLeftRight_S8(sint8 Inp_S8,sint8 Lsp_S8,sint8 Rsp_S8,bool State);

bool MoISrv_Lib_HystLeftRight_S16(sint16 Inp_S16,sint16 Lsp_S16,sint16 Rsp_S16,bool State);

bool MoISrv_Lib_HystLeftRight_S32(sint32 Inp_S32,sint32 Lsp_S32,sint32 Rsp_S32,bool State);

bool MoISrv_Lib_HystLeftRight_U8(uint8 Inp_U8,uint8 Lsp_U8,uint8 Rsp_U8,bool State);

bool MoISrv_Lib_HystLeftRight_U16(uint16 Inp_U16,uint16 Lsp_U16,uint16 Rsp_U16,bool State);

bool MoISrv_Lib_HystLeftRight_U32(uint32 Inp_U32,uint32 Lsp_U32,uint32 Rsp_U32,bool State);
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 167
   Inline Functions */
#ifndef LOCAL_INLINE
#define LOCAL_INLINE static inline __attribute__ ((always_inline))
#endif
/* EasyCASE ( 186
   MoFSrv_Lib_cntrMax_U8U8
   MoFSrv_Lib_cntrMax_U16U16 */
/* EasyCASE ( 191
   MoFSrv_Lib_cntrMax_U8U8 */
/* Example how to call in your function:
MoFSrv_Lib_cntrMax_U8U8(&MoFXYZ_ptrCntrMaxNotVltl, MoFXYZ_cntrIrrvErr, Mo_swtClrCntrMax_C);
MoFSrv_Lib_cntrMax_U16u16(&MoFXYZ_ptrCntrMaxNotVltl, MoFXYZ_cntrIrrvErr, Mo_swtClrCntrMax_C);
MoFXYZ_ptrCntrMaxNotVltl must be in NVRAM  */
/* EasyCASE - */
LOCAL_INLINE void  MoFSrv_Lib_cntrMax_U8U8(uint8 *ptrCntrMaxU8,
                                           uint8 cntrU8,
                                           const uint8 swtClrCntrMax_C);
/* EasyCASE F */
LOCAL_INLINE void  MoFSrv_Lib_cntrMax_U8U8(uint8 *ptrCntrMaxU8,
                                           uint8  cntrU8,
                                           const uint8 swtClrCntrMax_C)
   {
   if (swtClrCntrMax_C != (uint8)MOFSRV_LIB_ZERO)
      {
      /* EasyCASE ( 196
         Max Wert schreiben */
      if (*ptrCntrMaxU8 < cntrU8)
         {
         *ptrCntrMaxU8 = cntrU8;
         }
      /* EasyCASE ) */
      }
   else
      {
      /* EasyCASE ( 197
         Loeschen */
      if (*ptrCntrMaxU8 > (uint8)MOFSRV_LIB_ZERO)
         {
         *ptrCntrMaxU8 =  (uint8)MOFSRV_LIB_ZERO;
         }
      /* EasyCASE ) */
      }
   }
/* EasyCASE ) */
/* EasyCASE ( 192
   MoFSrv_Lib_cntrMax_U16U16 */
/* Stores max value of counters into NVRAM

Example how to call in your function:
MoFSrv_Lib_cntrMax_U16u16(&MoFXYZ_ptrCntrMaxNotVltl, MoFXYZ_cntrIrrvErr, Mo_swtClrCntrMax_C);
MoFXYZ_ptrCntrMaxNotVltl must be in NVRAM  */
/* EasyCASE - */
LOCAL_INLINE void  MoFSrv_Lib_cntrMax_U16U16(uint16 *ptrCntrMaxU16,
                                             uint16 cntrU16,
                                             const uint8 swtClrCntrMax_C);
/* EasyCASE F */
LOCAL_INLINE void  MoFSrv_Lib_cntrMax_U16U16(uint16 *ptrCntrMaxU16,
                                             uint16 cntrU16,
                                             const uint8 swtClrCntrMax_C)
   {
   if (swtClrCntrMax_C != (uint8)MOFSRV_LIB_ZERO)
      {
      /* EasyCASE ( 201
         Max Wert schreiben */
      if (*ptrCntrMaxU16 < cntrU16)
         {
         *ptrCntrMaxU16 = cntrU16;
         }
      /* EasyCASE ) */
      }
   else
      {
      /* EasyCASE ( 202
         Loeschen */
      if (*ptrCntrMaxU16 > (uint16)MOFSRV_LIB_ZERO)
         {
         *ptrCntrMaxU16 =  (uint16)MOFSRV_LIB_ZERO;
         }
      /* EasyCASE ) */
      }
   }
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 206
   MoFSrv_Lib_cntrMaxEnhd_U8U8U8
   MoFSrv_Lib_cntrMaxEnhd_U16U8U16 */
/* EasyCASE ( 207
   MoFSrv_Lib_cntrMaxEnhd_U8U8U8 */
/* Example how to call in your function:
   Stores max value and exceed of threshold of counters into NVRAM

Example how to call in your function:
MoFSrv_Lib_cntrMaxEnhd_U8U8U8(&MoFXYZ_ptrCntrMaxU8,&MoFXYZ_ptrExcddThdU8,MoFXYZ_cntrU8,
&MoFXYZ_ptrCntrOldU8,MoFXYZ_cntrThdU8_C,Mo_swtClrCntrMax_C)
Note:should not update MoFXYZ_ptrCntrOldU8 in calling module,it is only for library function

MoFXYZ_ptrCntrMaxU8 and MoFXYZ_ptrExcddThdU8 must be in NVRAM */
/* EasyCASE - */
LOCAL_INLINE void  MoFSrv_Lib_cntrMaxEnhd_U8U8U8(uint8 *ptrCntrMaxU8,
                                                 uint8 *ptrCntrExcddThdU8,
                                                 uint8 cntrU8,
                                                 uint8 *ptrCntrOldU8,
                                                 const uint8 cntrThdU8_C,
                                                 const uint8 swtClrCntrMax_C);
/* EasyCASE F */
LOCAL_INLINE void  MoFSrv_Lib_cntrMaxEnhd_U8U8U8(uint8 *ptrCntrMaxU8,
                                                 uint8 *ptrCntrExcddThdU8,
                                                 uint8 cntrU8,
                                                 uint8 *ptrCntrOldU8,
                                                 const uint8 cntrThdU8_C,
                                                 const uint8 swtClrCntrMax_C)
   {
   if (swtClrCntrMax_C != (uint8)MOFSRV_LIB_ZERO)
      {
      /* EasyCASE ( 208
         Max Wert schreiben */
      if (*ptrCntrMaxU8 < cntrU8)
         {
         /* write max value */
         *ptrCntrMaxU8 = cntrU8;
         }
      else
         {
         /* Do nothing */
         }
      if ((cntrU8 >= cntrThdU8_C)
           &&
           (*ptrCntrOldU8 < cntrThdU8_C)
           &&
           (*ptrCntrExcddThdU8 != MOFSRV_LIB_MAXU8))
         {
         (*ptrCntrExcddThdU8)++;
         }
      else
         {
         /* Do nothing */
         }
      /* EasyCASE ) */
      /* store counter value for next function call */
      *ptrCntrOldU8 = cntrU8;
      }
   else
      {
      /* EasyCASE ( 209
         Loeschen */
      if (*ptrCntrMaxU8 > (uint8)MOFSRV_LIB_ZERO)
         {
         *ptrCntrMaxU8 =  (uint8)MOFSRV_LIB_ZERO;
         }
      else
         {
         /* Do nothing */
         }
      if (*ptrCntrExcddThdU8 > (uint8)MOFSRV_LIB_ZERO)
         {
         *ptrCntrExcddThdU8 =  (uint8)MOFSRV_LIB_ZERO;
         }
      else
         {
         /* Do nothing */
         }
      if (*ptrCntrOldU8 > (uint8)MOFSRV_LIB_ZERO)
         {
         *ptrCntrOldU8 = (uint8)MOFSRV_LIB_ZERO;
         }
      else
         {
         /* Do nothing */
         }
      /* EasyCASE ) */
      }
   }
/* EasyCASE ) */
/* EasyCASE ( 210
   MoFSrv_Lib_cntrMaxEnhd_U16U8U16 */
/* Example how to call in your function:
   Stores max value and exceed of threshold of counters into NVRAM

Example how to call in your function:
MoFSrv_Lib_cntrMaxEnhd_U16U8U16(&MoFXYZ_ptrCntrMaxU16,&MoFXYZ_ptrExcddThdU8,MoFXYZ_cntrU16,
&MoFXYZ_ptrCntrOldU16,MoFXYZ_cntrThdU16_C,Mo_swtClrCntrMax_C)
Note:should not update MoFXYZ_ptrCntrOldU16 in calling module,it is only for library function

MoFXYZ_ptrCntrMaxU16 and MoFXYZ_ptrExcddThdU8 must be in NVRAM */
/* EasyCASE - */
LOCAL_INLINE void  MoFSrv_Lib_cntrMaxEnhd_U16U8U16(uint16 *ptrCntrMaxU16,
                                                 uint8 *ptrCntrExcddThdU8,
                                                 uint16 cntrU16,
                                                 uint16 *ptrCntrOldU16,
                                                 const uint16 cntrThdU16_C,
                                                 const uint8 swtClrCntrMax_C);
/* EasyCASE F */
LOCAL_INLINE void  MoFSrv_Lib_cntrMaxEnhd_U16U8U16(uint16 *ptrCntrMaxU16,
                                                 uint8 *ptrCntrExcddThdU8,
                                                 uint16 cntrU16,
                                                 uint16 *ptrCntrOldU16,
                                                 const uint16 cntrThdU16_C,
                                                 const uint8 swtClrCntrMax_C)
   {
   if (swtClrCntrMax_C != (uint8)MOFSRV_LIB_ZERO)
      {
      /* EasyCASE ( 224
         Max Wert schreiben */
      if (*ptrCntrMaxU16 < cntrU16)
         {
         /* write max value */
         *ptrCntrMaxU16 = cntrU16;
         }
      else
         {
         /* Do nothing */
         }
      if ((cntrU16 >= cntrThdU16_C)
           &&
           (*ptrCntrOldU16 < cntrThdU16_C)
           &&
           (*ptrCntrExcddThdU8 != MOFSRV_LIB_MAXU8))
         {
         (*ptrCntrExcddThdU8)++;
         }
      else
         {
         /* Do nothing */
         }
      /* EasyCASE ) */
      /* store counter value for next function call */
      *ptrCntrOldU16 = cntrU16;
      }
   else
      {
      /* EasyCASE ( 225
         Loeschen */
      if (*ptrCntrMaxU16 > (uint16)MOFSRV_LIB_ZERO)
         {
         *ptrCntrMaxU16 =  (uint16)MOFSRV_LIB_ZERO;
         }
      else
         {
         /* Do nothing */
         }
      if (*ptrCntrExcddThdU8 > (uint8)MOFSRV_LIB_ZERO)
         {
         *ptrCntrExcddThdU8 =  (uint8)MOFSRV_LIB_ZERO;
         }
      else
         {
         /* Do nothing */
         }
      if (*ptrCntrOldU16 > (uint16)MOFSRV_LIB_ZERO)
         {
         *ptrCntrOldU16 = (uint16)MOFSRV_LIB_ZERO;
         }
      else
         {
         /* Do nothing */
         }
      /* EasyCASE ) */
      }
   }
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 229
   MoFSrv_Lib_SimpleMovgAvrg8U8 */
/* Example how to call in your function:
MoFSrv_Lib_SimpleMovgAvrg8U8(MoFXYZ_BufU8,MoFXYZ_BufU8Cpl,&MoFXYZ_ptrBufCntr,&MoFXYZ_ptrBufCntrCpl,MoFXYZ_Win_C,MoFXYZ_ValU8 )
Note:Temporary variable which used inside Inline function is getting memory in Registors.
 */
/* EasyCASE - */
LOCAL_INLINE uint8 MoFSrv_Lib_SimpleMovgAvrg8U8(uint8 BufU8[],
                                                uint8 BufU8Cpl[],
                                                uint8 *ptrBufCntr,
                                                uint8 *ptrBufCntrCpl,
                                                const uint8 win,
                                                const uint8 inU8);
/* EasyCASE F */
LOCAL_INLINE uint8 MoFSrv_Lib_SimpleMovgAvrg8U8(uint8 BufU8[],
                                                uint8 BufU8Cpl[],
                                                uint8 *ptrBufCntr,
                                                uint8 *ptrBufCntrCpl,
                                                const uint8 win,
                                                const uint8 inU8)
   {
   uint16 tmpAvrg_sma1;
   uint8 tmpCntr_sma1;
   uint8 tmpWin_sma1;
   uint8 ptrBufCntr_sma1;
   /* EasyCASE - */
   tmpAvrg_sma1 = MOFSRV_LIB_ZERO;

   BufU8[*ptrBufCntr] = inU8;
   BufU8Cpl[*ptrBufCntr] = (uint8)~inU8;
   if ((win == MOFSRV_LIB_ZERO)||(win == MOFSRV_LIB_ONE))
      {
      tmpAvrg_sma1 = inU8;
      }
   else
      {
      /* EasyCASE ( 235
         Limit the window to 8, to secure overflows */
      if (win > MOFSRV_LIB_MAXFLD)
         {
         tmpWin_sma1 = MOFSRV_LIB_MAXFLD;
         }
      else
         {
         tmpWin_sma1 = win;
         }
      /* EasyCASE ) */
      for (tmpCntr_sma1 = MOFSRV_LIB_ONE; tmpCntr_sma1 <= tmpWin_sma1; tmpCntr_sma1++)
         {
         tmpAvrg_sma1 += BufU8[((*ptrBufCntr - tmpWin_sma1) + tmpCntr_sma1) & MOFSRV_LIB_7];
         }
      tmpAvrg_sma1 = tmpAvrg_sma1/tmpWin_sma1;
      /* EasyCASE ( 255
         Limiting to uint8 range */
      if (tmpAvrg_sma1 > MOFSRV_LIB_MAXU8)
         {
         tmpAvrg_sma1 = MOFSRV_LIB_MAXU8;
         }
      else
         {
         /*In range */
         }
      /* EasyCASE ) */
      }
   ptrBufCntr_sma1 = ((*ptrBufCntr + MOFSRV_LIB_ONE) & MOFSRV_LIB_7);
   *ptrBufCntr = ptrBufCntr_sma1;
   *ptrBufCntrCpl = (uint8)~ptrBufCntr_sma1;
   /* EasyCASE - */
   /* EasyCASE < */
   return((uint8)tmpAvrg_sma1);
   /* EasyCASE > */
   }
/* EasyCASE ) */
/* EasyCASE ( 239
   MoFSrv_Lib_SimpleMovgAvrg8U16 */
/* Example how to call in your function:
MoFSrv_Lib_SimpleMovgAvrg8U16(MoFXYZ_BufU16,MoFXYZ_BufU16Cpl,&MoFXYZ_ptrBufCntr,&MoFXYZ_ptrBufCntrCpl,MoFXYZ_Win_C,MoFXYZ_ValU16 );

Note:Temporary variable which used inside Inline function is getting memory in Registors.
 */
/* EasyCASE - */
LOCAL_INLINE uint16 MoFSrv_Lib_SimpleMovgAvrg8U16(uint16 BufU16[],
                                                 uint16 BufU16Cpl[],
                                                 uint8 *ptrBufCntr,
                                                 uint8 *ptrBufCntrCpl,
                                                 const uint8 win,
                                                 const uint16 inU16);
/* EasyCASE F */
LOCAL_INLINE uint16 MoFSrv_Lib_SimpleMovgAvrg8U16(uint16 BufU16[],
                                                 uint16 BufU16Cpl[],
                                                 uint8 *ptrBufCntr,
                                                 uint8 *ptrBufCntrCpl,
                                                 const uint8 win,
                                                 const uint16 inU16)
   {
   uint32 tmpAvrg_sma2;
   uint8 tmpCntr_sma2;
   uint8 tmpWin_sma2;
   uint8 ptrBufCntr_sma2;
   /* EasyCASE - */
   tmpAvrg_sma2 = MOFSRV_LIB_ZERO;

   BufU16[*ptrBufCntr] = inU16;
   BufU16Cpl[*ptrBufCntr] = (uint16)~inU16;
   if ((win == MOFSRV_LIB_ZERO)||(win == MOFSRV_LIB_ONE))
      {
      tmpAvrg_sma2 = inU16;
      }
   else
      {
      /* EasyCASE ( 240
         Limit the window to 8, to secure overflows */
      if (win > MOFSRV_LIB_MAXFLD)
         {
         tmpWin_sma2 = MOFSRV_LIB_MAXFLD;
         }
      else
         {
         tmpWin_sma2 = win;
         }
      /* EasyCASE ) */
      for (tmpCntr_sma2 = MOFSRV_LIB_ONE; tmpCntr_sma2 <= tmpWin_sma2; tmpCntr_sma2++)
         {
         tmpAvrg_sma2 += BufU16[((*ptrBufCntr - tmpWin_sma2) + tmpCntr_sma2) & MOFSRV_LIB_7];
         }
      tmpAvrg_sma2 = tmpAvrg_sma2/tmpWin_sma2;
      /* EasyCASE ( 259
         Limiting to uint16 range */
      if (tmpAvrg_sma2 > MOFSRV_LIB_MAXUINT16)
         {
         tmpAvrg_sma2 = MOFSRV_LIB_MAXUINT16;
         }
      else
         {
         /*In range */
         }
      /* EasyCASE ) */
      }
   ptrBufCntr_sma2 = ((*ptrBufCntr + MOFSRV_LIB_ONE) & MOFSRV_LIB_7);
   *ptrBufCntr = ptrBufCntr_sma2;
   *ptrBufCntrCpl = (uint8)~ptrBufCntr_sma2;
   /* EasyCASE - */
   /* EasyCASE < */
   return((uint16)tmpAvrg_sma2);
   /* EasyCASE > */
   }
/* EasyCASE ) */
/* EasyCASE ( 244
   MoFSrv_Lib_SimpleMovgAvrg8S8 */
/* Example how to call in your function:
MoFSrv_Lib_SimpleMovgAvrg8S8(MoFXYZ_BufS8,MoFXYZ_BufS8Cpl,&MoFXYZ_ptrBufCntr,&MoFXYZ_ptrBufCntrCpl,MoFXYZ_Win_C,MoFXYZ_ValS8 )

Note:Temporary variable which used inside Inline function is getting memory in Registors.
 */
/* EasyCASE - */
LOCAL_INLINE sint8 MoFSrv_Lib_SimpleMovgAvrg8S8(sint8 BufS8[],
                                                uint8 BufS8Cpl[],
                                                uint8 *ptrBufCntr,
                                                uint8 *ptrBufCntrCpl,
                                                const uint8 win,
                                                const sint8 inS8);
/* EasyCASE F */
LOCAL_INLINE sint8 MoFSrv_Lib_SimpleMovgAvrg8S8(sint8 BufS8[],
                                                uint8 BufS8Cpl[],
                                                uint8 *ptrBufCntr,
                                                uint8 *ptrBufCntrCpl,
                                                const uint8 win,
                                                const sint8 inS8)
   {
   sint16 tmpAvrg_sma3;
   uint8 tmpCntr_sma3;
   uint8 tmpWin_sma3;
   uint8 ptrBufCntr_sma3;
   /* EasyCASE - */
   tmpAvrg_sma3 = MOFSRV_LIB_ZERO;

   BufS8[*ptrBufCntr] = inS8;
   BufS8Cpl[*ptrBufCntr] = (uint8)~(uint8)inS8;
   if ((win == MOFSRV_LIB_ZERO)||(win == MOFSRV_LIB_ONE))
      {
      tmpAvrg_sma3 = inS8;
      }
   else
      {
      /* EasyCASE ( 245
         Limit the window to 8, to secure overflows */
      if (win > MOFSRV_LIB_MAXFLD)
         {
         tmpWin_sma3 = MOFSRV_LIB_MAXFLD;
         }
      else
         {
         tmpWin_sma3 = win;
         }
      /* EasyCASE ) */
      for (tmpCntr_sma3 = MOFSRV_LIB_ONE; tmpCntr_sma3 <= tmpWin_sma3; tmpCntr_sma3++)
         {
         tmpAvrg_sma3 += BufS8[((*ptrBufCntr - tmpWin_sma3) + tmpCntr_sma3) & MOFSRV_LIB_7];
         }
      tmpAvrg_sma3 = tmpAvrg_sma3/tmpWin_sma3;
      /* EasyCASE ( 263
         Limiting to sint8 range */
      if (tmpAvrg_sma3 > MOFSRV_LIB_MAXSINT8)
         {
         tmpAvrg_sma3 = MOFSRV_LIB_MAXSINT8;
         }
      else
         {
         if (tmpAvrg_sma3 < MOFSRV_LIB_MINSINT8)
            {
            tmpAvrg_sma3 = MOFSRV_LIB_MINSINT8;
            }
         else
            {
            /*In range */
            }
         }
      /* EasyCASE ) */
      }
   ptrBufCntr_sma3 = ((*ptrBufCntr + MOFSRV_LIB_ONE) & MOFSRV_LIB_7);
   *ptrBufCntr = ptrBufCntr_sma3;
   *ptrBufCntrCpl = (uint8)~ptrBufCntr_sma3;
   /* EasyCASE - */
   /* EasyCASE < */
   return((sint8)(tmpAvrg_sma3));
   /* EasyCASE > */
   }
/* EasyCASE ) */
/* EasyCASE ( 250
   MoFSrv_Lib_SimpleMovgAvrg8S16 */
/* Example how to call in your function:
MoFSrv_Lib_SimpleMovgAvrg8S16(MoFXYZ_BufS16,MoFXYZ_BufS16Cpl,&MoFXYZ_ptrBufCntr,&MoFXYZ_ptrBufCntrCpl,MoFXYZ_Win_C,MoFXYZ_ValS16 )

Note:Temporary variable which used inside Inline function is getting memory in Registors.
 */
/* EasyCASE - */
LOCAL_INLINE sint16 MoFSrv_Lib_SimpleMovgAvrg8S16(sint16 BufS16[],
                                                  uint16 BufS16Cpl[],
                                                  uint8 *ptrBufCntr,
                                                  uint8 *ptrBufCntrCpl,
                                                  const uint8 win,
                                                  const sint16 inS16);
/* EasyCASE F */
LOCAL_INLINE sint16 MoFSrv_Lib_SimpleMovgAvrg8S16(sint16 BufS16[],
                                                  uint16 BufS16Cpl[],
                                                  uint8 *ptrBufCntr,
                                                  uint8 *ptrBufCntrCpl,
                                                  const uint8 win,
                                                  const sint16 inS16)
   {
   sint32 tmpAvrg_sma4;
   uint8 tmpCntr_sma4;
   uint8 tmpWin_sma4;
   uint8 ptrBufCntr_sma4;
   /* EasyCASE - */
   tmpAvrg_sma4 = MOFSRV_LIB_ZERO;

   BufS16[*ptrBufCntr] = inS16;
   BufS16Cpl[*ptrBufCntr] = (uint16)~(uint16)inS16;
   if ((win == MOFSRV_LIB_ZERO)||(win == MOFSRV_LIB_ONE))
      {
      tmpAvrg_sma4 = inS16;
      }
   else
      {
      /* EasyCASE ( 251
         Limit the window to 8, to secure overflows */
      if (win > MOFSRV_LIB_MAXFLD)
         {
         tmpWin_sma4 = MOFSRV_LIB_MAXFLD;
         }
      else
         {
         tmpWin_sma4 = win;
         }
      /* EasyCASE ) */
      for (tmpCntr_sma4 = MOFSRV_LIB_ONE; tmpCntr_sma4 <= tmpWin_sma4; tmpCntr_sma4++)
         {
         tmpAvrg_sma4 += BufS16[((*ptrBufCntr - tmpWin_sma4) + tmpCntr_sma4) & MOFSRV_LIB_7];
         }
      tmpAvrg_sma4 = tmpAvrg_sma4/tmpWin_sma4;
      /* EasyCASE ( 267
         Limiting to sint16 range */
      if (tmpAvrg_sma4 > MOFSRV_LIB_MAXSINT16)
         {
         tmpAvrg_sma4 = MOFSRV_LIB_MAXSINT16;
         }
      else
         {
         if (tmpAvrg_sma4 < MOFSRV_LIB_MINSINT16)
            {
            tmpAvrg_sma4 = MOFSRV_LIB_MINSINT16;
            }
         else
            {
            /*In range */
            }
         }
      /* EasyCASE ) */
      }
   ptrBufCntr_sma4 = ((*ptrBufCntr + MOFSRV_LIB_ONE) & MOFSRV_LIB_7);
   *ptrBufCntr = ptrBufCntr_sma4;
   *ptrBufCntrCpl = (uint8)~ptrBufCntr_sma4;
   /* EasyCASE - */
   /* EasyCASE < */
   return((sint16)tmpAvrg_sma4);
   /* EasyCASE > */
   }
/* EasyCASE ) */
/* EasyCASE ( 271
   MoFSrv_Lib_AryIniU8 */
/* Example how to call in your function:
MoFSrv_Lib_AryIniU8(MoFXYZ_ValU8,MoFXYZ_AryU8,MoFXYZ_AryU8Cpl,MoFXYZ_ARYSIZE)

Note:Temporary variable which used inside Inline function is getting memory in Registors.
 */
/* EasyCASE - */
LOCAL_INLINE void MoFSrv_Lib_AryIniU8(uint8 ValU8,
                                      uint8 AryU8[],
                                      uint8 AryU8Cpl[],
                                      const uint8 ArySize);
/* EasyCASE F */
LOCAL_INLINE void MoFSrv_Lib_AryIniU8(uint8 ValU8,
                                      uint8 AryU8[],
                                      uint8 AryU8Cpl[],
                                      const uint8 ArySize)
   {
   uint8 tmpCntr_aryIni1;
   /* EasyCASE - */
   tmpCntr_aryIni1 = MOFSRV_LIB_ZERO;
   while (tmpCntr_aryIni1 < ArySize)
      {
      AryU8[tmpCntr_aryIni1] = ValU8;
      AryU8Cpl[tmpCntr_aryIni1] = (uint8)~ValU8;
      tmpCntr_aryIni1= tmpCntr_aryIni1 + MOFSRV_LIB_ONE;
      }
   }
/* EasyCASE ) */
/* EasyCASE ( 316
   Prototypes MoWrite */
LOCAL_INLINE void MoFSrv_Lib_MoWriteU8(uint8 *Var, uint8 *VarCpl, uint8 Val);
LOCAL_INLINE void MoFSrv_Lib_MoWriteS8(sint8 *Var, uint8 *VarCpl, sint8 Val);

LOCAL_INLINE void MoFSrv_Lib_MoWriteU16(uint16 *Var, uint16 *VarCpl, uint16 Val);
LOCAL_INLINE void MoFSrv_Lib_MoWriteS16(sint16 *Var, uint16 *VarCpl, sint16 Val);

LOCAL_INLINE void MoFSrv_Lib_MoWriteU32(uint32 *Var, uint32 *VarCpl, uint32 Val);
LOCAL_INLINE void MoFSrv_Lib_MoWriteS32(sint32 *Var, uint32 *VarCpl, sint32 Val);
/* EasyCASE ) */
/* EasyCASE ( 317
   Prototypes MoWriteAry */
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryU8(uint8 idx, uint8 Ary[], uint8 AryCpl[], uint8 Val);
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryS8(uint8 idx, sint8 Ary[], uint8 AryCpl[], sint8 Val);

LOCAL_INLINE void MoFSrv_Lib_MoWriteAryU16(uint8 idx, uint16 Ary[], uint16 AryCpl[], uint16 Val);
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryS16(uint8 idx, sint16 Ary[], uint16 AryCpl[], sint16 Val);

LOCAL_INLINE void MoFSrv_Lib_MoWriteAryU32(uint8 idx, uint32 Ary[], uint32 AryCpl[], uint32 Val);
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryS32(uint8 idx, sint32 Ary[], uint32 AryCpl[], sint32 Val);
/* EasyCASE ) */


/* EasyCASE ( 277
   MoFSrv_Lib_AryIniU16 */
/* Example how to call in your function:
MoFSrv_Lib_AryIniU16(MoFXYZ_ValU16,MoFXYZ_AryU16,MoFXYZ_AryU16Cpl,MoFXYZ_ARYSIZE)

Note:Temporary variable which used inside Inline function is getting memory in Registors.
 */
/* EasyCASE - */
LOCAL_INLINE void MoFSrv_Lib_AryIniU16(uint16 ValU16,
                                      uint16 AryU16[],
                                      uint16 AryU16Cpl[],
                                      const uint8 ArySize);
/* EasyCASE F */
LOCAL_INLINE void MoFSrv_Lib_AryIniU16(uint16 ValU16,
                                      uint16 AryU16[],
                                      uint16 AryU16Cpl[],
                                      const uint8 ArySize)
   {
   uint8 tmpCntr_aryIni2;
   /* EasyCASE - */
   tmpCntr_aryIni2 = MOFSRV_LIB_ZERO;
   while (tmpCntr_aryIni2 < ArySize)
      {
      AryU16[tmpCntr_aryIni2] = ValU16;
      AryU16Cpl[tmpCntr_aryIni2] = (uint16)~ValU16;
      tmpCntr_aryIni2= tmpCntr_aryIni2 + MOFSRV_LIB_ONE;
      }
   }
 LOCAL_INLINE void MoFSrv_Lib_AryIniU32(uint32 ValU32,
                                      uint32 AryU32[],
                                      uint32 AryU32Cpl[],
                                      const uint8 ArySize);
/* EasyCASE F */
LOCAL_INLINE void MoFSrv_Lib_AryIniU32(uint32 ValU32,
                                      uint32 AryU32[],
                                      uint32 AryU32Cpl[],
                                      const uint8 ArySize)
   {
   uint8 tmpCntr_aryIni2;
   /* EasyCASE - */
   tmpCntr_aryIni2 = MOFSRV_LIB_ZERO;
   while (tmpCntr_aryIni2 < ArySize)
      {
      AryU32[tmpCntr_aryIni2] = ValU32;
      AryU32Cpl[tmpCntr_aryIni2] = (uint32)~ValU32;
      tmpCntr_aryIni2= tmpCntr_aryIni2 + MOFSRV_LIB_ONE;
      }
   }
/* EasyCASE ) */
/* EasyCASE ( 279
   MoFSrv_Lib_AryIniS8 */
/* Example how to call in your function:
MoFSrv_Lib_AryIniU8(MoFXYZ_ValS8,MoFXYZ_AryS8,MoFXYZ_AryS8Cpl,MoFXYZ_ARYSIZE)

Note:Temporary variable which used inside Inline function is getting memory in Registors.
 */
/* EasyCASE - */
LOCAL_INLINE void MoFSrv_Lib_AryIniS8(sint8 ValS8,
                                      sint8 AryS8[],
                                      uint8 AryS8Cpl[],
                                      const uint8 ArySize);
/* EasyCASE F */
LOCAL_INLINE  void MoFSrv_Lib_AryIniS8(sint8 ValS8,
                          sint8 AryS8[],
                          uint8 AryS8Cpl[],
                          const uint8 ArySize)
   {
   uint8 tmpCntr_aryIni3;
   /* EasyCASE - */
   tmpCntr_aryIni3 = MOFSRV_LIB_ZERO;
   while (tmpCntr_aryIni3 < ArySize)
      {
      AryS8[tmpCntr_aryIni3] = ValS8;
      AryS8Cpl[tmpCntr_aryIni3] = (uint8)~(uint8)ValS8;
      tmpCntr_aryIni3= tmpCntr_aryIni3 + MOFSRV_LIB_ONE;
      }
   }
/* EasyCASE ) */
/* EasyCASE ( 281
   MoFSrv_Lib_AryIniS16 */
/* Example how to call in your function:
MoFSrv_Lib_AryIniS16(MoFXYZ_ValS16,MoFXYZ_AryS16,MoFXYZ_AryS16Cpl,MoFXYZ_ARYSIZE)

Note:Temporary variable which used inside Inline function is getting memory in Registors.
 */
/* EasyCASE - */
LOCAL_INLINE void MoFSrv_Lib_AryIniS16(sint16 ValS16,
                                      sint16 AryS16[],
                                      uint16 AryS16Cpl[],
                                      const uint8 ArySize);
/* EasyCASE F */
LOCAL_INLINE void MoFSrv_Lib_AryIniS16(sint16 ValS16,
                          sint16 AryS16[],
                          uint16 AryS16Cpl[],
                          const uint8 ArySize)
   {
   uint8 tmpCntr_aryIni4;
   /* EasyCASE - */
   tmpCntr_aryIni4 = MOFSRV_LIB_ZERO;
   while (tmpCntr_aryIni4 < ArySize)
      {
      AryS16[tmpCntr_aryIni4] = ValS16;
      AryS16Cpl[tmpCntr_aryIni4] = (uint16)~(uint16)ValS16;
      tmpCntr_aryIni4= tmpCntr_aryIni4 + MOFSRV_LIB_ONE;
      }
   }
   LOCAL_INLINE void MoFSrv_Lib_AryIniS32(sint32 ValS32,
                                      sint32 AryS32[],
                                      uint32 AryS32Cpl[],
                                      const uint8 ArySize);
/* EasyCASE F */
LOCAL_INLINE void MoFSrv_Lib_AryIniS32(sint32 ValS32,
                          sint32 AryS32[],
                          uint32 AryS32Cpl[],
                          const uint8 ArySize)
   {
   uint8 tmpCntr_aryIni4;
   /* EasyCASE - */
   tmpCntr_aryIni4 = MOFSRV_LIB_ZERO;
   while (tmpCntr_aryIni4 < ArySize)
      {
      AryS32[tmpCntr_aryIni4] = ValS32;
      AryS32Cpl[tmpCntr_aryIni4] = (uint32)~(uint32)ValS32;
      tmpCntr_aryIni4= tmpCntr_aryIni4 + MOFSRV_LIB_ONE;
      }
   }
/* EasyCASE ) */
/* EasyCASE ) */

/* EasyCASE ) */
/* EasyCASE ( 333
   MoFSrv_Lib_MoWrite */
/* EasyCASE ( 334
   MoFSrv_Lib_MoWriteU8 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteU8(uint8 *Var, uint8 *VarCpl, uint8 Val)
{
    uint8 MoWriteTempU8 = Val;
    *Var    = MoWriteTempU8;
    *VarCpl = (uint8)(~(MoWriteTempU8));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 335
   MoFSrv_Lib_MoWriteS8 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteS8(sint8 *Var, uint8 *VarCpl, sint8 Val)
{
    sint8 MoWriteTempS8 = Val;
    *Var    = MoWriteTempS8;
    *VarCpl = (uint8)(~((uint8)(MoWriteTempS8)));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 336
   MoFSrv_Lib_MoWriteU16 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteU16(uint16 *Var, uint16 *VarCpl, uint16 Val)
{
    uint16 MoWriteTempU16 = Val;
    *Var    = MoWriteTempU16;
    *VarCpl = (uint16)(~(MoWriteTempU16));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 337
   MoFSrv_Lib_MoWriteS16 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteS16(sint16 *Var, uint16 *VarCpl, sint16 Val)
{
    sint16 MoWriteTempS16 = Val;
    *Var    = MoWriteTempS16;
    *VarCpl = (uint16)(~((uint16)(MoWriteTempS16)));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 338
   MoFSrv_Lib_MoWriteU32 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteU32(uint32 *Var, uint32 *VarCpl, uint32 Val)
{
    uint32 MoWriteTempU32 = Val;
    *Var    = MoWriteTempU32;
    *VarCpl = (uint32)(~(MoWriteTempU32));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 339
   MoFSrv_Lib_MoWriteS32 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteS32(sint32 *Var, uint32 *VarCpl, sint32 Val)
{
    sint32 MoWriteTempS32 = Val;
    *Var    = MoWriteTempS32;
    *VarCpl = (uint32)(~((uint32)(MoWriteTempS32)));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 340
   MoFSrv_Lib_MoWriteAry */
/* EasyCASE ( 341
   MoFSrv_Lib_MoWriteAryU8 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryU8(uint8 idx, uint8 Ary[], uint8 AryCpl[], uint8 Val)
{
    uint8 MoWriteTempU8 = Val;
    Ary[idx]    = MoWriteTempU8;
    AryCpl[idx] = (uint8)(~(MoWriteTempU8));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 342
   MoFSrv_Lib_MoWriteAryS8 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryS8(uint8 idx, sint8 Ary[], uint8 AryCpl[], sint8 Val)
{
    sint8 MoWriteTempS8 = Val;
    Ary[idx]    = MoWriteTempS8;
    AryCpl[idx] = (uint8)(~((uint8)(MoWriteTempS8)));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 343
   MoFSrv_Lib_MoWriteAryU16 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryU16(uint8 idx, uint16 Ary[], uint16 AryCpl[], uint16 Val)
{
    uint16 MoWriteTempU16 = Val;
    Ary[idx]    = MoWriteTempU16;
    AryCpl[idx] = (uint16)(~(MoWriteTempU16));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 344
   MoFSrv_Lib_MoWriteAryS16 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryS16(uint8 idx, sint16 Ary[], uint16 AryCpl[], sint16 Val)
{
    sint16 MoWriteTempS16 = Val;
    Ary[idx]    = MoWriteTempS16;
    AryCpl[idx] = (uint16)(~((uint16)(MoWriteTempS16)));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 345
   MoFSrv_Lib_MoWriteAryU32 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryU32(uint8 idx, uint32 Ary[], uint32 AryCpl[], uint32 Val)
{
    uint32 MoWriteTempU32 = Val;
    Ary[idx]    = MoWriteTempU32;
    AryCpl[idx] = (uint32)(~(MoWriteTempU32));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ( 346
   MoFSrv_Lib_MoWriteAryS32 */
/* EasyCASE < */
LOCAL_INLINE void MoFSrv_Lib_MoWriteAryS32(uint8 idx, sint32 Ary[], uint32 AryCpl[], sint32 Val)
{
    sint32 MoWriteTempS32 = Val;
    Ary[idx]    = MoWriteTempS32;
    AryCpl[idx] = (uint32)(~((uint32)(MoWriteTempS32)));
}
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ) */



#endif /* beware of multiple include */
/* EasyCASE ) */
