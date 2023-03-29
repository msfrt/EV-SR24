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
 * \$Filename__:cy327_template_conf.ht$
 * \$Author____:BAP2KOR$
 * \$Function__:initial version$
 * \$Domain____:SDOM$
 * \$User______:DON1HC$
 * \$Date______:03.03.2017$
 * \$Class_____:CONFTPLHDR$
 * \$Name______:cy327_template_conf$
 * \$Variant___:1.19.2$
 * \$Revision__:0$
 * \$Type______:HT$
 * \$State_____:AVAILABLE$
 * \$FDEF______:\$
 *
 * List of changes
 * \$History
 * \
 * \1.19.2; 0     03.03.2017 DON1HC
 * \  Bug-fix CAN Wakeup Locked issue for the platform latest version of Cy327
 * \
 * \1.8.0; 0     14.01.2012 GOV6KOR
 * \  Implementation of External voltage tracker
 * \
 * \1.0.0; 0     08.06.2010 BAP2KOR
 * \  initial version
 * \
 * \$
 ***************************************************************************************************
 </RBHead>*/

#ifndef _CY327_AUTO_CONF_H
#define _CY327_AUTO_CONF_H


/**************************************************************************************************/
/* Defines (variables initialisation)                                                             */
/**************************************************************************************************/
#define CY327_VARCHIPINFO_NULL                                                            \
{                                                                                         \
    0,                                                                                    \
    0,                     /* MR diagnosis status                                      */ \
    0,                     /* process-call counter for cyclic sending diagnosis        */ \
    0,                     /* process-call counter for cyclic sending power_get seq.   */ \
    CY327_REQ_POWERSET,    /* flag for sending PWRSet soon as possible                 */ \
    0,  /* 1 if value from chip must not initialised               */ \
    0                      /* Status of SPI error                                      */ \
}                                                                                           

/**************************************************************************************************/



/**************************************************************************************************/
/* Defines (general)                                                                              */
/**************************************************************************************************/
#define CY327_NUM_CHIPS 1
#define CY327_PERMSPLYSYS_SY 0
#define CY327_TSTPLS_NUMMAX 5
#define CY327_TSTPLS_RECOVER 1
#define CY327_SSPMON1_GENERATEDFC
#define CY327_SSPMON2_GENERATEDFC
#define CY327_SSPMON3_GENERATEDFC
#define CY327_SSPMONOT_GENERATEDFC
#define CY327_SPICOM_GENERATEDFC
#define CY327_IN_SYSTEM
#define CY327_PM


/**************************************************************************************************/
/* External voltage tracker                                                                              */
/**************************************************************************************************/


/**************************************************************************************************/
/* CAN Wakeup Locked                                                                              */
/**************************************************************************************************/

/**************************************************************************************************/

#if CY327_PERMSPLYSYS_SY == 0
/* MISRA RULE 94 VIOLATION: Macro MEMLAY_USE_PROTRAM is out of scope of this component            */
MEMLAY_USE_PROTRAM(extern volatile uint8, Cy327_FreigabeTI_u8);
#endif



/**************************************************************************************************/
/* SPI sequences                                                                                  */
/**************************************************************************************************/
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_ASWSet (original)          
 *-----------------------------------------------------------------*/
#define CY327_ASWSET_LEN                7
#define CY327_ASWSET_SEQ                           \
            CY327_WR_RESP3         |    0x0       ,\
            CY327_WR_RESP2         |    0x0       ,\
            CY327_WR_RESP1         |    0x0       ,\
            CY327_WR_RESP0         |    0x0       ,\
            CY327_RD_REQUHI        |    0x0       ,\
            CY327_RD_REQULO        |    0x0       ,\
            CY327_RD_RESP_TIME     |    0x0
#define CY327_WR_IDX_WR_RESP3           0
#define CY327_WR_IDX_WR_RESP2           1
#define CY327_WR_IDX_WR_RESP1           2
#define CY327_WR_IDX_WR_RESP0           3
#define CY327_WR_IDX_RD_REQUHI          4
#define CY327_WR_IDX_RD_REQULO          5
#define CY327_WR_IDX_RD_RESP_TIME       6
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_CANLockedSet (original)          
 *-----------------------------------------------------------------*/
#define CY327_CANLOCKEDSET_LEN          4
#define CY327_CANLOCKEDSET_SEQ                     \
            CY327_UNLOCK           |    0x0       ,\
            CY327_WR_WAK_CAN1      |    0x10      ,\
            CY327_WR_WAK_CAN2      |    0x0       ,\
            CY327_LOCK             |    0x0
#define CY327_CWL_IDX_UNLOCK            0
#define CY327_CWL_IDX_WR_WAK_CAN1       1
#define CY327_CWL_IDX_WR_WAK_CAN2       2
#define CY327_CWL_IDX_LOCK              3
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_DIAGet (original)          
 *-----------------------------------------------------------------*/
#define CY327_DIAGET_LEN                4
#define CY327_DIAGET_SEQ                           \
            CY327_RD_DIA_Gx_REG    |    0x0       ,\
            CY327_RD_DIA_Gx_SCG    |    0x0       ,\
            CY327_RD_MR            |    0x0       ,\
            CY327_RD_STATUS        |    0x0
#define CY327_DG_IDX_RD_DIA_Gx_REG      0
#define CY327_DG_IDX_RD_DIA_Gx_SCG      1
#define CY327_DG_IDX_RD_MR              2
#define CY327_DG_IDX_RD_STATUS          3
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_INISet (original)          
 *-----------------------------------------------------------------*/
#define CY327_INISET_LEN                4
#define CY327_INISET_SEQ                           \
            CY327_RD_IDENT         |    0x0       ,\
            CY327_RD_REV           |    0x0       ,\
            CY327_RD_STC_CON       |    0x0       ,\
            CY327_RD_MR            |    0x0
#define CY327_IN_IDX_RD_IDENT           0
#define CY327_IN_IDX_RD_REV             1
#define CY327_IN_IDX_RD_STC_CON         2
#define CY327_IN_IDX_RD_MR              3
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_NVRrd (original)          
 *-----------------------------------------------------------------*/
#define CY327_NVRRD_LEN                 2
#define CY327_NVRRD_SEQ                            \
            CY327_WR_CUI_ADR       |    0x0       ,\
            CY327_RD_CUI           |    0x0
#define CY327_NR_IDX_WR_CUI_ADR         0
#define CY327_NR_IDX_RD_CUI             1
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_NVRwr (original)          
 *-----------------------------------------------------------------*/
#define CY327_NVRWR_LEN                 4
#define CY327_NVRWR_SEQ                            \
            CY327_UNLOCK           |    0x0       ,\
            CY327_WR_CUI_ADR       |    0x0       ,\
            CY327_WR_CUI           |    0x0       ,\
            CY327_LOCK             |    0x0
#define CY327_NW_IDX_UNLOCK             0
#define CY327_NW_IDX_WR_CUI_ADR         1
#define CY327_NW_IDX_WR_CUI             2
#define CY327_NW_IDX_LOCK               3
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_PWRGet (original)          
 *-----------------------------------------------------------------*/
#define CY327_PWRGET_LEN                17
#define CY327_PWRGET_SEQ                           \
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_INIT          |    0x0       ,\
            CY327_RD_WAK           |    0x0       ,\
            CY327_RD_WAK_CAN       |    0x0       ,\
            CY327_RD_DIA_Gx_REG    |    0x0       ,\
            CY327_RD_DIA_Gx_SCG    |    0x0       ,\
            CY327_RD_REGOV         |    0x0       ,\
            CY327_RD_CAN_DIAG      |    0x0       ,\
            CY327_RD_VREG          |    0x0       ,\
            CY327_RD_CONF          |    0x0       ,\
            CY327_RD_WAKPIN_INI    |    0x0       ,\
            CY327_RD_SYSSTAT       |    0x0       ,\
            CY327_RD_STC_CON       |    0x0       ,\
            CY327_RD_CUI_ADR       |    0x0       ,\
            CY327_RD_CUI           |    0x0       ,\
            CY327_RD_MR            |    0x0       ,\
            CY327_RD_AB1_LOCK      |    0x0
#define CY327_RP_IDX_RD_STATUS          0
#define CY327_RP_IDX_RD_INIT            1
#define CY327_RP_IDX_RD_WAK             2
#define CY327_RP_IDX_RD_WAK_CAN         3
#define CY327_RP_IDX_RD_DIA_Gx_REG      4
#define CY327_RP_IDX_RD_DIA_Gx_SCG      5
#define CY327_RP_IDX_RD_REGOV           6
#define CY327_RP_IDX_RD_CAN_DIAG        7
#define CY327_RP_IDX_RD_VREG            8
#define CY327_RP_IDX_RD_CONF            9
#define CY327_RP_IDX_RD_WAKPIN_INI      10
#define CY327_RP_IDX_RD_SYSSTAT         11
#define CY327_RP_IDX_RD_STC_CON         12
#define CY327_RP_IDX_RD_CUI_ADR         13
#define CY327_RP_IDX_RD_CUI             14
#define CY327_RP_IDX_RD_MR              15
#define CY327_RP_IDX_RD_AB1_LOCK        16
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_PWRSet (original)          
 *-----------------------------------------------------------------*/
#define CY327_PWRSET_LEN                10
#define CY327_PWRSET_SEQ                           \
            CY327_UNLOCK           |    0x0       ,\
            CY327_WR_STATUS        |    0x58      ,\
            CY327_WR_INIT          |    0x50      ,\
            CY327_WR_VREG          |    0x79      ,\
            CY327_WR_CONF          |    0x24      ,\
            CY327_WR_WAKPIN_INI    |    0x9F      ,\
            CY327_WR_WAK_CAN       |    0x92      ,\
            CY327_WR_STC_CON       |    0x0       ,\
            CY327_WR_AB1_LOCK      |    0x80      ,\
            CY327_LOCK             |    0x0
#define CY327_WP_IDX_UNLOCK             0
#define CY327_WP_IDX_WR_STATUS          1
#define CY327_WP_IDX_WR_INIT            2
#define CY327_WP_IDX_WR_VREG            3
#define CY327_WP_IDX_WR_CONF            4
#define CY327_WP_IDX_WR_WAKPIN_INI      5
#define CY327_WP_IDX_WR_WAK_CAN         6
#define CY327_WP_IDX_WR_STC_CON         7
#define CY327_WP_IDX_WR_AB1_LOCK        8
#define CY327_WP_IDX_LOCK               9
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_QERGet (original)          
 *-----------------------------------------------------------------*/
#define CY327_QERGET_LEN                3
#define CY327_QERGET_SEQ                           \
            CY327_RD_REQUHI        |    0x0       ,\
            CY327_RD_REQULO        |    0x0       ,\
            CY327_RD_RESP_TIME     |    0x0
#define CY327_RQ_IDX_RD_REQUHI          0
#define CY327_RQ_IDX_RD_REQULO          1
#define CY327_RQ_IDX_RD_RESP_TIME       2
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_RdInit (original)          
 *-----------------------------------------------------------------*/
#define CY327_RDINIT_LEN                1
#define CY327_RDINIT_SEQ                           \
            CY327_RD_INIT          |    0x0
#define CY327_PM_IDX_RD_INIT            0
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_STCGet (original)          
 *-----------------------------------------------------------------*/
#define CY327_STCGET_LEN                4
#define CY327_STCGET_SEQ                           \
            CY327_RD_STC_TRIG      |    0x0       ,\
            CY327_RD_STC2          |    0x0       ,\
            CY327_RD_STC1          |    0x0       ,\
            CY327_RD_STC0          |    0x0
#define CY327_SG_IDX_RD_STC_TRIG        0
#define CY327_SG_IDX_RD_STC2            1
#define CY327_SG_IDX_RD_STC1            2
#define CY327_SG_IDX_RD_STC0            3
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_STCSet (original)          
 *-----------------------------------------------------------------*/
#define CY327_STCSET_LEN                10
#define CY327_STCSET_SEQ                           \
            CY327_UNLOCK           |    0x0       ,\
            CY327_WR_STC0          |    0x0       ,\
            CY327_WR_STC1          |    0x0       ,\
            CY327_WR_STC2          |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_LOCK             |    0x0
#define CY327_SS_IDX_UNLOCK             0
#define CY327_SS_IDX_WR_STC0            1
#define CY327_SS_IDX_WR_STC1            2
#define CY327_SS_IDX_WR_STC2            3
#define CY327_SS_IDX_RD_STATUS          4
#define CY327_SS_IDX_LOCK               9
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_SWRst (original)          
 *-----------------------------------------------------------------*/
#define CY327_SWRST_LEN                 2
#define CY327_SWRST_SEQ                            \
            CY327_UNLOCK           |    0x0       ,\
            CY327_SW_RST           |    0xA5
#define CY327_SR_IDX_UNLOCK             0
#define CY327_SR_IDX_SW_RST             1
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_TI0Set (original)          
 *-----------------------------------------------------------------*/
#define CY327_TI0SET_LEN                11
#define CY327_TI0SET_SEQ                           \
            CY327_UNLOCK           |    0x0       ,\
            CY327_WR_MR0           |    0x1       ,\
            CY327_WR_STATUS_OFF    |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_MR_OLSCG      |    0x0       ,\
            CY327_WR_STATUS_ON     |    0x0       ,\
            CY327_RD_WAK           |    0x0       ,\
            CY327_RD_MR_SCB        |    0x0       ,\
            CY327_WR_STATUS_ORI    |    0x0       ,\
            CY327_WR_MR1           |    0x0       ,\
            CY327_LOCK             |    0x0
#define CY327_T0_IDX_UNLOCK             0
#define CY327_T0_IDX_WR_MR0             1
#define CY327_T0_IDX_WR_STATUS_OFF      2
#define CY327_T0_IDX_RD_STATUS          3
#define CY327_T0_IDX_RD_MR_OLSCG        4
#define CY327_T0_IDX_WR_STATUS_ON       5
#define CY327_T0_IDX_RD_WAK             6
#define CY327_T0_IDX_RD_MR_SCB          7
#define CY327_T0_IDX_WR_STATUS_ORI      8
#define CY327_T0_IDX_WR_MR1             9
#define CY327_T0_IDX_LOCK               10
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_TI1Set (original)          
 *-----------------------------------------------------------------*/
#define CY327_TI1SET_LEN                13
#define CY327_TI1SET_SEQ                           \
            CY327_UNLOCK           |    0x0       ,\
            CY327_WR_MR            |    0x1       ,\
            CY327_WR_STATUS_OFF    |    0x0       ,\
            CY327_RD_WAK           |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_MR_OLSCG      |    0x0       ,\
            CY327_WR_STATUS_ORI    |    0x0       ,\
            CY327_WR_MR_ORI        |    0x0       ,\
            CY327_LOCK             |    0x0
#define CY327_T1_IDX_UNLOCK             0
#define CY327_T1_IDX_WR_MR              1
#define CY327_T1_IDX_WR_STATUS_OFF      2
#define CY327_T1_IDX_RD_WAK             3
#define CY327_T1_IDX_RD_STATUS          4
#define CY327_T1_IDX_RD_MR_OLSCG        9
#define CY327_T1_IDX_WR_STATUS_ORI      10
#define CY327_T1_IDX_WR_MR_ORI          11
#define CY327_T1_IDX_LOCK               12
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_TI2Set (original)          
 *-----------------------------------------------------------------*/
#define CY327_TI2SET_LEN                13
#define CY327_TI2SET_SEQ                           \
            CY327_UNLOCK           |    0x0       ,\
            CY327_WR_MR            |    0x2       ,\
            CY327_WR_STATUS_OFF    |    0x0       ,\
            CY327_RD_WAK           |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_STATUS        |    0x0       ,\
            CY327_RD_MR_OLSCG      |    0x0       ,\
            CY327_WR_STATUS_ORI    |    0x0       ,\
            CY327_WR_MR_ORI        |    0x0       ,\
            CY327_LOCK             |    0x0
#define CY327_T2_IDX_UNLOCK             0
#define CY327_T2_IDX_WR_MR              1
#define CY327_T2_IDX_WR_STATUS_OFF      2
#define CY327_T2_IDX_RD_WAK             3
#define CY327_T2_IDX_RD_STATUS          4
#define CY327_T2_IDX_RD_MR_OLSCG        9
#define CY327_T2_IDX_WR_STATUS_ORI      10
#define CY327_T2_IDX_WR_MR_ORI          11
#define CY327_T2_IDX_LOCK               12
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_TIMSet (original)          
 *-----------------------------------------------------------------*/
#define CY327_TIMSET_LEN                4
#define CY327_TIMSET_SEQ                           \
            CY327_WR_RESP_TIME     |    0x0       ,\
            CY327_RD_REQUHI        |    0x0       ,\
            CY327_RD_REQULO        |    0x0       ,\
            CY327_RD_RESP_TIME     |    0x0
#define CY327_WT_IDX_WR_RESP_TIME       0
#define CY327_WT_IDX_RD_REQUHI          1
#define CY327_WT_IDX_RD_REQULO          2
#define CY327_WT_IDX_RD_RESP_TIME       3
                                                                     
/*-----------------------------------------------------------------* 
 * CY327_WDAGet (original)          
 *-----------------------------------------------------------------*/
#define CY327_WDAGET_LEN                1
#define CY327_WDAGET_SEQ                           \
            CY327_RD_STATUS        |    0x0
#define CY327_WA_IDX_RD_STATUS          0

/**************************************************************************************************/



/**************************************************************************************************/
/* Extern declarations                                                                            */
/**************************************************************************************************/
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_Cy327SpiCom_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon1_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon1OV_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon1SCG_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon1UV_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon2_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon2OV_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon2SCG_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon2UV_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon3_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon3OV_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon3SCG_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMon3UV_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const DSM_DFCType* const DFC_SSpMonOT_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_ASWSet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_CANLockedSet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_DIAGet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_INISet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_NVRrd_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_NVRwr_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_PWRGet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_PWRSet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_QERGet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_RdInit_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_STCGet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_STCSet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_SWRst_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_TI0Set_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_TI1Set_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_TI2Set_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_TIMSet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END
__PRAGMA_USE__hwe__1_5ms__constant__s32__START
extern const Spi_SeqDef_t Cy327_WDAGet_cs;
__PRAGMA_USE__hwe__1_5ms__constant__s32__END

/**************************************************************************************************/


/* _CY327_AUTO_CONF_H */
#endif
