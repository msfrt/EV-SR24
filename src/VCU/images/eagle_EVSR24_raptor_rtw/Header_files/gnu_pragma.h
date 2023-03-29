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
 * $Filename__:gnu_pragma.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:RAT1COB$
 * $Date______:25.10.2010$
 * $Class_____:SWHDR$
 * $Name______:gnu_pragma$
 * $Variant___:1.14.0$
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
 * 1.14.0; 1     25.10.2010 RAT1COB
 *   std_types.h  and gnu_pragma.h updated
 * 
 * 1.14.0; 0     25.06.2010 RAT1COB
 *   Core_Env support of TC1724 TC1782 TC1793
 * 
 * 1.9.0; 0     25.08.2008 KLMEYER
 *   Initial import from Clearcase 
 *      File name: gnu_pragma.h
 *      Version: \main\8
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _GNU_PRAGMA_H
#define _GNU_PRAGMA_H

/**************************************************************************************************/
/* This is not a configuration file. Do not modify or branch this file for projects!              */
/*                                                                                                */
/* Do not add pragmas for special behaviour like restricted, protected, or non volatile RAM. This */
/* would be too dangerous, as assigning such sections changes the behaviour of the software in a  */
/* unpredictable way. Also do not implement such pragmas in gnu_pragma_conf.h!                    */
/*                                                                                                */
/* The following comments can be used to forward usage rules to the locating tool:                */
/*      //RULE: if (MACHINE_TYPE == TC1767, TC1797, TC1724, TC1782, TC1793)                       */
/*      //RULE: if (MACHINE_TYPE == TC1796)                                                       */
/*      //RULE: endif                                                                             */
/**************************************************************************************************/

/* ===============================================================================*/
/* #pragma for branch prediction (default case) */
/* ===============================================================================*/
#define __BRANCH_IF_DEFAULT                     _Pragma("branch_if_default")
#define __BRANCH_ELSE_DEFAULT                   _Pragma("branch_else_default")
#define __BRANCH_NO_DEFAULT                     _Pragma("branch_no_default")
#define __BRANCH_CASE_DEFAULT                   _Pragma("branch_case_default")


/* ===============================================================================*/
/* #pragma sections for code  */
/* ===============================================================================*/
#define   __END_SECTION                         _Pragma("section")
#define __START_SECTION_CODE_RAM                _Pragma("section .text.spram ax")
#define   __END_SECTION_CODE_RAM                _Pragma("section")
#define __START_SECTION_CODE_FLASH_CACHED       _Pragma("section .text ax")
#define   __END_SECTION_CODE_FLASH_CACHED       _Pragma("section")
#define __START_SECTION_CODE_FLASH_ASW0         _Pragma("section .text.asw0 ax")
#define   __END_SECTION_CODE_FLASH_ASW0         _Pragma("section")
#define __START_SECTION_CODE_FLASH_ASW1         _Pragma("section .text.asw1 ax")
#define   __END_SECTION_CODE_FLASH_ASW1         _Pragma("section")
#define __START_SECTION_CODE_FLASH_ASW2         _Pragma("section .text.asw2 ax")
#define   __END_SECTION_CODE_FLASH_ASW2         _Pragma("section")
#define __START_SECTION_CODE_FLASH_ABS0         _Pragma("section .text.abs0 ax")
#define   __END_SECTION_CODE_FLASH_ABS0         _Pragma("section")
#define __START_SECTION_CODE_FLASH_NONCACHED    _Pragma("section .text.noncached ax")
#define   __END_SECTION_CODE_FLASH_NONCACHED    _Pragma("section")


/* ===============================================================================*/
/* #pragma sections for variables/constants */
/* ===============================================================================*/
/* Naming of Pragmas by addressing mode and data classes: */

/*                          FAR-32      SMALL-16    ABS-18      BIT     */
/* Constants                rodata      srodata     zrodata     -       */
/* Initialized Variables    data        sdata       zdata       bdata   */
/* Variables                bss         sbss        zbss        bbss    */


/* ===============================================================================*/
/* 16 Bit register relative adressing (SMALL-16)*/
/* ===============================================================================*/

/* addressing modes of initialized read only variables */
#define __START_SECTION_srodata_a1              _Pragma("section .sdata.rodata.a1 as")
#define   __END_SECTION_srodata_a1              _Pragma("section")
#define __START_SECTION_srodata_a2              _Pragma("section .sdata.rodata.a2 as")
#define   __END_SECTION_srodata_a2              _Pragma("section")
#define __START_SECTION_srodata_a4              _Pragma("section .sdata.rodata.a4 as")
#define   __END_SECTION_srodata_a4              _Pragma("section")
#define __START_SECTION_srodata_a8              _Pragma("section .sdata.rodata.a8 as")
#define   __END_SECTION_srodata_a8              _Pragma("section")
#define __START_SECTION_srodata                 _Pragma("section .sdata.rodata as")
#define   __END_SECTION_srodata                 _Pragma("section")

/* addressing modes of initialized variables */
#define __START_SECTION_sdata_a1                _Pragma("section .sdata.a1 aws")
#define   __END_SECTION_sdata_a1                _Pragma("section")
#define __START_SECTION_sdata_a2                _Pragma("section .sdata.a2 aws")
#define   __END_SECTION_sdata_a2                _Pragma("section")
#define __START_SECTION_sdata_a4                _Pragma("section .sdata.a4 aws")
#define   __END_SECTION_sdata_a4                _Pragma("section")
#define __START_SECTION_sdata_a8                _Pragma("section .sdata.a8 aws")
#define   __END_SECTION_sdata_a8                _Pragma("section")
#define __START_SECTION_sdata                   _Pragma("section .sdata aws")
#define   __END_SECTION_sdata                   _Pragma("section")

/* addressing modes of uninitialized variables */
#define __START_SECTION_sbss_a1                 _Pragma("section .sbss.a1 aws")
#define   __END_SECTION_sbss_a1                 _Pragma("section")
#define __START_SECTION_sbss_a2                 _Pragma("section .sbss.a2 aws")
#define   __END_SECTION_sbss_a2                 _Pragma("section")
#define __START_SECTION_sbss_a4                 _Pragma("section .sbss.a4 aws")
#define   __END_SECTION_sbss_a4                 _Pragma("section")
#define __START_SECTION_sbss_a8                 _Pragma("section .sbss.a8 aws")
#define   __END_SECTION_sbss_a8                 _Pragma("section")
#define __START_SECTION_sbss                    _Pragma("section .sbss aws")
#define   __END_SECTION_sbss                    _Pragma("section")

/* addressing modes of uninitialized variables, secondary small area */
#define __START_SECTION_sbss_var1_a1            _Pragma("section .sbss.var1.a1 aws")
#define   __END_SECTION_sbss_var1_a1            _Pragma("section")
#define __START_SECTION_sbss_var1_a2            _Pragma("section .sbss.var1.a2 aws")
#define   __END_SECTION_sbss_var1_a2            _Pragma("section")
#define __START_SECTION_sbss_var1_a4            _Pragma("section .sbss.var1.a4 aws")
#define   __END_SECTION_sbss_var1_a4            _Pragma("section")
#define __START_SECTION_sbss_var1_a8            _Pragma("section .sbss.var1.a8 aws")
#define   __END_SECTION_sbss_var1_a8            _Pragma("section")
#define __START_SECTION_sbss_var1               _Pragma("section .sbss.var1 aws")
#define   __END_SECTION_sbss_var1               _Pragma("section")


/* ===============================================================================*/
/* 18 Bit absolut adressing (ABS-18) */
/* ===============================================================================*/

/* addressing modes of constants */
/* only available, when ABS0 Infoblock configured! */
#define __START_SECTION_zrodata_a1              _Pragma("section .zrodata.a1 az")
#define   __END_SECTION_zrodata_a1              _Pragma("section")
#define __START_SECTION_zrodata_a2              _Pragma("section .zrodata.a2 az")
#define   __END_SECTION_zrodata_a2              _Pragma("section")
#define __START_SECTION_zrodata_a4              _Pragma("section .zrodata.a4 az")
#define   __END_SECTION_zrodata_a4              _Pragma("section")
#define __START_SECTION_zrodata_a8              _Pragma("section .zrodata.a8 az")
#define   __END_SECTION_zrodata_a8              _Pragma("section")
#define __START_SECTION_zrodata                 _Pragma("section .zrodata az")
#define   __END_SECTION_zrodata                 _Pragma("section")

/* addressing modes of initialized variables */
#define __START_SECTION_zdata_a1                _Pragma("section .zdata.a1 awz")
#define   __END_SECTION_zdata_a1                _Pragma("section")
#define __START_SECTION_zdata_a2                _Pragma("section .zdata.a2 awz")
#define   __END_SECTION_zdata_a2                _Pragma("section")
#define __START_SECTION_zdata_a4                _Pragma("section .zdata.a4 awz")
#define   __END_SECTION_zdata_a4                _Pragma("section")
#define __START_SECTION_zdata_a8                _Pragma("section .zdata.a8 awz")
#define   __END_SECTION_zdata_a8                _Pragma("section")
#define __START_SECTION_zdata                   _Pragma("section .zdata awz")
#define   __END_SECTION_zdata                   _Pragma("section")

/* addressing modes of uninitialized variables */
#define __START_SECTION_zbss_a1                 _Pragma("section .zbss.a1 awz")
#define   __END_SECTION_zbss_a1                 _Pragma("section")
#define __START_SECTION_zbss_a2                 _Pragma("section .zbss.a2 awz")
#define   __END_SECTION_zbss_a2                 _Pragma("section")
#define __START_SECTION_zbss_a4                 _Pragma("section .zbss.a4 awz")
#define   __END_SECTION_zbss_a4                 _Pragma("section")
#define __START_SECTION_zbss_a8                 _Pragma("section .zbss.a8 awz")
#define   __END_SECTION_zbss_a8                 _Pragma("section")
#define __START_SECTION_zbss                    _Pragma("section .zbss awz")
#define   __END_SECTION_zbss                    _Pragma("section")

/* addressing mode of unitialised variables in RAM0 */
#define __START_SECTION_zbss_ram0_a1            _Pragma("section .zbss.ram0.a1 awz")
#define   __END_SECTION_zbss_ram0_a1            _Pragma("section")
#define __START_SECTION_zbss_ram0_a2            _Pragma("section .zbss.ram0.a2 awz")
#define   __END_SECTION_zbss_ram0_a2            _Pragma("section")
#define __START_SECTION_zbss_ram0_a4            _Pragma("section .zbss.ram0.a4 awz")
#define   __END_SECTION_zbss_ram0_a4            _Pragma("section")
#define __START_SECTION_zbss_ram0_a8            _Pragma("section .zbss.ram0.a8 awz")
#define   __END_SECTION_zbss_ram0_a8            _Pragma("section")
#define __START_SECTION_zbss_ram0               _Pragma("section .zbss.ram0 awz")
#define   __END_SECTION_zbss_ram0               _Pragma("section")

/* addressing mode of unitialised variables in RAM1: only available on TC1796 */
//RULE: if (MACHINE_TYPE == TC1796)
#define __START_SECTION_zbss_ram1_a1            _Pragma("section .zbss.ram1.a1 awz")
#define   __END_SECTION_zbss_ram1_a1            _Pragma("section")
#define __START_SECTION_zbss_ram1_a2            _Pragma("section .zbss.ram1.a2 awz")
#define   __END_SECTION_zbss_ram1_a2            _Pragma("section")
#define __START_SECTION_zbss_ram1_a4            _Pragma("section .zbss.ram1.a4 awz")
#define   __END_SECTION_zbss_ram1_a4            _Pragma("section")
#define __START_SECTION_zbss_ram1_a8            _Pragma("section .zbss.ram1.a8 awz")
#define   __END_SECTION_zbss_ram1_a8            _Pragma("section")
#define __START_SECTION_zbss_ram1               _Pragma("section .zbss.ram1 awz")
#define   __END_SECTION_zbss_ram1               _Pragma("section")
//RULE: endif

/* addressing mode of unitialised variables in scratch pad RAM: only for TC1767, TC1797 and newer */
//RULE: if (MACHINE_TYPE == TC1767, TC1797, TC1724, TC1782, TC1793)
#define __START_SECTION_zbss_spram_a1            _Pragma("section .zbss.spram.a1 awz")
#define   __END_SECTION_zbss_spram_a1            _Pragma("section")
#define __START_SECTION_zbss_spram_a2            _Pragma("section .zbss.spram.a2 awz")
#define   __END_SECTION_zbss_spram_a2            _Pragma("section")
#define __START_SECTION_zbss_spram_a4            _Pragma("section .zbss.spram.a4 awz")
#define   __END_SECTION_zbss_spram_a4            _Pragma("section")
#define __START_SECTION_zbss_spram_a8            _Pragma("section .zbss.spram.a8 awz")
#define   __END_SECTION_zbss_spram_a8            _Pragma("section")
#define __START_SECTION_zbss_spram               _Pragma("section .zbss.spram awz")
#define   __END_SECTION_zbss_spram               _Pragma("section")
//RULE: endif

/* ===============================================================================*/
/* normal 32 Bit adressing (FAR-32) */
/* ===============================================================================*/

/* addressing modes of constants */
#define __START_SECTION_rodata_a1               _Pragma("section .rodata.a1 a")
#define   __END_SECTION_rodata_a1               _Pragma("section")
#define __START_SECTION_rodata_a2               _Pragma("section .rodata.a2 a")
#define   __END_SECTION_rodata_a2               _Pragma("section")
#define __START_SECTION_rodata_a4               _Pragma("section .rodata.a4 a")
#define   __END_SECTION_rodata_a4               _Pragma("section")
#define __START_SECTION_rodata_a8               _Pragma("section .rodata.a8 a")
#define   __END_SECTION_rodata_a8               _Pragma("section")
#define __START_SECTION_rodata                  _Pragma("section .rodata a")
#define   __END_SECTION_rodata                  _Pragma("section")

/* addressing modes of noncached constants */
/* For functionally required noncached access please use the #defines from memlay_pub.h */
#define __START_SECTION_rodata_noncached_a1     _Pragma("section .rodata.noncached.a1 a")
#define   __END_SECTION_rodata_noncached_a1     _Pragma("section")
#define __START_SECTION_rodata_noncached_a2     _Pragma("section .rodata.noncached.a2 a")
#define   __END_SECTION_rodata_noncached_a2     _Pragma("section")
#define __START_SECTION_rodata_noncached_a4     _Pragma("section .rodata.noncached.a4 a")
#define   __END_SECTION_rodata_noncached_a4     _Pragma("section")
#define __START_SECTION_rodata_noncached_a8     _Pragma("section .rodata.noncached.a8 a")
#define   __END_SECTION_rodata_noncached_a8     _Pragma("section")
#define __START_SECTION_rodata_noncached        _Pragma("section .rodata.noncached a")
#define   __END_SECTION_rodata_noncached        _Pragma("section")

/* addressing modes of initialized variables */
#define __START_SECTION_data_a1                 _Pragma("section .data.a1 aw")
#define   __END_SECTION_data_a1                 _Pragma("section")
#define __START_SECTION_data_a2                 _Pragma("section .data.a2 aw")
#define   __END_SECTION_data_a2                 _Pragma("section")
#define __START_SECTION_data_a4                 _Pragma("section .data.a4 aw")
#define   __END_SECTION_data_a4                 _Pragma("section")
#define __START_SECTION_data_a8                 _Pragma("section .data.a8 aw")
#define   __END_SECTION_data_a8                 _Pragma("section")
#define __START_SECTION_data                    _Pragma("section .data aw")
#define   __END_SECTION_data                    _Pragma("section")

/* addressing modes of uninitialized variables */
#define __START_SECTION_bss_a1                  _Pragma("section .bss.a1 aw")
#define   __END_SECTION_bss_a1                  _Pragma("section")
#define __START_SECTION_bss_a2                  _Pragma("section .bss.a2 aw")
#define   __END_SECTION_bss_a2                  _Pragma("section")
#define __START_SECTION_bss_a4                  _Pragma("section .bss.a4 aw")
#define   __END_SECTION_bss_a4                  _Pragma("section")
#define __START_SECTION_bss_a8                  _Pragma("section .bss.a8 aw")
#define   __END_SECTION_bss_a8                  _Pragma("section")
#define __START_SECTION_bss                     _Pragma("section .bss aw")
#define   __END_SECTION_bss                     _Pragma("section")

#define __START_SECTION_bss_ram0_a1            _Pragma("section .bss.ram0.a1 aw")
#define   __END_SECTION_bss_ram0_a1            _Pragma("section")
#define __START_SECTION_bss_ram0_a2            _Pragma("section .bss.ram0.a2 aw")
#define   __END_SECTION_bss_ram0_a2            _Pragma("section")
#define __START_SECTION_bss_ram0_a4            _Pragma("section .bss.ram0.a4 aw")
#define   __END_SECTION_bss_ram0_a4            _Pragma("section")
#define __START_SECTION_bss_ram0_a8            _Pragma("section .bss.ram0.a8 aw")
#define   __END_SECTION_bss_ram0_a8            _Pragma("section")
#define __START_SECTION_bss_ram0               _Pragma("section .bss.ram0 aw")
#define   __END_SECTION_bss_ram0               _Pragma("section")

#define __START_SECTION_bss_ram1_a1            _Pragma("section .bss.ram1.a1 aw")
#define   __END_SECTION_bss_ram1_a1            _Pragma("section")
#define __START_SECTION_bss_ram1_a2            _Pragma("section .bss.ram1.a2 aw")
#define   __END_SECTION_bss_ram1_a2            _Pragma("section")
#define __START_SECTION_bss_ram1_a4            _Pragma("section .bss.ram1.a4 aw")
#define   __END_SECTION_bss_ram1_a4            _Pragma("section")
#define __START_SECTION_bss_ram1_a8            _Pragma("section .bss.ram1.a8 aw")
#define   __END_SECTION_bss_ram1_a8            _Pragma("section")
#define __START_SECTION_bss_ram1               _Pragma("section .bss.ram1 aw")
#define   __END_SECTION_bss_ram1               _Pragma("section")

//RULE: if (MACHINE_TYPE == TC1796)
#define __START_SECTION_bss_ram2_a1            _Pragma("section .bss.ram2.a1 aw")
#define   __END_SECTION_bss_ram2_a1            _Pragma("section")
#define __START_SECTION_bss_ram2_a2            _Pragma("section .bss.ram2.a2 aw")
#define   __END_SECTION_bss_ram2_a2            _Pragma("section")
#define __START_SECTION_bss_ram2_a4            _Pragma("section .bss.ram2.a4 aw")
#define   __END_SECTION_bss_ram2_a4            _Pragma("section")
#define __START_SECTION_bss_ram2_a8            _Pragma("section .bss.ram2.a8 aw")
#define   __END_SECTION_bss_ram2_a8            _Pragma("section")
#define __START_SECTION_bss_ram2               _Pragma("section .bss.ram2 aw")
#define   __END_SECTION_bss_ram2               _Pragma("section")
//RULE: endif

//RULE: if (MACHINE_TYPE == TC1767, TC1797, TC1724, TC1782, TC1793)
#define __START_SECTION_bss_spram_a1             _Pragma("section .bss.spram.a1 aw")
#define   __END_SECTION_bss_spram_a1             _Pragma("section")
#define __START_SECTION_bss_spram_a2             _Pragma("section .bss.spram.a2 aw")
#define   __END_SECTION_bss_spram_a2             _Pragma("section")
#define __START_SECTION_bss_spram_a4             _Pragma("section .bss.spram.a4 aw")
#define   __END_SECTION_bss_spram_a4             _Pragma("section")
#define __START_SECTION_bss_spram_a8             _Pragma("section .bss.spram.a8 aw")
#define   __END_SECTION_bss_spram_a8             _Pragma("section")
#define __START_SECTION_bss_spram                _Pragma("section .bss.spram aw")
#define   __END_SECTION_bss_spram                _Pragma("section")
//RULE: endif

/* Variables in uninitialized dual ported RAM: */
/* For alignment requiements bigger than 8 bytes please use the #defines from memlay_pub.h */
#define __START_SECTION_bss_dpram_a1            _Pragma("section .bss.dpram.a1 aw")
#define   __END_SECTION_bss_dpram_a1            _Pragma("section")
#define __START_SECTION_bss_dpram_a2            _Pragma("section .bss.dpram.a2 aw")
#define   __END_SECTION_bss_dpram_a2            _Pragma("section")
#define __START_SECTION_bss_dpram_a4            _Pragma("section .bss.dpram.a4 aw")
#define   __END_SECTION_bss_dpram_a4            _Pragma("section")
#define __START_SECTION_bss_dpram_a8            _Pragma("section .bss.dpram.a8 aw")
#define   __END_SECTION_bss_dpram_a8            _Pragma("section")
#define __START_SECTION_bss_dpram               _Pragma("section .bss.dpram aw")
#define   __END_SECTION_bss_dpram               _Pragma("section")

/* Variables in initialized dual ported RAM: */
#define __START_SECTION_data_dpram_a1            _Pragma("section .data.dpram.a1 aw")
#define   __END_SECTION_data_dpram_a1            _Pragma("section")
#define __START_SECTION_data_dpram_a2            _Pragma("section .data.dpram.a2 aw")
#define   __END_SECTION_data_dpram_a2            _Pragma("section")
#define __START_SECTION_data_dpram_a4            _Pragma("section .data.dpram.a4 aw")
#define   __END_SECTION_data_dpram_a4            _Pragma("section")
#define __START_SECTION_data_dpram_a8            _Pragma("section .data.dpram.a8 aw")
#define   __END_SECTION_data_dpram_a8            _Pragma("section")
#define __START_SECTION_data_dpram               _Pragma("section .data.dpram aw")
#define   __END_SECTION_data_dpram               _Pragma("section")


/* ===============================================================================*/
/* Bit adressing */
/* ===============================================================================*/

/* read only bit variables not available */

/* addressing modes of initialized variables */
#define __START_SECTION_bdata                    _Pragma("section .bdata awbz")
#define   __END_SECTION_bdata                    _Pragma("section")

/* addressing modes of uninitialized variables */
#define __START_SECTION_bbss                     _Pragma("section .bbss awbz")
#define   __END_SECTION_bbss                     _Pragma("section")

/* _GNU_PRAGMA_H */
#endif
