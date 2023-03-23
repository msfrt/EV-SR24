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
 * Administrative Information (automatically filled in by [N]estor)  *
 *************************************************************************
 *
 * $Filename__:swsh_rb2oem.h$
 *
 * $Author____:KKT4COB$Function__:Model 2 SWSH test version$
 *
 *************************************************************************
 * $Repository:SDOM$
 * $User______:DAH5KOR$Date______:
 * $Class_____:SWHDR$
 * $Name______:swsh_rb2oem$
 * $Variant___:NE_BSW_SWSH_M5$Type______:H$
 * $State_____:AVAILABLE$
 *************************************************************************
 * Points to be taken into consideration when/
 if the module is modified:
 *
 * $LinkTo____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 *
 *************************************************************************
</RBHead>*/

/* do not use protect multiple includes - this is not working with used pragma concept   */

/*****************************************************************************************/
/*                                                                                       */
/* The PRAGMA_UNUSED macro is used to know if the required pragma has been found or not  */
/* If it hasn't been found, the compilation failed with the following message:           */
/* "Error: The file swsh_rb2oem.h has been included, but no pragma was found"           */
/*                                                                                       */
/*****************************************************************************************/

#define PRAGMA_UNUSED


/*************************************************************************************/
/*                             Pragmas for processes                                 */
/*************************************************************************************/
/*                                                                                   */
/*  OS_Ini_Task                         Task_oem_rini                               */
/*  OS_1ms_Task                         Task_oem_1ms                                */
/*  OS_5ms_Task                         Task_oem_5ms                               */
/*  OS_10ms_Task                        Task_oem_r10ms                             */
/*  OS_100ms_Task                       Task_oem_r100ms                            */
/*  OS_50ms_Task                        Task_oem_r50ms                             */
/*  OS_200ms_Task                       Task_oem_r200ms                            */
/*  OS_1000ms_Task                      Task_oem_r1000ms                           */
/*  OS_postdrive_r1ms_Task              Task_oem_r1msSwOff                         */
/*  OS_postdrive_r5ms_Task              Task_oem_r5msSwOff                         */
/*  OS_postdrive_r10ms_Task             Task_oem_r10msSwOff                        */
/*  OS_postdrive_r100ms_Task            Task_oem_r50msSwOff                        */
/*  OS_postdrive_r200ms_Task            Task_oem_r100msSwOff                       */
/*  OS_postdrive_r1000ms_Task           Task_oem_r200msSwOff                       */
/*  OS_postdrive_rfcmclr_Task           Task_oem_r1000msSwOff                      */
/*                                                                                   */
/*************************************************************************************/

/*************************************************************************************/
/*   Raster:  OS_Ini_Task                                                            */
/*   Pragma: Task_oem_rini                                                          */
/*************************************************************************************/


#ifdef START_SECTION_Task_oem_rini
    #pragma section .text.OEM_code_Task_ini ax
    #undef START_SECTION_Task_oem_rini
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_rini
    #pragma section
    #undef STOP_SECTION_Task_oem_rini
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:  OS_Sync_Task                                                            */
/*   Pragma: Task_oem_rSync                                                          */
/*************************************************************************************/


#ifdef START_SECTION_Task_oem_rSync
    #pragma section .text.OEM_code_Task_rSync ax
    #undef START_SECTION_Task_oem_rSync
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_rSync
    #pragma section
    #undef STOP_SECTION_Task_oem_rSync
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Raster:   OS_1ms_Task                                                          */
/*   Pragma:  Task_oem_r1ms                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_oem_r1ms
    #pragma section .text.OEM_code_Task_r1ms ax
    #undef START_SECTION_Task_oem_r1ms
    #undef PRAGMA_UNUSED
#endif



#ifdef STOP_SECTION_Task_oem_r1ms
    #pragma section
    #undef STOP_SECTION_Task_oem_r1ms
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_5ms_Task                                                          */
/*   Pragma:  Task_oem_r5ms                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_oem_r5ms
    #pragma section .text.OEM_code_Task_r5ms ax
    #undef START_SECTION_Task_oem_r5ms
    #undef PRAGMA_UNUSED
#endif



#ifdef STOP_SECTION_Task_oem_r5ms
    #pragma section
    #undef STOP_SECTION_Task_oem_r5ms
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Raster:   OS_10ms_Task                                                          */
/*   Pragma:  Task_oem_r10ms                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_oem_r10ms
    #pragma section .text.OEM_code_Task_r10ms ax
    #undef START_SECTION_Task_oem_r10ms
    #undef PRAGMA_UNUSED
#endif



#ifdef STOP_SECTION_Task_oem_r10ms
    #pragma section
    #undef STOP_SECTION_Task_oem_r10ms
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_20ms_Task                                                          */
/*   Pragma:  Task_oem_r20ms                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_oem_r20ms
    #pragma section .text.OEM_code_Task_r20ms ax
    #undef START_SECTION_Task_oem_r20ms
    #undef PRAGMA_UNUSED
#endif



#ifdef STOP_SECTION_Task_oem_r20ms
    #pragma section
    #undef STOP_SECTION_Task_oem_r20ms
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_50ms_Task                                                          */
/*   Pragma:  Task_oem_r50ms                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_oem_r50ms
    #pragma section .text.OEM_code_Task_r50ms ax
    #undef START_SECTION_Task_oem_r50ms
    #undef PRAGMA_UNUSED
#endif



#ifdef STOP_SECTION_Task_oem_r50ms
    #pragma section
    #undef STOP_SECTION_Task_oem_r50ms
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Raster:   OS_100ms_Task                                                          */
/*   Pragma:  Task_oem_r100ms                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_oem_r100ms
    #pragma section .text.OEM_code_Task_r100ms ax
    #undef START_SECTION_Task_oem_r100ms
    #undef PRAGMA_UNUSED
#endif



#ifdef STOP_SECTION_Task_oem_r100ms
    #pragma section
    #undef STOP_SECTION_Task_oem_r100ms
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_200ms_Task                                                          */
/*   Pragma:  Task_oem_r200ms                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Task_oem_r200ms
    #pragma section .text.OEM_code_Task_r200ms ax
    #undef START_SECTION_Task_oem_r200ms
    #undef PRAGMA_UNUSED
#endif



#ifdef STOP_SECTION_Task_oem_r200ms
    #pragma section
    #undef STOP_SECTION_Task_oem_r200ms
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_1000ms_Task                                                        */
/*   Pragma:  Task_oem_r1000ms                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r1000ms
    #pragma section .text.OEM_code_Task_r1000ms ax
    #undef START_SECTION_Task_oem_r1000ms
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r1000ms
    #pragma section
    #undef STOP_SECTION_Task_oem_r1000ms
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_fcmclr_Task                                                        */
/*   Pragma:  Task_oem_fcmclr                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_rfcmclr
    #pragma section .text.OEM_code_Task_rfcmclr ax
    #undef START_SECTION_Task_oem_rfcmclr
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_rfcmclr
    #pragma section
    #undef STOP_SECTION_Task_oem_rfcmclr
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Raster:   OS_postdrive_r1ms_Task                                                        */
/*   Pragma:  Task_oem_r1msSwOff                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r1msSwOff
    #pragma section .text.OEM_code_Task_r1msSwOff ax
    #undef START_SECTION_Task_oem_r1msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r1msSwOff
    #pragma section
    #undef STOP_SECTION_Task_oem_r1msSwOff
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_postdrive_r5ms_Task                                                        */
/*   Pragma:  Task_oem_r5msSwOff                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r5msSwOff
    #pragma section .text.OEM_code_Task_r5msSwOff ax
    #undef START_SECTION_Task_oem_r5msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r5msSwOff
    #pragma section
    #undef STOP_SECTION_Task_oem_r5msSwOff
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_postdrive_r10ms_Task                                                        */
/*   Pragma:  Task_oem_r10msSwOff                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r10msSwOff
    #pragma section .text.OEM_code_Task_r10msSwOff ax
    #undef START_SECTION_Task_oem_r10msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r10msSwOff
    #pragma section
    #undef STOP_SECTION_Task_oem_r10msSwOff
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_postdrive_r20ms_Task                                                        */
/*   Pragma:  Task_oem_r20msSwOff                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r20msSwOff
    #pragma section .text.OEM_code_Task_r20msSwOff ax
    #undef START_SECTION_Task_oem_r20msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r20msSwOff
    #pragma section
    #undef STOP_SECTION_Task_oem_r20msSwOff
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Raster:   OS_postdrive_r50ms_Task                                                        */
/*   Pragma:  Task_oem_r50msSwOff                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r50msSwOff
    #pragma section .text.OEM_code_Task_r50msSwOff ax
    #undef START_SECTION_Task_oem_r50msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r50msSwOff
    #pragma section
    #undef STOP_SECTION_Task_oem_r50msSwOff
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Raster:   OS_postdrive_r100ms_Task                                                        */
/*   Pragma:  Task_oem_r100msSwOff                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r100msSwOff
    #pragma section .text.OEM_code_Task_r100msSwOff ax
    #undef START_SECTION_Task_oem_r100msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r100msSwOff
    #pragma section
    #undef STOP_SECTION_Task_oem_r100msSwOff
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Raster:   OS_postdrive_r200ms_Task                                                        */
/*   Pragma:  Task_oem_r200msSwOff                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r200msSwOff
    #pragma section .text.OEM_code_Task_r200msSwOff ax
    #undef START_SECTION_Task_oem_r200msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r200msSwOff
    #pragma section
    #undef STOP_SECTION_Task_oem_r200msSwOff
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Raster:   OS_postdrive_r1000ms_Task                                                        */
/*   Pragma:  Task_oem_r1000msSwOff                                                      */
/*************************************************************************************/



#ifdef START_SECTION_Task_oem_r1000msSwOff
    #pragma section .text.OEM_code_Task_r1000msSwOff ax
    #undef START_SECTION_Task_oem_r1000msSwOff
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Task_oem_r1000msSwOff
    #pragma section
    #undef STOP_SECTION_Task_oem_r1000msSwOff
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*                Pragmas for variables and structures                               */
/*************************************************************************************/

/*************************************************************************************/
/*   Memory: Volatile, 32bits                                                        */
/*   Pragma: volatile_Ram_oem_32bit                                                 */
/*************************************************************************************/

#ifdef START_SECTION_volatile_Ram_oem_32bit
    #pragma section .sbss.OEM_sbss32_preemp.a4 aws
    #undef START_SECTION_volatile_Ram_oem_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_volatile_Ram_oem_32bit
    #pragma section
    #undef STOP_SECTION_volatile_Ram_oem_32bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Volatile, 16bits                                                        */
/*   Pragma: volatile_Ram_oem_16bit                                                 */
/*************************************************************************************/

#ifdef START_SECTION_volatile_Ram_oem_16bit
 	#pragma section .zbss.OEM_zbss16_preemp.a2 awz
    #undef START_SECTION_volatile_Ram_oem_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_volatile_Ram_oem_16bit
    #pragma section
    #undef STOP_SECTION_volatile_Ram_oem_16bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Volatile, 8bits                                                         */
/*   Pragma: volatile_Ram_oem_8bit                                                  */
/*************************************************************************************/

#ifdef START_SECTION_volatile_Ram_oem_8bit
    #pragma section .zbss.OEM_zbss8_preemp.a1 awz
    #undef START_SECTION_volatile_Ram_oem_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_volatile_Ram_oem_8bit
    #pragma section
    #undef STOP_SECTION_volatile_Ram_oem_8bit
    #undef PRAGMA_UNUSED
#endif


/*************************************************************************************/
/*   Memory: Volatile, 32bits                                                        */
/*   Pragma: volatile_SlowRam_oem_32bit                                             */
/*************************************************************************************/

#ifdef START_SECTION_volatile_SlowRam_oem_32bit
    #pragma section .bss.OEM_bss32_coop.a4 aw
    #undef START_SECTION_volatile_SlowRam_oem_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_volatile_SlowRam_oem_32bit
    #pragma section
    #undef STOP_SECTION_volatile_SlowRam_oem_32bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Volatile, 16bits                                                        */
/*   Pragma: volatile_SlowRam_oem_16bit                                             */
/*************************************************************************************/

#ifdef START_SECTION_volatile_SlowRam_oem_16bit
    #pragma section .bss.OEM_bss16_coop.a2 aw
    #undef START_SECTION_volatile_SlowRam_oem_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_volatile_SlowRam_oem_16bit
    #pragma section
    #undef STOP_SECTION_volatile_SlowRam_oem_16bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Volatile, 8bits                                                         */
/*   Pragma: volatile_SlowRam_oem_8bit                                              */
/*************************************************************************************/

#ifdef START_SECTION_volatile_SlowRam_oem_8bit
    #pragma section .bss.OEM_bss8_coop.a1 aw
    #undef START_SECTION_volatile_SlowRam_oem_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_volatile_SlowRam_oem_8bit
    #pragma section
    #undef STOP_SECTION_volatile_SlowRam_oem_8bit
    #undef PRAGMA_UNUSED
#endif
/*************************************************************************************/
/*   Memory: calibration values, 32bits                                              */
/*   Pragma: Data_oem_32bit                                                         */
/*************************************************************************************/

#ifdef START_SECTION_Data_oem_32bit
    #pragma section .caldata.OEM_userData32 a
    #undef START_SECTION_Data_oem_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Data_oem_32bit
    #pragma section
    #undef STOP_SECTION_Data_oem_32bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: calibration values , 16bits                                             */
/*   Pragma: Data_oem_16bit                                                         */
/*************************************************************************************/

#ifdef START_SECTION_Data_oem_16bit
    #pragma section .caldata.OEM_userData16 a
    #undef START_SECTION_Data_oem_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Data_oem_16bit
    #pragma section
    #undef STOP_SECTION_Data_oem_16bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: calibration values  8bits                                               */
/*   Pragma:  Data_oem_8bit                                                         */
/*************************************************************************************/

#ifdef START_SECTION_Data_oem_8bit
    #pragma section .caldata.OEM_userData8 a
    #undef START_SECTION_Data_oem_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Data_oem_8bit
    #pragma section
    #undef STOP_SECTION_Data_oem_8bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Constant 32 bit                                                         */
/*   Pragma:  Const_oem_32bit                                                       */
/*************************************************************************************/

#ifdef START_SECTION_Const_oem_32bit
    #pragma section .rodata.OEM_ConstData32.a4 a
    #undef START_SECTION_Const_oem_32bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Const_oem_32bit
    #pragma section
    #undef STOP_SECTION_Const_oem_32bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Constant 16 bit                                                         */
/*   Pragma:  Const_oem_16bit                                                       */
/*************************************************************************************/

#ifdef START_SECTION_Const_oem_16bit
    #pragma section .rodata.OEM_ConstData16.a2 a
    #undef START_SECTION_Const_oem_16bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Const_oem_16bit
    #pragma section
    #undef STOP_SECTION_Const_oem_16bit
    #undef PRAGMA_UNUSED
#endif

/*************************************************************************************/
/*   Memory: Constant 8 bit                                                          */
/*   Pragma:  Const_oem_8bit                                                        */
/*************************************************************************************/

#ifdef START_SECTION_Const_oem_8bit
    #pragma section .rodata.OEM_ConstData8.a1 a
    #undef START_SECTION_Const_oem_8bit
    #undef PRAGMA_UNUSED
#endif

#ifdef STOP_SECTION_Const_oem_8bit
    #pragma section
    #undef STOP_SECTION_Const_oem_8bit
    #undef PRAGMA_UNUSED
#endif


/****************************************************************************************/
/*                                                                                      */
/*                       Test: does the required Pragma exist ?                         */
/*                                                                                      */
/****************************************************************************************/
//

#ifdef PRAGMA_UNUSED
    #error "Error: The file swsh_rb2oem.h has been included, but no pragma was found"
#endif


/*************************************************************************************/
/*                                                                                   */
/*                                                End of file                        */
/*                                                                                   */
/*************************************************************************************/
