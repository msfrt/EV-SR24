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
 * $Filename__:pwr_pub.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Domain____:SDOM$
 * $User______:DON1HC$
 * $Date______:11.02.2015$
 * $Class_____:SWHDR$
 * $Name______:pwr_pub$
 * $Variant___:1.30.2$
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
 * 1.30.2; 0     11.02.2015 DON1HC
 *   Corect the get PIN_WAK interface
 * 
 * 1.30.0; 1     09.10.2013 GKI4KOR
 *   To add the configuration tag for SSP_CTRL
 * 
 * 1.30.0; 0     01.10.2013 GKI4KOR
 *   Implementation of Pwr interfaces for cy320 enable disable sensor supply
 * 
 * 1.29.0; 2     25.09.2013 GKI4KOR
 *   To do the review changes
 *   1) #define PWR_SETFUNC_Gx(st)       Cy327_SensorSupplyControl(1, 
 *   (!(SsStatus_u8)), 1) 
 *    replace SsStatus_u8 by st
 * 
 * 1.29.0; 1     25.09.2013 GKI4KOR
 *   To correct the pwr interface header which calls cy327 run time interfaces
 * 
 * 1.29.0; 0     02.09.2013 GKI4KOR
 *   To implement the PWR macro which calls cy327 interface(Run time enable 
 *   disable sensor supply)
 * 
 * 1.27.1; 0     06.12.2012 PPH1HC
 *   Pwr_Get(FIN_WAK)  bug fix
 * 
 * 1.27.0; 1     18.07.2012 LMU1KOR
 *    RQONE00054034: Interface Function for setting of CY327 SPI-register TST0: 
 *     Implementing review comments
 * 
 * 1.27.0; 0     11.07.2012 LMU1KOR
 *    RQONE00054034: Interface Function for setting of CY327 SPI-register TST0
 * 
 * 1.25.0; 2     22.03.2012 GOV6KOR
 *   Pwr Cj721 Interface function changes
 * 
 * $
 *
 *************************************************************************
 </RBHead>*/

#ifndef _PWR_PUB_H
#define _PWR_PUB_H

/**
 ***************************************************************************************************
 * moduledescription
 * Power module to serve as the HAL for the power supply hardware.
 *
 * scope API
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

#define PWR_GET_RETVAL_0           0x00   /* Pwr_Get() return code for a valid "0" status         */
#define PWR_GET_RETVAL_1           0x01   /* Pwr_Get() return code for a valid "1" status         */
#define PWR_GET_RETVAL_ERROR       0xFF   /* Pwr_Get() return code for error in called interface  */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Function definition
 ***************************************************************************************************
 */


/*------------------------------------------------------------------------------------------------*/
/*-    RRRR     L      Y   Y            CCCC  Y   Y    1      44      1                          -*/
/*-    R   R    L      Y   Y           C       Y Y    11     4 4     11                          -*/
/*-    R   R    L       Y Y            C        Y    1 1    4  4    1 1                          -*/
/*-    RRRR     L        Y    =====    C        Y      1    44444     1                          -*/
/*-    R R      L        Y             C        Y      1       4      1                          -*/
/*-    R  R     L        Y             C        Y      1       4      1                          -*/
/*-    R   R    LLLLL    Y              CCCC    Y    11111     4    11111                        -*/
/*------------------------------------------------------------------------------------------------*/

/* Supported relays                                                                               */
/* RLY1 is mapped to HR1 of CY141, RLY2 is mapped to HR2 of CY141, ...                            */
typedef enum
{
    RLY1,
    RLY2,
    RLY3,
    RLY4,
    RLY5
} Pwr_RlySigNames_t;

/* Supported relay devices                                                                        */
/* RLYDEV1 is mapped to first CY141                                                               */
typedef enum
{
    RLYDEV1
} Pwr_RlyDevNames_t;

/*------------------------------------------------------------------------------------------------*/
/*-                                     SSS EEEE TTTTT                                           -*/
/*-                                    S    E      T                                             -*/
/*-                                     SS  EEE    T                                             -*/
/*-                                       S E      T                                             -*/
/*-                                    SSS  EEEE   T                                             -*/
/*------------------------------------------------------------------------------------------------*/
/* routing for Pwr_RlySet(CHIP, RELAY, STATE) */
#define Pwr_RlySet(CHIP, RELAY, STATE)          PWR_RLYSET_##CHIP##_##RELAY(STATE)

/* set or clear main relay 1 of CY141                                                             */
#define PWR_RLYSET_RLYDEV1_RLY1(STATE)                (((STATE) != FALSE) ?                        \
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY1_POS, CY141_RELAY_ON)                                 :\
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY1_POS, CY141_RELAY_OFF))

/* set or clear main relay 2 of CY141                                                             */
#define PWR_RLYSET_RLYDEV1_RLY2(STATE)                (((STATE) != FALSE) ?                        \
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY2_POS, CY141_RELAY_ON)                                 :\
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY2_POS, CY141_RELAY_OFF))

/* set or clear main relay 3 of CY141                                                             */
#define PWR_RLYSET_RLYDEV1_RLY3(STATE)                (((STATE) != FALSE) ?                        \
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY3_POS, CY141_RELAY_ON)                                 :\
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY3_POS, CY141_RELAY_OFF))

/* set or clear main relay 4 of CY141                                                             */
#define PWR_RLYSET_RLYDEV1_RLY4(STATE)                (((STATE) != FALSE) ?                        \
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY4_POS, CY141_RELAY_ON)                                 :\
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY4_POS, CY141_RELAY_OFF))

/* set or clear main relay 5 of CY141                                                             */
#define PWR_RLYSET_RLYDEV1_RLY5(STATE)                (((STATE) != FALSE) ?                        \
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY5_POS, CY141_RELAY_ON)                                 :\
    Cy141_SetRly(RLYDEV1,  CY141_SETSEQ_RLY5_POS, CY141_RELAY_OFF))


/*------------------------------------------------------------------------------------------------*/
/*-                                     GGG EEEE TTTTT                                           -*/
/*-                                    G    E      T                                             -*/
/*-                                    G GG EEE    T                                             -*/
/*-                                    G  G E      T                                             -*/
/*-                                     GG  EEEE   T                                             -*/
/*------------------------------------------------------------------------------------------------*/
/* routing for Pwr_RlyGet(CHIP, RELAY) */
#define Pwr_RlyGet(CHIP, RELAY)             PWR_RLYGET_##CHIP##_##RELAY

/* get main relay 1 of CY141                                                                      */
#define PWR_RLYGET_RLYDEV1_RLY1             Cy141_GetRly(RLYDEV1,  CY141_GETSEQ_RLY1_POS)

/* get main relay 2 of CY141                                                                      */
#define PWR_RLYGET_RLYDEV1_RLY2             Cy141_GetRly(RLYDEV1,  CY141_GETSEQ_RLY2_POS)

/* get main relay 3 of CY141                                                                      */
#define PWR_RLYGET_RLYDEV1_RLY3             Cy141_GetRly(RLYDEV1,  CY141_GETSEQ_RLY3_POS)

/* get main relay 4 of CY141                                                                      */
#define PWR_RLYGET_RLYDEV1_RLY4             Cy141_GetRly(RLYDEV1,  CY141_GETSEQ_RLY4_POS)

/* get main relay 5 of CY141                                                                      */
#define PWR_RLYGET_RLYDEV1_RLY5             Cy141_GetRly(RLYDEV1,  CY141_GETSEQ_RLY5_POS)


/*------------------------------------------------------------------------------------------------*/
/*-          GGG EEEE TTTTT    EEEE RRR  RRR   OO  RRR       III N   N FFFF  OO                  -*/
/*-         G    E      T      E    R  R R  R O  O R  R       I  NN  N F    O  O                 -*/
/*-         G GG EEE    T  === EEE  RRR  RRR  O  O RRR   ===  I  N N N FFF  O  O                 -*/
/*-         G  G E      T      E    R  R R  R O  O R  R       I  N  NN F    O  O                 -*/
/*-          GG  EEEE   T      EEEE R  R R  R  OO  R  R      III N   N F     OO                  -*/
/*------------------------------------------------------------------------------------------------*/
/* routing for Pwr_RlyGetErrInfo(CHIP, RELAY) */
#define Pwr_RlyGetErrorInfo(CHIP, RELAY)    PWR_RLYGETERRINFO_##CHIP##_##RELAY

/* get errors of main relay 1 of CY141                                                            */
#define PWR_RLYGETERRINFO_RLYDEV1_RLY1      Cy141_GetRlyErrorInfo(RLYDEV1,  RLY1)

/* get errors of main relay 2 of CY141                                                            */
#define PWR_RLYGETERRINFO_RLYDEV1_RLY2      Cy141_GetRlyErrorInfo(RLYDEV1,  RLY2)

/* get errors of main relay 3 of CY141                                                            */
#define PWR_RLYGETERRINFO_RLYDEV1_RLY3      Cy141_GetRlyErrorInfo(RLYDEV1,  RLY3)

/* get errors of main relay 4 of CY141                                                            */
#define PWR_RLYGETERRINFO_RLYDEV1_RLY4      Cy141_GetRlyErrorInfo(RLYDEV1,  RLY4)

/* get errors of main relay 5 of CY141                                                            */
#define PWR_RLYGETERRINFO_RLYDEV1_RLY5      Cy141_GetRlyErrorInfo(RLYDEV1,  RLY5)



/*------------------------------------------------------------------------------------------------*/
/*-    cccc  y   y   3333    2222    000                                                         -*/
/*-   c       y y        3  2    2  0   0                                                        -*/
/*-   c        y         3      2   0   0                                                        -*/
/*-   c        y       33      2    0   0                                                        -*/
/*-   c        y         3    2     0   0                                                        -*/
/*-   c        y         3   2      0   0                                                        -*/
/*-    cccc    y     3333   22222    000                                                         -*/
/*------------------------------------------------------------------------------------------------*/
#if !defined(CJ930_IN_SYSTEM) && !defined(CY327_IN_SYSTEM) && !defined(CJ721_IN_SYSTEM)

#define Pwr_TstImp                     Cy320_TstImp
#define Pwr_GetErrorInfo               Cy320_GetErrorInfo
#define Pwr_GetSupplyInfo              Cy320_GetSupplyInfo


/**************************************************************************************************/
/* definitions testimpulse/diagn main relay                                                       */
/**************************************************************************************************/
/*
 *   updated since last call
 *   | Testimpulse finished
 *   | | Testimpulse T0 running
 *   | | | Testimpulse T0 requested
 *   | | | |
 *   | | | | sensor supply3 error
 *   | | | | | sensor supply2 error
 *   | | | | | | sensor supply1 error
 *   | | | | | | |                                   SPI error
 *   | | | | | | | T1-Testimpulse running            | COM error
 *   | | | | | | | | T1-Testimpulse requested        | |
 *   | | | | | | | | |                               | | +------------valid flag for bit4
 *   | | | | | | | | | sensor supply6 error          | | | +----------Open load error
 *   | | | | | | | | | | sensor supply5 error        | | | |
 *   | | | | | | | | | | | sensor supply4 error      | | | | +--------valid flag for bit2
 *   | | | | | | | | | | | | T2-Testimpulse running    | | | | | +------short to ground
 *   | | | | | | | | | | | | | T2-Testimpulse requ.    | | | | | |
 *   | | | | | | | | | | | | | |                       | | | | | | +----valid flag for bit0
 *   | | | | | | | | | | | | | |                       | | | | | | | +--short to battery
 *   | | | | | | | | | | | | | |                       | | | | | | | |
 *   V V V V V V V V V V V V V V                       V V V V V V V V
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |N| | | | | | | | | | | | | |0|0|0|0|0|0|0|0|0|0| | | | | | | | | diagMainRelay_u32
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |               |               |               |7 6 5 4|3 2 1 0|
 *
 * =================================================================================================
 *
 * \param           void
 * \return          uint32          bit coded error information
 * \retval                          bit0 : short to battery
 * \retval                          bit1 : valid flag for bit0
 * \retval                          bit2 : short to ground
 * \retval                          bit3 : valid flag for bit2
 * \retval                          bit4 : open load
 * \retval                          bit5 : valid flag for bit4
 * \retval                          bit5 : info COM error
 * \retval                          bit6 : info SPI error
 * \retval                          bit20: info sensor supply 4 error (if second chip available)
 * \retval                          bit21: info sensor supply 5 error (if second chip available)
 * \retval                          bit22: info sensor supply 6 error (if second chip available)
 * \retval                          bit23: testimpulse T1 request  flag
 * \retval                          bit24: testimpulse T1 running  flag
 * \retval                          bit25: info sensor supply 1 error
 * \retval                          bit26: info sensor supply 2 error
 * \retval                          bit27: info sensor supply 3 error
 * \retval                          bit28: testimpulse T0 request  flag
 * \retval                          bit29: testimpulse T0 running  flag
 * \retval                          bit30: testimpulse finished flag
 * \retval                          bit31: updated since last call
*/
#define PWR_DIAGMR_SCB         CY320_DIAGMR_SCB
#define PWR_DIAGMR_SCB_VALID   CY320_DIAGMR_SCB_VALID
#define PWR_DIAGMR_SCG         CY320_DIAGMR_SCG
#define PWR_DIAGMR_SCG_VALID   CY320_DIAGMR_SCG_VALID
#define PWR_DIAGMR_OL          CY320_DIAGMR_OL
#define PWR_DIAGMR_OL_VALID    CY320_DIAGMR_OL_VALID
#define PWR_DIAGMR_COM         CY320_DIAGMR_COM
#define PWR_DIAGMR_SPI         CY320_DIAGMR_SPI
#define PWR_DIAGMR_T2_TSTREQ   CY320_DIAGMR_T2_TSTREQ
#define PWR_DIAGMR_T2_TSTRUN   CY320_DIAGMR_T2_TSTRUN
#define PWR_DIAGMR_SS4         CY320_DIAGMR_SS4
#define PWR_DIAGMR_SS5         CY320_DIAGMR_SS5
#define PWR_DIAGMR_SS6         CY320_DIAGMR_SS6
#define PWR_DIAGMR_T1_TSTREQ   CY320_DIAGMR_T1_TSTREQ
#define PWR_DIAGMR_T1_TSTRUN   CY320_DIAGMR_T1_TSTRUN
#define PWR_DIAGMR_SS1         CY320_DIAGMR_SS1
#define PWR_DIAGMR_SS2         CY320_DIAGMR_SS2
#define PWR_DIAGMR_SS3         CY320_DIAGMR_SS3
#define PWR_DIAGMR_T0_TSTREQ   CY320_DIAGMR_T0_TSTREQ
#define PWR_DIAGMR_T0_TSTRUN   CY320_DIAGMR_T0_TSTRUN
#define PWR_DIAGMR_TSTFIN      CY320_DIAGMR_TSTFIN
#define PWR_DIAGMR_NEW         CY320_DIAGMR_NEW

#define PWR_DIAGMR_TSTREQ   (PWR_DIAGMR_T0_TSTREQ | PWR_DIAGMR_T1_TSTREQ | PWR_DIAGMR_T2_TSTREQ)
#define PWR_DIAGMR_TSTRUN   (PWR_DIAGMR_T0_TSTRUN | PWR_DIAGMR_T1_TSTRUN | PWR_DIAGMR_T2_TSTRUN)

/**************************************************************************************************/
/* definitions sensor supply information                                                          */
/**************************************************************************************************/
/*   updated since last call
 *   |
 *   |      ***FIRST CHIP*******
 *   | +------- SPI error      *
 *   | | +----- COM error      *************************************************************
 *   | | | +--- DSM reporting  *                                                           *
 *   | | | | *******************                                                           *
 *   | | | |                                ***SECOND CHIP (if available)********          *
 *   | | | |                                                                    *          *
 *   | | | |                                (all bits set to 0 if second chip   *          *
 *   | | | |                                 is not available)                  *          *
 *   | | | |                                                                    *          *
 *   | | | | +------------------------------- SPI error                         *          *
 *   | | | | | +----------------------------- COM error                         *          *
 *   | | | | | | +--------------------------- DSM reporting                     *          *
 *   | | | | | | |                                                              *          *
 *   | | | | | | |                           SENSOR SUPPLY 6 (3 of second chip) *          *
 *   | | | | | | |   +------------------------- 5V                              *          *
 *   | | | | | | |   | +----------------------- 3,3V                            *          *
 *   | | | | | | |   | | +--------------------- Overvoltage                     *          *
 *   | | | | | | |   | | | +------------------- Undervoltage                    *          *
 *   | | | | | | |   | | | |                                                    *          *
 *   | | | | | | |   | | | |                 SENSOR SUPPLY 5 (2 of second chip) *          *
 *   | | | | | | |   | | | | +----------------- 5V                              *          *
 *   | | | | | | |   | | | | | +--------------- 3,3V                            *          *
 *   | | | | | | |   | | | | | | +------------- Overvoltage                     *          *
 *   | | | | | | |   | | | | | | | +----------- Undervoltage                    *          *
 *   | | | | | | |   | | | | | | | |                                            *          *
 *   | | | | | | |   | | | | | | | |         SENSOR SUPPLY 4 (1 of second chip) *          *
 *   | | | | | | |   | | | | | | | | +--------- 5V                              *          *
 *   | | | | | | |   | | | | | | | | | +------- 3,3V                            *          *
 *   | | | | | | |   | | | | | | | | | | +----- Overvoltage                     *          *
 *   | | | | | | |   | | | | | | | | | | | +--- Undervoltage                    *          *
 *   | | | | | | |   | | | | | | | | | | | | ************************************          *
 *   | | | | | | |   | | | | | | | | | | | |                                               *
 *   | | | | | | |   | | | | | | | | | | | |                        ***FIRST CHIP****      *
 *   | | | | | | |   | | | | | | | | | | | |                                        *      *
 *   | | | | | | |   | | | | | | | | | | | |                        SENSOR SUPPLY 3 *      *
 *   | | | | | | |   | | | | | | | | | | | | +------------------------ 5V           *      *
 *   | | | | | | |   | | | | | | | | | | | | | +---------------------- 3,3V         *      *
 *   | | | | | | |   | | | | | | | | | | | | | | +-------------------- Overvoltage  *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | +------------------ Undervoltage *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | |                                *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | |                SENSOR SUPPLY 2 *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | | +---------------- 5V           ********
 *   | | | | | | |   | | | | | | | | | | | | | | | | | +-------------- 3,3V         *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | +------------ Overvoltage  *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | +---------- Undervoltage *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | |                        *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | |        SENSOR SUPPLY 1 *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | +-------- 5V           *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | +------ 3,3V         *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | +---- Overvoltage  *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | | +-- Undervoltage *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | | | ****************
 *   V V V V V V V   V V V V V V V V V V V V V V V V V V V V V V V V
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |N| | | | | | |0| | | | | | | | | | | | | | | | | | | | | | | | | diagSensorSupply_u32
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |               |               |       |  SS3  |  SS2  |  SS1  |
 *
 * =================================================================================================
 *
 * \param           void
 * \return          uint32          bit coded error information
 *                                Sensor Supply 1
 * \retval                          bit0 : ERROR  Undervoltage
 * \retval                          bit1 : ERROR  Overvoltage
 * \retval                          bit2 : CONFIG 3,3V
 * \retval                          bit3 : CONFIG 5V
 *                                Sensor Supply 2
 * \retval                          bit4 : ERROR  Undervoltage
 * \retval                          bit5 : ERROR  Overvoltage
 * \retval                          bit6 : CONFIG 3,3V
 * \retval                          bit7 : CONFIG 5V
 *                                Sensor Supply 3
 * \retval                          bit8 : ERROR  Undervoltage
 * \retval                          bit9 : ERROR  Overvoltage
 * \retval                          bit10: CONFIG 3,3V
 * \retval                          bit11: CONFIG 5V
 *                                Sensor Supply 4 (1 of second chip)
 * \retval                          bit0 : ERROR  Undervoltage
 * \retval                          bit1 : ERROR  Overvoltage
 * \retval                          bit2 : CONFIG 3,3V
 * \retval                          bit3 : CONFIG 5V
 *                                Sensor Supply 5 (2 of second chip)
 * \retval                          bit4 : ERROR  Undervoltage
 * \retval                          bit5 : ERROR  Overvoltage
 * \retval                          bit6 : CONFIG 3,3V
 * \retval                          bit7 : CONFIG 5V
 *                                Sensor Supply 6 (3 of second chip)
 * \retval                          bit8 : ERROR  Undervoltage
 * \retval                          bit9 : ERROR  Overvoltage
 * \retval                          bit10: CONFIG 3,3V
 * \retval                          bit11: CONFIG 5V
 *
 * \retval                          bit28: info if dsm report for errors active (second chip)
 * \retval                          bit29: info COM error                       (second chip)
 * \retval                          bit30: info SPI error                       (second chip)
 * \retval                          bit28: info if dsm report for errors active
 * \retval                          bit29: info COM error
 * \retval                          bit30: info SPI error
 * \retval                          bit31: updated since last call
*/
#define PWR_DIAGSS_NULL        CY320_DIAGSS_NULL
#define PWR_DIAGSS_SS1_UV      CY320_DIAGSS_SS1_UV
#define PWR_DIAGSS_SS1_OV      CY320_DIAGSS_SS1_OV
#define PWR_DIAGSS_SS1_3V      CY320_DIAGSS_SS1_3V
#define PWR_DIAGSS_SS1_5V      CY320_DIAGSS_SS1_5V
#define PWR_DIAGSS_SS2_UV      CY320_DIAGSS_SS2_UV
#define PWR_DIAGSS_SS2_OV      CY320_DIAGSS_SS2_OV
#define PWR_DIAGSS_SS2_3V      CY320_DIAGSS_SS2_3V
#define PWR_DIAGSS_SS2_5V      CY320_DIAGSS_SS2_5V
#define PWR_DIAGSS_SS3_UV      CY320_DIAGSS_SS3_UV
#define PWR_DIAGSS_SS3_OV      CY320_DIAGSS_SS3_OV
#define PWR_DIAGSS_SS3_3V      CY320_DIAGSS_SS3_3V
#define PWR_DIAGSS_SS3_5V      CY320_DIAGSS_SS3_5V
#define PWR_DIAGSS_SS4_UV      CY320_DIAGSS_SS4_UV
#define PWR_DIAGSS_SS4_OV      CY320_DIAGSS_SS4_OV
#define PWR_DIAGSS_SS4_3V      CY320_DIAGSS_SS4_3V
#define PWR_DIAGSS_SS4_5V      CY320_DIAGSS_SS4_5V
#define PWR_DIAGSS_SS5_UV      CY320_DIAGSS_SS5_UV
#define PWR_DIAGSS_SS5_OV      CY320_DIAGSS_SS5_OV
#define PWR_DIAGSS_SS5_3V      CY320_DIAGSS_SS5_3V
#define PWR_DIAGSS_SS5_5V      CY320_DIAGSS_SS5_5V
#define PWR_DIAGSS_SS6_UV      CY320_DIAGSS_SS6_UV
#define PWR_DIAGSS_SS6_OV      CY320_DIAGSS_SS6_OV
#define PWR_DIAGSS_SS6_3V      CY320_DIAGSS_SS6_3V
#define PWR_DIAGSS_SS6_5V      CY320_DIAGSS_SS6_5V

#define PWR_DIAGSS_DSM2        CY320_DIAGSS_DSM2
#define PWR_DIAGSS_COM2        CY320_DIAGSS_COM2
#define PWR_DIAGSS_SPI2        CY320_DIAGSS_SPI2
#define PWR_DIAGSS_DSM         CY320_DIAGSS_DSM
#define PWR_DIAGSS_COM         CY320_DIAGSS_COM
#define PWR_DIAGSS_SPI         CY320_DIAGSS_SPI
#define PWR_DIAGSS_NEW         CY320_DIAGSS_NEW


#ifdef CY320_SSP_CTRL_RUNTIME
typedef enum
{
    FIN_WAK,
    MRLY,
    PWR_SPLY,
    CAN_TDI,
    T15_RST,
    MM_RST,
    CAN_WAK,
    CAN_WAK_COND,
    CAN_STBY,
    STC_ENA,
    STC_MODE_WAK,
    CLR_PWRFAIL_STBY,
    T15,
    WDA,
    RSTC_UV,
    ABE,
    LOCK_STC,
    ABE_ALL,
	PIN_WAK,
	CY320_SSP_CTRL
} Pwr_SigNames_t;
#else
typedef enum
{
    FIN_WAK,
    MRLY,
    PWR_SPLY,
    CAN_TDI,
    T15_RST,
    MM_RST,
    CAN_WAK,
    CAN_WAK_COND,
    CAN_STBY,
    STC_ENA,
    STC_MODE_WAK,
    CLR_PWRFAIL_STBY,
    T15,
    WDA,
    RSTC_UV,
    ABE,
    LOCK_STC,
    ABE_ALL,
	PIN_WAK
} Pwr_SigNames_t;
#endif


/* routing for Pwr_Set(SIGNAL, STATE) */
#define Pwr_Set(SIGNAL, STATE)               PWR_SETFUNC_##SIGNAL(STATE)

/*  ----------------------------------------------------------------------------------------------*/
/*  Cy320_PowerSet(Sequenceindex         ,  Bitmask                , Bitvalue )                   */
/*  ----------------------------------------------------------------------------------------------*/
#define PWR_SETFUNC_FIN_WAK(STATE)          (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_STATUS,  CY320_STAT_FIN_WAK_MASK, CY320_STAT_FIN_WAK_SET)      :\
    Cy320_PowerSet(CY320_WP_IDX_WR_STATUS,  CY320_STAT_FIN_WAK_MASK, CY320_STAT_FIN_WAK_CLEAR))

#define PWR_SETFUNC_MRLY(STATE)             (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_STATUS,  CY320_STAT_MRLY_MASK,    CY320_STAT_MRLY_CLEAR)       :\
    Cy320_PowerSet(CY320_WP_IDX_WR_STATUS,  CY320_STAT_MRLY_MASK,    CY320_STAT_MRLY_SET))

#define PWR_SETFUNC_PWR_SPLY(STATE)         (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_STATUS,  CY320_STAT_PSOFF_MASK,   CY320_STAT_PSOFF_CLEAR)      :\
    Cy320_PowerSet(CY320_WP_IDX_WR_STATUS,  CY320_STAT_PSOFF_MASK,   CY320_STAT_PSOFF_SET))
/*------------------------------------------------------------------------------------------------*/
#define PWR_SETFUNC_CAN_TDI(STATE)          (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_CAN_TDI_MASK, CY320_INIT_CAN_TDI_SET)      :\
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_CAN_TDI_MASK, CY320_INIT_CAN_TDI_CLEAR))

#define PWR_SETFUNC_T15_RST(STATE)          (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_T15_RST_MASK, CY320_INIT_T15_RST_CLEAR)    :\
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_T15_RST_MASK, CY320_INIT_T15_RST_SET))

#define PWR_SETFUNC_MM_RST(STATE)           (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_MM_RST_MASK,  CY320_INIT_MM_RST_SET)       :\
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_MM_RST_MASK,  CY320_INIT_MM_RST_CLEAR))

#define PWR_SETFUNC_RSTC_UV(STATE)          (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_RSTC_UV_MASK, CY320_INIT_RSTC_UV_SET)      :\
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_RSTC_UV_MASK, CY320_INIT_RSTC_UV_CLEAR))

#define PWR_SETFUNC_LOCK_STC(STATE)          (((STATE) != FALSE) ?                                 \
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_LOCK_STC_MASK, CY320_INIT_LOCK_STC_SET)    :\
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT,    CY320_INIT_LOCK_STC_MASK, CY320_INIT_LOCK_STC_CLEAR))
/*------------------------------------------------------------------------------------------------*/
#define PWR_SETFUNC_CAN_WAK(STATE)          (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_WAK,     CY320_WAK_CAN_WR_MASK,   CY320_WAK_CAN_WR_SET)        :\
    Cy320_PowerSet(CY320_WP_IDX_WR_WAK,     CY320_WAK_CAN_WR_MASK,   CY320_WAK_CAN_WR_CLEAR))

#define PWR_SETFUNC_CAN_STBY(STATE)         (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_WAK,     CY320_WAK_CAN_STBY_MASK, CY320_WAK_CAN_STBY_SET)      :\
    Cy320_PowerSet(CY320_WP_IDX_WR_WAK,     CY320_WAK_CAN_STBY_MASK, CY320_WAK_CAN_STBY_CLEAR))

#define PWR_SETFUNC_CAN_WAK_COND(STATE)     (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_STC_CON,                                                        \
                   CY320_STCC_CAN_WAK_COND_MASK, CY320_STCC_CAN_WAK_COND_SET)                     :\
    Cy320_PowerSet(CY320_WP_IDX_WR_STC_CON,                                                        \
                   CY320_STCC_CAN_WAK_COND_MASK, CY320_STCC_CAN_WAK_COND_CLEAR))
/*------------------------------------------------------------------------------------------------*/
#define PWR_SETFUNC_CLR_PWRFAIL_STBY(STATE) (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_STC_CON, CY320_STCC_PF_STBY_MASK, CY320_STCC_PF_STBY_CLEAR)    :\
    Cy320_PowerSet(CY320_WP_IDX_WR_STC_CON, CY320_STCC_PF_STBY_MASK, 0))

#define PWR_SETFUNC_STC_ENA(STATE)          (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_STC_CON, CY320_STCC_ENABLE_MASK,  CY320_STCC_ENABLE_SET)       :\
    Cy320_PowerSet(CY320_WP_IDX_WR_STC_CON, CY320_STCC_ENABLE_MASK,  CY320_STCC_ENABLE_CLEAR))

#define PWR_SETFUNC_STC_MODE_WAK(STATE)     (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_STC_CON, CY320_STCC_MODE_MASK,    CY320_STCC_MODE_WAK)         :\
    Cy320_PowerSet(CY320_WP_IDX_WR_STC_CON, CY320_STCC_MODE_MASK,    CY320_STCC_MODE_OFF))
/*------------------------------------------------------------------------------------------------*/
#ifdef CY320_SSP_CTRL_RUNTIME

#define PWR_SETFUNC_CY320_SSP_CTRL(STATE)   (((STATE) != FALSE) ?                                  \
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT, CY320_INIT_G23CONF_MASK, CY320_SENSORSUPPLY_INIT_VALUE)   :\
    Cy320_PowerSet(CY320_WP_IDX_WR_INIT, CY320_INIT_G23CONF_MASK, CY320_INIT_G23CONF_CLEAR))

#endif
/*------------------------------------------------------------------------------------------------*/

#define Pwr_GetActv                          Cy320_PowerGetActv

/* routing for Pwr_Get(SIGNAL) */
#define Pwr_Get(SIGNAL)               (bit8)(PWR_GETFUNC_##SIGNAL)

/*  ----------------------------------------------------------------------------------------------*/
/*  Cy320_PowerGet(Sequenceindex         ,  Bitmask)                                              */
/*  ----------------------------------------------------------------------------------------------*/
#define PWR_GETFUNC_WDA                      Cy320_PowerGet(CY320_RP_IDX_RD_STATUS,            \
                                                            CY320_STAT_WDA_MASK)
#define PWR_GETFUNC_T15                      Cy320_PowerGet(CY320_RP_IDX_RD_STATUS,            \
                                                            CY320_STAT_T15_MASK)
#define PWR_GETFUNC_FIN_WAK                  Cy320_PowerGet(CY320_RP_IDX_RD_STATUS,            \
                                                            CY320_STAT_FIN_WAK_MASK)
#define PWR_GETFUNC_PIN_WAK                  Cy320_PowerGet(CY320_RP_IDX_RD_STATUS,            \
                                                            CY320_STAT_WAK_PIN_MASK)
#define PWR_GETFUNC_MRLY                  (1^Cy320_PowerGet(CY320_RP_IDX_RD_STATUS,            \
                                                            CY320_STAT_MRLY_MASK)              )
#define PWR_GETFUNC_PWR_SPLY              (1^Cy320_PowerGet(CY320_RP_IDX_RD_STATUS,            \
                                                            CY320_STAT_PSOFF_MASK)             )
#define PWR_GETFUNC_CAN_TDI                  Cy320_PowerGet(CY320_RP_IDX_RD_INIT,              \
                                                            CY320_INIT_CAN_TDI_MASK)
#define PWR_GETFUNC_T15_RST               (1^Cy320_PowerGet(CY320_RP_IDX_RD_INIT,              \
                                                            CY320_INIT_T15_RST_MASK)           )
#define PWR_GETFUNC_MM_RST                   Cy320_PowerGet(CY320_RP_IDX_RD_INIT,              \
                                                            CY320_INIT_MM_RST_MASK)
#define PWR_GETFUNC_RSTC_UV                  Cy320_PowerGet(CY320_RP_IDX_RD_INIT,              \
                                                            CY320_INIT_RSTC_UV_MASK)
#define PWR_GETFUNC_LOCK_STC                 Cy320_PowerGet(CY320_RP_IDX_RD_INIT,              \
                                                            CY320_INIT_LOCK_STC_MASK)
#define PWR_GETFUNC_CAN_WAK                  Cy320_PowerGet(CY320_RP_IDX_RD_WAK,               \
                                                            CY320_WAK_CAN_RD_MASK)
#define PWR_GETFUNC_CAN_WAK_COND             Cy320_PowerGet(CY320_RP_IDX_RD_WAK,               \
                                                            CY320_WAK_CAN_COND_MASK)
#define PWR_GETFUNC_CAN_STBY                 Cy320_PowerGet(CY320_RP_IDX_RD_WAK,               \
                                                            CY320_WAK_CAN_STBY_MASK)
#define PWR_GETFUNC_STC_ENA                  Cy320_PowerGet(CY320_RP_IDX_RD_STC_LOW,           \
                                                            CY320_STCL_ENABLE_MASK)
#define PWR_GETFUNC_STC_MODE_WAK             Cy320_PowerGet(CY320_RP_IDX_RD_STC_LOW,           \
                                                            CY320_STCL_MODE_MASK)
#define PWR_GETFUNC_CLR_PWRFAIL_STBY         Cy320_PowerGet(CY320_RP_IDX_RD_STC_LOW,           \
                                                            CY320_STCL_PF_STBY_MASK)

/* routing for Pwr_GetWakSrc() */
#define Pwr_GetWakSrc()                      Cy320_PowerGet(CY320_RP_IDX_RD_WAK,               \
                                                            CY320_WAK_SRC_MASK)
/* return values of function Pwr_GetWakSrc() */
#define PWR_PIN_WAK       CY320_WAK_SRC_PIN     /* Given by device driver */
#define PWR_STC_WAK       CY320_WAK_SRC_STC     /* Given by device driver */
#define PWR_CAN_WAK       CY320_WAK_SRC_CAN     /* Given by device driver */
#define PWR_WAK_SRC_PIN   PWR_PIN_WAK           /* redefine new names     */
#define PWR_WAK_SRC_STC   PWR_STC_WAK           /* redefine new names     */
#define PWR_WAK_SRC_CAN   PWR_CAN_WAK           /* redefine new names     */

/* routing for Pwr_SetStcVal(VALUE) */
#define Pwr_SetStcVal(VALUE)                 Cy320_SetStcVal(VALUE)

/* routing for Pwr_GetStcVal() */
#define Pwr_GetStcVal()                      Cy320_GetStcVal()

/* routing for Pwr_GetWDANow() */
#define Pwr_GetWDANow(VALUE)                 Cy320_GetWDANow(VALUE)

/* routing for Pwr_GetShDwn(SIGNAL) */
#define Pwr_GetShDwn(SIGNAL)          (bit8)(PWR_GETSHDWNFUNC_##SIGNAL)
#define PWR_GETSHDWNFUNC_T15                 Cy320_PwrGetShDwn(CY320_RP_IDX_RD_STATUS,         \
                                                               CY320_STAT_T15_MASK)

/* routing for Pwr_GetShDwnWakSrc() */
#define Pwr_GetShDwnWakSrc()                 Cy320_PwrGetShDwn(CY320_RP_IDX_RD_WAK,            \
                                                               CY320_WAK_SRC_MASK)

/* #ifndef CJ930_IN_SYSTEM */
#endif

/*  ############################################################################################  */
/*  ############################################################################################  */
/*  ############################################################################################  */
/*  ###                                                                                      ###  */
/*  ###                                                                                      ###  */
/*  ###             ######     ##    ##     #######     ########    ##########               ###  */
/*  ###            ########    ##    ##    #########    ########    ##########               ###  */
/*  ###           ###          ##    ##           ##          ##            ##               ###  */
/*  ###           ##           ########           ##          ##           ##                ###  */
/*  ###           ##            #######       #####      ######         ######               ###  */
/*  ###           ##                 ##           ##    ##               ##                  ###  */
/*  ###           ###                ##           ##    ##              ##                   ###  */
/*  ###            ########    #######     #########    ########       ##                    ###  */
/*  ###             ######     #######      #######     ########      ##                     ###  */
/*  ###                                                                                      ###  */
/*  ###                                                                                      ###  */
/*  ############################################################################################  */
/*  ############################################################################################  */
/*  ############################################################################################  */
#if defined(CY327_IN_SYSTEM)

#define Pwr_TstImp                     Cy327_TstImp
#define Pwr_GetErrorInfo               Cy327_GetErrorInfo
#define Pwr_GetSupplyInfo              Cy327_GetSupplyInfo


/**************************************************************************************************/
/* definitions testimpulse/diagn main relay                                                       */
/**************************************************************************************************/
/*
 *   updated since last call
 *   | Testimpulse finished
 *   | | Testimpulse T0 running
 *   | | | Testimpulse T0 requested
 *   | | | |
 *   | | | | sensor supply3 error
 *   | | | | | sensor supply2 error
 *   | | | | | | sensor supply1 error
 *   | | | | | | |                                   SPI error
 *   | | | | | | | T1-Testimpulse running            | COM error
 *   | | | | | | | | T1-Testimpulse requested        | |
 *   | | | | | | | | |                               | | +------------valid flag for bit4
 *   | | | | | | | | | sensor supply6 error          | | | +----------Open load error
 *   | | | | | | | | | | sensor supply5 error        | | | |
 *   | | | | | | | | | | | sensor supply4(EVT)error  | | | | +--------valid flag for bit2
 *   | | | | | | | | | | | |                         | | | | | +------short to ground
 *   | | | | | | | | | | | | T2-Testimpulse running  | | | | | |
 *   | | | | | | | | | | | | | T2-Testimpulse requ.  | | | | | | +----valid flag for bit0
 *   | | | | | | | | | | | | | | sensor supply8 error| | | | | | | +--short to battery
 *   | | | | | | | | | | | | | | | sensor supply7 err| | | | | | | |
 *   | | | | | | | | | | | | | | | |                 | | | | | | | |
 *   | | | | | | | | | | | | | | | |                 | | | | | | | |
 *   | | | | | | | | | | | | | | | |                 | | | | | | | |
 *   | | | | | | | | | | | | | | | |                 | | | | | | | |
 *   V V V V V V V V V V V V V V V V                 V V V V V V V V
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |N| | | | | | | | | | | | | | | |0|0|0|0|0|0|0|0| | | | | | | | | diagMainRelay_u32
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |               |               |               |7 6 5 4|3 2 1 0|
 *
 * =================================================================================================
 *
 * \param           void
 * \return          uint32          bit coded error information
 * \retval                          bit0 : short to battery
 * \retval                          bit1 : valid flag for bit0
 * \retval                          bit2 : short to ground
 * \retval                          bit3 : valid flag for bit2
 * \retval                          bit4 : open load
 * \retval                          bit5 : valid flag for bit4
 * \retval                          bit6 : info COM error
 * \retval                          bit7 : info SPI error
 * \retval                          bit16: info sensor supply 7 error (if second chip available)
 * \retval                          bit17: info sensor supply 8 error (if second chip available)
 * \retval                          bit18: testimpulse T2 request  flag
 * \retval                          bit19: testimpulse T2 running  flag
 * \retval                          bit20: info sensor supply 4 error
 * \retval                          bit21: info sensor supply 5 error (if second chip available)
 * \retval                          bit22: info sensor supply 6 error (if second chip available)
 * \retval                          bit23: testimpulse T1 request  flag
 * \retval                          bit24: testimpulse T1 running  flag
 * \retval                          bit25: info sensor supply 1 error
 * \retval                          bit26: info sensor supply 2 error
 * \retval                          bit27: info sensor supply 3 error
 * \retval                          bit28: testimpulse T0 request  flag
 * \retval                          bit29: testimpulse T0 running  flag
 * \retval                          bit30: testimpulse finished flag
 * \retval                          bit31: updated since last call
*/
#define PWR_DIAGMR_SCB         CY327_DIAGMR_SCB
#define PWR_DIAGMR_SCB_VALID   CY327_DIAGMR_SCB_VALID
#define PWR_DIAGMR_SCG         CY327_DIAGMR_SCG
#define PWR_DIAGMR_SCG_VALID   CY327_DIAGMR_SCG_VALID
#define PWR_DIAGMR_OL          CY327_DIAGMR_OL
#define PWR_DIAGMR_OL_VALID    CY327_DIAGMR_OL_VALID
#define PWR_DIAGMR_COM         CY327_DIAGMR_COM
#define PWR_DIAGMR_SPI         CY327_DIAGMR_SPI
#define PWR_DIAGMR_T2_TSTREQ   CY327_DIAGMR_T2_TSTREQ
#define PWR_DIAGMR_T2_TSTRUN   CY327_DIAGMR_T2_TSTRUN
#define PWR_DIAGMR_SS4         CY327_DIAGMR_SS4
#define PWR_DIAGMR_SS5         CY327_DIAGMR_SS5
#define PWR_DIAGMR_SS6         CY327_DIAGMR_SS6
#define PWR_DIAGMR_T1_TSTREQ   CY327_DIAGMR_T1_TSTREQ
#define PWR_DIAGMR_T1_TSTRUN   CY327_DIAGMR_T1_TSTRUN
#define PWR_DIAGMR_SS1         CY327_DIAGMR_SS1
#define PWR_DIAGMR_SS2         CY327_DIAGMR_SS2
#define PWR_DIAGMR_SS3         CY327_DIAGMR_SS3
#define PWR_DIAGMR_T0_TSTREQ   CY327_DIAGMR_T0_TSTREQ
#define PWR_DIAGMR_T0_TSTRUN   CY327_DIAGMR_T0_TSTRUN
#define PWR_DIAGMR_TSTFIN      CY327_DIAGMR_TSTFIN
#define PWR_DIAGMR_NEW         CY327_DIAGMR_NEW

#define PWR_DIAGMR_TSTREQ   (PWR_DIAGMR_T0_TSTREQ | PWR_DIAGMR_T1_TSTREQ | PWR_DIAGMR_T2_TSTREQ)
#define PWR_DIAGMR_TSTRUN   (PWR_DIAGMR_T0_TSTRUN | PWR_DIAGMR_T1_TSTRUN | PWR_DIAGMR_T2_TSTRUN)

/**************************************************************************************************/
/* definitions sensor supply information                                                          */
/**************************************************************************************************/
/*   updated since last call
 *   |
 *   |      ***FIRST CHIP*******
 *   | +------- SPI error      *
 *   | | +----- COM error      *************************************************************
 *   | | | +--- DSM reporting  *                                                           *
 *   | | | | *******************                                                           *
 *   | | | |                                ***SECOND CHIP (if available)********          *
 *   | | | |                                                                    *          *
 *   | | | |                                (all bits set to 0 if second chip   *          *
 *   | | | |                                 is not available)                  *          *
 *   | | | |                                                                    *          *
 *   | | | | +------------------------------- SPI error                         *          *
 *   | | | | | +----------------------------- COM error                         *          *
 *   | | | | | | +--------------------------- DSM reporting                     *          *
 *   | | | | | | | +------------------------- Regulator Over Temparature                                                            *          *
 *   | | | | | | | |                         SENSOR SUPPLY 8 (4 of second chip) *          *
 *   | | | | | | | | +------------------------- SCG                             *          *
 *   | | | | | | | | | +----------------------- Overvoltage                     *          *
 *   | | | | | | | | | | +--------------------- Undervoltage                    *          *
 *   | | | | | | | | | | |                                                      *          *
 *   | | | | | | | | | | |                   SENSOR SUPPLY 7 (3 of second chip) *          *
 *   | | | | | | | | | | | +------------------- SCG                             *          *
 *   | | | | | | | | | | | | +----------------- Overvoltage                     *          *
 *   | | | | | | | | | | | | | +--------------- Undervoltage                    *          *
 *   | | | | | | | | | | | | | |                                                *          *
 *   | | | | | | | | | | | | | |             SENSOR SUPPLY 6 (2 of second chip) *          *
 *   | | | | | | | | | | | | | | +------------- SCG                             *          *
 *   | | | | | | | | | | | | | | | +----------- Overvoltage                     *          *
 *   | | | | | | | | | | | | | | | | +--------- Undervoltage                    *          *
 *   | | | | | | | | | | | | | | | | |                                          *          *
 *   | | | | | | | | | | | | | | | | |       SENSOR SUPPLY 5 (1 of second chip) *          *
 *   | | | | | | | | | | | | | | | | | +------- SCG                             *          *
 *   | | | | | | | | | | | | | | | | | | +----- Overvoltage                     *          *
 *   | | | | | | | | | | | | | | | | | | | +--- Undervoltage                    *          *
 *   | | | | | | | | | | | | | | | | | | | |         ****************************          *
 *   | | | | | | | | | | | | | | | | | | | |                    **FIRST CHIP*********      *
 *   | | | | | | | | | | | | | | | | | | | |                    SENSOR SUPPLY 4     *      *
 *   | | | | | | | | | | | | | | | | | | | | +-------------------- SCG              *      *
 *   | | | | | | | | | | | | | | | | | | | | | +------------------ Overvoltage      ********
 *   | | | | | | | | | | | | | | | | | | | | | | +---------------- Undervoltage     *
 *   | | | | | | | | | | | | | | | | | | | | | | |                                  *
 *   | | | | | | | | | | | | | | | | | | | | | | |              SENSOR SUPPLY 3     *
 *   | | | | | | | | | | | | | | | | | | | | | | | +-------------- SCG              *
 *   | | | | | | | | | | | | | | | | | | | | | | | | +------------ Overvoltage      *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | +---------- Undervoltage     *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | |        SENSOR SUPPLY 2     *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | | +-------- SCG              *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | | | +------ Overvoltage      *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | | | | +---- Undervoltage     *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | | | | |  SENSOR SUPPLY 1     *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | | | | | +------ SCG          *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | +---- Overvoltage  *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | +-- Undervoltage *
 *   | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | ****************
 *   V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V V
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |N| | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | diagSensorSupply_u32
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |               | SS8 | SS7 | SS6 | SS5 | SS4 | SS3 | SS2 | SS1 |
 *
 * =================================================================================================
 *
 * \param           void
 * \return          uint32          bit coded error information
 *                                Sensor Supply 1
 * \retval                          bit0  : ERROR  Undervoltage
 * \retval                          bit1  : ERROR  Overvoltage
 * \retval                          bit2  : ERROR  SCG
 *                                Sensor Supply 2
 * \retval                          bit3  : ERROR  Undervoltage
 * \retval                          bit4  : ERROR  Overvoltage
 * \retval                          bit5  : ERROR  SCG
 *                                Sensor Supply 3
 * \retval                          bit6  : ERROR  Undervoltage
 * \retval                          bit7  : ERROR  Overvoltage
 * \retval                          bit8  : ERROR  SCG
 *                                Sensor Supply 4 (Ext Voltage Tracker Input)
 * \retval                          bit9  : ERROR  Undervoltage
 * \retval                          bit10 : ERROR  Overvoltage
 * \retval                          bit11 : ERROR  SCG
 *                                Sensor Supply 5 (1 of second chip)
 * \retval                          bit12 : ERROR  Undervoltage
 * \retval                          bit13 : ERROR  Overvoltage
 * \retval                          bit14 : ERROR  SCG
 *                                Sensor Supply 6 (2 of second chip)
 * \retval                          bit15 : ERROR  Undervoltage
 * \retval                          bit16 : ERROR  Overvoltage
 * \retval                          bit17 : ERROR  SCG
 *                                Sensor Supply 7 (3 of second chip)
 * \retval                          bit18 : ERROR  Undervoltage
 * \retval                          bit19 : ERROR  Overvoltage
 * \retval                          bit20 : ERROR  SCG
 *                                Sensor Supply 8 (4 of second chip)
 * \retval                          bit21 : ERROR  Undervoltage
 * \retval                          bit22 : ERROR  Overvoltage
 * \retval                          bit23 : ERROR  SCG
 *
 * \retval                          bit25: info if dsm report for errors active (second chip)
 * \retval                          bit26: info COM error                       (second chip)
 * \retval                          bit27: info SPI error                       (second chip)
 * \retval                          bit28: info if dsm report for errors active
 * \retval                          bit29: info COM error
 * \retval                          bit30: info SPI error
 * \retval                          bit31: updated since last call
*/
#define PWR_DIAGSS_NULL        CY327_DIAGSS_NULL
#define PWR_DIAGSS_SS1_UV      CY327_DIAGSS_SS1_UV
#define PWR_DIAGSS_SS1_OV      CY327_DIAGSS_SS1_OV
#define PWR_DIAGSS_SS1_SCG     CY327_DIAGSS_SS1_SCG
#define PWR_DIAGSS_SS2_UV      CY327_DIAGSS_SS2_UV
#define PWR_DIAGSS_SS2_OV      CY327_DIAGSS_SS2_OV
#define PWR_DIAGSS_SS2_SCG     CY327_DIAGSS_SS2_SCG
#define PWR_DIAGSS_SS3_UV      CY327_DIAGSS_SS3_UV
#define PWR_DIAGSS_SS3_OV      CY327_DIAGSS_SS3_OV
#define PWR_DIAGSS_SS3_SCG     CY327_DIAGSS_SS3_SCG
#define PWR_DIAGSS_SS4_UV      CY327_DIAGSS_SS4_UV
#define PWR_DIAGSS_SS4_OV      CY327_DIAGSS_SS4_OV
#define PWR_DIAGSS_SS4_SCG     CY327_DIAGSS_SS4_SCG
#define PWR_DIAGSS_SS5_UV      CY327_DIAGSS_SS5_UV
#define PWR_DIAGSS_SS5_OV      CY327_DIAGSS_SS5_OV
#define PWR_DIAGSS_SS5_SCG     CY327_DIAGSS_SS5_SCG
#define PWR_DIAGSS_SS6_UV      CY327_DIAGSS_SS6_UV
#define PWR_DIAGSS_SS6_OV      CY327_DIAGSS_SS6_OV
#define PWR_DIAGSS_SS6_SCG     CY327_DIAGSS_SS6_SCG
#define PWR_DIAGSS_SS7_UV      CY327_DIAGSS_SS7_UV
#define PWR_DIAGSS_SS7_OV      CY327_DIAGSS_SS7_OV
#define PWR_DIAGSS_SS7_SCG     CY327_DIAGSS_SS7_SCG
#define PWR_DIAGSS_SS8_UV      CY327_DIAGSS_SS8_UV
#define PWR_DIAGSS_SS8_OV      CY327_DIAGSS_SS8_OV
#define PWR_DIAGSS_SS8_SCG     CY327_DIAGSS_SS8_SCG
#define PWR_DIAGSS_OT          CY327_DIAGSS_OT
#define PWR_DIAGSS_DSM2        CY327_DIAGSS_DSM2
#define PWR_DIAGSS_COM2        CY327_DIAGSS_COM2
#define PWR_DIAGSS_SPI2        CY327_DIAGSS_SPI2
#define PWR_DIAGSS_DSM         CY327_DIAGSS_DSM
#define PWR_DIAGSS_COM         CY327_DIAGSS_COM
#define PWR_DIAGSS_SPI         CY327_DIAGSS_SPI
#define PWR_DIAGSS_NEW         CY327_DIAGSS_NEW

typedef enum
{

    FIN_WAK,
    FIN_WAK_E,
    MRLY,
    PWR_SPLY,
    CAN_TDI,
    T15_RST,
    MM_RST,
    RSTC_UV,
    LOCK_STC,
    CAN_WAK,
    CAN_STBY,
    CAN_WAK_COND,
    CLR_PWRFAIL_STBY,
    STC_ENA,
    STC_MODE_WAK,
    BO_ENA,
    BOOST_TLIM,
    VPR_CONF,
	G1,
	G2,
	G3
} Pwr_SigNames_t;



/* routing for Pwr_Set(SIGNAL, STATE) */
#define Pwr_Set(SIGNAL, STATE)               PWR_SETFUNC_##SIGNAL(STATE)

/*  ----------------------------------------------------------------------------------------------*/
/*  Cy327_PowerSet(Sequenceindex         ,  Bitmask                , Bitvalue )                   */
/*  ----------------------------------------------------------------------------------------------*/
#define PWR_SETFUNC_FIN_WAK(st)             CY327_SET_FINWAK(st)

#define PWR_SETFUNC_FIN_WAK_E(st)           CY327_SET_FINWAKE(st)

#define PWR_SETFUNC_MRLY(st)                CY327_SET_NL(!(st))        /* inverse */

#define PWR_SETFUNC_PWR_SPLY(st)            CY327_SET_PSOFF(!(st))     /* inverse */
/*------------------------------------------------------------------------------------------------*/
/* Sensor supply control                                                                          */ 
/*------------------------------------------------------------------------------------------------*/
#define PWR_SETFUNC_G1(st)       Cy327_SensorSupplyControl(1, (!(st)), 1) /* inverse */

#define PWR_SETFUNC_G2(st)       Cy327_SensorSupplyControl(2, (!(st)), 1) /* inverse */

#define PWR_SETFUNC_G3(st)       Cy327_SensorSupplyControl(3, (!(st)), 1) /* inverse */

/*------------------------------------------------------------------------------------------------*/

#define PWR_SETFUNC_CAN_TDI(st)             CY327_SET_CANTDI(st)

#define PWR_SETFUNC_T15_RST(st)             CY327_SET_NLRST(!(st))     /* inverse */

#define PWR_SETFUNC_MM_RST(st)              CY327_SET_WDR(st)

#define PWR_SETFUNC_RSTC_UV(st)             CY327_SET_RSTCUV(st)

#define PWR_SETFUNC_LOCK_STC(STATE)         /* not yet implemented */
/*------------------------------------------------------------------------------------------------*/
#define PWR_SETFUNC_CAN_WAK(st)             CY327_SET_CANWAKEN(st)

#define PWR_SETFUNC_CAN_STBY(st)            CY327_SET_CANSTBY(st)

#define PWR_SETFUNC_CAN_WAK_COND(st)        CY327_SET_CANWAKCOND(st)
/*------------------------------------------------------------------------------------------------*/
#define PWR_SETFUNC_CLR_PWRFAIL_STBY(st)    CY327_SET_PFUSUP(!(st))

#define PWR_SETFUNC_STC_ENA(st)             CY327_SET_STCEN(st)

#define PWR_SETFUNC_STC_MODE_WAK(st)        CY327_SET_STCMODE(st)
/*------------------------------------------------------------------------------------------------*/
/* Booster Functionality has time limitation of 2sec by enabling the TLIM Bit.if you disable the  */
/* Bit then time limitation is ignored but the project has to take care of Booster Enable time.   */
/* Continuously enabling the BOOSTER function at low voltage is not recommented                   */

#define PWR_SETFUNC_BO_ENA(st)              CY327_SET_BOEN(st)

#define PWR_SETFUNC_BOOST_TLIM(st)          CY327_SET_BOOSTTLIM(st)

#define PWR_SETFUNC_VPR_CONF(st)            CY327_SET_VPRCONF(st)

#define PWR_SETFUNC_AB1_LOCK_TST0(st)       CY327_SET_AB1_LOCK_TST0(st)

#if ((defined(CY327_NUM_CHIPS)) && (CY327_NUM_CHIPS >= 2))
/*------------------------------------------------------------------------------------------------*/
/*Pwr_set routine for the second CY327 chip                                                       */
#define PWR_SETFUNC_BO_ENA_2(st)              CY327_SET2_BOEN(st)

#define PWR_SETFUNC_BOOST_TLIM_2(st)          CY327_SET2_BOOSTTLIM(st)
#endif

/*------------------------------------------------------------------------------------------------*/

#define Pwr_GetActv                          Cy327_PowerGetActv

/* routing for Pwr_Get(SIGNAL) */
#define Pwr_Get(SIGNAL)               (bit8)(PWR_GETFUNC_##SIGNAL)

/*  ----------------------------------------------------------------------------------------------*/
/*  Cy327_PowerGet(Sequenceindex         ,  Bitmask)                                              */
/*  ----------------------------------------------------------------------------------------------*/
#define PWR_GETFUNC_WDA                      CY327_GET_WDA
#define PWR_GETFUNC_T15                      CY327_GET_ST
#define PWR_GETFUNC_FIN_WAK                  CY327_GET_FINWAK
#define PWR_GETFUNC_FIN_WAK_E                CY327_GET_FINWAKE

#define PWR_GETFUNC_PIN_WAK                  CY327_GET_WAKPIN1
#define PWR_GETFUNC_PIN1_WAK                 CY327_GET_WAKPIN1
#define PWR_GETFUNC_PIN2_WAK                 CY327_GET_WAKPIN2
#define PWR_GETFUNC_PIN3_WAK                 CY327_GET_WAKPIN3

#define PWR_GETFUNC_R_PIN_WAK                CY327_GET_RWAKPIN1
#define PWR_GETFUNC_R_PIN1_WAK               CY327_GET_RWAKPIN1
#define PWR_GETFUNC_R_PIN2_WAK               CY327_GET_RWAKPIN2
#define PWR_GETFUNC_R_PIN3_WAK               CY327_GET_RWAKPIN3
#define PWR_GETFUNC_MRLY                  (1^CY327_GET_NL)
#define PWR_GETFUNC_PWR_SPLY              (1^CY327_GET_PSOFF)
#define PWR_GETFUNC_CAN_TDI                  CY327_GET_CANTDI
#define PWR_GETFUNC_T15_RST               (1^CY327_GET_NLRST)
#define PWR_GETFUNC_MM_RST                   CY327_GET_WDR
#define PWR_GETFUNC_RSTC_UV                  CY327_GET_RSTCUV
#define PWR_GETFUNC_LOCK_STC                 todo
#define PWR_GETFUNC_CAN_WAK                  CY327_GET_CANWAK
#define PWR_GETFUNC_CAN_WAK_COND             CY327_GET_CANWAKCOND
#define PWR_GETFUNC_CAN_STBY                 CY327_GET_CANSTBY
#define PWR_GETFUNC_STC_ENA                  CY327_GET_STCEN
#define PWR_GETFUNC_STC_MODE_WAK             CY327_GET_STCMODE
#define PWR_GETFUNC_CLR_PWRFAIL_STBY         CY327_GET_PFUSUP

/* CY327_REGOV*/
#define PWR_GETFUNC_STC_UF                   CY327_GET_STCUF   /* 1 = Stopcounter underflow                       */
#define PWR_GETFUNC_VDD5_OV                  CY327_GET_VDD5OV  /* 1 = VDD5 Over Volage                            */
#define PWR_GETFUNC_VDD3_OV                  CY327_GET_VDD3OV  /* 1 = VDD3 Over Volage                            */
#define PWR_GETFUNC_VDDE_OV                  CY327_GET_VDDEOV  /* 1 = VDDE Over Volage                            */
#define PWR_GETFUNC_VDDL_OV                  CY327_GET_VDDLOV  /* 1 = VDDL Over Volage                            */

/* CY327_INIT*/
#define PWR_GETFUNC_G1_ST                    CY327_GET_G1     /* 1 = supply G1 enabled                            */
#define PWR_GETFUNC_G2_ST                    CY327_GET_G2     /* 1 = supply G2 enabled                            */
#define PWR_GETFUNC_G3_ST                    CY327_GET_G3     /* 1 = supply G3 enabled                            */


/* CY327_RD_MR*/
#define PWR_GETFUNC_MRLY_ST                  CY327_GET_MRST   /* 0 = MR is off;  1 = MR is on                     */
#define PWR_GETFUNC_MRLY_WAK_ST              CY327_GET_RSETMR /* 1 = main relay was activated by Wakeup           */


/* CY327_CAN_DIAG  */
#define PWR_GETFUNC_CH_SCB                   CY327_GET_CHSCB
#define PWR_GETFUNC_CL_SCB                   CY327_GET_CLSCB
#define PWR_GETFUNC_CH_SCG                   CY327_GET_CHSCG
#define PWR_GETFUNC_CL_SCG                   CY327_GET_CLSCG
#define PWR_GETFUNC_CH_SCVDD                 CY327_GET_CHSVDD
#define PWR_GETFUNC_CL_SCVDD                 CY327_GET_CLSVDD
#define PWR_GETFUNC_CAN_TOUT                 CY327_GET_CANTOUT

/* CY327_VREG GET INTERFACE SIGNALS */
#define PWR_GETFUNC_BO_ON                    CY327_GET_BOON
#define PWR_GETFUNC_VPR_CONF                 CY327_GET_VPR_CONF

/* CY327.SYSSTAT */
#define PWR_GETFUNC_PFUB                     CY327_GET_PFUB
#define PWR_GETFUNC_PFUBSTBY                 CY327_GET_PFUBSTBY
#define PWR_GETFUNC_RSTON                    CY327_GET_RSTON
#define PWR_GETFUNC_RST5UV                   CY327_GET_RST5UV
#define PWR_GETFUNC_RST5                     CY327_GET_RST5
#define PWR_GETFUNC_WDB                      CY327_GET_WDB
#define PWR_GETFUNC_WDBINT                   CY327_GET_WDBINT
/* CY327_AB1_LOCK */
/* TST0 = 0 --> NORMAL MODE 
   TST0 = 1 AND Pin [DBG_EN] driven to HIGH from external:
    wake-up logic: impulse generator duration 8s
    instead 1s (otherwise normal operation) 
    Signal AB1 has no effect */
#define PWR_GETFUNC_AB1_LOCK_TST0            CY327_GET_AB1_LOCK_TST0

#if ((defined(CY327_NUM_CHIPS)) && (CY327_NUM_CHIPS >= 2))
/*------------------------------------------------------------------------------------------------*/
/* routing for Pwr_Get(SIGNAL) for second chip                                                    */
/*------------------------------------------------------------------------------------------------*/
#define Pwr_GetActv2                          Cy327_PowerGetActv2

/* CY327_VREG */
#define PWR_GETFUNC_BO_ON_2                    CY327_GET2_BOON
/* CY327_REGOV*/
#define PWR_GETFUNC_VDD5_OV_2                  CY327_GET2_VDD5OV  /* 1 = VDD5 Over Volage                            */
#define PWR_GETFUNC_VDD3_OV_2                  CY327_GET2_VDD3OV  /* 1 = VDD3 Over Volage                            */
#define PWR_GETFUNC_VDDE_OV_2                  CY327_GET2_VDDEOV  /* 1 = VDDE Over Volage                            */
#define PWR_GETFUNC_VDDL_OV_2                  CY327_GET2_VDDLOV  /* 1 = VDDL Over Volage                            */
/* CY327_CAN_DIAG  */
#define PWR_GETFUNC_CH_SCB_2                   CY327_GET2_CHSCB
#define PWR_GETFUNC_CL_SCB_2                   CY327_GET2_CLSCB
#define PWR_GETFUNC_CH_SCG_2                   CY327_GET2_CHSCG
#define PWR_GETFUNC_CL_SCG_2                   CY327_GET2_CLSCG
#define PWR_GETFUNC_CH_SCVDD_2                 CY327_GET2_CHSVDD
#define PWR_GETFUNC_CL_SCVDD_2                 CY327_GET2_CLSVDD
#define PWR_GETFUNC_CAN_TOUT_2                 CY327_GET2_CANTOUT
#endif

/* routing for Pwr_GetWakSrc() */
#define Pwr_GetWakSrc()                      CY327_GET_WAK

/* return values of function Pwr_GetWakSrc() */

#define PWR_PIN_WAK         CY327_WAK_RWAKPIN1_MSK     /* redefine new names     */
#define PWR_PIN1_WAK        CY327_WAK_RWAKPIN1_MSK     /* redefine new names     */
#define PWR_PIN2_WAK        CY327_WAK_RWAKPIN2_MSK     /* redefine new names     */
#define PWR_PIN3_WAK        CY327_WAK_RWAKPIN3_MSK     /* redefine new names     */
#define PWR_STC_WAK         CY327_WAK_RWAKSTC_MSK      /* redefine new names     */
#define PWR_CAN_WAK         CY327_WAK_RWAKCAN_MSK      /* redefine new names     */

#define PWR_WAK_SRC_PIN     PWR_PIN_WAK  /* redefine new names     */
#define PWR_WAK_SRC_PIN1    PWR_PIN1_WAK /* redefine new names     */
#define PWR_WAK_SRC_PIN2    PWR_PIN2_WAK /* redefine new names     */
#define PWR_WAK_SRC_PIN3    PWR_PIN3_WAK /* redefine new names     */
#define PWR_WAK_SRC_STC     PWR_STC_WAK  /* redefine new names     */
#define PWR_WAK_SRC_CAN     PWR_CAN_WAK  /* redefine new names     */




/* routing for Pwr_SetStcVal(VALUE) */
#define Pwr_SetStcVal(VALUE)          Cy327_SetStcVal(VALUE)

/* routing for Pwr_GetStcVal() */
#define Pwr_GetStcVal()                      Cy327_GetStcVal()

/* routing for Pwr_GetWDANow() */
#define Pwr_GetWDANow(VALUE)                 Cy327_GetWDANow(VALUE)

/* routing for Pwr_GetShDwn(SIGNAL) */
#define Pwr_GetShDwn(SIGNAL)          (bit8)(PWR_GETSHDWNFUNC_##SIGNAL)
#define PWR_GETSHDWNFUNC_T15                 CY327_GETSHDWN_ST

/* routing for Pwr_GetShDwnWakSrc() */
#define Pwr_GetShDwnWakSrc()                 CY327_GETSHDWN_WAK


#endif    /* #if !defined(CY327_IN_SYSTEM) */
/*  ############################################################################################  */
/*  ############################################################################################  */
/*  ##                                                                                        ##  */
/*  ##        +++ end of CY327 +++ end of CY327 +++ end of CY327 +++ end of CY327 +++         ##  */
/*  ##                                                                                        ##  */
/*  ############################################################################################  */
/*  ############################################################################################  */























/*------------------------------------------------------------------------------------------------*/
/*-    rrr     2222     ssss    2222                                                             -*/
/*-   r   r   2    2   s       2    2                                                            -*/
/*-   r   r       2    s           2                                                             -*/
/*-   rrrr       2      sss       2                                                              -*/
/*-   r r       2          s     2                                                               -*/
/*-   r  r     2           s    2                                                                -*/
/*-   r   r   22222    ssss    22222                                                             -*/
/*------------------------------------------------------------------------------------------------*/
/* e.g. Pwr_GetStatcon(PWR_VMT_ALL_CHIPS, PWR_VMT_BP_OV, PWR_VMT_MSK_OV)                          */


/* New with Cj950: The Cj950 pushes it's variables to PWR and, if nothing is pushed,              */
/* the values for the R2S2 are set default                                                        */

/*
#if (defined (R2S2_PRESENT) && !defined(CJ950_PRESENT))

#define PWR_VMT_BP_ABE      R2S2_VMT_BP_ABE
#define PWR_VMT_MSK_ABE     R2S2_VMT_MSK_ABE

#define PWR_VMT_BP_POR      R2S2_VMT_BP_POR
#define PWR_VMT_MSK_POR     R2S2_VMT_MSK_POR

#define PWR_VMT_BP_DIS1     R2S2_VMT_BP_DIS1
#define PWR_VMT_MSK_DIS1    R2S2_VMT_MSK_DIS1

#define PWR_VMT_BP_DIS2     R2S2_VMT_BP_DIS2
#define PWR_VMT_MSK_DIS2    R2S2_VMT_MSK_DIS2

#define PWR_VMT_BP_OUTSTBY  R2S2_VMT_BP_OUTSTBY
#define PWR_VMT_MSK_OUTSTBY R2S2_VMT_MSK_OUTSTBY

#endif
*/



/*------------------------------------------------------------------------------------------------*/
/* CJ950                                                                                          */
/*------------------------------------------------------------------------------------------------*/
#if defined(CJ950_PRESENT)
#define Pwr_Set_ABEIMPACT( CHIP_NUMB, VALUE ) \
        Cj950_SetAbeImpact( CHIP_NUMB, VALUE )
#endif


/*------------------------------------------------------------------------------------------------*/
/*-                 RRRR     CCCC    AAAA     8888    55555    666    55555                      -*/
/*-                 R   R   C       A    A   8    8   5       6       5                          -*/
/*-                 R   R   C       A    A   8    8   5       6       5                          -*/
/*-                 RRRR    C       AAAAAA    8888    5555    6666    5555                       -*/
/*-                 R       C       A    A   8    8       5   6   6       5                      -*/
/*-                 R       C       A    A   8    8       5   6   6       5                      -*/
/*-                 R        CCCC   A    A    8888    5555     666    5555                       -*/
/*------------------------------------------------------------------------------------------------*/
/* routing for external stop counter device (PCA8565)                                             */

/* reset clock at PCA8565                                                                         */
#define Pwr_ExtStC_ResetClk             Pca8565_ResetClk

/* read clock values from registers of PCA8565                                                    */
#define Pwr_ExtStC_RdClk                Pca8565_RdClk

/* Macros for control of PCA8565 Wakeup timer                                                     */
#define Pwr_ExtStC_SetWakTime           Pca8565_SetWakTime
#define Pwr_ExtStC_SetWakTimeComState   Pca8565_SetWakTimeComState
#define Pwr_ExtStC_StartWakTime         Pca8565_StartWakTime
#define Pwr_ExtStC_StartWakTimeComState Pca8565_StartWakTimeComState
#define Pwr_ExtStC_StopWakTime          Pca8565_StopWakTime
#define Pwr_ExtStC_StopWakTimeComState  Pca8565_StopWakTimeComState
#define Pwr_ExtStC_GetWakTime           Pca8565_GetWakTime

/* set CLKOUT                                                                                     */
/* possible frequencies for CLKOUT signal at PCA8565                                              */
typedef enum
{
    PWR_OFF,
    PWR_SLOW,
    PWR_MEDIUM,
    PWR_FAST
} Pwr_ExtStC_ClkoutFreq_t;

#define Pwr_ExtStC_SetClkout(freq)          PWR_SETCLKOUT_EXTSTC_##freq

#define PWR_SETCLKOUT_EXTSTC_PWR_OFF        Pca8565_SetClkout((PCA8565_CLKOUT_OFF | PCA8565_CLKOUT_1HZ))
#define PWR_SETCLKOUT_EXTSTC_PWR_SLOW       Pca8565_SetClkout((PCA8565_CLKOUT_ON  | PCA8565_CLKOUT_32HZ))
#define PWR_SETCLKOUT_EXTSTC_PWR_MEDIUM     Pca8565_SetClkout((PCA8565_CLKOUT_ON  | PCA8565_CLKOUT_1024HZ))
#define PWR_SETCLKOUT_EXTSTC_PWR_FAST       Pca8565_SetClkout((PCA8565_CLKOUT_ON  | PCA8565_CLKOUT_32768KHZ))

/* set clock state                                                                                */
/* possible states for CONTROL/STATUS 1 register at PCA8565                                       */
typedef enum
{
    PWR_STOP,
    PWR_RUN
} Pwr_ExtStC_ClkState_t;

#define Pwr_ExtStC_SetClkState(state)       PWR_SETCLKST_EXTSTC_##state

#define PWR_SETCLKST_EXTSTC_PWR_STOP        Pca8565_SetClkState(PCA8565_CLK_STOP)
#define PWR_SETCLKST_EXTSTC_PWR_RUN         Pca8565_SetClkState(PCA8565_CLK_RUN)

/* read error information of PCA8565 device driver                                                */
#define Pwr_ExtStC_GetErrorInfo             Pca8565_GetErrorInfo

/* read register of PCA8565 device                                                                */
/* possible register address of PCA8565                                                           */
typedef enum
{
    PWR_CTRLST1,
    PWR_CTRLST2,
    PWR_SEC,
    PWR_MIN,
    PWR_HOUR,
    PWR_DAY,
    PWR_WKDAY,
    PWR_MONTH,
    PWR_YEAR,
    PWR_MALRM,
    PWR_HALRM,
    PWR_DALRM,
    PWR_WKDALRM,
    PWR_CLKOUTCTRL,
    PWR_TMRCTRL,
    PWR_TMR
} Pwr_ExtStC_RegAdr_t;

#define Pwr_ExtStC_RdReg(register)          PWR_RDREG_EXTSTC_##register

/* register control/status 1, address 0x00                                                        */
#define PWR_RDREG_EXTSTC_PWR_CTRLST1        Pca8565_RdReg(PCA8565_CTRLSTAT1_REG_ADR)
/* register control/status 2, address 0x01                                                        */
#define PWR_RDREG_EXTSTC_PWR_CTRLST2        Pca8565_RdReg(PCA8565_CTRLSTAT2_REG_ADR)
/* register seconds         , address 0x02                                                        */
#define PWR_RDREG_EXTSTC_PWR_SEC            Pca8565_RdReg(PCA8565_SECONDS_REG_ADR)
/* register minutes         , address 0x03                                                        */
#define PWR_RDREG_EXTSTC_PWR_MIN            Pca8565_RdReg(PCA8565_MINUTES_REG_ADR)
/* register hours           , address 0x04                                                        */
#define PWR_RDREG_EXTSTC_PWR_HOUR           Pca8565_RdReg(PCA8565_HOURS_REG_ADR)
/* register days            , address 0x05                                                        */
#define PWR_RDREG_EXTSTC_PWR_DAY            Pca8565_RdReg(PCA8565_DAYS_REG_ADR)
/* register weekdays        , address 0x06                                                        */
#define PWR_RDREG_EXTSTC_PWR_WKDAY          Pca8565_RdReg(PCA8565_WEEKDAYS_REG_ADR)
/* register months/century  , address 0x07                                                        */
#define PWR_RDREG_EXTSTC_PWR_MONTH          Pca8565_RdReg(PCA8565_MONTHS_REG_ADR)
/* register years           , address 0x08                                                        */
#define PWR_RDREG_EXTSTC_PWR_YEAR           Pca8565_RdReg(PCA8565_YEARS_REG_ADR)
/* register minute alarm    , address 0x09                                                        */
#define PWR_RDREG_EXTSTC_PWR_MALRM          Pca8565_RdReg(PCA8565_MIN_ALRM_REG_ADR)
/* register hour alarm      , address 0x0A                                                        */
#define PWR_RDREG_EXTSTC_PWR_HALRM          Pca8565_RdReg(PCA8565_H_ALRM_REG_ADR)
/* register day alarm       , address 0x0B                                                        */
#define PWR_RDREG_EXTSTC_PWR_DALRM          Pca8565_RdReg(PCA8565_D_ALRM_REG_ADR)
/* register weekday alarm   , address 0x0C                                                        */
#define PWR_RDREG_EXTSTC_PWR_WKDALRM        Pca8565_RdReg(PCA8565_WEEKD_ALRM_REG_ADR)
/* register CLKOUT control  , address 0x0D                                                        */
#define PWR_RDREG_EXTSTC_PWR_CLKOUTCTRL     Pca8565_RdReg(PCA8565_CLKOUT_REG_ADR)
/* register timer control   , address 0x0E                                                        */
#define PWR_RDREG_EXTSTC_PWR_TMRCTRL        Pca8565_RdReg(PCA8565_TMR_CTRL_REG_ADR)
/* register timer           , address 0x0F                                                        */
#define PWR_RDREG_EXTSTC_PWR_TMR            Pca8565_RdReg(PCA8565_TIMER_REG_ADR)

#ifdef CJ930_IN_SYSTEM


/*------------------------------------------------------------------------------------------------*/
/*-    cccc  jjjjj    999   3333    000                                                          -*/
/*-   c          j   9   9      3  0   0                                                         -*/
/*-   c          j   9   9      3  0   0                                                         -*/
/*-   c          j    9999    33   0   0                                                         -*/
/*-   c          j       9      3  0   0                                                         -*/
/*-   c          j       9      3  0   0                                                         -*/
/*-    cccc  jjjj    9999   3333    000                                                          -*/
/*------------------------------------------------------------------------------------------------*/
/* Gets  the status of the  Supply Voltage Diagnanostics information of  cj930 */
/**************************************************************************************************/
/* definitions sensor supply information                                                          */
/**************************************************************************************************/
/*   updated since last call
 *   |
 *   |      ***FIRST CHIP*******
 *   | +------- SPI error      *
 *   | | +----- COM error      *************************************************************
 *   | | | +--- DSM reporting  *                                                           *
 *   | | | | *******************                                                           *
 *   | | | |                                ***SECOND CHIP (not available = set to zero)   *
 *   | | | |                                                                    *          *
 *   | | | |                                (all bits set to 0 if second chip   *          *
 *   | | | |                                 is not available)                  *          *
 *   | | | |                                                                    *          *
 *   | | | | +------------------------------- SPI error                         *          *
 *   | | | | | +----------------------------- COM error                         *          *
 *   | | | | | | +--------------------------- DSM reporting                     *          *
 *   | | | | | | |                                                              *          *
 *   | | | | | | |                           SENSOR SUPPLY 6 (3 of second chip) *          *
 *   | | | | | | |   +------------------------- 5V                              *          *
 *   | | | | | | |   | +----------------------- 3,3V                            *          *
 *   | | | | | | |   | | +--------------------- Overvoltage                     *          *
 *   | | | | | | |   | | | +------------------- Undervoltage                    *          *
 *   | | | | | | |   | | | |                                                    *          *
 *   | | | | | | |   | | | |                 SENSOR SUPPLY 5 (2 of second chip) *          *
 *   | | | | | | |   | | | | +----------------- 5V                              *          *
 *   | | | | | | |   | | | | | +--------------- 3,3V                            *          *
 *   | | | | | | |   | | | | | | +------------- Overvoltage                     *          *
 *   | | | | | | |   | | | | | | | +----------- Undervoltage                    *          *
 *   | | | | | | |   | | | | | | | |                                            *          *
 *   | | | | | | |   | | | | | | | |         SENSOR SUPPLY 4 (1 of second chip) *          *
 *   | | | | | | |   | | | | | | | | +--------- 5V                              *          *
 *   | | | | | | |   | | | | | | | | | +------- 3,3V                            *          *
 *   | | | | | | |   | | | | | | | | | | +----- Overvoltage                     *          *
 *   | | | | | | |   | | | | | | | | | | | +--- Undervoltage                    *          *
 *   | | | | | | |   | | | | | | | | | | | | ************************************          *
 *   | | | | | | |   | | | | | | | | | | | |                                               *
 *   | | | | | | |   | | | | | | | | | | | |                        ***FIRST CHIP****      *
 *   | | | | | | |   | | | | | | | | | | | |                                        *      *
 *   | | | | | | |   | | | | | | | | | | | |                        SENSOR SUPPLY 3 *      *
 *   | | | | | | |   | | | | | | | | | | | | +------------------------ 5V           *      *
 *   | | | | | | |   | | | | | | | | | | | | | +---------------------- 3,3V         *      *
 *   | | | | | | |   | | | | | | | | | | | | | | +-------------------- Overvoltage  *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | +------------------ Undervoltage *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | |                                *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | |                SENSOR SUPPLY 2 *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | | +---------------- 5V           ********
 *   | | | | | | |   | | | | | | | | | | | | | | | | | +-------------- 3,3V         *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | +------------ Overvoltage  *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | +---------- Undervoltage *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | |                        *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | |        SENSOR SUPPLY 1 *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | +-------- 5V           *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | +------ 3,3V         *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | +---- Overvoltage  *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | | +-- Undervoltage *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | | | ****************
 *   V V V V V V V   V V V V V V V V V V V V V V V V V V V V V V V V
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |N| | | | | | |0| | | | | | | | | | | | | | | | | | | | | | | | | diagSensorSupply_u32
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |               |               |       |  SS3  |  SS2  |  SS1  |
 *
 * =================================================================================================
 *
 * \param           void
 * \return          uint32          bit coded error information
 *                                Sensor Supply 1
 * \retval                          bit0 : ERROR  Undervoltage
 * \retval                          bit1 : ERROR  Overvoltage
 * \retval                          bit2 : CONFIG 3,3V
 * \retval                          bit3 : CONFIG 5V
 *                                Sensor Supply 2
 * \retval                          bit4 : ERROR  Undervoltage
 * \retval                          bit5 : ERROR  Overvoltage
 * \retval                          bit6 : CONFIG 3,3V
 * \retval                          bit7 : CONFIG 5V
 *                                Sensor Supply 3
 * \retval                          bit8 : ERROR  Undervoltage
 * \retval                          bit9 : ERROR  Overvoltage
 * \retval                          bit10: CONFIG 3,3V
 * \retval                          bit11: CONFIG 5V
 *                                Sensor Supply 4 (1 of second chip)
 * \retval                          bit0 : ERROR  Undervoltage
 * \retval                          bit1 : ERROR  Overvoltage
 * \retval                          bit2 : CONFIG 3,3V
 * \retval                          bit3 : CONFIG 5V
 *                                Sensor Supply 5 (2 of second chip)
 * \retval                          bit4 : ERROR  Undervoltage
 * \retval                          bit5 : ERROR  Overvoltage
 * \retval                          bit6 : CONFIG 3,3V
 * \retval                          bit7 : CONFIG 5V
 *                                Sensor Supply 6 (3 of second chip)
 * \retval                          bit8 : ERROR  Undervoltage
 * \retval                          bit9 : ERROR  Overvoltage
 * \retval                          bit10: CONFIG 3,3V
 * \retval                          bit11: CONFIG 5V
 *
 * \retval                          bit28: info if dsm report for errors active (second chip)
 * \retval                          bit29: info COM error                       (second chip)
 * \retval                          bit30: info SPI error                       (second chip)
 * \retval                          bit28: info if dsm report for errors active
 * \retval                          bit29: info COM error
 * \retval                          bit30: info SPI error
 * \retval                          bit31: updated since last call
*/
#define PWR_DIAGSS_NULL        CJ930_DIAGSS_NULL
#define PWR_DIAGSS_SS1_UV      CJ930_DIAGSS_SS1_UV
#define PWR_DIAGSS_SS1_OV      CJ930_DIAGSS_SS1_OV
#define PWR_DIAGSS_SS1_3V      CJ930_DIAGSS_SS1_3V
#define PWR_DIAGSS_SS1_5V      CJ930_DIAGSS_SS1_5V
#define PWR_DIAGSS_SS2_UV      CJ930_DIAGSS_SS2_UV
#define PWR_DIAGSS_SS2_OV      CJ930_DIAGSS_SS2_OV
#define PWR_DIAGSS_SS2_3V      CJ930_DIAGSS_SS2_3V
#define PWR_DIAGSS_SS2_5V      CJ930_DIAGSS_SS2_5V
#define PWR_DIAGSS_SS3_UV      CJ930_DIAGSS_SS3_UV
#define PWR_DIAGSS_SS3_OV      CJ930_DIAGSS_SS3_OV
#define PWR_DIAGSS_SS3_3V      CJ930_DIAGSS_SS3_3V
#define PWR_DIAGSS_SS3_5V      CJ930_DIAGSS_SS3_5V
#define PWR_DIAGSS_SS4_UV      0
#define PWR_DIAGSS_SS4_OV      0
#define PWR_DIAGSS_SS4_3V      0
#define PWR_DIAGSS_SS4_5V      0
#define PWR_DIAGSS_SS5_UV      0
#define PWR_DIAGSS_SS5_OV      0
#define PWR_DIAGSS_SS5_3V      0
#define PWR_DIAGSS_SS5_5V      0
#define PWR_DIAGSS_SS6_UV      0
#define PWR_DIAGSS_SS6_OV      0
#define PWR_DIAGSS_SS6_3V      0
#define PWR_DIAGSS_SS6_5V      0

#define PWR_DIAGSS_DSM2        0
#define PWR_DIAGSS_COM2        0
#define PWR_DIAGSS_SPI2        0
#define PWR_DIAGSS_DSM         CJ930_DIAGSS_DSM
#define PWR_DIAGSS_COM         CJ930_DIAGSS_COM
#define PWR_DIAGSS_SPI         CJ930_DIAGSS_SPI
#define PWR_DIAGSS_NEW         CJ930_DIAGSS_NEW

#define Pwr_GetSupplyInfo         Cj930_GetSupplyInfo


typedef enum
{
    FIN_WAK,
    MRLY,
    PWR_SPLY,
    CAN_TDI,
    T15_RST,
    MM_RST,
    CAN_WAK,
    CAN_WAK_COND,
    CAN_STBY,
    STC_ENA,
    STC_MODE_WAK,
    CLR_PWRFAIL_STBY,
    T15,
    WDA,
    RSTC_UV,
    ABE,
    LOCK_STC,
    AB1_MRLY_SHOFF,
    ABE_ALL
} Pwr_SigNames_t;



/* Pwr Set function to set certain Cj930  configuration register contents*/

#define Pwr_Set(SIGNAL, VALUE)    PWR_SETFUNC_##SIGNAL(VALUE)

#define PWR_SETFUNC_AB1_MRLY_SHOFF(VALUE)                              (((VALUE) != 0) ? \
    Cj930_PowerABSet(CJ930_AB1_CNT_CLEAR)                                              : \
    Cj930_PowerABSet(CJ930_AB1_CNT_SET)) /**/

#define PWR_SETFUNC_PWR_SPLY(VALUE)                                    (((VALUE) != 0) ? \
    Cj930_PowerSet(CJ930_PWR_SPLY_MSK,CJ930_PWR_SPLY_CLEAR,FALSE)                      : \
    Cj930_PowerSet(CJ930_PWR_SPLY_MSK,CJ930_PWR_SPLY_SET,FALSE))/*Inverse Logic*/

#define PWR_SETFUNC_T15_RST(VALUE)                                     (((VALUE) != 0) ? \
    Cj930_PowerSet(CJ930_T15_RST_MSK,CJ930_T15_RST_CLEAR,TRUE)                         : \
    Cj930_PowerSet(CJ930_T15_RST_MSK,CJ930_T15_RST_SET,TRUE))/*Inverse Logic*/

#define PWR_SETFUNC_MM_RST(VALUE)                                      (((VALUE) != 0) ? \
    Cj930_PowerSet(CJ930_MM_RST_MSK,CJ930_MM_RST_SET,TRUE)                             : \
    Cj930_PowerSet(CJ930_MM_RST_MSK,CJ930_MM_RST_CLEAR,TRUE))/**/

#define PWR_SETFUNC_MRLY(VALUE)                                        (((VALUE) != 0) ? \
    Cj930_PowerSet(CJ930_MRLY_MSK,CJ930_MRLY_CLEAR,FALSE)                              : \
    Cj930_PowerSet(CJ930_MRLY_MSK,CJ930_MRLY_SET,FALSE))/*Inverse Logic*/

#define PWR_SETFUNC_CAN_TDI(VALUE)                                     (((VALUE) != 0) ? \
    Cj930_PowerSet(CJ930_CAN_TDI_MSK,CJ930_CAN_TDI_SET,TRUE)                           : \
    Cj930_PowerSet(CJ930_CAN_TDI_MSK,CJ930_CAN_TDI_CLEAR,TRUE))/**/

#define PWR_SETFUNC_CAN_HIGH_Z(VALUE)                                  (((VALUE) != 0) ? \
    Cj930_PowerSet(CJ930_CAN_HIGH_Z_MSK,CJ930_CAN_HIGH_Z_SET,FALSE)                    : \
    Cj930_PowerSet(CJ930_CAN_HIGH_Z_MSK,CJ930_CAN_HIGH_Z_CLEAR,FALSE))/**/


/* Pwr Get function to read Cj930 certain configuration register contents*/


#define Pwr_Get(SIGNAL)         (bit8)(PWR_GETFUNC_##SIGNAL)

/*Bits read by RD_DATA1 Command                                                                   */
#define PWR_GETFUNC_AB1_MRLY_SHOFF                          \
Cj930_Get_RD_DAT1(CJ930_PWRGET_AB1_CNT_POS)

/*inverse Logic*/
#define PWR_GETFUNC_PWR_SPLY                                \
(1^Cj930_Get_RD_DAT1(CJ930_PWRGET_PWR_SPLY_POS))

#define PWR_GETFUNC_T15                                     \
Cj930_Get_RD_DAT1(CJ930_PWRGET_T15_POS)

#define PWR_GETFUNC_WDA                                     \
Cj930_Get_RD_DAT1(CJ930_PWRGET_WDA_POS)

#define PWR_GETFUNC_SEO                                     \
(1^Cj930_Get_RD_DAT1(CJ930_PWRGET_SEO_POS))

/*inverse Logic*/
#define PWR_GETFUNC_MRLY                                    \
(1^Cj930_Get_RD_DAT1(CJ930_PWRGET_MRLY_POS))

/*inverse Logic*/
#define PWR_GETFUNC_T15_RST                                 \
(1^Cj930_Get_RD_DAT4(CJ930_PWRGET_T15_RST_POS))

#define PWR_GETFUNC_MM_RST                                  \
Cj930_Get_RD_DAT4(CJ930_PWRGET_MM_RST_POS)

#define PWR_GETFUNC_CAN_TDI                                 \
Cj930_Get_RD_DAT4(CJ930_PWRGET_CAN_TDI_POS)

#define PWR_GETFUNC_CAN_HIGH_Z                              \
Cj930_Get_RD_DAT4(CJ930_PWRGET_CAN_HIGH_Z_POS)

/* routing for Pwr_GetShDwn(SIGNAL) */
#define Pwr_GetShDwn(SIGNAL)    (bit8)(PWR_GETSHDWNFUNC_##SIGNAL)
#define PWR_GETSHDWNFUNC_T15                                \
Cj930_GetShDwnRdDat1(CJ930_PWRGET_T15_POS)

#endif


#ifdef CJ721_IN_SYSTEM


/*------------------------------------------------------------------------------------------------*/
/*-    cccc  jjjjj    77777  22222  1                                                            -*/
/*-   c          j        7      2  1                                                            -*/
/*-   c          j        7      2  1                                                            -*/
/*-   c          j    77777  22222  1                                                            -*/
/*-   c          j        7  2      1                                                            -*/
/*-   c          j        7  2      1                                                            -*/
/*-    cccc  jjjj         7  22222  1                                                            -*/
/*------------------------------------------------------------------------------------------------*/
/* Gets  the status of the  Supply Voltage Diagnanostics information of  cj721 */


/**************************************************************************************************/
/* definitions sensor supply information                                                          */
/**************************************************************************************************/
/*   updated since last call
 *   |
 *   |      ***FIRST CHIP*******
 *   | +------- SPI error      *
 *   | | +----- COM error      *************************************************************
 *   | | | +--- DSM reporting  *                                                           *
 *   | | | | *******************                                                           *
 *   | | | |                                ***SECOND CHIP (not available = set to zero)   *
 *   | | | |                                                                    *          *
 *   | | | |                                (all bits set to 0 if second chip   *          *
 *   | | | |                                 is not available)                  *          *
 *   | | | |                                                                    *          *
 *   | | | | +------------------------------- SPI error                         *          *
 *   | | | | | +----------------------------- COM error                         *          *
 *   | | | | | | +--------------------------- DSM reporting                     *          *
 *   | | | | | | |                                                              *          *
 *   | | | | | | |                           SENSOR SUPPLY 6 (3 of second chip) *          *
 *   | | | | | | |   +------------------------- 5V                              *          *
 *   | | | | | | |   | +----------------------- 3,3V                            *          *
 *   | | | | | | |   | | +--------------------- Overvoltage                     *          *
 *   | | | | | | |   | | | +------------------- Undervoltage                    *          *
 *   | | | | | | |   | | | |                                                    *          *
 *   | | | | | | |   | | | |                 SENSOR SUPPLY 5 (2 of second chip) *          *
 *   | | | | | | |   | | | | +----------------- 5V                              *          *
 *   | | | | | | |   | | | | | +--------------- 3,3V                            *          *
 *   | | | | | | |   | | | | | | +------------- Overvoltage                     *          *
 *   | | | | | | |   | | | | | | | +----------- Undervoltage                    *          *
 *   | | | | | | |   | | | | | | | |                                            *          *
 *   | | | | | | |   | | | | | | | |         SENSOR SUPPLY 4 (1 of second chip) *          *
 *   | | | | | | |   | | | | | | | | +--------- 5V                              *          *
 *   | | | | | | |   | | | | | | | | | +------- 3,3V                            *          *
 *   | | | | | | |   | | | | | | | | | | +----- Overvoltage                     *          *
 *   | | | | | | |   | | | | | | | | | | | +--- Undervoltage                    *          *
 *   | | | | | | |   | | | | | | | | | | | | ************************************          *
 *   | | | | | | |   | | | | | | | | | | | |                                               *
 *   | | | | | | |   | | | | | | | | | | | |                        ***FIRST CHIP****      *
 *   | | | | | | |   | | | | | | | | | | | |                                        *      *
 *   | | | | | | |   | | | | | | | | | | | |                        SENSOR SUPPLY 3 *      *
 *   | | | | | | |   | | | | | | | | | | | | +------------------------ 5V           *      *
 *   | | | | | | |   | | | | | | | | | | | | | +---------------------- 3,3V         *      *
 *   | | | | | | |   | | | | | | | | | | | | | | +-------------------- Overvoltage  *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | +------------------ Undervoltage *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | |                                *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | |                SENSOR SUPPLY 2 *      *
 *   | | | | | | |   | | | | | | | | | | | | | | | | +---------------- 5V           ********
 *   | | | | | | |   | | | | | | | | | | | | | | | | | +-------------- 3,3V         *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | +------------ Overvoltage  *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | +---------- Undervoltage *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | |                        *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | |        SENSOR SUPPLY 1 *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | +-------- 5V           *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | +------ 3,3V         *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | +---- Overvoltage  *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | | +-- Undervoltage *
 *   | | | | | | |   | | | | | | | | | | | | | | | | | | | | | | | | ****************
 *   V V V V V V V   V V V V V V V V V V V V V V V V V V V V V V V V
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |N|0| | |0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0| | |0|0| | | diagSensorSupply_u32
 *  +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *  |               |               |       |  SS3  |  SS2  |  SS1  |
 *
 * =================================================================================================
 *
 * \param           void
 * \return          uint32          bit coded error information
 *                                Sensor Supply 1
 * \retval                          bit0 : ERROR  Undervoltage
 * \retval                          bit1 : ERROR  Overvoltage
 * \retval                          bit2 : CONFIG 3,3V
 * \retval                          bit3 : CONFIG 5V
 *                                Sensor Supply 2
 * \retval                          bit4 : ERROR  Undervoltage
 * \retval                          bit5 : ERROR  Overvoltage
 * \retval                          bit6 : CONFIG 3,3V
 * \retval                          bit7 : CONFIG 5V
 *                                Sensor Supply 3
 * \retval                          bit8 : ERROR  Undervoltage
 * \retval                          bit9 : ERROR  Overvoltage
 * \retval                          bit10: CONFIG 3,3V
 * \retval                          bit11: CONFIG 5V
 *                                Sensor Supply 4 (1 of second chip)
 * \retval                          bit0 : ERROR  Undervoltage
 * \retval                          bit1 : ERROR  Overvoltage
 * \retval                          bit2 : CONFIG 3,3V
 * \retval                          bit3 : CONFIG 5V
 *                                Sensor Supply 5 (2 of second chip)
 * \retval                          bit4 : ERROR  Undervoltage
 * \retval                          bit5 : ERROR  Overvoltage
 * \retval                          bit6 : CONFIG 3,3V
 * \retval                          bit7 : CONFIG 5V
 *                                Sensor Supply 6 (3 of second chip)
 * \retval                          bit8 : ERROR  Undervoltage
 * \retval                          bit9 : ERROR  Overvoltage
 * \retval                          bit10: CONFIG 3,3V
 * \retval                          bit11: CONFIG 5V
 *
 * \retval                          bit28: info if dsm report for errors active (second chip)
 * \retval                          bit29: info COM error                       (second chip)
 * \retval                          bit30: info SPI error                       (second chip)
 * \retval                          bit28: info if dsm report for errors active
 * \retval                          bit29: info COM error
 * \retval                          bit30: info SPI error
 * \retval                          bit31: updated since last call
*/
#define PWR_DIAGSS_NULL        CJ721_DIAGSS_NULL
#define PWR_DIAGSS_SS1_UV      CJ721_DIAGSS_SS1_UV
#define PWR_DIAGSS_SS1_OV      CJ721_DIAGSS_SS1_OV
#define PWR_DIAGSS_SS1_3V      0
#define PWR_DIAGSS_SS1_5V      0
#define PWR_DIAGSS_SS2_UV      CJ721_DIAGSS_SS2_UV
#define PWR_DIAGSS_SS2_OV      CJ721_DIAGSS_SS2_OV
#define PWR_DIAGSS_SS2_3V      0
#define PWR_DIAGSS_SS2_5V      0
#define PWR_DIAGSS_SS3_UV      0
#define PWR_DIAGSS_SS3_OV      0
#define PWR_DIAGSS_SS3_3V      0
#define PWR_DIAGSS_SS3_5V      0
#define PWR_DIAGSS_SS4_UV      0
#define PWR_DIAGSS_SS4_OV      0
#define PWR_DIAGSS_SS4_3V      0
#define PWR_DIAGSS_SS4_5V      0
#define PWR_DIAGSS_SS5_UV      0
#define PWR_DIAGSS_SS5_OV      0
#define PWR_DIAGSS_SS5_3V      0
#define PWR_DIAGSS_SS5_5V      0
#define PWR_DIAGSS_SS6_UV      0
#define PWR_DIAGSS_SS6_OV      0
#define PWR_DIAGSS_SS6_3V      0
#define PWR_DIAGSS_SS6_5V      0

#define PWR_DIAGSS_DSM2        0
#define PWR_DIAGSS_COM2        0
#define PWR_DIAGSS_SPI2        0
#define PWR_DIAGSS_DSM         CJ721_DIAGSS_DSM
#define PWR_DIAGSS_COM         CJ721_DIAGSS_COM
#define PWR_DIAGSS_SPI         0
#define PWR_DIAGSS_NEW         CJ721_DIAGSS_NEW

#define Pwr_GetSupplyInfo         Cj721_GetSupplyInfo

/* Enum containing the accessible signals for Pwr_Set() and Pwr_Get() functions*/

typedef enum
{
    FIN_WAK,
    FIN_WAK_E,
    MRLY,
    PWR_SPLY,
    CAN_TDI,
    T15_RST,
    MM_RST,
    CAN_WAK,
    CAN_WAK_COND,
    CAN_STBY,
    STC_ENA,
    STC_MODE_WAK,
    CLR_PWRFAIL_STBY,
    T15,
    WDA,
    SEO,
    PIN_WAK,
    PFUB,
    PFUBSTBY,
    RST5UV,
    MRLY_ST,
    MRLY_WAK_ST,
    CH_SCB,
    CL_SCB,
    CH_SCG,
    CL_SCG,
    CH_SCVDD,
    CL_SCVDD,
    CAN_TOUT,
	LOCK_STC


} Pwr_SigNames_t;




/* Pwr Set function to set certain Cj721  configuration register contents*/

#define Pwr_Set(SIGNAL, VALUE)    PWR_SETFUNC_##SIGNAL(VALUE)


#define PWR_SETFUNC_PWR_SPLY(VALUE)                                    (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_PWR_SPLY_MSK,CJ721_PWR_SPLY_CLEAR,&Cj721_PwrSet_CmdInfo_s[0],FALSE) : \
    Cj721_PowerSet(CJ721_PWR_SPLY_MSK,CJ721_PWR_SPLY_SET,&Cj721_PwrSet_CmdInfo_s[0],FALSE))/*Inverse Logic*/

#define PWR_SETFUNC_T15_RST(VALUE)                                     (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_T15_RST_MSK,CJ721_T15_RST_CLEAR,&Cj721_PwrSet_CmdInfo_s[0],TRUE)                         : \
    Cj721_PowerSet(CJ721_T15_RST_MSK,CJ721_T15_RST_SET,&Cj721_PwrSet_CmdInfo_s[0],TRUE))/*Inverse Logic*/

#define PWR_SETFUNC_MM_RST(VALUE)                                      (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_MM_RST_MSK,CJ721_MM_RST_SET,&Cj721_PwrSet_CmdInfo_s[0],TRUE)                             : \
    Cj721_PowerSet(CJ721_MM_RST_MSK,CJ721_MM_RST_CLEAR,&Cj721_PwrSet_CmdInfo_s[0],TRUE))

#define PWR_SETFUNC_MRLY(VALUE)                                        (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_MRLY_MSK,CJ721_MRLY_CLEAR,&Cj721_PwrSet_CmdInfo_s[0],FALSE)                              : \
    Cj721_PowerSet(CJ721_MRLY_MSK,CJ721_MRLY_SET,&Cj721_PwrSet_CmdInfo_s[0], FALSE))/*Inverse Logic*/

#define PWR_SETFUNC_FIN_WAK(VALUE)                                     (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_FINWAK_MSK,CJ721_FINWAK_SET,&Cj721_PwrSet_CmdInfo_s[1],FALSE)                              : \
    Cj721_PowerSet(CJ721_FINWAK_MSK,CJ721_FINWAK_CLEAR,&Cj721_PwrSet_CmdInfo_s[1], FALSE))

#define PWR_SETFUNC_FIN_WAK_E(VALUE)                                     (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_FINWAK_E_MSK,CJ721_FINWAK_E_SET,&Cj721_PwrSet_CmdInfo_s[1],FALSE)                              : \
    Cj721_PowerSet(CJ721_FINWAK_E_MSK,CJ721_FINWAK_E_CLEAR,&Cj721_PwrSet_CmdInfo_s[1],FALSE))

#define PWR_SETFUNC_CAN_TDI(VALUE)                                       (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_CAN_TDI_MSK,CJ721_CAN_TDI_SET,&Cj721_PwrSet_CmdInfo_s[2],TRUE)                              : \
    Cj721_PowerSet(CJ721_CAN_TDI_MSK,CJ721_CAN_TDI_CLEAR,&Cj721_PwrSet_CmdInfo_s[2],TRUE))

#define PWR_SETFUNC_CAN_WAK(VALUE)                                      (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_CCAN_WAKEN_MSK|CJ721_SCAN_WAKEN_MSK,CJ721_SCAN_WAKEN_SET,&Cj721_PwrSet_CmdInfo_s[3],TRUE)                              : \
    Cj721_PowerSet(CJ721_CCAN_WAKEN_MSK|CJ721_SCAN_WAKEN_MSK,CJ721_CCAN_WAKEN_SET,&Cj721_PwrSet_CmdInfo_s[3],TRUE))

#define PWR_SETFUNC_CAN_STBY(VALUE)                                    (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_CAN_STBY_MSK,CJ721_CAN_STBY_SET,&Cj721_PwrSet_CmdInfo_s[3],TRUE)                              : \
    Cj721_PowerSet(CJ721_CAN_STBY_MSK,CJ721_CAN_STBY_CLEAR,&Cj721_PwrSet_CmdInfo_s[3],TRUE))

#define PWR_SETFUNC_CAN_WAK_COND(VALUE)                                (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_CCAN_WAKCOND_MSK|CJ721_SCAN_WAKCOND_MSK,CJ721_SCAN_WAKCOND_SET,&Cj721_PwrSet_CmdInfo_s[3],TRUE)                              : \
    Cj721_PowerSet(CJ721_CCAN_WAKCOND_MSK|CJ721_SCAN_WAKCOND_MSK,CJ721_CCAN_WAKCOND_SET,&Cj721_PwrSet_CmdInfo_s[3],TRUE))

#define PWR_SETFUNC_STC_ENA(VALUE)                                (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_CSTC_EN_MSK|CJ721_SSTC_EN_MSK,CJ721_SSTC_EN_SET,&Cj721_PwrSet_CmdInfo_s[4],TRUE)                              : \
    Cj721_PowerSet(CJ721_CSTC_EN_MSK|CJ721_SSTC_EN_MSK,CJ721_CSTC_EN_SET,&Cj721_PwrSet_CmdInfo_s[4],TRUE))

#define PWR_SETFUNC_STC_MODE_WAK(VALUE)                                (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_CSTC_MODE_MSK|CJ721_SSTC_MODE_MSK,CJ721_SSTC_MODE_SET,&Cj721_PwrSet_CmdInfo_s[4],TRUE)                              : \
    Cj721_PowerSet(CJ721_CSTC_MODE_MSK|CJ721_SSTC_MODE_MSK,CJ721_CSTC_MODE_SET,&Cj721_PwrSet_CmdInfo_s[4],TRUE))

#define PWR_SETFUNC_CLR_PWRFAIL_STBY(VALUE)                            (((VALUE) != 0) ? \
    Cj721_PowerSet(CJ721_CLRPWRFAILSTBY_MSK,CJ721_CLRPWRFAILSTBY_SET,&Cj721_PwrSet_CmdInfo_s[4],TRUE)                              : \
    Cj721_PowerSet(CJ721_CLRPWRFAILSTBY_MSK,CJ721_CLRPWRFAILSTBY_CLEAR,&Cj721_PwrSet_CmdInfo_s[4],TRUE))

#define PWR_SETFUNC_LOCK_STC(VALUE)   Cj721_PowerDummy ()       /*Dummy function to support SyC*/
/*------------------------------------Pwr_Get() Function Definitions------------------------------------------------------------*/

#define Pwr_GetActv                          Cj721_PowerGetActv



#define Pwr_Get(SIGNAL)    (bit8)(PWR_GETFUNC_##SIGNAL)

#define PWR_GETFUNC_WDA  Cj721_Get_RD_DATx(CJ721_PWR_WDA_POS,MSC_CMD_CJ721_RD_DATA4,CJ721_CMD_INDEX_RD_DATA4)

#define PWR_GETFUNC_SEO  (1^Cj721_Get_RD_DATx(CJ721_PWR_SEO_POS,MSC_CMD_CJ721_RD_DATA4,CJ721_CMD_INDEX_RD_DATA4)) /*inverse logic*/

#define PWR_GETFUNC_T15  Cj721_Get_RD_DATx(CJ721_PWR_T15_POS,MSC_CMD_CJ721_RD_DATA4,CJ721_CMD_INDEX_RD_DATA4)

#define PWR_GETFUNC_FIN_WAK_E  Cj721_Get_RD_DATx(CJ721_PWR_FINWAKE_POS,MSC_CMD_CJ721_RD_DATA1,CJ721_CMD_INDEX_RD_DATA1)

#define PWR_GETFUNC_FIN_WAK  Cj721_Get_RD_DATx(CJ721_PWR_FINWAK_POS,MSC_CMD_CJ721_RD_DATA1,CJ721_CMD_INDEX_RD_DATA1)

#define PWR_GETFUNC_PIN_WAK  Cj721_Get_RD_DATx(CJ721_PWR_PINWAK_POS,MSC_CMD_CJ721_RD_DATA2,CJ721_CMD_INDEX_RD_DATA2)

#define PWR_GETFUNC_MRLY  (1^Cj721_Get_RD_DATx(CJ721_PWR_MRLY_POS,MSC_CMD_CJ721_RD_DATA1,CJ721_CMD_INDEX_RD_DATA1))  /*inverse logic*/

#define PWR_GETFUNC_PWR_SPLY  (1^Cj721_Get_RD_DATx(CJ721_PWR_PWRSPLY_POS,MSC_CMD_CJ721_RD_DATA1,CJ721_CMD_INDEX_RD_DATA1)) /*inverse logic*/

#define PWR_GETFUNC_CAN_TDI  Cj721_Get_RD_DATx(CJ721_PWR_CANTDI_POS,MSC_CMD_CJ721_RD_DATA1,CJ721_CMD_INDEX_RD_DATA1)

#define PWR_GETFUNC_T15_RST  (1^Cj721_Get_RD_DATx(CJ721_PWR_T15RST_POS,MSC_CMD_CJ721_RD_DATA1,CJ721_CMD_INDEX_RD_DATA1)) /*inverse logic*/

#define PWR_GETFUNC_MM_RST  Cj721_Get_RD_DATx(CJ721_PWR_MMRST_POS,MSC_CMD_CJ721_RD_DATA1,CJ721_CMD_INDEX_RD_DATA1)

#define PWR_GETFUNC_CAN_WAK   Cj721_Get_RD_DATx(CJ721_PWR_CANWAK_POS,MSC_CMD_CJ721_RD_DATA2,CJ721_CMD_INDEX_RD_DATA2)   /*R_CAN_WAK is being read*/

#define PWR_GETFUNC_CAN_WAK_COND   Cj721_Get_RD_DATx(CJ721_PWR_CANWAKCOND_POS,MSC_CMD_CJ721_RD_DATA2,CJ721_CMD_INDEX_RD_DATA2)

#define PWR_GETFUNC_CAN_STBY   Cj721_Get_RD_DATx(CJ721_PWR_CANSTBY_POS,MSC_CMD_CJ721_RD_DATA2,CJ721_CMD_INDEX_RD_DATA2)

#define PWR_GETFUNC_STC_ENA   Cj721_Get_RD_DATx(CJ721_PWR_STCEN_POS,MSC_CMD_CJ721_RD_DATA6,CJ721_CMD_INDEX_RD_DATA6)

#define PWR_GETFUNC_STC_MODE_WAK   Cj721_Get_RD_DATx(CJ721_PWR_STCMODEWAK_POS,MSC_CMD_CJ721_RD_DATA6,CJ721_CMD_INDEX_RD_DATA6)

#define PWR_GETFUNC_CLR_PWRFAIL_STBY Cj721_Get_RD_DATx(CJ721_PWR_CLRPWRFAILSTBY_POS,MSC_CMD_CJ721_RD_DATA6,CJ721_CMD_INDEX_RD_DATA6)

#define PWR_GETFUNC_PFUB Cj721_Get_RD_DATx(CJ721_PWR_PFUB_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)

#define PWR_GETFUNC_PFUBSTBY Cj721_Get_RD_DATx(CJ721_PWR_PFUBSTBY_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)

#define PWR_GETFUNC_RST5UV Cj721_Get_RD_DATx(CJ721_PWR_RST5UV_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)

#define PWR_GETFUNC_MRLY_ST Cj721_Get_RD_DATx(CJ721_PWR_MRLYST_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)

#define PWR_GETFUNC_MRLY_WAK_ST Cj721_Get_RD_DATx(CJ721_PWR_MRLYWAKST_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)

#define PWR_GETFUNC_CH_SCB (1^ Cj721_Get_RD_DATx(CJ721_PWR_CHSCB_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)) /*inverse logic*/

#define PWR_GETFUNC_CL_SCB (1^Cj721_Get_RD_DATx(CJ721_PWR_CLSCB_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)) /*inverse logic*/

#define PWR_GETFUNC_CH_SCG (1^Cj721_Get_RD_DATx(CJ721_PWR_CHSCG_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5))  /*inverse logic*/

#define PWR_GETFUNC_CL_SCG (1^Cj721_Get_RD_DATx(CJ721_PWR_CLSCG_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5))  /*inverse logic*/

#define PWR_GETFUNC_CH_SCVDD (1^Cj721_Get_RD_DATx(CJ721_PWR_CHSCVDD_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)) /*inverse logic*/

#define PWR_GETFUNC_CL_SCVDD (1^Cj721_Get_RD_DATx(CJ721_PWR_CLSCVDD_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5))  /*inverse logic*/

#define PWR_GETFUNC_CAN_TOUT (1^Cj721_Get_RD_DATx(CJ721_PWR_CANTOUT_POS,MSC_CMD_CJ721_RD_DATA5,CJ721_CMD_INDEX_RD_DATA5)) /*inverse logic*/


/* return values of function Pwr_GetWakSrc() */

#define PWR_PIN_WAK         CJ721_RWAKPIN_MSK     /* redefine new names     */
#define PWR_STC_WAK         CJ721_RWAKSTC_MSK      /* redefine new names     */
#define PWR_CAN_WAK         CJ721_RWAKCAN_MSK      /* redefine new names     */

#define PWR_WAK_SRC_PIN     PWR_PIN_WAK  /* redefine new names     */
#define PWR_WAK_SRC_STC     PWR_STC_WAK  /* redefine new names     */
#define PWR_WAK_SRC_CAN     PWR_CAN_WAK  /* redefine new names     */


/* routing for Pwr_GetWakSrc() */

#define Pwr_GetWakSrc()             Cj721_Get_RD_DATWAK(CJ721_WAK_SRC_MSK,MSC_CMD_CJ721_RD_DATA2)

/* routing for Pwr_GetStcVal() */
#define Pwr_GetStcVal()                      Cj721_GetStcVal()

/* routing for Pwr_SetStcVal(VALUE) */
#define Pwr_SetStcVal(VALUE)          Cj721_SetStcVal(VALUE)

/* routing for Pwr_GetWDANow() */
#define Pwr_GetWDANow(VALUE)                 Cj721_GetWDANow(VALUE)


#define Pwr_GetShDwn(SIGNAL)    (bit8)(PWR_GETSHDWNFUNC_##SIGNAL)
#define PWR_GETSHDWNFUNC_T15                                \
Cj721_GetShDwnRdDat6(CJ721_PWR_T15_POS)

/* routing for Pwr_GetShDwnWakSrc() */
#define Pwr_GetShDwnWakSrc()           Cj721_GetShDwn_Wak(CJ721_WAK_SRC_MSK)

#endif



/*------------------------------------------------------------------------------------------------*/
/*-                 RRRR    V     V   M       M   TTTTTTT                                        -*/
/*-                 R   R   V     V   MM     MM      T                                           -*/
/*-                 R   R    V   V    M M   M M      T                                           -*/
/*-                 RRRR     V   V    M  M M  M      T                                           -*/
/*-                 R         V V     M   M   M      T                                           -*/
/*-                 R         V V     M       M      T                                           -*/
/*-                 R          V      M       M      T                                           -*/
/*------------------------------------------------------------------------------------------------*/
/* Interfaces for Power Voltage Monitoring                                                        */


/**************************************************************************************************/
/* Macros to access the devices                                                                   */
#define PWR_VMT_MAIN      0                   /* Access the Main PVMT device                      */
#define PWR_VMT_ALL_CHIPS 0xFFFF              /* Access all available devices                     */
/**************************************************************************************************/
/* PVMT Interfaces (former in pwr_auto_conf.h)                                                    */
#define PWR_GETFUNC_ABE                       Pwr_VmtGetAbe(PWR_VMT_MAIN)
#define PWR_GETFUNC_ABE_ALL                   Pwr_VmtGetAbe(PWR_VMT_ALL_CHIPS)
/* New interfaces in PWR.12.0.0 for ABE\ state information:                                       */
#define PWR_GETFUNC_VMT_ABE                   Pwr_VmtGetAbe(PWR_VMT_MAIN)
#define PWR_GETFUNC_VMT_ABE_ALL               Pwr_VmtGetAbe(PWR_VMT_ALL_CHIPS)
/* New interfaces in PWR.12.0.0 for device communication states:                                  */
#define PWR_GETFUNC_VMT_STCOM                 Pwr_VmtGetComState(PWR_VMT_MAIN)
#define PWR_GETFUNC_VMT_STCOM_ALL             Pwr_VmtGetComState(PWR_VMT_ALL_CHIPS)
/* New interfaces in PWR.12.0.0 for over voltage and under voltage information:                   */
#define PWR_GETFUNC_VMT_OV                    Pwr_VmtGetOverVoltage(PWR_VMT_MAIN)
#define PWR_GETFUNC_VMT_OV_ALL                Pwr_VmtGetOverVoltage(PWR_VMT_ALL_CHIPS)
#define PWR_GETFUNC_VMT_UV                    Pwr_VmtGetUnderVoltage(PWR_VMT_MAIN)
#define PWR_GETFUNC_VMT_UV_ALL                Pwr_VmtGetUnderVoltage(PWR_VMT_ALL_CHIPS)
/**************************************************************************************************/
/* Legacy trash                                                                                   */
#define Pwr_RequestAbeState                   Pwr_VmtRequestUpdate
#define Pwr_GetAbe                            Pwr_VmtGetAbe
#define Pwr_VmtReset(VAL)                     Pwr_VmtReset__##VAL
#define Pwr_VmtReset__                        Pwr_VmtClrOVLatch(PWR_VMT_MAIN)
#define Pwr_VmtReset__0                       Pwr_VmtClrOVLatch(PWR_VMT_MAIN)
#define Pwr_VmtReset__PWR_VMT_MAIN            Pwr_VmtClrOVLatch(PWR_VMT_MAIN)
#define Pwr_VmtReset__PWR_VMT_ALL_CHIPS       Pwr_VmtClrOVLatch(PWR_VMT_ALL_CHIPS)
/**************************************************************************************************/
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern uint Pwr_SwitchOffPwrStages(void);               /* Switch off all power stages            */
extern bit8 Pwr_VmtClrOVLatch(uint xMode_ui);                    /* Clear over voltage latch               */
extern bool Pwr_VmtRequestUpdate(void);                 /* Update information from device         */
extern bit8 Pwr_VmtGetAbe(uint xMode_ui);               /* Get ABE\ state                         */
extern bit8 Pwr_VmtGetComState(uint xMode_ui);          /* Get communication state with device    */
extern bit8 Pwr_VmtGetOverVoltage(uint xMode_ui);       /* Get over  voltage state                */
extern bit8 Pwr_VmtGetUnderVoltage(uint xMode_ui);      /* Get under voltage state                */
__PRAGMA_USE__CODE__hwe__NormalSpeed__END
/**************************************************************************************************/

__PRAGMA_USE__CODE__hwe__HighSpeed__START
extern bool Pwr_Mon_Start(void);                        /* Start monitoring mode                 */
extern bool Pwr_Mon_Stop(void);                        /* Start monitoring mode                 */
__PRAGMA_USE__CODE__hwe__HighSpeed__END
/**************************************************************************************************/

 /* _PWR_PUB_H */
#endif
