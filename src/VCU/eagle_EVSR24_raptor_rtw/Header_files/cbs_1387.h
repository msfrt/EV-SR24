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
 * $Filename__:cbs_1387.h$ 
 * 
 * $Author____:LENZSI$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:AHT2FE$ 
 * $Date______:16.04.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:cbs_1387$ 
 * $Variant___:1.12.0$ 
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
 * 1.12.0; 0     16.04.2010 AHT2FE
 *   Update TC1387 header files
 * 
 * 1.10.0; 0     03.08.2009 LENZSI
 *   Initial import from Clearcase 
 *      File name: cbs_1387.h
 *      Version: \main\3
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CBS_1387_H
#define _CBS_1387_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _CBS_UL(x) x
#else
    #define _CBS_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CBS on TC1387
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 JTAGID;              // [0xF0000464] : JTAG Device Identification Register
    volatile uint32 COMDATA;             // [0xF0000468] : Communication Mode Data Register
    volatile uint32 IOSR;                // [0xF000046C] : IOClient Status and Control Register
    volatile uint32 MCDBBS;              // [0xF0000470] : Break Bus Switch Configuration Register
    volatile uint32 MCDSSG;              // [0xF0000474] : Suspend Source Status and Control Register
    volatile uint32 OEC;                 // [0xF0000478] : OCDS Enable Control Register
    volatile uint32 OCNTRL;              // [0xF000047C] : OSCU Control Register
    volatile uint32 OSTATE;              // [0xF0000480] : OSCU Status Register
    volatile uint32 INTMOD;              // [0xF0000484] : Internal Mode Status and Control Register
    volatile uint32 ICTSA;               // [0xF0000488] : Internally Controlled Trace Source Register
    volatile uint32 ICTTA;               // [0xF000048C] : Internally Controlled Trace Destination Register
    volatile uint32 MCDBBSS;             // [0xF0000490] : Break Bus Switch Status Register
    volatile uint32 MCDSSGC;             // [0xF0000494] : Suspend Signal Target Control Register
    volatile uint32 RESERVED0[2];        // [0xF0000498...0xF000049F] : reserved space
    volatile uint32 TRIGS;               // [0xF00004A0] : Set Trigger to Host Register
    volatile uint32 TRIGC;               // [0xF00004A4] : Clear Trigger to Host Register
    volatile uint32 TRIG;                // [0xF00004A8] : Trigger to Host Register
    volatile uint32 RESERVED1[19];       // [0xF00004AC...0xF00004F7] : reserved space
    volatile uint32 SRC1;                // [0xF00004F8] : Service Request Node2 Control Register
    volatile uint32 SRC0;                // [0xF00004FC] : Service Request Node1 Control Register
} CBS_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CBS_RegMap_t CBS __attribute__ ((asection (".zbss.label_only","f=awz")));


/*
 ***************************************************************************************************
 * Definitions of bits and bitfields.
 * Each bit(field) is defined by its position and length.
 *
 * Example:
 *                       /- length -\
 *           0000 0000 00xx xxxx xxxx 0000 0000 0000
 *           |                      ^              |
 *      Bit 31                      |              Bit 0
 *                                  +-- position
 *
 * Access mode flags:  r  - bit(field) can only be read
 *                     w  - bit(field) can only be written
 *                     rw - bit(field) can be read and written
 *                     h  - bit(field) can also be modified by hardware
 *                          (such as a status bit).
 *                          This symbol can be combined with rw or r
 *
 ***************************************************************************************************
 */

/* CBS_ID_MOD_NUMBER (r) */
#define CBS_ID_MOD_NUMBER_POS                _CBS_UL(16)
#define CBS_ID_MOD_NUMBER_LEN                _CBS_UL(16)

/* CBS_ID_MOD_REV (r) */
#define CBS_ID_MOD_REV_POS                   _CBS_UL(0)
#define CBS_ID_MOD_REV_LEN                   _CBS_UL(8)

/* CBS_ID_MOD_TYPE (r) */
#define CBS_ID_MOD_TYPE_POS                  _CBS_UL(8)
#define CBS_ID_MOD_TYPE_LEN                  _CBS_UL(8)

/* CBS_ID_MOD_REV (r) */
#define CBS_ID_MOD_REV_POS                   _CBS_UL(0)
#define CBS_ID_MOD_REV_LEN                   _CBS_UL(8)

/* CBS_ID_MOD_TYPE (r) */
#define CBS_ID_MOD_TYPE_POS                  _CBS_UL(8)
#define CBS_ID_MOD_TYPE_LEN                  _CBS_UL(8)

/* CBS_ID_MOD_NUMBER (r) */
#define CBS_ID_MOD_NUMBER_POS                _CBS_UL(16)
#define CBS_ID_MOD_NUMBER_LEN                _CBS_UL(16)

/* CBS_JTAGID_JTAG_ID (rw) */
#define CBS_JTAGID_JTAG_ID_POS               _CBS_UL(0)
#define CBS_JTAGID_JTAG_ID_LEN               _CBS_UL(32)

/* CBS_COMDATA_DATA (rw) */
#define CBS_COMDATA_DATA_POS                 _CBS_UL(0)
#define CBS_COMDATA_DATA_LEN                 _CBS_UL(32)

/* CBS_IOSR_CRSYNC (rh) */
#define CBS_IOSR_CRSYNC_POS                  _CBS_UL(4)
#define CBS_IOSR_CRSYNC_LEN                  _CBS_UL(1)

/* CBS_IOSR_CWSYNC (rh) */
#define CBS_IOSR_CWSYNC_POS                  _CBS_UL(5)
#define CBS_IOSR_CWSYNC_LEN                  _CBS_UL(1)

/* CBS_IOSR_CW_ACK (w) */
#define CBS_IOSR_CW_ACK_POS                  _CBS_UL(6)
#define CBS_IOSR_CW_ACK_LEN                  _CBS_UL(1)

/* CBS_IOSR_COM_SYNC (rh) */
#define CBS_IOSR_COM_SYNC_POS                _CBS_UL(7)
#define CBS_IOSR_COM_SYNC_LEN                _CBS_UL(1)

/* CBS_IOSR_HOSTED (rh) */
#define CBS_IOSR_HOSTED_POS                  _CBS_UL(8)
#define CBS_IOSR_HOSTED_LEN                  _CBS_UL(1)

/* CBS_IOSR_CHANNEL (rh) */
#define CBS_IOSR_CHANNEL_POS                 _CBS_UL(12)
#define CBS_IOSR_CHANNEL_LEN                 _CBS_UL(3)

/* CBS_MCDBBS_BSSB (rw) */
#define CBS_MCDBBS_BSSB_POS                  _CBS_UL(0)
#define CBS_MCDBBS_BSSB_LEN                  _CBS_UL(1)

/* CBS_MCDBBS_BSDMA (rw) */
#define CBS_MCDBBS_BSDMA_POS                 _CBS_UL(1)
#define CBS_MCDBBS_BSDMA_LEN                 _CBS_UL(1)

/* CBS_MCDBBS_BSML0 (rw) */
#define CBS_MCDBBS_BSML0_POS                 _CBS_UL(2)
#define CBS_MCDBBS_BSML0_LEN                 _CBS_UL(1)

/* CBS_MCDBBS_BSPCP (rw) */
#define CBS_MCDBBS_BSPCP_POS                 _CBS_UL(4)
#define CBS_MCDBBS_BSPCP_LEN                 _CBS_UL(1)

/* CBS_MCDBBS_BSTC (rw) */
#define CBS_MCDBBS_BSTC_POS                  _CBS_UL(5)
#define CBS_MCDBBS_BSTC_LEN                  _CBS_UL(1)

/* CBS_MCDBBS_BSPCPEN (rw) */
#define CBS_MCDBBS_BSPCPEN_POS               _CBS_UL(6)
#define CBS_MCDBBS_BSPCPEN_LEN               _CBS_UL(1)

/* CBS_MCDBBS_BSHLTEN (rw) */
#define CBS_MCDBBS_BSHLTEN_POS               _CBS_UL(7)
#define CBS_MCDBBS_BSHLTEN_LEN               _CBS_UL(1)

/* CBS_MCDBBS_BTMCD (rw) */
#define CBS_MCDBBS_BTMCD_POS                 _CBS_UL(8)
#define CBS_MCDBBS_BTMCD_LEN                 _CBS_UL(1)

/* CBS_MCDBBS_BTPCP (rw) */
#define CBS_MCDBBS_BTPCP_POS                 _CBS_UL(12)
#define CBS_MCDBBS_BTPCP_LEN                 _CBS_UL(1)

/* CBS_MCDBBS_BTTC (rw) */
#define CBS_MCDBBS_BTTC_POS                  _CBS_UL(13)
#define CBS_MCDBBS_BTTC_LEN                  _CBS_UL(1)

/* CBS_MCDBBS_BTPCPEN (rw) */
#define CBS_MCDBBS_BTPCPEN_POS               _CBS_UL(14)
#define CBS_MCDBBS_BTPCPEN_LEN               _CBS_UL(1)

/* CBS_MCDBBS_BSP0 (rw) */
#define CBS_MCDBBS_BSP0_POS                  _CBS_UL(16)
#define CBS_MCDBBS_BSP0_LEN                  _CBS_UL(1)

/* CBS_MCDBBS_BSP1 (rw) */
#define CBS_MCDBBS_BSP1_POS                  _CBS_UL(17)
#define CBS_MCDBBS_BSP1_LEN                  _CBS_UL(1)

/* CBS_MCDBBS_BTP0 (rw) */
#define CBS_MCDBBS_BTP0_POS                  _CBS_UL(18)
#define CBS_MCDBBS_BTP0_LEN                  _CBS_UL(1)

/* CBS_MCDBBS_BTP1 (rw) */
#define CBS_MCDBBS_BTP1_POS                  _CBS_UL(19)
#define CBS_MCDBBS_BTP1_LEN                  _CBS_UL(1)

/* CBS_MCDBBS_BTT (rw) */
#define CBS_MCDBBS_BTT_POS                   _CBS_UL(20)
#define CBS_MCDBBS_BTT_LEN                   _CBS_UL(1)

/* CBS_MCDBBS_BTPS (rw) */
#define CBS_MCDBBS_BTPS_POS                  _CBS_UL(21)
#define CBS_MCDBBS_BTPS_LEN                  _CBS_UL(2)

/* CBS_MCDBBS_BTSS (rw) */
#define CBS_MCDBBS_BTSS_POS                  _CBS_UL(23)
#define CBS_MCDBBS_BTSS_LEN                  _CBS_UL(1)

/* CBS_MCDBBS_BTTIEN (rw) */
#define CBS_MCDBBS_BTTIEN_POS                _CBS_UL(24)
#define CBS_MCDBBS_BTTIEN_LEN                _CBS_UL(1)

/* CBS_MCDSSG_BTSCL (w) */
#define CBS_MCDSSG_BTSCL_POS                 _CBS_UL(0)
#define CBS_MCDSSG_BTSCL_LEN                 _CBS_UL(1)

/* CBS_MCDSSG_SUS_P (w) */
#define CBS_MCDSSG_SUS_P_POS                 _CBS_UL(6)
#define CBS_MCDSSG_SUS_P_LEN                 _CBS_UL(1)

/* CBS_MCDSSG_SUS (rw) */
#define CBS_MCDSSG_SUS_POS                   _CBS_UL(7)
#define CBS_MCDSSG_SUS_LEN                   _CBS_UL(1)

/* CBS_MCDSSG_BTS_P (w) */
#define CBS_MCDSSG_BTS_P_POS                 _CBS_UL(8)
#define CBS_MCDSSG_BTS_P_LEN                 _CBS_UL(1)

/* CBS_MCDSSG_BTSEN (rw) */
#define CBS_MCDSSG_BTSEN_POS                 _CBS_UL(9)
#define CBS_MCDSSG_BTSEN_LEN                 _CBS_UL(1)

/* CBS_MCDSSG_BTSM (rw) */
#define CBS_MCDSSG_BTSM_POS                  _CBS_UL(10)
#define CBS_MCDSSG_BTSM_LEN                  _CBS_UL(1)

/* CBS_MCDSSG_SSSTC (rh) */
#define CBS_MCDSSG_SSSTC_POS                 _CBS_UL(16)
#define CBS_MCDSSG_SSSTC_LEN                 _CBS_UL(1)

/* CBS_MCDSSG_SSSSCU (rh) */
#define CBS_MCDSSG_SSSSCU_POS                _CBS_UL(18)
#define CBS_MCDSSG_SSSSCU_LEN                _CBS_UL(1)

/* CBS_MCDSSG_SSSMCD (rh) */
#define CBS_MCDSSG_SSSMCD_POS                _CBS_UL(19)
#define CBS_MCDSSG_SSSMCD_LEN                _CBS_UL(1)

/* CBS_MCDSSG_SSSBRK (rh) */
#define CBS_MCDSSG_SSSBRK_POS                _CBS_UL(22)
#define CBS_MCDSSG_SSSBRK_LEN                _CBS_UL(1)

/* CBS_MCDSSG_SOS (rh) */
#define CBS_MCDSSG_SOS_POS                   _CBS_UL(24)
#define CBS_MCDSSG_SOS_LEN                   _CBS_UL(1)

/* CBS_MCDSSG_SDS (rh) */
#define CBS_MCDSSG_SDS_POS                   _CBS_UL(25)
#define CBS_MCDSSG_SDS_LEN                   _CBS_UL(1)

/* CBS_OEC_PAT (w) */
#define CBS_OEC_PAT_POS                      _CBS_UL(0)
#define CBS_OEC_PAT_LEN                      _CBS_UL(8)

/* CBS_OEC_DS (w) */
#define CBS_OEC_DS_POS                       _CBS_UL(8)
#define CBS_OEC_DS_LEN                       _CBS_UL(1)

/* CBS_OEC_IF_LCK_P (w) */
#define CBS_OEC_IF_LCK_P_POS                 _CBS_UL(16)
#define CBS_OEC_IF_LCK_P_LEN                 _CBS_UL(1)

/* CBS_OEC_IF_LCK (w) */
#define CBS_OEC_IF_LCK_POS                   _CBS_UL(17)
#define CBS_OEC_IF_LCK_LEN                   _CBS_UL(1)

/* CBS_OEC_AUT_OK_P (w) */
#define CBS_OEC_AUT_OK_P_POS                 _CBS_UL(18)
#define CBS_OEC_AUT_OK_P_LEN                 _CBS_UL(1)

/* CBS_OEC_AUT_OK (w) */
#define CBS_OEC_AUT_OK_POS                   _CBS_UL(19)
#define CBS_OEC_AUT_OK_LEN                   _CBS_UL(1)

/* CBS_OCNTRL_OC0_P (w) */
#define CBS_OCNTRL_OC0_P_POS                 _CBS_UL(0)
#define CBS_OCNTRL_OC0_P_LEN                 _CBS_UL(1)

/* CBS_OCNTRL_OC0 (w) */
#define CBS_OCNTRL_OC0_POS                   _CBS_UL(1)
#define CBS_OCNTRL_OC0_LEN                   _CBS_UL(1)

/* CBS_OCNTRL_OC1_P (w) */
#define CBS_OCNTRL_OC1_P_POS                 _CBS_UL(2)
#define CBS_OCNTRL_OC1_P_LEN                 _CBS_UL(1)

/* CBS_OCNTRL_OC1 (w) */
#define CBS_OCNTRL_OC1_POS                   _CBS_UL(3)
#define CBS_OCNTRL_OC1_LEN                   _CBS_UL(1)

/* CBS_OCNTRL_OC2_P (w) */
#define CBS_OCNTRL_OC2_P_POS                 _CBS_UL(4)
#define CBS_OCNTRL_OC2_P_LEN                 _CBS_UL(1)

/* CBS_OCNTRL_OC2 (w) */
#define CBS_OCNTRL_OC2_POS                   _CBS_UL(5)
#define CBS_OCNTRL_OC2_LEN                   _CBS_UL(1)

/* CBS_OCNTRL_OC3_P (w) */
#define CBS_OCNTRL_OC3_P_POS                 _CBS_UL(6)
#define CBS_OCNTRL_OC3_P_LEN                 _CBS_UL(1)

/* CBS_OCNTRL_OC3 (w) */
#define CBS_OCNTRL_OC3_POS                   _CBS_UL(7)
#define CBS_OCNTRL_OC3_LEN                   _CBS_UL(1)

/* CBS_OCNTRL_OC4_P (w) */
#define CBS_OCNTRL_OC4_P_POS                 _CBS_UL(8)
#define CBS_OCNTRL_OC4_P_LEN                 _CBS_UL(1)

/* CBS_OCNTRL_OC4 (w) */
#define CBS_OCNTRL_OC4_POS                   _CBS_UL(9)
#define CBS_OCNTRL_OC4_LEN                   _CBS_UL(1)

/* CBS_OCNTRL_OC5_P (w) */
#define CBS_OCNTRL_OC5_P_POS                 _CBS_UL(10)
#define CBS_OCNTRL_OC5_P_LEN                 _CBS_UL(1)

/* CBS_OCNTRL_OC5 (w) */
#define CBS_OCNTRL_OC5_POS                   _CBS_UL(11)
#define CBS_OCNTRL_OC5_LEN                   _CBS_UL(1)

/* CBS_OCNTRL_WDTSUS_P (w) */
#define CBS_OCNTRL_WDTSUS_P_POS              _CBS_UL(12)
#define CBS_OCNTRL_WDTSUS_P_LEN              _CBS_UL(1)

/* CBS_OCNTRL_WDTSUS (w) */
#define CBS_OCNTRL_WDTSUS_POS                _CBS_UL(13)
#define CBS_OCNTRL_WDTSUS_LEN                _CBS_UL(1)

/* CBS_OCNTRL_STABLE_P (w) */
#define CBS_OCNTRL_STABLE_P_POS              _CBS_UL(14)
#define CBS_OCNTRL_STABLE_P_LEN              _CBS_UL(1)

/* CBS_OCNTRL_STABLE (w) */
#define CBS_OCNTRL_STABLE_POS                _CBS_UL(15)
#define CBS_OCNTRL_STABLE_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC0_P (w) */
#define CBS_OCNTRL_OJC0_P_POS                _CBS_UL(16)
#define CBS_OCNTRL_OJC0_P_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC0 (w) */
#define CBS_OCNTRL_OJC0_POS                  _CBS_UL(17)
#define CBS_OCNTRL_OJC0_LEN                  _CBS_UL(1)

/* CBS_OCNTRL_OJC1_P (w) */
#define CBS_OCNTRL_OJC1_P_POS                _CBS_UL(18)
#define CBS_OCNTRL_OJC1_P_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC1 (w) */
#define CBS_OCNTRL_OJC1_POS                  _CBS_UL(19)
#define CBS_OCNTRL_OJC1_LEN                  _CBS_UL(1)

/* CBS_OCNTRL_OJC2_P (w) */
#define CBS_OCNTRL_OJC2_P_POS                _CBS_UL(20)
#define CBS_OCNTRL_OJC2_P_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC2 (w) */
#define CBS_OCNTRL_OJC2_POS                  _CBS_UL(21)
#define CBS_OCNTRL_OJC2_LEN                  _CBS_UL(1)

/* CBS_OCNTRL_OJC3_P (w) */
#define CBS_OCNTRL_OJC3_P_POS                _CBS_UL(22)
#define CBS_OCNTRL_OJC3_P_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC3 (w) */
#define CBS_OCNTRL_OJC3_POS                  _CBS_UL(23)
#define CBS_OCNTRL_OJC3_LEN                  _CBS_UL(1)

/* CBS_OCNTRL_OJC4_P (w) */
#define CBS_OCNTRL_OJC4_P_POS                _CBS_UL(24)
#define CBS_OCNTRL_OJC4_P_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC4 (w) */
#define CBS_OCNTRL_OJC4_POS                  _CBS_UL(25)
#define CBS_OCNTRL_OJC4_LEN                  _CBS_UL(1)

/* CBS_OCNTRL_OJC5_P (w) */
#define CBS_OCNTRL_OJC5_P_POS                _CBS_UL(26)
#define CBS_OCNTRL_OJC5_P_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC5 (w) */
#define CBS_OCNTRL_OJC5_POS                  _CBS_UL(27)
#define CBS_OCNTRL_OJC5_LEN                  _CBS_UL(1)

/* CBS_OCNTRL_OJC6_P (w) */
#define CBS_OCNTRL_OJC6_P_POS                _CBS_UL(28)
#define CBS_OCNTRL_OJC6_P_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC6 (w) */
#define CBS_OCNTRL_OJC6_POS                  _CBS_UL(29)
#define CBS_OCNTRL_OJC6_LEN                  _CBS_UL(1)

/* CBS_OCNTRL_OJC7_P (w) */
#define CBS_OCNTRL_OJC7_P_POS                _CBS_UL(30)
#define CBS_OCNTRL_OJC7_P_LEN                _CBS_UL(1)

/* CBS_OCNTRL_OJC7 (w) */
#define CBS_OCNTRL_OJC7_POS                  _CBS_UL(31)
#define CBS_OCNTRL_OJC7_LEN                  _CBS_UL(1)

/* CBS_OSTATE_OEN (rh) */
#define CBS_OSTATE_OEN_POS                   _CBS_UL(0)
#define CBS_OSTATE_OEN_LEN                   _CBS_UL(1)

/* CBS_OSTATE_DJMODE (rh) */
#define CBS_OSTATE_DJMODE_POS                _CBS_UL(1)
#define CBS_OSTATE_DJMODE_LEN                _CBS_UL(2)

/* CBS_OSTATE_DAPRST (rh) */
#define CBS_OSTATE_DAPRST_POS                _CBS_UL(3)
#define CBS_OSTATE_DAPRST_LEN                _CBS_UL(1)

/* CBS_OSTATE_ENIDIS (rh) */
#define CBS_OSTATE_ENIDIS_POS                _CBS_UL(4)
#define CBS_OSTATE_ENIDIS_LEN                _CBS_UL(1)

/* CBS_OSTATE_EECTRC (rh) */
#define CBS_OSTATE_EECTRC_POS                _CBS_UL(5)
#define CBS_OSTATE_EECTRC_LEN                _CBS_UL(1)

/* CBS_OSTATE_EECDIS (rh) */
#define CBS_OSTATE_EECDIS_POS                _CBS_UL(6)
#define CBS_OSTATE_EECDIS_LEN                _CBS_UL(1)

/* CBS_OSTATE_WDTSUS (rh) */
#define CBS_OSTATE_WDTSUS_POS                _CBS_UL(7)
#define CBS_OSTATE_WDTSUS_LEN                _CBS_UL(1)

/* CBS_OSTATE_HARR (rh) */
#define CBS_OSTATE_HARR_POS                  _CBS_UL(8)
#define CBS_OSTATE_HARR_LEN                  _CBS_UL(1)

/* CBS_OSTATE_OJC1 (rh) */
#define CBS_OSTATE_OJC1_POS                  _CBS_UL(9)
#define CBS_OSTATE_OJC1_LEN                  _CBS_UL(1)

/* CBS_OSTATE_OJC2 (rh) */
#define CBS_OSTATE_OJC2_POS                  _CBS_UL(10)
#define CBS_OSTATE_OJC2_LEN                  _CBS_UL(1)

/* CBS_OSTATE_OJC3 (rh) */
#define CBS_OSTATE_OJC3_POS                  _CBS_UL(11)
#define CBS_OSTATE_OJC3_LEN                  _CBS_UL(1)

/* CBS_OSTATE_RSTCL0 (rh) */
#define CBS_OSTATE_RSTCL0_POS                _CBS_UL(12)
#define CBS_OSTATE_RSTCL0_LEN                _CBS_UL(1)

/* CBS_OSTATE_RSTCL1 (rh) */
#define CBS_OSTATE_RSTCL1_POS                _CBS_UL(13)
#define CBS_OSTATE_RSTCL1_LEN                _CBS_UL(1)

/* CBS_OSTATE_RSTCL3 (rh) */
#define CBS_OSTATE_RSTCL3_POS                _CBS_UL(15)
#define CBS_OSTATE_RSTCL3_LEN                _CBS_UL(1)

/* CBS_OSTATE_IF_LCK (rh) */
#define CBS_OSTATE_IF_LCK_POS                _CBS_UL(16)
#define CBS_OSTATE_IF_LCK_LEN                _CBS_UL(1)

/* CBS_OSTATE_AUT_OK (rh) */
#define CBS_OSTATE_AUT_OK_POS                _CBS_UL(17)
#define CBS_OSTATE_AUT_OK_LEN                _CBS_UL(1)

/* CBS_OSTATE_STABLE (rh) */
#define CBS_OSTATE_STABLE_POS                _CBS_UL(18)
#define CBS_OSTATE_STABLE_LEN                _CBS_UL(1)

/* CBS_INTMOD_SET_CRS (w) */
#define CBS_INTMOD_SET_CRS_POS               _CBS_UL(0)
#define CBS_INTMOD_SET_CRS_LEN               _CBS_UL(1)

/* CBS_INTMOD_SET_CWS (w) */
#define CBS_INTMOD_SET_CWS_POS               _CBS_UL(1)
#define CBS_INTMOD_SET_CWS_LEN               _CBS_UL(1)

/* CBS_INTMOD_SET_CS (w) */
#define CBS_INTMOD_SET_CS_POS                _CBS_UL(2)
#define CBS_INTMOD_SET_CS_LEN                _CBS_UL(1)

/* CBS_INTMOD_CLR_CS (w) */
#define CBS_INTMOD_CLR_CS_POS                _CBS_UL(3)
#define CBS_INTMOD_CLR_CS_LEN                _CBS_UL(1)

/* CBS_INTMOD_CHANNEL_P (w) */
#define CBS_INTMOD_CHANNEL_P_POS             _CBS_UL(4)
#define CBS_INTMOD_CHANNEL_P_LEN             _CBS_UL(1)

/* CBS_INTMOD_CHANNEL (rw) */
#define CBS_INTMOD_CHANNEL_POS               _CBS_UL(5)
#define CBS_INTMOD_CHANNEL_LEN               _CBS_UL(3)

/* CBS_INTMOD_SET_INT_MOD (w) */
#define CBS_INTMOD_SET_INT_MOD_POS           _CBS_UL(16)
#define CBS_INTMOD_SET_INT_MOD_LEN           _CBS_UL(1)

/* CBS_INTMOD_SET_INT_TRC (w) */
#define CBS_INTMOD_SET_INT_TRC_POS           _CBS_UL(18)
#define CBS_INTMOD_SET_INT_TRC_LEN           _CBS_UL(1)

/* CBS_INTMOD_CLR_INT_TRC (w) */
#define CBS_INTMOD_CLR_INT_TRC_POS           _CBS_UL(19)
#define CBS_INTMOD_CLR_INT_TRC_LEN           _CBS_UL(1)

/* CBS_INTMOD_TRC_MOD_P (w) */
#define CBS_INTMOD_TRC_MOD_P_POS             _CBS_UL(20)
#define CBS_INTMOD_TRC_MOD_P_LEN             _CBS_UL(1)

/* CBS_INTMOD_TRC_MOD (rw) */
#define CBS_INTMOD_TRC_MOD_POS               _CBS_UL(21)
#define CBS_INTMOD_TRC_MOD_LEN               _CBS_UL(2)

/* CBS_INTMOD_INT_MOD (rh) */
#define CBS_INTMOD_INT_MOD_POS               _CBS_UL(24)
#define CBS_INTMOD_INT_MOD_LEN               _CBS_UL(1)

/* CBS_INTMOD_INT_TRC (rh) */
#define CBS_INTMOD_INT_TRC_POS               _CBS_UL(25)
#define CBS_INTMOD_INT_TRC_LEN               _CBS_UL(1)

/* CBS_ICTSA_ADDR (rw) */
#define CBS_ICTSA_ADDR_POS                   _CBS_UL(0)
#define CBS_ICTSA_ADDR_LEN                   _CBS_UL(32)

/* CBS_ICTTA_ADDR (rw) */
#define CBS_ICTTA_ADDR_POS                   _CBS_UL(0)
#define CBS_ICTTA_ADDR_LEN                   _CBS_UL(32)

/* CBS_MCDBBSS_BSSSB (rh) */
#define CBS_MCDBBSS_BSSSB_POS                _CBS_UL(0)
#define CBS_MCDBBSS_BSSSB_LEN                _CBS_UL(1)

/* CBS_MCDBBSS_BSSDMA (rh) */
#define CBS_MCDBBSS_BSSDMA_POS               _CBS_UL(1)
#define CBS_MCDBBSS_BSSDMA_LEN               _CBS_UL(1)

/* CBS_MCDBBSS_BSSML0 (rh) */
#define CBS_MCDBBSS_BSSML0_POS               _CBS_UL(2)
#define CBS_MCDBBSS_BSSML0_LEN               _CBS_UL(1)

/* CBS_MCDBBSS_BSSPCP (rh) */
#define CBS_MCDBBSS_BSSPCP_POS               _CBS_UL(4)
#define CBS_MCDBBSS_BSSPCP_LEN               _CBS_UL(1)

/* CBS_MCDBBSS_BSSTC (rh) */
#define CBS_MCDBBSS_BSSTC_POS                _CBS_UL(5)
#define CBS_MCDBBSS_BSSTC_LEN                _CBS_UL(1)

/* CBS_MCDBBSS_BSCSB (rh) */
#define CBS_MCDBBSS_BSCSB_POS                _CBS_UL(8)
#define CBS_MCDBBSS_BSCSB_LEN                _CBS_UL(1)

/* CBS_MCDBBSS_BSCDMA (rh) */
#define CBS_MCDBBSS_BSCDMA_POS               _CBS_UL(9)
#define CBS_MCDBBSS_BSCDMA_LEN               _CBS_UL(1)

/* CBS_MCDBBSS_BSCML0 (rh) */
#define CBS_MCDBBSS_BSCML0_POS               _CBS_UL(10)
#define CBS_MCDBBSS_BSCML0_LEN               _CBS_UL(1)

/* CBS_MCDBBSS_BSCPCP (rh) */
#define CBS_MCDBBSS_BSCPCP_POS               _CBS_UL(12)
#define CBS_MCDBBSS_BSCPCP_LEN               _CBS_UL(1)

/* CBS_MCDBBSS_BSCTC (rh) */
#define CBS_MCDBBSS_BSCTC_POS                _CBS_UL(13)
#define CBS_MCDBBSS_BSCTC_LEN                _CBS_UL(1)

/* CBS_MCDBBSS_BBS0 (rh) */
#define CBS_MCDBBSS_BBS0_POS                 _CBS_UL(16)
#define CBS_MCDBBSS_BBS0_LEN                 _CBS_UL(1)

/* CBS_MCDBBSS_BBS1 (rh) */
#define CBS_MCDBBSS_BBS1_POS                 _CBS_UL(17)
#define CBS_MCDBBSS_BBS1_LEN                 _CBS_UL(1)

/* CBS_MCDBBSS_BBC0 (rh) */
#define CBS_MCDBBSS_BBC0_POS                 _CBS_UL(18)
#define CBS_MCDBBSS_BBC0_LEN                 _CBS_UL(1)

/* CBS_MCDBBSS_BBC1 (rh) */
#define CBS_MCDBBSS_BBC1_POS                 _CBS_UL(19)
#define CBS_MCDBBSS_BBC1_LEN                 _CBS_UL(1)

/* CBS_MCDBBSS_CAPCLR (w) */
#define CBS_MCDBBSS_CAPCLR_POS               _CBS_UL(24)
#define CBS_MCDBBSS_CAPCLR_LEN               _CBS_UL(1)

/* CBS_MCDSSGC_STC_P (w) */
#define CBS_MCDSSGC_STC_P_POS                _CBS_UL(0)
#define CBS_MCDSSGC_STC_P_LEN                _CBS_UL(1)

/* CBS_MCDSSGC_STCM (rw) */
#define CBS_MCDSSGC_STCM_POS                 _CBS_UL(1)
#define CBS_MCDSSGC_STCM_LEN                 _CBS_UL(1)

/* CBS_MCDSSGC_STCTC (rw) */
#define CBS_MCDSSGC_STCTC_POS                _CBS_UL(2)
#define CBS_MCDSSGC_STCTC_LEN                _CBS_UL(1)

/* CBS_MCDSSGC_STCPCP (rw) */
#define CBS_MCDSSGC_STCPCP_POS               _CBS_UL(3)
#define CBS_MCDSSGC_STCPCP_LEN               _CBS_UL(1)

/* CBS_MCDSSGC_STCDMA (rw) */
#define CBS_MCDSSGC_STCDMA_POS               _CBS_UL(4)
#define CBS_MCDSSGC_STCDMA_LEN               _CBS_UL(1)

/* CBS_TRIGS_TRG0 (w) */
#define CBS_TRIGS_TRG0_POS                   _CBS_UL(0)
#define CBS_TRIGS_TRG0_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG1 (w) */
#define CBS_TRIGS_TRG1_POS                   _CBS_UL(1)
#define CBS_TRIGS_TRG1_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG2 (w) */
#define CBS_TRIGS_TRG2_POS                   _CBS_UL(2)
#define CBS_TRIGS_TRG2_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG3 (w) */
#define CBS_TRIGS_TRG3_POS                   _CBS_UL(3)
#define CBS_TRIGS_TRG3_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG4 (w) */
#define CBS_TRIGS_TRG4_POS                   _CBS_UL(4)
#define CBS_TRIGS_TRG4_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG5 (w) */
#define CBS_TRIGS_TRG5_POS                   _CBS_UL(5)
#define CBS_TRIGS_TRG5_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG6 (w) */
#define CBS_TRIGS_TRG6_POS                   _CBS_UL(6)
#define CBS_TRIGS_TRG6_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG7 (w) */
#define CBS_TRIGS_TRG7_POS                   _CBS_UL(7)
#define CBS_TRIGS_TRG7_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG8 (w) */
#define CBS_TRIGS_TRG8_POS                   _CBS_UL(8)
#define CBS_TRIGS_TRG8_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG9 (w) */
#define CBS_TRIGS_TRG9_POS                   _CBS_UL(9)
#define CBS_TRIGS_TRG9_LEN                   _CBS_UL(1)

/* CBS_TRIGS_TRG10 (w) */
#define CBS_TRIGS_TRG10_POS                  _CBS_UL(10)
#define CBS_TRIGS_TRG10_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG11 (w) */
#define CBS_TRIGS_TRG11_POS                  _CBS_UL(11)
#define CBS_TRIGS_TRG11_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG12 (w) */
#define CBS_TRIGS_TRG12_POS                  _CBS_UL(12)
#define CBS_TRIGS_TRG12_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG13 (w) */
#define CBS_TRIGS_TRG13_POS                  _CBS_UL(13)
#define CBS_TRIGS_TRG13_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG14 (w) */
#define CBS_TRIGS_TRG14_POS                  _CBS_UL(14)
#define CBS_TRIGS_TRG14_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG15 (w) */
#define CBS_TRIGS_TRG15_POS                  _CBS_UL(15)
#define CBS_TRIGS_TRG15_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG16 (w) */
#define CBS_TRIGS_TRG16_POS                  _CBS_UL(16)
#define CBS_TRIGS_TRG16_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG17 (w) */
#define CBS_TRIGS_TRG17_POS                  _CBS_UL(17)
#define CBS_TRIGS_TRG17_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG18 (w) */
#define CBS_TRIGS_TRG18_POS                  _CBS_UL(18)
#define CBS_TRIGS_TRG18_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG19 (w) */
#define CBS_TRIGS_TRG19_POS                  _CBS_UL(19)
#define CBS_TRIGS_TRG19_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG20 (w) */
#define CBS_TRIGS_TRG20_POS                  _CBS_UL(20)
#define CBS_TRIGS_TRG20_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG21 (w) */
#define CBS_TRIGS_TRG21_POS                  _CBS_UL(21)
#define CBS_TRIGS_TRG21_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG22 (w) */
#define CBS_TRIGS_TRG22_POS                  _CBS_UL(22)
#define CBS_TRIGS_TRG22_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG23 (w) */
#define CBS_TRIGS_TRG23_POS                  _CBS_UL(23)
#define CBS_TRIGS_TRG23_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG24 (w) */
#define CBS_TRIGS_TRG24_POS                  _CBS_UL(24)
#define CBS_TRIGS_TRG24_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG25 (w) */
#define CBS_TRIGS_TRG25_POS                  _CBS_UL(25)
#define CBS_TRIGS_TRG25_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG26 (w) */
#define CBS_TRIGS_TRG26_POS                  _CBS_UL(26)
#define CBS_TRIGS_TRG26_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG27 (w) */
#define CBS_TRIGS_TRG27_POS                  _CBS_UL(27)
#define CBS_TRIGS_TRG27_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG28 (w) */
#define CBS_TRIGS_TRG28_POS                  _CBS_UL(28)
#define CBS_TRIGS_TRG28_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG29 (w) */
#define CBS_TRIGS_TRG29_POS                  _CBS_UL(29)
#define CBS_TRIGS_TRG29_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG30 (w) */
#define CBS_TRIGS_TRG30_POS                  _CBS_UL(30)
#define CBS_TRIGS_TRG30_LEN                  _CBS_UL(1)

/* CBS_TRIGS_TRG31 (w) */
#define CBS_TRIGS_TRG31_POS                  _CBS_UL(31)
#define CBS_TRIGS_TRG31_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG0 (w) */
#define CBS_TRIGC_TRG0_POS                   _CBS_UL(0)
#define CBS_TRIGC_TRG0_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG1 (w) */
#define CBS_TRIGC_TRG1_POS                   _CBS_UL(1)
#define CBS_TRIGC_TRG1_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG2 (w) */
#define CBS_TRIGC_TRG2_POS                   _CBS_UL(2)
#define CBS_TRIGC_TRG2_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG3 (w) */
#define CBS_TRIGC_TRG3_POS                   _CBS_UL(3)
#define CBS_TRIGC_TRG3_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG4 (w) */
#define CBS_TRIGC_TRG4_POS                   _CBS_UL(4)
#define CBS_TRIGC_TRG4_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG5 (w) */
#define CBS_TRIGC_TRG5_POS                   _CBS_UL(5)
#define CBS_TRIGC_TRG5_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG6 (w) */
#define CBS_TRIGC_TRG6_POS                   _CBS_UL(6)
#define CBS_TRIGC_TRG6_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG7 (w) */
#define CBS_TRIGC_TRG7_POS                   _CBS_UL(7)
#define CBS_TRIGC_TRG7_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG8 (w) */
#define CBS_TRIGC_TRG8_POS                   _CBS_UL(8)
#define CBS_TRIGC_TRG8_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG9 (w) */
#define CBS_TRIGC_TRG9_POS                   _CBS_UL(9)
#define CBS_TRIGC_TRG9_LEN                   _CBS_UL(1)

/* CBS_TRIGC_TRG10 (w) */
#define CBS_TRIGC_TRG10_POS                  _CBS_UL(10)
#define CBS_TRIGC_TRG10_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG11 (w) */
#define CBS_TRIGC_TRG11_POS                  _CBS_UL(11)
#define CBS_TRIGC_TRG11_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG12 (w) */
#define CBS_TRIGC_TRG12_POS                  _CBS_UL(12)
#define CBS_TRIGC_TRG12_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG13 (w) */
#define CBS_TRIGC_TRG13_POS                  _CBS_UL(13)
#define CBS_TRIGC_TRG13_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG14 (w) */
#define CBS_TRIGC_TRG14_POS                  _CBS_UL(14)
#define CBS_TRIGC_TRG14_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG15 (w) */
#define CBS_TRIGC_TRG15_POS                  _CBS_UL(15)
#define CBS_TRIGC_TRG15_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG16 (w) */
#define CBS_TRIGC_TRG16_POS                  _CBS_UL(16)
#define CBS_TRIGC_TRG16_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG17 (w) */
#define CBS_TRIGC_TRG17_POS                  _CBS_UL(17)
#define CBS_TRIGC_TRG17_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG18 (w) */
#define CBS_TRIGC_TRG18_POS                  _CBS_UL(18)
#define CBS_TRIGC_TRG18_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG19 (w) */
#define CBS_TRIGC_TRG19_POS                  _CBS_UL(19)
#define CBS_TRIGC_TRG19_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG20 (w) */
#define CBS_TRIGC_TRG20_POS                  _CBS_UL(20)
#define CBS_TRIGC_TRG20_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG21 (w) */
#define CBS_TRIGC_TRG21_POS                  _CBS_UL(21)
#define CBS_TRIGC_TRG21_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG22 (w) */
#define CBS_TRIGC_TRG22_POS                  _CBS_UL(22)
#define CBS_TRIGC_TRG22_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG23 (w) */
#define CBS_TRIGC_TRG23_POS                  _CBS_UL(23)
#define CBS_TRIGC_TRG23_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG24 (w) */
#define CBS_TRIGC_TRG24_POS                  _CBS_UL(24)
#define CBS_TRIGC_TRG24_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG25 (w) */
#define CBS_TRIGC_TRG25_POS                  _CBS_UL(25)
#define CBS_TRIGC_TRG25_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG26 (w) */
#define CBS_TRIGC_TRG26_POS                  _CBS_UL(26)
#define CBS_TRIGC_TRG26_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG27 (w) */
#define CBS_TRIGC_TRG27_POS                  _CBS_UL(27)
#define CBS_TRIGC_TRG27_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG28 (w) */
#define CBS_TRIGC_TRG28_POS                  _CBS_UL(28)
#define CBS_TRIGC_TRG28_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG29 (w) */
#define CBS_TRIGC_TRG29_POS                  _CBS_UL(29)
#define CBS_TRIGC_TRG29_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG30 (w) */
#define CBS_TRIGC_TRG30_POS                  _CBS_UL(30)
#define CBS_TRIGC_TRG30_LEN                  _CBS_UL(1)

/* CBS_TRIGC_TRG31 (w) */
#define CBS_TRIGC_TRG31_POS                  _CBS_UL(31)
#define CBS_TRIGC_TRG31_LEN                  _CBS_UL(1)

/* CBS_TRIG_TRG0 (rh) */
#define CBS_TRIG_TRG0_POS                    _CBS_UL(0)
#define CBS_TRIG_TRG0_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG1 (rh) */
#define CBS_TRIG_TRG1_POS                    _CBS_UL(1)
#define CBS_TRIG_TRG1_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG2 (rh) */
#define CBS_TRIG_TRG2_POS                    _CBS_UL(2)
#define CBS_TRIG_TRG2_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG3 (rh) */
#define CBS_TRIG_TRG3_POS                    _CBS_UL(3)
#define CBS_TRIG_TRG3_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG4 (rh) */
#define CBS_TRIG_TRG4_POS                    _CBS_UL(4)
#define CBS_TRIG_TRG4_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG5 (rh) */
#define CBS_TRIG_TRG5_POS                    _CBS_UL(5)
#define CBS_TRIG_TRG5_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG6 (rh) */
#define CBS_TRIG_TRG6_POS                    _CBS_UL(6)
#define CBS_TRIG_TRG6_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG7 (rh) */
#define CBS_TRIG_TRG7_POS                    _CBS_UL(7)
#define CBS_TRIG_TRG7_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG8 (rh) */
#define CBS_TRIG_TRG8_POS                    _CBS_UL(8)
#define CBS_TRIG_TRG8_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG9 (rh) */
#define CBS_TRIG_TRG9_POS                    _CBS_UL(9)
#define CBS_TRIG_TRG9_LEN                    _CBS_UL(1)

/* CBS_TRIG_TRG10 (rh) */
#define CBS_TRIG_TRG10_POS                   _CBS_UL(10)
#define CBS_TRIG_TRG10_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG11 (rh) */
#define CBS_TRIG_TRG11_POS                   _CBS_UL(11)
#define CBS_TRIG_TRG11_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG12 (rh) */
#define CBS_TRIG_TRG12_POS                   _CBS_UL(12)
#define CBS_TRIG_TRG12_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG13 (rh) */
#define CBS_TRIG_TRG13_POS                   _CBS_UL(13)
#define CBS_TRIG_TRG13_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG14 (rh) */
#define CBS_TRIG_TRG14_POS                   _CBS_UL(14)
#define CBS_TRIG_TRG14_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG15 (rh) */
#define CBS_TRIG_TRG15_POS                   _CBS_UL(15)
#define CBS_TRIG_TRG15_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG16 (rh) */
#define CBS_TRIG_TRG16_POS                   _CBS_UL(16)
#define CBS_TRIG_TRG16_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG17 (rh) */
#define CBS_TRIG_TRG17_POS                   _CBS_UL(17)
#define CBS_TRIG_TRG17_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG18 (rh) */
#define CBS_TRIG_TRG18_POS                   _CBS_UL(18)
#define CBS_TRIG_TRG18_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG19 (rh) */
#define CBS_TRIG_TRG19_POS                   _CBS_UL(19)
#define CBS_TRIG_TRG19_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG20 (rh) */
#define CBS_TRIG_TRG20_POS                   _CBS_UL(20)
#define CBS_TRIG_TRG20_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG21 (rh) */
#define CBS_TRIG_TRG21_POS                   _CBS_UL(21)
#define CBS_TRIG_TRG21_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG22 (rh) */
#define CBS_TRIG_TRG22_POS                   _CBS_UL(22)
#define CBS_TRIG_TRG22_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG23 (rh) */
#define CBS_TRIG_TRG23_POS                   _CBS_UL(23)
#define CBS_TRIG_TRG23_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG24 (rh) */
#define CBS_TRIG_TRG24_POS                   _CBS_UL(24)
#define CBS_TRIG_TRG24_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG25 (rh) */
#define CBS_TRIG_TRG25_POS                   _CBS_UL(25)
#define CBS_TRIG_TRG25_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG26 (rh) */
#define CBS_TRIG_TRG26_POS                   _CBS_UL(26)
#define CBS_TRIG_TRG26_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG27 (rh) */
#define CBS_TRIG_TRG27_POS                   _CBS_UL(27)
#define CBS_TRIG_TRG27_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG28 (rh) */
#define CBS_TRIG_TRG28_POS                   _CBS_UL(28)
#define CBS_TRIG_TRG28_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG29 (rh) */
#define CBS_TRIG_TRG29_POS                   _CBS_UL(29)
#define CBS_TRIG_TRG29_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG30 (rh) */
#define CBS_TRIG_TRG30_POS                   _CBS_UL(30)
#define CBS_TRIG_TRG30_LEN                   _CBS_UL(1)

/* CBS_TRIG_TRG31 (rh) */
#define CBS_TRIG_TRG31_POS                   _CBS_UL(31)
#define CBS_TRIG_TRG31_LEN                   _CBS_UL(1)

/* CBS_SRC1_SRPN (rw) */
#define CBS_SRC1_SRPN_POS                    _CBS_UL(0)
#define CBS_SRC1_SRPN_LEN                    _CBS_UL(8)

/* CBS_SRC1_TOS (rw) */
#define CBS_SRC1_TOS_POS                     _CBS_UL(10)
#define CBS_SRC1_TOS_LEN                     _CBS_UL(2)

/* CBS_SRC1_SRE (rw) */
#define CBS_SRC1_SRE_POS                     _CBS_UL(12)
#define CBS_SRC1_SRE_LEN                     _CBS_UL(1)

/* CBS_SRC1_SRR (rh) */
#define CBS_SRC1_SRR_POS                     _CBS_UL(13)
#define CBS_SRC1_SRR_LEN                     _CBS_UL(1)

/* CBS_SRC1_CLRR (w) */
#define CBS_SRC1_CLRR_POS                    _CBS_UL(14)
#define CBS_SRC1_CLRR_LEN                    _CBS_UL(1)

/* CBS_SRC1_SETR (w) */
#define CBS_SRC1_SETR_POS                    _CBS_UL(15)
#define CBS_SRC1_SETR_LEN                    _CBS_UL(1)

/* CBS_SRC0_SRPN (rw) */
#define CBS_SRC0_SRPN_POS                    _CBS_UL(0)
#define CBS_SRC0_SRPN_LEN                    _CBS_UL(8)

/* CBS_SRC0_TOS (rw) */
#define CBS_SRC0_TOS_POS                     _CBS_UL(10)
#define CBS_SRC0_TOS_LEN                     _CBS_UL(2)

/* CBS_SRC0_SRE (rw) */
#define CBS_SRC0_SRE_POS                     _CBS_UL(12)
#define CBS_SRC0_SRE_LEN                     _CBS_UL(1)

/* CBS_SRC0_SRR (rh) */
#define CBS_SRC0_SRR_POS                     _CBS_UL(13)
#define CBS_SRC0_SRR_LEN                     _CBS_UL(1)

/* CBS_SRC0_CLRR (w) */
#define CBS_SRC0_CLRR_POS                    _CBS_UL(14)
#define CBS_SRC0_CLRR_LEN                    _CBS_UL(1)

/* CBS_SRC0_SETR (w) */
#define CBS_SRC0_SETR_POS                    _CBS_UL(15)
#define CBS_SRC0_SETR_LEN                    _CBS_UL(1)

#endif
