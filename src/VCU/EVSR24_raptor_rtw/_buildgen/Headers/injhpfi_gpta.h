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
 * $Filename__:injhpfi_gpta.h$ 
 * 
 * $Author____:HIA3SI$ 
 * 
 * $Function__:Initial import from Nestor 
 *                  Object in Nestor : 
 *                  Domain :MX17
 *                  Class :CDCOMP
 *                  Object name :INJHPFI
 *                  Variant :2.60
 *                  Revision :1$ 
 * 
 ************************************************************************* 
 * $Domain____:SDOM$ 
 * $User______:HIA3SI$ 
 * $Date______:14.10.2009$ 
 * $Class_____:SWHDR$ 
 * $Name______:injhpfi_gpta$ 
 * $Variant___:2.8.0$ 
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
 * 2.8.0; 0     14.10.2009 HIA3SI
 *   Ported from Nestor
 *   CDCOMP : INJHPFI  2.80; 1
 *   
 *   CRQ 275122
 *   ressource reduction to 1 gtc and 1ltc
 * 
 * 2.6.0; 0     22.10.2008 HIA3SI
 *   Initial import from Nestor 
 *        Object in Nestor : 
 *        Domain :MX17
 *        Class :SWHDR
 *        Object name :injhpfi_gpta
 *        Variant :2.10
 *        Revision :2
 * 
 * $ 
 * 
 ************************************************************************* 
 </RBHead>*/

#ifndef _INJHPFI_GPTA_H
#define _INJHPFI_GPTA_H

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

 
#define PIN_ACTIVE_HIGH TRUE    /* Active pin state (FALSE = LOW | TRUE = HIGH) */
#define PIN_ACTIVE_LOW  FALSE

#define INJHPFI_PIN_ACTIVE PIN_ACTIVE_LOW
#define INJHPFI_PIN_PASSIVE (!INJHPFI_PIN_ACTIVE)


#define GPTA_RegMap_t         GPTA0_RegMap_t
#define GPTA_GTC_t            GPTA0_GTC_t

#define GPTA_SRC_SRE_POS           12UL
#define GPTA_SRC_SRE_LEN           1UL

#define GPTA_SRC_SPRN_POS          0UL
#define GPTA_SRC_SPRN_LEN          8UL

#define GPTA_SRC_SETR_POS     GPTA0_SRC00_SETR_POS
#define GPTA_SRC_SETR_LEN     GPTA0_SRC00_SETR_LEN

#define GPTA_SRC_CLRR_POS     GPTA0_SRC00_CLRR_POS
#define GPTA_SRC_CLRR_LEN     GPTA0_SRC00_CLRR_LEN
#define GPTA_SRC_CLRR_VAL     1ul
#define GPTA_SRC_TOS_VAL_PCP  1ul 

#define GPTA_GTCCTR_MOD_POS   GPTA0_GTCCTR_MOD_POS

#define GPTA_GTCCTR_OSM_POS   GPTA0_GTCCTR_OSM_POS
 
#define GPTA_GTCCTR_REN_POS   GPTA0_GTCCTR_REN_POS  
#define GPTA_GTCCTR_REN_LEN   GPTA0_GTCCTR_REN_LEN

#define GPTA_GTCCTR_GES_POS   GPTA0_GTCCTR_GES_POS
#define GPTA_GTCCTR_GES_LEN   GPTA0_GTCCTR_GES_LEN

#define GPTA_GTCCTR_CAC_POS   GPTA0_GTCCTR_CAC_POS

#define GPTA_GTCCTR_CAT_POS   GPTA0_GTCCTR_CAT_POS
#define GPTA_GTCCTR_CAT_LEN   GPTA0_GTCCTR_CAT_LEN

#define GPTA_GTCCTR_BYP_POS   GPTA0_GTCCTR_BYP_POS

#define GPTA_GTCCTR_EOA_POS   GPTA0_GTCCTR_EOA_POS

#define GPTA_GTCCTR_CEN_POS   GPTA0_GTCCTR_CEN_POS
#define GPTA_GTCCTR_CEN_LEN   GPTA0_GTCCTR_CEN_LEN

#define GPTA_GTCCTR_OCM01_POS GPTA0_GTCCTR_OCM_POS

#define GPTA_GTCCTR_OCM2_POS  13UL

#define GPTA_GTCCTR_OIA_POS   GPTA0_GTCCTR_OIA_POS
#define GPTA_GTCCTR_OIA_LEN   GPTA0_GTCCTR_OIA_LEN

#define GPTA_GTCCTR_RED_POS   GPTA0_GTCCTR_RED_POS
#define GPTA_GTCCTR_FED_POS   GPTA0_GTCCTR_FED_POS


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * used functions
 ***************************************************************************************************
 */


/********************* GTCCTR settings *************************/

#define GTC_MOD_CAPTURE_GT0               0 
#define GTC_MOD_CAPTURE_GT1               1
#define GTC_MOD_COMPARE_GT0               2 
#define GTC_MOD_COMPARE_GT1               3

#define GTC_OSM_CONTINOUS                 0
#define GTC_OSM_ONESHOT                   1

#define GTC_REN_IR_ENABLE                 1
#define GTC_REN_IR_DISABLE                0

#define GTC_GES_EQUAL                     0
#define GTC_GES_GREATER_EQUAL             1

#define GTC_CAC_DISABLED                  0
#define GTC_CAC_ENABLED                   1

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

#define GTC_OCM01_FORCE_ACTIVE            2
#define GTC_OCM01_FORCE_PASSIVE           3
/*
#if (LOGIC == POSITIVE)
#define GTC_OCM01_INJ_INACTIVE            2
#define GTC_OCM01_INJ_ACTIVE              3
#elif (LOGIC == NEGATIVE)
#define GTC_OCM01_INJ_INACTIVE            3
#define GTC_OCM01_INJ_ACTIVE              2
#endif
*/

#define GTC_OCM2_INT                      0
#define GTC_OCM2_INT_EXT                  1

#define GTC_OIA_DISABLED                  0
#define GTC_OIA_ENABLED                   1

#define GTC_RED_DISABLED                  0
#define GTC_FED_DISABLED                  0

/* set of the main injection is done by GTC. First the angle alarm of the beginning is set. 
The angle alarm will cause a IR.
*/

#define INJHPFI_GTCCTR_SET_MI \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 +(                   GTC_GES_EQUAL << GPTA_GTCCTR_GES_POS)  \
 +(                 GTC_CAC_ENABLED << GPTA_GTCCTR_CAC_POS)  \
 +( GTC_CAT_CAPTURE_ALTERNATE_TIMER << GPTA_GTCCTR_CAT_POS)  \
 +(                GTC_BYP_ENABLED  << GPTA_GTCCTR_BYP_POS)  \
 +(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 +(          GTC_OCM01_FORCE_ACTIVE << GPTA_GTCCTR_OCM01_POS)\
 +(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))

#define INJHPFI_GTCCTR_SET_CUTOFF \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 +(                   GTC_GES_EQUAL << GPTA_GTCCTR_GES_POS)  \
 +(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 +(         GTC_OCM01_FORCE_PASSIVE << GPTA_GTCCTR_OCM01_POS)\
 +(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))


/*  when the IR of the begin angle alarm occurs the ti will be set on GTC.
MI-input lines are active becaus of the abort alarm on LTC
*/

#define INJHPFI_GTCCTR_RUN_MI \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(              GTC_REN_IR_DISABLE << GPTA_GTCCTR_REN_POS)  \
 +(                   GTC_GES_EQUAL << GPTA_GTCCTR_GES_POS)  \
 +(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 +(         GTC_OCM01_FORCE_PASSIVE << GPTA_GTCCTR_OCM01_POS)\
 +(                GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
// abort alarm for running Mi or finished Mi. The output Mi-lines affect the output of GTC
#define INJHPFI_GTCCTR_ABORT_MI \
 ((             GTC_MOD_COMPARE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(               GTC_REN_IR_DISABLE << GPTA_GTCCTR_REN_POS)  \
 +(                   GTC_GES_EQUAL << GPTA_GTCCTR_GES_POS)  \
 +(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 +(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 +(         GTC_OCM01_FORCE_PASSIVE << GPTA_GTCCTR_OCM01_POS)\
 +(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))

#define INJHPFI_GTCCTR_GTC_OFF \
 ((             GTC_MOD_CAPTURE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(              GTC_REN_IR_DISABLE << GPTA_GTCCTR_REN_POS)  \
 +(                GTC_RED_DISABLED << GPTA_GTCCTR_RED_POS)  \
 +(                GTC_FED_DISABLED << GPTA_GTCCTR_FED_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                GTC_EOA_DISABLED << GPTA_GTCCTR_EOA_POS)  \
 +(         GTC_OCM01_FORCE_PASSIVE << GPTA_GTCCTR_OCM01_POS)\
 +(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                 GTC_OIA_ENABLED << GPTA_GTCCTR_OIA_POS))


#define INJHPFI_GTCCTR_SET_MINOFF \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 +(                   GTC_GES_EQUAL << GPTA_GTCCTR_GES_POS)  \
 +(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 +(             GTC_OCM01_HOLDSTATE << GPTA_GTCCTR_OCM01_POS)\
 +(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))
 
#define INJHPFI_GTCCTR_RUN_AD \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(              GTC_REN_IR_DISABLE << GPTA_GTCCTR_REN_POS)  \
 +(                   GTC_GES_EQUAL << GPTA_GTCCTR_GES_POS)  \
 +(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 +(           GTC_OCM01_TOGGLESTATE << GPTA_GTCCTR_OCM01_POS)\
 +(                GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                 GTC_OIA_ENABLED << GPTA_GTCCTR_OIA_POS))

#define INJHPFI_GTCCTR_SKIP_END \
 ((             GTC_MOD_CAPTURE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(              GTC_REN_IR_DISABLE << GPTA_GTCCTR_REN_POS)  \
 +(                GTC_RED_DISABLED << GPTA_GTCCTR_RED_POS)  \
 +(                GTC_FED_DISABLED << GPTA_GTCCTR_FED_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                GTC_EOA_DISABLED << GPTA_GTCCTR_EOA_POS)  \
 +(             GTC_OCM01_HOLDSTATE << GPTA_GTCCTR_OCM01_POS)\
 +(                GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))

#define INJHPFI_GTCCTR_SKIP_ABORT \
 ((             GTC_MOD_CAPTURE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(              GTC_REN_IR_DISABLE << GPTA_GTCCTR_REN_POS)  \
 +(                GTC_RED_DISABLED << GPTA_GTCCTR_RED_POS)  \
 +(                GTC_FED_DISABLED << GPTA_GTCCTR_FED_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                GTC_EOA_DISABLED << GPTA_GTCCTR_EOA_POS)  \
 +(             GTC_OCM01_HOLDSTATE << GPTA_GTCCTR_OCM01_POS)\
 +(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))


#define INJHPFI_GTCCTR_END_OIA \
 ((             GTC_MOD_CAPTURE_GT1 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(              GTC_REN_IR_DISABLE << GPTA_GTCCTR_REN_POS)  \
 +(                GTC_RED_DISABLED << GPTA_GTCCTR_RED_POS)  \
 +(                GTC_FED_DISABLED << GPTA_GTCCTR_FED_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                GTC_EOA_DISABLED << GPTA_GTCCTR_EOA_POS)  \
 +(         GTC_OCM01_FORCE_PASSIVE << GPTA_GTCCTR_OCM01_POS)\
 +(                GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                 GTC_OIA_ENABLED << GPTA_GTCCTR_OIA_POS))


            

#define INJHPFI_GTCCTR_SET_DI \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(              GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 +(                   GTC_GES_EQUAL << GPTA_GTCCTR_GES_POS)  \
 +(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 +(                 GTC_BYP_ENABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 +(          GTC_OCM01_FORCE_ACTIVE << GPTA_GTCCTR_OCM01_POS)\
 +(                GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))

#define INJHPFI_GTCCTR_TERMINATE_DI \
 ((             GTC_MOD_COMPARE_GT0 << GPTA_GTCCTR_MOD_POS)  \
 +(                 GTC_OSM_ONESHOT << GPTA_GTCCTR_OSM_POS)  \
 +(               GTC_REN_IR_ENABLE << GPTA_GTCCTR_REN_POS)  \
 +(                   GTC_GES_EQUAL << GPTA_GTCCTR_GES_POS)  \
 +(                GTC_CAC_DISABLED << GPTA_GTCCTR_CAC_POS)  \
 +(                GTC_BYP_DISABLED << GPTA_GTCCTR_BYP_POS)  \
 +(                 GTC_EOA_ENABLED << GPTA_GTCCTR_EOA_POS)  \
 +(         GTC_OCM01_FORCE_PASSIVE << GPTA_GTCCTR_OCM01_POS)\
 +(                    GTC_OCM2_INT << GPTA_GTCCTR_OCM2_POS) \
 +(                GTC_OIA_DISABLED << GPTA_GTCCTR_OIA_POS))


/* Predefined LTC_CTR register masks */
/**************************************************************************************************/
#define INJHPFI_LTCCTR_DISABLE 0x0ul
/**************************************************************************************************/

/**************************************************************************************************/
#define INJHPFI_LTCCTR_FREERUNNING \
 ((             2 << GPTA0_LTCCTR_MOD_POS)  \
 |(             1 << GPTA0_LTCCTR_OSM_POS)  \
 |(             1 << GPTA0_LTCCTR_REN_POS)  \
 |(             1 << GPTA0_LTCCTR_RED_POS))
/**************************************************************************************************/



#endif /* #ifndef _INJHPFI_GPTA_H*/
