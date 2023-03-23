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
 * $Filename__:scu_1797.h$ 
 * 
 * $Author____:NESTORADMINSDOM$ 
 * 
 * $Function__:This version is created by migration tool$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:RAT1COB$ 
 * $Date______:10.05.2010$ 
 * $Class_____:SWHDR$ 
 * $Name______:scu_1797$ 
 * $Variant___:1.6.0$ 
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
 * 1.6.0; 1     10.05.2010 RAT1COB
 *   PETCR Register included
 * 
 * 1.6.0; 0     31.07.2008 NESTORADMINSDOM
 *   Initial import from Clearcase.
 *      File name: scu_1797.h
 *      Version: \main\basis\b_CORE\4
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _SCU_1797_H
#define _SCU_1797_H

/* add ul suffix if file is used in C context */
#ifdef REGDEF_FOR_PCP
    #define _SCU_UL(x) x
#else
    #define _SCU_UL(x) x##UL
#endif

/**
 ***************************************************************************************************
 * \moduledescription
 *              Register definitions for peripheral module SCU on TC1797
 *
 * \scope           [API]
 ***************************************************************************************************
*/
/* C-structure definition for hardware module */
typedef struct {
    volatile uint32 ID;                  // [0xF0000508] : Identification Register
    volatile uint32 RESERVED0[1];        // [0xF000050C...0xF000050F] : reserved space
    volatile uint32 OSCCON;              // [0xF0000510] : OSC Control Register
    volatile uint32 PLLSTAT;             // [0xF0000514] : PLL Status Register
    volatile uint32 PLLCON0;             // [0xF0000518] : PLL Configuration 0 Register
    volatile uint32 PLLCON1;             // [0xF000051C] : PLL Configuration 1 Register
    volatile uint32 PLLERAYCTR;          // [0xF0000520] : PLL_ERAY Control and Status Register
    volatile uint32 RESERVED1[3];        // [0xF0000524...0xF000052F] : reserved space
    volatile uint32 CCUCON0;             // [0xF0000530] : CCU Clock Control Register 0
    volatile uint32 CCUCON1;             // [0xF0000534] : CCU Clock Control Register 1
    volatile uint32 FDR;                 // [0xF0000538] : Fractional Divider Register
    volatile uint32 EXTCON;              // [0xF000053C] : External Clock Control Register
    volatile uint32 SYSCON;              // [0xF0000540] : System Control Register
    volatile uint32 RESERVED2[3];        // [0xF0000544...0xF000054F] : reserved space
    volatile uint32 RSTSTAT;             // [0xF0000550] : Reset Status Register
    volatile uint32 RSTCNTCON;           // [0xF0000554] : Reset Counter Control Register
    volatile uint32 RSTCON;              // [0xF0000558] : Reset Configuration Register
    volatile uint32 ARSTDIS;             // [0xF000055C] : Application Reset Disable Register
    volatile uint32 SWRSTCON;            // [0xF0000560] : Software Reset Configuration Register
    volatile uint32 RESERVED3[3];        // [0xF0000564...0xF000056F] : reserved space
    volatile uint32 ESRCFG0;             // [0xF0000570] : ESR0 Configuration Register
    volatile uint32 ESRCFG1;             // [0xF0000574] : ESR1 Configuration Register
    volatile uint32 ESRCFG2;             // [0xF0000578] : ESR2 Configuration Register
    volatile uint32 RESERVED4[1];        // [0xF000057C...0xF000057F] : reserved space
    volatile uint32 EICR0;               // [0xF0000580] : External Input Channel Register 0
    volatile uint32 EICR1;               // [0xF0000584] : External Input Channel Register 1
    volatile uint32 EIFR;                // [0xF0000588] : External Input Flag Register
    volatile uint32 FMR;                 // [0xF000058C] : Flag Modification Register
    volatile uint32 PDRR;                // [0xF0000590] : Pattern Detection Result Register
    volatile uint32 IGCR0;               // [0xF0000594] : Interrupt Gating Register 0
    volatile uint32 IGCR1;               // [0xF0000598] : Interrupt Gating Register 1
    volatile uint32 RESERVED5[1];        // [0xF000059C...0xF000059F] : reserved space
    volatile uint32 IOCR;                // [0xF00005A0] : Input/Output Control Register
    volatile uint32 OUT;                 // [0xF00005A4] : Output Register
    volatile uint32 OMR;                 // [0xF00005A8] : Output Modification Register
    volatile uint32 IN;                  // [0xF00005AC] : Input Register
    volatile uint32 PMCSR;               // [0xF00005B0] : Power Management Control and Status Register
    volatile uint32 RESERVED6[3];        // [0xF00005B4...0xF00005BF] : reserved space
    volatile uint32 STSTAT;              // [0xF00005C0] : Start-up Status Register
    volatile uint32 STCON;               // [0xF00005C4] : Start-up Configuration Register
    volatile uint32 RESERVED7[2];        // [0xF00005C8...0xF00005CF] : reserved space
    volatile uint32 PETCR;               // [0xF00005D0] : Parity Error Trap Control Register
	volatile uint32 PETSR;               // [0xF00005D4] : Parity Error Trap Status Register
    volatile uint32 RESERVED8[2];        // [0xF00005D8...0xF00005DF] : reserved space
    volatile uint32 DTSSTAT;             // [0xF00005E0] : Die Temperature Sensor Status Register
    volatile uint32 DTSCON;              // [0xF00005E4] : Die Temperature Sensor Control Register
    volatile uint32 RESERVED9[2];        // [0xF00005E8...0xF00005EF] : reserved space
    volatile uint32 WDT_CON0;            // [0xF00005F0] : WDT Control Register 0
    volatile uint32 WDT_CON1;            // [0xF00005F4] : WDT Control Register 1
    volatile uint32 WDT_SR;              // [0xF00005F8] : WDT Status Register
    volatile uint32 RESERVED10[1];       // [0xF00005FC...0xF00005FF] : reserved space
    volatile uint32 EMSR;                // [0xF0000600] : Emergency Stop Register
    volatile uint32 RESERVED11[3];       // [0xF0000604...0xF000060F] : reserved space
    volatile uint32 INTSTAT;             // [0xF0000610] : Interrupt Status Register
    volatile uint32 INTSET;              // [0xF0000614] : Interrupt Set Register
    volatile uint32 INTCLR;              // [0xF0000618] : Interrupt Clear Register
    volatile uint32 INTDIS;              // [0xF000061C] : Interrupt Disable Register
    volatile uint32 INTNP;               // [0xF0000620] : Interrupt Node Pointer Register
    volatile uint32 TRAPSTAT;            // [0xF0000624] : Trap Status Register
    volatile uint32 TRAPSET;             // [0xF0000628] : Trap Set Register
    volatile uint32 TRAPCLR;             // [0xF000062C] : Trap Clear Register
    volatile uint32 TRAPDIS;             // [0xF0000630] : Trap Disable Register
    volatile uint32 RESERVED12[3];       // [0xF0000634...0xF000063F] : reserved space
    volatile uint32 CHIPID;              // [0xF0000640] : Chip Identification Register
    volatile uint32 MANID;               // [0xF0000644] : Manufacturer Identification Register
    volatile uint32 RESERVED13[42];      // [0xF0000648...0xF00006EF] : reserved space
    volatile uint32 SRC3;                // [0xF00006F0] : Service Request Control 3 Register
    volatile uint32 SRC2;                // [0xF00006F4] : Service Request Control 2 Register
    volatile uint32 SRC1;                // [0xF00006F8] : Service Request Control 1 Register
    volatile uint32 SRC0;                // [0xF00006FC] : Service Request Control 0 Register
} SCU_RegMap_t;


/* 'extern' declaration for the module struct. */
/* The module's base address will be assigned by the linker/locator. */
extern SCU_RegMap_t SCU __attribute__ ((asection (".zbss.label_only","f=awz")));

/*
 ***************************************************************************************************
 * USER DEFINED DECLARATIONS START HERE! (do not remove this comment)
 ***************************************************************************************************
*/
/***************************************************************************************************
    BACKWARD COMPATIBILITY MACROS (old register and bitnames mapped to new ones)
****************************************************************************************************
                        TC1766                                            TC1767
-----------+-----------+-----------+-------+-----+-----------+-----------+-----------+-------+------
ADDR        SNAM        BITSNAME    LOCH    LOCL |ADDR        SNAM        BITSNAME    LOCH    LOCL
-----------+-----------+-----------+-------+-----+-----------+-----------+-----------+-------+------
F0000020    WDT_CON0    ENDINIT     0       0    |F00005F0    WDT_CON0    ENDINIT     0       0
                        WDTLCK      1       1    |                        LCK         1       1
                        WDTHPW0     3       2    |                        HPW0        3       2
                        WDTHPW1     7       4    |                        HPW1        7       4
                        WDTPW       15      8    |                        PW          15      8
                        WDTREL      31      16   |                        REL         31      16
                                                 |
F0000024    WDT_CON1    ?????                    |F00005F4    WDT_CON1    CLRIRF      0       0
                        WDTIR       2       2    |                        IR          2       2
                        WDTDR       3       3    |                        DR          3       3
                                                 |
F0000028    WDT_SR      WDTAE       0       0    |F00005F8    WDT_SR      AE          0       0
                        WDTOE       1       1    |                        OE          1       1
                        WDTIS       2       2    |                        IS          2       2
                        WDTDS       3       3    |                        DS          3       3
                        WDTTO       4       4    |                        TO          4       4
                        WDTPR       5       5    |                        PR          5       5
                        WDTTIM      31      16   |                        TIM         31      16
***************************************************************************************************/

/* SCU_WDT_CON0_WDTLCK (rw) */
#define SCU_WDT_CON0_WDTLCK_POS                  SCU_WDT_CON0_LCK_POS
#define SCU_WDT_CON0_WDTLCK_LEN                  SCU_WDT_CON0_LCK_LEN

/* SCU_WDT_CON0_WDTHPW0 (w) */
#define SCU_WDT_CON0_WDTHPW0_POS                 SCU_WDT_CON0_HPW0_POS
#define SCU_WDT_CON0_WDTHPW0_LEN                 SCU_WDT_CON0_HPW0_LEN

/* SCU_WDT_CON0_WDTHPW1 (w) */
#define SCU_WDT_CON0_WDTHPW1_POS                 SCU_WDT_CON0_HPW1_POS
#define SCU_WDT_CON0_WDTHPW1_LEN                 SCU_WDT_CON0_HPW1_LEN

/* SCU_WDT_CON0_WDTPW (rw) */
#define SCU_WDT_CON0_WDTPW_POS                   SCU_WDT_CON0_PW_POS
#define SCU_WDT_CON0_WDTPW_LEN                   SCU_WDT_CON0_PW_LEN

/* SCU_WDT_CON0_WDTREL (rw) */
#define SCU_WDT_CON0_WDTREL_POS                  SCU_WDT_CON0_REL_POS
#define SCU_WDT_CON0_WDTREL_LEN                  SCU_WDT_CON0_REL_LEN

/* SCU_WDT_CON1_WDTIR (rw) */
#define SCU_WDT_CON1_WDTIR_POS                   SCU_WDT_CON1_IR_POS
#define SCU_WDT_CON1_WDTIR_LEN                   SCU_WDT_CON1_IR_LEN

/* SCU_WDT_CON1_WDTDR (rw) */
#define SCU_WDT_CON1_WDTDR_POS                   SCU_WDT_CON1_DR_POS
#define SCU_WDT_CON1_WDTDR_LEN                   SCU_WDT_CON1_DR_LEN

/* SCU_WDT_SR_WDTAE (rh) */
#define SCU_WDT_SR_WDTAE_POS                     SCU_WDT_SR_AE_POS
#define SCU_WDT_SR_WDTAE_LEN                     SCU_WDT_SR_AE_LEN

/* SCU_WDT_SR_WDTOE (rh) */
#define SCU_WDT_SR_WDTOE_POS                     SCU_WDT_SR_OE_POS
#define SCU_WDT_SR_WDTOE_LEN                     SCU_WDT_SR_OE_LEN

/* SCU_WDT_SR_WDTIS (rh) */
#define SCU_WDT_SR_WDTIS_POS                     SCU_WDT_SR_IS_POS
#define SCU_WDT_SR_WDTIS_LEN                     SCU_WDT_SR_IS_LEN

/* SCU_WDT_SR_WDTDS (rh) */
#define SCU_WDT_SR_WDTDS_POS                     SCU_WDT_SR_DS_POS
#define SCU_WDT_SR_WDTDS_LEN                     SCU_WDT_SR_DS_LEN

/* SCU_WDT_SR_WDTTO (rh) */
#define SCU_WDT_SR_WDTTO_POS                     SCU_WDT_SR_TO_POS
#define SCU_WDT_SR_WDTTO_LEN                     SCU_WDT_SR_TO_LEN

/* SCU_WDT_SR_WDTPR (rh) */
#define SCU_WDT_SR_WDTPR_POS                     SCU_WDT_SR_PR_POS
#define SCU_WDT_SR_WDTPR_LEN                     SCU_WDT_SR_PR_LEN

/* SCU_WDT_SR_WDTTIM (rh) */
#define SCU_WDT_SR_WDTTIM_POS                    SCU_WDT_SR_TIM_POS
#define SCU_WDT_SR_WDTTIM_LEN                    SCU_WDT_SR_TIM_LEN
/**************************************************************************************************/


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

/* SCU_ID_MOD_NUMBER (r) */
#define SCU_ID_MOD_NUMBER_POS                _SCU_UL(16)
#define SCU_ID_MOD_NUMBER_LEN                _SCU_UL(16)

/* SCU_ID_MOD_REV (r) */
#define SCU_ID_MOD_REV_POS                   _SCU_UL(0)
#define SCU_ID_MOD_REV_LEN                   _SCU_UL(8)

/* SCU_ID_MOD_TYPE (r) */
#define SCU_ID_MOD_TYPE_POS                  _SCU_UL(8)
#define SCU_ID_MOD_TYPE_LEN                  _SCU_UL(8)

/* SCU_ID_MODREV (r) */
#define SCU_ID_MODREV_POS                    _SCU_UL(0)
#define SCU_ID_MODREV_LEN                    _SCU_UL(8)

/* SCU_ID_MODTYPE (r) */
#define SCU_ID_MODTYPE_POS                   _SCU_UL(8)
#define SCU_ID_MODTYPE_LEN                   _SCU_UL(8)

/* SCU_ID_MODNUMBER (r) */
#define SCU_ID_MODNUMBER_POS                 _SCU_UL(16)
#define SCU_ID_MODNUMBER_LEN                 _SCU_UL(16)

/* SCU_OSCCON_PLLLV (rh) */
#define SCU_OSCCON_PLLLV_POS                 _SCU_UL(1)
#define SCU_OSCCON_PLLLV_LEN                 _SCU_UL(1)

/* SCU_OSCCON_OSCRES (w) */
#define SCU_OSCCON_OSCRES_POS                _SCU_UL(2)
#define SCU_OSCCON_OSCRES_LEN                _SCU_UL(1)

/* SCU_OSCCON_GAINSEL (rh) */
#define SCU_OSCCON_GAINSEL_POS               _SCU_UL(3)
#define SCU_OSCCON_GAINSEL_LEN               _SCU_UL(2)

/* SCU_OSCCON_MODE (rw) */
#define SCU_OSCCON_MODE_POS                  _SCU_UL(5)
#define SCU_OSCCON_MODE_LEN                  _SCU_UL(2)

/* SCU_OSCCON_SHBY (rw) */
#define SCU_OSCCON_SHBY_POS                  _SCU_UL(7)
#define SCU_OSCCON_SHBY_LEN                  _SCU_UL(1)

/* SCU_OSCCON_PLLHV (rh) */
#define SCU_OSCCON_PLLHV_POS                 _SCU_UL(8)
#define SCU_OSCCON_PLLHV_LEN                 _SCU_UL(1)

/* SCU_OSCCON_PLLSP (rh) */
#define SCU_OSCCON_PLLSP_POS                 _SCU_UL(9)
#define SCU_OSCCON_PLLSP_LEN                 _SCU_UL(1)

/* SCU_OSCCON_X1D (rh) */
#define SCU_OSCCON_X1D_POS                   _SCU_UL(10)
#define SCU_OSCCON_X1D_LEN                   _SCU_UL(1)

/* SCU_OSCCON_X1DEN (rw) */
#define SCU_OSCCON_X1DEN_POS                 _SCU_UL(11)
#define SCU_OSCCON_X1DEN_LEN                 _SCU_UL(1)

/* SCU_OSCCON_OSCVAL (rw) */
#define SCU_OSCCON_OSCVAL_POS                _SCU_UL(16)
#define SCU_OSCCON_OSCVAL_LEN                _SCU_UL(5)

/* SCU_PLLSTAT_VCOBYST (rh) */
#define SCU_PLLSTAT_VCOBYST_POS              _SCU_UL(0)
#define SCU_PLLSTAT_VCOBYST_LEN              _SCU_UL(1)

/* SCU_PLLSTAT_PWDSTAT (rh) */
#define SCU_PLLSTAT_PWDSTAT_POS              _SCU_UL(1)
#define SCU_PLLSTAT_PWDSTAT_LEN              _SCU_UL(1)

/* SCU_PLLSTAT_VCOLOCK (rh) */
#define SCU_PLLSTAT_VCOLOCK_POS              _SCU_UL(2)
#define SCU_PLLSTAT_VCOLOCK_LEN              _SCU_UL(1)

/* SCU_PLLSTAT_FINDIS (rh) */
#define SCU_PLLSTAT_FINDIS_POS               _SCU_UL(3)
#define SCU_PLLSTAT_FINDIS_LEN               _SCU_UL(1)

/* SCU_PLLSTAT_K1RDY (rh) */
#define SCU_PLLSTAT_K1RDY_POS                _SCU_UL(4)
#define SCU_PLLSTAT_K1RDY_LEN                _SCU_UL(1)

/* SCU_PLLCON0_VCOBYP (rw) */
#define SCU_PLLCON0_VCOBYP_POS               _SCU_UL(0)
#define SCU_PLLCON0_VCOBYP_LEN               _SCU_UL(1)

/* SCU_PLLCON0_VCOPWD (rw) */
#define SCU_PLLCON0_VCOPWD_POS               _SCU_UL(1)
#define SCU_PLLCON0_VCOPWD_LEN               _SCU_UL(1)

/* SCU_PLLCON0_SETFINDIS (w) */
#define SCU_PLLCON0_SETFINDIS_POS            _SCU_UL(4)
#define SCU_PLLCON0_SETFINDIS_LEN            _SCU_UL(1)

/* SCU_PLLCON0_CLRFINDIS (w) */
#define SCU_PLLCON0_CLRFINDIS_POS            _SCU_UL(5)
#define SCU_PLLCON0_CLRFINDIS_LEN            _SCU_UL(1)

/* SCU_PLLCON0_OSCDISCDIS (rw) */
#define SCU_PLLCON0_OSCDISCDIS_POS           _SCU_UL(6)
#define SCU_PLLCON0_OSCDISCDIS_LEN           _SCU_UL(1)

/* SCU_PLLCON0_NDIV (rw) */
#define SCU_PLLCON0_NDIV_POS                 _SCU_UL(9)
#define SCU_PLLCON0_NDIV_LEN                 _SCU_UL(7)

/* SCU_PLLCON0_PLLPWD (rw) */
#define SCU_PLLCON0_PLLPWD_POS               _SCU_UL(16)
#define SCU_PLLCON0_PLLPWD_LEN               _SCU_UL(1)

/* SCU_PLLCON0_RESLD (w) */
#define SCU_PLLCON0_RESLD_POS                _SCU_UL(18)
#define SCU_PLLCON0_RESLD_LEN                _SCU_UL(1)

/* SCU_PLLCON0_PDIV (rw) */
#define SCU_PLLCON0_PDIV_POS                 _SCU_UL(24)
#define SCU_PLLCON0_PDIV_LEN                 _SCU_UL(4)

/* SCU_PLLCON1_K2DIV (rw) */
#define SCU_PLLCON1_K2DIV_POS                _SCU_UL(0)
#define SCU_PLLCON1_K2DIV_LEN                _SCU_UL(7)

/* SCU_PLLCON1_K1DIV (rw) */
#define SCU_PLLCON1_K1DIV_POS                _SCU_UL(16)
#define SCU_PLLCON1_K1DIV_LEN                _SCU_UL(7)

/* SCU_PLLERAYCTR_KDIV (rw) */
#define SCU_PLLERAYCTR_KDIV_POS              _SCU_UL(0)
#define SCU_PLLERAYCTR_KDIV_LEN              _SCU_UL(4)

/* SCU_PLLERAYCTR_PDIV (rw) */
#define SCU_PLLERAYCTR_PDIV_POS              _SCU_UL(4)
#define SCU_PLLERAYCTR_PDIV_LEN              _SCU_UL(3)

/* SCU_PLLERAYCTR_VB (rw) */
#define SCU_PLLERAYCTR_VB_POS                _SCU_UL(7)
#define SCU_PLLERAYCTR_VB_LEN                _SCU_UL(2)

/* SCU_PLLERAYCTR_PWD (rw) */
#define SCU_PLLERAYCTR_PWD_POS               _SCU_UL(9)
#define SCU_PLLERAYCTR_PWD_LEN               _SCU_UL(1)

/* SCU_PLLERAYCTR_VCOBYP (rw) */
#define SCU_PLLERAYCTR_VCOBYP_POS            _SCU_UL(10)
#define SCU_PLLERAYCTR_VCOBYP_LEN            _SCU_UL(1)

/* SCU_PLLERAYCTR_NDIV (rw) */
#define SCU_PLLERAYCTR_NDIV_POS              _SCU_UL(11)
#define SCU_PLLERAYCTR_NDIV_LEN              _SCU_UL(5)

/* SCU_PLLERAYCTR_VCOLDRES (w) */
#define SCU_PLLERAYCTR_VCOLDRES_POS          _SCU_UL(16)
#define SCU_PLLERAYCTR_VCOLDRES_LEN          _SCU_UL(1)

/* SCU_PLLERAYCTR_VCOLOCK (rh) */
#define SCU_PLLERAYCTR_VCOLOCK_POS           _SCU_UL(17)
#define SCU_PLLERAYCTR_VCOLOCK_LEN           _SCU_UL(1)

/* SCU_PLLERAYCTR_OSCWDTRES (w) */
#define SCU_PLLERAYCTR_OSCWDTRES_POS         _SCU_UL(18)
#define SCU_PLLERAYCTR_OSCWDTRES_LEN         _SCU_UL(1)

/* SCU_PLLERAYCTR_PLLV (rh) */
#define SCU_PLLERAYCTR_PLLV_POS              _SCU_UL(19)
#define SCU_PLLERAYCTR_PLLV_LEN              _SCU_UL(1)

/* SCU_PLLERAYCTR_KDIVRDY (rh) */
#define SCU_PLLERAYCTR_KDIVRDY_POS           _SCU_UL(20)
#define SCU_PLLERAYCTR_KDIVRDY_LEN           _SCU_UL(1)

/* SCU_PLLERAYCTR_PWDSTAT (rh) */
#define SCU_PLLERAYCTR_PWDSTAT_POS           _SCU_UL(21)
#define SCU_PLLERAYCTR_PWDSTAT_LEN           _SCU_UL(1)

/* SCU_PLLERAYCTR_FINDIS (rw) */
#define SCU_PLLERAYCTR_FINDIS_POS            _SCU_UL(22)
#define SCU_PLLERAYCTR_FINDIS_LEN            _SCU_UL(1)

/* SCU_PLLERAYCTR_PLLEN (rw) */
#define SCU_PLLERAYCTR_PLLEN_POS             _SCU_UL(23)
#define SCU_PLLERAYCTR_PLLEN_LEN             _SCU_UL(1)

/* SCU_CCUCON0_FPIDIV (rw) */
#define SCU_CCUCON0_FPIDIV_POS               _SCU_UL(0)
#define SCU_CCUCON0_FPIDIV_LEN               _SCU_UL(4)

/* SCU_CCUCON0_LMBDIV (rw) */
#define SCU_CCUCON0_LMBDIV_POS               _SCU_UL(8)
#define SCU_CCUCON0_LMBDIV_LEN               _SCU_UL(4)

/* SCU_CCUCON0_PCPDIV (rw) */
#define SCU_CCUCON0_PCPDIV_POS               _SCU_UL(24)
#define SCU_CCUCON0_PCPDIV_LEN               _SCU_UL(4)

/* SCU_CCUCON0_LCK (rh) */
#define SCU_CCUCON0_LCK_POS                  _SCU_UL(31)
#define SCU_CCUCON0_LCK_LEN                  _SCU_UL(1)

/* SCU_CCUCON1_MCDSDIV (rw) */
#define SCU_CCUCON1_MCDSDIV_POS              _SCU_UL(0)
#define SCU_CCUCON1_MCDSDIV_LEN              _SCU_UL(4)

/* SCU_CCUCON1_REFCLKDIV (r) */
#define SCU_CCUCON1_REFCLKDIV_POS            _SCU_UL(8)
#define SCU_CCUCON1_REFCLKDIV_LEN            _SCU_UL(4)

/* SCU_CCUCON1_LCK (rh) */
#define SCU_CCUCON1_LCK_POS                  _SCU_UL(31)
#define SCU_CCUCON1_LCK_LEN                  _SCU_UL(1)

/* SCU_FDR_STEP (rw) */
#define SCU_FDR_STEP_POS                     _SCU_UL(0)
#define SCU_FDR_STEP_LEN                     _SCU_UL(10)

/* SCU_FDR_DM (rw) */
#define SCU_FDR_DM_POS                       _SCU_UL(14)
#define SCU_FDR_DM_LEN                       _SCU_UL(2)

/* SCU_FDR_RESULT (rh) */
#define SCU_FDR_RESULT_POS                   _SCU_UL(16)
#define SCU_FDR_RESULT_LEN                   _SCU_UL(10)

/* SCU_FDR_DISCLK (rwh) */
#define SCU_FDR_DISCLK_POS                   _SCU_UL(31)
#define SCU_FDR_DISCLK_LEN                   _SCU_UL(1)

/* SCU_EXTCON_EN0 (rw) */
#define SCU_EXTCON_EN0_POS                   _SCU_UL(0)
#define SCU_EXTCON_EN0_LEN                   _SCU_UL(1)

/* SCU_EXTCON_SEL0 (rw) */
#define SCU_EXTCON_SEL0_POS                  _SCU_UL(2)
#define SCU_EXTCON_SEL0_LEN                  _SCU_UL(4)

/* SCU_EXTCON_GPTAINSEL (rw) */
#define SCU_EXTCON_GPTAINSEL_POS             _SCU_UL(6)
#define SCU_EXTCON_GPTAINSEL_LEN             _SCU_UL(1)

/* SCU_EXTCON_EN1 (rw) */
#define SCU_EXTCON_EN1_POS                   _SCU_UL(16)
#define SCU_EXTCON_EN1_LEN                   _SCU_UL(1)

/* SCU_EXTCON_NSEL (rw) */
#define SCU_EXTCON_NSEL_POS                  _SCU_UL(17)
#define SCU_EXTCON_NSEL_LEN                  _SCU_UL(1)

/* SCU_EXTCON_SEL1 (rw) */
#define SCU_EXTCON_SEL1_POS                  _SCU_UL(18)
#define SCU_EXTCON_SEL1_LEN                  _SCU_UL(4)

/* SCU_EXTCON_DIV1 (rw) */
#define SCU_EXTCON_DIV1_POS                  _SCU_UL(24)
#define SCU_EXTCON_DIV1_LEN                  _SCU_UL(8)

/* SCU_SYSCON_GPTAIS (rw) */
#define SCU_SYSCON_GPTAIS_POS                _SCU_UL(2)
#define SCU_SYSCON_GPTAIS_LEN                _SCU_UL(2)

/* SCU_SYSCON_SETLUDIS (w) */
#define SCU_SYSCON_SETLUDIS_POS              _SCU_UL(4)
#define SCU_SYSCON_SETLUDIS_LEN              _SCU_UL(1)

/* SCU_SYSCON_SETEXTBEN (w) */
#define SCU_SYSCON_SETEXTBEN_POS             _SCU_UL(5)
#define SCU_SYSCON_SETEXTBEN_LEN             _SCU_UL(1)

/* SCU_RSTSTAT_ESR0 (rh) */
#define SCU_RSTSTAT_ESR0_POS                 _SCU_UL(0)
#define SCU_RSTSTAT_ESR0_LEN                 _SCU_UL(1)

/* SCU_RSTSTAT_ESR1 (rh) */
#define SCU_RSTSTAT_ESR1_POS                 _SCU_UL(1)
#define SCU_RSTSTAT_ESR1_LEN                 _SCU_UL(1)

/* SCU_RSTSTAT_WDT (rh) */
#define SCU_RSTSTAT_WDT_POS                  _SCU_UL(3)
#define SCU_RSTSTAT_WDT_LEN                  _SCU_UL(1)

/* SCU_RSTSTAT_SW (rh) */
#define SCU_RSTSTAT_SW_POS                   _SCU_UL(4)
#define SCU_RSTSTAT_SW_LEN                   _SCU_UL(1)

/* SCU_RSTSTAT_PORST (rh) */
#define SCU_RSTSTAT_PORST_POS                _SCU_UL(16)
#define SCU_RSTSTAT_PORST_LEN                _SCU_UL(1)

/* SCU_RSTSTAT_OCDS (rh) */
#define SCU_RSTSTAT_OCDS_POS                 _SCU_UL(17)
#define SCU_RSTSTAT_OCDS_LEN                 _SCU_UL(1)

/* SCU_RSTSTAT_CB0 (rh) */
#define SCU_RSTSTAT_CB0_POS                  _SCU_UL(18)
#define SCU_RSTSTAT_CB0_LEN                  _SCU_UL(1)

/* SCU_RSTSTAT_CB1 (rh) */
#define SCU_RSTSTAT_CB1_POS                  _SCU_UL(19)
#define SCU_RSTSTAT_CB1_LEN                  _SCU_UL(1)

/* SCU_RSTSTAT_CB3 (rh) */
#define SCU_RSTSTAT_CB3_POS                  _SCU_UL(20)
#define SCU_RSTSTAT_CB3_LEN                  _SCU_UL(1)

/* SCU_RSTSTAT_TP (rh) */
#define SCU_RSTSTAT_TP_POS                   _SCU_UL(21)
#define SCU_RSTSTAT_TP_LEN                   _SCU_UL(1)

/* SCU_RSTCNTCON_RELSA (rw) */
#define SCU_RSTCNTCON_RELSA_POS              _SCU_UL(0)
#define SCU_RSTCNTCON_RELSA_LEN              _SCU_UL(16)

/* SCU_RSTCNTCON_RELD (rw) */
#define SCU_RSTCNTCON_RELD_POS               _SCU_UL(16)
#define SCU_RSTCNTCON_RELD_LEN               _SCU_UL(16)

/* SCU_RSTCON_ESR0 (rw) */
#define SCU_RSTCON_ESR0_POS                  _SCU_UL(0)
#define SCU_RSTCON_ESR0_LEN                  _SCU_UL(2)

/* SCU_RSTCON_ESR1 (rw) */
#define SCU_RSTCON_ESR1_POS                  _SCU_UL(2)
#define SCU_RSTCON_ESR1_LEN                  _SCU_UL(2)

/* SCU_RSTCON_WDT (rw) */
#define SCU_RSTCON_WDT_POS                   _SCU_UL(6)
#define SCU_RSTCON_WDT_LEN                   _SCU_UL(2)

/* SCU_RSTCON_SW (rw) */
#define SCU_RSTCON_SW_POS                    _SCU_UL(8)
#define SCU_RSTCON_SW_LEN                    _SCU_UL(2)

/* SCU_ARSTDIS_STMDIS (rw) */
#define SCU_ARSTDIS_STMDIS_POS               _SCU_UL(0)
#define SCU_ARSTDIS_STMDIS_LEN               _SCU_UL(1)

/* SCU_SWRSTCON_SWBOOT (rw) */
#define SCU_SWRSTCON_SWBOOT_POS              _SCU_UL(0)
#define SCU_SWRSTCON_SWBOOT_LEN              _SCU_UL(1)

/* SCU_SWRSTCON_SWRSTREQ (w) */
#define SCU_SWRSTCON_SWRSTREQ_POS            _SCU_UL(1)
#define SCU_SWRSTCON_SWRSTREQ_LEN            _SCU_UL(1)

/* SCU_SWRSTCON_SWCFG (rw) */
#define SCU_SWRSTCON_SWCFG_POS               _SCU_UL(8)
#define SCU_SWRSTCON_SWCFG_LEN               _SCU_UL(8)

/* SCU_ESRCFG0_DFEN (rw) */
#define SCU_ESRCFG0_DFEN_POS                 _SCU_UL(4)
#define SCU_ESRCFG0_DFEN_LEN                 _SCU_UL(1)

/* SCU_ESRCFG0_EDCON (rw) */
#define SCU_ESRCFG0_EDCON_POS                _SCU_UL(7)
#define SCU_ESRCFG0_EDCON_LEN                _SCU_UL(2)

/* SCU_ESRCFG1_DFEN (rw) */
#define SCU_ESRCFG1_DFEN_POS                 _SCU_UL(4)
#define SCU_ESRCFG1_DFEN_LEN                 _SCU_UL(1)

/* SCU_ESRCFG1_EDCON (rw) */
#define SCU_ESRCFG1_EDCON_POS                _SCU_UL(7)
#define SCU_ESRCFG1_EDCON_LEN                _SCU_UL(2)

/* SCU_ESRCFG2_DFEN (rw) */
#define SCU_ESRCFG2_DFEN_POS                 _SCU_UL(4)
#define SCU_ESRCFG2_DFEN_LEN                 _SCU_UL(1)

/* SCU_ESRCFG2_EDCON (rw) */
#define SCU_ESRCFG2_EDCON_POS                _SCU_UL(7)
#define SCU_ESRCFG2_EDCON_LEN                _SCU_UL(2)

/* SCU_EICR0_EXIS0 (rw) */
#define SCU_EICR0_EXIS0_POS                  _SCU_UL(4)
#define SCU_EICR0_EXIS0_LEN                  _SCU_UL(2)

/* SCU_EICR0_FEN0 (rw) */
#define SCU_EICR0_FEN0_POS                   _SCU_UL(8)
#define SCU_EICR0_FEN0_LEN                   _SCU_UL(1)

/* SCU_EICR0_REN0 (rw) */
#define SCU_EICR0_REN0_POS                   _SCU_UL(9)
#define SCU_EICR0_REN0_LEN                   _SCU_UL(1)

/* SCU_EICR0_LDEN0 (rw) */
#define SCU_EICR0_LDEN0_POS                  _SCU_UL(10)
#define SCU_EICR0_LDEN0_LEN                  _SCU_UL(1)

/* SCU_EICR0_EIEN0 (rw) */
#define SCU_EICR0_EIEN0_POS                  _SCU_UL(11)
#define SCU_EICR0_EIEN0_LEN                  _SCU_UL(1)

/* SCU_EICR0_INP0 (rw) */
#define SCU_EICR0_INP0_POS                   _SCU_UL(12)
#define SCU_EICR0_INP0_LEN                   _SCU_UL(3)

/* SCU_EICR0_EXIS1 (rw) */
#define SCU_EICR0_EXIS1_POS                  _SCU_UL(20)
#define SCU_EICR0_EXIS1_LEN                  _SCU_UL(2)

/* SCU_EICR0_FEN1 (rw) */
#define SCU_EICR0_FEN1_POS                   _SCU_UL(24)
#define SCU_EICR0_FEN1_LEN                   _SCU_UL(1)

/* SCU_EICR0_REN1 (rw) */
#define SCU_EICR0_REN1_POS                   _SCU_UL(25)
#define SCU_EICR0_REN1_LEN                   _SCU_UL(1)

/* SCU_EICR0_LDEN1 (rw) */
#define SCU_EICR0_LDEN1_POS                  _SCU_UL(26)
#define SCU_EICR0_LDEN1_LEN                  _SCU_UL(1)

/* SCU_EICR0_EIEN1 (rw) */
#define SCU_EICR0_EIEN1_POS                  _SCU_UL(27)
#define SCU_EICR0_EIEN1_LEN                  _SCU_UL(1)

/* SCU_EICR0_INP1 (rw) */
#define SCU_EICR0_INP1_POS                   _SCU_UL(28)
#define SCU_EICR0_INP1_LEN                   _SCU_UL(3)

/* SCU_EICR1_EXIS2 (rw) */
#define SCU_EICR1_EXIS2_POS                  _SCU_UL(4)
#define SCU_EICR1_EXIS2_LEN                  _SCU_UL(2)

/* SCU_EICR1_FEN2 (rw) */
#define SCU_EICR1_FEN2_POS                   _SCU_UL(8)
#define SCU_EICR1_FEN2_LEN                   _SCU_UL(1)

/* SCU_EICR1_REN2 (rw) */
#define SCU_EICR1_REN2_POS                   _SCU_UL(9)
#define SCU_EICR1_REN2_LEN                   _SCU_UL(1)

/* SCU_EICR1_LDEN2 (rw) */
#define SCU_EICR1_LDEN2_POS                  _SCU_UL(10)
#define SCU_EICR1_LDEN2_LEN                  _SCU_UL(1)

/* SCU_EICR1_EIEN2 (rw) */
#define SCU_EICR1_EIEN2_POS                  _SCU_UL(11)
#define SCU_EICR1_EIEN2_LEN                  _SCU_UL(1)

/* SCU_EICR1_INP2 (rw) */
#define SCU_EICR1_INP2_POS                   _SCU_UL(12)
#define SCU_EICR1_INP2_LEN                   _SCU_UL(3)

/* SCU_EICR1_EXIS3 (rw) */
#define SCU_EICR1_EXIS3_POS                  _SCU_UL(20)
#define SCU_EICR1_EXIS3_LEN                  _SCU_UL(2)

/* SCU_EICR1_FEN3 (rw) */
#define SCU_EICR1_FEN3_POS                   _SCU_UL(24)
#define SCU_EICR1_FEN3_LEN                   _SCU_UL(1)

/* SCU_EICR1_REN3 (rw) */
#define SCU_EICR1_REN3_POS                   _SCU_UL(25)
#define SCU_EICR1_REN3_LEN                   _SCU_UL(1)

/* SCU_EICR1_LDEN3 (rw) */
#define SCU_EICR1_LDEN3_POS                  _SCU_UL(26)
#define SCU_EICR1_LDEN3_LEN                  _SCU_UL(1)

/* SCU_EICR1_EIEN3 (rw) */
#define SCU_EICR1_EIEN3_POS                  _SCU_UL(27)
#define SCU_EICR1_EIEN3_LEN                  _SCU_UL(1)

/* SCU_EICR1_INP3 (rw) */
#define SCU_EICR1_INP3_POS                   _SCU_UL(28)
#define SCU_EICR1_INP3_LEN                   _SCU_UL(3)

/* SCU_EIFR_INTF0 (rh) */
#define SCU_EIFR_INTF0_POS                   _SCU_UL(0)
#define SCU_EIFR_INTF0_LEN                   _SCU_UL(1)

/* SCU_EIFR_INTF1 (rh) */
#define SCU_EIFR_INTF1_POS                   _SCU_UL(1)
#define SCU_EIFR_INTF1_LEN                   _SCU_UL(1)

/* SCU_EIFR_INTF2 (rh) */
#define SCU_EIFR_INTF2_POS                   _SCU_UL(2)
#define SCU_EIFR_INTF2_LEN                   _SCU_UL(1)

/* SCU_EIFR_INTF3 (rh) */
#define SCU_EIFR_INTF3_POS                   _SCU_UL(3)
#define SCU_EIFR_INTF3_LEN                   _SCU_UL(1)

/* SCU_FMR_FS0 (w) */
#define SCU_FMR_FS0_POS                      _SCU_UL(0)
#define SCU_FMR_FS0_LEN                      _SCU_UL(1)

/* SCU_FMR_FS1 (w) */
#define SCU_FMR_FS1_POS                      _SCU_UL(1)
#define SCU_FMR_FS1_LEN                      _SCU_UL(1)

/* SCU_FMR_FS2 (w) */
#define SCU_FMR_FS2_POS                      _SCU_UL(2)
#define SCU_FMR_FS2_LEN                      _SCU_UL(1)

/* SCU_FMR_FS3 (w) */
#define SCU_FMR_FS3_POS                      _SCU_UL(3)
#define SCU_FMR_FS3_LEN                      _SCU_UL(1)

/* SCU_FMR_FC0 (w) */
#define SCU_FMR_FC0_POS                      _SCU_UL(16)
#define SCU_FMR_FC0_LEN                      _SCU_UL(1)

/* SCU_FMR_FC1 (w) */
#define SCU_FMR_FC1_POS                      _SCU_UL(17)
#define SCU_FMR_FC1_LEN                      _SCU_UL(1)

/* SCU_FMR_FC2 (w) */
#define SCU_FMR_FC2_POS                      _SCU_UL(18)
#define SCU_FMR_FC2_LEN                      _SCU_UL(1)

/* SCU_FMR_FC3 (w) */
#define SCU_FMR_FC3_POS                      _SCU_UL(19)
#define SCU_FMR_FC3_LEN                      _SCU_UL(1)

/* SCU_PDRR_PDR0 (rh) */
#define SCU_PDRR_PDR0_POS                    _SCU_UL(0)
#define SCU_PDRR_PDR0_LEN                    _SCU_UL(1)

/* SCU_PDRR_PDR1 (rh) */
#define SCU_PDRR_PDR1_POS                    _SCU_UL(1)
#define SCU_PDRR_PDR1_LEN                    _SCU_UL(1)

/* SCU_PDRR_PDR2 (rh) */
#define SCU_PDRR_PDR2_POS                    _SCU_UL(2)
#define SCU_PDRR_PDR2_LEN                    _SCU_UL(1)

/* SCU_PDRR_PDR3 (rh) */
#define SCU_PDRR_PDR3_POS                    _SCU_UL(3)
#define SCU_PDRR_PDR3_LEN                    _SCU_UL(1)

/* SCU_IGCR0_IPEN00 (rw) */
#define SCU_IGCR0_IPEN00_POS                 _SCU_UL(0)
#define SCU_IGCR0_IPEN00_LEN                 _SCU_UL(1)

/* SCU_IGCR0_IPEN01 (rw) */
#define SCU_IGCR0_IPEN01_POS                 _SCU_UL(1)
#define SCU_IGCR0_IPEN01_LEN                 _SCU_UL(1)

/* SCU_IGCR0_IPEN02 (rw) */
#define SCU_IGCR0_IPEN02_POS                 _SCU_UL(2)
#define SCU_IGCR0_IPEN02_LEN                 _SCU_UL(1)

/* SCU_IGCR0_IPEN03 (rw) */
#define SCU_IGCR0_IPEN03_POS                 _SCU_UL(3)
#define SCU_IGCR0_IPEN03_LEN                 _SCU_UL(1)

/* SCU_IGCR0_GEEN0 (rw) */
#define SCU_IGCR0_GEEN0_POS                  _SCU_UL(13)
#define SCU_IGCR0_GEEN0_LEN                  _SCU_UL(1)

/* SCU_IGCR0_IGP0 (rw) */
#define SCU_IGCR0_IGP0_POS                   _SCU_UL(14)
#define SCU_IGCR0_IGP0_LEN                   _SCU_UL(2)

/* SCU_IGCR0_IPEN10 (rw) */
#define SCU_IGCR0_IPEN10_POS                 _SCU_UL(16)
#define SCU_IGCR0_IPEN10_LEN                 _SCU_UL(1)

/* SCU_IGCR0_IPEN11 (rw) */
#define SCU_IGCR0_IPEN11_POS                 _SCU_UL(17)
#define SCU_IGCR0_IPEN11_LEN                 _SCU_UL(1)

/* SCU_IGCR0_IPEN12 (rw) */
#define SCU_IGCR0_IPEN12_POS                 _SCU_UL(18)
#define SCU_IGCR0_IPEN12_LEN                 _SCU_UL(1)

/* SCU_IGCR0_IPEN13 (rw) */
#define SCU_IGCR0_IPEN13_POS                 _SCU_UL(19)
#define SCU_IGCR0_IPEN13_LEN                 _SCU_UL(1)

/* SCU_IGCR0_GEEN1 (rw) */
#define SCU_IGCR0_GEEN1_POS                  _SCU_UL(29)
#define SCU_IGCR0_GEEN1_LEN                  _SCU_UL(1)

/* SCU_IGCR0_IGP1 (rw) */
#define SCU_IGCR0_IGP1_POS                   _SCU_UL(30)
#define SCU_IGCR0_IGP1_LEN                   _SCU_UL(2)

/* SCU_IGCR1_IPEN20 (rw) */
#define SCU_IGCR1_IPEN20_POS                 _SCU_UL(0)
#define SCU_IGCR1_IPEN20_LEN                 _SCU_UL(1)

/* SCU_IGCR1_IPEN21 (rw) */
#define SCU_IGCR1_IPEN21_POS                 _SCU_UL(1)
#define SCU_IGCR1_IPEN21_LEN                 _SCU_UL(1)

/* SCU_IGCR1_IPEN22 (rw) */
#define SCU_IGCR1_IPEN22_POS                 _SCU_UL(2)
#define SCU_IGCR1_IPEN22_LEN                 _SCU_UL(1)

/* SCU_IGCR1_IPEN23 (rw) */
#define SCU_IGCR1_IPEN23_POS                 _SCU_UL(3)
#define SCU_IGCR1_IPEN23_LEN                 _SCU_UL(1)

/* SCU_IGCR1_GEEN2 (rw) */
#define SCU_IGCR1_GEEN2_POS                  _SCU_UL(13)
#define SCU_IGCR1_GEEN2_LEN                  _SCU_UL(1)

/* SCU_IGCR1_IGP2 (rw) */
#define SCU_IGCR1_IGP2_POS                   _SCU_UL(14)
#define SCU_IGCR1_IGP2_LEN                   _SCU_UL(2)

/* SCU_IGCR1_IPEN30 (rw) */
#define SCU_IGCR1_IPEN30_POS                 _SCU_UL(16)
#define SCU_IGCR1_IPEN30_LEN                 _SCU_UL(1)

/* SCU_IGCR1_IPEN31 (rw) */
#define SCU_IGCR1_IPEN31_POS                 _SCU_UL(17)
#define SCU_IGCR1_IPEN31_LEN                 _SCU_UL(1)

/* SCU_IGCR1_IPEN32 (rw) */
#define SCU_IGCR1_IPEN32_POS                 _SCU_UL(18)
#define SCU_IGCR1_IPEN32_LEN                 _SCU_UL(1)

/* SCU_IGCR1_IPEN33 (rw) */
#define SCU_IGCR1_IPEN33_POS                 _SCU_UL(19)
#define SCU_IGCR1_IPEN33_LEN                 _SCU_UL(1)

/* SCU_IGCR1_GEEN3 (rw) */
#define SCU_IGCR1_GEEN3_POS                  _SCU_UL(29)
#define SCU_IGCR1_GEEN3_LEN                  _SCU_UL(1)

/* SCU_IGCR1_IGP3 (rw) */
#define SCU_IGCR1_IGP3_POS                   _SCU_UL(30)
#define SCU_IGCR1_IGP3_LEN                   _SCU_UL(2)

/* SCU_IOCR_PC0 (rw) */
#define SCU_IOCR_PC0_POS                     _SCU_UL(4)
#define SCU_IOCR_PC0_LEN                     _SCU_UL(4)

/* SCU_IOCR_PC1 (rw) */
#define SCU_IOCR_PC1_POS                     _SCU_UL(12)
#define SCU_IOCR_PC1_LEN                     _SCU_UL(4)

/* SCU_OUT_P0 (rwh) */
#define SCU_OUT_P0_POS                       _SCU_UL(0)
#define SCU_OUT_P0_LEN                       _SCU_UL(1)

/* SCU_OUT_P1 (rwh) */
#define SCU_OUT_P1_POS                       _SCU_UL(1)
#define SCU_OUT_P1_LEN                       _SCU_UL(1)

/* SCU_OMR_PS0 (w) */
#define SCU_OMR_PS0_POS                      _SCU_UL(0)
#define SCU_OMR_PS0_LEN                      _SCU_UL(1)

/* SCU_OMR_PS1 (w) */
#define SCU_OMR_PS1_POS                      _SCU_UL(1)
#define SCU_OMR_PS1_LEN                      _SCU_UL(1)

/* SCU_OMR_PR0 (w) */
#define SCU_OMR_PR0_POS                      _SCU_UL(16)
#define SCU_OMR_PR0_LEN                      _SCU_UL(1)

/* SCU_OMR_PR1 (w) */
#define SCU_OMR_PR1_POS                      _SCU_UL(17)
#define SCU_OMR_PR1_LEN                      _SCU_UL(1)

/* SCU_IN_P0 (rh) */
#define SCU_IN_P0_POS                        _SCU_UL(0)
#define SCU_IN_P0_LEN                        _SCU_UL(1)

/* SCU_IN_P1 (rh) */
#define SCU_IN_P1_POS                        _SCU_UL(1)
#define SCU_IN_P1_LEN                        _SCU_UL(1)

/* SCU_PMCSR_REQSLP (rwh) */
#define SCU_PMCSR_REQSLP_POS                 _SCU_UL(0)
#define SCU_PMCSR_REQSLP_LEN                 _SCU_UL(2)

/* SCU_PMCSR_PMST (rh) */
#define SCU_PMCSR_PMST_POS                   _SCU_UL(8)
#define SCU_PMCSR_PMST_LEN                   _SCU_UL(3)

/* SCU_STSTAT_HWCFG (rh) */
#define SCU_STSTAT_HWCFG_POS                 _SCU_UL(0)
#define SCU_STSTAT_HWCFG_LEN                 _SCU_UL(8)

/* SCU_STSTAT_Mode (rh) */
#define SCU_STSTAT_Mode_POS                  _SCU_UL(15)
#define SCU_STSTAT_Mode_LEN                  _SCU_UL(1)

/* SCU_STSTAT_FCBAE (rh) */
#define SCU_STSTAT_FCBAE_POS                 _SCU_UL(16)
#define SCU_STSTAT_FCBAE_LEN                 _SCU_UL(1)

/* SCU_STSTAT_LUDIS (rh) */
#define SCU_STSTAT_LUDIS_POS                 _SCU_UL(17)
#define SCU_STSTAT_LUDIS_LEN                 _SCU_UL(1)

/* SCU_STSTAT_EXTBEN (rh) */
#define SCU_STSTAT_EXTBEN_POS                _SCU_UL(18)
#define SCU_STSTAT_EXTBEN_LEN                _SCU_UL(1)

/* SCU_STSTAT_TRSTL (rh) */
#define SCU_STSTAT_TRSTL_POS                 _SCU_UL(19)
#define SCU_STSTAT_TRSTL_LEN                 _SCU_UL(1)

/* SCU_STCON_HWCFG (w) */
#define SCU_STCON_HWCFG_POS                  _SCU_UL(0)
#define SCU_STCON_HWCFG_LEN                  _SCU_UL(8)

/* SCU_STCON_SFCBAE (w) */
#define SCU_STCON_SFCBAE_POS                 _SCU_UL(13)
#define SCU_STCON_SFCBAE_LEN                 _SCU_UL(1)

/* SCU_STCON_CFCBAE (w) */
#define SCU_STCON_CFCBAE_POS                 _SCU_UL(14)
#define SCU_STCON_CFCBAE_LEN                 _SCU_UL(1)

/* SCU_STCON_STP (rw) */
#define SCU_STCON_STP_POS                    _SCU_UL(15)
#define SCU_STCON_STP_LEN                    _SCU_UL(1)

/* SCU_PETCR_PENLDRAM (rh) */
#define SCU_PETCR_PENLDRAM_POS               _SCU_UL(0)
#define SCU_PETCR_PENLDRAM_LEN               _SCU_UL(1)

/* SCU_PETCR_PENDTAG (rh) */
#define SCU_PETCR_PENDTAG_POS                _SCU_UL(1)
#define SCU_PETCR_PENDTAG_LEN                _SCU_UL(1)

/* SCU_PETCR_PENSPRAM (rh) */
#define SCU_PETCR_PENSPRAM_POS               _SCU_UL(2)
#define SCU_PETCR_PENSPRAM_LEN               _SCU_UL(1)

/* SCU_PETCR_PENPTAG (rh) */
#define SCU_PETCR_PENPTAG_POS                _SCU_UL(3)
#define SCU_PETCR_PENPTAG_LEN                _SCU_UL(1)

/* SCU_PETCR_PENPMU (rh) */
#define SCU_PETCR_PENPMU_POS                 _SCU_UL(4)
#define SCU_PETCR_PENPMU_LEN                 _SCU_UL(1)

/* SCU_PETCR_PENPRAM (rh) */
#define SCU_PETCR_PENPRAM_POS                _SCU_UL(5)
#define SCU_PETCR_PENPRAM_LEN                _SCU_UL(1)

/* SCU_PETCR_PENCMEM (rh) */
#define SCU_PETCR_PENCMEM_POS                _SCU_UL(6)
#define SCU_PETCR_PENCMEM_LEN                _SCU_UL(1)

/* SCU_PETCR_PENCAN (rh) */
#define SCU_PETCR_PENCAN_POS                 _SCU_UL(7)
#define SCU_PETCR_PENCAN_LEN                 _SCU_UL(1)

/* SCU_PETCR_PENERAY (rh) */
#define SCU_PETCR_PENERAY_POS                _SCU_UL(8)
#define SCU_PETCR_PENERAY_LEN                _SCU_UL(1)

/* SCU_PETSR_PFLLDRAM (rh) */
#define SCU_PETSR_PFLLDRAM_POS               _SCU_UL(0)
#define SCU_PETSR_PFLLDRAM_LEN               _SCU_UL(1)

/* SCU_PETSR_PFLDTAG (rh) */
#define SCU_PETSR_PFLDTAG_POS                _SCU_UL(1)
#define SCU_PETSR_PFLDTAG_LEN                _SCU_UL(1)

/* SCU_PETSR_PFLSPRAM (rh) */
#define SCU_PETSR_PFLSPRAM_POS               _SCU_UL(2)
#define SCU_PETSR_PFLSPRAM_LEN               _SCU_UL(1)

/* SCU_PETSR_PFLPTAG (rh) */
#define SCU_PETSR_PFLPTAG_POS                _SCU_UL(3)
#define SCU_PETSR_PFLPTAG_LEN                _SCU_UL(1)

/* SCU_PETSR_PFLPMU (rh) */
#define SCU_PETSR_PFLPMU_POS                 _SCU_UL(4)
#define SCU_PETSR_PFLPMU_LEN                 _SCU_UL(1)

/* SCU_PETSR_PFLPRAM (rh) */
#define SCU_PETSR_PFLPRAM_POS                _SCU_UL(5)
#define SCU_PETSR_PFLPRAM_LEN                _SCU_UL(1)

/* SCU_PETSR_PFLCMEM (rh) */
#define SCU_PETSR_PFLCMEM_POS                _SCU_UL(6)
#define SCU_PETSR_PFLCMEM_LEN                _SCU_UL(1)

/* SCU_PETSR_PFLCAN (rh) */
#define SCU_PETSR_PFLCAN_POS                 _SCU_UL(7)
#define SCU_PETSR_PFLCAN_LEN                 _SCU_UL(1)

/* SCU_PETSR_PFLERAY (rh) */
#define SCU_PETSR_PFLERAY_POS                _SCU_UL(8)
#define SCU_PETSR_PFLERAY_LEN                _SCU_UL(1)

/* SCU_DTSSTAT_RESULT (rh) */
#define SCU_DTSSTAT_RESULT_POS               _SCU_UL(0)
#define SCU_DTSSTAT_RESULT_LEN               _SCU_UL(10)

/* SCU_DTSSTAT_RDY (rh) */
#define SCU_DTSSTAT_RDY_POS                  _SCU_UL(14)
#define SCU_DTSSTAT_RDY_LEN                  _SCU_UL(1)

/* SCU_DTSSTAT_BUSY (rh) */
#define SCU_DTSSTAT_BUSY_POS                 _SCU_UL(15)
#define SCU_DTSSTAT_BUSY_LEN                 _SCU_UL(1)

/* SCU_DTSCON_PWD (rw) */
#define SCU_DTSCON_PWD_POS                   _SCU_UL(0)
#define SCU_DTSCON_PWD_LEN                   _SCU_UL(1)

/* SCU_DTSCON_PWD (rwh) */
#define SCU_DTSCON_START_POS                 _SCU_UL(1)
#define SCU_DTSCON_START_LEN                 _SCU_UL(1)

/* SCU_WDT_CON0_ENDINIT (rwh) */
#define SCU_WDT_CON0_ENDINIT_POS             _SCU_UL(0)
#define SCU_WDT_CON0_ENDINIT_LEN             _SCU_UL(1)

/* SCU_WDT_CON0_LCK (rw) */
#define SCU_WDT_CON0_LCK_POS                 _SCU_UL(1)
#define SCU_WDT_CON0_LCK_LEN                 _SCU_UL(1)

/* SCU_WDT_CON0_HPW0 (w) */
#define SCU_WDT_CON0_HPW0_POS                _SCU_UL(2)
#define SCU_WDT_CON0_HPW0_LEN                _SCU_UL(2)

/* SCU_WDT_CON0_HPW1 (w) */
#define SCU_WDT_CON0_HPW1_POS                _SCU_UL(4)
#define SCU_WDT_CON0_HPW1_LEN                _SCU_UL(4)

/* SCU_WDT_CON0_PW (rw) */
#define SCU_WDT_CON0_PW_POS                  _SCU_UL(8)
#define SCU_WDT_CON0_PW_LEN                  _SCU_UL(8)

/* SCU_WDT_CON0_REL (rw) */
#define SCU_WDT_CON0_REL_POS                 _SCU_UL(16)
#define SCU_WDT_CON0_REL_LEN                 _SCU_UL(16)

/* SCU_WDT_CON1_CLRIRF (rwh) */
#define SCU_WDT_CON1_CLRIRF_POS              _SCU_UL(0)
#define SCU_WDT_CON1_CLRIRF_LEN              _SCU_UL(1)

/* SCU_WDT_CON1_IR (rw) */
#define SCU_WDT_CON1_IR_POS                  _SCU_UL(2)
#define SCU_WDT_CON1_IR_LEN                  _SCU_UL(1)

/* SCU_WDT_CON1_DR (rw) */
#define SCU_WDT_CON1_DR_POS                  _SCU_UL(3)
#define SCU_WDT_CON1_DR_LEN                  _SCU_UL(1)

/* SCU_WDT_SR_AE (rh) */
#define SCU_WDT_SR_AE_POS                    _SCU_UL(0)
#define SCU_WDT_SR_AE_LEN                    _SCU_UL(1)

/* SCU_WDT_SR_OE (rh) */
#define SCU_WDT_SR_OE_POS                    _SCU_UL(1)
#define SCU_WDT_SR_OE_LEN                    _SCU_UL(1)

/* SCU_WDT_SR_IS (rh) */
#define SCU_WDT_SR_IS_POS                    _SCU_UL(2)
#define SCU_WDT_SR_IS_LEN                    _SCU_UL(1)

/* SCU_WDT_SR_DS (rh) */
#define SCU_WDT_SR_DS_POS                    _SCU_UL(3)
#define SCU_WDT_SR_DS_LEN                    _SCU_UL(1)

/* SCU_WDT_SR_TO (rh) */
#define SCU_WDT_SR_TO_POS                    _SCU_UL(4)
#define SCU_WDT_SR_TO_LEN                    _SCU_UL(1)

/* SCU_WDT_SR_PR (rh) */
#define SCU_WDT_SR_PR_POS                    _SCU_UL(5)
#define SCU_WDT_SR_PR_LEN                    _SCU_UL(1)

/* SCU_WDT_SR_TIM (rh) */
#define SCU_WDT_SR_TIM_POS                   _SCU_UL(16)
#define SCU_WDT_SR_TIM_LEN                   _SCU_UL(16)

/* SCU_EMSR_POL (rw) */
#define SCU_EMSR_POL_POS                     _SCU_UL(0)
#define SCU_EMSR_POL_LEN                     _SCU_UL(1)

/* SCU_EMSR_MODE (rw) */
#define SCU_EMSR_MODE_POS                    _SCU_UL(1)
#define SCU_EMSR_MODE_LEN                    _SCU_UL(1)

/* SCU_EMSR_ENON (rw) */
#define SCU_EMSR_ENON_POS                    _SCU_UL(2)
#define SCU_EMSR_ENON_LEN                    _SCU_UL(1)

/* SCU_EMSR_EMSF (rh) */
#define SCU_EMSR_EMSF_POS                    _SCU_UL(16)
#define SCU_EMSR_EMSF_LEN                    _SCU_UL(1)

/* SCU_EMSR_EMSFM (w) */
#define SCU_EMSR_EMSFM_POS                   _SCU_UL(24)
#define SCU_EMSR_EMSFM_LEN                   _SCU_UL(2)

/* SCU_INTSTAT_WDTI (rh) */
#define SCU_INTSTAT_WDTI_POS                 _SCU_UL(0)
#define SCU_INTSTAT_WDTI_LEN                 _SCU_UL(1)

/* SCU_INTSTAT_ERUI0 (rh) */
#define SCU_INTSTAT_ERUI0_POS                _SCU_UL(1)
#define SCU_INTSTAT_ERUI0_LEN                _SCU_UL(1)

/* SCU_INTSTAT_ERUI1 (rh) */
#define SCU_INTSTAT_ERUI1_POS                _SCU_UL(2)
#define SCU_INTSTAT_ERUI1_LEN                _SCU_UL(1)

/* SCU_INTSTAT_ERUI2 (rh) */
#define SCU_INTSTAT_ERUI2_POS                _SCU_UL(3)
#define SCU_INTSTAT_ERUI2_LEN                _SCU_UL(1)

/* SCU_INTSTAT_ERUI3 (rh) */
#define SCU_INTSTAT_ERUI3_POS                _SCU_UL(4)
#define SCU_INTSTAT_ERUI3_LEN                _SCU_UL(1)

/* SCU_INTSTAT_FL0I (rh) */
#define SCU_INTSTAT_FL0I_POS                 _SCU_UL(5)
#define SCU_INTSTAT_FL0I_LEN                 _SCU_UL(1)

/* SCU_INTSTAT_FL1I (rh) */
#define SCU_INTSTAT_FL1I_POS                 _SCU_UL(6)
#define SCU_INTSTAT_FL1I_LEN                 _SCU_UL(1)

/* SCU_INTSTAT_DTSI (rh) */
#define SCU_INTSTAT_DTSI_POS                 _SCU_UL(7)
#define SCU_INTSTAT_DTSI_LEN                 _SCU_UL(1)

/* SCU_INTSET_WDTI (w) */
#define SCU_INTSET_WDTI_POS                  _SCU_UL(0)
#define SCU_INTSET_WDTI_LEN                  _SCU_UL(1)

/* SCU_INTSET_ERUI0 (w) */
#define SCU_INTSET_ERUI0_POS                 _SCU_UL(1)
#define SCU_INTSET_ERUI0_LEN                 _SCU_UL(1)

/* SCU_INTSET_ERUI1 (w) */
#define SCU_INTSET_ERUI1_POS                 _SCU_UL(2)
#define SCU_INTSET_ERUI1_LEN                 _SCU_UL(1)

/* SCU_INTSET_ERUI2 (w) */
#define SCU_INTSET_ERUI2_POS                 _SCU_UL(3)
#define SCU_INTSET_ERUI2_LEN                 _SCU_UL(1)

/* SCU_INTSET_ERUI3 (w) */
#define SCU_INTSET_ERUI3_POS                 _SCU_UL(4)
#define SCU_INTSET_ERUI3_LEN                 _SCU_UL(1)

/* SCU_INTSET_FL0I (w) */
#define SCU_INTSET_FL0I_POS                  _SCU_UL(5)
#define SCU_INTSET_FL0I_LEN                  _SCU_UL(1)

/* SCU_INTSET_FL1I (w) */
#define SCU_INTSET_FL1I_POS                  _SCU_UL(6)
#define SCU_INTSET_FL1I_LEN                  _SCU_UL(1)

/* SCU_INTSET_DTSI (w) */
#define SCU_INTSET_DTSI_POS                  _SCU_UL(7)
#define SCU_INTSET_DTSI_LEN                  _SCU_UL(1)

/* SCU_INTCLR_WDTI (w) */
#define SCU_INTCLR_WDTI_POS                  _SCU_UL(0)
#define SCU_INTCLR_WDTI_LEN                  _SCU_UL(1)

/* SCU_INTCLR_ERUI0 (w) */
#define SCU_INTCLR_ERUI0_POS                 _SCU_UL(1)
#define SCU_INTCLR_ERUI0_LEN                 _SCU_UL(1)

/* SCU_INTCLR_ERUI1 (w) */
#define SCU_INTCLR_ERUI1_POS                 _SCU_UL(2)
#define SCU_INTCLR_ERUI1_LEN                 _SCU_UL(1)

/* SCU_INTCLR_ERUI2 (w) */
#define SCU_INTCLR_ERUI2_POS                 _SCU_UL(3)
#define SCU_INTCLR_ERUI2_LEN                 _SCU_UL(1)

/* SCU_INTCLR_ERUI3 (w) */
#define SCU_INTCLR_ERUI3_POS                 _SCU_UL(4)
#define SCU_INTCLR_ERUI3_LEN                 _SCU_UL(1)

/* SCU_INTCLR_FL0I (w) */
#define SCU_INTCLR_FL0I_POS                  _SCU_UL(5)
#define SCU_INTCLR_FL0I_LEN                  _SCU_UL(1)

/* SCU_INTCLR_FL1I (w) */
#define SCU_INTCLR_FL1I_POS                  _SCU_UL(6)
#define SCU_INTCLR_FL1I_LEN                  _SCU_UL(1)

/* SCU_INTCLR_DTSI (w) */
#define SCU_INTCLR_DTSI_POS                  _SCU_UL(7)
#define SCU_INTCLR_DTSI_LEN                  _SCU_UL(1)

/* SCU_INTDIS_WDTI (rw) */
#define SCU_INTDIS_WDTI_POS                  _SCU_UL(0)
#define SCU_INTDIS_WDTI_LEN                  _SCU_UL(1)

/* SCU_INTDIS_ERUI0 (rw) */
#define SCU_INTDIS_ERUI0_POS                 _SCU_UL(1)
#define SCU_INTDIS_ERUI0_LEN                 _SCU_UL(1)

/* SCU_INTDIS_ERUI1 (rw) */
#define SCU_INTDIS_ERUI1_POS                 _SCU_UL(2)
#define SCU_INTDIS_ERUI1_LEN                 _SCU_UL(1)

/* SCU_INTDIS_ERUI2 (rw) */
#define SCU_INTDIS_ERUI2_POS                 _SCU_UL(3)
#define SCU_INTDIS_ERUI2_LEN                 _SCU_UL(1)

/* SCU_INTDIS_ERUI3 (rw) */
#define SCU_INTDIS_ERUI3_POS                 _SCU_UL(4)
#define SCU_INTDIS_ERUI3_LEN                 _SCU_UL(1)

/* SCU_INTDIS_FL0I (rw) */
#define SCU_INTDIS_FL0I_POS                  _SCU_UL(5)
#define SCU_INTDIS_FL0I_LEN                  _SCU_UL(1)

/* SCU_INTDIS_FL1I (rw) */
#define SCU_INTDIS_FL1I_POS                  _SCU_UL(6)
#define SCU_INTDIS_FL1I_LEN                  _SCU_UL(1)

/* SCU_INTDIS_DTSI (rw) */
#define SCU_INTDIS_DTSI_POS                  _SCU_UL(7)
#define SCU_INTDIS_DTSI_LEN                  _SCU_UL(1)

/* SCU_INTNP_WDT (rw) */
#define SCU_INTNP_WDT_POS                    _SCU_UL(0)
#define SCU_INTNP_WDT_LEN                    _SCU_UL(2)

/* SCU_INTNP_ERU0 (rw) */
#define SCU_INTNP_ERU0_POS                   _SCU_UL(2)
#define SCU_INTNP_ERU0_LEN                   _SCU_UL(2)

/* SCU_INTNP_ERU1 (rw) */
#define SCU_INTNP_ERU1_POS                   _SCU_UL(4)
#define SCU_INTNP_ERU1_LEN                   _SCU_UL(2)

/* SCU_INTNP_ERU2 (rw) */
#define SCU_INTNP_ERU2_POS                   _SCU_UL(6)
#define SCU_INTNP_ERU2_LEN                   _SCU_UL(2)

/* SCU_INTNP_ERU3 (rw) */
#define SCU_INTNP_ERU3_POS                   _SCU_UL(8)
#define SCU_INTNP_ERU3_LEN                   _SCU_UL(2)

/* SCU_INTNP_FL0 (rw) */
#define SCU_INTNP_FL0_POS                    _SCU_UL(10)
#define SCU_INTNP_FL0_LEN                    _SCU_UL(2)

/* SCU_INTNP_FL1 (rw) */
#define SCU_INTNP_FL1_POS                    _SCU_UL(12)
#define SCU_INTNP_FL1_LEN                    _SCU_UL(2)

/* SCU_INTNP_DTS (rw) */
#define SCU_INTNP_DTS_POS                    _SCU_UL(14)
#define SCU_INTNP_DTS_LEN                    _SCU_UL(2)

/* SCU_TRAPSTAT_ESR0T (rh) */
#define SCU_TRAPSTAT_ESR0T_POS               _SCU_UL(0)
#define SCU_TRAPSTAT_ESR0T_LEN               _SCU_UL(1)

/* SCU_TRAPSTAT_ESR1T (rh) */
#define SCU_TRAPSTAT_ESR1T_POS               _SCU_UL(1)
#define SCU_TRAPSTAT_ESR1T_LEN               _SCU_UL(1)

/* SCU_TRAPSTAT_WDTT (rh) */
#define SCU_TRAPSTAT_WDTT_POS                _SCU_UL(3)
#define SCU_TRAPSTAT_WDTT_LEN                _SCU_UL(1)

/* SCU_TRAPSTAT_PET (rh) */
#define SCU_TRAPSTAT_PET_POS                 _SCU_UL(4)
#define SCU_TRAPSTAT_PET_LEN                 _SCU_UL(1)

/* SCU_TRAPSTAT_OSCLWDTT (rh) */
#define SCU_TRAPSTAT_OSCLWDTT_POS            _SCU_UL(5)
#define SCU_TRAPSTAT_OSCLWDTT_LEN            _SCU_UL(1)

/* SCU_TRAPSTAT_OSCHWDTT (rh) */
#define SCU_TRAPSTAT_OSCHWDTT_POS            _SCU_UL(6)
#define SCU_TRAPSTAT_OSCHWDTT_LEN            _SCU_UL(1)

/* SCU_TRAPSTAT_OSCSPWDTT (rh) */
#define SCU_TRAPSTAT_OSCSPWDTT_POS           _SCU_UL(7)
#define SCU_TRAPSTAT_OSCSPWDTT_LEN           _SCU_UL(1)

/* SCU_TRAPSTAT_SYSVCOLCKT (rh) */
#define SCU_TRAPSTAT_SYSVCOLCKT_POS          _SCU_UL(8)
#define SCU_TRAPSTAT_SYSVCOLCKT_LEN          _SCU_UL(1)

/* SCU_TRAPSTAT_ERAYVCOLCKT (rh) */
#define SCU_TRAPSTAT_ERAYVCOLCKT_POS         _SCU_UL(9)
#define SCU_TRAPSTAT_ERAYVCOLCKT_LEN         _SCU_UL(1)

/* SCU_TRAPSET_ESR0T (w) */
#define SCU_TRAPSET_ESR0T_POS                _SCU_UL(0)
#define SCU_TRAPSET_ESR0T_LEN                _SCU_UL(1)

/* SCU_TRAPSET_ESR1T (w) */
#define SCU_TRAPSET_ESR1T_POS                _SCU_UL(1)
#define SCU_TRAPSET_ESR1T_LEN                _SCU_UL(1)

/* SCU_TRAPSET_WDTT (w) */
#define SCU_TRAPSET_WDTT_POS                 _SCU_UL(3)
#define SCU_TRAPSET_WDTT_LEN                 _SCU_UL(1)

/* SCU_TRAPSET_PET (w) */
#define SCU_TRAPSET_PET_POS                  _SCU_UL(4)
#define SCU_TRAPSET_PET_LEN                  _SCU_UL(1)

/* SCU_TRAPSET_OSCLWDTT (w) */
#define SCU_TRAPSET_OSCLWDTT_POS             _SCU_UL(5)
#define SCU_TRAPSET_OSCLWDTT_LEN             _SCU_UL(1)

/* SCU_TRAPSET_OSCHWDTT (w) */
#define SCU_TRAPSET_OSCHWDTT_POS             _SCU_UL(6)
#define SCU_TRAPSET_OSCHWDTT_LEN             _SCU_UL(1)

/* SCU_TRAPSET_OSCSPWDTT (w) */
#define SCU_TRAPSET_OSCSPWDTT_POS            _SCU_UL(7)
#define SCU_TRAPSET_OSCSPWDTT_LEN            _SCU_UL(1)

/* SCU_TRAPSET_SYSVCOLCKT (w) */
#define SCU_TRAPSET_SYSVCOLCKT_POS           _SCU_UL(8)
#define SCU_TRAPSET_SYSVCOLCKT_LEN           _SCU_UL(1)

/* SCU_TRAPSET_ERAYVCOLCKT (w) */
#define SCU_TRAPSET_ERAYVCOLCKT_POS          _SCU_UL(9)
#define SCU_TRAPSET_ERAYVCOLCKT_LEN          _SCU_UL(1)

/* SCU_TRAPCLR_ESR0T (w) */
#define SCU_TRAPCLR_ESR0T_POS                _SCU_UL(0)
#define SCU_TRAPCLR_ESR0T_LEN                _SCU_UL(1)

/* SCU_TRAPCLR_ESR1T (w) */
#define SCU_TRAPCLR_ESR1T_POS                _SCU_UL(1)
#define SCU_TRAPCLR_ESR1T_LEN                _SCU_UL(1)

/* SCU_TRAPCLR_WDTT (w) */
#define SCU_TRAPCLR_WDTT_POS                 _SCU_UL(3)
#define SCU_TRAPCLR_WDTT_LEN                 _SCU_UL(1)

/* SCU_TRAPCLR_PET (w) */
#define SCU_TRAPCLR_PET_POS                  _SCU_UL(4)
#define SCU_TRAPCLR_PET_LEN                  _SCU_UL(1)

/* SCU_TRAPCLR_OSCLWDTT (w) */
#define SCU_TRAPCLR_OSCLWDTT_POS             _SCU_UL(5)
#define SCU_TRAPCLR_OSCLWDTT_LEN             _SCU_UL(1)

/* SCU_TRAPCLR_OSCHWDTT (w) */
#define SCU_TRAPCLR_OSCHWDTT_POS             _SCU_UL(6)
#define SCU_TRAPCLR_OSCHWDTT_LEN             _SCU_UL(1)

/* SCU_TRAPCLR_OSCSPWDTT (w) */
#define SCU_TRAPCLR_OSCSPWDTT_POS            _SCU_UL(7)
#define SCU_TRAPCLR_OSCSPWDTT_LEN            _SCU_UL(1)

/* SCU_TRAPCLR_SYSVCOLCKT (w) */
#define SCU_TRAPCLR_SYSVCOLCKT_POS           _SCU_UL(8)
#define SCU_TRAPCLR_SYSVCOLCKT_LEN           _SCU_UL(1)

/* SCU_TRAPCLR_ERAYVCOLCKT (w) */
#define SCU_TRAPCLR_ERAYVCOLCKT_POS          _SCU_UL(9)
#define SCU_TRAPCLR_ERAYVCOLCKT_LEN          _SCU_UL(1)

/* SCU_TRAPDIS_ESR0T (rw) */
#define SCU_TRAPDIS_ESR0T_POS                _SCU_UL(0)
#define SCU_TRAPDIS_ESR0T_LEN                _SCU_UL(1)

/* SCU_TRAPDIS_ESR1T (rw) */
#define SCU_TRAPDIS_ESR1T_POS                _SCU_UL(1)
#define SCU_TRAPDIS_ESR1T_LEN                _SCU_UL(1)

/* SCU_TRAPDIS_WDTT (rw) */
#define SCU_TRAPDIS_WDTT_POS                 _SCU_UL(3)
#define SCU_TRAPDIS_WDTT_LEN                 _SCU_UL(1)

/* SCU_TRAPDIS_PET (rw) */
#define SCU_TRAPDIS_PET_POS                  _SCU_UL(4)
#define SCU_TRAPDIS_PET_LEN                  _SCU_UL(1)

/* SCU_TRAPDIS_OSCLWDTT (rw) */
#define SCU_TRAPDIS_OSCLWDTT_POS             _SCU_UL(5)
#define SCU_TRAPDIS_OSCLWDTT_LEN             _SCU_UL(1)

/* SCU_TRAPDIS_OSCHWDTT (rw) */
#define SCU_TRAPDIS_OSCHWDTT_POS             _SCU_UL(6)
#define SCU_TRAPDIS_OSCHWDTT_LEN             _SCU_UL(1)

/* SCU_TRAPDIS_OSCSPWDTT (rw) */
#define SCU_TRAPDIS_OSCSPWDTT_POS            _SCU_UL(7)
#define SCU_TRAPDIS_OSCSPWDTT_LEN            _SCU_UL(1)

/* SCU_TRAPDIS_SYSVCOLCKT (rw) */
#define SCU_TRAPDIS_SYSVCOLCKT_POS           _SCU_UL(8)
#define SCU_TRAPDIS_SYSVCOLCKT_LEN           _SCU_UL(1)

/* SCU_TRAPDIS_ERAYVCOLCKT (rw) */
#define SCU_TRAPDIS_ERAYVCOLCKT_POS          _SCU_UL(9)
#define SCU_TRAPDIS_ERAYVCOLCKT_LEN          _SCU_UL(1)

/* SCU_CHIPID_CHREV (r) */
#define SCU_CHIPID_CHREV_POS                 _SCU_UL(0)
#define SCU_CHIPID_CHREV_LEN                 _SCU_UL(8)

/* SCU_CHIPID_CHID (rw) */
#define SCU_CHIPID_CHID_POS                  _SCU_UL(8)
#define SCU_CHIPID_CHID_LEN                  _SCU_UL(8)

/* SCU_CHIPID_EEA (rh) */
#define SCU_CHIPID_EEA_POS                   _SCU_UL(16)
#define SCU_CHIPID_EEA_LEN                   _SCU_UL(1)

/* SCU_MANID_DEPT (r) */
#define SCU_MANID_DEPT_POS                   _SCU_UL(0)
#define SCU_MANID_DEPT_LEN                   _SCU_UL(5)

/* SCU_MANID_MANUF (r) */
#define SCU_MANID_MANUF_POS                  _SCU_UL(5)
#define SCU_MANID_MANUF_LEN                  _SCU_UL(11)

/* SCU_SRC3_SRPN (rw) */
#define SCU_SRC3_SRPN_POS                    _SCU_UL(0)
#define SCU_SRC3_SRPN_LEN                    _SCU_UL(8)

/* SCU_SRC3_TOS (rw) */
#define SCU_SRC3_TOS_POS                     _SCU_UL(10)
#define SCU_SRC3_TOS_LEN                     _SCU_UL(1)

/* SCU_SRC3_SRE (rw) */
#define SCU_SRC3_SRE_POS                     _SCU_UL(12)
#define SCU_SRC3_SRE_LEN                     _SCU_UL(1)

/* SCU_SRC3_SRR (rh) */
#define SCU_SRC3_SRR_POS                     _SCU_UL(13)
#define SCU_SRC3_SRR_LEN                     _SCU_UL(1)

/* SCU_SRC3_CLRR (w) */
#define SCU_SRC3_CLRR_POS                    _SCU_UL(14)
#define SCU_SRC3_CLRR_LEN                    _SCU_UL(1)

/* SCU_SRC3_SETR (w) */
#define SCU_SRC3_SETR_POS                    _SCU_UL(15)
#define SCU_SRC3_SETR_LEN                    _SCU_UL(1)

/* SCU_SRC2_SRPN (rw) */
#define SCU_SRC2_SRPN_POS                    _SCU_UL(0)
#define SCU_SRC2_SRPN_LEN                    _SCU_UL(8)

/* SCU_SRC2_TOS (rw) */
#define SCU_SRC2_TOS_POS                     _SCU_UL(10)
#define SCU_SRC2_TOS_LEN                     _SCU_UL(1)

/* SCU_SRC2_SRE (rw) */
#define SCU_SRC2_SRE_POS                     _SCU_UL(12)
#define SCU_SRC2_SRE_LEN                     _SCU_UL(1)

/* SCU_SRC2_SRR (rh) */
#define SCU_SRC2_SRR_POS                     _SCU_UL(13)
#define SCU_SRC2_SRR_LEN                     _SCU_UL(1)

/* SCU_SRC2_CLRR (w) */
#define SCU_SRC2_CLRR_POS                    _SCU_UL(14)
#define SCU_SRC2_CLRR_LEN                    _SCU_UL(1)

/* SCU_SRC2_SETR (w) */
#define SCU_SRC2_SETR_POS                    _SCU_UL(15)
#define SCU_SRC2_SETR_LEN                    _SCU_UL(1)

/* SCU_SRC1_SRPN (rw) */
#define SCU_SRC1_SRPN_POS                    _SCU_UL(0)
#define SCU_SRC1_SRPN_LEN                    _SCU_UL(8)

/* SCU_SRC1_TOS (rw) */
#define SCU_SRC1_TOS_POS                     _SCU_UL(10)
#define SCU_SRC1_TOS_LEN                     _SCU_UL(1)

/* SCU_SRC1_SRE (rw) */
#define SCU_SRC1_SRE_POS                     _SCU_UL(12)
#define SCU_SRC1_SRE_LEN                     _SCU_UL(1)

/* SCU_SRC1_SRR (rh) */
#define SCU_SRC1_SRR_POS                     _SCU_UL(13)
#define SCU_SRC1_SRR_LEN                     _SCU_UL(1)

/* SCU_SRC1_CLRR (w) */
#define SCU_SRC1_CLRR_POS                    _SCU_UL(14)
#define SCU_SRC1_CLRR_LEN                    _SCU_UL(1)

/* SCU_SRC1_SETR (w) */
#define SCU_SRC1_SETR_POS                    _SCU_UL(15)
#define SCU_SRC1_SETR_LEN                    _SCU_UL(1)

/* SCU_SRC0_SRPN (rw) */
#define SCU_SRC0_SRPN_POS                    _SCU_UL(0)
#define SCU_SRC0_SRPN_LEN                    _SCU_UL(8)

/* SCU_SRC0_TOS (rw) */
#define SCU_SRC0_TOS_POS                     _SCU_UL(10)
#define SCU_SRC0_TOS_LEN                     _SCU_UL(1)

/* SCU_SRC0_SRE (rw) */
#define SCU_SRC0_SRE_POS                     _SCU_UL(12)
#define SCU_SRC0_SRE_LEN                     _SCU_UL(1)

/* SCU_SRC0_SRR (rh) */
#define SCU_SRC0_SRR_POS                     _SCU_UL(13)
#define SCU_SRC0_SRR_LEN                     _SCU_UL(1)

/* SCU_SRC0_CLRR (w) */
#define SCU_SRC0_CLRR_POS                    _SCU_UL(14)
#define SCU_SRC0_CLRR_LEN                    _SCU_UL(1)

/* SCU_SRC0_SETR (w) */
#define SCU_SRC0_SETR_POS                    _SCU_UL(15)
#define SCU_SRC0_SETR_LEN                    _SCU_UL(1)

#endif
