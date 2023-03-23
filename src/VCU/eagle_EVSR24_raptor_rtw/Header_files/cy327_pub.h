/*<RBHead>
 ***************************************************************************************************
 *
 * (C) All rights reserved by ROBERT BOSCH GMBH, STUTTGART
 *
 ***************************************************************************************************
 *
 *    __   __   ___  ___
 *   /_ / /  / /__  /    /__/
 *  /__/ /__/ __ / /__  /  /
 *
 *
 ***************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Filename__:cy327_pub.h$
 * $Author____:BAP2KOR$
 * $Function__:initial version$
 * $Domain____:SDOM$
 * $User______:DON1HC$
 * $Date______:23.02.2016$
 * $Class_____:SWHDR$
 * $Name______:cy327_pub$
 * $Variant___:1.19.0$
 * $Revision__:0$
 * $Type______:H$
 * $State_____:AVAILABLE$
 * $FDEF______:$
 *
 * List of changes
 * $History
 * 
 * 1.19.0; 0     23.02.2016 DON1HC
 *   --Remove ARTUS Warnings.
 * 
 * 1.18.0; 0     10.03.2014 PPH1HC
 *   Implementation of Periodic test pulse for sensor supply.
 *   
 *   -
 * 
 * 1.16.0; 2     30.09.2013 GKI4KOR
 *   To change the Cy327_SensorSupplyControl interface  from Cy327_priv.h to 
 *   cy327_pub.h
 * 
 * 1.16.0; 1     03.09.2013 GKI4KOR
 *   Run time enable and disable of sensorsupply implemented
 * 
 * 1.16.0; 0     27.08.2013 GKI4KOR
 *   To implement rUN TIME ENANLE DISABLE OF SENSOR SUPPLY
 * 
 * 1.12.0; 0     26.03.2013 GKI4KOR
 *   Reenable the sensor supply after the permenent error is healed
 * 
 * 1.11.0; 1     18.07.2012 LMU1KOR
 *    RQONE00054034: Interface Function for setting of CY327 SPI-register TST0: 
 *     Implementing review comments
 * 
 * 1.11.0; 0     28.06.2012 LMU1KOR
 *   RQONE00054034: Interface Function for setting of CY327 SPI-register TST0
 * 
 * 1.8.0; 0     14.01.2012 GOV6KOR
 *   Function prototype for Cy327_Proc_2ms() is added
 * 
 * 1.7.0; 0     06.12.2011 LMU1KOR
 *   Making VPR_CONF runtime configurable
 * 
 * $
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CY327_PUB_H
#define _CY327_PUB_H

/**
 ***************************************************************************************************
 * \moduledescription : public header for CY327 device driver
 *
 ***************************************************************************************************
 */


/**************************************************************************************************/
/*      Register ID_REG:  (read only with CY327_RD_IDENT)                                         */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1011 0010 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |  <-------------------Device number (0xB2)-------------------->|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_ID_MSK                    0xFF  /*                                                  */
#define CY327_ID_BP                     0     /*                                                  */
#define CY327_ID_VALUE                  0xB2  /*  fix value giben by HW                           */
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register REV_REG:  (read only with CY327_RD_REV)                                          */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = tbd       */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |  <---SW revision------------> | <---------Mask revision------>|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_REV_MSR_MSK               0x0F  /*                                                  */
#define CY327_REV_MSR_BP                0     /*                                                  */
#define CY327_REV_SWR_MSK               0xF0  /*                                                  */
#define CY327_REV_SWR_BP                4     /*                                                  */
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register DIA_GX:  (read only with CY327_RD_DIA_Gx_REG)                                    */
/*      diagnosis sensor supply register                                                          */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1111 1111 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |SVD4-UV|SVD4-OV|SVD3-UV|SVD3-OV|SVD2-UV|SVD2-OV|SVD1-UV|SVD1-OV|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_DIAGXREG_SVD1OV_MSK       0x01  /* Bit=0 : overvoltage                              */
#define CY327_DIAGXREG_SVD1UV_MSK       0x02  /* Bit=0 : undervoltage                             */
#define CY327_DIAGXREG_SVD2OV_MSK       0x04  /* Bit=0 : overvoltage                              */
#define CY327_DIAGXREG_SVD2UV_MSK       0x08  /* Bit=0 : undervoltage                             */
#define CY327_DIAGXREG_SVD3OV_MSK       0x10  /* Bit=0 : overvoltage                              */
#define CY327_DIAGXREG_SVD3UV_MSK       0x20  /* Bit=0 : undervoltage                             */
#define CY327_DIAGXREG_SVD4OV_MSK       0x40  /* Bit=0 : overvoltage                              */
#define CY327_DIAGXREG_SVD4UV_MSK       0x80  /* Bit=0 : undervoltage                             */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_SVD1OV    ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXREG,CY327_DIAGXREG_SVD1OV_MSK) )
#define CY327_GET_SVD1UV    ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXREG,CY327_DIAGXREG_SVD1UV_MSK) )
#define CY327_GET_SVD2OV    ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXREG,CY327_DIAGXREG_SVD2OV_MSK) )
#define CY327_GET_SVD2UV    ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXREG,CY327_DIAGXREG_SVD2UV_MSK) )
#define CY327_GET_SVD3OV    ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXREG,CY327_DIAGXREG_SVD3OV_MSK) )
#define CY327_GET_SVD3UV    ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXREG,CY327_DIAGXREG_SVD3UV_MSK) )
#define CY327_GET_SVD4OV    ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXREG,CY327_DIAGXREG_SVD4OV_MSK) )
#define CY327_GET_SVD4UV    ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXREG,CY327_DIAGXREG_SVD4UV_MSK) )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register DIA_GX_SCG:  (read only with CY327_RD_DIA_Gx_SCG)                                */
/*      diagnosis sensor supply register                                                          */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = xxxx x111 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      | VDL2  | VDL1  | VDL0  |  OT   |G4_SCG |G3_SCG |G2_SCG |G1_SCG |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_GxTSTPLS_REQ            0x01  /* Bit=1 : G1 testpulse requested                     */
#define CY327_GxTSTPLS_REQ_CLR        0x00  /* Bit=1 : G1 testpulse requested                     */
#define CY327_DIAGXSCG_G1SCG_MSK      0x01  /* Bit=0 : short to ground                            */
#define CY327_DIAGXSCG_G2SCG_MSK      0x02  /* Bit=0 : short to ground                            */
#define CY327_DIAGXSCG_G3SCG_MSK      0x04  /* Bit=0 : short to ground                            */
#define CY327_DIAGXSCG_G4SCG_MSK      0x08  /* Bit=0 : short to ground                            */
#define CY327_DIAGXSCG_OT_MSK         0x10  /* Bit=0 : overtemp                                   */
#define CY327_DIAGXSCG_VDL0_MSK       0x20  /* state of pin VDL0                                  */
#define CY327_DIAGXSCG_VDL1_MSK       0x40  /* state of pin VDL1                                  */
#define CY327_DIAGXSCG_VDL2_MSK       0x80  /* state of pin VDL2                                  */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_G1SCG      ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXSCG,CY327_DIAGXSCG_G1SCG_MSK) )
#define CY327_GET_G2SCG      ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXSCG,CY327_DIAGXSCG_G2SCG_MSK) )
#define CY327_GET_G3SCG      ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXSCG,CY327_DIAGXSCG_G3SCG_MSK) )
#define CY327_GET_G4SCG      ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXSCG,CY327_DIAGXSCG_G4SCG_MSK) )
#define CY327_GET_OT         ( ! Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXSCG,CY327_DIAGXSCG_OT_MSK   ) )
#define CY327_GET_VDL0       (   Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXSCG,CY327_DIAGXSCG_VDL0_MSK ) )
#define CY327_GET_VDL1       (   Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXSCG,CY327_DIAGXSCG_VDL1_MSK ) )
#define CY327_GET_VDL2       (   Cy327_PowerGet(CY327_RP_IDX_RD_DIAGXSCG,CY327_DIAGXSCG_VDL2_MSK ) )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register REG_OV_DIAG:  (read only with CY327_RD_REGOV)                                    */
/*      overvoltage diag register                                                                 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = xxxx xxxx */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |R_WAK3E|R_WAK2E|R_WAK1E|VDDL_OV|VDDE_OV|VDD3_OV|VDD5_OV|STC_UF |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_REGOV_STCUF_MSK           0x01  /* 1 = Stopcounter underflow                        */
#define CY327_REGOV_VDD5OV_MSK          0x02  /* 0 = overvoltage                                  */
#define CY327_REGOV_VDD3OV_MSK          0x04  /* 0 = overvoltage                                  */
#define CY327_REGOV_VDDEOV_MSK          0x08  /* 0 = overvoltage                                  */
#define CY327_REGOV_VDDLOV_MSK          0x10  /* 0 = overvoltage                                  */
#define CY327_REGOV_RWAK1EVENT_MSK      0x20  /* R_WAK1_EVENT                                     */
#define CY327_REGOV_RWAK2EVENT_MSK      0x40  /* R_WAK2_EVENT                                     */
#define CY327_REGOV_RWAK3EVENT_MSK      0x80  /* R_WAK3_EVENT                                     */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_STCUF      (   Cy327_PowerGet(CY327_RP_IDX_RD_REGOV,CY327_REGOV_STCUF_MSK      ) )
#define CY327_GET_VDD5OV     ( ! Cy327_PowerGet(CY327_RP_IDX_RD_REGOV,CY327_REGOV_VDD5OV_MSK     ) )
#define CY327_GET_VDD3OV     ( ! Cy327_PowerGet(CY327_RP_IDX_RD_REGOV,CY327_REGOV_VDD3OV_MSK     ) )
#define CY327_GET_VDDEOV     ( ! Cy327_PowerGet(CY327_RP_IDX_RD_REGOV,CY327_REGOV_VDDEOV_MSK     ) )
#define CY327_GET_VDDLOV     ( ! Cy327_PowerGet(CY327_RP_IDX_RD_REGOV,CY327_REGOV_VDDLOV_MSK     ) )
#define CY327_GET_RWAK1EVENT (   Cy327_PowerGet(CY327_RP_IDX_RD_REGOV,CY327_REGOV_RWAK1EVENT_MSK ) )
#define CY327_GET_RWAK2EVENT (   Cy327_PowerGet(CY327_RP_IDX_RD_REGOV,CY327_REGOV_RWAK2EVENT_MSK ) )
#define CY327_GET_RWAK3EVENT (   Cy327_PowerGet(CY327_RP_IDX_RD_REGOV,CY327_REGOV_RWAK3EVENT_MSK ) )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register REG_OV_DIAG for the second chip:  (read only with CY327_RD_REGOV)                */
/*      overvoltage diag register                                                                 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = xxxx xxxx */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |R_WAK3E|R_WAK2E|R_WAK1E|VDDL_OV|VDDE_OV|VDD3_OV|VDD5_OV|STC_UF |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
/* The same masks are used for the second chip                                                    */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#if (CY327_NUM_CHIPS >= 2)
#define CY327_GET2_VDD5OV     ( ! Cy327_PowerGet2(CY327_RP2_IDX_RD_REGOV,CY327_REGOV_VDD5OV_MSK     ) )
#define CY327_GET2_VDD3OV     ( ! Cy327_PowerGet2(CY327_RP2_IDX_RD_REGOV,CY327_REGOV_VDD3OV_MSK     ) )
#define CY327_GET2_VDDEOV     ( ! Cy327_PowerGet2(CY327_RP2_IDX_RD_REGOV,CY327_REGOV_VDDEOV_MSK     ) )
#define CY327_GET2_VDDLOV     ( ! Cy327_PowerGet2(CY327_RP2_IDX_RD_REGOV,CY327_REGOV_VDDLOV_MSK     ) )
#endif
/**************************************************************************************************/




/**************************************************************************************************/
/*      Register MR_REG:  (read  with CY327_RD_MR)                                                */
/*                        (write with CY327_WR_MR) (only bit 0,1,4,5)                             */
/*      main relay diagnosis                                                                      */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1x00 0x00 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |MR_SCB |MR_OL/ |   0   |DIS_ST |R_SETMR| MR_ST | MR_PU | MR_PD |                         */
/*      |       |   SCG |       |       |       |       |       |       |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_MR_MRPU_MSK               0x01  /* Pull up   enable                                 */
#define CY327_MR_MRPD_MSK               0x02  /* Pull down enable                                 */
#define CY327_MR_MRST_MSK               0x04  /* 0 = MR is off;  1 = MR is on                     */
#define CY327_MR_RSETMR_MSK             0x08  /* 1 = main relay was activated by Wakeup           */
#define CY327_MR_DISST_MSK              0x10  /* todo */
#define CY327_MR_OLSCG_MSK              0x40  /* Bit=6 : 0 = error openload/short to ground       */
#define CY327_MR_SCB_MSK                0x80  /* Bit=7 : 0 = error short to battery               */
#define CY327_MR_OLSCG_ERROR            0  /* if bit = 0 then error detected        */
#define CY327_MR_SCB_ERROR              0  /* if bit = 0 then error detected        */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_MRPU          (   Cy327_PowerGet( CY327_RP_IDX_RD_MR ,CY327_MR_MRPU_MSK     ) )
#define CY327_GET_MRPD          (   Cy327_PowerGet( CY327_RP_IDX_RD_MR ,CY327_MR_MRPD_MSK     ) )
#define CY327_GET_MRST          (   Cy327_PowerGet( CY327_RP_IDX_RD_MR ,CY327_MR_MRST_MSK     ) )
#define CY327_GET_RSETMR        (   Cy327_PowerGet( CY327_RP_IDX_RD_MR ,CY327_MR_RSETMR_MSK   ) )
#define CY327_GET_DISST         (   Cy327_PowerGet( CY327_RP_IDX_RD_MR ,CY327_MR_DISST_MSK    ) )
#define CY327_GET_OLSCG         (   Cy327_PowerGet( CY327_RP_IDX_RD_MR ,CY327_MR_OLSCG_MSK    ) )
#define CY327_GET_SCB           (   Cy327_PowerGet( CY327_RP_IDX_RD_MR ,CY327_MR_SCB_MSK      ) )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register STAT:    (read  with CY327_RD_STATUS)                                            */
/*                        (write with CY327_WR_STATUS) (only bit 3,4,6,7)                         */
/*      stauts register                                                                           */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1101 0xx0 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      | PSOFF |NL=MRLY|INIT_ST|FIN_WAK|FINWAKE|TSTMD3 |  WDA  | ST=T15|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_STAT_ST_MSK               0x01  /* filtered signal from pin [ON] -->T15             */
#define CY327_STAT_WDA_MSK              0x02  /* state of pin [WDA]                               */
#define CY327_STAT_TSTMODEEN_MSK        0x04  /* testmode enable signal                           */
#define CY327_STAT_FINWAKE_MSK          0x08  /* 1 = finish wakeup immediately                    */
#define CY327_STAT_FINWAK_MSK           0x10  /* 1 = finish wakeup                                */
#define CY327_STAT_INITST_MSK           0x20  /* Bit=0: Lock disable;  Bit=1: Lock enable         */
#define CY327_STAT_NL_MSK               0x40  /* switch on/off main relay stage                   */
#define CY327_STAT_NL_SET               CY327_STAT_NL_MSK
#define CY327_STAT_PSOFF_MSK            0x80  /* Switch on/off Voltage regulators                 */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_ST         (   Cy327_PowerGet( CY327_RP_IDX_RD_STATUS ,CY327_STAT_ST_MSK       ) )
#define CY327_GET_WDA        (   Cy327_PowerGet( CY327_RP_IDX_RD_STATUS ,CY327_STAT_WDA_MSK      ) )
#define CY327_GET_TSTMODEEN  (   Cy327_PowerGet( CY327_RP_IDX_RD_STATUS ,CY327_STAT_TSTMODEEN_MSK) )
#define CY327_GET_FINWAKE    (   Cy327_PowerGet( CY327_RP_IDX_RD_STATUS ,CY327_STAT_FINWAKE_MSK  ) )
#define CY327_GET_FINWAK     (   Cy327_PowerGet( CY327_RP_IDX_RD_STATUS ,CY327_STAT_FINWAK_MSK   ) )
#define CY327_GET_INITST     (   Cy327_PowerGet( CY327_RP_IDX_RD_STATUS ,CY327_STAT_INITST_MSK   ) )
#define CY327_GET_NL         (   Cy327_PowerGet( CY327_RP_IDX_RD_STATUS ,CY327_STAT_NL_MSK       ) )
#define CY327_GET_PSOFF      (   Cy327_PowerGet( CY327_RP_IDX_RD_STATUS ,CY327_STAT_PSOFF_MSK    ) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GETSHDWN_ST         (   Cy327_PwrGetShDwn( CY327_RP_IDX_RD_STATUS ,CY327_STAT_ST_MSK       ) )
#define CY327_GETSHDWN_WDA        (   Cy327_PwrGetShDwn( CY327_RP_IDX_RD_STATUS ,CY327_STAT_WDA_MSK      ) )
#define CY327_GETSHDWN_TSTMODEEN  (   Cy327_PwrGetShDwn( CY327_RP_IDX_RD_STATUS ,CY327_STAT_TSTMODEEN_MSK) )
#define CY327_GETSHDWN_FINWAKE    (   Cy327_PwrGetShDwn( CY327_RP_IDX_RD_STATUS ,CY327_STAT_FINWAKE_MSK  ) )
#define CY327_GETSHDWN_FINWAK     (   Cy327_PwrGetShDwn( CY327_RP_IDX_RD_STATUS ,CY327_STAT_FINWAK_MSK   ) )
#define CY327_GETSHDWN_INITST     (   Cy327_PwrGetShDwn( CY327_RP_IDX_RD_STATUS ,CY327_STAT_INITST_MSK   ) )
#define CY327_GETSHDWN_NL         (   Cy327_PwrGetShDwn( CY327_RP_IDX_RD_STATUS ,CY327_STAT_NL_MSK       ) )
#define CY327_GETSHDWN_PSOFF      (   Cy327_PwrGetShDwn( CY327_RP_IDX_RD_STATUS ,CY327_STAT_PSOFF_MSK    ) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_SET_FINWAKE(st)   ( ((st)!=FALSE)                                                   ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_STATUS ,CY327_STAT_FINWAKE_MSK,  CY327_STAT_FINWAKE_MSK )   : \
    Cy327_PowerSet( CY327_WP_IDX_WR_STATUS ,CY327_STAT_FINWAKE_MSK,  0                      )   )

#define CY327_SET_FINWAK(st)    ( ((st)!=FALSE)                                                   ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_STATUS ,CY327_STAT_FINWAK_MSK,   CY327_STAT_FINWAK_MSK  )   : \
    Cy327_PowerSet( CY327_WP_IDX_WR_STATUS ,CY327_STAT_FINWAK_MSK,   0                      )   )

#define CY327_SET_NL(st)        ( ((st)!=FALSE)                                                   ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_STATUS ,CY327_STAT_NL_MSK,       CY327_STAT_NL_MSK      )   : \
    Cy327_PowerSet( CY327_WP_IDX_WR_STATUS ,CY327_STAT_NL_MSK,       0                      )   )

#define CY327_SET_PSOFF(st)     ( ((st)!=FALSE)                                                   ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_STATUS ,CY327_STAT_PSOFF_MSK,    CY327_STAT_PSOFF_MSK   )   : \
    Cy327_PowerSet( CY327_WP_IDX_WR_STATUS ,CY327_STAT_PSOFF_MSK,    0                      )   )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register WAK:     (read only with CY327_RD_WAK)                                           */
/*      wake up register                                                                          */
/*      +-------+-------+-------+-------+-------+--------+---------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2    |   1     |   0   |  resetvalue = 0000 0000 */
/*      +-------+-------+-------+-------+-------+--------+---------+-------+                         */
/*      |RWAKCAN|RWAKSTC|WAKPIN3|WAKPIN3|WAKPIN1|RWAKPIN3|RWAKPIN2|RWAKPIN1|                         */
/*      +-------+-------+-------+-------+-------+--------+---------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_WAK_RWAKPIN1_MSK          0x01  /* wakeup register R_WAK_PIN1                       */
#define CY327_WAK_RWAKPIN2_MSK          0x02  /* wakeup register R_WAK_PIN2                       */
#define CY327_WAK_RWAKPIN3_MSK          0x04  /* wakeup register R_WAK_PIN3                       */
#define CY327_WAK_WAKPIN1_MSK           0x08  /* filter signal at WAK_PIN1                        */
#define CY327_WAK_WAKPIN2_MSK           0x10  /* filter signal at WAK_PIN2                        */
#define CY327_WAK_WAKPIN3_MSK           0x20  /* filter signal at WAK_PIN3                        */
#define CY327_WAK_RWAKSTC_MSK           0x40  /* wakeup register R_WAK_STC (stopcounter)          */
#define CY327_WAK_RWAKCAN_MSK           0x80  /* wakeup register R_WAK_CAN                        */
#define CY327_WAK_SRC_MASK             (CY327_WAK_RWAKPIN1_MSK | \
                                        CY327_WAK_RWAKPIN2_MSK | \
                                        CY327_WAK_RWAKPIN3_MSK | \
                                        CY327_WAK_RWAKSTC_MSK  | \
                                        CY327_WAK_RWAKCAN_MSK  )

/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_WAK         (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_RWAKPIN1_MSK | \
                                                                         CY327_WAK_RWAKPIN2_MSK | \
                                                                         CY327_WAK_RWAKPIN3_MSK | \
                                                                         CY327_WAK_RWAKSTC_MSK  | \
                                                                         CY327_WAK_RWAKCAN_MSK  ) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GETSHDWN_WAK    (   Cy327_PwrGetShDwn(CY327_RP_IDX_RD_WAK, CY327_WAK_RWAKPIN1_MSK | \
                                                                         CY327_WAK_RWAKPIN2_MSK | \
                                                                         CY327_WAK_RWAKPIN3_MSK | \
                                                                         CY327_WAK_RWAKSTC_MSK  | \
                                                                         CY327_WAK_RWAKCAN_MSK  ) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_RWAKPIN1    (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_RWAKPIN1_MSK ) )
#define CY327_GET_RWAKPIN2    (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_RWAKPIN2_MSK ) )
#define CY327_GET_RWAKPIN3    (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_RWAKPIN3_MSK ) )
#define CY327_GET_WAKPIN1     (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_WAKPIN1_MSK  ) )
#define CY327_GET_WAKPIN2     (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_WAKPIN2_MSK  ) )
#define CY327_GET_WAKPIN3     (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_WAKPIN3_MSK  ) )
#define CY327_GET_RWAKSTC     (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_RWAKSTC_MSK  ) )
#define CY327_GET_RWAKCAN     (   Cy327_PowerGet(   CY327_RP_IDX_RD_WAK ,CY327_WAK_RWAKCAN_MSK  ) )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register WAK_INI:     (read  with CY327_RD_WAKPIN_INI)                                    */
/*                            (write with CY327_WR_WAKPIN_INI)                                    */
/*      wake up register                                                                          */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1000 0111 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |RWAKCAN|RWAKSTC|WAKPIN1|WAKPIN1|WAKPIN1|RWAKPI1|RWAKPI1|RWAKPI1|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_WAKINI_WAKPIN1CONF_MSK       0x01  /* 0 = level sensitive; 1 = edge senstivie (dflt)*/
#define CY327_WAKINI_WAKPIN2CONF_MSK       0x02  /* 0 = level sensitive; 1 = edge senstivie (dflt)*/
#define CY327_WAKINI_WAKPIN3CONF_MSK       0x04  /* 0 = level sensitive; 1 = edge senstivie (dflt)*/
#define CY327_WAKINI_STCWAKDIS_MSK         0x08  /* 1 = STC_WAK has no effect                     */
#define CY327_WAKINI_STCOFFDIS_MSK         0x10  /* 1 = STC_OFF has no effect                     */
#define CY327_WAKINI_ONPINCONF6_MSK        0x40  /* WAK_PIN debounce time:                        */
#define CY327_WAKINI_ONPINCONF7_MSK        0x80  /* 00 = 4ms; 01 = 8ms; 10 = 16ms; 11 = 32ms      */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_WAKPIN1CONF   (   Cy327_PowerGet( CY327_RP_IDX_RD_WAKPIN_INI ,CY327_WAKINI_WAKPIN1CONF_MSK) )
#define CY327_GET_WAKPIN2CONF   (   Cy327_PowerGet( CY327_RP_IDX_RD_WAKPIN_INI ,CY327_WAKINI_WAKPIN2CONF_MSK) )
#define CY327_GET_WAKPIN3CONF   (   Cy327_PowerGet( CY327_RP_IDX_RD_WAKPIN_INI ,CY327_WAKINI_WAKPIN3CONF_MSK) )
#define CY327_GET_STCWAKDIS     (   Cy327_PowerGet( CY327_RP_IDX_RD_WAKPIN_INI ,CY327_WAKINI_STCWAKDIS_MSK  ) )
#define CY327_GET_STCOFFDIS     (   Cy327_PowerGet( CY327_RP_IDX_RD_WAKPIN_INI ,CY327_WAKINI_STCOFFDIS_MSK  ) )
#define CY327_GET_ONPINCONF6    (   Cy327_PowerGet( CY327_RP_IDX_RD_WAKPIN_INI ,CY327_WAKINI_ONPINCONF6_MSK ) )
#define CY327_GET_ONPINCONF7    (   Cy327_PowerGet( CY327_RP_IDX_RD_WAKPIN_INI ,CY327_WAKINI_ONPINCONF7_MSK ) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_SET_WAKPIN1CONF(st)     ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_WAKPIN1CONF_MSK, CY327_WAKINI_WAKPIN1CONF_MSK) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_WAKPIN1CONF_MSK, 0                           ) )

#define CY327_SET_WAKPIN2CONF(st)     ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_WAKPIN2CONF_MSK, CY327_WAKINI_WAKPIN2CONF_MSK) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_WAKPIN2CONF_MSK, 0                           ) )

#define CY327_SET_WAKPIN3CONF(st)     ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_WAKPIN3CONF_MSK, CY327_WAKINI_WAKPIN3CONF_MSK) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_WAKPIN3CONF_MSK, 0                           ) )

#define CY327_SET_STCWAKDIS(st)       ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_STCWAKDIS_MSK,   CY327_WAKINI_STCWAKDIS_MSK  ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_STCWAKDIS_MSK,   0                           ) )

#define CY327_SET_STCOFFDIS(st)       ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_STCOFFDIS_MSK,   CY327_WAKINI_STCOFFDIS_MSK  ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_STCOFFDIS_MSK,   0                           ) )

#define CY327_SET_ONPINCONF6(st)      ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_ONPINCONF6_MSK,  CY327_WAKINI_ONPINCONF6_MSK ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_ONPINCONF6_MSK,  0                           ) )

#define CY327_SET_ONPINCONF7(st)      ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_ONPINCONF7_MSK,  CY327_WAKINI_ONPINCONF7_MSK ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAKPIN_INI ,CY327_WAKINI_ONPINCONF7_MSK,  0                           ) )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register WAK_CAN:     (read  with CY327_RD_WAK_CAN)                                       */
/*                            (write with CY327_WR_WAK_CAN) (only 0,1,4,6,7)                      */
/*      wake up register                                                                          */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0010 0000 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |C_CAN_ |S_CAN_ |R_CAN_ |CAN_   |R_CAN_ |R_CAN_ |C_CAN_ |S_CAN_ |                         */
/*      |WAK_EN |WAK_EN |WAK_EN |STBY   |WAK_   |WAK    |WAK_   |WAK_   |                         */
/*      |       |       |       |       |COND   |       |COND   |COND   |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_WAKCAN_SCANWAKCOND_MSK       0x01  /* 1 = set   R_CAN_WAK_COND                      */
#define CY327_WAKCAN_CCANWAKCOND_MSK       0x02  /* 1 = clear R_CAN_WAK_COND                      */
#define CY327_WAKCAN_RCANWAK_MSK           0x04  /*           R_CAN_WAK                           */
#define CY327_WAKCAN_RCANWAKCOND_MSK       0x08  /*           R_CAN_WAK_COND                      */
#define CY327_WAKCAN_CANSTBY_MSK           0x10  /* CAN mode                                      */
#define CY327_WAKCAN_RCANWAKEN_MSK         0x20  /*           R_CAN_WAK_EN                        */
#define CY327_WAKCAN_SCANWAKEN_MSK         0x40  /* 1 = set   R_CAN_WAK_EN                        */
#define CY327_WAKCAN_CCANWAKEN_MSK         0x80  /* 1 = clear R_CAN_WAK_EN                        */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_CANWAK      (   Cy327_PowerGet( CY327_RP_IDX_RD_WAK_CAN ,CY327_WAKCAN_RCANWAK_MSK    ) )
#define CY327_GET_CANWAKCOND  (   Cy327_PowerGet( CY327_RP_IDX_RD_WAK_CAN ,CY327_WAKCAN_RCANWAKCOND_MSK) )
#define CY327_GET_CANSTBY     (   Cy327_PowerGet( CY327_RP_IDX_RD_WAK_CAN ,CY327_WAKCAN_CANSTBY_MSK    ) )
#define CY327_GET_CANWAKEN    (   Cy327_PowerGet( CY327_RP_IDX_RD_WAK_CAN ,CY327_WAKCAN_RCANWAKEN_MSK  ) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_SET_CANWAKCOND(st) ( ((st)!=FALSE)                                                                                        ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAK_CAN, CY327_WAKCAN_SCANWAKCOND_MSK|CY327_WAKCAN_CCANWAKCOND_MSK, CY327_WAKCAN_SCANWAKCOND_MSK )  : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAK_CAN, CY327_WAKCAN_SCANWAKCOND_MSK|CY327_WAKCAN_CCANWAKCOND_MSK, CY327_WAKCAN_CCANWAKCOND_MSK )  )

#define CY327_SET_CANWAKEN(st)   ( ((st)!=FALSE)                                                                                  ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAK_CAN, CY327_WAKCAN_SCANWAKEN_MSK|CY327_WAKCAN_CCANWAKEN_MSK, CY327_WAKCAN_SCANWAKEN_MSK )  : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAK_CAN, CY327_WAKCAN_SCANWAKEN_MSK|CY327_WAKCAN_CCANWAKEN_MSK, CY327_WAKCAN_CCANWAKEN_MSK )  )

#define CY327_SET_CANSTBY(st)    ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAK_CAN, CY327_WAKCAN_CANSTBY_MSK,  CY327_WAKCAN_CANSTBY_MSK )  : \
    Cy327_PowerSet( CY327_WP_IDX_WR_WAK_CAN, CY327_WAKCAN_CANSTBY_MSK,  0                        )  )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register STC_CON:     (read  with CY327_RD_STC_CON)                                       */
/*                            (write with CY327_WR_STC_CON)                                       */
/*      stopcounter control register                                                              */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0000 0010 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |S_R_STC|C_R_STC|R_STC_ |R_STC_ |S_R_STC|C_R_STC|R_PF_  |C_R_PF_|                         */
/*      |_MODE  |_MODE  |MODE   |_EN    |_EN    |_EN    |U_SUP  |U_SUP  |                         */
/*      |       |       |       |       |       |       |       |       |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_STCCON_CRPFUSUP_MSK         0x01  /* 1 = clear R_PR_U_SUB                           */
#define CY327_STCCON_RPFUSUP_MSK          0x02  /*           R_PR_U_SUB                           */
#define CY327_STCCON_CRSTCEN_MSK          0x04  /* 1 = clear R_STC_EN                             */
#define CY327_STCCON_SRSTCEN_MSK          0x08  /* 1 = set   R_STC_EN                             */
#define CY327_STCCON_RSTCEN_MSK           0x10  /*           R_STC_EN                             */
#define CY327_STCCON_RSTCMODE_MSK         0x20  /*           R_STC_MODE                           */
#define CY327_STCCON_CRSTCMODE_MSK        0x40  /* 1 = clear R_STC_MODE                           */
#define CY327_STCCON_SRSTCMODE_MSK        0x80  /* 1 = set   R_STC_MODE                           */
#define CY327_STCCON_SRSTCEN              0x08  /* 1 = set   R_STC_EN                           */
#define CY327_STCCON_CRSTCEN              0x04  /* 1 = clear R_STC_EN                           */
#define CY327_STCCON_CRSTCMODE            0x40  /* 1 = clear R_STC_MODE                           */
#define CY327_STCCON_SRSTCMODE            0x80  /* 1 = set   R_STC_MODE                           */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_PFUSUP   (   Cy327_PowerGet( CY327_RP_IDX_RD_STC_CON ,CY327_STCCON_RPFUSUP_MSK ) )
#define CY327_GET_STCEN    (   Cy327_PowerGet( CY327_RP_IDX_RD_STC_CON ,CY327_STCCON_RSTCEN_MSK  ) )
#define CY327_GET_STCMODE  (   Cy327_PowerGet( CY327_RP_IDX_RD_STC_CON ,CY327_STCCON_RSTCMODE_MSK) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_SET_PFUSUP(st)  ( ((st)!=FALSE)                                                       ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_STC_CON, CY327_STCCON_CRPFUSUP_MSK, 0 )                         : \
    Cy327_PowerSet( CY327_WP_IDX_WR_STC_CON, CY327_STCCON_CRPFUSUP_MSK, CY327_STCCON_CRPFUSUP_MSK ) )

#define CY327_SET_STCEN(st)   ( ((st)!=FALSE)                                                                  ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_STC_CON, CY327_STCCON_CRSTCEN|CY327_STCCON_SRSTCEN, CY327_STCCON_SRSTCEN ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_STC_CON, CY327_STCCON_CRSTCEN|CY327_STCCON_SRSTCEN, CY327_STCCON_CRSTCEN ) )

#define CY327_SET_STCMODE(st) ( ((st)!=FALSE)                                                                        ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_STC_CON, CY327_STCCON_CRSTCMODE|CY327_STCCON_SRSTCMODE, CY327_STCCON_SRSTCMODE ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_STC_CON, CY327_STCCON_CRSTCMODE|CY327_STCCON_SRSTCMODE, CY327_STCCON_CRSTCMODE ) )


/**************************************************************************************************/



/**************************************************************************************************/
/*      Register INIT:    (read  with CY327_RD_INIT)                                              */
/*                        (write with CY327_WR_INIT)                                              */
/*      init register                                                                             */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0101 0000 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   0   |RSTC_UV|INIT_WDR|NL_RST|CAN_TDI|  G3   |  G2   |  G1   |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_INIT_GX_ENA                0x00  /* 0 = supply GX enabled                           */
#define CY327_INIT_G1_MSK                0x01  /* 0 = supply G1 enabled                           */
#define CY327_INIT_G2_MSK                0x02  /* 0 = supply G1 enabled                           */
#define CY327_INIT_G3_MSK                0x04  /* 0 = supply G1 enabled                           */
#define CY327_INIT_CANTDI_MSK            0x08  /* 1 = WDA disables CAN driver                     */
#define CY327_INIT_NLRST_MSK             0x10  /* KL15 reset                                      */
#define CY327_INIT_WDR_MSK               0x20  /* monitoring module reset                         */
#define CY327_INIT_RSTCUV_MSK            0x40  /* Detection of undervoltage reset possible        */

/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_G1      ( ! Cy327_PowerGet( CY327_RP_IDX_RD_INIT ,CY327_INIT_G1_MSK     ) )
#define CY327_GET_G2      ( ! Cy327_PowerGet( CY327_RP_IDX_RD_INIT ,CY327_INIT_G2_MSK     ) )
#define CY327_GET_G3      ( ! Cy327_PowerGet( CY327_RP_IDX_RD_INIT ,CY327_INIT_G3_MSK     ) )
#define CY327_GET_CANTDI  (   Cy327_PowerGet( CY327_RP_IDX_RD_INIT ,CY327_INIT_CANTDI_MSK ) )
#define CY327_GET_NLRST   (   Cy327_PowerGet( CY327_RP_IDX_RD_INIT ,CY327_INIT_NLRST_MSK  ) )
#define CY327_GET_WDR     (   Cy327_PowerGet( CY327_RP_IDX_RD_INIT ,CY327_INIT_WDR_MSK    ) )
#define CY327_GET_RSTCUV  (   Cy327_PowerGet( CY327_RP_IDX_RD_INIT ,CY327_INIT_RSTCUV_MSK ) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */

#define CY327_SET_G1(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_G1_MSK, CY327_INIT_G1_MSK     ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_G1_MSK, CY327_INIT_GX_ENA                    ) )

#define CY327_SET_G2(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_G2_MSK, CY327_INIT_G2_MSK     ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_G2_MSK, CY327_INIT_GX_ENA                     ) )

#define CY327_SET_G3(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_G3_MSK, CY327_INIT_G3_MSK     ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_G3_MSK, CY327_INIT_GX_ENA                     ) )

#if (CY327_NUM_CHIPS >= 2)

#define CY327_SET_G5(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_INIT, CY327_INIT_G1_MSK, CY327_INIT_G1_MSK       ) : \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_INIT, CY327_INIT_G1_MSK, CY327_INIT_GX_ENA                     ) )

#define CY327_SET_G6(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_INIT, CY327_INIT_G2_MSK, CY327_INIT_G2_MSK       ) : \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_INIT, CY327_INIT_G2_MSK, CY327_INIT_GX_ENA                     ) )

#define CY327_SET_G7(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_INIT, CY327_INIT_G3_MSK, CY327_INIT_G3_MSK       ) : \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_INIT, CY327_INIT_G3_MSK, CY327_INIT_GX_ENA                     ) )

#endif




#define CY327_SET_CANTDI(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_CANTDI_MSK, CY327_INIT_CANTDI_MSK ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_CANTDI_MSK, 0                     ) )

#define CY327_SET_NLRST(st)   ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_NLRST_MSK,  CY327_INIT_NLRST_MSK  ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_NLRST_MSK,  0                     ) )

#define CY327_SET_WDR(st)     ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_WDR_MSK,    CY327_INIT_WDR_MSK    ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_WDR_MSK,    0                     ) )

#define CY327_SET_RSTCUV(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_RSTCUV_MSK, CY327_INIT_RSTCUV_MSK ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_INIT, CY327_INIT_RSTCUV_MSK, 0                     ) )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register RESP_TIME:  (read  with CY327_RD_RESP_TIME)                                      */
/*                           (write with CY327_WR_RESP_TIME)                                      */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0011 1111 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   0   |   0   | <--------------Response time ---------------->|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_RETI_TIME_MASK            0x3F  /* 6-bit response time                              */
#define CY327_RETI_TIME_BP              0     /*                                                  */
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register REQULO:  (read only with CY327_RD_REQULO)                                        */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1110 0000 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |  WDA  |<--------ERRCNT------->|<-----------REQUEST----------->|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_REQULO_REQUEST_MASK       0x0F  /* 4-bit question                                   */
#define CY327_REQULO_REQUEST_BP         0     /*                                                  */
#define CY327_REQULO_ERRCNT_MASK        0x70  /* state of ERROR COUNTER                           */
#define CY327_REQULO_ERRCNT_BP          4     /*                                                  */
#define CY327_REQULO_WDA_INT_MASK       0x80  /* Bit = 1: ERROR COUNTER > 4                       */
#define CY327_REQULO_WDA_INT_BP         7     /*                                                  */
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register REQUHI:  (read only with CY327_RD_REQUHI)                                        */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1100 0000 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |    RESP_CNT   |RESP_  |RESP_Z0|  CHRT | W_RESP|NO_RESP|RESP_TO|                         */
/*      |               |    ERR|       |       |       |       |_EARLY |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_REQUHI_MASK               0xFF  /* all bits of register                             */
#define CY327_REQUHI_BP                 0

#define CY327_REQUHI_EARLY_MASK         0x01  /* response befor time window is opened             */
#define CY327_REQUHI_EARLY_BP           0

#define CY327_REQUHI_NO_RESP_MASK       0x02  /* no response (restart is done automatically)      */
#define CY327_REQUHI_NO_RESP_BP         1

#define CY327_REQUHI_WRONG_RESP_MASK    0x04  /* rong response                                    */
#define CY327_REQUHI_WRONG_RESP_BP      2

#define CY327_REQUHI_CHANGE_MASK        0x08  /* response time changed                            */
#define CY327_REQUHI_CHANGE_BP          3

#define CY327_REQUHI_RESP_Z0_MASK       0x10  /* response time is set to 0ms                      */
#define CY327_REQUHI_RESP_Z0_BP         4

#define CY327_REQUHI_RESP_ERR_MASK      0x20  /* 1 byte of response is incorrect                  */
#define CY327_REQUHI_RESP_ERR_BP        5

#define CY327_REQUHI_RESP_CNT_MASK      0xC0  /* counter for receiving the 4 response bytes       */
#define CY327_REQUHI_RESP_CNT_BP        6
/**************************************************************************************************/



 /**************************************************************************************************/
/*      Register AB1_Lock:  (read  with CY327_RD_AB1_LOCK)                                        */
/*                          (write with CY327_WR_AB1_LOCK)                                        */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1000 0000 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |WDGRLIM| TST1  | TST0  |AB1LOCK|           lock time           |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_AB1LOCK_LOCKTIME_MSK       0x0F  /* locktime x 3 min typ.                           */
#define CY327_AB1LOCK_AB1LOCK_MSK        0x10  /* 0 = AB1 is fully functional                     */
#define CY327_AB1LOCK_TST0_MSK           0x20  /* tbd                                             */
#define CY327_AB1LOCK_TST1_MSK           0x40  /* tbd                                             */
#define CY327_AB1LOCK_WDGRESETLIMIT_MSK  0x80  /* 1 = up to 7 WDG resets are possible             */
/**************************************************************************************************/

/* CY327_AB1LOCK SET INTERFACE MACROS */

#define CY327_SET_AB1_LOCK_TST0(st)  ( ((st)!=FALSE)                                            ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_AB1_LOCK, CY327_AB1LOCK_TST0_MSK, CY327_AB1LOCK_TST0_MSK ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_AB1_LOCK, CY327_AB1LOCK_TST0_MSK, 0                     ) )  

/* CY327_AB1LOCK GET INTERFACE MACROS */

#define CY327_GET_AB1_LOCK_TST0   (  Cy327_PowerGet( CY327_RP_IDX_RD_AB1_LOCK, CY327_AB1LOCK_TST0_MSK  ) )


/**************************************************************************************************/
/*      Register CAN_DIAG:  (read only with CY327_RD_CAN_DIAG)                                    */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0111 1111 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   0   |CANTOUT|CLSCVDD|CHSCVDD|CL_SCG |CH_SCG |CL_SCB |CH_SCB |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_CANDIAG_CHSCB_MSK         0x01  /* 0 = CanHigh short to battery                     */
#define CY327_CANDIAG_CLSCB_MSK         0x02  /* 0 = CanLow  short to battery                     */
#define CY327_CANDIAG_CHSCG_MSK         0x04  /* 0 = CanHigh short to ground                      */
#define CY327_CANDIAG_CLSCG_MSK         0x08  /* 0 = CanLow  short to ground                      */
#define CY327_CANDIAG_CHSVDD_MSK        0x10  /* 0 = CanHigh short to VDD                         */
#define CY327_CANDIAG_CLSVDD_MSK        0x20  /* 0 = CanLow  short to VDD                         */
#define CY327_CANDIAG_CANTOUT_MSK       0x40  /* 0 = CAN dominant timeout occurred                */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_CHSCB   ( ! Cy327_PowerGet( CY327_RP_IDX_RD_CAN_DIAG, CY327_CANDIAG_CHSCB_MSK  ) )
#define CY327_GET_CLSCB   ( ! Cy327_PowerGet( CY327_RP_IDX_RD_CAN_DIAG, CY327_CANDIAG_CLSCB_MSK  ) )
#define CY327_GET_CHSCG   ( ! Cy327_PowerGet( CY327_RP_IDX_RD_CAN_DIAG, CY327_CANDIAG_CHSCG_MSK  ) )
#define CY327_GET_CLSCG   ( ! Cy327_PowerGet( CY327_RP_IDX_RD_CAN_DIAG, CY327_CANDIAG_CLSCG_MSK  ) )
#define CY327_GET_CHSVDD  ( ! Cy327_PowerGet( CY327_RP_IDX_RD_CAN_DIAG, CY327_CANDIAG_CHSVDD_MSK ) )
#define CY327_GET_CLSVDD  ( ! Cy327_PowerGet( CY327_RP_IDX_RD_CAN_DIAG, CY327_CANDIAG_CLSVDD_MSK ) )
#define CY327_GET_CANTOUT ( ! Cy327_PowerGet( CY327_RP_IDX_RD_CAN_DIAG, CY327_CANDIAG_CANTOUT_MSK) )
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register CAN_DIAG for the second chip:  (read only with CY327_RD_CAN_DIAG)                */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0111 1111 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   0   |CANTOUT|CLSCVDD|CHSCVDD|CL_SCG |CH_SCG |CL_SCB |CH_SCB |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
/* The same masks are used for the second chip                                                    */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#if (CY327_NUM_CHIPS >= 2)
#define CY327_GET2_CHSCB   ( ! Cy327_PowerGet2( CY327_RP2_IDX_RD_CAN_DIAG, CY327_CANDIAG_CHSCB_MSK  ) )
#define CY327_GET2_CLSCB   ( ! Cy327_PowerGet2( CY327_RP2_IDX_RD_CAN_DIAG, CY327_CANDIAG_CLSCB_MSK  ) )
#define CY327_GET2_CHSCG   ( ! Cy327_PowerGet2( CY327_RP2_IDX_RD_CAN_DIAG, CY327_CANDIAG_CHSCG_MSK  ) )
#define CY327_GET2_CLSCG   ( ! Cy327_PowerGet2( CY327_RP2_IDX_RD_CAN_DIAG, CY327_CANDIAG_CLSCG_MSK  ) )
#define CY327_GET2_CHSVDD  ( ! Cy327_PowerGet2( CY327_RP2_IDX_RD_CAN_DIAG, CY327_CANDIAG_CHSVDD_MSK ) )
#define CY327_GET2_CLSVDD  ( ! Cy327_PowerGet2( CY327_RP2_IDX_RD_CAN_DIAG, CY327_CANDIAG_CLSVDD_MSK ) )
#endif
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register VREG:  (read  with CY327_RD_VREG)                                                */
/*                      (write with CY327_WR_VREG)                                                */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0001 0xx1 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |BO_VOLT|BO_CONF|VPRCONF|BO_TLIM| BO_EN | BO_ON | VDDE  |ON_VDDE|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_VREG_ONVDDE_MSK           0x01  /* 1 = VDDE regulator enabled                       */
#define CY327_VREG_VDDE_MSK             0x02  /* 0 = 3,3V; 1 = 5V                                 */
#define CY327_VREG_BOON_MSK             0x04  /* 1 = Booster is active                            */
#define CY327_VREG_BOEN_MSK             0x08  /* 1 = Booster is enabled                           */
#define CY327_VREG_BOOSTTLIM_MSK        0x10  /* 1 = Booster is limited to 2s max                 */
#define CY327_VREG_VPRCONF_MSK          0x20  /* 0 = 6,0V; 1 = 6,5V                               */
#define CY327_VREG_BOOSTCONF_MSK        0x40  /* 0 = 1 inductance concept; 1 = 2 inductances conc */
#define CY327_VREG_BOOSTVOLTAGE_MSK     0x80  /* 0 = 6,5V; 1 = 7,0V                               */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
/*    ++++ writing only during initialisation! ++++ writing only during initialisation! ++++      */

/* CY327_VREG SET INTERFACE MACROS */

#define CY327_SET_BOEN(st)   ( ((st)!=FALSE)                                                        ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_VREG, CY327_VREG_BOEN_MSK,  CY327_VREG_BOEN_MSK             ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_VREG, CY327_VREG_BOEN_MSK,  0                               ) )

#define CY327_SET_BOOSTTLIM(st)   ( ((st)!=FALSE)                                                   ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_VREG, CY327_VREG_BOOSTTLIM_MSK,  CY327_VREG_BOOSTTLIM_MSK   ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_VREG, CY327_VREG_BOOSTTLIM_MSK,  0                          ) )

#define CY327_SET_VPRCONF(st)   ( ((st)!=FALSE)                                                   ? \
    Cy327_PowerSet( CY327_WP_IDX_WR_VREG, CY327_VREG_VPRCONF_MSK,  CY327_VREG_VPRCONF_MSK   ) : \
    Cy327_PowerSet( CY327_WP_IDX_WR_VREG, CY327_VREG_VPRCONF_MSK,  0                          ) )
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
/* CY327_VREG GET INTERFACE MACROS */

#define CY327_GET_BOON      (   Cy327_PowerGet( CY327_RP_IDX_RD_VREG, CY327_VREG_BOON_MSK    ) )
#define CY327_GET_VPR_CONF  (   Cy327_PowerGet( CY327_RP_IDX_RD_VREG, CY327_VREG_VPRCONF_MSK ) )

/**************************************************************************************************/



/**************************************************************************************************/
/*      Register VREG for second chip:  (read  with CY327_RD_VREG)                                */
/*                                      (write with CY327_WR_VREG)                                */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0001 0xx1 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |BO_VOLT|BO_CONF|VPRCONF|BO_TLIM| BO_EN | BO_ON | VDDE  |ON_VDDE|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
/* The same masks are used for the second chip                                                    */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
/*    ++++ writing only during initialisation! ++++ writing only during initialisation! ++++      */
#if (CY327_NUM_CHIPS >= 2)
#define CY327_SET2_BOEN(st)   ( ((st)!=FALSE)                                                    ? \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_VREG, CY327_VREG_BOEN_MSK,  CY327_VREG_BOEN_MSK          ) : \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_VREG, CY327_VREG_BOEN_MSK,  0                         ) )

#define CY327_SET2_BOOSTTLIM(st)   ( ((st)!=FALSE)                                               ? \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_VREG, CY327_VREG_BOOSTTLIM_MSK,  CY327_VREG_BOOSTTLIM_MSK  ) : \
    Cy327_PowerSet2( CY327_WP2_IDX_WR_VREG, CY327_VREG_BOOSTTLIM_MSK,  0                        ) )

/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET2_BOON      (   Cy327_PowerGet2( CY327_RP2_IDX_RD_VREG, CY327_VREG_BOON_MSK    ) )
#endif
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register CONF:  (read  with CY327_RD_CONF)                                                */
/*                      (write with CY327_WR_CONF)                                                */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 0001 0xx1 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   0   |RSTC_ON|RSTCSWEN|  0   |LIN_REF|SO_PD2 |SO_PD1 | BO_PH |                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_CONF_BOPH_MSK             0x01  /* 1 = Boost_LS and Buck1_LS switch in phase        */
#define CY327_CONF_SOPD1_MSK            0x02  /* SPI SO port driver strengh                       */
#define CY327_CONF_SOPD2_MSK            0x04  /* 00=strong ... 11=weak                            */
#define CY327_CONF_LINREF_MSK           0x08  /* Lin reference voltage: 0=U_SUP; 1=VDD5           */
#define CY327_CONF_RSTCSWEN_MSK         0x20  /* 1 = SW RSTC reset is possible                    */
#define CY327_CONF_RSTCON_MSK           0x40  /* 1 = T15-ON reset is possible                     */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
/*    ++++ writing only during initialisation! ++++ writing only during initialisation! ++++      */
/**************************************************************************************************/



/**************************************************************************************************/
/*      Register SYSSTAT:  (read only with CY327_RD_SYSSTAT)                                      */
/*                                                                                                */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |   7   |   6   |   5   |   4   |   3   |   2   |   1   |   0   |  resetvalue = 1x01 1000 */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*      |WDB_INT\| WDB\ |   0   |RST5UV\| RST5\ |RSTON\ |PFUBSTBY| PF_UB|                         */
/*      +-------+-------+-------+-------+-------+-------+-------+-------+                         */
/*                                                                                                */
/**************************************************************************************************/
#define CY327_SYSSTAT_PFUB_MSK          0x01  /* Bit=1: UB supply was lost                        */
#define CY327_SYSSTAT_PFUBSTBY_MSK      0x02  /* Bit=1: UB_STBY supply was lost                   */
#define CY327_SYSSTAT_RSTON_MSK         0x04  /* Bit=1: RSTON\ has occurred (latched)             */
#define CY327_SYSSTAT_RST5UV_MSK        0x08  /* Bit=1: RST5_UV has occurred (latchted)           */
#define CY327_SYSSTAT_RST5_MSK          0x10  /* Bit=1: RST5\ pin has occurred (latchted)         */
#define CY327_SYSSTAT_WDB_MSK           0x40  /* state of pin WDB\                                */
#define CY327_SYSSTAT_WDBINT_MSK        0x80  /* 1 if ErrCnt>7; 0 if ErrCnt<3                     */
/* -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -  */
#define CY327_GET_PFUB      (   Cy327_PowerGet( CY327_RP_IDX_RD_SYSSTAT, CY327_SYSSTAT_PFUB_MSK    ) )
#define CY327_GET_PFUBSTBY  (   Cy327_PowerGet( CY327_RP_IDX_RD_SYSSTAT, CY327_SYSSTAT_PFUBSTBY_MSK) )
#define CY327_GET_RSTON     (   Cy327_PowerGet( CY327_RP_IDX_RD_SYSSTAT, CY327_SYSSTAT_RSTON_MSK   ) )
#define CY327_GET_RST5UV    (   Cy327_PowerGet( CY327_RP_IDX_RD_SYSSTAT, CY327_SYSSTAT_RST5UV_MSK  ) )
#define CY327_GET_RST5      (   Cy327_PowerGet( CY327_RP_IDX_RD_SYSSTAT, CY327_SYSSTAT_RST5_MSK    ) )
#define CY327_GET_WDB       (   Cy327_PowerGet( CY327_RP_IDX_RD_SYSSTAT, CY327_SYSSTAT_WDB_MSK     ) )
#define CY327_GET_WDBINT    (   Cy327_PowerGet( CY327_RP_IDX_RD_SYSSTAT, CY327_SYSSTAT_WDBINT_MSK  ) )
/**************************************************************************************************/

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
#define CY327_DIAGMR_SCB         0x00000001ul
#define CY327_DIAGMR_SCB_VALID   0x00000002ul
#define CY327_DIAGMR_SCG         0x00000004ul
#define CY327_DIAGMR_SCG_VALID   0x00000008ul
#define CY327_DIAGMR_OL          0x00000010ul
#define CY327_DIAGMR_OL_VALID    0x00000020ul
#define CY327_DIAGMR_COM         0x00000040ul
#define CY327_DIAGMR_SPI         0x00000080ul
#define CY327_DIAGMR_SS7         0x00010000ul
#define CY327_DIAGMR_SS8         0x00020000ul
#define CY327_DIAGMR_T2_TSTREQ   0x00040000ul
#define CY327_DIAGMR_T2_TSTRUN   0x00080000ul
#define CY327_DIAGMR_SS4         0x00100000ul
#define CY327_DIAGMR_SS5         0x00200000ul
#define CY327_DIAGMR_SS6         0x00400000ul
#define CY327_DIAGMR_T1_TSTREQ   0x00800000ul
#define CY327_DIAGMR_T1_TSTRUN   0x01000000ul
#define CY327_DIAGMR_SS1         0x02000000ul
#define CY327_DIAGMR_SS2         0x04000000ul
#define CY327_DIAGMR_SS3         0x08000000ul
#define CY327_DIAGMR_T0_TSTREQ   0x10000000ul
#define CY327_DIAGMR_T0_TSTRUN   0x20000000ul
#define CY327_DIAGMR_TSTFIN      0x40000000ul
#define CY327_DIAGMR_NEW         0x80000000ul

#define CY327_DIAGMR_LOCK     (CY327_DIAGMR_T0_TSTRUN |                          \
                               CY327_DIAGMR_T1_TSTRUN | CY327_DIAGMR_T2_TSTRUN | \
                               CY327_DIAGMR_T1_TSTREQ | CY327_DIAGMR_T2_TSTREQ)

#define CY327_DIAGMR_ACTV     (CY327_DIAGMR_T0_TSTREQ | CY327_DIAGMR_T0_TSTRUN | \
                               CY327_DIAGMR_T1_TSTRUN | CY327_DIAGMR_T2_TSTRUN | \
                               CY327_DIAGMR_T1_TSTREQ | CY327_DIAGMR_T2_TSTREQ)

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

#define CY327_DIAGSS_NULL        0x00000000ul
#define CY327_DIAGSS_SS1_UV      0x00000001ul
#define CY327_DIAGSS_SS1_OV      0x00000002ul
#define CY327_DIAGSS_SS1_SCG     0x00000004ul
#define CY327_DIAGSS_SS2_UV      0x00000008ul
#define CY327_DIAGSS_SS2_OV      0x00000010ul
#define CY327_DIAGSS_SS2_SCG     0x00000020ul
#define CY327_DIAGSS_SS3_UV      0x00000040ul
#define CY327_DIAGSS_SS3_OV      0x00000080ul
#define CY327_DIAGSS_SS3_SCG     0x00000100ul
#define CY327_DIAGSS_SS4_UV      0x00000200ul
#define CY327_DIAGSS_SS4_OV      0x00000400ul
#define CY327_DIAGSS_SS4_SCG     0x00000800ul
#define CY327_DIAGSS_SS5_UV      0x00001000ul
#define CY327_DIAGSS_SS5_OV      0x00002000ul
#define CY327_DIAGSS_SS5_SCG     0x00004000ul
#define CY327_DIAGSS_SS6_UV      0x00008000ul
#define CY327_DIAGSS_SS6_OV      0x00010000ul
#define CY327_DIAGSS_SS6_SCG     0x00020000ul
#define CY327_DIAGSS_SS7_UV      0x00040000ul
#define CY327_DIAGSS_SS7_OV      0x00080000ul
#define CY327_DIAGSS_SS7_SCG     0x00100000ul
#define CY327_DIAGSS_SS8_UV      0x00200000ul
#define CY327_DIAGSS_SS8_OV      0x00400000ul
#define CY327_DIAGSS_SS8_SCG     0x00800000ul
#define CY327_DIAGSS_OT          0x01000000ul
#define CY327_DIAGSS_OT2         0x02000000ul
#define CY327_DIAGSS_COM2        0x04000000ul
#define CY327_DIAGSS_SPI2        0x08000000ul
#define CY327_DIAGSS_DSM         0x10000000ul
#define CY327_DIAGSS_COM         0x20000000ul
#define CY327_DIAGSS_SPI         0x40000000ul
#define CY327_DIAGSS_NEW         0x80000000ul


/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Typedef
 ***************************************************************************************************
 */
typedef struct
{
    uint32 tiResp_u32;             /* current response time in µs                                 */
    uint32 tiLastTrans_u32;        /* timestamp of last SPI transmission in timer ticks           */
    uint8  dRequest_u8;            /* current request of monitoring module                        */
    uint8  ctError_u8;             /* value of error counter                                      */
    uint8  stMm_u8;                /* status bits of the monitoring module                        */
}Cy327_MM_Request_t;

/*
 ***************************************************************************************************
 * Prototypes
 ***************************************************************************************************
 */
__PRAGMA_USE__CODE__hwe__NormalSpeed__START
extern bool   Cy327_MM_Transmit      (void);
extern bool   Cy327_MM_SetRespTime   (uint32 tiResp_u32);
extern void   Cy327_MM_SetResponse   (uint32 xResponse_u32);
extern bool   Cy327_MM_GetRequest    (Cy327_MM_Request_t* xRequest_ps);
extern bool   Cy327_MM_RequestQuery  (void);
extern void   Cy327_MM_WD_Hdl        (void);
extern uint32 Cy327_MM_WD_Answer     (uint8 xQuery_u8);
__PRAGMA_USE__CODE__hwe__NormalSpeed__END

__PRAGMA_USE__CODE__hwe__NormalSpeed__START
/* define is used by syc for detection of reinit feature */
#define       CY327_REINIT_DEF       1
extern void   Cy327_ReInit              (void);
extern void   Cy327_Proc_Ini            (void);
extern void   Cy327_NoMR_Proc_Ini       (void);
extern void   Cy327_Rx_Proc             (void);
extern void   Cy327_Tx_Proc             (void);
extern void   Cy327_Proc_2ms            (void);
extern bool   Cy327_Diag_Sequence       (void);
extern bool   Cy327_Diag2_Sequence      (void);
extern bool   Cy327_Diag_Testimpulse    (void);
extern uint32 Cy327_TstImp              (void);
extern uint32 Cy327_GetErrorInfo        (void);
extern uint32 Cy327_GetSupplyInfo       (void);
extern void   Cy327_ReEnableSensorsSupply_Proc(void);
extern void   Cy327_PowerSet            (uint16 SeqIdx_u16, uint16 bitMask_u16, uint16 bitValue_u16);
extern bool   Cy327_SensorSupplyControl (uint8 SsNum_u8, bool SsStatus_b, uint8 ChipNum_u8);
#if (CY327_NUM_CHIPS >= 2)
extern void   Cy327_PowerSet2           (uint16 SeqIdx_u16, uint16 bitMask_u16, uint16 bitValue_u16);
#endif
extern void   Cy327_PowerGetActv        (void);
extern uint8  Cy327_PowerGet            (uint16 SeqIdx_u16, uint16 bitMask_u16);
extern uint8  Cy327_PwrGetShDwn         (uint16 SeqIdx_u16, uint16 bitMask_u16);
extern void   Cy327_SetStcVal           (uint32 bitValue_u32);
extern uint32 Cy327_GetStcVal           (void);
extern uint16 Cy327_GetWDANow           (uint8* bitValue_pu8);
extern uint32  Cy327_CheckPmError        (uint32 ctChipIDX_u32);
extern void   Cy327_WriteNvram          (uint8 Addr_u8, uint8 Data_u8);
extern uint8  CY327_ReadNvram           (uint8 Addr_u8);
#if (CY327_NUM_CHIPS >= 2)
extern void   Cy327_PowerGetActv2        (void);
extern uint8  Cy327_PowerGet2            (uint16 SeqIdx_u16, uint16 bitMask_u16);
#endif
#ifdef CY327_IN_STM
extern void   Cy327_CopyWakEvent        (void);
extern uint8  Cy327_GetWakEvent         (void);
extern void   Cy327_ClrWakEvent         (void);
#endif

__PRAGMA_USE__CODE__hwe__NormalSpeed__END


__PRAGMA_USE__hwe__50ms_1s__RAM__arr32__START
extern       uint32                  Cy327_stIniErr_b32[]; /*Initialization Error - Peripheral Monitoring*/
__PRAGMA_USE__hwe__50ms_1s__RAM__arr32__END


/* _CY327_PUB_H */
#endif
