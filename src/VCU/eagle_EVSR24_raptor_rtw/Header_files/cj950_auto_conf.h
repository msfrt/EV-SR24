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
 * $Filename__:cj950_template_conf.ht$ 
 * 
 * $Author____:EHF2SI$ 
 * 
 * $Function__:first new version$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:EHF2SI$ 
 * $Date______:28.10.2010$ 
 * $Class_____:CONFTPLHDR$ 
 * $Name______:cj950_template_conf$ 
 * $Variant___:1.0.0$ 
 * $Revision__:1$ 
 * $Type______:HT$ 
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
 * 1.0.0; 1     28.10.2010 EHF2SI
 *   adaptations
 * 
 * 1.0.0; 0     22.09.2010 EHF2SI
 *   new created
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _CJ950_AUTO_CONF_H
#define _CJ950_AUTO_CONF_H


/**
 ***************************************************************************************************
 * \moduledescription
 * Configuration of the CJ950 device driver module.
 * Generated with cj950_process.pm 1.0.0
 *
 * scope CONF
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */



#define CJ950_NUM_CHIPS 3


/* Register init-values */
#define CJ950_STG1516_USED      /* make necessary c-function visible */
#define CJ950_OUT15_MSK_1   (~(0x03u << CJ950_DATA_OFFSET)) /* Access-Mask for powerstage 15 */
#define CJ950_SWITCHON15_1  (0x02 << CJ950_DATA_OFFSET) /* reset delay */
#define CJ950_SWITCHOFF15_1 (0x01 << CJ950_DATA_OFFSET) /* SwitchOff-Value for powerstage 15 */
#define CJ950_KEEPST_1_15   (0x03 << CJ950_DATA_OFFSET) /* SwitchOff-Value for powerstage 15 */

#define CJ950_OUT16_MSK_1   (~(0x30u << CJ950_DATA_OFFSET)) /* Access-Mask for powerstage 16 */
#define CJ950_SWITCHON16_1  (0x20 << CJ950_DATA_OFFSET) /* reset delay */
#define CJ950_SWITCHOFF16_1 (0x10 << CJ950_DATA_OFFSET) /* SwitchOff-Value for powerstage 16 */
#define CJ950_KEEPST_1_16   (0x30 << CJ950_DATA_OFFSET) /* SwitchOff-Value for powerstage 16 */

#define CJ950_OUT15_MSK_2   (~(0x03u << CJ950_DATA_OFFSET)) /* Access-Mask for powerstage 15 */
#define CJ950_SWITCHON15_2  (0x00 << CJ950_DATA_OFFSET) /* no delay    */
#define CJ950_SWITCHOFF15_2 (0x01 << CJ950_DATA_OFFSET) /* SwitchOff-Value for powerstage 15 */
#define CJ950_KEEPST_2_15   (0x03 << CJ950_DATA_OFFSET) /* SwitchOff-Value for powerstage 15 */

#define CJ950_OUT16_MSK_2   (~(0x30u << CJ950_DATA_OFFSET)) /* Access-Mask for powerstage 16 */
#define CJ950_SWITCHON16_2  (0x00 << CJ950_DATA_OFFSET) /* no delay    */
#define CJ950_SWITCHOFF16_2 (0x10 << CJ950_DATA_OFFSET) /* SwitchOff-Value for powerstage 16 */
#define CJ950_KEEPST_2_16   (0x30 << CJ950_DATA_OFFSET) /* SwitchOff-Value for powerstage 16 */



/*
configuration register OUT1516
reset value 1111 1111
            AAAA AAAA
            |||| ||||
            |||| |||+- OUT15_CONTROL,  see Table below
            |||| ||+-- OUT15_DELAY,    see Table below
            |||| |+--- OUT15_DIAC     : 0...Diagnose current switched off, 1...Diagnose current switched on
            |||| +---- OUT15_SCB      : 0...Currentlimitation,             1...SwitchOff (in case of SCB)
            |||+------ OUT16_CONTROL,  see Table below
            ||+------- OUT16_DELAY,    see Table below
            |+-------- OUT16_DIAC     : 0...Diagnose current switched off, 1...Diagnose current switched on
            +--------- OUT16_SCB      : 0...Currentlimitation,             1...SwitchOff (in case of SCB)

Output stage switching: "Delay used for switching Powerstage 15/16"
-----------------------
+-------------+---------------+------------------------------+
| OUTxx_DELAY | OUTxx_CONTROL |          Description         |
+-------------+---------------+------------------------------+
|      1      |       1       | keep state, (Softreset)      |
+-------------+---------------+------------------------------+
|      0      |       1       | switch off                   |
+-------------+---------------+------------------------------+
|      1      |       0       | switch on, restart timer     |
+-------------+---------------+------------------------------+
|      0      |       0       | switch on, no delay          |
+-------------+---------------+------------------------------+

*/
/* initialization of 1.CJ950 */
#define CJ950_INITVAL_CONREG1_1 (0xFF << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG2_1 (0xFF << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG3_1 (0x4F << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG4_1 (0xF3 << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_OUT1516_1 (0xDD << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_KEEPSTATE_OUT1516_1 (0xFF << CJ950_DATA_OFFSET)

/* initialization of 2.CJ950 */
#define CJ950_INITVAL_CONREG1_2 (0xFB << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG2_2 (0xFF << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG3_2 (0x77 << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG4_2 (0xF3 << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_OUT1516_2 (0xDD << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_KEEPSTATE_OUT1516_2 (0xDD << CJ950_DATA_OFFSET)

/* initialization of 3.CJ950 */
#define CJ950_INITVAL_CONREG1_3 (0xFF << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG2_3 (0xFF << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG3_3 (0x7F << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_CONREG4_3 (0xF3 << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_OUT1516_3 (0xFF << CJ950_DATA_OFFSET)
#define CJ950_INITVAL_KEEPSTATE_OUT1516_3 (0xFF << CJ950_DATA_OFFSET)


/*
configuration register CONREG1
reset value 1111 1111
            AAAA AAAA
            |||| ||||
            |||| |||+- Powerstage1 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |||| ||+-- Powerstage2 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |||| |+--- Powerstage3 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |||| +---- Powerstage4 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |||+------ Powerstage5 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            ||+------- Powerstage6 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |+-------- Powerstage7 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            +--------- Powerstage8 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)

configuration register CONREG2
reset value 1111 1111
            AAAA AAAA
            |||| ||||
            |||| |||+- Powerstage9 : 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |||| ||+-- Powerstage10: 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |||| |+--- Powerstage11: 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |||| +---- Powerstage12: 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |||+------ Powerstage13: 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            ||+------- Powerstage14: 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            |+-------- Powerstage17: 0...Currentlimitation, 1...SwitchOff (in case of SCB)
            +--------- Powerstage18: 0...Currentlimitation, 1...SwitchOff (in case of SCB)

configuration register CONREG3
reset value 1111 1111
            AAAA AAAA
            |||| ||||
            |||| |||+- Powerstage11:   0...Diagnose current switched off,   1...Diagnose current switched on
            |||| ||+-- Powerstage12:   0...Diagnose current switched off,   1...Diagnose current switched on
            |||| |+--- Powerstage13:   0...Diagnose current switched off,   1...Diagnose current switched on
            |||| +---- Powerstage14:   0...Diagnose current switched off,   1...Diagnose current switched on
            |||+------ Powerstage17:   0...Diagnose current switched off,   1...Diagnose current switched on
            ||+------- Powerstage18:   0...Diagnose current switched off,   1...Diagnose current switched on
            |+-------- DELAYIN_GLITCH: 1: Long glitch filtertime;           0: short glitch filtertime
            +--------- EXT_DIA_SCB:    1: Extended diagnosis for SCB activ; 0: Extended diagnosis for SCB inactiv

configuration register CONREG4
reset value 1111 0111
            AAAA AAAA
            |||| ||||
            |||| |||+- DIS2_CONF0, see Table below
            |||| ||+-- DIS2_CONF1, see Table below
            |||| |+--- FCL_CONF0,  see Table below
            |||| +---- FCL_CONF1,  see Table below
            |||+------ ABE_IMPACT: 1...ABE and VDD disable OUT1..18;  0...ABE and VDD disable OUT1..18 with delay
            ||+------- MON_TEST:   0...VDD monitoring test inactive,  1...VDD monitoring test active
            |+-------- MON_THRES:  0...Test lowert threshold,         1...Test upper threshold
            +--------- MON_LATCH:  0...Overvoltage error not latched, 1...Overvoltage error latched


DELAYIN-Delay: "Delay of DELAYIN"
-----------
+---------------+---------------+-------------------------------+
| DELAYIN_CONF1 | DELAYIN_CONF0 |          Description          |
+---------------+---------------+-------------------------------+
|      1        |      1        | LongDelay        (800-1600ms) |
+---------------+---------------+-------------------------------+
|      0        |      1        | Medium_LongDelay  (400-800ms) |
+---------------+---------------+-------------------------------+
|      1        |      0        | Medium_ShortDelay (200-400ms) |
+---------------+---------------+-------------------------------+
|      0        |      0        | ShortDelay        (100-200ms) |
+---------------+---------------+-------------------------------+

FCL-Delay: "Upstream frequency divider"
----------
+----------+-----------+---------------------------+
| FCL_CONF0| FCL_CONF1 |        Description        |
+----------+-----------+---------------------------+
|    1     |     0     | Upstream clock is fcl/128 |
+----------+-----------+---------------------------+
|    0     |     1     | Upstream clock is fcl/64  |
+----------+-----------+---------------------------+
|    0     |     0     | Upstream clock is fcl/32  |
+----------+-----------+---------------------------+
|    1     |     1     | Upstream clock is fcl/16  |
+----------+-----------+---------------------------+

*/

/* routing macros for DIO-module */
#define CJ950_DIOSET_1_1(val)   (Msc_SetDD(MSC_SIG_A_P_EV1, (val)))
#define CJ950_DIOSET_1_2(val)   (Msc_SetDD(MSC_SIG_A_P_EV2, (val)))
#define CJ950_DIOSET_1_3(val)   (Msc_SetDD(MSC_SIG_A_P_EV3, (val)))
#define CJ950_DIOSET_1_4(val)   (Msc_SetDD(MSC_SIG_A_P_EV4, (val)))
#define CJ950_DIOSET_1_5(val)   (Msc_SetDD(MSC_SIG_O_S_K072, (val)))
#define CJ950_DIOSET_1_6(val)   (Msc_SetDD(MSC_SIG_O_S_K020, (val)))
#define CJ950_DIOSET_1_7(val)   (Msc_SetDD(MSC_SIG_O_S_K036, (val)))
#define CJ950_DIOSET_1_8(val)   (Msc_SetDD(MSC_SIG_O_S_K055, (val)))
#define CJ950_DIOSET_1_9(val)   (Msc_SetDD(MSC_SIG_A_P_EV5, (val)))
#define CJ950_DIOSET_1_10(val)  (Msc_SetDD(MSC_SIG_O_S_K038, (val)))
#define CJ950_DIOSET_1_11(val)  (Msc_SetDD(MSC_SIG_O_S_K037, (val)))
#define CJ950_DIOSET_1_12(val)  (Msc_SetDD(MSC_SIG_O_S_K056, (val)))
#define CJ950_DIOSET_1_13(val)  (Msc_SetDD(MSC_SIG_O_S_K039, (val)))
#define CJ950_DIOSET_1_14(val)  (Msc_SetDD(MSC_SIG_O_S_K012, (val)))
#define CJ950_DIOSET_1_15(val)   (Cj950_DioSetBitField1516((uint32)1, (uint32)CJ950_OUT15_MSK_1, (uint32)((((val)!=1)?CJ950_SWITCHON15_1:CJ950_SWITCHOFF15_1))))
#define CJ950_DIOSET_1_16(val)   (Cj950_DioSetBitField1516((uint32)1, (uint32)CJ950_OUT16_MSK_1, (uint32)((((val)!=1)?CJ950_SWITCHON16_1:CJ950_SWITCHOFF16_1))))
#define CJ950_DIOSET_1_17(val)  (Msc_SetDD(MSC_SIG_A_S_HFMSE, (val)))
#define CJ950_DIOSET_1_18(val)  (Msc_SetDD(MSC_SIG_A_S_HFMSE2, (val)))
#define CJ950_DIOSET_2_1(val)   (Msc_SetDD(MSC_SIG_A_P_EV6, (val)))
#define CJ950_DIOSET_2_2(val)   (Msc_SetDD(MSC_SIG_O_F_ECUA045, (val)))
#define CJ950_DIOSET_2_3(val)   (Msc_SetDD(MSC_SIG_CJ135_HEATER_2, (val)))
#define CJ950_DIOSET_2_4(val)   (Msc_SetDD(MSC_SIG_O_F_ECUK057, (val)))
#define CJ950_DIOSET_2_5(val)   (Msc_SetDD(MSC_SIG_O_F_ECUA046, (val)))
#define CJ950_DIOSET_2_6(val)   (Msc_SetDD(MSC_SIG_O_S_K073, (val)))
#define CJ950_DIOSET_2_7(val)   (Msc_SetDD(MSC_SIG_O_F_ECUA024, (val)))
#define CJ950_DIOSET_2_8(val)   (Msc_SetDD(MSC_SIG_O_S_A033, (val)))
#define CJ950_DIOSET_2_9(val)   (Msc_SetDD(MSC_SIG_O_F_ECUA010, (val)))
#define CJ950_DIOSET_2_10(val)  (Msc_SetDD(MSC_SIG_O_F_ECUA054, (val)))
#define CJ950_DIOSET_2_11(val)  (Msc_SetDD(MSC_SIG_O_S_K071, (val)))
#define CJ950_DIOSET_2_12(val)  (Msc_SetDD(MSC_SIG_O_F_ECUK088, (val)))
#define CJ950_DIOSET_2_13(val)  (Msc_SetDD(MSC_SIG_O_S_K021, (val)))
#define CJ950_DIOSET_2_14(val)  (Msc_SetDD(MSC_SIG_O_F_ECUK084, (val)))
#define CJ950_DIOSET_2_15(val)   (Cj950_DioSetBitField1516((uint32)2, (uint32)CJ950_OUT15_MSK_2, (uint32)((((val)!=1)?CJ950_SWITCHON15_2:CJ950_SWITCHOFF15_2))))
#define CJ950_DIOSET_2_16(val)   (Cj950_DioSetBitField1516((uint32)2, (uint32)CJ950_OUT16_MSK_2, (uint32)((((val)!=1)?CJ950_SWITCHON16_2:CJ950_SWITCHOFF16_2))))
#define CJ950_DIOSET_2_17(val)  (Msc_SetDD(MSC_SIG_O_S_K054, (val)))
#define CJ950_DIOSET_2_18(val)  (Msc_SetDD(MSC_SIG_O_S_K059, (val)))
#define CJ950_DIOSET_3_1(val)   (Msc_SetDD(MSC_SIG_CJ135_HEATER_1, (val)))
#define CJ950_DIOSET_3_2(val)   (Msc_SetDD(MSC_SIG_O_F_ECUA023, (val)))
#define CJ950_DIOSET_3_3(val)   (Msc_SetDD(MSC_SIG_O_S_A004, (val)))
#define CJ950_DIOSET_3_4(val)   (Msc_SetDD(MSC_SIG_O_F_ECUA093, (val)))
#define CJ950_DIOSET_3_5(val)   (Msc_SetDD(MSC_SIG_O_S_A094, (val)))
#define CJ950_DIOSET_3_6(val)   (Msc_SetDD(MSC_SIG_O_S_A011, (val)))
#define CJ950_DIOSET_3_7(val)   (Msc_SetDD(MSC_SIG_O_S_A031, (val)))
#define CJ950_DIOSET_3_8(val)   (Msc_SetDD(MSC_SIG_O_S_A009, (val)))
#define CJ950_DIOSET_3_9(val)   (Msc_SetDD(MSC_SIG_A_P_EV7, (val)))
#define CJ950_DIOSET_3_10(val)  (Msc_SetDD(MSC_SIG_A_P_EV8, (val)))
#define CJ950_DIOSET_3_11(val)  (Msc_SetDD(MSC_SIG_O_S_A025, (val)))
#define CJ950_DIOSET_3_12(val)  (Msc_SetDD(MSC_SIG_O_S_A075, (val)))
#define CJ950_DIOSET_3_13(val)  (Msc_SetDD(MSC_SIG_O_S_A001, (val)))
#define CJ950_DIOSET_3_14(val)  (Msc_SetDD(MSC_SIG_O_S_A002, (val)))
/* Macros for retriggering the reset-resistent-powerstages (15 or 16) */
#define CJ950_KEEPSTATE_1_15     (Cj950_DioSetBitField1516((uint32)1, (uint32)CJ950_OUT15_MSK_1, (uint32)CJ950_KEEPST_1_15))
#define CJ950_KEEPSTATE_1_16     (Cj950_DioSetBitField1516((uint32)1, (uint32)CJ950_OUT16_MSK_1, (uint32)CJ950_KEEPST_1_16))


/* return Level for switching off the Signal in case of PWMOUT-signal */
#define CJ950_PwmSwtOffLvl(CHIP,STAGE)             (1)

/* MISRA RULE 90 VIOLATION: Code for switchoff is okay and the best solution for solving the requirement   */
/* Macro function for switching OFF all powerstages, necessary in case of a 5V SoftReset */
#define CJ950_SHUTOFF_OFF_ALL_POWERSTAGES                                                        \
                                                /*        <-- Switch Off CJ950[1] -->        */  \
                                                /* switch off all DD-controlled powerstages */  \
                                                Msc_ShOff(MSC_DEV_CJ950_1);                      \
                                                /* keep state, restart timer of powerstage 15 */\
                                                CJ950_KEEPSTATE_1_15;                            \
                                                /* keep state, restart timer of powerstage 16 */\
                                                CJ950_KEEPSTATE_1_16;                            \
                                                /*        <-- Switch Off CJ950[2] -->        */  \
                                                /* switch off all DD-controlled powerstages */  \
                                                Msc_ShOff(MSC_DEV_CJ950_2);                      \
                                                /* switch off powerstage 15                 */  \
                                                CJ950_DIOSET_2_15(CJ950_STG_OFF);                 \
                                                /* switch off powerstage 16                 */  \
                                                CJ950_DIOSET_2_16(CJ950_STG_OFF);                 \
                                                /*        <-- Switch Off CJ950[3] -->        */  \
                                                /* switch off all DD-controlled powerstages */  \
                                                Msc_ShOff(MSC_DEV_CJ950_3);                      


/* external declarations for auto generated functions (switch off, and calibration-signals */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern void Cj950_SwitchOff_Dummy(bool i);
extern void Cj950_SwitchOff_1_1(bool xVal_b);
extern void Cj950_SwitchOff_1_2(bool xVal_b);
extern void Cj950_SwitchOff_1_3(bool xVal_b);
extern void Cj950_SwitchOff_1_4(bool xVal_b);
extern void Cj950_SwitchOff_1_5(bool xVal_b);
extern void Cj950_SwitchOff_1_6(bool xVal_b);
extern void Cj950_SwitchOff_1_7(bool xVal_b);
extern void Cj950_SwitchOff_1_8(bool xVal_b);
extern void Cj950_SwitchOff_1_9(bool xVal_b);
extern void Cj950_SwitchOff_1_10(bool xVal_b);
extern void Cj950_SwitchOff_1_11(bool xVal_b);
extern void Cj950_SwitchOff_1_12(bool xVal_b);
extern void Cj950_SwitchOff_1_13(bool xVal_b);
extern void Cj950_SwitchOff_1_14(bool xVal_b);
extern void Cj950_SwitchOff_1_15(bool xVal_b);
extern void Cj950_SwitchOff_1_16(bool xVal_b);
extern void Cj950_SwitchOff_1_17(bool xVal_b);
extern void Cj950_SwitchOff_1_18(bool xVal_b);
extern void Cj950_SwitchOff_2_1(bool xVal_b);
extern void Cj950_SwitchOff_2_2(bool xVal_b);
extern void Cj950_SwitchOff_2_3(bool xVal_b);
extern void Cj950_SwitchOff_2_4(bool xVal_b);
extern void Cj950_SwitchOff_2_5(bool xVal_b);
extern void Cj950_SwitchOff_2_6(bool xVal_b);
extern void Cj950_SwitchOff_2_7(bool xVal_b);
extern void Cj950_SwitchOff_2_8(bool xVal_b);
extern void Cj950_SwitchOff_2_9(bool xVal_b);
extern void Cj950_SwitchOff_2_10(bool xVal_b);
extern void Cj950_SwitchOff_2_11(bool xVal_b);
extern void Cj950_SwitchOff_2_12(bool xVal_b);
extern void Cj950_SwitchOff_2_13(bool xVal_b);
extern void Cj950_SwitchOff_2_14(bool xVal_b);
extern void Cj950_SwitchOff_2_15(bool xVal_b);
extern void Cj950_SwitchOff_2_16(bool xVal_b);
extern void Cj950_SwitchOff_2_17(bool xVal_b);
extern void Cj950_SwitchOff_2_18(bool xVal_b);
extern void Cj950_SwitchOff_3_1(bool xVal_b);
extern void Cj950_SwitchOff_3_2(bool xVal_b);
extern void Cj950_SwitchOff_3_3(bool xVal_b);
extern void Cj950_SwitchOff_3_4(bool xVal_b);
extern void Cj950_SwitchOff_3_5(bool xVal_b);
extern void Cj950_SwitchOff_3_6(bool xVal_b);
extern void Cj950_SwitchOff_3_7(bool xVal_b);
extern void Cj950_SwitchOff_3_8(bool xVal_b);
extern void Cj950_SwitchOff_3_9(bool xVal_b);
extern void Cj950_SwitchOff_3_10(bool xVal_b);
extern void Cj950_SwitchOff_3_11(bool xVal_b);
extern void Cj950_SwitchOff_3_12(bool xVal_b);
extern void Cj950_SwitchOff_3_13(bool xVal_b);
extern void Cj950_SwitchOff_3_14(bool xVal_b);

__PRAGMA_USE__CODE__hwe__NormalSpeed__END

#ifdef CJ950_STG1516_USED
extern uint16 CJ950_state1516_u16[CJ950_NUM_CHIPS];
#endif


/* ******************************************************************************************** */
/* begin diagnosis part (filled by diagnosis script)                                            */
/* ******************************************************************************************** */

/* DIAG definitions for CJ950*/
/* number of process call till the next call of die diagnosis */      
#define CJ950_SEND_DIAG_1 1
/* number of process call till the next call of die diagnosis */      
#define CJ950_SEND_DIAG_2 1
/* number of process call till the next call of die diagnosis */      
#define CJ950_SEND_DIAG_3 1
#define CJ950_DIAGET_SEQ 
#define CJ950_CMD_SEQ 
#define CJ950_MSC_SEQ 



/* end of DIAG definitions for CJ950 */

/* ******************************************************************************************** */
/* end   diagnosis part (filled by diagnosis script)                                            */
/* ******************************************************************************************** */

/* _CJ950_AUTO_CONF_H */
#endif
