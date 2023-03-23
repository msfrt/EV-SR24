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
 * $Filename__:epmhcas_sigeval_prot.h$
 *
 * $Author____:OMO2FE$
 *
 * $Function__:add emphcas_sigeval_prot_confdata$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:OMO2FE$
 * $Date______:17.12.2009$
 * $Class_____:SWHDR$
 * $Name______:epmhcas_sigeval_prot$
 * $Variant___:1.23.0$
 * $Revision__:3$
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
 * 1.23.0; 3     17.12.2009 OMO2FE
 *   add emphcas_sigeval_prot_confdata
 * 
 * 1.23.0; 2     16.12.2009 OMO2FE
 *   add emphcas_sigeval_prot_confdata
 * 
 * 1.23.0; 1     16.12.2009 OMO2FE
 *   add emphcas_sigeval_prot_confdata
 * 
 * 1.23.0; 0     15.12.2009 OMO2FE
 *   add emphcas_sigeval_prot_confdata
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _EPMHCAS_SIGEVAL_PROT_H
#define _EPMHCAS_SIGEVAL_PROT_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */
#include "epmhcas_auto_prot.h"
#include "gpta.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

 /* Mask for semaphore */
#define EPMHCAS_SEMAMSK            0x7FFFFFFF
/* position of glitch-bit */
#define EPMHCAS_GLITCHBIT_POS      2

/* defines for mode of even and odd GTC. In operation mode only odd GTC causes an interrupt to CPU.
   In init-mode both GTC could cause an interrupt. */

/* GTCEVENINITMOD:    capture Timer 1, one shot mode, interrupt enabled, falling edge */
#define GTCEVENINITMOD        ((0x01  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_REN_POS) + \
                               (0x1   << GPTA0_GTCCTR_FED_POS)     )


/* GTCEVENOPMOD_RED:capture Timer 0, one shot mode, interrupt disabled, rising edge */
#define GTCEVENOPMOD_RED      ((0x00  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_RED_POS)     )


/* GTCEVENOPMOD_FED:capture Timer 0, one shot mode, interrupt disabled, falling edge,*/
#define GTCEVENOPMOD_FED      ((0x00  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_FED_POS)     )


/* GTCEVENINITMOD:    capture Timer 1, one shot mode, interrupt enabled, rising edge*/
#define GTCODDINITMOD         ((0x01  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_REN_POS) + \
                               (0x1   << GPTA0_GTCCTR_RED_POS)     )




/* GTCODDOPMOD_RED:   capture Timer 1, one shot mode, interrupt enabled, rising edge */
#define GTCODDOPMOD_RED       ((0x01  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_REN_POS) + \
                               (0x1   << GPTA0_GTCCTR_RED_POS)     )



/* GTCODDOPMOD_FED:   capture Timer 1, one shot mode, interrupt enabled, falling edge*/
#define GTCODDOPMOD_FED       ((0x01  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_REN_POS) + \
                               (0x1   << GPTA0_GTCCTR_FED_POS)     )



/* GTCINITMOD:    capture Timer 1, one shot mode, interrupt enabled, rising edge*/
#define GTCINITMOD            ((0x01  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_REN_POS) + \
                               (0x1   << GPTA0_GTCCTR_RED_POS)     )




/* GTCOPMOD_RED:   capture Timer 1, one shot mode, interrupt enabled, rising edge */
#define GTCOPMOD_RED          ((0x01  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_REN_POS) + \
                               (0x1   << GPTA0_GTCCTR_RED_POS)     )



/* GTCOPMOD_FED:   capture Timer 1, one shot mode, interrupt enabled, falling edge*/
#define GTCOPMOD_FED          ((0x01  << GPTA0_GTCCTR_MOD_POS) + \
                               (0x1   << GPTA0_GTCCTR_OSM_POS) + \
                               (0x1   << GPTA0_GTCCTR_REN_POS) + \
                               (0x1   << GPTA0_GTCCTR_FED_POS)     )

#define EPMHCAS_TIMESTAMPMAX    GPTA_GT0_TICKS_TO_US(0xFFFFFFUL)


/*
 ***************************************************************************************************
 * Type definition
 ***************************************************************************************************
 */

 typedef struct
{
   volatile uint32 *  adGTCCTR1;      // timer cell 1 control reg.
   volatile uint32 *  adGTCCTR2;      // timer cell 2 control reg.
   volatile uint32 *  adGptaSRC06;    // GPTA SRC reg.
   volatile uint32 *  adGptaSRSC1;    // GPTA SRSC reg.
   volatile uint32 *  adGptaFPCCTR0;  // GPTA FPCCTR0 reg.
   volatile uint32 *  adPortIN;       // input-port
   uint32             numPin;         // num (bit) of used input-pin on specified port
   uint8              numGtc;         // num of used GTC
   uint8              numFpc;         // num of first FPC
   uint8              numSrn;         // num of used SRN
}EpmHCaS_GptaConf_t;

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */
extern volatile const EpmHCaS_GptaConf_t EpmHCaS_GptaConf[];
extern uint32 EpmHCaS_numPrioChan[];
/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
extern void EpmHCaS_Init(void);
extern void EpmHCaS_SetNumEdgeMax(uint8 numEdgeMax);
extern void EpmHCaS_SetActEdge(uint8 stActEdge);
extern void EpmHCaS_SetTiGlitchFilter(sint32 tiGlitchFilter);
extern void EpmHCaS_SetAgCor(enum EpmHCaS_numCaS_t numCaS, sint16 phiCorREdg, sint16 phiCorFEdg);

/* _EPMHCAS_SIGEVAL_PROT_H */
#endif
