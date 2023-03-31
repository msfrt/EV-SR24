/* EasyCASE V6.5 04/28/2017 17:14:04 */
/* EasyCASE O
If=horizontal
LevelNumbers=no
LineNumbers=no
Colors=16777215,0,12582912,16744448,0,0,0,255,8388736,0,33023,32768,0,0,0,0,0,32768,12632256,255,65280,255,255,16711935
ScreenFont=Courier New,Standard,80,4,-11,0,400,0,0,0,0,0,0,3,2,1,49,96,96
PrinterFont=Courier New,,80,4,-10,0,400,0,0,0,0,0,0,3,2,1,49,90,90
LastLevelId=557 */
/* EasyCASE ( 540 */
/* EasyCASE ( 1
   Monitoring: Execution of monitoring funktions */
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
 * $Filename__:moexe_co.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:SPB4COB$
 * $Date______:02.05.2017$
 * $Class_____:SWHDR$
 * $Name______:moexe_co$
 * $Variant___:9002.0.0$
 * $Revision__:1$
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
 * 9002.0.0; 1     02.05.2017 SPB4COB
 *   Code review points fix
 * 
 * 9002.0.0; 0     26.04.2017 SPB4COB
 *   -
 * 
 * 9001.0.0; 1     05.08.2015 NVA3KOR
 *   Review Changes Implemented
 * 
 * 9001.0.0; 0     27.07.2015 NVA3KOR
 *   Update for New Eagle Non EGAS Solution
 * 
 * 9000.1.0; 1     27.08.2012 MOH3COB
 *   Proc name changes
 * 
 * 9000.1.0; 0     09.07.2012 MOH3COB
 *   Interface changes for uC1724
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/
/* EasyCASE ) */
#ifndef _MOEXE_H
#define _MOEXE_H
/* EasyCASE ( 50
   Includes */
/*
***************************************************************************************************
* Includes
***************************************************************************************************
*/
#include   "mo_pub.h"
/* Include all headerfiles with partial response contribution for functional instruction test    */
/* EasyCASE ) */
/* EasyCASE ( 515
   Defines to modify */
/* EasyCASE ( 134
   Module ID's (Programm-Flow-Check) */
/* Each Modul involved in Program Flow Check must have a unique Id with a maximal length of 24 Bit */
/* Use only the Values listed below (in comments). See MoCPFC for Details.                         */


#define MOCADC_CO_PFC_ID            0x000001UL          /* 0x000001 = 0000 0000  0000 0000  0000 0001 */
#define MOCMEM_CO_CHKRAM_PFC_ID     0x000002UL          /* 0x000002 = 0000 0000  0000 0000  0000 0010 */
#define MOCMEM_CO_CHKROM_PFC_ID     0x000004UL          /* 0x000004 = 0000 0000  0000 0000  0000 0100 */
#define MOCMEM_CO_ERRHDL_PFC_ID     0x000008UL          /* 0x000008 = 0000 0000  0000 0000  0000 1000 */
#define MOCGPTA_CO_PFC_ID           0x000010UL          /* 0x000010 = 0000 0000  0000 0000  0001 0000 */
#define MOCPCP_CO_PFC_ID            0x000020UL          /* 0x000020 = 0000 0000  0000 0000  0010 0000 */
#define MOCPFC_CO_PFC_ID            0x000040UL          /* 0x000040 = 0000 0000  0000 0000  0100 0000 */
                                                        /* 0x000080 = 0000 0000  0000 0000  1000 0000 */
                                                        /* 0x000100 = 0000 0000  0000 0001  0000 0000 */
                                                        /* 0x000200 = 0000 0000  0000 0010  0000 0000 */
                                                        /* 0x000400 = 0000 0000  0000 0100  0000 0000 */
                                                        /* 0x000800 = 0000 0000  0000 1000  0000 0000 */
                                                        /* 0x001000 = 0000 0000  0001 0000  0000 0000 */
                                                        /* 0x002000 = 0000 0000  0010 0000  0000 0000 */
                                                        /* 0x004000 = 0000 0000  0100 0000  0000 0000 */
                                                        /* 0x010000 = 0000 0001  0000 0000  0000 0000 */
                                                        /* 0x020000 = 0000 0010  0000 0000  0000 0000 */
                                                        /* 0x040000 = 0000 0100  0000 0000  0000 0000 */
                                                        /* 0x080000 = 0000 1000  0000 0000  0000 0000 */
                                                        /* 0x100000 = 0001 0000  0000 0000  0000 0000 */
                                                        /* 0x200000 = 0010 0000  0000 0000  0000 0000 */
                                                        /* 0x400000 = 0100 0000  0000 0000  0000 0000 */
                                                        /* 0x808001 = 1000 0000  1000 0000  0000 0001 */
                                                        /* 0x808002 = 1000 0000  1000 0000  0000 0010 */
                                                        /* 0x808004 = 1000 0000  1000 0000  0000 0100 */
                                                        /* 0x808008 = 1000 0000  1000 0000  0000 1000 */
                                                        /* 0x808010 = 1000 0000  1000 0000  0001 0000 */
                                                        /* 0x808020 = 1000 0000  1000 0000  0010 0000 */
                                                        /* 0x808040 = 1000 0000  1000 0000  0100 0000 */
                                                        /* 0x808080 = 1000 0000  1000 0000  1000 0000 */
                                                        /* 0x808100 = 1000 0000  1000 0001  0000 0000 */
                                                        /* 0x808200 = 1000 0000  1000 0010  0000 0000 */
                                                        /* 0x808400 = 1000 0000  1000 0100  0000 0000 */
                                                        /* 0x808800 = 1000 0000  1000 1000  0000 0000 */
                                                        /* 0x809000 = 1000 0000  1001 0000  0000 0000 */
                                                        /* 0x80A000 = 1000 0000  1010 0000  0000 0000 */
                                                        /* 0x80C000 = 1000 0000  1100 0000  0000 0000 */
                                                        /* 0x818000 = 1000 0001  1000 0000  0000 0000 */
                                                        /* 0x828000 = 1000 0010  1000 0000  0000 0000 */
                                                        /* 0x848000 = 1000 0100  1000 0000  0000 0000 */
                                                        /* 0x888000 = 1000 1000  1000 0000  0000 0000 */
                                                        /* 0x908000 = 1001 0000  1000 0000  0000 0000 */
                                                        /* 0xA08000 = 1010 0000  1000 0000  0000 0000 */
                                                        /* 0xC08000 = 1100 0000  1000 0000  0000 0000 */
                                                        /* 0x808081 = 1000 0000  1000 0000  1000 0001 */
                                                        /* 0x808082 = 1000 0000  1000 0000  1000 0010 */
                                                        /* 0x808084 = 1000 0000  1000 0000  1000 0100 */
                                                        /* 0x808088 = 1000 0000  1000 0000  1000 1000 */
                                                        /* 0x808090 = 1000 0000  1000 0000  1001 0000 */
                                                        /* 0x8080A0 = 1000 0000  1000 0000  1010 0000 */
                                                        /* 0x8080C0 = 1000 0000  1000 0000  1100 0000 */
                                                        /* 0x808180 = 1000 0000  1000 0001  1000 0000 */
                                                        /* 0x808280 = 1000 0000  1000 0010  1000 0000 */
                                                        /* 0x808480 = 1000 0000  1000 0100  1000 0000 */
                                                        /* 0x808880 = 1000 0000  1000 1000  1000 0000 */
                                                        /* 0x809080 = 1000 0000  1001 0000  1000 0000 */
                                                        /* 0x80A080 = 1000 0000  1010 0000  1000 0000 */
                                                        /* 0x80C080 = 1000 0000  1100 0000  1000 0000 */
                                                        /* 0x818080 = 1000 0001  1000 0000  1000 0000 */
                                                        /* 0x828080 = 1000 0010  1000 0000  1000 0000 */
                                                        /* 0x848080 = 1000 0100  1000 0000  1000 0000 */
                                                        /* 0x888080 = 1000 1000  1000 0000  1000 0000 */
                                                        /* 0x908080 = 1001 0000  1000 0000  1000 0000 */
                                                        /* 0xA08080 = 1010 0000  1000 0000  1000 0000 */
                                                        /* 0xC08080 = 1100 0000  1000 0000  1000 0000 */
/* EasyCASE ) */
/* *************************************************************************************************** */
/* Error Values for modules without PFC-ID (moduls are not part of programm-flow-check !!)             */
/* *************************************************************************************************** */
#define MOFSRV_LIB_LOWPASSS8_CPLERR_ID     0xB00001UL    /* 0xB00001 = 1011 0000  0000 0000  0000 0001 */
#define MOFSRV_LIB_LOWPASSS16_CPLERR_ID    0xB00002UL    /* 0xB00002 = 1011 0000  0000 0000  0000 0010 */
#define MOFSRV_LIB_LOWPASSU8_CPLERR_ID     0xB00003UL    /* 0xB00003 = 1011 0000  0000 0000  0000 0011 */
#define MOFSRV_LIB_LOWPASSU16_CPLERR_ID    0xB00004UL    /* 0xB00004 = 1011 0000  0000 0000  0000 0100 */
#define MOFSRV_LIB_TOTLOWPASSS8_CPLERR_ID  0xB00005UL    /* 0xB00005 = 1011 0000  0000 0000  0000 0101 */
#define MOFSRV_LIB_TOTLOWPASSS16_CPLERR_ID 0xB00006UL    /* 0xB00006 = 1011 0000  0000 0000  0000 0110 */
#define MOFSRV_LIB_TOTLOWPASSU8_CPLERR_ID  0xB00007UL    /* 0xB00007 = 1011 0000  0000 0000  0000 0111 */
#define MOFSRV_LIB_TOTLOWPASSU16_CPLERR_ID 0xB00008UL    /* 0xB00008 = 1011 0000  0000 0000  0000 1000 */

#define MOCPCP_CO_CPLERR_ID         0xC00000UL           /* 0xC00000 = 1100 0000  0000 0000  0000 0000 */
#define MOCPFC_CO_CPLERR_ID         0xD00000UL           /* 0xD00000 = 1101 0000  0000 0000  0000 0000 */
#define MOCCOM_CO_PFC_ID            0xE00000UL           /* 0xE00000 = 1110 0000  0000 0000  0000 0000 */
#define MOCSOP_CO_PFC_ID            0xF00000UL           /* 0xF00000 = 1111 0000  0000 0000  0000 0000 */
/* EasyCASE ( 142
   Values of Programm-Flow-Check (depending on configuration) */
/*                     This Values depend on the configuration of a certain Project                     */
/* ---------------------------------------------------------------------------------------------------- */

/* Restart Id for Program Flow check                                                                    */
/* Used in MoCPFC to re-initialize the checksum to MOEXE_START_PFC in case no new question occured      */
#define MOEXE_CO_RESTART_PFC_ID    0x7B8D71DBUL
/* EasyCASE - */
/*                     This Values depend on the configuration of a certain Project                     */
/* ---------------------------------------------------------------------------------------------------- */

/*   Actual values for Program Flow Check results. To be calculated manually.                           */
#define PFCRESP_0    0x8B7D812BUL                            /* Response  for Question 0   */
#define PFCRESP_1    0x9A6C903AUL                            /* Response  for Question 1   */
#define PFCRESP_2    0xA95FA309UL                            /* Response  for Question 2   */
#define PFCRESP_3    0xB84EB218UL                            /* Response  for Question 3   */
#define PFCRESP_4    0xCF39C56FUL                            /* Response  for Question 4   */
#define PFCRESP_5    0xDE28D47EUL                            /* Response  for Question 5   */
#define PFCRESP_6    0xED1BE74DUL                            /* Response  for Question 6   */
#define PFCRESP_7    0xFC0AF65CUL                            /* Response  for Question 7   */
#define PFCRESP_8    0x03F509A3UL                            /* Response  for Question 8   */
#define PFCRESP_9    0x12E418B2UL                            /* Response  for Question 9   */
#define PFCRESP_A    0x21D72B81UL                            /* Response  for Question 10  */
#define PFCRESP_B    0x30C63A90UL                            /* Response  for Question 11  */
#define PFCRESP_C    0x47B14DE7UL                            /* Response  for Question 12  */
#define PFCRESP_D    0x56A05CF6UL                            /* Response  for Question 13  */
#define PFCRESP_E    0x65936FC5UL                            /* Response  for Question 14  */
#define PFCRESP_F    0x74827ED4UL                            /* Response  for Question 15  */
/* Definition to be added with the introduction of Program Flow Check */
/* EasyCASE ) */
/* EasyCASE ( 149
   Shift ID's for Instruction Test */
/* Each Modul involved in Instruction Test must have a Shift Id with a maximal value of 5          */
/*                                                                                                 */
/* EasyCASE ) */
/* EasyCASE ( 154
   Calculation of Partial response contributors including shift operation */
/* EasyCASE ( 157
   Template */
/* Partial response and Shift operation to be added here */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 158
   Calculation of partial responses */
/*
Here the values from each function in function specific instruction test are collected and the
common response is calculated. For Computer-specififc Instruction Test this values are the desired Values,
so the Correction Value will became 0 in each case

*/
/* Response  for Question 0  */

/* #define CPURESP_00     ( MOFXXX_RESP_00 + MOFXXX_RESP_00 + MOFXXX_RESP_00 + ......  */
/* EasyCASE - */
/* Response  for Question 01  */

/* #define CPURESP_01     ( MOFXXX_RESP_01 + MOFXXX_RESP_01 + MOFXXX_RESP_01 + ......  */
/* EasyCASE - */
/* Response  for Question 02  */

/* #define CPURESP_02     ( MOFXXX_RESP_02 + MOFXXX_RESP_02 + MOFXXX_RESP_02 + ......  */
/* EasyCASE - */
/* Response  for Question 03  */

/* #define CPURESP_03     ( MOFXXX_RESP_03 + MOFXXX_RESP_03 + MOFXXX_RESP_03 + ......  */
/* EasyCASE - */
/* Response  for Question 04  */

/* #define CPURESP_04     ( MOFXXX_RESP_04 + MOFXXX_RESP_04 + MOFXXX_RESP_04 + ......  */
/* EasyCASE - */
/* Response  for Question 05  */

/* #define CPURESP_05     ( MOFXXX_RESP_05 + MOFXXX_RESP_05 + MOFXXX_RESP_05 + ......  */
/* EasyCASE - */
/* Response  for Question 06  */

/* #define CPURESP_06     ( MOFXXX_RESP_06 + MOFXXX_RESP_06 + MOFXXX_RESP_06 + ......  */
/* EasyCASE - */
/* Response  for Question 07  */

/* #define CPURESP_07     ( MOFXXX_RESP_07 + MOFXXX_RESP_07 + MOFXXX_RESP_07 + ......  */
/* EasyCASE - */
/* Response  for Question 08  */

/* #define CPURESP_08     ( MOFXXX_RESP_08 + MOFXXX_RESP_08 + MOFXXX_RESP_08 + ......  */
/* EasyCASE - */
/* Response  for Question 09  */

/* #define CPURESP_09     ( MOFXXX_RESP_09 + MOFXXX_RESP_09 + MOFXXX_RESP_09 + ......  */
/* EasyCASE - */
/* Response  for Question 10  */

/* #define CPURESP_10     ( MOFXXX_RESP_10 + MOFXXX_RESP_10 + MOFXXX_RESP_10 + ......  */
/* EasyCASE - */
/* Response  for Question 11  */

/* #define CPURESP_11     ( MOFXXX_RESP_11 + MOFXXX_RESP_11 + MOFXXX_RESP_11 + ......  */
/* EasyCASE - */
/* Response  for Question 12  */

/* #define CPURESP_12     ( MOFXXX_RESP_12 + MOFXXX_RESP_12 + MOFXXX_RESP_12 + ......  */
/* EasyCASE - */
/* Response  for Question 13  */

/* #define CPURESP_13     ( MOFXXX_RESP_13 + MOFXXX_RESP_13 + MOFXXX_RESP_13 + ......  */
/* EasyCASE - */
/* Response  for Question 14  */

/* #define CPURESP_14     ( MOFXXX_RESP_14 + MOFXXX_RESP_14 + MOFXXX_RESP_14 + ......  */
/* EasyCASE - */
/* Response  for Question 15  */

/* #define CPURESP_15     ( MOFXXX_RESP_15 + MOFXXX_RESP_15 + MOFXXX_RESP_15 + ......  */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 51
   Defines FIXED */
/* EasyCASE ( 58
   Defines for Program Flow Check (FIX) */
/* EasyCASE ( 59
   Desired values and start value */
/* Start Id for Program Flow Check                                                                      */
/* Used in MoCPFC to initialize the checksum                                                            */

#define MOEXE_CO_START_PFC_ID          0xA72C635FUL
/* EasyCASE - */
/* Desired Values from Program Flow Check                                                               */
/*
 These values are the desired values from Program Flow Check, which are necessary for the correct
 Response to Monitoring Module.
 These Literals are only used for calculating the correcting values. Do not use them in any Code!
*/
#define PFCDES_0        0x5A968125UL                            /* Desired Value for Question 0  */
#define PFCDES_1        0x34A6C0F3UL                            /* Desired Value for Question 1  */
#define PFCDES_2        0xB6F68461UL                            /* Desired Value for Question 2  */
#define PFCDES_3        0xF42AE193UL                            /* Desired Value for Question 3  */
#define PFCDES_4        0xB2F02523UL                            /* Desired Value for Question 4  */
#define PFCDES_5        0xDB405FD5UL                            /* Desired Value for Question 5  */
#define PFCDES_6        0x89506C27UL                            /* Desired Value for Question 6  */
#define PFCDES_7        0xDB5518BDUL                            /* Desired Value for Question 7  */
#define PFCDES_8        0x2862ECD0UL                            /* Desired Value for Question 8  */
#define PFCDES_9        0xBCE29A16UL                            /* Desired Value for Question 9  */
#define PFCDES_A        0xFDA2A834UL                            /* Desired Value for Question 10 */
#define PFCDES_B        0x1BAE8DF6UL                            /* Desired Value for Question 11 */
#define PFCDES_C        0xD74463B6UL                            /* Desired Value for Question 12 */
#define PFCDES_D        0xD7842210UL                            /* Desired Value for Question 13 */
#define PFCDES_E        0x96844CD2UL                            /* Desired Value for Question 14 */
#define PFCDES_F        0x51A09508UL                            /* Desired Value for Question 15 */
/* Definition to be added with the introduction of PFC */
/* EasyCASE ) */
/* EasyCASE ( 62
   Correction Values */
/* Correction Values for Program Flow Check                                                             */
#define PFCCORR_0    ( PFCRESP_0 ^ PFCDES_0 )                /* Correction Value for Question 0  */
#define PFCCORR_1    ( PFCRESP_1 ^ PFCDES_1 )                /* Correction Value for Question 1  */
#define PFCCORR_2    ( PFCRESP_2 ^ PFCDES_2 )                /* Correction Value for Question 2  */
#define PFCCORR_3    ( PFCRESP_3 ^ PFCDES_3 )                /* Correction Value for Question 3  */
#define PFCCORR_4    ( PFCRESP_4 ^ PFCDES_4 )                /* Correction Value for Question 4  */
#define PFCCORR_5    ( PFCRESP_5 ^ PFCDES_5 )                /* Correction Value for Question 5  */
#define PFCCORR_6    ( PFCRESP_6 ^ PFCDES_6 )                /* Correction Value for Question 6  */
#define PFCCORR_7    ( PFCRESP_7 ^ PFCDES_7 )                /* Correction Value for Question 7  */
#define PFCCORR_8    ( PFCRESP_8 ^ PFCDES_8 )                /* Correction Value for Question 8  */
#define PFCCORR_9    ( PFCRESP_9 ^ PFCDES_9 )                /* Correction Value for Question 9  */
#define PFCCORR_A    ( PFCRESP_A ^ PFCDES_A )                /* Correction Value for Question 10 */
#define PFCCORR_B    ( PFCRESP_B ^ PFCDES_B )                /* Correction Value for Question 11 */
#define PFCCORR_C    ( PFCRESP_C ^ PFCDES_C )                /* Correction Value for Question 12 */
#define PFCCORR_D    ( PFCRESP_D ^ PFCDES_D )                /* Correction Value for Question 13 */
#define PFCCORR_E    ( PFCRESP_E ^ PFCDES_E )                /* Correction Value for Question 14 */
#define PFCCORR_F    ( PFCRESP_F ^ PFCDES_F )                /* Correction Value for Question 15 */

/* Definition to be added with the introductio of PFC */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 63
   Defines for Instruction Test (FIX) */
/* EasyCASE ( 64
   Desired Values */
/* Desired Values from Instruction Test                                                                 */
/*
 These values are the desired values from Instruction test, which are necessary for the correct
 Response to Monitoring Module.
 These Literals are only used for calculating the correcting values. Do not use them in any Code!
*/
#define CPUDES_0     0x1D261D26UL                                 /* Desired Value for Question 0  */
#define CPUDES_1     0x23BD23BDUL                                 /* Desired Value for Question 1  */
#define CPUDES_2     0x2A542A54UL                                 /* Desired Value for Question 2  */
#define CPUDES_3     0x30EB30EBUL                                 /* Desired Value for Question 3  */
#define CPUDES_4     0x37823782UL                                 /* Desired Value for Question 4  */
#define CPUDES_5     0x3E193E19UL                                 /* Desired Value for Question 5  */
#define CPUDES_6     0x44B044B0UL                                 /* Desired Value for Question 6  */
#define CPUDES_7     0x4B474B47UL                                 /* Desired Value for Question 7  */
#define CPUDES_8     0x51DE51DEUL                                 /* Desired Value for Question 8  */
#define CPUDES_9     0x58755875UL                                 /* Desired Value for Question 9  */
#define CPUDES_A     0x5F0C5F0CUL                                 /* Desired Value for Question 10 */
#define CPUDES_B     0x65A365A3UL                                 /* Desired Value for Question 11 */
#define CPUDES_C     0x6C3A6C3AUL                                 /* Desired Value for Question 12 */
#define CPUDES_D     0x72D172D1UL                                 /* Desired Value for Question 13 */
#define CPUDES_E     0x79687968UL                                 /* Desired Value for Question 14 */
#define CPUDES_F     0xFFFFFFFFUL                                 /* Desired Value for Question 15 */
/* EasyCASE ) */
/* EasyCASE ( 557
   CPU response values */
/* --------------------------------------------------------------------------------------------- */
/*                                          FIT ID'S                                             */
/* --------------------------------------------------------------------------------------------- */

#if (MOCCPU_FIT_SY == 0)

/* --------------------------------------------------------------------------------------------- */
/*                       Partial responses for Chiste (if configured)                            */
/* --------------------------------------------------------------------------------------------- */

#define CPURESP_0   CPUDES_0     /* Response  for Question 0  */
#define CPURESP_1   CPUDES_1     /* Response  for Question 1  */
#define CPURESP_2   CPUDES_2     /* Response  for Question 2  */
#define CPURESP_3   CPUDES_3     /* Response  for Question 3  */
#define CPURESP_4   CPUDES_4     /* Response  for Question 4  */
#define CPURESP_5   CPUDES_5     /* Response  for Question 5  */
#define CPURESP_6   CPUDES_6     /* Response  for Question 6  */
#define CPURESP_7   CPUDES_7     /* Response  for Question 7  */
#define CPURESP_8   CPUDES_8     /* Response  for Question 8  */
#define CPURESP_9   CPUDES_9     /* Response  for Question 9  */
#define CPURESP_A   CPUDES_A     /* Response  for Question 10 */
#define CPURESP_B   CPUDES_B     /* Response  for Question 11 */
#define CPURESP_C   CPUDES_C     /* Response  for Question 12 */
#define CPURESP_D   CPUDES_D     /* Response  for Question 13 */
#define CPURESP_E   CPUDES_E     /* Response  for Question 14 */
#define CPURESP_F   CPUDES_F     /* Response  for Question 15 */

#else
         #error "FIT is not applicable for a limited level 3 package. Please select Chiste."
         #error "MOCCPU_FIT_SY should be 0."

#endif
/* EasyCASE ) */
/* EasyCASE ( 66
   Correction Values */
/* Correction Values for Instruction Test                                                               */
#define CPUCORR_0   ( CPUDES_0 ^ CPURESP_0 )                   /* Correction Value for Question 0  */
#define CPUCORR_1   ( CPUDES_1 ^ CPURESP_1 )                   /* Correction Value for Question 1  */
#define CPUCORR_2   ( CPUDES_2 ^ CPURESP_2 )                   /* Correction Value for Question 2  */
#define CPUCORR_3   ( CPUDES_3 ^ CPURESP_3 )                   /* Correction Value for Question 3  */
#define CPUCORR_4   ( CPUDES_4 ^ CPURESP_4 )                   /* Correction Value for Question 4  */
#define CPUCORR_5   ( CPUDES_5 ^ CPURESP_5 )                   /* Correction Value for Question 5  */
#define CPUCORR_6   ( CPUDES_6 ^ CPURESP_6 )                   /* Correction Value for Question 6  */
#define CPUCORR_7   ( CPUDES_7 ^ CPURESP_7 )                   /* Correction Value for Question 7  */
#define CPUCORR_8   ( CPUDES_8 ^ CPURESP_8 )                   /* Correction Value for Question 8  */
#define CPUCORR_9   ( CPUDES_9 ^ CPURESP_9 )                   /* Correction Value for Question 9  */
#define CPUCORR_A   ( CPUDES_A ^ CPURESP_A )                   /* Correction Value for Question 10 */
#define CPUCORR_B   ( CPUDES_B ^ CPURESP_B )                   /* Correction Value for Question 11 */
#define CPUCORR_C   ( CPUDES_C ^ CPURESP_C )                   /* Correction Value for Question 12 */
#define CPUCORR_D   ( CPUDES_D ^ CPURESP_D )                   /* Correction Value for Question 13 */
#define CPUCORR_E   ( CPUDES_E ^ CPURESP_E )                   /* Correction Value for Question 14 */
#define CPUCORR_F   ( CPUDES_F ^ CPURESP_F )                   /* Correction Value for Question 15 */
/* EasyCASE ) */
/* Number of sequences for functional instruction test                                         */
#define MOEXE_NUM_CPUSEQ 1    /* ONE sequence is used */
/* EasyCASE ) */
/* EasyCASE ( 544
   Defines for Software sharing module(FIX) */
/* EasyCASE ( 546
   Desired Values */
/*SW sharing Partial Response */
/* This Values depend on SW sharing modules which are contributing for response calculation */
/* ---------------------------------------------------------------------------------------- */

#define SWSHRRESP_0     0xA001A001UL                       /* Response  for Question 0   */
#define SWSHRRESP_1     0xA001A001UL                       /* Response  for Question 1   */
#define SWSHRRESP_2     0xA001A001UL                       /* Response  for Question 2   */
#define SWSHRRESP_3     0xA001A001UL                       /* Response  for Question 3   */
#define SWSHRRESP_4     0xA001A001UL                       /* Response  for Question 4   */
#define SWSHRRESP_5     0xA001A001UL                       /* Response  for Question 5   */
#define SWSHRRESP_6     0xA001A001UL                       /* Response  for Question 6   */
#define SWSHRRESP_7     0xA001A001UL                       /* Response  for Question 7   */
#define SWSHRRESP_8     0xA001A001UL                       /* Response  for Question 8   */
#define SWSHRRESP_9     0xA001A001UL                       /* Response  for Question 9   */
#define SWSHRRESP_A     0xA001A001UL                       /* Response  for Question 10  */
#define SWSHRRESP_B     0xA001A001UL                       /* Response  for Question 11  */
#define SWSHRRESP_C     0xA001A001UL                       /* Response  for Question 12  */
#define SWSHRRESP_D     0xA001A001UL                       /* Response  for Question 13  */
#define SWSHRRESP_E     0xA001A001UL                       /* Response  for Question 14  */
#define SWSHRRESP_F     0xA001A001UL                       /* Response  for Question 15  */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 67
   Correction Values for Answer to MoCCom (FIX) */
/* Correction Values for MoCCom                                                                         */
/* This values are necessary to make the answer from Instruction Test and Program Flow Check became the */
/* standardized values                                                                                  */
/* Definition to be added with the introduction of MOCCOM */
#define MOEXE_CO_CORR_0    (CPUCORR_0 ^ PFCCORR_0 ^ SWSHRRESP_0)             /* Correction Value for Question 0  */
#define MOEXE_CO_CORR_1    (CPUCORR_1 ^ PFCCORR_1 ^ SWSHRRESP_1)             /* Correction Value for Question 1  */
#define MOEXE_CO_CORR_2    (CPUCORR_2 ^ PFCCORR_2 ^ SWSHRRESP_2)             /* Correction Value for Question 2  */
#define MOEXE_CO_CORR_3    (CPUCORR_3 ^ PFCCORR_3 ^ SWSHRRESP_3)             /* Correction Value for Question 3  */
#define MOEXE_CO_CORR_4    (CPUCORR_4 ^ PFCCORR_4 ^ SWSHRRESP_4)             /* Correction Value for Question 4  */
#define MOEXE_CO_CORR_5    (CPUCORR_5 ^ PFCCORR_5 ^ SWSHRRESP_5)             /* Correction Value for Question 5  */
#define MOEXE_CO_CORR_6    (CPUCORR_6 ^ PFCCORR_6 ^ SWSHRRESP_6)             /* Correction Value for Question 6  */
#define MOEXE_CO_CORR_7    (CPUCORR_7 ^ PFCCORR_7 ^ SWSHRRESP_7)             /* Correction Value for Question 7  */
#define MOEXE_CO_CORR_8    (CPUCORR_8 ^ PFCCORR_8 ^ SWSHRRESP_8)             /* Correction Value for Question 8  */
#define MOEXE_CO_CORR_9    (CPUCORR_9 ^ PFCCORR_9 ^ SWSHRRESP_9)             /* Correction Value for Question 9  */
#define MOEXE_CO_CORR_A    (CPUCORR_A ^ PFCCORR_A ^ SWSHRRESP_A)             /* Correction Value for Question 10 */
#define MOEXE_CO_CORR_B    (CPUCORR_B ^ PFCCORR_B ^ SWSHRRESP_B)             /* Correction Value for Question 11 */
#define MOEXE_CO_CORR_C    (CPUCORR_C ^ PFCCORR_C ^ SWSHRRESP_C)             /* Correction Value for Question 12 */
#define MOEXE_CO_CORR_D    (CPUCORR_D ^ PFCCORR_D ^ SWSHRRESP_D)             /* Correction Value for Question 13 */
#define MOEXE_CO_CORR_E    (CPUCORR_E ^ PFCCORR_E ^ SWSHRRESP_E)             /* Correction Value for Question 14 */
#define MOEXE_CO_CORR_F    (CPUCORR_F ^ PFCCORR_F ^ SWSHRRESP_F)             /* Correction Value for Question 15 */
/* EasyCASE ) */
/* EasyCASE ( 160
   Defines for Execution Control (FIX) */
#define MOEXE_CT_MSK         0x03U        /* Mask to extract relevant Bits from Cycle counter      */

#define MOEXE_SLOT_A_MSK     0x00U        /* Mask to choose 1st slot                               */
#define MOEXE_SLOT_B_MSK     0x01U        /* Mask to choose 2nd slot                               */
#define MOEXE_SLOT_C_MSK     0x02U        /* Mask to choose 3rd slot                               */
#define MOEXE_SLOT_D_MSK     0x03U        /* Mask to choose 4th slot                               */
/* EasyCASE ) */
/* EasyCASE ) */
/* EasyCASE ( 52
   Type Definitions */
/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */
/* EasyCASE ) */
/* EasyCASE ( 53
   Variables */
/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
/* EasyCASE ) */
/* EasyCASE ( 54
   Prototypes */
/*
 *******************************************************************************************
 * Prototypes
 *******************************************************************************************
 */
/* EasyCASE ( 74
   Prototypes for MoExe Functions */
extern void MoExe_Co_Proc_Ini(void);
extern void MoExe_Co_Proc(void);
#if (POSTDRV_SOFTRST_SY == 0)
/* EasyCASE - */
extern void MoExe_Co_Proc_ReIni(void);
/* EasyCASE - */
#endif /* (POSTDRV_SOFTRST_SY == 0) */
/* EasyCASE ) */
/* EasyCASE ( 75
   Prototypes for Level 2 */
/* ******************************* Parts of Level 2 (Init) ****************************** */
/* EasyCASE - */
/* ******************************* Parts of Level 2 (10ms) ****************************** */
/* EasyCASE - */
/* ****************************** Parts of Level 2 (SyncIni) **************************** */
/* EasyCASE - */
/* *  Processes from Mo_Glbl:    Monitoring: Globale Definitions for the Monitoring * */
extern void Mo_Glbl_Proc_ReIni(void);                           /* Reinitialisierung               */
extern void Mo_Glbl_Proc(void);                                 /* Ebene 2 Prozess                 */
extern void Mo_Glbl_Proc_Ini(void);
/* EasyCASE ) */
/* EasyCASE ) */
#endif
/* EasyCASE ) */
