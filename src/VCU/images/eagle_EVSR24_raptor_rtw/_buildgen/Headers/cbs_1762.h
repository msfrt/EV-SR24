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
 * $Filename__:cbs_1762.h$ 
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
 * $Name______:cbs_1762$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: cbs_1762.h
 *      Version: \main\basis\b_CORE\1
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CBS_1762_H
#define _CBS_1762_H

/* add ul suffix if file is used in C context */
#define _CBS_UL(x) x##UL

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module CBS on TC1762
 *
 * \scope           [API]
 ***************************************************************************************************
*/

/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 RESERVED0[2];        // [0xF0000400...0xF0000407] : reserved space
    volatile uint32 JDP_ID;              // [0xF0000408] : Module Identification Register
    volatile uint32 RESERVED1[23];       // [0xF000040C...0xF0000467] : reserved space
    volatile uint32 COMDATA;             // [0xF0000468] : Cerberus Communication Mode Data Register
    volatile uint32 IOSR;                // [0xF000046C] : Cerberus Status Register
    volatile uint32 MCDBBS;              // [0xF0000470] : Break Bus Switch Configuration Register
    volatile uint32 MCDSSG;              // [0xF0000474] : Cerberus Suspend Signal Generation Status and Control Register
    volatile uint32 OEC;                 // [0xF0000478] : Cerberus OCDS Enable Control Register
    volatile uint32 OCNTRL;              // [0xF000047C] : Cerberus OSCU Configuration and Control Register
    volatile uint32 OSTATE;              // [0xF0000480] : Cerberus OSCU Status Register
    volatile uint32 INTMOD;              // [0xF0000484] : Cerberus Internal Mode Status and Control Register
    volatile uint32 ICTSA;               // [0xF0000488] : Cerberus Internal Controlled Trace Source Address Register
    volatile uint32 ICTTA;               // [0xF000048C] : Cerberus Internal Controlled Trace Target Address Register
    volatile uint32 MCDBBSS;             // [0xF0000490] : Cerberus Break Bus Switch Status Register
    volatile uint32 MCDSSGC;             // [0xF0000494] : Cerberus Suspend Signal Generation Configuration Register
    volatile uint32 RESERVED2[25];       // [0xF0000498...0xF00004FB] : reserved space
    volatile uint32 SRC;                 // [0xF00004FC] : Cerberus Service Request Control Register
} CBS_RegMap_t;

/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern CBS_RegMap_t CBS __attribute__ ((section (".zbss")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS END HERE! (do not remove this comment)
 ***************************************************************************************************
*/

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

/* CBS_COMDATA_DATA (rw) */
#define CBS_COMDATA_DATA_POS           _CBS_UL(0)
#define CBS_COMDATA_DATA_LEN           _CBS_UL(32)

/* CBS_ICTSA_ADDR (rw) */
#define CBS_ICTSA_ADDR_POS             _CBS_UL(0)
#define CBS_ICTSA_ADDR_LEN             _CBS_UL(32)

/* CBS_ICTTA_ADDR (rw) */
#define CBS_ICTTA_ADDR_POS             _CBS_UL(0)
#define CBS_ICTTA_ADDR_LEN             _CBS_UL(32)

/* CBS_INTMOD_CHANNEL (w) */
#define CBS_INTMOD_CHANNEL_POS         _CBS_UL(5)
#define CBS_INTMOD_CHANNEL_LEN         _CBS_UL(3)

/* CBS_INTMOD_CHANNEL_P (w) */
#define CBS_INTMOD_CHANNEL_P_POS       _CBS_UL(4)
#define CBS_INTMOD_CHANNEL_P_LEN       _CBS_UL(1)

/* CBS_INTMOD_CLRCS (w) */
#define CBS_INTMOD_CLRCS_POS           _CBS_UL(3)
#define CBS_INTMOD_CLRCS_LEN           _CBS_UL(1)

/* CBS_INTMOD_CLRINTTRC (w) */
#define CBS_INTMOD_CLRINTTRC_POS       _CBS_UL(19)
#define CBS_INTMOD_CLRINTTRC_LEN       _CBS_UL(1)

/* CBS_INTMOD_INTMOD (rh) */
#define CBS_INTMOD_INTMOD_POS          _CBS_UL(24)
#define CBS_INTMOD_INTMOD_LEN          _CBS_UL(1)

/* CBS_INTMOD_INTTRC (rh) */
#define CBS_INTMOD_INTTRC_POS          _CBS_UL(25)
#define CBS_INTMOD_INTTRC_LEN          _CBS_UL(1)

/* CBS_INTMOD_SETCRS (w) */
#define CBS_INTMOD_SETCRS_POS          _CBS_UL(0)
#define CBS_INTMOD_SETCRS_LEN          _CBS_UL(1)

/* CBS_INTMOD_SETCS (w) */
#define CBS_INTMOD_SETCS_POS           _CBS_UL(2)
#define CBS_INTMOD_SETCS_LEN           _CBS_UL(1)

/* CBS_INTMOD_SETCWS (w) */
#define CBS_INTMOD_SETCWS_POS          _CBS_UL(1)
#define CBS_INTMOD_SETCWS_LEN          _CBS_UL(1)

/* CBS_INTMOD_SETINTMOD (w) */
#define CBS_INTMOD_SETINTMOD_POS       _CBS_UL(16)
#define CBS_INTMOD_SETINTMOD_LEN       _CBS_UL(1)

/* CBS_INTMOD_SETINTTRC (w) */
#define CBS_INTMOD_SETINTTRC_POS       _CBS_UL(18)
#define CBS_INTMOD_SETINTTRC_LEN       _CBS_UL(1)

/* CBS_INTMOD_TRCMOD (rw) */
#define CBS_INTMOD_TRCMOD_POS          _CBS_UL(21)
#define CBS_INTMOD_TRCMOD_LEN          _CBS_UL(2)

/* CBS_INTMOD_TRCMODP (w) */
#define CBS_INTMOD_TRCMODP_POS         _CBS_UL(20)
#define CBS_INTMOD_TRCMODP_LEN         _CBS_UL(1)

/* CBS_IOSR_CHANNEL (rh) */
#define CBS_IOSR_CHANNEL_POS           _CBS_UL(12)
#define CBS_IOSR_CHANNEL_LEN           _CBS_UL(3)

/* CBS_IOSR_COMSYNC (rh) */
#define CBS_IOSR_COMSYNC_POS           _CBS_UL(7)
#define CBS_IOSR_COMSYNC_LEN           _CBS_UL(1)

/* CBS_IOSR_CRSYNC (rh) */
#define CBS_IOSR_CRSYNC_POS            _CBS_UL(4)
#define CBS_IOSR_CRSYNC_LEN            _CBS_UL(1)

/* CBS_IOSR_CWACK (w) */
#define CBS_IOSR_CWACK_POS             _CBS_UL(6)
#define CBS_IOSR_CWACK_LEN             _CBS_UL(1)

/* CBS_IOSR_CWSYNC (rh) */
#define CBS_IOSR_CWSYNC_POS            _CBS_UL(5)
#define CBS_IOSR_CWSYNC_LEN            _CBS_UL(1)

/* CBS_JDP_ID_MODULE (r) */
#define CBS_JDP_ID_MODULE_POS          _CBS_UL(8)
#define CBS_JDP_ID_MODULE_LEN          _CBS_UL(8)

/* CBS_JDP_ID_REVISION (r) */
#define CBS_JDP_ID_REVISION_POS        _CBS_UL(0)
#define CBS_JDP_ID_REVISION_LEN        _CBS_UL(8)

/* CBS_MCDBBSS_BBC0 (rh) */
#define CBS_MCDBBSS_BBC0_POS           _CBS_UL(18)
#define CBS_MCDBBSS_BBC0_LEN           _CBS_UL(1)

/* CBS_MCDBBSS_BBC1 (rh) */
#define CBS_MCDBBSS_BBC1_POS           _CBS_UL(19)
#define CBS_MCDBBSS_BBC1_LEN           _CBS_UL(1)

/* CBS_MCDBBSS_BBS0 (rh) */
#define CBS_MCDBBSS_BBS0_POS           _CBS_UL(16)
#define CBS_MCDBBSS_BBS0_LEN           _CBS_UL(1)

/* CBS_MCDBBSS_BBS1 (rh) */
#define CBS_MCDBBSS_BBS1_POS           _CBS_UL(17)
#define CBS_MCDBBSS_BBS1_LEN           _CBS_UL(1)

/* CBS_MCDBBSS_BSCDMA (rh) */
#define CBS_MCDBBSS_BSCDMA_POS         _CBS_UL(13)
#define CBS_MCDBBSS_BSCDMA_LEN         _CBS_UL(1)

/* CBS_MCDBBSS_BSCSB (rh) */
#define CBS_MCDBBSS_BSCSB_POS          _CBS_UL(10)
#define CBS_MCDBBSS_BSCSB_LEN          _CBS_UL(1)

/* CBS_MCDBBSS_BSCTC (rh) */
#define CBS_MCDBBSS_BSCTC_POS          _CBS_UL(8)
#define CBS_MCDBBSS_BSCTC_LEN          _CBS_UL(1)

/* CBS_MCDBBSS_BSSDMA (rh) */
#define CBS_MCDBBSS_BSSDMA_POS         _CBS_UL(5)
#define CBS_MCDBBSS_BSSDMA_LEN         _CBS_UL(1)

/* CBS_MCDBBSS_BSSSB (rh) */
#define CBS_MCDBBSS_BSSSB_POS          _CBS_UL(2)
#define CBS_MCDBBSS_BSSSB_LEN          _CBS_UL(1)

/* CBS_MCDBBSS_BSSTC (rh) */
#define CBS_MCDBBSS_BSSTC_POS          _CBS_UL(0)
#define CBS_MCDBBSS_BSSTC_LEN          _CBS_UL(1)

/* CBS_MCDBBSS_CAPCLR (w) */
#define CBS_MCDBBSS_CAPCLR_POS         _CBS_UL(24)
#define CBS_MCDBBSS_CAPCLR_LEN         _CBS_UL(1)

/* CBS_MCDBBS_BSDMA (rw) */
#define CBS_MCDBBS_BSDMA_POS           _CBS_UL(5)
#define CBS_MCDBBS_BSDMA_LEN           _CBS_UL(1)

/* CBS_MCDBBS_BSPIN (rw) */
#define CBS_MCDBBS_BSPIN_POS           _CBS_UL(16)
#define CBS_MCDBBS_BSPIN_LEN           _CBS_UL(1)

/* CBS_MCDBBS_BSPINA (rw) */
#define CBS_MCDBBS_BSPINA_POS          _CBS_UL(17)
#define CBS_MCDBBS_BSPINA_LEN          _CBS_UL(1)

/* CBS_MCDBBS_BSSB (rw) */
#define CBS_MCDBBS_BSSB_POS            _CBS_UL(2)
#define CBS_MCDBBS_BSSB_LEN            _CBS_UL(1)

/* CBS_MCDBBS_BSTC (rw) */
#define CBS_MCDBBS_BSTC_POS            _CBS_UL(0)
#define CBS_MCDBBS_BSTC_LEN            _CBS_UL(1)

/* CBS_MCDBBS_BTPIN (rw) */
#define CBS_MCDBBS_BTPIN_POS           _CBS_UL(19)
#define CBS_MCDBBS_BTPIN_LEN           _CBS_UL(1)

/* CBS_MCDBBS_BTPINA (rw) */
#define CBS_MCDBBS_BTPINA_POS          _CBS_UL(18)
#define CBS_MCDBBS_BTPINA_LEN          _CBS_UL(1)

/* CBS_MCDBBS_BTSS (rw) */
#define CBS_MCDBBS_BTSS_POS            _CBS_UL(23)
#define CBS_MCDBBS_BTSS_LEN            _CBS_UL(1)

/* CBS_MCDBBS_BTT (rw) */
#define CBS_MCDBBS_BTT_POS             _CBS_UL(20)
#define CBS_MCDBBS_BTT_LEN             _CBS_UL(1)

/* CBS_MCDBBS_BTTC (rw) */
#define CBS_MCDBBS_BTTC_POS            _CBS_UL(8)
#define CBS_MCDBBS_BTTC_LEN            _CBS_UL(1)

/* CBS_MCDBBS_BTTIEN (rw) */
#define CBS_MCDBBS_BTTIEN_POS          _CBS_UL(24)
#define CBS_MCDBBS_BTTIEN_LEN          _CBS_UL(1)

/* CBS_MCDSSGC_STCM (rw) */
#define CBS_MCDSSGC_STCM_POS           _CBS_UL(1)
#define CBS_MCDSSGC_STCM_LEN           _CBS_UL(1)

/* CBS_MCDSSGC_STCP (w) */
#define CBS_MCDSSGC_STCP_POS           _CBS_UL(0)
#define CBS_MCDSSGC_STCP_LEN           _CBS_UL(1)

/* CBS_MCDSSGC_STCPMU (rw) */
#define CBS_MCDSSGC_STCPMU_POS         _CBS_UL(4)
#define CBS_MCDSSGC_STCPMU_LEN         _CBS_UL(1)

/* CBS_MCDSSGC_STCTC (rw) */
#define CBS_MCDSSGC_STCTC_POS          _CBS_UL(2)
#define CBS_MCDSSGC_STCTC_LEN          _CBS_UL(1)

/* CBS_MCDSSG_BTSCL (w) */
#define CBS_MCDSSG_BTSCL_POS           _CBS_UL(0)
#define CBS_MCDSSG_BTSCL_LEN           _CBS_UL(1)

/* CBS_MCDSSG_BTSEN (rw) */
#define CBS_MCDSSG_BTSEN_POS           _CBS_UL(9)
#define CBS_MCDSSG_BTSEN_LEN           _CBS_UL(1)

/* CBS_MCDSSG_BTSM (rw) */
#define CBS_MCDSSG_BTSM_POS            _CBS_UL(10)
#define CBS_MCDSSG_BTSM_LEN            _CBS_UL(1)

/* CBS_MCDSSG_BTSP (w) */
#define CBS_MCDSSG_BTSP_POS            _CBS_UL(8)
#define CBS_MCDSSG_BTSP_LEN            _CBS_UL(1)

/* CBS_MCDSSG_SDS (rh) */
#define CBS_MCDSSG_SDS_POS             _CBS_UL(25)
#define CBS_MCDSSG_SDS_LEN             _CBS_UL(1)

/* CBS_MCDSSG_SOS (rh) */
#define CBS_MCDSSG_SOS_POS             _CBS_UL(24)
#define CBS_MCDSSG_SOS_LEN             _CBS_UL(1)

/* CBS_MCDSSG_SSSBRK (rh) */
#define CBS_MCDSSG_SSSBRK_POS          _CBS_UL(22)
#define CBS_MCDSSG_SSSBRK_LEN          _CBS_UL(1)

/* CBS_MCDSSG_SSSTC (rh) */
#define CBS_MCDSSG_SSSTC_POS           _CBS_UL(16)
#define CBS_MCDSSG_SSSTC_LEN           _CBS_UL(1)

/* CBS_MCDSSG_SUS (rw) */
#define CBS_MCDSSG_SUS_POS             _CBS_UL(7)
#define CBS_MCDSSG_SUS_LEN             _CBS_UL(1)

/* CBS_MCDSSG_SUSP (w) */
#define CBS_MCDSSG_SUSP_POS            _CBS_UL(6)
#define CBS_MCDSSG_SUSP_LEN            _CBS_UL(1)

/* CBS_OCNTRL_HARR (w) */
#define CBS_OCNTRL_HARR_POS            _CBS_UL(17)
#define CBS_OCNTRL_HARR_LEN            _CBS_UL(1)

/* CBS_OCNTRL_HARRP (w) */
#define CBS_OCNTRL_HARRP_POS           _CBS_UL(16)
#define CBS_OCNTRL_HARRP_LEN           _CBS_UL(1)

/* CBS_OCNTRL_TRCDEN (w) */
#define CBS_OCNTRL_TRCDEN_POS          _CBS_UL(5)
#define CBS_OCNTRL_TRCDEN_LEN          _CBS_UL(1)

/* CBS_OCNTRL_TRCDENP (w) */
#define CBS_OCNTRL_TRCDENP_POS         _CBS_UL(4)
#define CBS_OCNTRL_TRCDENP_LEN         _CBS_UL(1)

/* CBS_OCNTRL_TRCDS (w) */
#define CBS_OCNTRL_TRCDS_POS           _CBS_UL(7)
#define CBS_OCNTRL_TRCDS_LEN           _CBS_UL(1)

/* CBS_OCNTRL_TRCDSP (w) */
#define CBS_OCNTRL_TRCDSP_POS          _CBS_UL(6)
#define CBS_OCNTRL_TRCDSP_LEN          _CBS_UL(1)

/* CBS_OCNTRL_TRCEN (w) */
#define CBS_OCNTRL_TRCEN_POS           _CBS_UL(1)
#define CBS_OCNTRL_TRCEN_LEN           _CBS_UL(1)

/* CBS_OCNTRL_TRCENP (w) */
#define CBS_OCNTRL_TRCENP_POS          _CBS_UL(0)
#define CBS_OCNTRL_TRCENP_LEN          _CBS_UL(1)

/* CBS_OCNTRL_TRCMUX (w) */
#define CBS_OCNTRL_TRCMUX_POS          _CBS_UL(3)
#define CBS_OCNTRL_TRCMUX_LEN          _CBS_UL(1)

/* CBS_OCNTRL_TRCMUXP (w) */
#define CBS_OCNTRL_TRCMUXP_POS         _CBS_UL(2)
#define CBS_OCNTRL_TRCMUXP_LEN         _CBS_UL(1)

/* CBS_OCNTRL_WDTSUS (w) */
#define CBS_OCNTRL_WDTSUS_POS          _CBS_UL(13)
#define CBS_OCNTRL_WDTSUS_LEN          _CBS_UL(1)

/* CBS_OCNTRL_WDTSUSP (w) */
#define CBS_OCNTRL_WDTSUSP_POS         _CBS_UL(12)
#define CBS_OCNTRL_WDTSUSP_LEN         _CBS_UL(1)

/* CBS_OEC_AUTOK (w) */
#define CBS_OEC_AUTOK_POS              _CBS_UL(19)
#define CBS_OEC_AUTOK_LEN              _CBS_UL(1)

/* CBS_OEC_AUTOKP (w) */
#define CBS_OEC_AUTOKP_POS             _CBS_UL(18)
#define CBS_OEC_AUTOKP_LEN             _CBS_UL(1)

/* CBS_OEC_IFLCK (w) */
#define CBS_OEC_IFLCK_POS              _CBS_UL(17)
#define CBS_OEC_IFLCK_LEN              _CBS_UL(1)

/* CBS_OEC_IFLCKP (w) */
#define CBS_OEC_IFLCKP_POS             _CBS_UL(16)
#define CBS_OEC_IFLCKP_LEN             _CBS_UL(1)

/* CBS_OEC_PAT (w) */
#define CBS_OEC_PAT_POS                _CBS_UL(0)
#define CBS_OEC_PAT_LEN                _CBS_UL(8)

/* CBS_OSTATE_AUTOK (rh) */
#define CBS_OSTATE_AUTOK_POS           _CBS_UL(17)
#define CBS_OSTATE_AUTOK_LEN           _CBS_UL(1)

/* CBS_OSTATE_HARR (rh) */
#define CBS_OSTATE_HARR_POS            _CBS_UL(8)
#define CBS_OSTATE_HARR_LEN            _CBS_UL(1)

/* CBS_OSTATE_IFLCK (rh) */
#define CBS_OSTATE_IFLCK_POS           _CBS_UL(16)
#define CBS_OSTATE_IFLCK_LEN           _CBS_UL(1)

/* CBS_OSTATE_OEN (rh) */
#define CBS_OSTATE_OEN_POS             _CBS_UL(0)
#define CBS_OSTATE_OEN_LEN             _CBS_UL(1)

/* CBS_OSTATE_TRCDEN (rh) */
#define CBS_OSTATE_TRCDEN_POS          _CBS_UL(3)
#define CBS_OSTATE_TRCDEN_LEN          _CBS_UL(1)

/* CBS_OSTATE_TRCDS (rh) */
#define CBS_OSTATE_TRCDS_POS           _CBS_UL(4)
#define CBS_OSTATE_TRCDS_LEN           _CBS_UL(1)

/* CBS_OSTATE_TRCEN (rh) */
#define CBS_OSTATE_TRCEN_POS           _CBS_UL(1)
#define CBS_OSTATE_TRCEN_LEN           _CBS_UL(1)

/* CBS_OSTATE_TRCMUX (rh) */
#define CBS_OSTATE_TRCMUX_POS          _CBS_UL(2)
#define CBS_OSTATE_TRCMUX_LEN          _CBS_UL(1)

/* CBS_OSTATE_WDTSUS (rh) */
#define CBS_OSTATE_WDTSUS_POS          _CBS_UL(7)
#define CBS_OSTATE_WDTSUS_LEN          _CBS_UL(1)

/* CBS_SRC_CLRR (w) */
#define CBS_SRC_CLRR_POS               _CBS_UL(14)
#define CBS_SRC_CLRR_LEN               _CBS_UL(1)

/* CBS_SRC_SETR (w) */
#define CBS_SRC_SETR_POS               _CBS_UL(15)
#define CBS_SRC_SETR_LEN               _CBS_UL(1)

/* CBS_SRC_SRE (rw) */
#define CBS_SRC_SRE_POS                _CBS_UL(12)
#define CBS_SRC_SRE_LEN                _CBS_UL(1)

/* CBS_SRC_SRPN (rw) */
#define CBS_SRC_SRPN_POS               _CBS_UL(0)
#define CBS_SRC_SRPN_LEN               _CBS_UL(8)

/* CBS_SRC_SRR (rh) */
#define CBS_SRC_SRR_POS                _CBS_UL(13)
#define CBS_SRC_SRR_LEN                _CBS_UL(1)

/* CBS_SRC_TOS (rw) */
#define CBS_SRC_TOS_POS                _CBS_UL(10)
#define CBS_SRC_TOS_LEN                _CBS_UL(1)

#endif
