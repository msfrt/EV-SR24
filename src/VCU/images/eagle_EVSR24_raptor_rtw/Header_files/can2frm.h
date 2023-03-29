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
 *    Administrative Information (automatically filled in by [N]estor)   *
 *************************************************************************
 *
 * $Filename__:can2frm.h$
 *
 * $Author____:NESTORADMINSDOM$
 *
 * $Function__:This version is created by migration tool$
 *
 *************************************************************************
 * $Repository:SDOM$
 * $User______:SHA2ABT$
 * $Date______:27.01.2014$
 * $Class_____:SWHDR$
 * $Name______:can2frm$
 * $Variant___:3.0.0$
 * $Revision__:5$
 * $Type______:H$
 * $State_____:AVAILABLE$
 *************************************************************************
 *
 * $FDEF______:$
 *
 *************************************************************************
 * Points to be taken into consideration when/if the H-file is modified:
 *
 * $LinkTo____:$
 *
 *************************************************************************
 * List Of Changes
 *
 * $History
 * 
 * 3.0.0; 5     27.01.2014 SHA2ABT
 *   Added defines for EM_AUX_2
 * 
 * 3.0.0; 4     20.09.2013 SHA2ABT
 *   changes for Ferrari V12
 * 
 * 3.0.0; 3     16.04.2013 SHA2ABT
 *   added MIRR_ASR2, MIRR_ASR11, MIRR_HPU1, MIRR_HPU2
 * 
 * 3.0.0; 2     14.08.2012 SHA2ABT
 *   changes for Maserati - 
 *   added MOF_MSG_DRDEM - FrmBuff_TCM_A7, 
 *   MOF_MSG_TRNSSPD - FrmBuff_TRNS_SPD
 * 
 * 3.0.0; 1     18.01.2012 SHA2ABT
 *   Changes for V12 Hybrid
 * 
 * 3.0.0; 0     13.07.2011 ZIC2SI
 *   initial version for customer 69
 * 
 * $
 *
 *************************************************************************
</RBHead>*/


/************************************************************************/
/*                 Check of system constants used in this module        */
/************************************************************************/
/*{system_constant_check...}*/
#ifndef SY_CANVAR
    #error >>>> 'SY_CANVAR' not defined!
#endif


/************************************************************************/
/*                 Global Definitions                                   */
/************************************************************************/


/* Enumeration of UEKO relevant frames:
*  Care: the order has to be correlated with MO_SWCONF.h
*/
#if (SY_CANVAR == 4) /* Florence CAN */
typedef enum {
    MIRR_STATUS_B_CAN2 = 0,
    MIRR_ASR1,
    MIRR_DCTMOT,
    MIRR_DCTMOT2,
    MIRR_ASR2,
 #if (HEVTYP_SY > 0) /* HYBRID CAN */
    MIRR_ASR10,
    MIRR_EM_AUX1,
    MIRR_EM_AUX2,
    MIRR_EM_MAIN1,
    MIRR_HCU_EM_MAIN,
   #if (TRA_DCT_SY > 0) /* GBX DCT */
    MIRR_DCT1,
   #endif   
    MIRR_ASR11,
    MIRR_HPU1,
    MIRR_HPU2,
 #endif
    /* Number of UEKO relevant frames */
    MIRR_LEN
} t_ueko_frames;
#endif


#if (SY_CANVAR == 5) /* Chrysler Powernet CAN */
typedef enum {
    MIRR_ESP_M156 = 0,
    MIRR_TCM_EngTrq2,
    MIRR_SCCM_CRS_CTRL,
    MIRR_ESP_A1,
    MIRR_TRNS_SPD,
    MIRR_TCM_A7,
    /* Number of UEKO relevant frames */
    MIRR_LEN
} t_ueko_frames;
#endif



/*  type definition for UEKO mirror */
typedef struct {
   uint8      mirdata[8];
} t_mirmsg;

/* UEKO mirror type definition */
typedef struct {
    t_mirmsg    msg[MIRR_LEN];
} t_mirobject;
