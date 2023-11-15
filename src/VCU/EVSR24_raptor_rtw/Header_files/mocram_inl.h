/* EasyCASE V6.5 11.08.2009 18:11:31 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,8388736,16711680,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,Standard,80,4,-70,0,400,0,0,0,0,0,0,3,2,1,49,600,600
LastLevelId=137 */
/* EasyCASE ( 82
   Header fuer den kompletten RAM-Check */
/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in by [N]estor)      ***************************
 ***************************************************************************************************
 *
 * $Filename__:mocram_inl.h$
 *
 * $Author____:RWF2SI$
 *
 * $Function__:initial version for DGS memory checks$
 *
 ***************************************************************************************************
*/
/* EasyCASE ( 28
   Modulheader und Aenderungskommentar */
/**************************************************************************
 * $Repository:SDOM$
 * $User______:RWF2SI$
 * $Date______:27.04.2011$
 * $Class_____:SWHDR$
 * $Name______:mocram_inl$
 * $Variant___:1.1.0$
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
 * 1.1.0; 0     27.04.2011 RWF2SI
 *   correct PAVAST implementation
 * 
 * 1.0.0; 3     08.07.2010 RWF2SI
 *   new development step 
 *   
 *   1. rework because of findings in software-reviews
 *   
 *   2. adaption for DGS-Make environment
 *   
 *   3. adaption because of new coding style monitoring
 *   
 *   4. rework of include-dependency
 * 
 * 1.0.0; 2     10.06.2010 RWF2SI
 *   new development step 
 *   
 *   1. rework because of findings in software-reviews
 *   
 *   2. adaption for DGS-Make environment
 *   
 *   3. adaption because of new coding style monitoring
 *   
 *   4. rework of include-dependency
 * 
 * 1.0.0; 1     20.05.2010 RWF2SI
 *   new development step 
 *   
 *   1. rework because of findings in software-reviews
 *   
 *   2. adaption for DGS-Make environment
 *   
 *   3. adaption because of new coding style monitoring
 *   
 *   4. rework of include-dependency
 * 
 * 1.0.0; 0     11.08.2009 RWF2SI
 *   initial version for DGS memory checks
 * 
 * $
 *
 *************************************************************************
</RBHead>*/
/* EasyCASE ) */
#ifndef _MOCRAM_INL_H
         #define _MOCRAM_INL_H                                                 /* module identifier  */
/* EasyCASE ( 136
   Include */
/* ******************************************************************************************************* */
/* *******************************************     Includes     ****************************************** */
/* ******************************************************************************************************* */

#include    "common.h"
#include    "services.h"
#include    "mo_glbl.h"
#include    "mocram_inl_dat.h"     /* Deklarationen Funktionen fuer den Speichertest */
/* EasyCASE ) */
/* EasyCASE ( 137
   Abfrage auf Systemkonstanten */
/* ******************************************************************************************************* */
/* ********************************     Abfrage auf Systemkonstanten     ********************************* */
/* ******************************************************************************************************* */
 #ifndef ECU_GENR_SY
     #error >>>> 'ECU_GENR_SY' not defined!
 #endif

 /* define MOCRAM_CO_CSA for compatibility */
 #define MOCRAM_CO_CSA MoCRAM_Inl_CSA
 #define MOCRAM_CSA MoCRAM_Inl_CSA
/* EasyCASE ) */
/* EasyCASE ( 36
   Deklarationen */
/* EasyCASE ( 84
   Macro zum aufsetzen der lokale CSA */
/* *****************************************************************************************************

Der Auf- und Einbau dieses Assembler-Codes an dieser Stelle wurde mit DS/EEH2-Wippermann am 31.01.05
abgestimmt. Der Code wurde mit leichten modifikationen (Groesse und Laenge der CSAs) aus dem CORE
uebernommen.

***************************************************************************************************** */
/* EasyCASE - */
/* EasyCASE < */
#if( (ECU_GENR_SY == 2) || (ECU_GENR_SY == 3) ) /* MX17 and EDC17 systems */
INLINE_FUNCTION void MoCRAM_Inl_CSA(void)
{
asm volatile ("                                                                                      \n\
             isync                                                                                   \n\
             dsync                                                                                   \n\
             # initialize context save areas (CSAs), PCXI, LCX and FCX                               \n\
             mfcr    %d0, $pcxi                          # clear PCX field in PCXI                   \n\
             movh    %d1, 0xfff0                                                                     \n\
             and     %d0, %d0, %d1                                                                   \n\
             mtcr    $pcxi,%d0                                                                       \n\
             isync                                                                                   \n\
             movh    %d0, hi:__RAM0_USER_START           # %d0 = begin of CSA                        \n\
             addi    %d0, %d0, lo:__RAM0_USER_START                                                  \n\
             addi    %d0, %d0, 0x3F                      # align to 64 byte                          \n\
             andn    %d0, %d0, 0x3F                      # align to 64 byte                          \n\
             movh    %d2, hi:0x00000140                  # length of CSA (5 parts->0x40 per part     \n\
             addi    %d2, %d2,lo:0x00000140                                                          \n\
             sh      %d2, %d2, -6                        # %d2 = number of CSAs                      \n\
             mov.a   %a3, %d0                            # %a3 = address of first CSA                \n\
             extr.u  %d0, %d0, 28, 4                     # %d0 = segment << 16                       \n\
             sh      %d0, %d0, 16                                                                    \n\
             lea     %a4, 0                              # %a4 = previous CSA = 0                    \n\
             st.a    [%a3], %a4                          # store it in 1st CSA                       \n\
             mov.aa  %a4, %a3                            # %a4 = current CSA                         \n\
             lea     %a3, [%a3]64                        # %a3 = %a3->nextCSA                        \n\
             mov.d   %d1, %a3                                                                        \n\
             extr.u  %d1, %d1, 6, 16                     # get CSA index                             \n\
             or      %d1, %d1, %d0                       # add segment number                        \n\
             mtcr    $lcx, %d1                           # initialize LCX                            \n\
             mov.a   %a5, %d2                            # %a5 = loop counter                        \n\
             CSA_MORAM_LOOP:                                                                         \n\
             mov.d   %d1, %a4                            # %d1 = current CSA address                 \n\
             extr.u  %d1, %d1, 6, 16                     # get CSA index                             \n\
             or      %d1, %d1, %d0                       # add segment number                        \n\
             st.w    [%a3], %d1                          # store nextCSA pointer                     \n\
             mov.aa  %a4, %a3                            # %a4 = current CSA address                 \n\
             lea     %a3, [%a3]64                        # %a3 = %a3->nextCSA                        \n\
             loop    %a5, CSA_MORAM_LOOP                 # repeat until done                         \n\
             mov.d   %d1, %a4                            # %d1 = current CSA address                 \n\
             extr.u  %d1, %d1, 6, 16                     # get CSA index                             \n\
             or      %d1, %d1, %d0                       # add segment number                        \n\
             mtcr    $fcx, %d1                           # initialize FCX                            \n\
             isync                                                                                   \n\
             ");
}
#endif           

#if( ECU_GENR_SY == 4 ) /* VMx17 systems */
INLINE_FUNCTION void MoCRAM_Inl_CSA(void)
{ 
asm volatile ("                                                                                                                                                                          \n\
             isync                                                                                   \n\
             dsync                                                                                   \n\
             # initialize context save areas (CSAs), PCXI, LCX and FCX                               \n\
             mfcr    %d0, $pcxi                          # clear PCX field in PCXI                   \n\
             movh    %d1, 0xfff0                                                                     \n\
             and     %d0, %d0, %d1                                                                   \n\
             mtcr    $pcxi,%d0                                                                       \n\
             isync                                                                                   \n\
             movh    %d0, hi:__RAM0_USER_START           # %d0 = begin of CSA                        \n\
             addi    %d0, %d0, lo:__RAM0_USER_START                                                  \n\
             addi    %d0, %d0, 0x3F                      # align to 64 byte                          \n\
             andn    %d0, %d0, 0x3F                      # align to 64 byte                          \n\
             movh    %d2, hi:0x00000200                  # length of CSA (8 parts->0x40 per part     \n\
             addi    %d2, %d2,lo:0x00000200                                                          \n\
             sh      %d2, %d2, -6                        # %d2 = number of CSAs                      \n\
             mov.a   %a3, %d0                            # %a3 = address of first CSA                \n\
             extr.u  %d0, %d0, 28, 4                     # %d0 = segment << 16                       \n\
             sh      %d0, %d0, 16                                                                    \n\
             lea     %a4, 0                              # %a4 = previous CSA = 0                    \n\
             st.a    [%a3], %a4                          # store it in 1st CSA                       \n\
             mov.aa  %a4, %a3                            # %a4 = current CSA                         \n\
             lea     %a3, [%a3]64                        # %a3 = %a3->nextCSA                        \n\
             mov.d   %d1, %a3                                                                        \n\
             extr.u  %d1, %d1, 6, 16                     # get CSA index                             \n\
             or      %d1, %d1, %d0                       # add segment number                        \n\
             mtcr    $lcx, %d1                           # initialize LCX                            \n\
             mov.a   %a5, %d2                            # %a5 = loop counter                        \n\
             CSA_MORAM_LOOP:                                                                         \n\
             mov.d   %d1, %a4                            # %d1 = current CSA address                 \n\
             extr.u  %d1, %d1, 6, 16                     # get CSA index                             \n\
             or      %d1, %d1, %d0                       # add segment number                        \n\
             st.w    [%a3], %d1                          # store nextCSA pointer                     \n\
             mov.aa  %a4, %a3                            # %a4 = current CSA address                 \n\
             lea     %a3, [%a3]64                        # %a3 = %a3->nextCSA                        \n\
             loop    %a5, CSA_MORAM_LOOP                 # repeat until done                         \n\
             mov.d   %d1, %a4                            # %d1 = current CSA address                 \n\
             extr.u  %d1, %d1, 6, 16                     # get CSA index                             \n\
             or      %d1, %d1, %d0                       # add segment number                        \n\
             mtcr    $fcx, %d1                           # initialize FCX                            \n\
             isync                                                                                   \n\
             ");                                                                                                                                                                         
}
#endif
/* EasyCASE > */
/* EasyCASE - */
/* EasyCASE < */
#if( ECU_GENR_SY == 4 )
INLINE_FUNCTION void MoCRAM_Inl_Stack(void)
{
asm volatile ("                                                                                                                                                                         \n\
             isync                                                                                  \n\
             movh    %d0, hi:__RAM0_USER_START           # %d0 = begin of CSA                       \n\
             addi    %d0, %d0, lo:__RAM0_USER_START                                                 \n\
             addi    %d0, %d0, 0x3F                      # align to 64 byte                         \n\
             andn    %d0, %d0, 0x3F                      # align to 64 byte                         \n\
             addi    %d0, %d0, hi:0x00000200             # length of CSA (8 parts->0x40 per part    \n\
             addi    %d0, %d0, lo:0x00000200                                                        \n\
             st.w    [%a3], %d0                          # store stack base addr.                   \n\
             # initialize SP                                                                        \n\
             lea     %sp, [%a3]192                       # load %sp                                 \n\
             ");                                                                                                                                                                
}
#endif
/* EasyCASE > */
/* EasyCASE ) */
/* EasyCASE ) */
#endif /* _MOCRAM_CO_INL_H */
/* EasyCASE ) */
