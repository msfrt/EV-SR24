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
 * $Filename__:ignh_gpta_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:UWDAEMMR$
 * $Date______:11.10.2010$
 * $Class_____:SWHDR$
 * $Name______:ignh_gpta_pub$
 * $Variant___:2.14.0$
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
 * 2.14.0; 1     11.10.2010 UWDAEMMR
 *   Removed MACHINE_TYPE dependency
 * 
 * 2.14.0; 0     31.07.2008 NESTORADMINSDOM
 *   Component Toolbox-Import
 * 
 * 2.13.0; 0     31.07.2008 NESTORADMINSDOM
 *   This version is created by migration tool
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _IGNH_GPTA_PUB_H
#define _IGNH_GPTA_PUB_H

#ifndef _COMMON_H
#include <common.h>
#endif

#ifndef __intrinsics_h
#include <intrinsics.h>
#endif

#ifndef _CPU_H
#include <cpu.h>
#endif

#ifndef _GPTA_H
#include <gpta.h>
#endif

/* This scaling factor only necessary for EPM V10, V20
   [tiIncPer message quantized in GPTA ticks] */
#define IGNH_GPTA_SYSTICKS2GT0TICKS(x) ((x) >> 3)

#define Gpta_GetGT1(GPTA_NUMBER) Gpta_GetGT1_##GPTA_NUMBER


/**************************************************************************************************/
/* Useful symbols from injhgdi_gpta.h */
/**************************************************************************************************/
#define GPTA_SRC00_CLRR_POS   GPTA0_SRC00_CLRR_POS
#define GPTA_SRC00_CLRR_LEN   GPTA0_SRC00_CLRR_LEN

#define GPTA_SRC_CLRR_POS     GPTA0_SRC00_CLRR_POS
#define GPTA_SRC_CLRR_LEN     GPTA0_SRC00_CLRR_LEN

#define GPTA_SRC00_SRR_POS    GPTA0_SRC00_SRR_POS
#define GPTA_SRC00_SRR_LEN    GPTA0_SRC00_SRR_LEN

#define GPTA_SRC_SRR_POS      GPTA0_SRC00_SRR_POS
#define GPTA_SRC_SRR_LEN      GPTA0_SRC00_SRR_LEN

#define GPTA_SRC_SRE_POS      GPTA0_SRC00_SRE_POS
#define GPTA_SRC_SRE_LEN      GPTA0_SRC00_SRE_LEN

#define GPTA_SRC_TOS_POS      GPTA0_SRC00_TOS_POS
#define GPTA_SRC_TOS_LEN      GPTA0_SRC00_TOS_LEN

#define GPTA_SRC_SETR_POS     GPTA0_SRC00_SETR_POS
#define GPTA_SRC_SETR_LEN     GPTA0_SRC00_SETR_LEN

#define GPTA_SRC00_SRPN_POS   GPTA0_SRC00_SRPN_POS
#define GPTA_SRC00_SRPN_LEN   GPTA0_SRC00_SRPN_LEN

#define GPTA_SRC_SRPN_POS     GPTA0_SRC00_SRPN_POS
#define GPTA_SRC_SRPN_LEN     GPTA0_SRC00_SRPN_LEN

#define GPTA_GTCCTR_MOD_POS   GPTA0_GTCCTR_MOD_POS

#define GPTA_GTCCTR_OSM_POS   GPTA0_GTCCTR_OSM_POS

#define GPTA_GTCCTR_REN_POS   GPTA0_GTCCTR_REN_POS
#define GPTA_GTCCTR_REN_LEN   GPTA0_GTCCTR_REN_LEN

#define GPTA_GTCCTR_GES_POS   GPTA0_GTCCTR_GES_POS
#define GPTA_GTCCTR_RED_POS   GPTA0_GTCCTR_GES_POS

#define GPTA_GTCCTR_CAC_POS   GPTA0_GTCCTR_CAC_POS
#define GPTA_GTCCTR_FED_POS   GPTA0_GTCCTR_CAC_POS

#define GPTA_GTCCTR_CAT_POS   GPTA0_GTCCTR_CAT_POS

#define GPTA_GTCCTR_BYP_POS   GPTA0_GTCCTR_BYP_POS

#define GPTA_GTCCTR_CEN_POS   GPTA0_GTCCTR_CEN_POS

#define GPTA_GTCCTR_EOA_POS   GPTA0_GTCCTR_EOA_POS

#define GPTA_GTCCTR_OCM2_POS  (GPTA0_GTCCTR_OCM_POS+2)

#define GPTA_GTCCTR_OCM01_POS GPTA0_GTCCTR_OCM_POS
#define GPTA_GTCCTR_OCM_POS   GPTA0_GTCCTR_OCM_POS
#define GPTA_GTCCTR_OCM_LEN   GPTA0_GTCCTR_OCM_LEN

#define GPTA_GTCCTR_OIA_POS   GPTA0_GTCCTR_OIA_POS

#define GPTA_GTCCTR_OUT_POS   GPTA0_GTCCTR_OUT_POS
#define GPTA_GTCCTR_OUT_LEN   GPTA0_GTCCTR_OUT_LEN


/********************* GTCCTR settings *************************/
/* Not depending on machine type */
#define GTC_MOD_CAPTURE_GT0               0
#define GTC_MOD_CAPTURE_GT1               1
#define GTC_MOD_COMPARE_GT0               2
#define GTC_MOD_COMPARE_GT1               3

#define GTC_OSM_CONTINUOUS                0
#define GTC_OSM_ONESHOT                   1

#define GTC_REN_IR_ENABLE                 1
#define GTC_REN_IR_DISABLE                0

#define GTC_GES_EQUAL                     0
#ifndef CDRV_GLOBAL_GTC_WO
#define GTC_GES_GREATER_EQUAL             1
#else
#define GTC_GES_GREATER_EQUAL             0
#endif

#define GTC_RED_DISABLED                  0
#define GTC_RED_ENABLED                   1

#define GTC_CAC_DISABLED                  0
#define GTC_CAC_ENABLED                   1

#define GTC_FED_DISABLED                  0
#define GTC_FED_ENABLED                   1

#define GTC_CAT_CAPTURE_SAME_TIMER        0
#define GTC_CAT_CAPTURE_ALTERNATE_TIMER   1

#define GTC_BYP_ENABLED                   1
#define GTC_BYP_DISABLED                  0

#define GTC_EOA_ENABLED                   0
#define GTC_EOA_DISABLED                  1

#define GTC_OCM01_HOLDSTATE               0
#define GTC_OCM01_TOGGLESTATE             1
#define GTC_OCM01_FORCE_0                 2
#define GTC_OCM01_FORCE_1                 3

#define GTC_OCM2_INT                      0
#define GTC_OCM2_INT_EXT                  1

#define GTC_OIA_DISABLED                  0
#define GTC_OIA_ENABLED                   1

/* #ifndef TC1796_GTC_WO */
/* #define GTC_OIA_ENABLED                   1 */
/* #else */
/* #define GTC_OIA_ENABLED                   0 */
/* #endif */

#ifndef Gpta_Set_GTC_PreInit_Adr
/* Macro not public any more in Core V 0.7.0  --> cf. gpta_priv.h */
/**
 ***************************************************************************************************
 * Set GTC Data Output Line to 0 or 1, sets OSM = EOA == 1 (address based).
 *
 * This macro resets the GTCCTR register to 0x0 and triggers an Output Immediate Action to set
 * the cells' data output line to 0 or 1.
 * Additionally GTCCTR.OSM and GTCCTR.EOA are set to "1".
 * Watch out for subsequent timer cells which receive action commands through M0/M1 lines with
 * setting the data output line.
 *
 * \param base      address of the GTCCTR register
 * \parm  state     desired state of the data output line [0, 1]
 * \return -
 * \seealso -
 * \usedresources -
 ***************************************************************************************************
 */

#define Gpta_Set_GTC_PreInit_Adr(base, state) \
                    (*(base)) = (0x00005100ul | ((uint32)(state) << GPTA0_GTCCTR_OCM_POS))

#endif
#endif



